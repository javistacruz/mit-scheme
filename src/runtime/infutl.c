/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:39-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define LABEL_1_8 11
#define LABEL_1_9 13
#define LABEL_1_11 15
#define LABEL_1_10 17
#define LABEL_1_13 19
#define LABEL_1_16 21
#define LABEL_1_17 23
#define LABEL_1_15 25
#define LABEL_1_20 27
#define LABEL_1_21 29
#define LABEL_1_19 31
#define LABEL_1_22 33
#define ENVIRONMENT_LABEL_1_3 62
#define DEBUGGING_LABEL_1_2 61
#define OBJECT_1_4 60
#define OBJECT_1_3 59
#define OBJECT_1_2 58
#define OBJECT_1_1 57
#define OBJECT_1_0 56
#define EXECUTE_CACHE_1_23 35
#define EXECUTE_CACHE_1_18 37
#define EXECUTE_CACHE_1_14 39
#define EXECUTE_CACHE_1_12 41
#define FREE_REFERENCE_1_9 44
#define FREE_REFERENCE_1_8 45
#define FREE_REFERENCE_1_7 46
#define FREE_REFERENCE_1_6 47
#define FREE_REFERENCE_1_5 48
#define FREE_REFERENCE_1_4 49
#define FREE_REFERENCE_1_3 50
#define FREE_REFERENCE_1_2 51
#define FREE_REFERENCE_1_1 52
#define FREE_REFERENCE_1_0 53
#define FREE_ASSIGNMENT_1_0 55
#define FREE_REFERENCES_LABEL_1_0 34
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd88;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd87;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd51;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_packageB_14;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_1_16);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_1_17);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_1_20);
      goto label_24;

    case 13:
      current_block = (Rpc - LABEL_1_21);
      goto label_25;

    case 14:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_1_22);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_28)
DEFLABEL (initialize_packageB_14)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_51;
  Wrd6 = Wrd10;

DEFLABEL (label_50)
  (Wrd15.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_49;
  Wrd21 = Wrd25;

DEFLABEL (label_48)
  (Wrd30.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd31.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd40.Obj) = ((Wrd37.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_47;
  Wrd36 = Wrd40;

DEFLABEL (label_46)
  (Wrd45.Obj) = (current_block [OBJECT_1_3]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (Wrd46.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd55.Obj) = ((Wrd52.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_45;
  Wrd51 = Wrd55;

DEFLABEL (label_44)
  (Wrd60.Obj) = (current_block [OBJECT_1_3]);
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd60.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (Wrd61.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (Wrd68.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd60.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  (* (Rhp++)) = (Wrd65.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd72.pObj) = (& (Rhp [-2]));
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd72.pObj)));
  (Wrd73.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd81.Obj) = ((Wrd73.pObj) [0]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if ((Wrd82.uLng) == 50)
    goto label_43;

DEFLABEL (label_42)
  ((Wrd73.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_41)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd89.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd92.Obj) = ((Wrd89.pObj) [0]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if ((Wrd93.uLng) == 50)
    goto label_40;
  Wrd88 = Wrd92;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd88.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_5]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_38;
  Wrd8 = Wrd12;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_6]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_36;
  Wrd14 = Wrd18;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_7]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_34;
  Wrd8 = Wrd12;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_8]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_32;
  Wrd14 = Wrd18;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_19);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_9]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_30;
  Wrd5 = Wrd9;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_22])), (Wrd6.pObj));

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_21])), (Wrd15.pObj));

DEFLABEL (label_25)
  (Wrd14.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_20])), (Wrd9.pObj));

DEFLABEL (label_24)
  (Wrd8.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_17])), (Wrd15.pObj));

DEFLABEL (label_23)
  (Wrd14.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_16])), (Wrd9.pObj));

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_11])), (Wrd89.pObj));

DEFLABEL (label_21)
  (Wrd88.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_43)
  if ((Wrd81.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_42;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_9])), (Wrd73.pObj), (Wrd70.Obj));

DEFLABEL (label_20)
  goto label_41;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd52.pObj));

DEFLABEL (label_19)
  (Wrd51.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd37.pObj));

DEFLABEL (label_18)
  (Wrd36.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd22.pObj));

DEFLABEL (label_17)
  (Wrd21.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_5])), (Wrd7.pObj));

DEFLABEL (label_16)
  (Wrd6.Obj) = Rvl;
  goto label_50;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define ENVIRONMENT_LABEL_2_3 16
#define DEBUGGING_LABEL_2_2 15
#define EXECUTE_CACHE_2_9 9
#define EXECUTE_CACHE_2_8 11
#define EXECUTE_CACHE_2_6 13
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_2_4);
      goto compiled_code_block_dbg_info_4;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_block_dbg_info_7)
DEFLABEL (compiled_code_block_dbg_info_4)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = Rvl;

DEFLABEL (label_9)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (Rsp [3]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd11.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (label_11)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_9 9
#define LABEL_3_13 11
#define LABEL_3_11 13
#define ENVIRONMENT_LABEL_3_3 26
#define DEBUGGING_LABEL_3_2 25
#define EXECUTE_CACHE_3_14 15
#define EXECUTE_CACHE_3_12 17
#define EXECUTE_CACHE_3_10 19
#define EXECUTE_CACHE_3_8 21
#define EXECUTE_CACHE_3_6 23
#define FREE_REFERENCES_LABEL_3_0 14
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_3_4);
      goto read_debugging_info_9;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_debugging_info_12)
DEFLABEL (read_debugging_info_9)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;

DEFLABEL (label_16)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_13);
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_11 9
#define LABEL_4_9 11
#define LABEL_4_14 13
#define LABEL_4_15 15
#define ENVIRONMENT_LABEL_4_3 36
#define DEBUGGING_LABEL_4_2 35
#define OBJECT_4_3 34
#define OBJECT_4_2 33
#define OBJECT_4_1 32
#define OBJECT_4_0 31
#define EXECUTE_CACHE_4_16 17
#define EXECUTE_CACHE_4_13 19
#define EXECUTE_CACHE_4_12 21
#define EXECUTE_CACHE_4_10 23
#define EXECUTE_CACHE_4_8 25
#define EXECUTE_CACHE_4_6 27
#define FREE_REFERENCE_4_0 30
#define FREE_REFERENCES_LABEL_4_0 16
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_4_4);
      goto read_binf_file_11;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_4_14);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_4_15);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_binf_file_16)
DEFLABEL (read_binf_file_11)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

DEFLABEL (label_17)
  (Wrd11.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (Wrd9.Obj) = (current_block [OBJECT_4_1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_4_2]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_21;
  Wrd15 = Wrd19;

DEFLABEL (label_20)
  (Wrd24.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd25.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_19;
  Wrd30 = Wrd34;

DEFLABEL (label_18)
  (Wrd39.Obj) = (current_block [OBJECT_4_3]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd40.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Rsp [1]) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_15])), (Wrd31.pObj));

DEFLABEL (label_14)
  (Wrd30.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_14])), (Wrd16.pObj));

DEFLABEL (label_13)
  (Wrd15.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_8 11
#define LABEL_5_10 13
#define LABEL_5_11 15
#define LABEL_5_9 17
#define LABEL_5_13 19
#define LABEL_5_15 21
#define LABEL_5_16 23
#define LABEL_5_18 25
#define LABEL_5_19 27
#define LABEL_5_20 29
#define ENVIRONMENT_LABEL_5_3 42
#define DEBUGGING_LABEL_5_2 41
#define OBJECT_5_3 40
#define OBJECT_5_2 39
#define OBJECT_5_1 38
#define OBJECT_5_0 37
#define EXECUTE_CACHE_5_17 31
#define EXECUTE_CACHE_5_14 33
#define EXECUTE_CACHE_5_12 35
#define FREE_REFERENCES_LABEL_5_0 30
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd39;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd44;
  machine_word Wrd43;
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
      current_block = (Rpc - LABEL_5_4);
      goto find_alternate_file_type_18;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto loop_16;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_5_10);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_5_11);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_5_15);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_5_16);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_5_18);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_5_19);
      goto label_26;

    case 13:
      current_block = (Rpc - LABEL_5_20);
      goto label_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_alternate_file_type_29)
DEFLABEL (find_alternate_file_type_18)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto loop_16;

DEFLABEL (lambda_30)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_5_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (loop_31)
DEFLABEL (loop_16)
  INTERRUPT_CHECK (26, LABEL_5_6);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_5_1])))
    goto label_32;
  (Wrd43.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd44.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_32)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_51;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_50)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_49;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_48)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_47;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [0]);

DEFLABEL (label_46)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_45;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_44)
  (Wrd42.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_17]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_16);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_40;
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_40;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd39.Lng) > (Wrd41.Lng))
    goto label_37;

DEFLABEL (label_36)
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_35;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_34)
  (Rsp [3]) = (Wrd15.Obj);

DEFLABEL (label_33)
  Rsp = (& (Rsp [3]));
  goto loop_16;

DEFLABEL (label_35)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_26)
  (Wrd15.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_39;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_38)
  (Rsp [3]) = (Wrd25.Obj);
  (Wrd34.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (Rsp [6]) = (Wrd36.Obj);
  goto label_33;

DEFLABEL (label_39)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_27)
  (Wrd25.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto label_37;

DEFLABEL (label_41)
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_43;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_42)
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_16;

DEFLABEL (label_43)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_24)
  (Wrd11.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_22)
  (Wrd26.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_20)
  (Wrd7.Obj) = Rvl;
  goto label_50;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define LABEL_6_10 7
#define LABEL_6_11 9
#define LABEL_6_8 11
#define LABEL_6_12 13
#define LABEL_6_14 15
#define ENVIRONMENT_LABEL_6_3 30
#define DEBUGGING_LABEL_6_2 29
#define EXECUTE_CACHE_6_15 17
#define EXECUTE_CACHE_6_13 19
#define EXECUTE_CACHE_6_9 21
#define EXECUTE_CACHE_6_7 23
#define FREE_REFERENCE_6_0 26
#define FREE_ASSIGNMENT_6_0 28
#define FREE_REFERENCES_LABEL_6_0 16
#define NUMBER_OF_LINKER_SECTIONS_6_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd13;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_6_4);
      goto memoize_debugging_infoB_3;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_6_11);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_6_12);
      goto label_5;

    case 6:
      current_block = (Rpc - LABEL_6_14);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (memoize_debugging_infoB_9)
DEFLABEL (memoize_debugging_infoB_3)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_17;
  Wrd5 = Wrd9;

DEFLABEL (label_16)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_6_0]));
  (Wrd33.Obj) = ((Wrd25.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd25.pObj) [0]) = Rvl;

DEFLABEL (label_13)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_12;
  Wrd12 = Wrd16;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [3]);
  (Rsp [1]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_14])), (Wrd13.pObj));

DEFLABEL (label_6)
  (Wrd12.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_15)
  if ((Wrd33.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_6_11])), (Wrd25.pObj), Rvl);

DEFLABEL (label_7)
  goto label_13;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_12])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_7 5
#define LABEL_7_8 7
#define LABEL_7_5 9
#define LABEL_7_9 11
#define LABEL_7_11 13
#define LABEL_7_10 15
#define ENVIRONMENT_LABEL_7_3 30
#define DEBUGGING_LABEL_7_2 29
#define OBJECT_7_1 28
#define OBJECT_7_0 27
#define EXECUTE_CACHE_7_13 17
#define EXECUTE_CACHE_7_12 19
#define EXECUTE_CACHE_7_6 21
#define FREE_REFERENCE_7_0 24
#define FREE_ASSIGNMENT_7_0 26
#define FREE_REFERENCES_LABEL_7_0 16
#define NUMBER_OF_LINKER_SECTIONS_7_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_7_4);
      goto discard_debugging_infoB_3;

    case 1:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_7_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_2;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto label_5;

    case 5:
      current_block = (Rpc - LABEL_7_11);
      goto label_6;

    case 6:
      current_block = (Rpc - LABEL_7_10);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (discard_debugging_infoB_9)
DEFLABEL (discard_debugging_infoB_3)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (lambda_10)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_7_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_19;
  Wrd5 = Wrd9;

DEFLABEL (label_18)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_13;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_7_1]);
  goto pop_return;

DEFLABEL (label_13)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_17;
  Wrd17 = Wrd21;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_7_0]));
  (Wrd25.Obj) = (current_block [OBJECT_7_0]);
  (Wrd32.Obj) = ((Wrd24.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd24.pObj) [0]) = ((SCHEME_OBJECT) 0);
  goto label_12;

DEFLABEL (label_15)
  if ((Wrd32.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_7_8])), (Wrd24.pObj), (Wrd25.Obj));

DEFLABEL (label_7)
  goto label_12;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_11])), (Wrd18.pObj));

DEFLABEL (label_6)
  (Wrd17.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_9])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_18;

DEFLABEL (lambda_11)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_7_10);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_9 9
#define LABEL_8_11 11
#define TAG_8_12 4
#define LABEL_8_20 13
#define LABEL_8_21 15
#define LABEL_8_22 17
#define LABEL_8_13 19
#define TAG_8_14 8
#define LABEL_8_15 21
#define TAG_8_16 9
#define LABEL_8_25 23
#define LABEL_8_26 25
#define LABEL_8_27 27
#define LABEL_8_17 29
#define TAG_8_18 13
#define LABEL_8_28 31
#define LABEL_8_30 33
#define LABEL_8_31 35
#define LABEL_8_24 37
#define LABEL_8_29 39
#define LABEL_8_33 41
#define ENVIRONMENT_LABEL_8_3 67
#define DEBUGGING_LABEL_8_2 66
#define OBJECT_8_6 65
#define OBJECT_8_5 64
#define OBJECT_8_4 63
#define OBJECT_8_3 62
#define OBJECT_8_2 61
#define OBJECT_8_1 60
#define OBJECT_8_0 59
#define EXECUTE_CACHE_8_32 43
#define EXECUTE_CACHE_8_23 45
#define EXECUTE_CACHE_8_19 47
#define EXECUTE_CACHE_8_10 49
#define EXECUTE_CACHE_8_8 51
#define EXECUTE_CACHE_8_6 53
#define FREE_REFERENCE_8_2 56
#define FREE_REFERENCE_8_1 57
#define FREE_REFERENCE_8_0 58
#define FREE_REFERENCES_LABEL_8_0 42
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd54;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_8_4);
      goto compiled_entry_dbg_object_22;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_8_11);
      goto lambda_36;

    case 5:
      current_block = (Rpc - LABEL_8_20);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_8_21);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_8_22);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_8_13);
      goto lambda_37;

    case 9:
      current_block = (Rpc - LABEL_8_15);
      goto lambda_38;

    case 10:
      current_block = (Rpc - LABEL_8_25);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_8_26);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_8_27);
      goto label_29;

    case 13:
      current_block = (Rpc - LABEL_8_17);
      goto lambda_39;

    case 14:
      current_block = (Rpc - LABEL_8_28);
      goto label_30;

    case 15:
      current_block = (Rpc - LABEL_8_30);
      goto label_31;

    case 16:
      current_block = (Rpc - LABEL_8_31);
      goto label_32;

    case 17:
      current_block = (Rpc - LABEL_8_24);
      goto continuation_8;

    case 18:
      current_block = (Rpc - LABEL_8_29);
      goto continuation_14;

    case 19:
      current_block = (Rpc - LABEL_8_33);
      goto label_33;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_entry_dbg_object_35)
DEFLABEL (compiled_entry_dbg_object_22)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  if ((Wrd8.Obj) == (current_block [OBJECT_8_0]))
    goto label_41;
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_40;

DEFLABEL (label_41)
  (Wrd12.Obj) = (current_block [OBJECT_8_1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_40)
DEFLABEL (label_43)
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_11])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = Rvl;
  (* (--Rsp)) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_13])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  ((Wrd16.pObj) [2]) = (Wrd7.Obj);
  (Rsp [5]) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_15])));
  Rhp += 3;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd26 = Wrd21;
  ((Wrd26.pObj) [2]) = (Wrd12.Obj);
  ((Wrd26.pObj) [3]) = Rvl;
  ((Wrd26.pObj) [4]) = (Wrd7.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_17])));
  Rhp += 3;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd36 = Wrd31;
  ((Wrd36.pObj) [2]) = (Wrd12.Obj);
  ((Wrd36.pObj) [3]) = Rvl;
  ((Wrd36.pObj) [4]) = (Wrd7.Obj);
  (Rsp [4]) = (Wrd30.Obj);
  (Rsp [1]) = (Wrd28.Obj);
  (Rsp [3]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_19]));

DEFLABEL (label_42)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_8_11);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_49;
  Wrd5 = Wrd9;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_47;
  Wrd11 = Wrd15;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [3]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_45;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_45;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_44)
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [2]);
  (Rsp [3]) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_23]));

DEFLABEL (label_45)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [3]);
  (Wrd37.Obj) = (current_block [OBJECT_8_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_22]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_3]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_21])), (Wrd12.pObj));

DEFLABEL (label_25)
  (Wrd11.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_20])), (Wrd6.pObj));

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_48;

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_8_13);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  goto lambda_6;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_8_15);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_56;
  Wrd11 = Wrd15;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_54;
  Wrd17 = Wrd21;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd36.Obj) = (Rsp [4]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [3]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_52;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd35.Lng))))
    goto label_52;
  (Wrd27.Obj) = ((Wrd33.pObj) [4]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_51)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_8_24);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [4]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_6;

DEFLABEL (label_52)
  (Wrd41.Obj) = (Rsp [4]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [3]);
  (Wrd43.Obj) = (current_block [OBJECT_8_4]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_27]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_3]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_26])), (Wrd18.pObj));

DEFLABEL (label_28)
  (Wrd17.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_25])), (Wrd12.pObj));

DEFLABEL (label_27)
  (Wrd11.Obj) = Rvl;
  goto label_55;

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_8_17);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_65;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_65;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_64)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_29]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_63;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd40.Lng))))
    goto label_63;
  (Wrd32.Obj) = ((Wrd38.pObj) [3]);

DEFLABEL (label_62)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_61;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [1]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_60)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_32]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_8_29);
  (Wrd5.Obj) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_59;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_59;
  if ((Wrd8.Obj) == Rvl)
    goto label_58;

DEFLABEL (label_57)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [4]);
  (Rsp [1]) = (Wrd19.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_6;

DEFLABEL (label_58)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_33]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  goto label_58;

DEFLABEL (label_61)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_31]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (current_block [OBJECT_8_2]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_30]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_3]), 2);

DEFLABEL (label_31)
  (Wrd32.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [3]);
  (Wrd25.Obj) = (current_block [OBJECT_8_5]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_28]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_3]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_64;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_9 9
#define ENVIRONMENT_LABEL_9_3 21
#define DEBUGGING_LABEL_9_2 20
#define OBJECT_9_0 19
#define EXECUTE_CACHE_9_11 11
#define EXECUTE_CACHE_9_10 13
#define EXECUTE_CACHE_9_8 15
#define EXECUTE_CACHE_9_6 17
#define FREE_REFERENCES_LABEL_9_0 10
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_9_4);
      goto compiled_entry_block_3;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_entry_block_6)
DEFLABEL (compiled_entry_block_3)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define ENVIRONMENT_LABEL_10_3 17
#define DEBUGGING_LABEL_10_2 16
#define OBJECT_10_0 15
#define EXECUTE_CACHE_10_9 9
#define EXECUTE_CACHE_10_8 11
#define EXECUTE_CACHE_10_6 13
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto compiled_entry_offset_2;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_entry_offset_5)
DEFLABEL (compiled_entry_offset_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

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
infutl_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto compiled_entry_filename_and_index_1;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_entry_filename_and_index_4)
DEFLABEL (compiled_entry_filename_and_index_1)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_8 7
#define LABEL_12_7 9
#define LABEL_12_11 11
#define LABEL_12_10 13
#define LABEL_12_13 15
#define LABEL_12_15 17
#define TAG_12_16 7
#define ENVIRONMENT_LABEL_12_3 28
#define DEBUGGING_LABEL_12_2 27
#define EXECUTE_CACHE_12_14 19
#define EXECUTE_CACHE_12_12 21
#define EXECUTE_CACHE_12_9 23
#define EXECUTE_CACHE_12_6 25
#define FREE_REFERENCES_LABEL_12_0 18
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_12_4);
      goto compiled_code_block_filename_and_index_12;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto lambda_1;

    case 4:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_12_10);
      goto lambda_4;

    case 6:
      current_block = (Rpc - LABEL_12_13);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_12_15);
      goto lambda_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_block_filename_and_index_15)
DEFLABEL (compiled_code_block_filename_and_index_12)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_20;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12_11);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12_13);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_15])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  ((Wrd11.pObj) [2]) = Rvl;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_16)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_12_7);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_17)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_12_10);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_12_15);

DEFLABEL (lambda_8)
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

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define ENVIRONMENT_LABEL_13_3 15
#define DEBUGGING_LABEL_13_2 14
#define EXECUTE_CACHE_13_7 9
#define FREE_REFERENCE_13_1 12
#define FREE_REFERENCE_13_0 13
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_13_4);
      goto dbg_labels_find_offset_0;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_labels_find_offset_5)
DEFLABEL (dbg_labels_find_offset_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_7;
  Wrd13 = Wrd17;

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_6])), (Wrd14.pObj));

DEFLABEL (label_3)
  (Wrd13.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_9 7
#define LABEL_14_12 9
#define LABEL_14_7 11
#define LABEL_14_11 13
#define LABEL_14_15 15
#define LABEL_14_13 17
#define LABEL_14_19 19
#define LABEL_14_14 21
#define ENVIRONMENT_LABEL_14_3 43
#define DEBUGGING_LABEL_14_2 42
#define OBJECT_14_4 41
#define OBJECT_14_3 40
#define OBJECT_14_2 39
#define OBJECT_14_1 38
#define OBJECT_14_0 37
#define EXECUTE_CACHE_14_20 23
#define EXECUTE_CACHE_14_18 25
#define EXECUTE_CACHE_14_17 27
#define EXECUTE_CACHE_14_16 29
#define EXECUTE_CACHE_14_10 31
#define EXECUTE_CACHE_14_8 33
#define EXECUTE_CACHE_14_6 35
#define FREE_REFERENCES_LABEL_14_0 22
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_14_4);
      goto fasload_update_debugging_infoB_13;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_9;

    case 3:
      current_block = (Rpc - LABEL_14_12);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_14_11);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_14_15);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_14_13);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_14_19);
      goto label_15;

    case 9:
      current_block = (Rpc - LABEL_14_14);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fasload_update_debugging_infoB_17)
DEFLABEL (fasload_update_debugging_infoB_13)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 10)
    goto label_19;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_18;

DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;

DEFLABEL (label_18)
DEFLABEL (label_20)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14_2]);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_17]));

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_23;

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_14_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_15]))));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_24)
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  goto label_24;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14_13);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_26;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_25)
  (Wrd21.Obj) = (current_block [OBJECT_14_4]);
  (Rsp [2]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_17]));

DEFLABEL (label_26)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_14_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define LABEL_15_9 9
#define LABEL_15_11 11
#define ENVIRONMENT_LABEL_15_3 25
#define DEBUGGING_LABEL_15_2 24
#define OBJECT_15_0 23
#define EXECUTE_CACHE_15_13 13
#define EXECUTE_CACHE_15_12 15
#define EXECUTE_CACHE_15_10 17
#define EXECUTE_CACHE_15_8 19
#define EXECUTE_CACHE_15_6 21
#define FREE_REFERENCES_LABEL_15_0 12
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_15_4);
      goto fasload_update_internal_7;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_15_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_15_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fasload_update_internal_10)
DEFLABEL (fasload_update_internal_7)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  Rvl = (current_block [OBJECT_15_0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  Rvl = (current_block [OBJECT_15_0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_11);
  (Wrd5.Obj) = (Rsp [4]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [6]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd10.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_13]));

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_15_0]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_8 5
#define LABEL_16_11 7
#define LABEL_16_14 9
#define LABEL_16_5 11
#define LABEL_16_6 13
#define LABEL_16_17 15
#define LABEL_16_18 17
#define LABEL_16_15 19
#define LABEL_16_20 21
#define LABEL_16_12 23
#define LABEL_16_21 25
#define LABEL_16_9 27
#define LABEL_16_23 29
#define ENVIRONMENT_LABEL_16_3 46
#define DEBUGGING_LABEL_16_2 45
#define EXECUTE_CACHE_16_24 31
#define EXECUTE_CACHE_16_22 33
#define EXECUTE_CACHE_16_19 35
#define EXECUTE_CACHE_16_16 37
#define EXECUTE_CACHE_16_13 39
#define EXECUTE_CACHE_16_10 41
#define EXECUTE_CACHE_16_7 43
#define FREE_REFERENCES_LABEL_16_0 30
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_16_4);
      goto fasload_compute_pathname_14;

    case 1:
      current_block = (Rpc - LABEL_16_8);
      goto continuation_11;

    case 2:
      current_block = (Rpc - LABEL_16_11);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_16_14);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_16_6);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_16_17);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_16_18);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_16_15);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_16_20);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_16_12);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_16_21);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_16_23);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fasload_compute_pathname_17)
