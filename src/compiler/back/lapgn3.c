/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:09-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_8 5
#define LABEL_1_5 7
#define LABEL_1_10 9
#define LABEL_1_11 11
#define LABEL_1_12 13
#define LABEL_1_6 15
#define LABEL_1_7 17
#define ENVIRONMENT_LABEL_1_3 30
#define DEBUGGING_LABEL_1_2 29
#define EXECUTE_CACHE_1_14 19
#define EXECUTE_CACHE_1_13 21
#define EXECUTE_CACHE_1_9 23
#define FREE_REFERENCE_1_0 26
#define FREE_ASSIGNMENT_1_0 28
#define FREE_REFERENCES_LABEL_1_0 18
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_1_4);
      goto allocate_named_label_5;

    case 1:
      current_block = (Rpc - LABEL_1_8);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_1_10);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_1_12);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (allocate_named_label_12)
DEFLABEL (allocate_named_label_5)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_21;
  Wrd14 = Wrd18;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [0]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_19;
  Wrd7 = Wrd11;

DEFLABEL (label_18)
  Wrd6 = Wrd7;
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_17;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd19.Lng) = ((Wrd20.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd19.Lng)))
    goto label_17;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));

DEFLABEL (label_16)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd29.Obj) = ((Wrd21.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd21.pObj) [0]) = (Wrd17.Obj);

DEFLABEL (label_13)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  if ((Wrd29.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_12])), (Wrd21.pObj), (Wrd17.Obj));

DEFLABEL (label_10)
  goto label_13;

DEFLABEL (label_17)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_9)
  (Wrd17.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_10])), (Wrd8.pObj));

DEFLABEL (label_8)
  (Wrd7.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd15.pObj));

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 9
#define DEBUGGING_LABEL_2_2 8
#define OBJECT_2_0 7
#define EXECUTE_CACHE_2_5 5
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto allocate_constant_label_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (allocate_constant_label_3)
DEFLABEL (allocate_constant_label_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_9 5
#define LABEL_3_10 7
#define LABEL_3_11 9
#define LABEL_3_12 11
#define LABEL_3_5 13
#define LABEL_3_14 15
#define LABEL_3_15 17
#define LABEL_3_6 19
#define TAG_3_7 8
#define LABEL_3_17 21
#define LABEL_3_18 23
#define TAG_3_19 10
#define LABEL_3_20 25
#define TAG_3_21 11
#define ENVIRONMENT_LABEL_3_3 48
#define DEBUGGING_LABEL_3_2 47
#define OBJECT_3_6 46
#define OBJECT_3_5 45
#define OBJECT_3_4 44
#define OBJECT_3_3 43
#define OBJECT_3_2 42
#define OBJECT_3_1 41
#define OBJECT_3_0 40
#define EXECUTE_CACHE_3_23 27
#define EXECUTE_CACHE_3_22 29
#define EXECUTE_CACHE_3_16 31
#define EXECUTE_CACHE_3_13 33
#define EXECUTE_CACHE_3_8 35
#define FREE_REFERENCE_3_1 38
#define FREE_REFERENCE_3_0 39
#define FREE_REFERENCES_LABEL_3_0 26
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd55;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_3_4);
      goto warning_assoc_18;

    case 1:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_16;

    case 2:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_3_11);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_3_12);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_3_14);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_3_15);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_3_6);
      goto lambda_27;

    case 9:
      current_block = (Rpc - LABEL_3_17);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_3_18);
      goto lambda_28;

    case 11:
      current_block = (Rpc - LABEL_3_20);
      goto lambda_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (warning_assoc_26)
DEFLABEL (warning_assoc_18)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_6])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_46;
  Wrd5 = Wrd9;

DEFLABEL (label_45)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_31;

DEFLABEL (label_30)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_30;
  if (! ((Wrd13.uLng) == 1))
    goto label_44;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_43)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  Rsp = (& (Rsp [2]));
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_30;

DEFLABEL (label_32)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_3_4]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_3_9);
  goto label_30;

DEFLABEL (label_33)
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 30)
    goto label_35;

DEFLABEL (label_34)
  Rsp = (& (Rsp [2]));
  goto label_32;

DEFLABEL (label_35)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 30))
    goto label_34;
  if (! ((Wrd41.uLng) == 30))
    goto label_42;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [1]);
  (Wrd45.Obj) = (MAKE_OBJECT (26, (Wrd49.uLng)));

DEFLABEL (label_41)
  if (! ((Wrd45.Obj) == (current_block [OBJECT_3_1])))
    goto label_34;
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 30))
    goto label_40;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [1]);
  (Wrd57.Obj) = (MAKE_OBJECT (26, (Wrd61.uLng)));