DEFLABEL (fasload_compute_pathname_14)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_16_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_19]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_16_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_22]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_16_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_22]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_16_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_13]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_16_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_22]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16_9);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_24]));

DEFLABEL (label_18)
  (Wrd5.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [3]));

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Wrd5.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_9 9
#define LABEL_17_11 11
#define LABEL_17_13 13
#define LABEL_17_8 15
#define LABEL_17_7 17
#define LABEL_17_16 19
#define LABEL_17_14 21
#define ENVIRONMENT_LABEL_17_3 37
#define DEBUGGING_LABEL_17_2 36
#define OBJECT_17_2 35
#define OBJECT_17_1 34
#define OBJECT_17_0 33
#define EXECUTE_CACHE_17_18 23
#define EXECUTE_CACHE_17_17 25
#define EXECUTE_CACHE_17_15 27
#define EXECUTE_CACHE_17_12 29
#define EXECUTE_CACHE_17_10 31
#define FREE_REFERENCES_LABEL_17_0 22
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_17_4);
      goto fasload_update_sub_blocks_15;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto do_loop_12;

    case 3:
      current_block = (Rpc - LABEL_17_9);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_17_11);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_17_13);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_17_16);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_17_14);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fasload_update_sub_blocks_20)
DEFLABEL (fasload_update_sub_blocks_15)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_23;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto do_loop_12;

DEFLABEL (label_23)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (do_loop_21)
DEFLABEL (do_loop_12)
  INTERRUPT_CHECK (26, LABEL_17_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_24;
  Rvl = (current_block [OBJECT_17_1]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_28;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_28;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_28;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd17.pObj) = (& ((Wrd24.pObj) [(Wrd14.Lng)]));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_17_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_17_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_17_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd31.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [8]);
  (Rsp [1]) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (label_25)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_26)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  goto do_loop_12;

DEFLABEL (label_28)
  (Wrd29.Obj) = (Rsp [4]);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_17_7);
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define LABEL_18_7 9
#define LABEL_18_11 11
#define TAG_18_12 4
#define LABEL_18_9 13
#define TAG_18_10 5
#define LABEL_18_15 15
#define LABEL_18_16 17
#define LABEL_18_17 19
#define ENVIRONMENT_LABEL_18_3 33
#define DEBUGGING_LABEL_18_2 32
#define OBJECT_18_0 31
#define EXECUTE_CACHE_18_14 21
#define EXECUTE_CACHE_18_13 23
#define EXECUTE_CACHE_18_8 25
#define FREE_REFERENCE_18_0 28
#define FREE_ASSIGNMENT_18_0 30
#define FREE_REFERENCES_LABEL_18_0 20
#define NUMBER_OF_LINKER_SECTIONS_18_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  machine_word Wrd7;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_18_4);
      goto with_directory_rewriting_rule_13;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_18_11);
      goto lambda_22;

    case 5:
      current_block = (Rpc - LABEL_18_9);
      goto swapB_21;

    case 6:
      current_block = (Rpc - LABEL_18_15);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_18_16);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_18_17);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_directory_rewriting_rule_20)
DEFLABEL (with_directory_rewriting_rule_13)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_24;
  Wrd5 = Wrd9;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_6);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_9])));
  Rhp += 1;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd26.pObj) = (& (Rhp [-1]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd26.pObj)));
  (Rsp [1]) = (Wrd27.Obj);
  ((Wrd29.pObj) [2]) = (Wrd27.Obj);
  (Rsp [2]) = (Wrd30.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_11])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd18 = Wrd17;
  (Wrd19.Obj) = (Rsp [4]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Rsp [3]) = (Wrd16.Obj);
  (Rsp [4]) = (Wrd30.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_13]));

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_5])), (Wrd6.pObj));

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_23;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_18_11);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_21)
  CLOSURE_HEADER (LABEL_18_9);

DEFLABEL (swapB_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  Wrd5 = Wrd9;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_28)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_25)
  Rvl = (current_block [OBJECT_18_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_27)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_17])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_18)
  goto label_25;

DEFLABEL (label_30)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_16])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_17)
  goto label_28;

DEFLABEL (label_33)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_32;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_15])), (Wrd6.pObj));

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_9 5
#define LABEL_19_10 7
#define LABEL_19_11 9
#define LABEL_19_5 11
#define LABEL_19_6 13
#define LABEL_19_14 15
#define LABEL_19_7 17
#define LABEL_19_12 19
#define TAG_19_13 8
#define LABEL_19_17 21
#define LABEL_19_20 23
#define LABEL_19_19 25
#define ENVIRONMENT_LABEL_19_3 45
#define DEBUGGING_LABEL_19_2 44
#define OBJECT_19_2 43
#define OBJECT_19_1 42
#define OBJECT_19_0 41
#define EXECUTE_CACHE_19_21 27
#define EXECUTE_CACHE_19_18 29
#define EXECUTE_CACHE_19_16 31
#define EXECUTE_CACHE_19_15 33
#define EXECUTE_CACHE_19_8 35
#define FREE_REFERENCE_19_0 38
#define FREE_ASSIGNMENT_19_0 40
#define FREE_REFERENCES_LABEL_19_0 26
#define NUMBER_OF_LINKER_SECTIONS_19_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto add_directory_rewriting_ruleB_12;

    case 1:
      current_block = (Rpc - LABEL_19_9);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_19_10);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_19_11);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_19_14);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_0;

    case 8:
      current_block = (Rpc - LABEL_19_12);
      goto lambda_20;

    case 9:
      current_block = (Rpc - LABEL_19_17);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_19_20);
      goto label_17;

    case 11:
      current_block = (Rpc - LABEL_19_19);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_directory_rewriting_ruleB_19)
DEFLABEL (add_directory_rewriting_ruleB_12)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_12])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_30;
  Wrd12 = Wrd16;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_19_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd9.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd15.uLng) == 1)
    goto label_21;
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 2);

DEFLABEL (label_21)
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  ((Wrd12.pObj) [1]) = (Wrd9.Obj);

DEFLABEL (label_23)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_19_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_28;
  Wrd17 = Wrd21;

DEFLABEL (label_27)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_0]));
  (Wrd39.Obj) = ((Wrd31.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_26;

DEFLABEL (label_25)
  ((Wrd31.pObj) [0]) = (Wrd28.Obj);
  goto label_23;

DEFLABEL (label_26)
  if ((Wrd39.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_25;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_11])), (Wrd31.pObj), (Wrd28.Obj));

DEFLABEL (label_16)
  goto label_23;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_10])), (Wrd18.pObj));

DEFLABEL (label_15)
  (Wrd17.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_14])), (Wrd13.pObj));

DEFLABEL (label_14)
  (Wrd12.Obj) = Rvl;
  goto label_29;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_5);
  goto label_22;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_19_12);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_19_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_32;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_19);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_21]));

DEFLABEL (label_32)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_20]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_8 5
#define LABEL_20_10 7
#define LABEL_20_5 9
#define LABEL_20_12 11
#define LABEL_20_17 13
#define LABEL_20_6 15
#define TAG_20_7 6
#define LABEL_20_20 17
#define LABEL_20_13 19
#define LABEL_20_14 21
#define LABEL_20_15 23
#define LABEL_20_16 25
#define LABEL_20_19 27
#define LABEL_20_22 29
#define LABEL_20_24 31
#define LABEL_20_26 33
#define ENVIRONMENT_LABEL_20_3 59
#define DEBUGGING_LABEL_20_2 58
#define OBJECT_20_2 57
#define OBJECT_20_1 56
#define OBJECT_20_0 55
#define EXECUTE_CACHE_20_29 35
#define EXECUTE_CACHE_20_28 37
#define EXECUTE_CACHE_20_27 39
#define EXECUTE_CACHE_20_25 41
#define EXECUTE_CACHE_20_23 43
#define EXECUTE_CACHE_20_21 45
#define EXECUTE_CACHE_20_18 47
#define EXECUTE_CACHE_20_11 49
#define EXECUTE_CACHE_20_9 51
#define FREE_REFERENCE_20_0 54
#define FREE_REFERENCES_LABEL_20_0 34
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd41;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_20_4);
      goto rewrite_directory_16;

    case 1:
      current_block = (Rpc - LABEL_20_8);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_20_12);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_20_17);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_20_6);
      goto lambda_24;

    case 7:
      current_block = (Rpc - LABEL_20_20);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_20_13);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_20_14);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_20_15);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_20_16);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_20_19);
      goto continuation_2;

    case 13:
      current_block = (Rpc - LABEL_20_22);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_20_24);
      goto continuation_7;

    case 15:
      current_block = (Rpc - LABEL_20_26);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rewrite_directory_23)
DEFLABEL (rewrite_directory_16)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_32;
  Wrd12 = Wrd16;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_29;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_28)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.Obj) = (Rsp [6]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_27;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_20_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_25]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_20_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_20_24);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_28]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_20_14);
  (Wrd9.Obj) = (current_block [OBJECT_20_2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_22]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_23]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_20_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_27]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_20_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_21]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_20_10);
  (Wrd41.Obj) = Rvl;

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd41.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (label_27)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  (Wrd41.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  goto label_25;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_8])), (Wrd13.pObj));

DEFLABEL (label_18)
  (Wrd12.Obj) = Rvl;
  goto label_31;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_20_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_34;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_19);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_26]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_18]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_26);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_29]));

DEFLABEL (label_34)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_20]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_7 9
#define LABEL_21_8 11
#define LABEL_21_9 13
#define LABEL_21_11 15
#define LABEL_21_12 17
#define LABEL_21_10 19
#define LABEL_21_14 21
#define LABEL_21_15 23
#define ENVIRONMENT_LABEL_21_3 32
#define DEBUGGING_LABEL_21_2 31
#define OBJECT_21_3 30
#define OBJECT_21_2 29
#define OBJECT_21_1 28
#define OBJECT_21_0 27
#define EXECUTE_CACHE_21_13 25
#define FREE_REFERENCES_LABEL_21_0 24
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_21_4);
      goto directory_prefixP_17;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_21_8);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_21_9);
      goto loop_15;

    case 6:
      current_block = (Rpc - LABEL_21_11);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_21_12);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_21_10);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_21_14);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_21_15);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (directory_prefixP_28)
DEFLABEL (directory_prefixP_17)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_31;

DEFLABEL (label_30)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_30;
  if (! ((Wrd10.uLng) == 1))
    goto label_39;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_38)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_37;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_36)
  (Wrd29.Obj) = (* (Rsp++));
  if (! ((Wrd20.Obj) == (Wrd29.Obj)))
    goto label_30;
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_35;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_34)
  (Rsp [0]) = (Wrd30.Obj);
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_33;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_32)
  (Rsp [1]) = (Wrd39.Obj);
  goto loop_15;

DEFLABEL (label_33)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_22)
  (Wrd39.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_21)
  (Wrd30.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_20)
  (Wrd20.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (loop_29)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_21_9);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_21_2]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_51;
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == (Wrd6.Obj))
    goto label_49;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_48;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_47)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_46;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_13]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_21_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_40;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_44;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_43)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_42;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_41)
  (Rsp [1]) = (Wrd16.Obj);
  goto loop_15;

DEFLABEL (label_42)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_26)
  (Wrd16.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_25)
  (Wrd7.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_50)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_51)
  Rvl = (current_block [OBJECT_21_3]);
  goto label_50;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 12
#define DEBUGGING_LABEL_22_2 11
#define EXECUTE_CACHE_22_7 7
#define EXECUTE_CACHE_22_6 9
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto canonicalize_debug_info_filename_1;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_debug_info_filename_4)
DEFLABEL (canonicalize_debug_info_filename_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_8 5
#define LABEL_23_5 7
#define LABEL_23_6 9
#define ENVIRONMENT_LABEL_23_3 23
#define DEBUGGING_LABEL_23_2 22
#define OBJECT_23_0 21
#define EXECUTE_CACHE_23_12 11
#define EXECUTE_CACHE_23_11 13
#define EXECUTE_CACHE_23_10 15
#define EXECUTE_CACHE_23_9 17
#define EXECUTE_CACHE_23_7 19
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_23_4);
      goto canonicalize_debug_info_pathname_5;

    case 1:
      current_block = (Rpc - LABEL_23_8);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_23_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_debug_info_pathname_8)
DEFLABEL (canonicalize_debug_info_pathname_5)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_12]));

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_8);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_9]));

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define LABEL_24_8 9
#define LABEL_24_9 11
#define LABEL_24_10 13
#define LABEL_24_12 15
#define LABEL_24_13 17
#define LABEL_24_11 19
#define LABEL_24_15 21
#define LABEL_24_16 23
#define ENVIRONMENT_LABEL_24_3 37
#define DEBUGGING_LABEL_24_2 36
#define OBJECT_24_2 35
#define OBJECT_24_1 34
#define OBJECT_24_0 33
#define EXECUTE_CACHE_24_18 25
#define EXECUTE_CACHE_24_17 27
#define EXECUTE_CACHE_24_14 29
#define EXECUTE_CACHE_24_6 31
#define FREE_REFERENCES_LABEL_24_0 24
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd65;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_24_4);
      goto Z__find_library_directory_16;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_24_10);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_24_12);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_24_13);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_24_11);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_24_15);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_24_16);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__find_library_directory_25)
DEFLABEL (Z__find_library_directory_16)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Rsp [0]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.uLng) == 1)
    goto label_27;

DEFLABEL (label_26)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_27)
  if (! ((Wrd7.uLng) == 1))
    goto label_40;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_39)
  if (! ((Wrd10.Obj) == (current_block [OBJECT_24_1])))
    goto label_26;
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_38;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_37)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_26;
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_36;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_35)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_34;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [0]);

DEFLABEL (label_33)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd46.uLng) == 30))
    goto label_26;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_32;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd50.Obj) = ((Wrd52.pObj) [1]);

DEFLABEL (label_31)
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_30;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_14]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_24_11);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_28;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_24_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_18]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_24_15);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_17]));

DEFLABEL (label_30)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_13]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 1);

DEFLABEL (label_22)
  (Wrd50.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_21)
  (Wrd39.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 1);

DEFLABEL (label_20)
  (Wrd30.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 1);

DEFLABEL (label_19)
  (Wrd20.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_18)
  (Wrd10.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define ENVIRONMENT_LABEL_25_3 10
#define DEBUGGING_LABEL_25_2 9
#define OBJECT_25_2 8
#define OBJECT_25_1 7
#define OBJECT_25_0 6
#define FREE_REFERENCES_LABEL_25_0 6
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_25_4);
      goto dbg_block_layout_first_offset_3;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_block_layout_first_offset_7)
DEFLABEL (dbg_block_layout_first_offset_3)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_12;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_12;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_11)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd22.uLng) == 1)
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd22.uLng) == 1)
    goto label_10;
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 1);

DEFLABEL (label_10)
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd27.pObj) [0]);
  goto label_8;

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_25_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 10
#define DEBUGGING_LABEL_26_2 9
#define OBJECT_26_2 8
#define OBJECT_26_1 7
#define OBJECT_26_0 6
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_26_4);
      goto dbg_block_layout_vector_3;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_block_layout_vector_7)
DEFLABEL (dbg_block_layout_vector_3)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_12;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_12;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_11)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd22.uLng) == 1)
    goto label_9;
  Rvl = (Wrd5.Obj);

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd22.uLng) == 1)
    goto label_10;
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 1);

DEFLABEL (label_10)
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd27.pObj) [1]);
  goto label_8;

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_26_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_5 3
#define LABEL_27_4 5
#define LABEL_27_6 7
#define ENVIRONMENT_LABEL_27_3 16
#define DEBUGGING_LABEL_27_2 15
#define OBJECT_27_3 14
#define OBJECT_27_2 13
#define OBJECT_27_1 12
#define OBJECT_27_0 11
#define EXECUTE_CACHE_27_7 9
#define FREE_REFERENCES_LABEL_27_0 8
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_27_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_27_4);
      goto dbg_block_dynamic_link_index_4;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_block_dynamic_link_index_8)
DEFLABEL (dbg_block_dynamic_link_index_4)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_13;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_13;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_12)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 1)
    goto label_10;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_9)
  (Wrd28.Obj) = (current_block [OBJECT_27_3]);
  (Rsp [1]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (label_10)
  if ((Wrd25.uLng) == 1)
    goto label_11;
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_11)
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd30.Obj);
  goto label_9;

DEFLABEL (label_13)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_27_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_5 3
#define LABEL_28_4 5
#define LABEL_28_6 7
#define ENVIRONMENT_LABEL_28_3 16
#define DEBUGGING_LABEL_28_2 15
#define OBJECT_28_3 14
#define OBJECT_28_2 13
#define OBJECT_28_1 12
#define OBJECT_28_0 11
#define EXECUTE_CACHE_28_7 9
#define FREE_REFERENCES_LABEL_28_0 8
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_28_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_28_4);
      goto dbg_block_ic_parent_index_4;

    case 2:
      current_block = (Rpc - LABEL_28_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_block_ic_parent_index_8)
DEFLABEL (dbg_block_ic_parent_index_4)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_13;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_13;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_12)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 1)
    goto label_10;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_9)
  (Wrd28.Obj) = (current_block [OBJECT_28_3]);
  (Rsp [1]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

DEFLABEL (label_10)
  if ((Wrd25.uLng) == 1)
    goto label_11;
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (label_11)
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd30.Obj);
  goto label_9;

DEFLABEL (label_13)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_28_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_5 3
#define LABEL_29_4 5
#define LABEL_29_6 7
#define ENVIRONMENT_LABEL_29_3 16
#define DEBUGGING_LABEL_29_2 15
#define OBJECT_29_3 14
#define OBJECT_29_2 13
#define OBJECT_29_1 12
#define OBJECT_29_0 11
#define EXECUTE_CACHE_29_7 9
#define FREE_REFERENCES_LABEL_29_0 8
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_29_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_29_4);
      goto dbg_block_normal_closure_index_4;

    case 2:
      current_block = (Rpc - LABEL_29_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_block_normal_closure_index_8)
DEFLABEL (dbg_block_normal_closure_index_4)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_13;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_13;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_12)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 1)
    goto label_10;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_9)
  (Wrd28.Obj) = (current_block [OBJECT_29_3]);
  (Rsp [1]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (label_10)
  if ((Wrd25.uLng) == 1)
    goto label_11;
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 1);

DEFLABEL (label_11)
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd30.Obj);
  goto label_9;

DEFLABEL (label_13)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_29_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_5 3
#define LABEL_30_4 5
#define LABEL_30_6 7
#define ENVIRONMENT_LABEL_30_3 16
#define DEBUGGING_LABEL_30_2 15
#define OBJECT_30_3 14
#define OBJECT_30_2 13
#define OBJECT_30_1 12
#define OBJECT_30_0 11
#define EXECUTE_CACHE_30_7 9
#define FREE_REFERENCES_LABEL_30_0 8
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_30_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_30_4);
      goto dbg_block_return_address_index_4;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_block_return_address_index_8)
DEFLABEL (dbg_block_return_address_index_4)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_13;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_13;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_12)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 1)
    goto label_10;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_9)
  (Wrd28.Obj) = (current_block [OBJECT_30_3]);
  (Rsp [1]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (label_10)
  if ((Wrd25.uLng) == 1)
    goto label_11;
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_11)
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd30.Obj);
  goto label_9;

DEFLABEL (label_13)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_30_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_5 3
#define LABEL_31_4 5
#define LABEL_31_6 7
#define ENVIRONMENT_LABEL_31_3 16
#define DEBUGGING_LABEL_31_2 15
#define OBJECT_31_3 14
#define OBJECT_31_2 13
#define OBJECT_31_1 12
#define OBJECT_31_0 11
#define EXECUTE_CACHE_31_7 9
#define FREE_REFERENCES_LABEL_31_0 8
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_31_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_31_4);
      goto dbg_block_static_link_index_4;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_block_static_link_index_8)
DEFLABEL (dbg_block_static_link_index_4)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_13;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_13;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_12)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 1)
    goto label_10;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_9)
  (Wrd28.Obj) = (current_block [OBJECT_31_3]);
  (Rsp [1]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (label_10)
  if ((Wrd25.uLng) == 1)
    goto label_11;
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_11)
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd30.Obj);
  goto label_9;

DEFLABEL (label_13)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_31_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_5 3
#define LABEL_32_4 5
#define LABEL_32_6 7
#define LABEL_32_7 9
#define LABEL_32_8 11
#define LABEL_32_9 13
#define LABEL_32_10 15
#define LABEL_32_11 17
#define LABEL_32_13 19
#define LABEL_32_14 21
#define ENVIRONMENT_LABEL_32_3 34
#define DEBUGGING_LABEL_32_2 33
#define OBJECT_32_7 32
#define OBJECT_32_6 31
#define OBJECT_32_5 30
#define OBJECT_32_4 29
#define OBJECT_32_3 28
#define OBJECT_32_2 27
#define OBJECT_32_1 26
#define OBJECT_32_0 25
#define EXECUTE_CACHE_32_12 23
#define FREE_REFERENCES_LABEL_32_0 22
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd45;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_32_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_32_4);
      goto dbg_block_find_name_17;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_32_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_32_8);
      goto loop_13;

    case 5:
      current_block = (Rpc - LABEL_32_9);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_32_10);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_32_11);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_32_13);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_32_14);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_block_find_name_26)
DEFLABEL (dbg_block_find_name_17)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_34;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_34;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_33)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 1)
    goto label_31;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_30)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_29;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Obj) = (MAKE_OBJECT (26, (Wrd31.uLng)));
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_28)
  (Wrd39.Obj) = (current_block [OBJECT_32_4]);
  (* (--Rsp)) = (Wrd39.Obj);
  goto loop_13;

DEFLABEL (label_29)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_3]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  if ((Wrd25.uLng) == 1)
    goto label_32;
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_32)
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd41.Obj);
  goto label_30;

DEFLABEL (label_34)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_32_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (loop_27)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_32_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_48;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_48;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd43.Lng) < (Wrd45.Lng))
    goto label_36;

DEFLABEL (label_35)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_47;
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_47;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd26.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_47;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd23.Obj));
  (Wrd21.pObj) = (& ((Wrd28.pObj) [(Wrd18.Lng)]));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_46)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_11]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_32_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_44;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_44;
  (Wrd7.Obj) = ((Wrd13.pObj) [2]);

DEFLABEL (label_43)
  (Wrd25.Obj) = (Rsp [5]);
  if ((Wrd25.Obj) == (Wrd7.Obj))
    goto label_38;
  (Wrd24.Obj) = (current_block [OBJECT_32_7]);
  goto label_37;

DEFLABEL (label_38)
  (Wrd24.Obj) = (current_block [OBJECT_32_6]);

DEFLABEL (label_37)
DEFLABEL (label_42)
  Rsp = (& (Rsp [1]));
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_41;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd34.Lng) = ((Wrd36.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd34.Lng)))
    goto label_41;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd34.Lng));

DEFLABEL (label_40)
  (Rsp [0]) = (Wrd31.Obj);
  goto loop_13;

DEFLABEL (label_41)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_14]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_24)
  (Wrd31.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_44)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_32_5]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_23)
  (Wrd7.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_45)
  Rsp = (& (Rsp [1]));
  goto label_39;

DEFLABEL (label_47)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_48)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_36;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_6 5
#define LABEL_33_5 7
#define LABEL_33_8 9
#define LABEL_33_9 11
#define ENVIRONMENT_LABEL_33_3 24
#define DEBUGGING_LABEL_33_2 23
#define OBJECT_33_1 22
#define OBJECT_33_0 21
#define EXECUTE_CACHE_33_11 13
#define EXECUTE_CACHE_33_10 15
#define EXECUTE_CACHE_33_7 17
#define FREE_REFERENCE_33_0 20
#define FREE_REFERENCES_LABEL_33_0 12
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_33_4);
      goto compiled_procedure_name_6;

    case 1:
      current_block = (Rpc - LABEL_33_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_33_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_33_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_procedure_name_11)