DEFLABEL (label_39)
  if ((Wrd57.Obj) == (current_block [OBJECT_3_1]))
    goto label_37;
  (Wrd69.Obj) = (current_block [OBJECT_3_3]);
  goto label_36;

DEFLABEL (label_37)
  (Wrd69.Obj) = (current_block [OBJECT_3_2]);

DEFLABEL (label_36)
DEFLABEL (label_38)
  Rsp = (& (Rsp [2]));
  if ((Wrd69.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_30;

DEFLABEL (label_40)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_24)
  (Wrd57.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_23)
  (Wrd45.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_5]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_14])), (Wrd6.pObj));

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_45;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_3_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_48;
  Wrd6 = Wrd10;

DEFLABEL (label_47)
  (Wrd15.Obj) = (current_block [OBJECT_3_6]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_18])));
  Rhp += 2;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd23 = Wrd18;
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  ((Wrd23.pObj) [2]) = (Wrd26.Obj);
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_20])));
  Rhp += 1;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd30 = Wrd29;
  (Wrd31.Obj) = (Rsp [2]);
  ((Wrd30.pObj) [2]) = (Wrd31.Obj);
  (Rsp [1]) = (Wrd28.Obj);
  (Rsp [2]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_22]));

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_17])), (Wrd7.pObj));

DEFLABEL (label_22)
  (Wrd6.Obj) = Rvl;
  goto label_47;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_3_18);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_3_20);

DEFLABEL (lambda_1)
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
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define TAG_4_6 1
#define LABEL_4_7 7
#define LABEL_4_8 9
#define LABEL_4_9 11
#define LABEL_4_10 13
#define LABEL_4_11 15
#define ENVIRONMENT_LABEL_4_3 18
#define DEBUGGING_LABEL_4_2 17
#define OBJECT_4_0 16
#define FREE_REFERENCES_LABEL_4_0 16
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_4_4);
      goto object__label_10;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_14;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object__label_13)
DEFLABEL (object__label_10)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_10);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_16;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 9
#define DEBUGGING_LABEL_5_2 8
#define FREE_REFERENCE_5_0 7
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define ENVIRONMENT_LABEL_6_3 13
#define DEBUGGING_LABEL_6_2 12
#define FREE_REFERENCE_6_0 9
#define FREE_ASSIGNMENT_6_0 11
#define FREE_REFERENCES_LABEL_6_0 8
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_6_0]));
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
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_6_6])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_13)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_6_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 9
#define DEBUGGING_LABEL_7_2 8
#define OBJECT_7_0 7
#define EXECUTE_CACHE_7_5 5
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 9
#define DEBUGGING_LABEL_8_2 8
#define FREE_REFERENCE_8_0 7
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define ENVIRONMENT_LABEL_9_3 13
#define DEBUGGING_LABEL_9_2 12
#define FREE_REFERENCE_9_0 9
#define FREE_ASSIGNMENT_9_0 11
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_0]));
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
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_6])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_13)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_9_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define ENVIRONMENT_LABEL_10_3 17
#define DEBUGGING_LABEL_10_2 16
#define OBJECT_10_0 15
#define EXECUTE_CACHE_10_9 9
#define EXECUTE_CACHE_10_8 11
#define EXECUTE_CACHE_10_7 13
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_10_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 9
#define DEBUGGING_LABEL_11_2 8
#define FREE_REFERENCE_11_0 7
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define ENVIRONMENT_LABEL_12_3 13
#define DEBUGGING_LABEL_12_2 12
#define FREE_REFERENCE_12_0 9
#define FREE_ASSIGNMENT_12_0 11
#define FREE_REFERENCES_LABEL_12_0 8
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_0]));
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
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_6])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_13)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_12_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define ENVIRONMENT_LABEL_13_3 17
#define DEBUGGING_LABEL_13_2 16
#define OBJECT_13_0 15
#define EXECUTE_CACHE_13_9 9
#define EXECUTE_CACHE_13_8 11
#define EXECUTE_CACHE_13_7 13
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_13_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 9
#define DEBUGGING_LABEL_14_2 8
#define FREE_REFERENCE_14_0 7
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define ENVIRONMENT_LABEL_15_3 13
#define DEBUGGING_LABEL_15_2 12
#define FREE_REFERENCE_15_0 9
#define FREE_ASSIGNMENT_15_0 11
#define FREE_REFERENCES_LABEL_15_0 8
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_0]));
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
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_6])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_13)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_15_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define ENVIRONMENT_LABEL_16_3 17
#define DEBUGGING_LABEL_16_2 16
#define OBJECT_16_0 15
#define EXECUTE_CACHE_16_9 9
#define EXECUTE_CACHE_16_8 11
#define EXECUTE_CACHE_16_7 13
#define FREE_REFERENCES_LABEL_16_0 8
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_16_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_7 5
#define LABEL_17_5 7
#define LABEL_17_6 9
#define LABEL_17_10 11
#define ENVIRONMENT_LABEL_17_3 24
#define DEBUGGING_LABEL_17_2 23
#define OBJECT_17_1 22
#define OBJECT_17_0 21
#define EXECUTE_CACHE_17_12 13
#define EXECUTE_CACHE_17_11 15
#define EXECUTE_CACHE_17_9 17
#define EXECUTE_CACHE_17_8 19
#define FREE_REFERENCES_LABEL_17_0 12
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
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
      goto allocate_uuo_link_label_4;

    case 1:
      current_block = (Rpc - LABEL_17_7);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_17_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (allocate_uuo_link_label_8)