DEFLABEL (compiled_procedure_name_6)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_17;
  Wrd8 = Wrd12;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 10))
    goto label_15;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_15;
  (Wrd8.Obj) = ((Wrd14.pObj) [5]);

DEFLABEL (label_14)
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_11]));

DEFLABEL (label_15)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_33_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_6])), (Wrd9.pObj));

DEFLABEL (label_8)
  (Wrd8.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_6 5
#define LABEL_34_5 7
#define LABEL_34_8 9
#define ENVIRONMENT_LABEL_34_3 19
#define DEBUGGING_LABEL_34_2 18
#define OBJECT_34_0 17
#define EXECUTE_CACHE_34_9 11
#define EXECUTE_CACHE_34_7 13
#define FREE_REFERENCE_34_0 16
#define FREE_REFERENCES_LABEL_34_0 10
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_34_4);
      goto special_form_procedure_nameP_3;

    case 1:
      current_block = (Rpc - LABEL_34_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_34_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (special_form_procedure_nameP_8)
DEFLABEL (special_form_procedure_nameP_3)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_13;
  Wrd8 = Wrd12;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_11;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

DEFLABEL (label_11)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_6])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define ENVIRONMENT_LABEL_35_3 12
#define DEBUGGING_LABEL_35_2 11
#define OBJECT_35_1 10
#define OBJECT_35_0 9
#define EXECUTE_CACHE_35_6 7
#define FREE_REFERENCES_LABEL_35_0 6
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_35_4);
      goto compiled_procedure_lambda_2;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_procedure_lambda_5)
DEFLABEL (compiled_procedure_lambda_2)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_35_0]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd21.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_8)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd19.Lng))))
    goto label_7;
  Rvl = ((Wrd17.pObj) [11]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_8 7
#define LABEL_36_10 9
#define LABEL_36_7 11
#define ENVIRONMENT_LABEL_36_3 22
#define DEBUGGING_LABEL_36_2 21
#define OBJECT_36_1 20
#define OBJECT_36_0 19
#define EXECUTE_CACHE_36_11 13
#define EXECUTE_CACHE_36_9 15
#define EXECUTE_CACHE_36_6 17
#define FREE_REFERENCES_LABEL_36_0 12
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_36_4);
      goto compiled_expression_scode_7;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_36_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_36_10);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_36_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_expression_scode_11)
DEFLABEL (compiled_expression_scode_7)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_18;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd22.Lng))))
    goto label_18;
  (Wrd16.Obj) = ((Wrd20.pObj) [11]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_17)
  (Wrd30.Obj) = (Rsp [0]);
  if ((Wrd30.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_11]));

DEFLABEL (label_12)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_16)
  (Rsp [0]) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = (Wrd5.Obj);
  goto label_13;

DEFLABEL (label_14)
  Rvl = (Rsp [1]);

DEFLABEL (label_13)
DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_36_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_19)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_16;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_7);
  (Wrd5.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_7 5
#define LABEL_37_9 7
#define LABEL_37_10 9
#define LABEL_37_11 11
#define LABEL_37_5 13
#define LABEL_37_13 15
#define LABEL_37_16 17
#define LABEL_37_14 19
#define LABEL_37_17 21
#define LABEL_37_18 23
#define LABEL_37_19 25
#define LABEL_37_8 27
#define LABEL_37_20 29
#define LABEL_37_21 31
#define LABEL_37_22 33
#define LABEL_37_23 35
#define ENVIRONMENT_LABEL_37_3 50
#define DEBUGGING_LABEL_37_2 49
#define OBJECT_37_5 48
#define OBJECT_37_4 47
#define OBJECT_37_3 46
#define OBJECT_37_2 45
#define OBJECT_37_1 44
#define OBJECT_37_0 43
#define EXECUTE_CACHE_37_15 37
#define EXECUTE_CACHE_37_12 39
#define EXECUTE_CACHE_37_6 41
#define FREE_REFERENCES_LABEL_37_0 36
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd51;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd38;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd30;
  machine_word Wrd61;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd45;
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
      current_block = (Rpc - LABEL_37_4);
      goto read_labels_23;

    case 1:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_37_9);
      goto label_30;

    case 3:
      current_block = (Rpc - LABEL_37_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_37_11);
      goto label_29;

    case 5:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_37_13);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_37_16);
      goto continuation_18;

    case 8:
      current_block = (Rpc - LABEL_37_14);
      goto continuation_14;

    case 9:
      current_block = (Rpc - LABEL_37_17);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_37_18);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_37_19);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_37_8);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_37_20);
      goto label_31;

    case 14:
      current_block = (Rpc - LABEL_37_21);
      goto label_32;

    case 15:
      current_block = (Rpc - LABEL_37_22);
      goto label_33;

    case 16:
      current_block = (Rpc - LABEL_37_23);
      goto label_34;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_labels_36)
DEFLABEL (read_labels_23)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_37)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_15]));

DEFLABEL (label_38)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 1)
    goto label_40;

DEFLABEL (label_39)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  if (! ((Wrd12.uLng) == 1))
    goto label_45;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_37_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_43;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_37_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_41;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);
  goto label_37;

DEFLABEL (label_41)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_43)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_13]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_37_14);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd9.uLng) == 10)
    goto label_47;
  Rvl = (current_block [OBJECT_37_5]);

DEFLABEL (label_46)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  if (! ((Wrd9.uLng) == 10))
    goto label_59;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd15.Obj) = (MAKE_OBJECT (26, (Wrd19.uLng)));

DEFLABEL (label_58)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_57;
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if ((Wrd61.Lng) == 0)
    goto label_56;

DEFLABEL (label_55)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_54;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd41.Lng))))
    goto label_54;
  (Wrd33.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_53)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_52)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 1)
    goto label_51;
  if ((Wrd50.uLng) == 10)
    goto label_49;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_48;

DEFLABEL (label_49)
  Rvl = (Wrd49.Obj);

DEFLABEL (label_48)
DEFLABEL (label_50)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_51)
  Rvl = (Rsp [1]);
  goto label_50;

DEFLABEL (label_54)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.Obj) = (current_block [OBJECT_37_3]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_19]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_4]), 2);

DEFLABEL (label_28)
  (Wrd33.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_52;

DEFLABEL (label_57)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_18]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_56;

DEFLABEL (label_59)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_17]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 1);

DEFLABEL (label_26)
  (Wrd15.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_60)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_46;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_37_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.uLng) == 10)
    goto label_63;

DEFLABEL (label_62)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_61)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_63)
  if (! ((Wrd8.uLng) == 10))
    goto label_73;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_72)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_71;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_70)
  (Wrd31.Obj) = (* (Rsp++));
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_69;
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_69;
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! ((Wrd66.Lng) < (Wrd67.Lng)))
    goto label_62;

DEFLABEL (label_68)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_67;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_66)
  (Rsp [1]) = (Wrd40.Obj);
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 10)
    goto label_65;

DEFLABEL (label_64)
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_4]), 2);

DEFLABEL (label_65)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd57.uLng) == 26))
    goto label_64;
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) (Wrd59.Lng)) < ((unsigned long) (Wrd63.Lng))))
    goto label_64;
  (Wrd51.uLng) = (OBJECT_DATUM (Wrd40.Obj));
  (Wrd54.pObj) = (& ((Wrd61.pObj) [(Wrd51.Lng)]));
  Rvl = ((Wrd54.pObj) [1]);
  goto label_61;

DEFLABEL (label_67)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_23]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (label_34)
  (Wrd40.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_22]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  goto label_68;

DEFLABEL (label_71)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_21]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (label_32)
  (Wrd22.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_20]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_37_16);
  (* (--Rsp)) = Rvl;
  goto label_52;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_6 7
#define LABEL_38_7 9
#define LABEL_38_13 11
#define LABEL_38_14 13
#define LABEL_38_15 15
#define LABEL_38_17 17
#define LABEL_38_9 19
#define LABEL_38_19 21
#define LABEL_38_20 23
#define LABEL_38_23 25
#define LABEL_38_16 27
#define ENVIRONMENT_LABEL_38_3 55
#define DEBUGGING_LABEL_38_2 54
#define OBJECT_38_6 53
#define OBJECT_38_5 52
#define OBJECT_38_4 51
#define OBJECT_38_3 50
#define OBJECT_38_2 49
#define OBJECT_38_1 48
#define OBJECT_38_0 47
#define EXECUTE_CACHE_38_25 29
#define EXECUTE_CACHE_38_24 31
#define EXECUTE_CACHE_38_22 33
#define EXECUTE_CACHE_38_21 35
#define EXECUTE_CACHE_38_18 37
#define EXECUTE_CACHE_38_12 39
#define EXECUTE_CACHE_38_11 41
#define EXECUTE_CACHE_38_10 43
#define EXECUTE_CACHE_38_8 45
#define FREE_REFERENCES_LABEL_38_0 28
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_38_4);
      goto read_bsm_file_19;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_38_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_38_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_38_13);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_38_14);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_38_15);
      goto loop_12;

    case 7:
      current_block = (Rpc - LABEL_38_17);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_38_9);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_38_19);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_38_20);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_38_23);
      goto continuation_17;

    case 12:
      current_block = (Rpc - LABEL_38_16);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_bsm_file_24)
DEFLABEL (read_bsm_file_19)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_38_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;
  (Wrd20.Obj) = (current_block [OBJECT_38_4]);
  (* (--Rsp)) = (Wrd20.Obj);
  goto loop_12;

DEFLABEL (label_26)
  (Wrd8.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));

DEFLABEL (label_29)
  (Rsp [0]) = (Wrd8.Obj);
  if (! ((Wrd8.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_27;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_20]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_21]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_38_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_38_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_25]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_38_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_28;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_22]));

DEFLABEL (label_28)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_38_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_24]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_38_23);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (loop_25)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_38_15);
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == (current_block [OBJECT_38_1]))
    goto label_35;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_16]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_34;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_33)
  (Wrd35.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_38_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_38_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd8.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto label_29;

DEFLABEL (label_30)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_32;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_31)
  (Rsp [1]) = (Wrd40.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_12;

DEFLABEL (label_32)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_14]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (label_22)
  (Wrd40.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_17]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_3]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  (Wrd8.Obj) = (current_block [OBJECT_38_2]);
  Rsp = (& (Rsp [2]));
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_7 7
#define LABEL_39_9 9
#define LABEL_39_10 11
#define ENVIRONMENT_LABEL_39_3 24
#define DEBUGGING_LABEL_39_2 23
#define OBJECT_39_1 22
#define OBJECT_39_0 21
#define EXECUTE_CACHE_39_12 13
#define EXECUTE_CACHE_39_11 15
#define EXECUTE_CACHE_39_8 17
#define EXECUTE_CACHE_39_6 19
#define FREE_REFERENCES_LABEL_39_0 12
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_39_4);
      goto inf__bif_bsm_8;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_39_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_39_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (inf__bif_bsm_11)
DEFLABEL (inf__bif_bsm_8)
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
  (Wrd9.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_39_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_39_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_5 3
#define LABEL_40_4 5
#define LABEL_40_6 7
#define LABEL_40_8 9
#define LABEL_40_10 11
#define TAG_40_11 4
#define LABEL_40_12 13
#define ENVIRONMENT_LABEL_40_3 24
#define DEBUGGING_LABEL_40_2 23
#define OBJECT_40_1 22
#define OBJECT_40_0 21
#define EXECUTE_CACHE_40_13 15
#define EXECUTE_CACHE_40_9 17
#define EXECUTE_CACHE_40_7 19
#define FREE_REFERENCES_LABEL_40_0 14
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_40_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_40_4);
      goto inf_structure__bif_bsm_6;

    case 2:
      current_block = (Rpc - LABEL_40_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_40_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_40_10);
      goto lambda_10;

    case 5:
      current_block = (Rpc - LABEL_40_12);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (inf_structure__bif_bsm_9)
DEFLABEL (inf_structure__bif_bsm_6)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_11)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_40_8);
  (Rsp [3]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_10])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_11;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_40_10);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_40_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_40_0]);
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_13]));

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_40_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_5 3
#define LABEL_41_4 5
#define LABEL_41_9 7
#define LABEL_41_6 9
#define LABEL_41_11 11
#define LABEL_41_13 13
#define LABEL_41_14 15
#define LABEL_41_16 17
#define LABEL_41_17 19
#define LABEL_41_20 21
#define LABEL_41_21 23
#define LABEL_41_22 25
#define LABEL_41_18 27
#define TAG_41_19 12
#define ENVIRONMENT_LABEL_41_3 46
#define DEBUGGING_LABEL_41_2 45
#define OBJECT_41_5 44
#define OBJECT_41_4 43
#define OBJECT_41_3 42
#define OBJECT_41_2 41
#define OBJECT_41_1 40
#define OBJECT_41_0 39
#define EXECUTE_CACHE_41_15 29
#define EXECUTE_CACHE_41_12 31
#define EXECUTE_CACHE_41_10 33
#define EXECUTE_CACHE_41_8 35
#define EXECUTE_CACHE_41_7 37
#define FREE_REFERENCES_LABEL_41_0 28
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd101;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd98;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_41_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_41_4);
      goto split_inf_structureB_25;

    case 2:
      current_block = (Rpc - LABEL_41_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_41_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_41_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_41_13);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_41_14);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_41_16);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_41_17);
      goto do_loop_17;

    case 9:
      current_block = (Rpc - LABEL_41_20);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_41_21);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_41_22);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_41_18);
      goto lambda_34;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (split_inf_structureB_32)
DEFLABEL (split_inf_structureB_25)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_40;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_39)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;

DEFLABEL (label_37)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_41_11);
  (* (--Rsp)) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 10))
    goto label_36;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_35)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_41_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_41_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_17;

DEFLABEL (label_36)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_41_9);
  goto label_37;

DEFLABEL (label_40)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_39;

DEFLABEL (do_loop_33)
DEFLABEL (do_loop_17)
  INTERRUPT_CHECK (26, LABEL_41_17);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_41;
  Rsp = (& (Rsp [1]));
  (Wrd95.Obj) = (Rsp [3]);
  (Rsp [5]) = (Wrd95.Obj);
  (Wrd96.Obj) = (Rsp [0]);
  (Rsp [6]) = (Wrd96.Obj);
  Rsp = (& (Rsp [5]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd99.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_18])));
  Rhp += 2;
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd99.pObj)));
  Wrd102 = Wrd99;
  (Wrd103.Obj) = (Rsp [1]);
  ((Wrd102.pObj) [2]) = (Wrd103.Obj);
  (Wrd101.Obj) = (Rsp [0]);
  ((Wrd102.pObj) [3]) = (Wrd101.Obj);
  Rvl = (Wrd98.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_53;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_53;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_53;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd14.pObj) = (& ((Wrd21.pObj) [(Wrd11.Lng)]));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_52)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_51;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd39.Lng))))
    goto label_51;
  (Wrd33.Obj) = ((Wrd37.pObj) [5]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_50)
  (Wrd86.Obj) = (Rsp [4]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 10))
    goto label_49;
  (Wrd78.Obj) = (Rsp [3]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 26))
    goto label_49;
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  if (! (((unsigned long) (Wrd81.Lng)) < ((unsigned long) (Wrd85.Lng))))
    goto label_49;
  (Wrd73.uLng) = (OBJECT_DATUM (Wrd78.Obj));
  (Wrd76.pObj) = (& ((Wrd83.pObj) [(Wrd73.Lng)]));
  (Wrd77.Obj) = (Rsp [0]);
  ((Wrd76.pObj) [1]) = (Wrd77.Obj);

DEFLABEL (label_48)
  (Wrd47.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_41_4]);
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [9]);
  if ((Wrd49.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd55.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  goto label_42;

DEFLABEL (label_43)
  (Wrd51.Obj) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_42)
DEFLABEL (label_47)
  (Rsp [2]) = (Wrd51.Obj);
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 10)
    goto label_45;

DEFLABEL (label_44)
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_5]), 3);

DEFLABEL (label_45)
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd69.Lng))))
    goto label_44;
  ((Wrd67.pObj) [5]) = (Wrd51.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_46)
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  (Wrd60.Lng) = ((Wrd59.Lng) + 1L);
  (Wrd57.Obj) = (LONG_TO_FIXNUM (Wrd60.Lng));
  (Rsp [0]) = (Wrd57.Obj);
  goto do_loop_17;

DEFLABEL (label_49)
  (Wrd88.Obj) = (Rsp [4]);
  (Wrd89.Obj) = (Rsp [3]);
  (Wrd90.Obj) = (Rsp [0]);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_22]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_5]), 3);

DEFLABEL (label_30)
  goto label_48;

DEFLABEL (label_51)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.Obj) = (current_block [OBJECT_41_4]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_21]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_3]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_20]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_3]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_41_16);
  goto label_46;

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_41_18);

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

#define LABEL_42_4 3
#define LABEL_42_5 5
#define ENVIRONMENT_LABEL_42_3 14
#define DEBUGGING_LABEL_42_2 13
#define OBJECT_42_1 12
#define OBJECT_42_0 11
#define EXECUTE_CACHE_42_6 7
#define FREE_REFERENCE_42_0 10
#define FREE_REFERENCES_LABEL_42_0 6
#define NUMBER_OF_LINKER_SECTIONS_42_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_42_4);
      goto uncompress_ports_2;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (uncompress_ports_6)
DEFLABEL (uncompress_ports_2)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  if ((Wrd7.Obj) == (current_block [OBJECT_42_0]))
    goto label_8;
  Wrd9 = Wrd7;
  goto label_7;

DEFLABEL (label_8)
  (Wrd9.Obj) = (current_block [OBJECT_42_1]);

DEFLABEL (label_7)
DEFLABEL (label_11)
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_10;
  Wrd11 = Wrd15;

DEFLABEL (label_9)
  (Rsp [3]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_5])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_6 7
#define LABEL_43_8 9
#define ENVIRONMENT_LABEL_43_3 15
#define DEBUGGING_LABEL_43_2 14
#define OBJECT_43_0 13
#define EXECUTE_CACHE_43_7 11
#define FREE_REFERENCES_LABEL_43_0 10
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_43_4);
      goto uncompress_read_substring_9;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto loop_7;

    case 2:
      current_block = (Rpc - LABEL_43_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_43_8);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (uncompress_read_substring_13)
DEFLABEL (uncompress_read_substring_9)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_7;

DEFLABEL (loop_14)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_43_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_15;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd6.Lng) - (Wrd13.Lng));
  Rvl = (LONG_TO_FIXNUM (Wrd14.Lng));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_43_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 2)
    goto label_16;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd9.Lng) - (Wrd11.Lng));
  Rvl = (LONG_TO_FIXNUM (Wrd12.Lng));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 30))
    goto label_18;
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_18;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) (Wrd31.Lng)) < ((unsigned long) (Wrd35.Lng))))
    goto label_18;
  if (! ((Wrd6.uLng) == 2))
    goto label_18;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd28.Obj));
  (Wrd23.pChr) = (& ((Wrd33.pChr) [(Wrd20.Lng)]));
  ((Wrd23.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Rvl)));

DEFLABEL (label_17)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Lng) = ((Wrd16.Lng) + 1L);
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_7;

DEFLABEL (label_18)
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_0]), 3);

DEFLABEL (label_11)
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_6 7
#define LABEL_44_8 9
#define LABEL_44_9 11
#define LABEL_44_10 13
#define LABEL_44_12 15
#define LABEL_44_13 17
#define LABEL_44_15 19
#define LABEL_44_14 21
#define LABEL_44_17 23
#define LABEL_44_18 25
#define LABEL_44_19 27
#define LABEL_44_11 29
#define LABEL_44_16 31
#define LABEL_44_22 33
#define LABEL_44_23 35
#define LABEL_44_24 37
#define LABEL_44_20 39
#define LABEL_44_27 41
#define LABEL_44_28 43
#define LABEL_44_21 45
#define LABEL_44_25 47
#define LABEL_44_30 49
#define ENVIRONMENT_LABEL_44_3 72
#define DEBUGGING_LABEL_44_2 71
#define OBJECT_44_11 70
#define OBJECT_44_10 69
#define OBJECT_44_9 68
#define OBJECT_44_8 67
#define OBJECT_44_7 66
#define OBJECT_44_6 65
#define OBJECT_44_5 64
#define OBJECT_44_4 63
#define OBJECT_44_3 62
#define OBJECT_44_2 61
#define OBJECT_44_1 60
#define OBJECT_44_0 59
#define EXECUTE_CACHE_44_31 51
#define EXECUTE_CACHE_44_29 53
#define EXECUTE_CACHE_44_26 55
#define EXECUTE_CACHE_44_7 57
#define FREE_REFERENCES_LABEL_44_0 50
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd60;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd53;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd45;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd121;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd129;
  machine_word Wrd127;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd102;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd165;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd86;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd78;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd48;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd213;
  machine_word Wrd210;
  machine_word Wrd208;
  machine_word Wrd214;
  machine_word Wrd217;
  machine_word Wrd205;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd197;
  machine_word Wrd196;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd187;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd176;
  machine_word Wrd171;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_44_4);
      goto uncompress_kernel_by_blocks_90;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_44_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_44_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_44_9);
      goto parse_command_72;

    case 5:
      current_block = (Rpc - LABEL_44_10);
      goto label_92;

    case 6:
      current_block = (Rpc - LABEL_44_12);
      goto label_93;

    case 7:
      current_block = (Rpc - LABEL_44_13);
      goto label_94;

    case 8:
      current_block = (Rpc - LABEL_44_15);
      goto refill_input_buffer_and_retry_24;

    case 9:
      current_block = (Rpc - LABEL_44_14);
      goto continuation_64;

    case 10:
      current_block = (Rpc - LABEL_44_17);
      goto label_95;

    case 11:
      current_block = (Rpc - LABEL_44_18);
      goto short_substring_moveB_88;

    case 12:
      current_block = (Rpc - LABEL_44_19);
      goto retry_with_bigger_output_buffer_14;

    case 13:
      current_block = (Rpc - LABEL_44_11);
      goto continuation_35;

    case 14:
      current_block = (Rpc - LABEL_44_16);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_44_22);
      goto do_loop_86;

    case 16:
      current_block = (Rpc - LABEL_44_23);
      goto label_96;

    case 17:
      current_block = (Rpc - LABEL_44_24);
      goto label_97;

    case 18:
      current_block = (Rpc - LABEL_44_20);
      goto continuation_10;

    case 19:
      current_block = (Rpc - LABEL_44_27);
      goto do_loop_43;

    case 20:
      current_block = (Rpc - LABEL_44_28);
      goto label_98;

    case 21:
      current_block = (Rpc - LABEL_44_21);
      goto continuation_17;

    case 22:
      current_block = (Rpc - LABEL_44_25);
      goto continuation_11;

    case 23:
      current_block = (Rpc - LABEL_44_30);
      goto continuation_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (uncompress_kernel_by_blocks_100)
DEFLABEL (uncompress_kernel_by_blocks_90)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_44_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_44_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  goto parse_command_72;

DEFLABEL (parse_command_101)
DEFLABEL (parse_command_72)
  INTERRUPT_CHECK (26, LABEL_44_9);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_107;
  (Wrd9.Obj) = (current_block [OBJECT_44_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto refill_input_buffer_and_retry_24;

DEFLABEL (label_107)
  (Wrd26.Obj) = (Rsp [7]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 30))
    goto label_123;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_123;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_123;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd15.pChr) = (& ((Wrd23.pChr) [(Wrd12.Lng)]));
  (Wrd16.uLng) = ((unsigned long) (((unsigned char *) (Wrd15.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd16.uLng)));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_122)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if ((Wrd34.Lng) < 16L)
    goto label_120;
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));
  (* (--Rsp)) = (Wrd40.Obj);
  Wrd42 = Wrd39;
  (Wrd43.Obj) = (Rsp [5]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if ((Wrd42.Lng) < (Wrd44.Lng))
    goto label_108;
  (Wrd45.Obj) = (current_block [OBJECT_44_5]);
  (Rsp [1]) = (Wrd45.Obj);
  Rsp = (& (Rsp [1]));
  goto refill_input_buffer_and_retry_24;

DEFLABEL (label_108)
  (Wrd47.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd64.Obj) = (Rsp [10]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 30))
    goto label_119;
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd57.uLng) == 26))
    goto label_119;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [1]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) (Wrd42.Lng)) < ((unsigned long) (Wrd63.Lng))))
    goto label_119;
  (Wrd51.uLng) = (OBJECT_DATUM (Wrd40.Obj));
  (Wrd54.pChr) = (& ((Wrd61.pChr) [(Wrd51.Lng)]));
  (Wrd55.uLng) = ((unsigned long) (((unsigned char *) (Wrd54.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd48.Obj) = (MAKE_OBJECT (26, (Wrd55.uLng)));

DEFLABEL (label_118)
  (Wrd72.Obj) = (Rsp [2]);
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  {
    long temp = ((Wrd73.Lng) & 15L);
    (Wrd78.Lng) = (((Wrd73.Lng) >= 0) ? temp : (temp == 0) ? 0 : (temp | (LEFT_SHIFT ((-1L), 4))));
  }
  (Wrd82.Lng) = (LEFT_SHIFT ((Wrd78.Lng), 8));
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd84.Lng) = ((Wrd82.Lng) + (Wrd83.Lng));
  (Wrd85.Obj) = (LONG_TO_FIXNUM (Wrd84.Lng));
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd87.Obj) = (Rsp [1]);
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd87.Obj));
  (Wrd91.Lng) = ((Wrd88.Lng) - (Wrd84.Lng));
  (Wrd86.Obj) = (LONG_TO_FIXNUM (Wrd91.Lng));
  (Rsp [1]) = (Wrd86.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd92.Obj) = (Rsp [0]);
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  if ((Wrd93.Lng) < 0)
    goto label_110;
  Wrd95 = Wrd92;
  goto label_109;

DEFLABEL (label_110)
  (Wrd165.Lng) = ((Wrd93.Lng) + 4096L);
  (Wrd95.Obj) = (LONG_TO_FIXNUM (Wrd165.Lng));

DEFLABEL (label_109)
DEFLABEL (label_117)
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd95.Obj);
  (Wrd97.Obj) = (Rsp [1]);
  (Wrd98.Lng) = (FIXNUM_TO_LONG (Wrd97.Obj));
  (Wrd103.Lng) = (((Wrd98.Lng) < 0) ? (RIGHT_SHIFT (((Wrd98.Lng) + 15), 4)) : (RIGHT_SHIFT ((Wrd98.Lng), 4)));
  (Wrd104.Lng) = ((Wrd103.Lng) + 1L);
  (Wrd102.Obj) = (LONG_TO_FIXNUM (Wrd104.Lng));
  (Rsp [1]) = (Wrd102.Obj);
  (Wrd106.Obj) = (Rsp [3]);
  (Wrd107.Lng) = (FIXNUM_TO_LONG (Wrd106.Obj));
  (Wrd109.Lng) = ((Wrd107.Lng) + 1L);
  {
    long temp = ((Wrd109.Lng) & 4095L);
    (Wrd112.Lng) = (((Wrd109.Lng) >= 0) ? temp : (temp == 0) ? 0 : (temp | (LEFT_SHIFT ((-1L), 12))));
  }
  (Wrd113.Obj) = (LONG_TO_FIXNUM (Wrd112.Lng));
  (* (--Rsp)) = (Wrd113.Obj);
  (Wrd114.Obj) = (Rsp [3]);
  (Wrd115.Lng) = (FIXNUM_TO_LONG (Wrd114.Obj));
  (Wrd118.Lng) = ((Wrd115.Lng) + (Wrd104.Lng));
  (Wrd119.Obj) = (LONG_TO_FIXNUM (Wrd118.Lng));
  (* (--Rsp)) = (Wrd119.Obj);
  (Wrd134.Obj) = (Rsp [10]);
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd134.Obj));
  if (! ((Wrd135.uLng) == 10))
    goto label_116;
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd127.uLng) == 26))
    goto label_116;
  (Wrd129.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  (Wrd131.pObj) = (OBJECT_ADDRESS (Wrd134.Obj));
  (Wrd132.Obj) = ((Wrd131.pObj) [0]);
  (Wrd133.Lng) = (FIXNUM_TO_LONG (Wrd132.Obj));
  if (! (((unsigned long) (Wrd129.Lng)) < ((unsigned long) (Wrd133.Lng))))
    goto label_116;
  (Wrd121.uLng) = (OBJECT_DATUM (Wrd95.Obj));
  (Wrd124.pObj) = (& ((Wrd131.pObj) [(Wrd121.Lng)]));
  (Wrd125.Obj) = ((Wrd124.pObj) [1]);
  (* (--Rsp)) = (Wrd125.Obj);

DEFLABEL (label_115)
  (Wrd141.Obj) = (Rsp [1]);
  (Wrd142.Lng) = (FIXNUM_TO_LONG (Wrd141.Obj));
  (Wrd143.Obj) = (Rsp [10]);
  (Wrd144.Lng) = (FIXNUM_TO_LONG (Wrd143.Obj));
  if (! ((Wrd142.Lng) > (Wrd144.Lng)))
    goto label_112;

DEFLABEL (label_111)
  Rsp = (& (Rsp [5]));
  goto retry_with_bigger_output_buffer_14;

DEFLABEL (label_112)
  (Wrd145.Obj) = (Rsp [0]);
  (Wrd146.Lng) = (FIXNUM_TO_LONG (Wrd145.Obj));
  (Wrd147.Obj) = (Rsp [4]);
  (Wrd148.Lng) = (FIXNUM_TO_LONG (Wrd147.Obj));
  (Wrd149.Lng) = ((Wrd146.Lng) + (Wrd148.Lng));
  (Wrd150.Obj) = (LONG_TO_FIXNUM (Wrd149.Lng));
  (* (--Rsp)) = (Wrd150.Obj);
  (Wrd153.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_14]))));
  (* (--Rsp)) = (Wrd153.Obj);
  (Wrd154.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd154.Obj);
  (Wrd155.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd155.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd155.Obj);
  goto short_substring_moveB_88;

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_44_14);
  (Wrd28.Obj) = (Rsp [12]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_114;
  (Wrd20.Obj) = (Rsp [7]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_114;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) (Wrd23.Lng)) < ((unsigned long) (Wrd27.Lng))))
    goto label_114;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd20.Obj));
  (Wrd18.pObj) = (& ((Wrd25.pObj) [(Wrd15.Lng)]));
  (Wrd19.Obj) = (Rsp [6]);
  ((Wrd18.pObj) [1]) = (Wrd19.Obj);

DEFLABEL (label_113)
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [6]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [7]) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd12.Lng) = ((Wrd9.Lng) + 2L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (Rsp [8]) = (Wrd7.Obj);
  Rsp = (& (Rsp [6]));
  goto parse_command_72;

DEFLABEL (label_114)
  (Wrd30.Obj) = (Rsp [12]);
  (Wrd31.Obj) = (Rsp [7]);
  (Wrd32.Obj) = (Rsp [6]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_17]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_6]), 3);

DEFLABEL (label_95)
  goto label_113;

DEFLABEL (label_116)
  (Wrd136.Obj) = (Rsp [10]);
  (Wrd137.Obj) = (Rsp [2]);
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_13]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd136.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_4]), 2);

DEFLABEL (label_94)
  (* (--Rsp)) = Rvl;
  goto label_115;

DEFLABEL (label_119)
  (Wrd66.Obj) = (Rsp [10]);
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_12]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_3]), 2);

DEFLABEL (label_93)
  (Wrd48.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_120)
  (Wrd169.Lng) = ((Wrd34.Lng) + 1L);
  (Wrd170.Obj) = (LONG_TO_FIXNUM (Wrd169.Lng));
  (* (--Rsp)) = (Wrd170.Obj);
  (Wrd172.Obj) = (Rsp [4]);
  (Wrd173.Lng) = (FIXNUM_TO_LONG (Wrd172.Obj));
  (Wrd174.Lng) = ((Wrd173.Lng) + 1L);
  (Wrd171.Obj) = (LONG_TO_FIXNUM (Wrd174.Lng));
  (Rsp [1]) = (Wrd171.Obj);
  Wrd176 = Wrd174;
  Wrd178 = Wrd169;
  (Wrd179.Lng) = ((Wrd176.Lng) + (Wrd178.Lng));
  (Wrd180.Obj) = (LONG_TO_FIXNUM (Wrd179.Lng));
  (* (--Rsp)) = (Wrd180.Obj);
  (Wrd182.Obj) = (Rsp [4]);
  (Wrd183.Lng) = (FIXNUM_TO_LONG (Wrd182.Obj));
  (Wrd187.Lng) = ((Wrd183.Lng) + (Wrd178.Lng));
  {
    long temp = ((Wrd187.Lng) & 4095L);
    (Wrd190.Lng) = (((Wrd187.Lng) >= 0) ? temp : (temp == 0) ? 0 : (temp | (LEFT_SHIFT ((-1L), 12))));
  }
  (Wrd191.Obj) = (LONG_TO_FIXNUM (Wrd190.Lng));
  (* (--Rsp)) = (Wrd191.Obj);
  (Wrd192.Obj) = (Rsp [4]);
  (Wrd193.Lng) = (FIXNUM_TO_LONG (Wrd192.Obj));
  (Wrd196.Lng) = ((Wrd193.Lng) + (Wrd178.Lng));
  (Wrd197.Obj) = (LONG_TO_FIXNUM (Wrd196.Lng));
  (* (--Rsp)) = (Wrd197.Obj);
  Wrd199 = Wrd196;
  (Wrd200.Obj) = (Rsp [10]);
  (Wrd201.Lng) = (FIXNUM_TO_LONG (Wrd200.Obj));
  if ((Wrd199.Lng) > (Wrd201.Lng))
    goto label_111;
  Wrd203 = Wrd179;
  (Wrd204.Obj) = (Rsp [8]);
  (Wrd205.Lng) = (FIXNUM_TO_LONG (Wrd204.Obj));
  if (! ((Wrd203.Lng) > (Wrd205.Lng)))
    goto label_121;
  (Wrd217.Lng) = ((Wrd178.Lng) + 1L);
  (Wrd214.Obj) = (LONG_TO_FIXNUM (Wrd217.Lng));
  (Rsp [4]) = (Wrd214.Obj);
  Rsp = (& (Rsp [4]));
  goto refill_input_buffer_and_retry_24;

DEFLABEL (label_121)
  (Wrd208.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd208.Obj);
  (* (--Rsp)) = (Wrd192.Obj);
  (Wrd210.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd210.Obj);
  (* (--Rsp)) = (Wrd180.Obj);
  (* (--Rsp)) = (Wrd171.Obj);
  (Wrd213.Obj) = (Rsp [17]);
  (* (--Rsp)) = (Wrd213.Obj);
  goto short_substring_moveB_88;

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_44_11);
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto do_loop_43;

DEFLABEL (label_123)
  (Wrd28.Obj) = (Rsp [7]);
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_10]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_3]), 2);

DEFLABEL (label_92)
  (* (--Rsp)) = Rvl;
  goto label_122;

DEFLABEL (refill_input_buffer_and_retry_102)
DEFLABEL (refill_input_buffer_and_retry_24)
  INTERRUPT_CHECK (26, LABEL_44_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  goto short_substring_moveB_88;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_44_16);
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd6.Lng) - (Wrd8.Lng));
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [14]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_44_21);
  (* (--Rsp)) = Rvl;
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd6.Lng) + (Wrd8.Lng));
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_44_2]);
  if (Rvl == (Wrd12.Obj))
    goto label_124;
  (Rsp [6]) = (Wrd12.Obj);
  (Rsp [7]) = (Wrd10.Obj);
  Rsp = (& (Rsp [4]));
  goto parse_command_72;

DEFLABEL (label_124)
  Wrd17 = Wrd9;
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! ((Wrd17.Lng) < (Wrd19.Lng)))
    goto label_125;
  (Wrd28.Obj) = (current_block [OBJECT_44_10]);
  (Rsp [13]) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [12]);
  (Rsp [14]) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_44_11]);
  (Rsp [15]) = (Wrd30.Obj);
  Rsp = (& (Rsp [13]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_29]));

DEFLABEL (label_125)
  Rsp = (& (Rsp [4]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_30]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd25.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_31]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_44_30);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [12]));
  goto pop_return;

DEFLABEL (short_substring_moveB_103)
DEFLABEL (short_substring_moveB_88)
  INTERRUPT_CHECK (26, LABEL_44_18);
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto do_loop_86;

DEFLABEL (retry_with_bigger_output_buffer_104)
DEFLABEL (retry_with_bigger_output_buffer_14)
  INTERRUPT_CHECK (26, LABEL_44_19);
  (Wrd6.Obj) = (Rsp [5]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd13.Lng) = (((Wrd7.Lng) < 0) ? (RIGHT_SHIFT (((Wrd7.Lng) + 3), 2)) : (RIGHT_SHIFT ((Wrd7.Lng), 2)));
  (Wrd14.Lng) = ((Wrd7.Lng) + (Wrd13.Lng));
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_20]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_44_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_26]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_44_25);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [6]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [7]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto parse_command_72;

DEFLABEL (do_loop_105)
DEFLABEL (do_loop_86)
  INTERRUPT_CHECK (26, LABEL_44_22);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [4]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_126;
  Rvl = (current_block [OBJECT_44_7]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_126)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 30))
    goto label_130;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_130;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_130;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd13.pChr) = (& ((Wrd20.pChr) [(Wrd10.Lng)]));
  (Wrd14.uLng) = ((unsigned long) (((unsigned char *) (Wrd13.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd7.Obj) = (MAKE_OBJECT (2, (Wrd14.uLng)));

DEFLABEL (label_129)
  (Wrd53.Obj) = (Rsp [5]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 30))
    goto label_128;
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_128;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [1]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) (Wrd48.Lng)) < ((unsigned long) (Wrd52.Lng))))
    goto label_128;
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd44.uLng) == 2))
    goto label_128;
  (Wrd39.uLng) = (OBJECT_DATUM (Wrd45.Obj));
  (Wrd42.pChr) = (& ((Wrd50.pChr) [(Wrd39.Lng)]));
  ((Wrd42.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd7.Obj)));

DEFLABEL (label_127)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd33.Lng) = ((Wrd32.Lng) + 1L);
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));
  (Rsp [0]) = (Wrd30.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd37.Lng) = ((Wrd36.Lng) + 1L);
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));
  (Rsp [1]) = (Wrd34.Obj);
  goto do_loop_86;

DEFLABEL (label_128)
  (Wrd55.Obj) = (Rsp [5]);
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_24]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_9]), 3);

DEFLABEL (label_97)
  goto label_127;

DEFLABEL (label_130)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_23]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_8]), 2);

DEFLABEL (label_96)
  (Wrd7.Obj) = Rvl;
  goto label_129;

DEFLABEL (do_loop_106)
DEFLABEL (do_loop_43)
  INTERRUPT_CHECK (26, LABEL_44_27);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_131;
  Rsp = (& (Rsp [2]));
  (Wrd43.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [1]);
  (Rsp [6]) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (Rsp [7]) = (Wrd45.Obj);
  Rsp = (& (Rsp [5]));
  goto parse_command_72;

DEFLABEL (label_131)
  (Wrd34.Obj) = (Rsp [13]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_133;
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_133;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) (Wrd29.Lng)) < ((unsigned long) (Wrd33.Lng))))
    goto label_133;
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd24.pObj) = (& ((Wrd31.pObj) [(Wrd21.Lng)]));
  ((Wrd24.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_132)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd16.Lng) = ((Wrd13.Lng) + 1L);
  {
    long temp = ((Wrd16.Lng) & 4095L);
    (Wrd19.Lng) = (((Wrd16.Lng) >= 0) ? temp : (temp == 0) ? 0 : (temp | (LEFT_SHIFT ((-1L), 12))));
  }
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));
  (Rsp [1]) = (Wrd15.Obj);
  goto do_loop_43;

DEFLABEL (label_133)
  (Wrd36.Obj) = (Rsp [13]);
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_28]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_6]), 3);

DEFLABEL (label_98)
  goto label_132;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define TAG_45_6 1
#define LABEL_45_8 7
#define LABEL_45_9 9
#define LABEL_45_10 11
#define LABEL_45_11 13
#define TAG_45_12 5
#define LABEL_45_13 15
#define TAG_45_14 6
#define ENVIRONMENT_LABEL_45_3 30
#define DEBUGGING_LABEL_45_2 29
#define OBJECT_45_1 28
#define OBJECT_45_0 27
#define EXECUTE_CACHE_45_16 17
#define EXECUTE_CACHE_45_15 19
#define EXECUTE_CACHE_45_7 21
#define FREE_REFERENCE_45_2 24
#define FREE_REFERENCE_45_1 25
#define FREE_REFERENCE_45_0 26
#define FREE_REFERENCES_LABEL_45_0 16
#define NUMBER_OF_LINKER_SECTIONS_45_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_45_4);
      goto fasload_loader_6;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_45_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_45_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_45_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_45_11);
      goto lambda_14;

    case 6:
      current_block = (Rpc - LABEL_45_13);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fasload_loader_12)
DEFLABEL (fasload_loader_6)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_7]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_45_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_21;
  Wrd6 = Wrd10;

DEFLABEL (label_20)
  (Wrd15.Obj) = (current_block [OBJECT_45_0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_19;
  Wrd17 = Wrd21;

DEFLABEL (label_18)
  (Wrd23.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_2]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_17;
  Wrd28 = Wrd32;

DEFLABEL (label_16)
  (Wrd34.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd40.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_11])));
  Rhp += 1;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd40.pObj)));
  Wrd41 = Wrd40;
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [2]);
  ((Wrd41.pObj) [2]) = (Wrd44.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd47.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_13])));
  Rhp += 1;
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd47.pObj)));
  Wrd48 = Wrd47;
  (Wrd49.Obj) = (Rsp [2]);
  ((Wrd48.pObj) [2]) = (Wrd49.Obj);
  (Rsp [1]) = (Wrd46.Obj);
  (Rsp [2]) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_15]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_10])), (Wrd29.pObj));

DEFLABEL (label_10)
  (Wrd28.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_9])), (Wrd18.pObj));

DEFLABEL (label_9)
  (Wrd17.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_8])), (Wrd7.pObj));

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_20;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_45_11);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45_1]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_16]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_45_13);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define TAG_46_6 1
#define LABEL_46_9 7
#define LABEL_46_7 9
#define TAG_46_8 3
#define LABEL_46_13 11
#define LABEL_46_11 13
#define TAG_46_12 5
#define LABEL_46_15 15
#define TAG_46_16 6
#define LABEL_46_18 17
#define TAG_46_19 7
#define LABEL_46_21 19
#define LABEL_46_23 21
#define LABEL_46_24 23
#define TAG_46_25 10
#define LABEL_46_27 25
#define LABEL_46_29 27
#define LABEL_46_34 29
#define LABEL_46_31 31
#define LABEL_46_32 33
#define TAG_46_33 15
#define LABEL_46_37 35
#define LABEL_46_38 37
#define LABEL_46_35 39
#define TAG_46_36 18
#define LABEL_46_44 41
#define LABEL_46_45 43
#define LABEL_46_39 45
#define TAG_46_40 21
#define LABEL_46_41 47
#define TAG_46_42 22
#define LABEL_46_46 49
#define TAG_46_47 23
#define LABEL_46_48 51
#define TAG_46_49 24
#define LABEL_46_50 53
#define ENVIRONMENT_LABEL_46_3 87
#define DEBUGGING_LABEL_46_2 86
#define OBJECT_46_3 85
#define OBJECT_46_2 84
#define OBJECT_46_1 83
#define OBJECT_46_0 82
#define EXECUTE_CACHE_46_52 55
#define EXECUTE_CACHE_46_51 57
#define EXECUTE_CACHE_46_43 59
#define EXECUTE_CACHE_46_30 61
#define EXECUTE_CACHE_46_28 63
#define EXECUTE_CACHE_46_26 65
#define EXECUTE_CACHE_46_22 67
#define EXECUTE_CACHE_46_20 69
#define EXECUTE_CACHE_46_17 71
#define EXECUTE_CACHE_46_14 73
#define EXECUTE_CACHE_46_10 75
#define FREE_REFERENCE_46_3 78
#define FREE_REFERENCE_46_2 79
#define FREE_REFERENCE_46_1 80
#define FREE_REFERENCE_46_0 81
#define FREE_REFERENCES_LABEL_46_0 54
#define NUMBER_OF_LINKER_SECTIONS_46_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_46_4);
      goto compressed_loader_27;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto lambda_37;

    case 2:
      current_block = (Rpc - LABEL_46_9);
      goto label_29;

    case 3:
      current_block = (Rpc - LABEL_46_7);
      goto lambda_38;

    case 4:
      current_block = (Rpc - LABEL_46_13);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_46_11);
      goto lambda_39;

    case 6:
      current_block = (Rpc - LABEL_46_15);
      goto lambda_40;

    case 7:
      current_block = (Rpc - LABEL_46_18);
      goto lambda_41;

    case 8:
      current_block = (Rpc - LABEL_46_21);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_46_23);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_46_24);
      goto lambda_42;

    case 11:
      current_block = (Rpc - LABEL_46_27);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_46_29);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_46_34);
      goto continuation_20;

    case 14:
      current_block = (Rpc - LABEL_46_31);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_46_32);
      goto lambda_43;

    case 16:
      current_block = (Rpc - LABEL_46_37);
      goto label_31;

    case 17:
      current_block = (Rpc - LABEL_46_38);
      goto label_32;

    case 18:
      current_block = (Rpc - LABEL_46_35);
      goto lambda_44;

    case 19:
      current_block = (Rpc - LABEL_46_44);
      goto label_33;

    case 20:
      current_block = (Rpc - LABEL_46_45);
      goto label_34;

    case 21:
      current_block = (Rpc - LABEL_46_39);
      goto lambda_45;

    case 22:
      current_block = (Rpc - LABEL_46_41);
      goto lambda_46;

    case 23:
      current_block = (Rpc - LABEL_46_46);
      goto lambda_47;

    case 24:
      current_block = (Rpc - LABEL_46_48);
      goto lambda_48;

    case 25:
      current_block = (Rpc - LABEL_46_50);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compressed_loader_36)
DEFLABEL (compressed_loader_27)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_46_5);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_7])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  ((Wrd11.pObj) [3]) = (Wrd5.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_50;
  Wrd16 = Wrd20;

DEFLABEL (label_49)
  (Rsp [1]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_9])), (Wrd17.pObj));

DEFLABEL (label_29)
  (Wrd16.Obj) = Rvl;
  goto label_49;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_46_7);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_11])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_55;
  Wrd11 = Wrd15;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd11.Obj);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;
  if (! ((Wrd11.Obj) == (current_block [OBJECT_46_0])))
    goto label_51;
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [3]);
  (Rsp [1]) = (Wrd36.Obj);
  (Rsp [2]) = (Wrd35.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_14]));

DEFLABEL (label_51)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_15])));
  Rhp += 3;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd30 = Wrd23;
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [2]);
  ((Wrd30.pObj) [2]) = (Wrd33.Obj);
  (Wrd29.Obj) = ((Wrd32.pObj) [3]);
  ((Wrd30.pObj) [3]) = (Wrd29.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd30.pObj) [4]) = (Wrd25.Obj);
  (Rsp [2]) = (Wrd22.Obj);

DEFLABEL (label_52)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_17]));

DEFLABEL (label_53)
  (Wrd40.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd40.Obj);
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_13])), (Wrd12.pObj));

DEFLABEL (label_30)
  (Wrd11.Obj) = Rvl;
  goto label_54;

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_46_11);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_18])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_20]));

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_46_15);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_22]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_46_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_3;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_46_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_30]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_46_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_32])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_20]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_46_31);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_57;

DEFLABEL (label_56)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_34]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_35])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_20]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_46_34);
  goto label_56;

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_46_18);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x2fd, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_24])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_26]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_23);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_28]));

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_46_24);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_46_32);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_2]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_61;
  Wrd6 = Wrd10;

DEFLABEL (label_60)
  (Wrd15.Obj) = (current_block [OBJECT_46_1]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_3]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_59;
  Wrd17 = Wrd21;