DEFLABEL (allocate_uuo_link_label_4)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_10;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_10;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (label_10)
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define TAG_18_6 1
#define LABEL_18_7 7
#define LABEL_18_8 9
#define LABEL_18_13 11
#define LABEL_18_12 13
#define LABEL_18_10 15
#define LABEL_18_15 17
#define LABEL_18_17 19
#define LABEL_18_18 21
#define LABEL_18_16 23
#define ENVIRONMENT_LABEL_18_3 35
#define DEBUGGING_LABEL_18_2 34
#define OBJECT_18_2 33
#define OBJECT_18_1 32
#define OBJECT_18_0 31
#define EXECUTE_CACHE_18_14 25
#define EXECUTE_CACHE_18_11 27
#define EXECUTE_CACHE_18_9 29
#define FREE_REFERENCES_LABEL_18_0 24
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd15;
  machine_word Wrd28;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd10;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_18_4);
      goto uuo_link_label_21;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto lambda_28;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_18_13);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_18_12);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_18_10);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_18_15);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_18_17);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_18_18);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_18_16);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (uuo_link_label_27)
DEFLABEL (uuo_link_label_21)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_18_5);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_8);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_10);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_18_1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_18_16);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_36)
  (Wrd19.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_18_12);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_34;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_18_15);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_33;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_32)
  (Wrd18.Obj) = (Rsp [5]);
  (Wrd19.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_31;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  ((Wrd26.pObj) [1]) = (Wrd20.Obj);

DEFLABEL (label_30)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_18]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 2);

DEFLABEL (label_25)
  goto label_30;

DEFLABEL (label_33)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_17]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_24)
  (Wrd6.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [5]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_35;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_35)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_37)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define LABEL_19_11 9
#define LABEL_19_10 11
#define LABEL_19_8 13
#define LABEL_19_14 15
#define LABEL_19_13 17
#define LABEL_19_15 19
#define LABEL_19_16 21
#define ENVIRONMENT_LABEL_19_3 38
#define DEBUGGING_LABEL_19_2 37
#define OBJECT_19_3 36
#define OBJECT_19_2 35
#define OBJECT_19_1 34
#define OBJECT_19_0 33
#define EXECUTE_CACHE_19_12 23
#define EXECUTE_CACHE_19_9 25
#define EXECUTE_CACHE_19_7 27
#define FREE_REFERENCE_19_0 30
#define FREE_ASSIGNMENT_19_0 32
#define FREE_REFERENCES_LABEL_19_0 22
#define NUMBER_OF_LINKER_SECTIONS_19_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_19_4);
      goto lambda_20;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_19_11);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_19_10);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_19_14);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_19_13);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_19_15);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_19_16);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_28)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_42;
  Wrd5 = Wrd9;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_32;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_8);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_19_2]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_0]));
  (Wrd31.Obj) = ((Wrd23.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  ((Wrd23.pObj) [0]) = (Wrd21.Obj);

DEFLABEL (label_29)
  Rsp = (& (Rsp [1]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_31)
  if ((Wrd31.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_30;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_14])), (Wrd23.pObj), (Wrd21.Obj));

DEFLABEL (label_24)
  goto label_29;

DEFLABEL (label_32)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_40;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_39)
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_19_10);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_37;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_19_13);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_36;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_35)
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_34;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  ((Wrd26.pObj) [1]) = (Wrd20.Obj);

DEFLABEL (label_33)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_16]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 2);

DEFLABEL (label_26)
  goto label_33;