DEFLABEL (label_58)
  (Wrd23.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_39])));
  Rhp += 2;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd34 = Wrd29;
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [2]);
  ((Wrd34.pObj) [2]) = (Wrd37.Obj);
  (Wrd33.Obj) = ((Wrd36.pObj) [3]);
  ((Wrd34.pObj) [3]) = (Wrd33.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd40.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_42);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_41])));
  Rhp += 1;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd40.pObj)));
  Wrd41 = Wrd40;
  (Wrd42.Obj) = (Rsp [2]);
  ((Wrd41.pObj) [2]) = (Wrd42.Obj);
  (Rsp [1]) = (Wrd39.Obj);
  (Rsp [2]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_43]));

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_38])), (Wrd18.pObj));

DEFLABEL (label_32)
  (Wrd17.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_37])), (Wrd7.pObj));

DEFLABEL (label_31)
  (Wrd6.Obj) = Rvl;
  goto label_60;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_46_35);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_2]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_65;
  Wrd6 = Wrd10;

DEFLABEL (label_64)
  (Wrd15.Obj) = (current_block [OBJECT_46_1]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_3]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_63;
  Wrd17 = Wrd21;

DEFLABEL (label_62)
  (Wrd23.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_47);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_46])));
  Rhp += 2;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd34 = Wrd29;
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [2]);
  ((Wrd34.pObj) [2]) = (Wrd37.Obj);
  (Wrd33.Obj) = ((Wrd36.pObj) [3]);
  ((Wrd34.pObj) [3]) = (Wrd33.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd40.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_49);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_48])));
  Rhp += 1;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd40.pObj)));
  Wrd41 = Wrd40;
  (Wrd42.Obj) = (Rsp [2]);
  ((Wrd41.pObj) [2]) = (Wrd42.Obj);
  (Rsp [1]) = (Wrd39.Obj);
  (Rsp [2]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_43]));

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_45])), (Wrd18.pObj));

DEFLABEL (label_34)
  (Wrd17.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_44])), (Wrd7.pObj));

DEFLABEL (label_33)
  (Wrd6.Obj) = Rvl;
  goto label_64;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_46_39);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_51]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_46_50);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_46_41);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_2]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_46_46);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_52]));

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_46_48);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_3]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define TAG_47_6 1
#define LABEL_47_7 7
#define LABEL_47_9 9
#define LABEL_47_13 11
#define LABEL_47_11 13
#define LABEL_47_14 15
#define TAG_47_15 6
#define LABEL_47_16 17
#define LABEL_47_18 19
#define ENVIRONMENT_LABEL_47_3 41
#define DEBUGGING_LABEL_47_2 40
#define OBJECT_47_4 39
#define OBJECT_47_3 38
#define OBJECT_47_2 37
#define OBJECT_47_1 36
#define OBJECT_47_0 35
#define EXECUTE_CACHE_47_21 21
#define EXECUTE_CACHE_47_20 23
#define EXECUTE_CACHE_47_19 25
#define EXECUTE_CACHE_47_17 27
#define EXECUTE_CACHE_47_12 29
#define EXECUTE_CACHE_47_10 31
#define EXECUTE_CACHE_47_8 33
#define FREE_REFERENCES_LABEL_47_0 20
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd8;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_47_4);
      goto uncompress_internal_14;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto lambda_18;

    case 2:
      current_block = (Rpc - LABEL_47_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_47_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_47_13);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_47_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_47_14);
      goto lambda_19;

    case 7:
      current_block = (Rpc - LABEL_47_16);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_47_18);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (uncompress_internal_17)
DEFLABEL (uncompress_internal_14)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_10]));

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_47_5);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_47_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_47_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_47_11);
  if (Rvl == (current_block [OBJECT_47_0]))
    goto label_21;

DEFLABEL (label_20)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Rsp [2]) = (Wrd10.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_47_4]);
  (Rsp [1]) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_21)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_47_3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_47_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_14])));
  Rhp += 2;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd26 = Wrd23;
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [4]);
  ((Wrd26.pObj) [2]) = (Wrd29.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [3]) = (Wrd25.Obj);
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_16]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd28.pObj) [3]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_47_16);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_20]));

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_47_14);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_47_18);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Lng) = (LEFT_SHIFT ((Wrd7.Lng), 1));
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_21]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define TAG_48_6 1
#define LABEL_48_12 7
#define LABEL_48_13 9
#define LABEL_48_7 11
#define LABEL_48_14 13
#define LABEL_48_15 15
#define LABEL_48_16 17
#define LABEL_48_17 19
#define LABEL_48_8 21
#define LABEL_48_18 23
#define LABEL_48_19 25
#define LABEL_48_20 27
#define LABEL_48_21 29
#define LABEL_48_10 31
#define TAG_48_11 14
#define LABEL_48_23 33
#define LABEL_48_24 35
#define LABEL_48_26 37
#define LABEL_48_27 39
#define LABEL_48_28 41
#define LABEL_48_29 43
#define LABEL_48_22 45
#define LABEL_48_35 47
#define LABEL_48_36 49
#define LABEL_48_37 51
#define LABEL_48_38 53
#define LABEL_48_39 55
#define LABEL_48_40 57
#define LABEL_48_41 59
#define LABEL_48_30 61
#define LABEL_48_31 63
#define TAG_48_32 30
#define LABEL_48_43 65
#define LABEL_48_44 67
#define LABEL_48_45 69
#define LABEL_48_46 71
#define LABEL_48_47 73
#define LABEL_48_33 75
#define TAG_48_34 36
#define LABEL_48_51 77
#define LABEL_48_52 79
#define LABEL_48_53 81
#define LABEL_48_48 83
#define LABEL_48_50 85
#define LABEL_48_54 87
#define LABEL_48_55 89
#define LABEL_48_56 91
#define LABEL_48_57 93
#define ENVIRONMENT_LABEL_48_3 112
#define DEBUGGING_LABEL_48_2 111
#define OBJECT_48_5 110
#define OBJECT_48_4 109
#define OBJECT_48_3 108
#define OBJECT_48_2 107
#define OBJECT_48_1 106
#define OBJECT_48_0 105
#define EXECUTE_CACHE_48_49 95
#define EXECUTE_CACHE_48_42 97
#define EXECUTE_CACHE_48_25 99
#define EXECUTE_CACHE_48_9 101
#define FREE_REFERENCE_48_0 104
#define FREE_REFERENCES_LABEL_48_0 94
#define NUMBER_OF_LINKER_SECTIONS_48_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd19;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd69;
  machine_word Wrd65;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd81;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd114;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd100;
  machine_word Wrd101;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd29;
  machine_word Wrd5;
  machine_word Wrd39;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_48_4);
      goto lookup_uncompressed_file_44;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto lambda_82;

    case 2:
      current_block = (Rpc - LABEL_48_12);
      goto label_46;

    case 3:
      current_block = (Rpc - LABEL_48_13);
      goto label_47;

    case 4:
      current_block = (Rpc - LABEL_48_7);
      goto lambda_2;

    case 5:
      current_block = (Rpc - LABEL_48_14);
      goto label_48;

    case 6:
      current_block = (Rpc - LABEL_48_15);
      goto label_49;

    case 7:
      current_block = (Rpc - LABEL_48_16);
      goto label_50;

    case 8:
      current_block = (Rpc - LABEL_48_17);
      goto label_51;

    case 9:
      current_block = (Rpc - LABEL_48_8);
      goto lambda_43;

    case 10:
      current_block = (Rpc - LABEL_48_18);
      goto label_52;

    case 11:
      current_block = (Rpc - LABEL_48_19);
      goto label_53;

    case 12:
      current_block = (Rpc - LABEL_48_20);
      goto label_54;

    case 13:
      current_block = (Rpc - LABEL_48_21);
      goto label_55;

    case 14:
      current_block = (Rpc - LABEL_48_10);
      goto loop_38;

    case 15:
      current_block = (Rpc - LABEL_48_23);
      goto label_56;

    case 16:
      current_block = (Rpc - LABEL_48_24);
      goto label_57;

    case 17:
      current_block = (Rpc - LABEL_48_26);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_48_27);
      goto label_65;

    case 19:
      current_block = (Rpc - LABEL_48_28);
      goto label_66;

    case 20:
      current_block = (Rpc - LABEL_48_29);
      goto label_67;

    case 21:
      current_block = (Rpc - LABEL_48_22);
      goto continuation_8;

    case 22:
      current_block = (Rpc - LABEL_48_35);
      goto label_58;

    case 23:
      current_block = (Rpc - LABEL_48_36);
      goto label_59;

    case 24:
      current_block = (Rpc - LABEL_48_37);
      goto label_64;

    case 25:
      current_block = (Rpc - LABEL_48_38);
      goto label_60;

    case 26:
      current_block = (Rpc - LABEL_48_39);
      goto label_61;

    case 27:
      current_block = (Rpc - LABEL_48_40);
      goto label_62;

    case 28:
      current_block = (Rpc - LABEL_48_41);
      goto label_63;

    case 29:
      current_block = (Rpc - LABEL_48_30);
      goto lambda_20;

    case 30:
      current_block = (Rpc - LABEL_48_31);
      goto lambda_86;

    case 31:
      current_block = (Rpc - LABEL_48_43);
      goto label_68;

    case 32:
      current_block = (Rpc - LABEL_48_44);
      goto label_69;

    case 33:
      current_block = (Rpc - LABEL_48_45);
      goto label_72;

    case 34:
      current_block = (Rpc - LABEL_48_46);
      goto label_70;

    case 35:
      current_block = (Rpc - LABEL_48_47);
      goto label_71;

    case 36:
      current_block = (Rpc - LABEL_48_33);
      goto lambda_87;

    case 37:
      current_block = (Rpc - LABEL_48_51);
      goto label_73;

    case 38:
      current_block = (Rpc - LABEL_48_52);
      goto label_74;

    case 39:
      current_block = (Rpc - LABEL_48_53);
      goto label_75;

    case 40:
      current_block = (Rpc - LABEL_48_48);
      goto continuation_36;

    case 41:
      current_block = (Rpc - LABEL_48_50);
      goto continuation_24;

    case 42:
      current_block = (Rpc - LABEL_48_54);
      goto label_76;

    case 43:
      current_block = (Rpc - LABEL_48_55);
      goto label_77;

    case 44:
      current_block = (Rpc - LABEL_48_56);
      goto label_79;

    case 45:
      current_block = (Rpc - LABEL_48_57);
      goto label_78;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lookup_uncompressed_file_81)
DEFLABEL (lookup_uncompressed_file_44)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (Rsp [0]) = (Wrd14.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (Rsp [2]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_9]));

DEFLABEL (lambda_82)
  CLOSURE_HEADER (LABEL_48_5);

DEFLABEL (lambda_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_10])));
  Rhp += 3;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  Wrd32 = Wrd36;
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  ((Wrd32.pObj) [2]) = (Wrd35.Obj);
  (Wrd30.Obj) = ((Wrd34.pObj) [3]);
  ((Wrd32.pObj) [3]) = (Wrd30.Obj);
  (Wrd25.Obj) = ((Wrd34.pObj) [4]);
  ((Wrd32.pObj) [4]) = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_92;
  Wrd8 = Wrd12;

DEFLABEL (label_91)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_90;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_89)
  (Rsp [1]) = (Wrd14.Obj);
  goto loop_38;

DEFLABEL (label_90)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_47)
  (Wrd14.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_12])), (Wrd9.pObj));

DEFLABEL (label_46)
  (Wrd8.Obj) = Rvl;
  goto label_91;

DEFLABEL (lambda_84)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_48_7);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_101;
  Wrd6 = Wrd10;

DEFLABEL (label_100)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_99;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd12.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_98)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_97;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd24.Lng) = ((Wrd25.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_97;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_96)
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_95;
  Wrd27 = Wrd31;

DEFLABEL (label_94)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_93;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd36.Obj) = (Rsp [1]);
  ((Wrd35.pObj) [0]) = (Wrd36.Obj);
  Rvl = (current_block [OBJECT_48_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_93)
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_3]), 2);

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_17])), (Wrd28.pObj));

DEFLABEL (label_51)
  (Wrd27.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_16]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_49)
  (Wrd12.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_14])), (Wrd7.pObj));

DEFLABEL (label_48)
  (Wrd6.Obj) = Rvl;
  goto label_100;

DEFLABEL (lambda_85)
DEFLABEL (lambda_43)
  INTERRUPT_CHECK (26, LABEL_48_8);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_110;
  Wrd6 = Wrd10;

DEFLABEL (label_109)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_108;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd12.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_107)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_106;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd24.Lng) = ((Wrd25.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_106;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_105)
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_104;
  Wrd27 = Wrd31;

DEFLABEL (label_103)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_102;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd36.Obj) = (Rsp [1]);
  ((Wrd35.pObj) [0]) = (Wrd36.Obj);
  Rvl = (current_block [OBJECT_48_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_102)
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_3]), 2);

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_21])), (Wrd28.pObj));

DEFLABEL (label_55)
  (Wrd27.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_20]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_19]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_53)
  (Wrd12.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_18])), (Wrd7.pObj));

DEFLABEL (label_52)
  (Wrd6.Obj) = Rvl;
  goto label_109;

DEFLABEL (loop_83)
DEFLABEL (loop_38)
  INTERRUPT_CHECK (26, LABEL_48_10);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_48_4])))
    goto label_111;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [2]);
  (Rsp [1]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_111)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_136;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_135)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_134;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_133)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_25]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_48_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_115;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_132;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_131)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_130;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_129)
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_128;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_115;

DEFLABEL (label_127)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_26]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_126;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [0]);

DEFLABEL (label_125)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_124;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd48.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_123)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_122;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_121)
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [4]);
  (* (--Rsp)) = (Wrd64.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_42]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_48_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_112;
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_30]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd77.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_31])));
  Rhp += 1;
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd77.pObj)));
  Wrd78 = Wrd77;
  (Wrd79.Obj) = (Rsp [2]);
  ((Wrd78.pObj) [2]) = (Wrd79.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd82.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_33])));
  Rhp += 3;
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd82.pObj)));
  Wrd87 = Wrd82;
  (Wrd88.Obj) = (Rsp [1]);
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [3]);
  ((Wrd87.pObj) [2]) = (Wrd90.Obj);
  ((Wrd87.pObj) [3]) = (Wrd88.Obj);
  ((Wrd87.pObj) [4]) = (Wrd79.Obj);
  (Rsp [1]) = (Wrd81.Obj);
  (Rsp [2]) = (Wrd76.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_9]));

DEFLABEL (label_112)
  (Wrd94.Obj) = (Rsp [1]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 1))
    goto label_120;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd91.Obj) = ((Wrd93.pObj) [0]);

DEFLABEL (label_119)
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd102.uLng) == 1))
    goto label_118;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd100.Obj) = ((Wrd101.pObj) [1]);

DEFLABEL (label_117)
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd109.uLng) == 1))
    goto label_116;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  ((Wrd107.pObj) [1]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_115)
  (Wrd26.Obj) = (Rsp [0]);
  (Rsp [0]) = (Wrd26.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_114;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_113)
  (Rsp [1]) = (Wrd27.Obj);
  goto loop_38;

DEFLABEL (label_114)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_38]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_60)
  (Wrd27.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_29]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_5]), 2);

DEFLABEL (label_67)
  goto label_115;

DEFLABEL (label_118)
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_28]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_66)
  (Wrd100.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_27]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_65)
  (Wrd91.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_41]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_40]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_62)
  (Wrd48.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_39]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_61)
  (Wrd39.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_37]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_64)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_115;
  goto label_127;

DEFLABEL (label_130)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_36]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_59)
  (Wrd16.Obj) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_35]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_58)
  (Wrd7.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_24]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_23]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_56)
  (Wrd13.Obj) = Rvl;
  goto label_135;

DEFLABEL (lambda_88)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_48_30);
  Rvl = (current_block [OBJECT_48_2]);
  goto pop_return;

DEFLABEL (lambda_86)
  CLOSURE_HEADER (LABEL_48_31);

DEFLABEL (lambda_37)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_148;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_147)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_146;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_145)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_144;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  if (! ((Wrd28.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_138;

DEFLABEL (label_137)
  Rvl = (current_block [OBJECT_48_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_138)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [2]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_143;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd32.Obj) = ((Wrd36.pObj) [0]);

DEFLABEL (label_142)
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_141;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [1]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_140)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_48]))));
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_49]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_48_48);
  (Rsp [1]) = Rvl;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_139;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  ((Wrd8.pObj) [1]) = Rvl;
  Rvl = (current_block [OBJECT_48_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_139)
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_5]), 2);

DEFLABEL (label_141)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_47]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_71)
  (* (--Rsp)) = Rvl;
  goto label_140;

DEFLABEL (label_143)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_46]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_70)
  (Wrd32.Obj) = Rvl;
  goto label_142;

DEFLABEL (label_144)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_45]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_72)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_137;
  goto label_138;

DEFLABEL (label_146)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_44]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_69)
  (Wrd20.Obj) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_43]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_68)
  (Wrd5.Obj) = Rvl;
  goto label_147;

DEFLABEL (lambda_87)
  CLOSURE_HEADER (LABEL_48_33);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [4]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_163;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd8.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_162)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_161;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_160)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_159;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_158)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [2]);
  (* (--Rsp)) = (Wrd39.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_48_50);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_149;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_149)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [4]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_157;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd9.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_156)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_155;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd24.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_154)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_153;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  ((Wrd49.pObj) [1]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_152)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [3]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd41.Obj) = ((Wrd33.pObj) [4]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_151;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd34.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_150)
  (Rsp [1]) = (Wrd34.Obj);
  goto loop_38;

DEFLABEL (label_151)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_57]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_78)
  (Wrd34.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_56]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_5]), 2);

DEFLABEL (label_79)
  goto label_152;

DEFLABEL (label_155)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_55]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_77)
  (Wrd24.Obj) = Rvl;
  goto label_154;

DEFLABEL (label_157)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_54]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_76)
  (Wrd9.Obj) = Rvl;
  goto label_156;

DEFLABEL (label_159)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_53]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_75)
  (* (--Rsp)) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_52]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_74)
  (Wrd23.Obj) = Rvl;
  goto label_160;

DEFLABEL (label_163)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_51]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_73)
  (Wrd8.Obj) = Rvl;
  goto label_162;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_7 7
#define LABEL_49_9 9
#define TAG_49_10 3
#define LABEL_49_11 11
#define LABEL_49_12 13
#define TAG_49_13 5
#define LABEL_49_16 15
#define LABEL_49_15 17
#define LABEL_49_17 19
#define LABEL_49_18 21
#define LABEL_49_19 23
#define TAG_49_20 10
#define LABEL_49_22 25
#define LABEL_49_23 27
#define LABEL_49_24 29
#define ENVIRONMENT_LABEL_49_3 45
#define DEBUGGING_LABEL_49_2 44
#define OBJECT_49_2 43
#define OBJECT_49_1 42
#define OBJECT_49_0 41
#define EXECUTE_CACHE_49_21 31
#define EXECUTE_CACHE_49_14 33
#define EXECUTE_CACHE_49_8 35
#define EXECUTE_CACHE_49_6 37
#define FREE_REFERENCE_49_0 40
#define FREE_REFERENCES_LABEL_49_0 30
#define NUMBER_OF_LINKER_SECTIONS_49_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_49_4);
      goto call_with_uncompressed_file_pathname_17;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_49_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_49_9);
      goto lambda_25;

    case 4:
      current_block = (Rpc - LABEL_49_11);
      goto lambda_4;

    case 5:
      current_block = (Rpc - LABEL_49_12);
      goto lambda_26;

    case 6:
      current_block = (Rpc - LABEL_49_16);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_49_15);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_49_17);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_49_18);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_49_19);
      goto lambda_28;

    case 11:
      current_block = (Rpc - LABEL_49_22);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_49_23);
      goto label_21;

    case 13:
      current_block = (Rpc - LABEL_49_24);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_uncompressed_file_pathname_24)
DEFLABEL (call_with_uncompressed_file_pathname_17)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_49_7);
  (Wrd9.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_9])));
  Rhp += 3;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd21 = Wrd16;
  (Wrd22.Obj) = (Rsp [3]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  ((Wrd21.pObj) [3]) = (Wrd9.Obj);
  ((Wrd21.pObj) [4]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_11]))));
  (Rsp [1]) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_12])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  ((Wrd27.pObj) [2]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd26.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_14]));

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_49_9);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_49_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_19])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_49_18);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_27)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_49_11);
  Rvl = (current_block [OBJECT_49_0]);
  goto pop_return;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_49_12);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_31;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_30)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_49_17);
  (Rsp [1]) = Rvl;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_29;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  ((Wrd8.pObj) [1]) = Rvl;
  Rvl = (current_block [OBJECT_49_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_2]), 2);

DEFLABEL (label_31)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_49_19);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_38;
  Wrd5 = Wrd9;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_36;
  Wrd12 = Wrd16;

DEFLABEL (label_35)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_34;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd18.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_33)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [2]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Rsp [1]) = (Wrd25.Obj);
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_32;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  ((Wrd33.pObj) [1]) = (Wrd25.Obj);
  Rvl = (current_block [OBJECT_49_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_2]), 2);

DEFLABEL (label_34)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_24]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 1);

DEFLABEL (label_22)
  (Wrd18.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_23])), (Wrd13.pObj));

DEFLABEL (label_21)
  (Wrd12.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_22])), (Wrd6.pObj));

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_6 7
#define LABEL_50_7 9
#define LABEL_50_9 11
#define LABEL_50_10 13
#define LABEL_50_11 15
#define LABEL_50_8 17
#define LABEL_50_13 19
#define ENVIRONMENT_LABEL_50_3 30
#define DEBUGGING_LABEL_50_2 29
#define OBJECT_50_3 28
#define OBJECT_50_2 27
#define OBJECT_50_1 26
#define OBJECT_50_0 25
#define EXECUTE_CACHE_50_12 21
#define FREE_REFERENCE_50_0 24
#define FREE_REFERENCES_LABEL_50_0 20
#define NUMBER_OF_LINKER_SECTIONS_50_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_50_4);
      goto delete_uncompressed_filesB_10;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_50_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_50_7);
      goto do_loop_8;

    case 4:
      current_block = (Rpc - LABEL_50_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_50_10);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_50_11);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_50_8);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_50_13);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_uncompressed_filesB_19)
DEFLABEL (delete_uncompressed_filesB_10)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_24;
  Wrd6 = Wrd10;

DEFLABEL (label_23)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_22;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_21)
  goto do_loop_8;

DEFLABEL (label_22)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_5])), (Wrd7.pObj));

DEFLABEL (label_12)
  (Wrd6.Obj) = Rvl;
  goto label_23;

DEFLABEL (do_loop_20)
DEFLABEL (do_loop_8)
  INTERRUPT_CHECK (26, LABEL_50_7);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_50_1])))
    goto label_25;
  Rvl = (current_block [OBJECT_50_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_33;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_32)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_31;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_30)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_29;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_50_8);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_27;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_26)
  (Rsp [0]) = (Wrd5.Obj);
  goto do_loop_8;

DEFLABEL (label_27)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_3]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_15)
  (Wrd19.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_3]), 1);

DEFLABEL (label_14)
  (Wrd10.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_6 7
#define LABEL_51_7 9
#define LABEL_51_8 11
#define LABEL_51_10 13
#define LABEL_51_11 15
#define LABEL_51_12 17
#define LABEL_51_13 19
#define LABEL_51_14 21
#define LABEL_51_15 23
#define LABEL_51_16 25
#define LABEL_51_17 27
#define LABEL_51_18 29
#define LABEL_51_19 31
#define LABEL_51_20 33
#define LABEL_51_21 35
#define LABEL_51_22 37
#define LABEL_51_23 39
#define LABEL_51_24 41
#define LABEL_51_25 43
#define LABEL_51_26 45
#define LABEL_51_27 47
#define LABEL_51_29 49
#define LABEL_51_30 51
#define LABEL_51_31 53
#define LABEL_51_33 55
#define LABEL_51_28 57
#define LABEL_51_34 59
#define ENVIRONMENT_LABEL_51_3 74
#define DEBUGGING_LABEL_51_2 73
#define OBJECT_51_4 72
#define OBJECT_51_3 71
#define OBJECT_51_2 70
#define OBJECT_51_1 69
#define OBJECT_51_0 68
#define EXECUTE_CACHE_51_32 61
#define EXECUTE_CACHE_51_9 63
#define FREE_REFERENCE_51_1 66
#define FREE_REFERENCE_51_0 67
#define FREE_REFERENCES_LABEL_51_0 60
#define NUMBER_OF_LINKER_SECTIONS_51_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd137;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd124;
  machine_word Wrd125;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd115;
  machine_word Wrd117;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd114;
  machine_word Wrd145;
  machine_word Wrd138;
  machine_word Wrd140;
  machine_word Wrd111;
  machine_word Wrd105;
  machine_word Wrd106;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd96;
  machine_word Wrd98;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd154;
  machine_word Wrd147;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd85;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd69;
  machine_word Wrd65;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd64;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd161;
  machine_word Wrd157;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_51_4);
      goto clean_uncompressed_filesB_28;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto label_30;

    case 2:
      current_block = (Rpc - LABEL_51_6);
      goto label_31;

    case 3:
      current_block = (Rpc - LABEL_51_7);
      goto label_32;

    case 4:
      current_block = (Rpc - LABEL_51_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_51_10);
      goto label_33;

    case 6:
      current_block = (Rpc - LABEL_51_11);
      goto label_34;

    case 7:
      current_block = (Rpc - LABEL_51_12);
      goto label_35;

    case 8:
      current_block = (Rpc - LABEL_51_13);
      goto loop_25;

    case 9:
      current_block = (Rpc - LABEL_51_14);
      goto label_36;

    case 10:
      current_block = (Rpc - LABEL_51_15);
      goto label_37;

    case 11:
      current_block = (Rpc - LABEL_51_16);
      goto label_53;

    case 12:
      current_block = (Rpc - LABEL_51_17);
      goto label_39;

    case 13:
      current_block = (Rpc - LABEL_51_18);
      goto label_40;

    case 14:
      current_block = (Rpc - LABEL_51_19);
      goto label_41;

    case 15:
      current_block = (Rpc - LABEL_51_20);
      goto label_42;

    case 16:
      current_block = (Rpc - LABEL_51_21);
      goto label_43;

    case 17:
      current_block = (Rpc - LABEL_51_22);
      goto label_44;

    case 18:
      current_block = (Rpc - LABEL_51_23);
      goto label_45;

    case 19:
      current_block = (Rpc - LABEL_51_24);
      goto label_52;

    case 20:
      current_block = (Rpc - LABEL_51_25);
      goto label_46;

    case 21:
      current_block = (Rpc - LABEL_51_26);
      goto label_47;

    case 22:
      current_block = (Rpc - LABEL_51_27);
      goto label_51;

    case 23:
      current_block = (Rpc - LABEL_51_29);
      goto label_48;

    case 24:
      current_block = (Rpc - LABEL_51_30);
      goto label_49;

    case 25:
      current_block = (Rpc - LABEL_51_31);
      goto label_50;

    case 26:
      current_block = (Rpc - LABEL_51_33);
      goto label_38;

    case 27:
      current_block = (Rpc - LABEL_51_28);
      goto continuation_22;

    case 28:
      current_block = (Rpc - LABEL_51_34);
      goto label_54;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (clean_uncompressed_filesB_56)
DEFLABEL (clean_uncompressed_filesB_28)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_70;
  Wrd6 = Wrd10;

DEFLABEL (label_69)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_68;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd12.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_67)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_66;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if ((Wrd29.Lng) == 0)
    goto label_59;

DEFLABEL (label_58)
  Rvl = (current_block [OBJECT_51_1]);
  goto pop_return;

DEFLABEL (label_59)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_51_8);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_65;
  Wrd5 = Wrd9;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_63;
  Wrd12 = Wrd16;

DEFLABEL (label_62)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_61;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_60)
  goto loop_25;

DEFLABEL (label_61)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_12]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_11])), (Wrd13.pObj));

DEFLABEL (label_34)
  (Wrd12.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_10])), (Wrd6.pObj));

DEFLABEL (label_33)
  (Wrd5.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_66)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  goto label_59;

DEFLABEL (label_68)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_0]), 1);

DEFLABEL (label_31)
  (Wrd12.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_5])), (Wrd7.pObj));

DEFLABEL (label_30)
  (Wrd6.Obj) = Rvl;
  goto label_69;

DEFLABEL (loop_57)
DEFLABEL (loop_25)
  INTERRUPT_CHECK (26, LABEL_51_13);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_51_3])))
    goto label_71;
  Rvl = (current_block [OBJECT_51_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_110;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_109)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_108;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_107)
  (Wrd157.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd157.uLng) == 1))
    goto label_106;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_91;

DEFLABEL (label_105)
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_1]));
  (Wrd40.Obj) = ((Wrd37.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_104;
  Wrd36 = Wrd40;

DEFLABEL (label_103)
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_102;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [0]);

DEFLABEL (label_101)
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_100;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd51.Obj) = ((Wrd52.pObj) [1]);

DEFLABEL (label_99)
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_98;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd58.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_97)
  (Wrd71.Obj) = (Rsp [3]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 26))
    goto label_96;
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd73.uLng) == 26))
    goto label_96;
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  (Wrd74.Lng) = ((Wrd76.Lng) - (Wrd77.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd74.Lng)))
    goto label_96;
  (Wrd70.Obj) = (LONG_TO_FIXNUM (Wrd74.Lng));

DEFLABEL (label_95)
  (Wrd78.Obj) = (* (Rsp++));
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd79.uLng) == 26))
    goto label_94;
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd80.uLng) == 26))
    goto label_94;
  (Wrd155.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  (Wrd156.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  if ((Wrd155.Lng) < (Wrd156.Lng))
    goto label_91;

DEFLABEL (label_90)
  (Wrd90.Obj) = (Rsp [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 1))
    goto label_89;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd87.Obj) = ((Wrd89.pObj) [1]);

DEFLABEL (label_88)
  (Wrd148.Obj) = (Rsp [1]);
  (Wrd149.uLng) = (OBJECT_TYPE (Wrd148.Obj));
  if (! ((Wrd149.uLng) == 1))
    goto label_87;
  (Wrd147.pObj) = (OBJECT_ADDRESS (Wrd148.Obj));
  ((Wrd147.pObj) [1]) = (Wrd87.Obj);

DEFLABEL (label_86)
  (Wrd99.Obj) = (Rsp [0]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd100.uLng) == 1))
    goto label_85;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd96.Obj) = ((Wrd98.pObj) [0]);

DEFLABEL (label_84)
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd107.uLng) == 1))
    goto label_83;
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd105.Obj) = ((Wrd106.pObj) [1]);

DEFLABEL (label_82)
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd140.uLng) == 1))
    goto label_81;
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  ((Wrd138.pObj) [1]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_80)
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_28]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (Wrd118.Obj) = (Rsp [1]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd119.uLng) == 1))
    goto label_79;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd115.Obj) = ((Wrd117.pObj) [0]);

DEFLABEL (label_78)
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if (! ((Wrd126.uLng) == 1))
    goto label_77;
  (Wrd125.pObj) = (OBJECT_ADDRESS (Wrd115.Obj));
  (Wrd124.Obj) = ((Wrd125.pObj) [1]);

DEFLABEL (label_76)
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if (! ((Wrd133.uLng) == 1))
    goto label_75;
  (Wrd131.pObj) = (OBJECT_ADDRESS (Wrd124.Obj));
  (Wrd132.Obj) = ((Wrd131.pObj) [0]);
  (* (--Rsp)) = (Wrd132.Obj);

DEFLABEL (label_74)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_32]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_51_28);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_73;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_72)
  (Rsp [0]) = (Wrd5.Obj);
  goto loop_25;

DEFLABEL (label_73)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_34]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_54)
  (Wrd5.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_31]))));
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_0]), 1);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_30]))));
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_49)
  (Wrd124.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_29]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_0]), 1);

DEFLABEL (label_48)
  (Wrd115.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_27]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_4]), 2);

DEFLABEL (label_51)
  goto label_80;

DEFLABEL (label_83)
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_26]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_47)
  (Wrd105.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_25]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_0]), 1);

DEFLABEL (label_46)
  (Wrd96.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_24]))));
  (* (--Rsp)) = (Wrd154.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd148.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_4]), 2);

DEFLABEL (label_52)
  goto label_86;

DEFLABEL (label_89)
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_23]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_45)
  (Wrd87.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd26.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_93;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_92)
  (Rsp [0]) = (Wrd27.Obj);
  goto loop_25;

DEFLABEL (label_93)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_33]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_38)
  (Wrd27.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_94)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_22]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_44)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_90;
  goto label_91;

DEFLABEL (label_96)
  (Wrd65.Obj) = (Rsp [3]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_21]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_43)
  (Wrd70.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_20]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_42)
  (Wrd58.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_19]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_41)
  (Wrd51.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_18]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_0]), 1);

DEFLABEL (label_40)
  (Wrd42.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_17])), (Wrd37.pObj));

DEFLABEL (label_39)
  (Wrd36.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd161.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_16]))));
  (* (--Rsp)) = (Wrd161.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_53)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_91;
  goto label_105;

DEFLABEL (label_108)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_37)
  (Wrd16.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_0]), 1);

DEFLABEL (label_36)
  (Wrd7.Obj) = Rvl;
  goto label_109;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define ENVIRONMENT_LABEL_52_3 12
#define DEBUGGING_LABEL_52_2 11
#define OBJECT_52_2 10
#define OBJECT_52_1 9
#define OBJECT_52_0 8
#define FREE_ASSIGNMENT_52_0 7
#define FREE_REFERENCES_LABEL_52_0 6
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infutl_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_52_4);
      goto initialize_uncompressed_filesB_1;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_uncompressed_filesB_5)
DEFLABEL (initialize_uncompressed_filesB_1)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd8.Obj) = (current_block [OBJECT_52_0]);
  (Wrd9.Obj) = (current_block [OBJECT_52_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_52_0]));
  (Wrd18.Obj) = ((Wrd10.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_8;

DEFLABEL (label_7)
  ((Wrd10.pObj) [0]) = (Wrd5.Obj);

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_52_2]);
  goto pop_return;

DEFLABEL (label_8)
  if ((Wrd18.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_7;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_52_5])), (Wrd10.pObj), (Wrd5.Obj));

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
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
infutl_so_51ecddcef079dca2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	2,
	1,
	2,
	2,
	1,
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
	1,
	1,
	1,
	1,
	1,
	0,
	0,
	1,
	1,
	1,
	1,
	2,
	3,
	3,
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	2,
	3,
	3,
	1,
	2,
	1,
	1,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 52)
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

static const struct liarc_code_S arr_decl_infutl_so_51ecddcef079dca2 [52] =
  {
    { "infutl_so_code_1", 16, infutl_so_code_1 },
    { "infutl_so_code_2", 3, infutl_so_code_2 },
    { "infutl_so_code_3", 6, infutl_so_code_3 },
    { "infutl_so_code_4", 7, infutl_so_code_4 },
    { "infutl_so_code_5", 14, infutl_so_code_5 },
    { "infutl_so_code_6", 7, infutl_so_code_6 },
    { "infutl_so_code_7", 7, infutl_so_code_7 },
    { "infutl_so_code_8", 20, infutl_so_code_8 },
    { "infutl_so_code_9", 4, infutl_so_code_9 },
    { "infutl_so_code_10", 3, infutl_so_code_10 },
    { "infutl_so_code_11", 2, infutl_so_code_11 },
    { "infutl_so_code_12", 8, infutl_so_code_12 },
    { "infutl_so_code_13", 3, infutl_so_code_13 },
    { "infutl_so_code_14", 10, infutl_so_code_14 },
    { "infutl_so_code_15", 5, infutl_so_code_15 },
    { "infutl_so_code_16", 14, infutl_so_code_16 },
    { "infutl_so_code_17", 10, infutl_so_code_17 },
    { "infutl_so_code_18", 9, infutl_so_code_18 },
    { "infutl_so_code_19", 12, infutl_so_code_19 },
    { "infutl_so_code_20", 16, infutl_so_code_20 },
    { "infutl_so_code_21", 11, infutl_so_code_21 },
    { "infutl_so_code_22", 2, infutl_so_code_22 },
    { "infutl_so_code_23", 4, infutl_so_code_23 },
    { "infutl_so_code_24", 11, infutl_so_code_24 },
    { "infutl_so_code_25", 2, infutl_so_code_25 },
    { "infutl_so_code_26", 2, infutl_so_code_26 },
    { "infutl_so_code_27", 3, infutl_so_code_27 },
    { "infutl_so_code_28", 3, infutl_so_code_28 },
    { "infutl_so_code_29", 3, infutl_so_code_29 },
    { "infutl_so_code_30", 3, infutl_so_code_30 },
    { "infutl_so_code_31", 3, infutl_so_code_31 },
    { "infutl_so_code_32", 10, infutl_so_code_32 },
    { "infutl_so_code_33", 5, infutl_so_code_33 },
    { "infutl_so_code_34", 4, infutl_so_code_34 },
    { "infutl_so_code_35", 2, infutl_so_code_35 },
    { "infutl_so_code_36", 5, infutl_so_code_36 },
    { "infutl_so_code_37", 17, infutl_so_code_37 },
    { "infutl_so_code_38", 13, infutl_so_code_38 },
    { "infutl_so_code_39", 5, infutl_so_code_39 },
    { "infutl_so_code_40", 6, infutl_so_code_40 },
    { "infutl_so_code_41", 13, infutl_so_code_41 },
    { "infutl_so_code_42", 2, infutl_so_code_42 },
    { "infutl_so_code_43", 4, infutl_so_code_43 },
    { "infutl_so_code_44", 24, infutl_so_code_44 },
    { "infutl_so_code_45", 7, infutl_so_code_45 },
    { "infutl_so_code_46", 26, infutl_so_code_46 },
    { "infutl_so_code_47", 9, infutl_so_code_47 },
    { "infutl_so_code_48", 46, infutl_so_code_48 },
    { "infutl_so_code_49", 14, infutl_so_code_49 },
    { "infutl_so_code_50", 9, infutl_so_code_50 },
    { "infutl_so_code_51", 29, infutl_so_code_51 },
    { "infutl_so_code_52", 2, infutl_so_code_52 }
  };

int
decl_infutl_so_51ecddcef079dca2 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_infutl_so_51ecddcef079dca2);
  return (0);
}