DEFLABEL (label_36)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_25)
  (Wrd6.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_38;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_38)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_40)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_5])), (Wrd6.pObj));

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define LABEL_20_11 9
#define LABEL_20_10 11
#define LABEL_20_8 13
#define LABEL_20_14 15
#define LABEL_20_13 17
#define LABEL_20_15 19
#define LABEL_20_16 21
#define ENVIRONMENT_LABEL_20_3 38
#define DEBUGGING_LABEL_20_2 37
#define OBJECT_20_3 36
#define OBJECT_20_2 35
#define OBJECT_20_1 34
#define OBJECT_20_0 33
#define EXECUTE_CACHE_20_12 23
#define EXECUTE_CACHE_20_9 25
#define EXECUTE_CACHE_20_7 27
#define FREE_REFERENCE_20_0 30
#define FREE_ASSIGNMENT_20_0 32
#define FREE_REFERENCES_LABEL_20_0 22
#define NUMBER_OF_LINKER_SECTIONS_20_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_20_4);
      goto lambda_20;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_20_11);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_20_8);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_20_14);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_20_13);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_20_15);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_20_16);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_28)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_42;
  Wrd5 = Wrd9;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_32;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_8);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_20_2]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_0]));
  (Wrd31.Obj) = ((Wrd23.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  ((Wrd23.pObj) [0]) = (Wrd21.Obj);

DEFLABEL (label_29)
  Rsp = (& (Rsp [1]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_31)
  if ((Wrd31.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_30;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_14])), (Wrd23.pObj), (Wrd21.Obj));

DEFLABEL (label_24)
  goto label_29;

DEFLABEL (label_32)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_40;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_39)
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_20_10);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_37;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_20_13);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_36;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_35)
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_34;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  ((Wrd26.pObj) [1]) = (Wrd20.Obj);

DEFLABEL (label_33)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_3]), 2);

DEFLABEL (label_26)
  goto label_33;

DEFLABEL (label_36)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_25)
  (Wrd6.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_38;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_38)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_40)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_5])), (Wrd6.pObj));

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_7 9
#define LABEL_21_8 11
#define LABEL_21_9 13
#define LABEL_21_10 15
#define ENVIRONMENT_LABEL_21_3 27
#define DEBUGGING_LABEL_21_2 26
#define EXECUTE_CACHE_21_11 17
#define FREE_REFERENCE_21_5 20
#define FREE_REFERENCE_21_4 21
#define FREE_REFERENCE_21_3 22
#define FREE_REFERENCE_21_2 23
#define FREE_REFERENCE_21_1 24
#define FREE_REFERENCE_21_0 25
#define FREE_REFERENCES_LABEL_21_0 16
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn3_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_21_4);
      goto prepare_constants_block_0;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto label_4;

    case 4:
      current_block = (Rpc - LABEL_21_8);
      goto label_5;

    case 5:
      current_block = (Rpc - LABEL_21_9);
      goto label_6;

    case 6:
      current_block = (Rpc - LABEL_21_10);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (prepare_constants_block_9)
DEFLABEL (prepare_constants_block_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_21;
  Wrd5 = Wrd9;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_19;
  Wrd11 = Wrd15;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_17;
  Wrd17 = Wrd21;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_3]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_15;
  Wrd23 = Wrd27;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_4]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_13;
  Wrd29 = Wrd33;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_5]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_11;
  Wrd35 = Wrd39;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_10])), (Wrd36.pObj));

DEFLABEL (label_7)
  (Wrd35.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_9])), (Wrd30.pObj));

DEFLABEL (label_6)
  (Wrd29.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_8])), (Wrd24.pObj));

DEFLABEL (label_5)
  (Wrd23.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_7])), (Wrd18.pObj));

DEFLABEL (label_4)
  (Wrd17.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_6])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_8 5