DECLARE_COMPILED_CODE ("infutl.so", 3, decl_infutl_so_51ecddcef079dca2, infutl_so_51ecddcef079dca2)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_infutl_so_data_51ecddcef079dca2 [10016] =
  "\xa3\x01\x61\xe6\x11\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\x0d\x0d"
  "\x08\x0d\x0d\xb9\x25\x0d\x0d\x0d\x0d\x0d\xba\x0d\xbb\x0d\x0d\xbc"
  "\x0d\x0d\xbd\x24\x28\x0d\x28\xb3\x28\x0d\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbe\x1d\xb0\x82\x88\x28\x0d\xbf\x28\x0d\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0c"
  "\x08\x0c\x0c\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xc1\x1c"
  "\xc1\x1c\x08\x80\x28\x0d\x1c\x28\x1b\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88"
  "\x0d\x1c\x25\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x06\x1b\x25\x1b\x24\x28\x1b\x28\x0d"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x83\xc2\x1c\x82\x07"
  "\x1d\x0d\x0d\x1c\x0d\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xc1\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\xb7\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d"
  "\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x81\x1b\x80\x1d\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x28\xb7\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x07\xc1\x1c\x28"
  "\xb7\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbf\x1d\xb0\x02\x88\x1d\x0d\x1c\x25\x1b\x24\x28\x1b"
  "\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1d\xc2\x1c\x1b\x25\x1b\x24\x28\x1b\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x08\x1b\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28"
  "\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x84\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1b\x84\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x1b\x1b\x84\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1b\x1b\x84\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1b\x1b\x84\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x1b\x1b\x84\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1b\x1b\x84\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x07"
  "\x81\x80\x1b\x1b\x1b\x84\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x84\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\xb1\x24\x28\x0d\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x02\x28\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x80\x1b\x1b\x1b"
  "\x28\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x0c\x0c\x0c\x08\x89\x1b\x06\x08\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x07\x28\x1b\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c"
  "\x84\x1b\x80\x1b\x0c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x02\x1d\x0d\x24\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x1b"
  "\xc2\x07\x1b\x82\x1b\xc2\x80\xc1\x1c\x02\x28\x1b\x28\x0d\x28\x1b"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x08\x0d\x0d\x1c"
  "\x0d\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x07\x08\x0d\x1c\x1b\x0d\x1c\x0d\x1b\x24\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x28"
  "\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x0c\x80\x1b\x02\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x08\xc2\x1d\x1b\x1b\x0d\x1c\x24\x28\x0d\x1c\x28\x1b"
  "\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1d\x1b\x24\x28"
  "\x0d\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x08\x1b"
  "\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x08\x1b\x1d\x1b\x1b\x0d\x1c\x24\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x08\x80\x1b\x25\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88"
  "\x1b\x1e\x02\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x02\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x06\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x08\xb7\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x06\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb6"
  "\x2a\x17\x1b\x1b\x1b\xb3\xb5\xb4\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x0d\x1b\x1b\x0d\x1b\x0d\x0d\x0d\xb1\x1b\x1b\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x1b\x1b\x1b\x0d"
  "\x0d\x1b\x0d\x1b\x1b\x1b\x1b\xb2\x1b\x1b\x1b\x1b\x1b\x0d\x17\x28"
  "\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65"
  "\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61"
  "\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74"
  "\x69\x6d\x65\x2f\x2e\x2f\x69\x6e\x66\x75\x74\x6c\x2e\x69\x6e\x66"
  "\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x72\x6f\x6f\x74\x5d\x02\x15\x23\x5b\x75\x6e\x6e\x61\x6d\x65\x64"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x5d\x07\x6c\x61\x6d\x62"
  "\x64\x61\x04\x6c\x65\x74\x0a\x66\x6c\x75\x69\x64\x2d\x6c\x65\x74"
  "\x1d\x73\x70\x65\x63\x69\x61\x6c\x2d\x66\x6f\x72\x6d\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x6e\x61\x6d\x65\x73\x02\x15\x6c"
  "\x61\x6d\x62\x64\x61\x2d\x74\x61\x67\x3a\x66\x6c\x75\x69\x64\x2d"
  "\x6c\x65\x74\x0f\x6c\x61\x6d\x62\x64\x61\x2d\x74\x61\x67\x3a\x6c"
  "\x65\x74\x1a\x6c\x61\x6d\x62\x64\x61\x2d\x74\x61\x67\x3a\x69\x6e"
  "\x74\x65\x72\x6e\x61\x6c\x2d\x6c\x65\x78\x70\x72\x1b\x6c\x61\x6d"
  "\x62\x64\x61\x2d\x74\x61\x67\x3a\x69\x6e\x74\x65\x72\x6e\x61\x6c"
  "\x2d\x6c\x61\x6d\x62\x64\x61\x18\x64\x69\x73\x63\x61\x72\x64\x2d"
  "\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x21\x1f"
  "\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x75\x6e\x63\x6f\x6d"
  "\x70\x72\x65\x73\x73\x65\x64\x2d\x66\x69\x6c\x65\x73\x21\x14\x65"
  "\x76\x65\x6e\x74\x3a\x61\x66\x74\x65\x72\x2d\x72\x65\x73\x74\x6f"
  "\x72\x65\x1b\x64\x65\x6c\x65\x74\x65\x2d\x75\x6e\x63\x6f\x6d\x70"
  "\x72\x65\x73\x73\x65\x64\x2d\x66\x69\x6c\x65\x73\x21\x12\x65\x76"
  "\x65\x6e\x74\x3a\x62\x65\x66\x6f\x72\x65\x2d\x65\x78\x69\x74\x1a"
  "\x63\x6c\x65\x61\x6e\x2d\x75\x6e\x63\x6f\x6d\x70\x72\x65\x73\x73"
  "\x65\x64\x2d\x66\x69\x6c\x65\x73\x21\x0b\x03\x19\x61\x64\x64\x2d"
  "\x73\x65\x63\x6f\x6e\x64\x61\x72\x79\x2d\x67\x63\x2d\x64\x61\x65"
  "\x6d\x6f\x6e\x21\x02\x04\x14\x61\x64\x64\x2d\x65\x76\x65\x6e\x74"
  "\x2d\x72\x65\x63\x65\x69\x76\x65\x72\x21\x03\x0f\x61\x64\x64\x2d"
  "\x67\x63\x2d\x64\x61\x65\x6d\x6f\x6e\x21\x05\x13\x22\x81\x81\x02"
  "\x12\x20\x81\x81\x02\x11\x1e\x81\x85\x02\x10\x1c\x81\x83\x02\x0f"
  "\x1a\x81\x81\x02\x0e\x18\x81\x85\x02\x0d\x16\x81\x83\x02\x0c\x14"
  "\x81\x81\x02\x0b\x12\x81\x81\x02\x0a\x10\x81\x83\x02\x09\x0e\x81"
  "\x81\x02\x08\x0c\x81\x83\x02\x07\x0a\x81\x83\x02\x06\x08\x81\x83"
  "\x02\x05\x06\x81\x81\x02\x04\x04\x82\x02\x21\x3f\x02\x03\x26\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f"
  "\x63\x6b\x2f\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x77\x72\x61"
  "\x70\x70\x65\x72\x03\x17\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d"
  "\x77\x72\x61\x70\x70\x65\x72\x2f\x69\x6e\x66\x6f\x03\x14\x72\x65"
  "\x61\x64\x2d\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66"
  "\x6f\x09\x04\x16\x08\x81\x87\x02\x15\x06\x81\x85\x02\x14\x04\x84"
  "\x06\x07\x11\x0a\x02\x03\x1b\x64\x65\x62\x75\x67\x67\x69\x6e\x67"
  "\x2d\x77\x72\x61\x70\x70\x65\x72\x2f\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x0b\x03\x0f\x72\x65\x61\x64\x2d\x62\x69\x6e\x66\x2d\x66\x69"
  "\x6c\x65\x0c\x03\x1a\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a"
  "\x65\x2d\x66\x69\x6c\x65\x2d\x77\x72\x61\x70\x70\x65\x72\x0d\x04"
  "\x15\x67\x65\x74\x2d\x77\x72\x61\x70\x70\x65\x64\x2d\x64\x62\x67"
  "\x2d\x69\x6e\x66\x6f\x04\x18\x6d\x65\x6d\x6f\x69\x7a\x65\x2d\x64"
  "\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x21\x0e\x06"
  "\x1c\x0e\x81\x85\x02\x1b\x0c\x81\x85\x02\x1a\x0a\x81\x85\x02\x19"
  "\x08\x81\x85\x02\x18\x06\x81\x83\x02\x17\x04\x83\x04\x0d\x1b\x0f"
  "\x02\x04\x69\x6e\x66\x04\x62\x63\x69\x04\x62\x69\x66\x0f\x66\x61"
  "\x73\x6c\x6f\x61\x64\x2d\x6c\x6f\x61\x64\x65\x72\x10\x02\x03\x21"
  "\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2d\x64\x65\x62"
  "\x75\x67\x2d\x69\x6e\x66\x6f\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x11\x03\x0d\x66\x69\x6c\x65\x2d\x65\x78\x69\x73\x74\x73\x3f\x12"
  "\x03\x12\x63\x6f\x6d\x70\x72\x65\x73\x73\x65\x64\x2d\x6c\x6f\x61"
  "\x64\x65\x72\x13\x03\x0d\x2d\x3e\x6e\x61\x6d\x65\x73\x74\x72\x69"
  "\x6e\x67\x14\x03\x10\x04\x19\x66\x69\x6e\x64\x2d\x61\x6c\x74\x65"
  "\x72\x6e\x61\x74\x65\x2d\x66\x69\x6c\x65\x2d\x74\x79\x70\x65\x15"
  "\x07\x23\x10\x81\x87\x02\x22\x0e\x81\x87\x02\x21\x0c\x81\x85\x02"
  "\x20\x0a\x81\x83\x02\x1f\x08\x81\x83\x02\x1e\x06\x81\x83\x02\x1d"
  "\x04\x83\x04\x0f\x25\x16\x02\x04\x63\x64\x72\x17\x04\x63\x61\x72"
  "\x18\x04\x12\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77\x2d"
  "\x74\x79\x70\x65\x19\x03\x12\x03\x1e\x66\x69\x6c\x65\x2d\x6d\x6f"
  "\x64\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74\x69\x6d\x65\x2d"
  "\x64\x69\x72\x65\x63\x74\x04\x31\x1e\x81\x93\x02\x30\x1c\x81\x93"
  "\x02\x2f\x1a\x81\x93\x02\x2e\x18\x81\x91\x02\x2d\x16\x81\x91\x02"
  "\x2c\x14\x81\x91\x02\x2b\x12\x81\x8f\x02\x2a\x10\x81\x91\x02\x29"
  "\x0e\x81\x91\x02\x28\x0c\x81\x8d\x02\x27\x0a\x81\x8d\x02\x26\x08"
  "\x81\x8d\x02\x25\x06\x83\x04\x24\x04\x84\x06\x1d\x2b\x1a\x02\x26"
  "\x77\x72\x61\x70\x70\x65\x72\x73\x2d\x77\x69\x74\x68\x2d\x6d\x65"
  "\x6d\x6f\x69\x7a\x65\x64\x2d\x64\x65\x62\x75\x67\x67\x69\x6e\x67"
  "\x2d\x69\x6e\x66\x6f\x1b\x02\x1b\x02\x03\x13\x77\x69\x74\x68\x6f"
  "\x75\x74\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x73\x1c\x04\x1c"
  "\x73\x65\x74\x2d\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x77\x72"
  "\x61\x70\x70\x65\x72\x2f\x69\x6e\x66\x6f\x21\x1d\x02\x10\x6d\x61"
  "\x6b\x65\x2d\x70\x6f\x70\x75\x6c\x61\x74\x69\x6f\x6e\x04\x13\x61"
  "\x64\x64\x2d\x74\x6f\x2d\x70\x6f\x70\x75\x6c\x61\x74\x69\x6f\x6e"
  "\x21\x05\x38\x10\x81\x83\x02\x37\x0e\x81\x83\x02\x36\x0c\x81\x83"
  "\x02\x35\x0a\x81\x83\x02\x34\x08\x81\x83\x02\x33\x06\x81\x83\x02"
  "\x32\x04\x84\x06\x0f\x1f\x1e\x02\x08\x02\x1b\x02\x1b\x02\x03\x1c"
  "\x04\x15\x6d\x61\x70\x2d\x6f\x76\x65\x72\x2d\x70\x6f\x70\x75\x6c"
  "\x61\x74\x69\x6f\x6e\x21\x04\x1d\x04\x3f\x10\x83\x04\x3e\x0e\x81"
  "\x85\x02\x3d\x0c\x81\x81\x02\x3c\x0a\x82\x02\x3b\x08\x81\x81\x02"
  "\x3a\x06\x81\x81\x02\x39\x04\x82\x02\x0f\x1f\x1d\x02\x09\x17\x0b"
  "\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x1f\x08\x1b\x64\x62\x67"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x6c\x61\x62\x65\x6c"
  "\x2d\x6f\x66\x66\x73\x65\x74\x02\x3c\x20\x1e\x64\x62\x67\x2d\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x6c\x61\x62\x65"
  "\x6c\x2d\x6f\x66\x66\x73\x65\x74\x04\x03\x16\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x64\x2d\x65\x6e\x74\x72\x79\x2f\x6f\x66\x66\x73\x65\x74"
  "\x21\x03\x15\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x6e\x74\x72"
  "\x79\x2f\x62\x6c\x6f\x63\x6b\x22\x04\x1d\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x64\x62"
  "\x67\x2d\x69\x6e\x66\x6f\x23\x07\x1c\x64\x69\x73\x63\x72\x69\x6d"
  "\x69\x6e\x61\x74\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65"
  "\x6e\x74\x72\x79\x06\x15\x76\x65\x63\x74\x6f\x72\x2d\x62\x69\x6e"
  "\x61\x72\x79\x2d\x73\x65\x61\x72\x63\x68\x24\x03\x04\x61\x62\x73"
  "\x07\x53\x2a\x81\x85\x02\x52\x28\x81\x85\x02\x51\x26\x81\x83\x02"
  "\x50\x24\x81\x87\x02\x4f\x22\x81\x87\x02\x4e\x20\x81\x83\x02\x4d"
  "\x1e\x81\x83\x02\x4c\x1c\x81\x8b\x02\x4b\x1a\x81\x89\x02\x4a\x18"
  "\x81\x87\x02\x49\x16\x81\x83\x02\x48\x14\x81\x83\x02\x47\x12\x81"
  "\x87\x02\x46\x10\x81\x85\x02\x45\x0e\x81\x83\x02\x44\x0c\x81\x83"
  "\x02\x43\x0a\x81\x89\x02\x42\x08\x81\x87\x02\x41\x06\x81\x85\x02"
  "\x40\x04\x84\x04\x29\x44\x25\x02\x0a\x1d\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x64\x2d\x63\x6f\x64\x65\x2d\x61\x64\x64\x72\x65\x73\x73\x2d"
  "\x3e\x62\x6c\x6f\x63\x6b\x26\x03\x15\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x3f\x03\x12\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6c\x6f\x73\x75\x72\x65\x3f"
  "\x27\x03\x18\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6c\x6f\x73"
  "\x75\x72\x65\x2d\x3e\x65\x6e\x74\x72\x79\x28\x03\x22\x05\x57\x0a"
  "\x81\x83\x02\x56\x08\x81\x83\x02\x55\x06\x81\x83\x02\x54\x04\x83"
  "\x04\x09\x16\x29\x02\x0b\x1e\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d"
  "\x63\x6f\x64\x65\x2d\x61\x64\x64\x72\x65\x73\x73\x2d\x3e\x6f\x66"
  "\x66\x73\x65\x74\x03\x27\x03\x28\x03\x21\x04\x5a\x08\x81\x83\x02"
  "\x59\x06\x81\x83\x02\x58\x04\x83\x04\x07\x12\x28\x02\x0c\x03\x22"
  "\x03\x27\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d"
  "\x62\x6c\x6f\x63\x6b\x2f\x66\x69\x6c\x65\x6e\x61\x6d\x65\x2d\x61"
  "\x6e\x64\x2d\x69\x6e\x64\x65\x78\x27\x03\x5c\x06\x81\x83\x02\x5b"
  "\x04\x83\x04\x05\x0d\x2a\x02\x0d\x03\x03\x0b\x03\x21\x63\x61\x6e"
  "\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2d\x64\x65\x62\x75\x67\x2d"
  "\x69\x6e\x66\x6f\x2d\x66\x69\x6c\x65\x6e\x61\x6d\x65\x2b\x03\x18"
  "\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x77\x72\x61\x70\x70\x65"
  "\x72\x2f\x69\x6e\x64\x65\x78\x05\x64\x12\x81\x85\x02\x63\x10\x81"
  "\x85\x02\x62\x0e\x83\x04\x61\x0c\x81\x85\x02\x60\x0a\x83\x04\x5f"
  "\x08\x81\x83\x02\x5e\x06\x81\x83\x02\x5d\x04\x83\x04\x11\x1d\x2c"
  "\x02\x0e\x20\x11\x64\x62\x67\x2d\x6c\x61\x62\x65\x6c\x2f\x6f\x66"
  "\x66\x73\x65\x74\x03\x06\x24\x02\x67\x08\x81\x89\x02\x66\x06\x81"
  "\x85\x02\x65\x04\x84\x06\x07\x10\x24\x02\x0f\x1f\x02\x26\x03\x17"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x61\x64"
  "\x64\x72\x65\x73\x73\x3f\x03\x09\x63\x6f\x6d\x6d\x65\x6e\x74\x3f"
  "\x03\x17\x6c\x6f\x61\x64\x2f\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x03\x0d\x63\x6f\x6d\x6d\x65\x6e"
  "\x74\x2d\x74\x65\x78\x74\x06\x18\x66\x61\x73\x6c\x6f\x61\x64\x2d"
  "\x75\x70\x64\x61\x74\x65\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x26"
  "\x03\x11\x64\x62\x67\x2d\x69\x6e\x66\x6f\x2d\x76\x65\x63\x74\x6f"
  "\x72\x3f\x03\x1e\x64\x62\x67\x2d\x69\x6e\x66\x6f\x2d\x76\x65\x63"
  "\x74\x6f\x72\x2f\x62\x6c\x6f\x63\x6b\x73\x2d\x76\x65\x63\x74\x6f"
  "\x72\x08\x71\x16\x81\x87\x02\x70\x14\x81\x87\x02\x6f\x12\x81\x85"
  "\x02\x6e\x10\x81\x87\x02\x6d\x0e\x81\x87\x02\x6c\x0c\x81\x85\x02"
  "\x6b\x0a\x81\x85\x02\x6a\x08\x81\x85\x02\x69\x06\x81\x85\x02\x68"
  "\x04\x84\x06\x15\x2c\x20\x02\x10\x02\x03\x03\x0b\x04\x19\x66\x61"
  "\x73\x6c\x6f\x61\x64\x2d\x63\x6f\x6d\x70\x75\x74\x65\x2d\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x2d\x04\x20\x73\x65\x74\x2d\x64\x65\x62"
  "\x75\x67\x67\x69\x6e\x67\x2d\x77\x72\x61\x70\x70\x65\x72\x2f\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x21\x2e\x06\x1a\x66\x61\x73\x6c\x6f"
  "\x61\x64\x2d\x75\x70\x64\x61\x74\x65\x2d\x73\x75\x62\x2d\x62\x6c"
  "\x6f\x63\x6b\x73\x2f\x06\x76\x0c\x81\x8f\x02\x75\x0a\x81\x8d\x02"
  "\x74\x08\x81\x8b\x02\x73\x06\x81\x89\x02\x72\x04\x86\x0a\x0b\x1a"
  "\x30\x02\x11\x03\x10\x6d\x65\x72\x67\x65\x2d\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x73\x31\x03\x0e\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d"
  "\x74\x79\x70\x65\x32\x03\x11\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d"
  "\x76\x65\x72\x73\x69\x6f\x6e\x03\x12\x72\x65\x77\x72\x69\x74\x65"
  "\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x33\x03\x0e\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x2d\x6e\x61\x6d\x65\x04\x07\x65\x71\x75\x61"
  "\x6c\x3f\x34\x04\x19\x08\x84\x01\x1e\x81\x89\x02\x83\x01\x1c\x81"
  "\x85\x02\x82\x01\x1a\x81\x89\x02\x81\x01\x18\x81\x87\x02\x80\x01"
  "\x16\x81\x89\x02\x7f\x14\x81\x87\x02\x7e\x12\x81\x87\x02\x7d\x10"
  "\x81\x89\x02\x7c\x0e\x81\x87\x02\x7b\x0c\x81\x85\x02\x7a\x0a\x81"
  "\x85\x02\x79\x08\x81\x85\x02\x78\x06\x81\x85\x02\x77\x04\x84\x06"
  "\x1d\x2f\x35\x02\x12\x1f\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x36\x03\x04\x2e\x03\x0b\x03\x15\x64\x65\x62\x75"
  "\x67\x2d\x69\x6e\x66\x6f\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x3f"
  "\x2e\x04\x0b\x70\x61\x74\x68\x6e\x61\x6d\x65\x3d\x3f\x0b\x06\x8e"
  "\x01\x16\x81\x87\x02\x8d\x01\x14\x81\x85\x02\x8c\x01\x12\x81\x8d"
  "\x02\x8b\x01\x10\x81\x8f\x02\x8a\x01\x0e\x81\x83\x02\x89\x01\x0c"
  "\x81\x83\x02\x88\x01\x0a\x81\x91\x02\x87\x01\x08\x81\x8d\x02\x86"
  "\x01\x06\x81\x89\x02\x85\x01\x04\x86\x0a\x15\x26\x02\x13\x02\x1a"
  "\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x72\x65\x77\x72\x69\x74"
  "\x69\x6e\x67\x2d\x72\x75\x6c\x65\x73\x37\x02\x37\x02\x03\x31\x05"
  "\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62"
  "\x69\x6e\x64\x03\x16\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61\x73"
  "\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x38\x04\x97\x01\x14\x81"
  "\x83\x02\x96\x01\x12\x81\x85\x02\x95\x01\x10\x81\x83\x02\x94\x01"
  "\x0e\x81\x83\x02\x93\x01\x0c\x81\x83\x02\x92\x01\x0a\x81\x8b\x02"
  "\x91\x01\x08\x81\x89\x02\x90\x01\x06\x81\x87\x02\x8f\x01\x04\x85"
  "\x08\x13\x22\x39\x02\x14\x18\x02\x09\x73\x65\x74\x2d\x63\x64\x72"
  "\x21\x3a\x37\x02\x37\x02\x03\x31\x04\x15\x6c\x69\x73\x74\x2d\x73"
  "\x65\x61\x72\x63\x68\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x3b\x03"
  "\x38\x03\x13\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x69\x72\x65"
  "\x63\x74\x6f\x72\x79\x3c\x04\x34\x06\xa3\x01\x1a\x81\x87\x02\xa2"
  "\x01\x18\x81\x89\x02\xa1\x01\x16\x81\x85\x02\xa0\x01\x14\x81\x85"
  "\x02\x9f\x01\x12\x81\x89\x02\x9e\x01\x10\x81\x87\x02\x9d\x01\x0e"
  "\x81\x87\x02\x9c\x01\x0c\x81\x85\x02\x9b\x01\x0a\x81\x85\x02\x9a"
  "\x01\x08\x81\x85\x02\x99\x01\x06\x81\x83\x02\x98\x01\x04\x84\x06"
  "\x19\x2e\x3d\x02\x15\x09\x72\x65\x6c\x61\x74\x69\x76\x65\x3e\x18"
  "\x17\x37\x02\x04\x3b\x03\x14\x03\x3c\x04\x31\x03\x0e\x66\x69\x6c"
  "\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x03\x07\x6c\x65\x6e\x67"
  "\x74\x68\x04\x17\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77"
  "\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x3b\x04\x0a\x6c\x69\x73"
  "\x74\x2d\x74\x61\x69\x6c\x04\x12\x64\x69\x72\x65\x63\x74\x6f\x72"
  "\x79\x2d\x70\x72\x65\x66\x69\x78\x3f\x3f\x0a\xb3\x01\x22\x81\x85"
  "\x02\xb2\x01\x20\x81\x8f\x02\xb1\x01\x1e\x81\x8d\x02\xb0\x01\x1c"
  "\x81\x85\x02\xaf\x01\x1a\x81\x8f\x02\xae\x01\x18\x81\x8d\x02\xad"
  "\x01\x16\x81\x8b\x02\xac\x01\x14\x81\x89\x02\xab\x01\x12\x81\x87"
  "\x02\xaa\x01\x10\x81\x85\x02\xa9\x01\x0e\x81\x91\x02\xa8\x01\x0c"
  "\x81\x87\x02\xa7\x01\x0a\x81\x83\x02\xa6\x01\x08\x81\x85\x02\xa5"
  "\x01\x06\x81\x87\x02\xa4\x01\x04\x83\x04\x21\x3c\x40\x02\x16\x17"
  "\x18\x04\x34\x02\xbe\x01\x18\x81\x85\x02\xbd\x01\x16\x81\x85\x02"
  "\xbc\x01\x14\x81\x85\x02\xbb\x01\x12\x81\x89\x02\xba\x01\x10\x81"
  "\x87\x02\xb9\x01\x0e\x81\x85\x02\xb8\x01\x0c\x81\x85\x02\xb7\x01"
  "\x0a\x81\x85\x02\xb6\x01\x08\x81\x87\x02\xb5\x01\x06\x81\x85\x02"
  "\xb4\x01\x04\x84\x06\x17\x21\x41\x02\x17\x03\x11\x03\x14\x03\xc0"
  "\x01\x06\x81\x83\x02\xbf\x01\x04\x83\x04\x05\x0d\x42\x02\x18\x18"
  "\x4d\x49\x54\x53\x43\x48\x45\x4d\x45\x5f\x49\x4e\x46\x5f\x44\x49"
  "\x52\x45\x43\x54\x4f\x52\x59\x03\x19\x67\x65\x74\x2d\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x02\x22\x73\x79\x73\x74\x65\x6d\x2d\x6c\x69\x62\x72\x61\x72"
  "\x79\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x43\x04\x31\x03\x18\x25\x66\x69\x6e\x64\x2d\x6c"
  "\x69\x62\x72\x61\x72\x79\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79"
  "\x44\x03\x38\x06\xc4\x01\x0a\x81\x87\x02\xc3\x01\x08\x81\x85\x02"
  "\xc2\x01\x06\x81\x83\x02\xc1\x01\x04\x83\x04\x09\x18\x38\x02\x19"
  "\x17\x3e\x18\x03\x3c\x03\x43\x04\x3b\x03\x11\x65\x78\x63\x65\x70"
  "\x74\x2d\x6c\x61\x73\x74\x2d\x70\x61\x69\x72\x05\xcf\x01\x18\x81"
  "\x87\x02\xce\x01\x16\x81\x85\x02\xcd\x01\x14\x81\x83\x02\xcc\x01"
  "\x12\x81\x85\x02\xcb\x01\x10\x81\x85\x02\xca\x01\x0e\x81\x83\x02"
  "\xc9\x01\x0c\x81\x83\x02\xc8\x01\x0a\x81\x83\x02\xc7\x01\x08\x81"
  "\x83\x02\xc6\x01\x06\x81\x83\x02\xc5\x01\x04\x83\x04\x17\x26\x43"
  "\x02\x1a\x18\x1f\xd1\x01\x06\x81\x83\x02\xd0\x01\x04\x83\x04\x05"
  "\x0b\x3e\x02\x1b\x17\x1f\xd3\x01\x06\x81\x83\x02\xd2\x01\x04\x83"
  "\x04\x05\x0b\x3c\x02\x1c\x36\x23\x5b\x28\x72\x75\x6e\x74\x69\x6d"
  "\x65\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x69\x6e\x66\x6f\x29"
  "\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x2d\x6e\x61\x6d\x65\x2f\x64"
  "\x79\x6e\x61\x6d\x69\x63\x2d\x6c\x69\x6e\x6b\x5d\x17\x1f\x04\x19"
  "\x76\x65\x63\x74\x6f\x72\x2d\x66\x69\x6e\x64\x2d\x6e\x65\x78\x74"
  "\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x3b\x02\xd6\x01\x08\x81\x85\x02"
  "\xd5\x01\x06\x83\x04\xd4\x01\x04\x81\x83\x02\x07\x11\x45\x02\x1d"
  "\x33\x23\x5b\x28\x72\x75\x6e\x74\x69\x6d\x65\x20\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x2d\x69\x6e\x66\x6f\x29\x64\x62\x67\x2d\x62\x6c"
  "\x6f\x63\x6b\x2d\x6e\x61\x6d\x65\x2f\x69\x63\x2d\x70\x61\x72\x65"
  "\x6e\x74\x5d\x17\x1f\x04\x3b\x02\xd9\x01\x08\x81\x85\x02\xd8\x01"
  "\x06\x83\x04\xd7\x01\x04\x81\x83\x02\x07\x11\x46\x02\x1e\x38\x23"
  "\x5b\x28\x72\x75\x6e\x74\x69\x6d\x65\x20\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x2d\x69\x6e\x66\x6f\x29\x64\x62\x67\x2d\x62\x6c\x6f\x63"
  "\x6b\x2d\x6e\x61\x6d\x65\x2f\x6e\x6f\x72\x6d\x61\x6c\x2d\x63\x6c"
  "\x6f\x73\x75\x72\x65\x5d\x17\x1f\x04\x3b\x02\xdc\x01\x08\x81\x85"
  "\x02\xdb\x01\x06\x83\x04\xda\x01\x04\x81\x83\x02\x07\x11\x47\x02"
  "\x1f\x38\x23\x5b\x28\x72\x75\x6e\x74\x69\x6d\x65\x20\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x2d\x69\x6e\x66\x6f\x29\x64\x62\x67\x2d\x62"
  "\x6c\x6f\x63\x6b\x2d\x6e\x61\x6d\x65\x2f\x72\x65\x74\x75\x72\x6e"
  "\x2d\x61\x64\x64\x72\x65\x73\x73\x5d\x17\x1f\x04\x3b\x02\xdf\x01"
  "\x08\x81\x85\x02\xde\x01\x06\x83\x04\xdd\x01\x04\x81\x83\x02\x07"
  "\x11\x48\x02\x20\x35\x23\x5b\x28\x72\x75\x6e\x74\x69\x6d\x65\x20"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x69\x6e\x66\x6f\x29\x64\x62"
  "\x67\x2d\x62\x6c\x6f\x63\x6b\x2d\x6e\x61\x6d\x65\x2f\x73\x74\x61"
  "\x74\x69\x63\x2d\x6c\x69\x6e\x6b\x5d\x17\x1f\x04\x3b\x02\xe2\x01"
  "\x08\x81\x85\x02\xe1\x01\x06\x83\x04\xe0\x01\x04\x81\x83\x02\x07"
  "\x11\x3b\x02\x21\x36\x17\x1f\x03\x0e\x64\x62\x67\x2d\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x3f\x02\xec\x01\x16\x81\x8b\x02\xeb\x01\x14"
  "\x81\x8d\x02\xea\x01\x12\x81\x8d\x02\xe9\x01\x10\x81\x8b\x02\xe8"
  "\x01\x0e\x81\x8b\x02\xe7\x01\x0c\x81\x8b\x02\xe6\x01\x0a\x81\x87"
  "\x02\xe5\x01\x08\x81\x87\x02\xe4\x01\x06\x84\x06\xe3\x01\x04\x81"
  "\x85\x02\x15\x23\x49\x02\x22\x1f\x1f\x6c\x6f\x61\x64\x2d\x64\x65"
  "\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x2d\x6f\x6e\x2d"
  "\x64\x65\x6d\x61\x6e\x64\x3f\x4a\x02\x04\x1a\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x64\x2d\x65\x6e\x74\x72\x79\x2f\x64\x62\x67\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x4b\x03\x1d\x73\x70\x65\x63\x69\x61\x6c\x2d\x66"
  "\x6f\x72\x6d\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6e\x61"
  "\x6d\x65\x3f\x4c\x03\x0c\x73\x79\x6d\x62\x6f\x6c\x2d\x6e\x61\x6d"
  "\x65\x4d\x04\xf1\x01\x0c\x81\x83\x02\xf0\x01\x0a\x81\x83\x02\xef"
  "\x01\x08\x81\x83\x02\xee\x01\x06\x81\x85\x02\xed\x01\x04\x83\x04"
  "\x0b\x19\x4e\x02\x23\x17\x02\x04\x05\x61\x73\x73\x71\x03\x4d\x03"
  "\xf5\x01\x0a\x81\x83\x02\xf4\x01\x08\x81\x83\x02\xf3\x01\x06\x81"
  "\x85\x02\xf2\x01\x04\x83\x04\x09\x14\x4d\x02\x24\x1f\x0b\x03\x4b"
  "\x02\xf7\x01\x06\x81\x83\x02\xf6\x01\x04\x83\x04\x05\x0d\x4f\x02"
  "\x25\x1f\x0b\x03\x4b\x03\x0f\x64\x62\x67\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x3f\x03\x0c\x6c\x61\x6d\x62\x64\x61\x2d\x62\x6f"
  "\x64\x79\x04\xfc\x01\x0c\x81\x85\x02\xfb\x01\x0a\x81\x87\x02\xfa"
  "\x01\x08\x81\x87\x02\xf9\x01\x06\x81\x83\x02\xf8\x01\x04\x83\x04"
  "\x0b\x17\x50\x02\x26\x02\x1f\x36\x17\x18\x03\x2e\x03\x1b\x65\x78"
  "\x61\x63\x74\x2d\x6e\x6f\x6e\x6e\x65\x67\x61\x74\x69\x76\x65\x2d"
  "\x69\x6e\x74\x65\x67\x65\x72\x3f\x03\x0e\x72\x65\x61\x64\x2d\x62"
  "\x73\x6d\x2d\x66\x69\x6c\x65\x2e\x04\x8d\x02\x24\x81\x85\x02\x8c"
  "\x02\x22\x81\x85\x02\x8b\x02\x20\x81\x87\x02\x8a\x02\x1e\x81\x85"
  "\x02\x89\x02\x1c\x81\x83\x02\x88\x02\x1a\x81\x85\x02\x87\x02\x18"
  "\x81\x85\x02\x86\x02\x16\x81\x85\x02\x85\x02\x14\x81\x83\x02\x84"
  "\x02\x12\x81\x83\x02\x83\x02\x10\x81\x85\x02\x82\x02\x0e\x81\x83"
  "\x02\x81\x02\x0c\x81\x85\x02\x80\x02\x0a\x81\x83\x02\xff\x01\x08"
  "\x81\x85\x02\xfe\x01\x06\x81\x83\x02\xfd\x01\x04\x83\x04\x23\x33"
  "\x51\x02\x27\x04\x62\x63\x73\x04\x62\x73\x6d\x04\x62\x73\x6d\x04"
  "\x62\x63\x73\x18\x17\x03\x31\x03\x12\x03\x11\x03\x33\x04\x19\x03"
  "\x32\x03\x10\x03\x13\x04\x34\x0a\x9a\x02\x1c\x81\x87\x02\x99\x02"
  "\x1a\x81\x83\x02\x98\x02\x18\x81\x85\x02\x97\x02\x16\x81\x83\x02"
  "\x96\x02\x14\x81\x85\x02\x95\x02\x12\x81\x89\x02\x94\x02\x10\x81"
  "\x87\x02\x93\x02\x0e\x81\x89\x02\x92\x02\x0c\x81\x89\x02\x91\x02"
  "\x0a\x81\x87\x02\x90\x02\x08\x81\x85\x02\x8f\x02\x06\x81\x83\x02"
  "\x8e\x02\x04\x83\x04\x1b\x38\x34\x02\x28\x04\x62\x73\x6d\x04\x62"
  "\x69\x66\x03\x31\x04\x19\x03\x08\x66\x61\x73\x6c\x6f\x61\x64\x32"
  "\x05\x17\x69\x6e\x66\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d"
  "\x3e\x62\x69\x66\x2f\x62\x73\x6d\x12\x05\x9f\x02\x0c\x81\x87\x02"
  "\x9e\x02\x0a\x81\x85\x02\x9d\x02\x08\x81\x83\x02\x9c\x02\x06\x81"
  "\x83\x02\x9b\x02\x04\x83\x04\x0b\x19\x52\x02\x29\x02\x03\x31\x04"
  "\x15\x73\x70\x6c\x69\x74\x2d\x69\x6e\x66\x2d\x73\x74\x72\x75\x63"
  "\x74\x75\x72\x65\x21\x53\x05\x08\x66\x61\x73\x64\x75\x6d\x70\x04"
  "\xa5\x02\x0e\x81\x87\x02\xa4\x02\x0c\x81\x87\x02\xa3\x02\x0a\x81"
  "\x8b\x02\xa2\x02\x08\x81\x89\x02\xa1\x02\x06\x85\x08\xa0\x02\x04"
  "\x81\x87\x02\x0d\x19\x54\x02\x2a\x0c\x76\x65\x63\x74\x6f\x72\x2d"
  "\x73\x65\x74\x21\x55\x1f\x36\x1f\x55\x6e\x6b\x6e\x6f\x77\x6e\x20"
  "\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x66\x69\x6c\x65\x20\x66"
  "\x6f\x72\x6d\x61\x74\x3a\x03\x0d\x03\x14\x04\x06\x65\x72\x72\x6f"
  "\x72\x36\x03\x1c\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x66\x69"
  "\x6c\x65\x2d\x77\x72\x61\x70\x70\x65\x72\x2f\x69\x6e\x66\x6f\x03"
  "\x0c\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x14\x06\xb2\x02"
  "\x1c\x81\x85\x02\xb1\x02\x1a\x81\x85\x02\xb0\x02\x18\x81\x83\x02"
  "\xaf\x02\x16\x81\x93\x02\xae\x02\x14\x81\x91\x02\xad\x02\x12\x81"
  "\x91\x02\xac\x02\x10\x81\x8d\x02\xab\x02\x0e\x81\x8b\x02\xaa\x02"
  "\x0c\x81\x89\x02\xa9\x02\x0a\x81\x87\x02\xa8\x02\x08\x81\x89\x02"
  "\xa7\x02\x06\x84\x06\xa6\x02\x04\x81\x85\x02\x1b\x2f\x0d\x02\x2b"
  "\x81\x20\x08\x1b\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x72"
  "\x65\x61\x64\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x21\x02\x06"
  "\x1c\x75\x6e\x63\x6f\x6d\x70\x72\x65\x73\x73\x2d\x6b\x65\x72\x6e"
  "\x65\x6c\x2d\x62\x79\x2d\x62\x6c\x6f\x63\x6b\x73\x56\x02\xb4\x02"
  "\x06\x81\x89\x02\xb3\x02\x04\x85\x06\x05\x0f\x57\x02\x2c\x0c\x73"
  "\x74\x72\x69\x6e\x67\x2d\x73\x65\x74\x21\x58\x03\x0a\x72\x65\x61"
  "\x64\x2d\x63\x68\x61\x72\x02\xb8\x02\x0a\x81\x8d\x02\xb7\x02\x08"
  "\x81\x8b\x02\xb6\x02\x06\x81\x8b\x02\xb5\x02\x04\x86\x0a\x09\x10"
  "\x59\x02\x2d\x56\x1f\x43\x6f\x6d\x70\x72\x65\x73\x73\x65\x64\x20"
  "\x69\x6e\x70\x75\x74\x20\x65\x6e\x64\x73\x20\x74\x6f\x6f\x20\x73"
  "\x6f\x6f\x6e\x58\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x55"
  "\x1f\x0e\x76\x65\x63\x74\x6f\x72\x2d\x38\x62\x2d\x72\x65\x66\x10"
  "\x73\x74\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x58"
  "\x81\x20\x03\x14\x07\x10\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d"
  "\x6d\x6f\x76\x65\x21\x05\x36\x06\x1c\x6f\x75\x74\x70\x75\x74\x2d"
  "\x70\x6f\x72\x74\x2f\x77\x72\x69\x74\x65\x2d\x73\x75\x62\x73\x74"
  "\x72\x69\x6e\x67\x05\xd0\x02\x32\x81\x99\x02\xcf\x02\x30\x81\x9d"
  "\x02\xce\x02\x2e\x81\x9d\x02\xcd\x02\x2c\x81\xa7\x02\xcc\x02\x2a"
  "\x81\xa7\x02\xcb\x02\x28\x81\x9b\x02\xca\x02\x26\x81\x8f\x02\xc9"
  "\x02\x24\x81\x8f\x02\xc8\x02\x22\x81\x8f\x02\xc7\x02\x20\x81\x9b"
  "\x02\xc6\x02\x1e\x81\xa3\x02\xc5\x02\x1c\x81\x99\x02\xc4\x02\x1a"
  "\x81\x8b\x02\xc3\x02\x18\x81\xa5\x02\xc2\x02\x16\x81\xa5\x02\xc1"
  "\x02\x14\x81\x9b\x02\xc0\x02\x12\x81\xa1\x02\xbf\x02\x10\x81\x9f"
  "\x02\xbe\x02\x0e\x81\x99\x02\xbd\x02\x0c\x81\x99\x02\xbc\x02\x0a"
  "\x81\x8f\x02\xbb\x02\x08\x81\x8b\x02\xba\x02\x06\x81\x89\x02\xb9"
  "\x02\x04\x86\x0a\x31\x49\x55\x02\x2e\x22\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x62\x61\x64\x2d\x72\x61\x6e"
  "\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x1a\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x66\x69\x6c\x65\x2d"
  "\x65\x72\x72\x6f\x72\x36\x1d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e"
  "\x2d\x74\x79\x70\x65\x3a\x66\x61\x73\x6c\x6f\x61\x64\x2d\x65\x72"
  "\x72\x6f\x72\x04\x03\x1f\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d"
  "\x63\x75\x72\x72\x65\x6e\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61"
  "\x74\x69\x6f\x6e\x1f\x05\x17\x62\x69\x6e\x64\x2d\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x68\x61\x6e\x64\x6c\x65\x72\x14\x04\x32"
  "\x04\xd7\x02\x10\x81\x85\x02\xd6\x02\x0e\x81\x83\x02\xd5\x02\x0c"
  "\x81\x87\x02\xd4\x02\x0a\x81\x87\x02\xd3\x02\x08\x81\x85\x02\xd2"
  "\x02\x06\x81\x85\x02\xd1\x02\x04\x83\x04\x0f\x1f\x32\x02\x2f\x02"
  "\x0a\x61\x75\x74\x6f\x6d\x61\x74\x69\x63\x5a\x10\x1b\x2a\x73\x61"
  "\x76\x65\x2d\x75\x6e\x63\x6f\x6d\x70\x72\x65\x73\x73\x65\x64\x2d"
  "\x66\x69\x6c\x65\x73\x3f\x2a\x5b\x1a\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x70\x6f\x72\x74\x2d\x65\x72\x72"
  "\x6f\x72\x36\x05\x05\x19\x6c\x6f\x6f\x6b\x75\x70\x2d\x75\x6e\x63"
  "\x6f\x6d\x70\x72\x65\x73\x73\x65\x64\x2d\x66\x69\x6c\x65\x36\x04"
  "\x25\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x75\x6e\x63\x6f\x6d"
  "\x70\x72\x65\x73\x73\x65\x64\x2d\x66\x69\x6c\x65\x2d\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x5c\x03\x22\x63\x61\x6c\x6c\x2d\x77\x69\x74"
  "\x68\x2d\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x66\x69\x6c\x65"
  "\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x03\x1f\x04\x19\x05\x14\x75"
  "\x6e\x63\x6f\x6d\x70\x72\x65\x73\x73\x2d\x69\x6e\x74\x65\x72\x6e"
  "\x61\x6c\x1f\x03\x10\x03\x16\x64\x65\x6c\x65\x74\x65\x2d\x66\x69"
  "\x6c\x65\x2d\x6e\x6f\x2d\x65\x72\x72\x6f\x72\x73\x05\x14\x04\x0c"
  "\x72\x65\x6e\x61\x6d\x65\x2d\x66\x69\x6c\x65\x04\x0a\x63\x6f\x70"
  "\x79\x2d\x66\x69\x6c\x65\x0c\xf1\x02\x36\x81\x83\x02\xf0\x02\x34"
  "\x81\x85\x02\xef\x02\x32\x81\x83\x02\xee\x02\x30\x81\x85\x02\xed"
  "\x02\x2e\x81\x83\x02\xec\x02\x2c\x81\x87\x02\xeb\x02\x2a\x81\x85"
  "\x02\xea\x02\x28\x81\x85\x02\xe9\x02\x26\x81\x87\x02\xe8\x02\x24"
  "\x81\x85\x02\xe7\x02\x22\x81\x85\x02\xe6\x02\x20\x81\x89\x02\xe5"
  "\x02\x1e\x81\x89\x02\xe4\x02\x1c\x81\x89\x02\xe3\x02\x1a\x81\x87"
  "\x02\xe2\x02\x18\x81\x87\x02\xe1\x02\x16\x81\x85\x02\xe0\x02\x14"
  "\x81\x85\x02\xdf\x02\x12\x81\x85\x02\xde\x02\x10\x81\x85\x02\xdd"
  "\x02\x0e\x81\x85\x02\xdc\x02\x0c\x81\x85\x02\xdb\x02\x0a\x81\x83"
  "\x02\xda\x02\x08\x81\x87\x02\xd9\x02\x06\x81\x85\x02\xd8\x02\x04"
  "\x83\x04\x35\x58\x19\x02\x30\x22\x4e\x6f\x74\x20\x61\x20\x72\x65"
  "\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x63\x6f\x6d\x70\x72\x65\x73"
  "\x73\x65\x64\x20\x66\x69\x6c\x65\x3a\x13\x43\x6f\x6d\x70\x72\x65"
  "\x73\x73\x65\x64\x2d\x42\x31\x2d\x31\x2e\x30\x30\x58\x13\x03\x31"
  "\x04\x1c\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x62\x69\x6e\x61"
  "\x72\x79\x2d\x69\x6e\x70\x75\x74\x2d\x66\x69\x6c\x65\x06\x1a\x75"
  "\x6e\x63\x6f\x6d\x70\x72\x65\x73\x73\x2d\x72\x65\x61\x64\x2d\x73"
  "\x75\x62\x73\x74\x72\x69\x6e\x67\x58\x04\x09\x73\x74\x72\x69\x6e"
  "\x67\x3d\x3f\x03\x0c\x66\x69\x6c\x65\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x04\x1d\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x62\x69\x6e\x61"
  "\x72\x79\x2d\x6f\x75\x74\x70\x75\x74\x2d\x66\x69\x6c\x65\x05\x11"
  "\x75\x6e\x63\x6f\x6d\x70\x72\x65\x73\x73\x2d\x70\x6f\x72\x74\x73"
  "\x31\x08\xfa\x02\x14\x81\x87\x02\xf9\x02\x12\x81\x87\x02\xf8\x02"
  "\x10\x81\x85\x02\xf7\x02\x0e\x81\x87\x02\xf6\x02\x0c\x81\x87\x02"
  "\xf5\x02\x0a\x81\x85\x02\xf4\x02\x08\x81\x87\x02\xf3\x02\x06\x81"
  "\x85\x02\xf2\x02\x04\x85\x08\x13\x2a\x14\x02\x31\x3a\x09\x73\x65"
  "\x74\x2d\x63\x61\x72\x21\x02\x18\x17\x13\x75\x6e\x63\x6f\x6d\x70"
  "\x72\x65\x73\x73\x65\x64\x2d\x66\x69\x6c\x65\x73\x5d\x02\x05\x0d"
  "\x64\x79\x6e\x61\x6d\x69\x63\x2d\x77\x69\x6e\x64\x5e\x04\x0b\x04"
  "\x19\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x74\x69\x6d\x65\x3c\x3f\x02\x10\x72\x65\x61\x6c\x2d"
  "\x74\x69\x6d\x65\x2d\x63\x6c\x6f\x63\x6b\x0b\x05\xa8\x03\x5e\x81"
  "\x85\x02\xa7\x03\x5c\x81\x85\x02\xa6\x03\x5a\x81\x85\x02\xa5\x03"
  "\x58\x81\x85\x02\xa4\x03\x56\x81\x83\x02\xa3\x03\x54\x81\x85\x02"
  "\xa2\x03\x52\x81\x85\x02\xa1\x03\x50\x81\x85\x02\xa0\x03\x4e\x81"
  "\x85\x02\x9f\x03\x4c\x81\x83\x02\x9e\x03\x4a\x81\x83\x02\x9d\x03"
  "\x48\x81\x83\x02\x9c\x03\x46\x81\x83\x02\x9b\x03\x44\x81\x83\x02"
  "\x9a\x03\x42\x81\x83\x02\x99\x03\x40\x81\x83\x02\x98\x03\x3e\x82"
  "\x02\x97\x03\x3c\x81\x87\x02\x96\x03\x3a\x81\x87\x02\x95\x03\x38"
  "\x81\x87\x02\x94\x03\x36\x81\x85\x02\x93\x03\x34\x81\x85\x02\x92"
  "\x03\x32\x81\x85\x02\x91\x03\x30\x81\x85\x02\x90\x03\x2e\x81\x85"
  "\x02\x8f\x03\x2c\x81\x85\x02\x8e\x03\x2a\x81\x85\x02\x8d\x03\x28"
  "\x81\x85\x02\x8c\x03\x26\x81\x85\x02\x8b\x03\x24\x81\x89\x02\x8a"
  "\x03\x22\x81\x89\x02\x89\x03\x20\x81\x85\x02\x88\x03\x1e\x81\x83"
  "\x02\x87\x03\x1c\x81\x81\x02\x86\x03\x1a\x81\x81\x02\x85\x03\x18"
  "\x81\x81\x02\x84\x03\x16\x82\x02\x83\x03\x14\x81\x83\x02\x82\x03"
  "\x12\x81\x81\x02\x81\x03\x10\x81\x81\x02\x80\x03\x0e\x81\x81\x02"
  "\xff\x02\x0c\x82\x02\xfe\x02\x0a\x81\x85\x02\xfd\x02\x08\x81\x85"
  "\x02\xfc\x02\x06\x81\x83\x02\xfb\x02\x04\x85\x08\x5d\x71\x5f\x02"
  "\x32\x3a\x17\x02\x5d\x02\x02\x18\x74\x65\x6d\x70\x6f\x72\x61\x72"
  "\x79\x2d\x66\x69\x6c\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x02"
  "\x0b\x05\x5e\x03\x1c\x05\xb6\x03\x1e\x81\x85\x02\xb5\x03\x1c\x81"
  "\x85\x02\xb4\x03\x1a\x81\x83\x02\xb3\x03\x18\x81\x83\x02\xb2\x03"
  "\x16\x81\x85\x02\xb1\x03\x14\x81\x85\x02\xb0\x03\x12\x81\x83\x02"
  "\xaf\x03\x10\x81\x83\x02\xae\x03\x0e\x81\x83\x02\xad\x03\x0c\x82"
  "\x02\xac\x03\x0a\x81\x83\x02\xab\x03\x08\x81\x87\x02\xaa\x03\x06"
  "\x81\x85\x02\xa9\x03\x04\x84\x06\x1d\x2e\x5e\x02\x33\x18\x02\x17"
  "\x5d\x02\x03\x1a\x64\x65\x61\x6c\x6c\x6f\x63\x61\x74\x65\x2d\x74"
  "\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x66\x69\x6c\x65\x1c\x02\xbf"
  "\x03\x14\x81\x83\x02\xbe\x03\x12\x81\x83\x02\xbd\x03\x10\x81\x85"
  "\x02\xbc\x03\x0e\x81\x85\x02\xbb\x03\x0c\x81\x85\x02\xba\x03\x0a"
  "\x81\x83\x02\xb9\x03\x08\x81\x81\x02\xb8\x03\x06\x81\x81\x02\xb7"
  "\x03\x04\x82\x02\x13\x1f\x60\x02\x34\x3a\x17\x02\x18\x5d\x1d\x2a"
  "\x75\x6e\x63\x6f\x6d\x70\x72\x65\x73\x73\x65\x64\x2d\x66\x69\x6c"
  "\x65\x2d\x6c\x69\x66\x65\x74\x69\x6d\x65\x2a\x3a\x03\x02\x0b\x03"
  "\x1c\x03\xdc\x03\x3c\x81\x87\x02\xdb\x03\x3a\x81\x87\x02\xda\x03"
  "\x38\x81\x87\x02\xd9\x03\x36\x81\x89\x02\xd8\x03\x34\x81\x89\x02"
  "\xd7\x03\x32\x81\x89\x02\xd6\x03\x30\x81\x87\x02\xd5\x03\x2e\x81"
  "\x87\x02\xd4\x03\x2c\x81\x87\x02\xd3\x03\x2a\x81\x87\x02\xd2\x03"
  "\x28\x81\x87\x02\xd1\x03\x26\x81\x87\x02\xd0\x03\x24\x81\x89\x02"
  "\xcf\x03\x22\x81\x89\x02\xce\x03\x20\x81\x89\x02\xcd\x03\x1e\x81"
  "\x89\x02\xcc\x03\x1c\x81\x87\x02\xcb\x03\x1a\x81\x87\x02\xca\x03"
  "\x18\x81\x87\x02\xc9\x03\x16\x81\x87\x02\xc8\x03\x14\x81\x87\x02"
  "\xc7\x03\x12\x81\x85\x02\xc6\x03\x10\x81\x85\x02\xc5\x03\x0e\x81"
  "\x83\x02\xc4\x03\x0c\x81\x81\x02\xc3\x03\x0a\x81\x81\x02\xc2\x03"
  "\x08\x81\x81\x02\xc1\x03\x06\x81\x81\x02\xc0\x03\x04\x82\x02\x3b"
  "\x4b\x1c\x02\x35\x02\x5d\x02\xde\x03\x06\x81\x81\x02\xdd\x03\x04"
  "\x82\x02\x05\x0d\x18\x35\x17\x17\xe1\xa7\x12\x5a\x18\x04\x1c\x04"
  "\x60\x04\x5e\x04\x5f\x04\x14\x04\x19\x04\x32\x04\x55\x04\x59\x04"
  "\x57\x04\x81\x20\x0d\x06\x54\x06\x52\x04\x34\x04\x51\x04\x50\x04"
  "\x4f\x04\x4d\x04\x4e\x04\x49\x06\x3b\x06\x48\x06\x47\x06\x46\x06"
  "\x45\x06\x3c\x04\x3e\x04\x43\x04\x38\x04\x42\x04\x41\x04\x40\x04"
  "\x3d\x04\x39\x04\x04\x35\x04\x30\x04\x20\x04\x24\x04\x2c\x04\x2a"
  "\x04\x28\x04\x29\x04\x25\x04\x1d\x04\x1e\x04\x1a\x04\x16\x04\x0f"
  "\x04\x0a\x04\x04\x3d\x5d\x3a\x5b\x5c\x36\x1f\x13\x10\x56\x58\x31"
  "\x0c\x77\x69\x6e\x64\x6f\x77\x2d\x73\x69\x7a\x65\x53\x12\x0d\x69"
  "\x6e\x66\x2d\x3e\x62\x69\x66\x2f\x62\x73\x6d\x2e\x0c\x72\x65\x61"
  "\x64\x2d\x6c\x61\x62\x65\x6c\x73\x1a\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x64\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2f\x73\x63\x6f"
  "\x64\x65\x1a\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2f\x6c\x61\x6d\x62\x64\x61\x4c\x4a\x18\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2f\x6e\x61\x6d\x65\x14\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b"
  "\x2f\x66\x69\x6e\x64\x2d\x6e\x61\x6d\x65\x1c\x64\x62\x67\x2d\x62"
  "\x6c\x6f\x63\x6b\x2f\x73\x74\x61\x74\x69\x63\x2d\x6c\x69\x6e\x6b"
  "\x2d\x69\x6e\x64\x65\x78\x1f\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b"
  "\x2f\x72\x65\x74\x75\x72\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x2d"
  "\x69\x6e\x64\x65\x78\x1f\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x2f"
  "\x6e\x6f\x72\x6d\x61\x6c\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x69"
  "\x6e\x64\x65\x78\x1a\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x2f\x69"
  "\x63\x2d\x70\x61\x72\x65\x6e\x74\x2d\x69\x6e\x64\x65\x78\x1d\x64"
  "\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x2f\x64\x79\x6e\x61\x6d\x69\x63"
  "\x2d\x6c\x69\x6e\x6b\x2d\x69\x6e\x64\x65\x78\x18\x64\x62\x67\x2d"
  "\x62\x6c\x6f\x63\x6b\x2f\x6c\x61\x79\x6f\x75\x74\x2d\x76\x65\x63"
  "\x74\x6f\x72\x1e\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x2f\x6c\x61"
  "\x79\x6f\x75\x74\x2d\x66\x69\x72\x73\x74\x2d\x6f\x66\x66\x73\x65"
  "\x74\x44\x11\x2b\x3f\x33\x1e\x61\x64\x64\x2d\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x2d\x72\x65\x77\x72\x69\x74\x69\x6e\x67\x2d\x72"
  "\x75\x6c\x65\x21\x1e\x77\x69\x74\x68\x2d\x64\x69\x72\x65\x63\x74"
  "\x6f\x72\x79\x2d\x72\x65\x77\x72\x69\x74\x69\x6e\x67\x2d\x72\x75"
  "\x6c\x65\x37\x2f\x2d\x26\x1f\x66\x61\x73\x6c\x6f\x61\x64\x2f\x75"
  "\x70\x64\x61\x74\x65\x2d\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d"
  "\x69\x6e\x66\x6f\x21\x17\x64\x62\x67\x2d\x6c\x61\x62\x65\x6c\x73"
  "\x2f\x66\x69\x6e\x64\x2d\x6f\x66\x66\x73\x65\x74\x27\x22\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x64\x2d\x65\x6e\x74\x72\x79\x2f\x66\x69\x6c"
  "\x65\x6e\x61\x6d\x65\x2d\x61\x6e\x64\x2d\x69\x6e\x64\x65\x78\x21"
  "\x22\x4b\x1b\x0e\x15\x0c\x09\x23\x14\x69\x6e\x69\x74\x69\x61\x6c"
  "\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x3d\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03"
  "\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
infutl_so_data_51ecddcef079dca2 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_infutl_so_data_51ecddcef079dca2 [0]))), (sizeof (prog_infutl_so_data_51ecddcef079dca2)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("infutl.so", infutl_so_data_51ecddcef079dca2)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("infutl.so", "827a091756f4d1b7")