#define LABEL_6 7
#define LABEL_12 9
#define LABEL_7 11
#define LABEL_10 13
#define LABEL_15 15
#define LABEL_11 17
#define LABEL_13 19
#define LABEL_18 21
#define LABEL_14 23
#define LABEL_16 25
#define LABEL_17 27
#define LABEL_19 29
#define LABEL_20 31
#define LABEL_21 33
#define ENVIRONMENT_LABEL_3 67
#define DEBUGGING_LABEL_2 66
#define PURIFICATION_ROOT 65
#define OBJECT_21 64
#define OBJECT_20 63
#define OBJECT_19 62
#define OBJECT_18 61
#define OBJECT_17 60
#define OBJECT_16 59
#define OBJECT_15 58
#define OBJECT_14 57
#define OBJECT_13 56
#define OBJECT_12 55
#define OBJECT_11 54
#define OBJECT_10 53
#define OBJECT_9 52
#define OBJECT_8 51
#define OBJECT_7 50
#define OBJECT_6 49
#define OBJECT_5 48
#define OBJECT_4 47
#define OBJECT_3 46
#define OBJECT_2 45
#define OBJECT_1 44
#define OBJECT_0 43
#define EXECUTE_CACHE_9 35
#define FREE_REFERENCE_1 38
#define FREE_REFERENCE_0 39
#define GLOBAL_EXECUTE_CACHE_5 41
#define FREE_REFERENCES_LABEL_0 34
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
lapgn3_so_74490cfa7fd2a1cb (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_8);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_12);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_15);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_11);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_18);
      goto label_14;

    case 10:
      current_block = (Rpc - LABEL_14);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_19);
      goto label_17;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto label_18;

    case 15:
      current_block = (Rpc - LABEL_21);
      goto expression_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_10)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_20])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_18)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_17)
  {
    static const short sections [] =
      {
	0,
	2,
	3,
	3,
	1,
	1,
	1,
	2,
	1,
	1,
	2,
	1,
	1,
	2,
	1,
	1,
	2,
	1,
	0,
	2,
	1,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 21)
      goto label_16;
    blocks = (current_block [OBJECT_21]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_19])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_16)
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
  (Wrd13.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_26;
  Wrd14 = Wrd18;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_24;
  Wrd14 = Wrd18;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_22;
  Wrd14 = Wrd18;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_20;
  Wrd14 = Wrd18;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd5.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_19]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd15.pObj));

DEFLABEL (label_14)
  (Wrd14.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd15.pObj));

DEFLABEL (label_13)
  (Wrd14.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12])), (Wrd15.pObj));

DEFLABEL (label_12)
  (Wrd14.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd15.pObj));

DEFLABEL (label_11)
  (Wrd14.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_lapgn3_so_74490cfa7fd2a1cb [21] =
  {
    { "lapgn3_so_code_1", 8, lapgn3_so_code_1 },
    { "lapgn3_so_code_2", 1, lapgn3_so_code_2 },
    { "lapgn3_so_code_3", 12, lapgn3_so_code_3 },
    { "lapgn3_so_code_4", 7, lapgn3_so_code_4 },
    { "lapgn3_so_code_5", 2, lapgn3_so_code_5 },
    { "lapgn3_so_code_6", 3, lapgn3_so_code_6 },
    { "lapgn3_so_code_7", 1, lapgn3_so_code_7 },
    { "lapgn3_so_code_8", 2, lapgn3_so_code_8 },
    { "lapgn3_so_code_9", 3, lapgn3_so_code_9 },
    { "lapgn3_so_code_10", 3, lapgn3_so_code_10 },
    { "lapgn3_so_code_11", 2, lapgn3_so_code_11 },
    { "lapgn3_so_code_12", 3, lapgn3_so_code_12 },
    { "lapgn3_so_code_13", 3, lapgn3_so_code_13 },
    { "lapgn3_so_code_14", 2, lapgn3_so_code_14 },
    { "lapgn3_so_code_15", 3, lapgn3_so_code_15 },
    { "lapgn3_so_code_16", 3, lapgn3_so_code_16 },
    { "lapgn3_so_code_17", 5, lapgn3_so_code_17 },
    { "lapgn3_so_code_18", 11, lapgn3_so_code_18 },
    { "lapgn3_so_code_19", 10, lapgn3_so_code_19 },
    { "lapgn3_so_code_20", 10, lapgn3_so_code_20 },
    { "lapgn3_so_code_21", 7, lapgn3_so_code_21 }
  };

int
decl_lapgn3_so_74490cfa7fd2a1cb (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_lapgn3_so_74490cfa7fd2a1cb);
  return (0);
}

DECLARE_COMPILED_CODE ("lapgn3.so", 16, decl_lapgn3_so_74490cfa7fd2a1cb, lapgn3_so_74490cfa7fd2a1cb)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_lapgn3_so_data_74490cfa7fd2a1cb [2428] =
  "\x44\x21\x98\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x25\xb1"
  "\x24\x28\x0d\xba\x28\x0d\x28\x0d\xbb\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0"
  "\x82\x88\x0c\x28\x0d\xbd\x23\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x83"
  "\x88\x08\xc1\x0c\x06\x07\x80\xc1\x0d\x0d\x24\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xbf\x1d\xb0\x84\x88\xc1\x1c\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x0d\x1c"
  "\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1b\x25\x1b"
  "\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x28\xb5\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x25\x1b\x24"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28"
  "\x0d\x1c\x28\xb5\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x25\x1b\x24\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x28\xb5\x28\xb3\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x25\x1b\x24\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b"
  "\x28\xb5\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x0c\x28\xb2\x28\xb5\x28\x1b\x28\xb3\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xc2\xbb\x08\x1b\x28\x0d\xba\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x08\x1b\x0c"
  "\x0d\x1c\x25\x1b\x24\x28\xb2\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x08\x1b\x0c\x0d\x1c\x25\x1b"
  "\x24\x28\xb2\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb"
  "\x17\xb8\x88\xb0\x0d\xb3\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9c"
  "\x0d\x0d\x0d\x0d\x1b\x9c\x0d\x1b\x2a\x1b\x2a\x1b\x2a\x0d\x1b\x2a"
  "\x1b\x2a\x1b\x2a\xc3\x0d\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x0d\x1c\x0d\x1c\x0d\xb5\x1b\x1b\x1b\x1b\x1b\x1b\xb1\x17"
  "\x1b\x2a\xb7\x2a\xb6\x2a\xb4\x2a\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x17"
  "\x28\x0d\x26\x1b\xb2\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x59\x2f\x55\x73"
  "\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65"
  "\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x2f\x62\x61\x63\x6b\x2f\x6c\x61\x70\x67\x6e"
  "\x33\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x10\x2a\x6e\x65\x78"
  "\x74\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2a\x02\x02\x03\x0f\x6e"
  "\x75\x6d\x62\x65\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67\x03\x1a\x73"
  "\x74\x72\x69\x6e\x67\x2d\x3e\x75\x6e\x69\x6e\x74\x65\x72\x6e\x65"
  "\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x04\x0e\x73\x74\x72\x69\x6e\x67"
  "\x2d\x61\x70\x70\x65\x6e\x64\x04\x18\x12\x81\x87\x02\x17\x10\x81"
  "\x85\x02\x16\x0e\x81\x83\x02\x15\x0c\x81\x83\x02\x14\x0a\x81\x83"
  "\x02\x13\x08\x81\x83\x02\x12\x06\x81\x89\x02\x11\x04\x83\x04\x11"
  "\x1f\x02\x0a\x43\x4f\x4e\x53\x54\x41\x4e\x54\x2d\x03\x15\x61\x6c"
  "\x6c\x6f\x63\x61\x74\x65\x2d\x6e\x61\x6d\x65\x64\x2d\x6c\x61\x62"
  "\x65\x6c\x02\x19\x04\x82\x02\x03\x0a\x02\x04\x63\x61\x72\x29\x43"
  "\x6f\x61\x6c\x65\x73\x63\x69\x6e\x67\x20\x74\x77\x6f\x20\x63\x6f"
  "\x70\x69\x65\x73\x20\x6f\x66\x20\x63\x6f\x6e\x73\x74\x61\x6e\x74"
  "\x20\x6f\x62\x6a\x65\x63\x74\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c"
  "\x65\x6e\x67\x74\x68\x27\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x63"
  "\x6f\x61\x6c\x65\x73\x63\x69\x6e\x67\x2d\x63\x6f\x6e\x73\x74\x61"
  "\x6e\x74\x2d\x77\x61\x72\x6e\x69\x6e\x67\x73\x3f\x23\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x75\x6e\x61\x73"
  "\x73\x69\x67\x6e\x65\x64\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x03"
  "\x03\x1f\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x63\x75\x72\x72"
  "\x65\x6e\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e"
  "\x04\x05\x77\x61\x72\x6e\x04\x05\x65\x71\x76\x3f\x05\x17\x62\x69"
  "\x6e\x64\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x68\x61\x6e"
  "\x64\x6c\x65\x72\x04\x06\x61\x73\x73\x6f\x63\x06\x25\x1a\x81\x85"
  "\x02\x24\x18\x81\x83\x02\x23\x16\x81\x85\x02\x22\x14\x81\x85\x02"
  "\x21\x12\x81\x87\x02\x20\x10\x81\x87\x02\x1f\x0e\x81\x85\x02\x1e"
  "\x0c\x81\x8b\x02\x1d\x0a\x81\x8b\x02\x1c\x08\x81\x89\x02\x1b\x06"
  "\x81\x87\x02\x1a\x04\x84\x06\x19\x31\x02\x04\x63\x64\x72\x09\x2c"
  "\x10\x81\x89\x02\x2b\x0e\x81\x87\x02\x2a\x0c\x81\x87\x02\x29\x0a"
  "\x81\x87\x02\x28\x08\x81\x85\x02\x27\x06\x81\x85\x02\x26\x04\x86"
  "\x0a\x0f\x13\x0a\x02\x15\x2a\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d"
  "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x73\x2a\x0b\x02\x2e\x06\x81\x81"
  "\x02\x2d\x04\x82\x02\x05\x0a\x0c\x02\x0b\x02\x0b\x02\x31\x08\x81"
  "\x85\x02\x30\x06\x81\x83\x02\x2f\x04\x83\x04\x07\x0e\x0d\x02\x08"
  "\x08\x4f\x42\x4a\x45\x43\x54\x2d\x03\x02\x32\x04\x83\x04\x03\x0a"
  "\x0e\x02\x09\x15\x2a\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x73\x2a\x0f\x02\x34\x06\x81\x81\x02\x33"
  "\x04\x82\x02\x05\x0a\x10\x02\x0a\x0f\x02\x0f\x02\x37\x08\x81\x85"
  "\x02\x36\x06\x81\x83\x02\x35\x04\x83\x04\x07\x0e\x11\x02\x0b\x0c"
  "\x2d\x52\x45\x41\x44\x2d\x43\x45\x4c\x4c\x2d\x03\x0f\x73\x79\x6d"
  "\x62\x6f\x6c\x2d\x3e\x73\x74\x72\x69\x6e\x67\x12\x03\x04\x04\x3a"
  "\x08\x81\x87\x02\x39\x06\x81\x83\x02\x38\x04\x83\x04\x07\x12\x13"
  "\x02\x0c\x17\x2a\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x73\x2a\x14\x02\x3c\x06\x81\x81\x02"
  "\x3b\x04\x82\x02\x05\x0a\x15\x02\x0d\x14\x02\x14\x02\x3f\x08\x81"
  "\x85\x02\x3e\x06\x81\x83\x02\x3d\x04\x83\x04\x07\x0e\x16\x02\x0e"
  "\x0d\x2d\x57\x52\x49\x54\x45\x2d\x43\x45\x4c\x4c\x2d\x03\x12\x03"
  "\x04\x04\x42\x08\x81\x87\x02\x41\x06\x81\x83\x02\x40\x04\x83\x04"
  "\x07\x12\x17\x02\x0f\x1c\x2a\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d"
  "\x73\x74\x61\x74\x69\x63\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73"
  "\x2a\x18\x02\x44\x06\x81\x81\x02\x43\x04\x82\x02\x05\x0a\x19\x02"
  "\x10\x18\x02\x18\x02\x47\x08\x81\x85\x02\x46\x06\x81\x83\x02\x45"
  "\x04\x83\x04\x07\x0e\x1a\x02\x11\x07\x2d\x48\x4f\x4d\x45\x2d\x03"
  "\x12\x03\x04\x04\x4a\x08\x81\x87\x02\x49\x06\x81\x83\x02\x48\x04"
  "\x83\x04\x07\x12\x1b\x02\x12\x02\x2d\x07\x2d\x41\x52\x47\x53\x2d"
  "\x03\x03\x03\x12\x07\x05\x4f\x0c\x81\x8f\x02\x4e\x0a\x81\x8b\x02"
  "\x4d\x08\x81\x87\x02\x4c\x06\x81\x8d\x02\x4b\x04\x85\x08\x0b\x19"
  "\x12\x02\x13\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x09\x04\x05\x61"
  "\x73\x73\x71\x05\x18\x61\x6c\x6c\x6f\x63\x61\x74\x65\x2d\x75\x75"
  "\x6f\x2d\x6c\x69\x6e\x6b\x2d\x6c\x61\x62\x65\x6c\x1c\x04\x05\x61"
  "\x73\x73\x76\x1d\x04\x5a\x18\x81\x8b\x02\x59\x16\x81\x8d\x02\x58"
  "\x14\x81\x8d\x02\x57\x12\x81\x8d\x02\x56\x10\x81\x8b\x02\x55\x0e"
  "\x81\x8b\x02\x54\x0c\x81\x8d\x02\x53\x0a\x81\x89\x02\x52\x08\x81"
  "\x87\x02\x51\x06\x81\x87\x02\x50\x04\x85\x08\x17\x24\x1e\x02\x14"
  "\x09\x01\x15\x2a\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x75\x75\x6f"
  "\x2d\x6c\x69\x6e\x6b\x73\x2a\x1f\x02\x1f\x02\x04\x05\x1c\x04\x1d"
  "\x04\x64\x16\x81\x8b\x02\x63\x14\x81\x8b\x02\x62\x12\x81\x8b\x02"
  "\x61\x10\x81\x8b\x02\x60\x0e\x81\x89\x02\x5f\x0c\x81\x89\x02\x5e"
  "\x0a\x81\x8b\x02\x5d\x08\x81\x87\x02\x5c\x06\x81\x85\x02\x5b\x04"
  "\x84\x06\x15\x27\x20\x02\x15\x09\x08\x47\x4c\x4f\x42\x41\x4c\x2d"
  "\x18\x2a\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x67\x6c\x6f\x62\x61"
  "\x6c\x2d\x6c\x69\x6e\x6b\x73\x2a\x09\x02\x09\x02\x04\x05\x1c\x04"
  "\x1d\x04\x6e\x16\x81\x8b\x02\x6d\x14\x81\x8b\x02\x6c\x12\x81\x8b"
  "\x02\x6b\x10\x81\x8b\x02\x6a\x0e\x81\x89\x02\x69\x0c\x81\x89\x02"
  "\x68\x0a\x81\x8b\x02\x67\x08\x81\x87\x02\x66\x06\x81\x85\x02\x65"
  "\x04\x84\x06\x15\x27\x1d\x02\x16\x18\x09\x1f\x14\x0f\x0b\x07\x08"
  "\x19\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x63\x6f\x6e\x73\x74\x61"
  "\x6e\x74\x73\x2d\x62\x6c\x6f\x63\x6b\x02\x75\x10\x81\x8b\x02\x74"
  "\x0e\x81\x89\x02\x73\x0c\x81\x87\x02\x72\x0a\x81\x85\x02\x71\x08"
  "\x81\x83\x02\x70\x06\x81\x81\x02\x6f\x04\x82\x02\x0f\x1c\x16\x12"
  "\x66\x72\x65\x65\x2d\x73\x74\x61\x74\x69\x63\x2d\x6c\x61\x62\x65"
  "\x6c\x04\x1d\x04\x20\x04\x1e\x04\x12\x04\x18\x70\x72\x65\x70\x61"
  "\x72\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x73\x2d\x62\x6c\x6f"
  "\x63\x6b\x16\x67\x6c\x6f\x62\x61\x6c\x2d\x75\x75\x6f\x2d\x6c\x69"
  "\x6e\x6b\x2d\x6c\x61\x62\x65\x6c\x14\x66\x72\x65\x65\x2d\x75\x75"
  "\x6f\x2d\x6c\x69\x6e\x6b\x2d\x6c\x61\x62\x65\x6c\x0f\x75\x75\x6f"
  "\x2d\x6c\x69\x6e\x6b\x2d\x6c\x61\x62\x65\x6c\x1c\x16\x66\x72\x65"
  "\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x6c\x61\x62"
  "\x65\x6c\x19\x04\x1a\x04\x1b\x04\x15\x66\x72\x65\x65\x2d\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\x2d\x6c\x61\x62\x65\x6c\x15\x04\x16"
  "\x04\x17\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e"
  "\x6d\x65\x6e\x74\x10\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x3e\x6c"
  "\x61\x62\x65\x6c\x10\x04\x11\x04\x13\x04\x0c\x04\x0d\x04\x0e\x04"
  "\x0e\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x6c\x61\x62\x65\x6c\x20\x0e"
  "\x77\x61\x72\x6e\x69\x6e\x67\x2d\x61\x73\x73\x6f\x63\x1e\x18\x61"
  "\x6c\x6c\x6f\x63\x61\x74\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74"
  "\x2d\x6c\x61\x62\x65\x6c\x18\x09\x1f\x14\x0f\x0b\x0c\x0a\x04\x04"
  "\x04\x04\x0c\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74"
  "\x69\x70\x6c\x65\x02\x1e\x03\x06\x20\x02\x10\x22\x80\x80\x04\x0f"
  "\x20\x81\x81\x02\x0e\x1e\x81\x81\x02\x0d\x1c\x81\x85\x02\x0c\x1a"
  "\x81\x83\x02\x0b\x18\x81\x85\x02\x0a\x16\x81\x8d\x02\x09\x14\x81"
  "\x83\x02\x08\x12\x81\x85\x02\x07\x10\x81\x8d\x02\x06\x0e\x81\x83"
  "\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x8d\x02\x03\x08\x81\x83\x02"
  "\x02\x06\x81\x8d\x02\x01\x04\x81\x83\x02\x21\x44";

SCHEME_OBJECT *
lapgn3_so_data_74490cfa7fd2a1cb (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_lapgn3_so_data_74490cfa7fd2a1cb [0]))), (sizeof (prog_lapgn3_so_data_74490cfa7fd2a1cb)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_21]));
}

DECLARE_COMPILED_DATA_NS ("lapgn3.so", lapgn3_so_data_74490cfa7fd2a1cb)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("lapgn3.so", "13dcfd38b80e3955")
