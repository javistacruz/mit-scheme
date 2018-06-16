/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:25-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 12
#define DEBUGGING_LABEL_1_2 11
#define EXECUTE_CACHE_1_6 7
#define FREE_REFERENCE_1_0 10
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rlife_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto lifetime_analysis_0;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lifetime_analysis_4)
DEFLABEL (lifetime_analysis_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define LABEL_2_9 11
#define LABEL_2_10 13
#define LABEL_2_11 15
#define LABEL_2_12 17
#define LABEL_2_13 19
#define LABEL_2_14 21
#define LABEL_2_15 23
#define LABEL_2_16 25
#define LABEL_2_17 27
#define LABEL_2_18 29
#define LABEL_2_19 31
#define TAG_2_20 14
#define LABEL_2_22 33
#define LABEL_2_30 35
#define LABEL_2_25 37
#define TAG_2_26 17
#define LABEL_2_23 39
#define TAG_2_24 18
#define LABEL_2_32 41
#define LABEL_2_33 43
#define LABEL_2_34 45
#define LABEL_2_28 47
#define LABEL_2_35 49
#define LABEL_2_29 51
#define LABEL_2_36 53
#define LABEL_2_37 55
#define LABEL_2_38 57
#define ENVIRONMENT_LABEL_2_3 86
#define DEBUGGING_LABEL_2_2 85
#define OBJECT_2_13 84
#define OBJECT_2_12 83
#define OBJECT_2_11 82
#define OBJECT_2_10 81
#define OBJECT_2_9 80
#define OBJECT_2_8 79
#define OBJECT_2_7 78
#define OBJECT_2_6 77
#define OBJECT_2_5 76
#define OBJECT_2_4 75
#define OBJECT_2_3 74
#define OBJECT_2_2 73
#define OBJECT_2_1 72
#define OBJECT_2_0 71
#define EXECUTE_CACHE_2_31 59
#define EXECUTE_CACHE_2_27 61
#define EXECUTE_CACHE_2_21 63
#define EXECUTE_CACHE_2_8 65
#define FREE_REFERENCE_2_0 68
#define FREE_ASSIGNMENT_2_0 70
#define FREE_REFERENCES_LABEL_2_0 58
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rlife_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd41;
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
      goto walk_rgraph_32;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_34;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_35;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto label_36;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_2_11);
      goto label_37;

    case 7:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_2_13);
      goto label_38;

    case 9:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_2_15);
      goto label_39;

    case 11:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_2_17);
      goto label_40;

    case 13:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_18;

    case 14:
      current_block = (Rpc - LABEL_2_19);
      goto lambda_49;

    case 15:
      current_block = (Rpc - LABEL_2_22);
      goto continuation_19;

    case 16:
      current_block = (Rpc - LABEL_2_30);
      goto label_41;

    case 17:
      current_block = (Rpc - LABEL_2_25);
      goto lambda_51;

    case 18:
      current_block = (Rpc - LABEL_2_23);
      goto swapB_50;

    case 19:
      current_block = (Rpc - LABEL_2_32);
      goto label_42;

    case 20:
      current_block = (Rpc - LABEL_2_33);
      goto label_43;

    case 21:
      current_block = (Rpc - LABEL_2_34);
      goto label_44;

    case 22:
      current_block = (Rpc - LABEL_2_28);
      goto continuation_12;

    case 23:
      current_block = (Rpc - LABEL_2_35);
      goto label_45;

    case 24:
      current_block = (Rpc - LABEL_2_29);
      goto lambda_29;

    case 25:
      current_block = (Rpc - LABEL_2_36);
      goto continuation_14;

    case 26:
      current_block = (Rpc - LABEL_2_37);
      goto label_46;

    case 27:
      current_block = (Rpc - LABEL_2_38);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_rgraph_48)
DEFLABEL (walk_rgraph_32)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_66;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_66;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_65)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_64;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd29.Lng))))
    goto label_64;
  (Wrd23.Obj) = ((Wrd27.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_63)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd41.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (Wrd5.Obj) = Rvl;
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_62;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_62;
  ((Wrd16.pObj) [4]) = Rvl;

DEFLABEL (label_61)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (Wrd5.Obj) = Rvl;
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_60;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_60;
  ((Wrd16.pObj) [5]) = Rvl;

DEFLABEL (label_59)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_12);
  (Wrd5.Obj) = Rvl;
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_58;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd18.Lng))))
    goto label_58;
  ((Wrd16.pObj) [6]) = Rvl;

DEFLABEL (label_57)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (Wrd5.Obj) = Rvl;
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_56;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd18.Lng))))
    goto label_56;
  ((Wrd16.pObj) [7]) = Rvl;

DEFLABEL (label_55)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_8]), 2);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_16);
  (Wrd5.Obj) = Rvl;
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_54;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd21.Lng))))
    goto label_54;
  ((Wrd19.pObj) [8]) = Rvl;

DEFLABEL (label_53)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_19])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_21]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_23])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  ((Wrd22.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (Rsp [2]) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_25])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd17 = Wrd16;
  (Wrd18.Obj) = (Rsp [5]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (label_54)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_2_9]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 3);

DEFLABEL (label_40)
  goto label_53;

DEFLABEL (label_56)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_2_7]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 3);

DEFLABEL (label_39)
  goto label_55;

DEFLABEL (label_58)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_2_6]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 3);

DEFLABEL (label_38)
  goto label_57;

DEFLABEL (label_60)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_2_5]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 3);

DEFLABEL (label_37)
  goto label_59;

DEFLABEL (label_62)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_2_3]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 3);

DEFLABEL (label_36)
  goto label_61;

DEFLABEL (label_64)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_2_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_2_22);
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_29]))));
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_68;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_68;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_67)
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_21]));

DEFLABEL (label_68)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_2_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_30]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_41)
  (Wrd7.Obj) = Rvl;
  goto label_67;

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_2_19);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_8]), 2);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_2_28);
  (Wrd5.Obj) = Rvl;
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_74;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd20.Lng))))
    goto label_74;
  ((Wrd18.pObj) [10]) = Rvl;

DEFLABEL (label_73)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_36]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_8]), 2);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_2_36);
  (Wrd5.Obj) = Rvl;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_72;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd21.Lng))))
    goto label_72;
  ((Wrd19.pObj) [11]) = Rvl;

DEFLABEL (label_71)
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_38]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_8]), 2);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_2_38);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_2_12]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_70;

DEFLABEL (label_69)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 3);

DEFLABEL (label_70)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd17.Lng))))
    goto label_69;
  ((Wrd15.pObj) [12]) = Rvl;
  Rvl = (current_block [OBJECT_2_10]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_2_13]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_37]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 3);

DEFLABEL (label_46)
  goto label_71;

DEFLABEL (label_74)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (current_block [OBJECT_2_11]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_35]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 3);

DEFLABEL (label_45)
  goto label_73;

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_2_25);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_31]));

DEFLABEL (swapB_50)
  CLOSURE_HEADER (LABEL_2_23);

DEFLABEL (swapB_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_83;

DEFLABEL (label_82)
  Wrd5 = Wrd9;

DEFLABEL (label_81)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_80;

DEFLABEL (label_79)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_78)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_77;

DEFLABEL (label_76)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_75)
  Rvl = (current_block [OBJECT_2_10]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_77)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_76;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_34])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_44)
  goto label_75;

DEFLABEL (label_80)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_79;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_33])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_43)
  goto label_78;

DEFLABEL (label_83)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_82;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_32])), (Wrd6.pObj));

DEFLABEL (label_42)
  (Wrd5.Obj) = Rvl;
  goto label_81;

DEFLABEL (lambda_52)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_2_29);
  (Wrd5.Obj) = (current_block [OBJECT_2_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd20.uLng) == 10)
    goto label_85;

DEFLABEL (label_84)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 3);

DEFLABEL (label_85)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd18.Lng))))
    goto label_84;
  ((Wrd16.pObj) [12]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_2_10]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_11 9
#define LABEL_3_7 11
#define TAG_3_8 4
#define LABEL_3_12 13
#define LABEL_3_13 15
#define LABEL_3_15 17
#define LABEL_3_16 19
#define LABEL_3_10 21
#define LABEL_3_18 23
#define LABEL_3_19 25
#define LABEL_3_14 27
#define LABEL_3_21 29
#define LABEL_3_22 31
#define LABEL_3_17 33
#define LABEL_3_20 35
#define LABEL_3_24 37
#define LABEL_3_26 39
#define TAG_3_27 18
#define LABEL_3_29 41
#define LABEL_3_30 43
#define ENVIRONMENT_LABEL_3_3 63
#define DEBUGGING_LABEL_3_2 62
#define OBJECT_3_8 61
#define OBJECT_3_7 60
#define OBJECT_3_6 59
#define OBJECT_3_5 58
#define OBJECT_3_4 57
#define OBJECT_3_3 56
#define OBJECT_3_2 55
#define OBJECT_3_1 54
#define OBJECT_3_0 53
#define EXECUTE_CACHE_3_28 45
#define EXECUTE_CACHE_3_25 47
#define EXECUTE_CACHE_3_23 49
#define EXECUTE_CACHE_3_9 51
#define FREE_REFERENCES_LABEL_3_0 44
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rlife_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd54;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd51;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_3_4);
      goto walk_bblocks_21;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto loop_19;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_14;

    case 3:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_3_7);
      goto lambda_36;

    case 5:
      current_block = (Rpc - LABEL_3_12);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_3_13);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_3_15);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_3_16);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_3_10);
      goto lambda_18;

    case 10:
      current_block = (Rpc - LABEL_3_18);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_3_19);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_3_14);
      goto continuation_5;

    case 13:
      current_block = (Rpc - LABEL_3_21);
      goto label_29;

    case 14:
      current_block = (Rpc - LABEL_3_22);
      goto label_30;

    case 15:
      current_block = (Rpc - LABEL_3_17);
      goto continuation_17;

    case 16:
      current_block = (Rpc - LABEL_3_20);
      goto continuation_8;

    case 17:
      current_block = (Rpc - LABEL_3_24);
      goto continuation_9;

    case 18:
      current_block = (Rpc - LABEL_3_26);
      goto lambda_38;

    case 19:
      current_block = (Rpc - LABEL_3_29);
      goto label_31;

    case 20:
      current_block = (Rpc - LABEL_3_30);
      goto label_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_bblocks_34)
DEFLABEL (walk_bblocks_21)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto loop_19;

DEFLABEL (loop_35)
DEFLABEL (loop_19)
  INTERRUPT_CHECK (26, LABEL_3_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_7])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  ((Wrd6.pObj) [0]) = ((SCHEME_OBJECT) 0);
  (Rsp [0]) = ((SCHEME_OBJECT) 0);
  goto loop_19;

DEFLABEL (label_39)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (Rsp [1]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_3_7);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_49;

DEFLABEL (label_48)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = (current_block [OBJECT_3_0]);
  ((Wrd12.pObj) [0]) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_47;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd25.Lng))))
    goto label_47;
  (Wrd19.Obj) = ((Wrd23.pObj) [12]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_46)
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_45;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd41.Lng))))
    goto label_45;
  (Wrd35.Obj) = ((Wrd39.pObj) [11]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_44)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_43;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_43;
  (Wrd10.Obj) = ((Wrd14.pObj) [11]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_42)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_41;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd32.Lng))))
    goto label_41;
  (Wrd26.Obj) = ((Wrd30.pObj) [10]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_40)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 2);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_25]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_3_24);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_26])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = (Wrd5.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_28]));

DEFLABEL (label_41)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_3_7]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_3_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd45.Obj) = (current_block [OBJECT_3_4]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.Obj) = (current_block [OBJECT_3_2]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd61.Obj) = (Rsp [2]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 10))
    goto label_53;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd60.Lng))))
    goto label_53;
  (Wrd54.Obj) = ((Wrd58.pObj) [12]);
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_52)
  (Wrd77.Obj) = (Rsp [3]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 10))
    goto label_51;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd76.Lng))))
    goto label_51;
  (Wrd70.Obj) = ((Wrd74.pObj) [11]);
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_50)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_5]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  Rvl = (current_block [OBJECT_3_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd79.Obj) = (Rsp [3]);
  (Wrd80.Obj) = (current_block [OBJECT_3_4]);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd63.Obj) = (Rsp [2]);
  (Wrd64.Obj) = (current_block [OBJECT_3_2]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (lambda_37)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_3_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_57;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_57;
  (Wrd10.Obj) = ((Wrd14.pObj) [11]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_56)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_55;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd32.Lng))))
    goto label_55;
  (Wrd26.Obj) = ((Wrd30.pObj) [10]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_54)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 2);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_3_17);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

DEFLABEL (label_55)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_3_7]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_3_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_3_26);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_61;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_61;
  (Wrd9.Obj) = ((Wrd15.pObj) [10]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_60)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_59;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd37.Lng))))
    goto label_59;
  (Wrd29.Obj) = ((Wrd35.pObj) [12]);

DEFLABEL (label_58)
  (Rsp [1]) = (Wrd29.Obj);
  (Wrd45.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_8]), 2);

DEFLABEL (label_59)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.Obj) = (current_block [OBJECT_3_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_30]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 2);

DEFLABEL (label_32)
  (Wrd29.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_3_7]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_29]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_60;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define TAG_4_6 1
#define LABEL_4_8 7
#define LABEL_4_9 9
#define ENVIRONMENT_LABEL_4_3 19
#define DEBUGGING_LABEL_4_2 18
#define OBJECT_4_2 17
#define OBJECT_4_1 16
#define OBJECT_4_0 15
#define EXECUTE_CACHE_4_10 11
#define EXECUTE_CACHE_4_7 13
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rlife_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_4_4);
      goto propagate_block_3;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_4_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (propagate_block_8)
DEFLABEL (propagate_block_3)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = (Wrd5.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_13;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd18.Lng))))
    goto label_13;
  (Wrd10.Obj) = ((Wrd16.pObj) [10]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_12)
  (Wrd30.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd30.Obj);
  (Wrd40.Obj) = (Rsp [5]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_11;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd39.Lng))))
    goto label_11;
  (Wrd31.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_10)
  (Rsp [3]) = (Wrd31.Obj);
  (Rsp [4]) = ((SCHEME_OBJECT) 0);
  (Rsp [5]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (label_11)
  (Wrd42.Obj) = (Rsp [5]);
  (Wrd43.Obj) = (current_block [OBJECT_4_2]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_6)
  (Wrd31.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [2]);
  (Wrd26.Obj) = (current_block [OBJECT_4_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_7 5
#define LABEL_5_5 7
#define LABEL_5_6 9
#define LABEL_5_13 11
#define LABEL_5_14 13
#define LABEL_5_9 15
#define LABEL_5_10 17
#define TAG_5_11 7
#define LABEL_5_16 19
#define LABEL_5_17 21
#define LABEL_5_20 23
#define LABEL_5_18 25
#define LABEL_5_23 27
#define LABEL_5_21 29
#define LABEL_5_24 31
#define LABEL_5_26 33
#define ENVIRONMENT_LABEL_5_3 59
#define DEBUGGING_LABEL_5_2 58
#define OBJECT_5_6 57
#define OBJECT_5_5 56
#define OBJECT_5_4 55
#define OBJECT_5_3 54
#define OBJECT_5_2 53
#define OBJECT_5_1 52
#define OBJECT_5_0 51
#define EXECUTE_CACHE_5_25 35
#define EXECUTE_CACHE_5_22 37
#define EXECUTE_CACHE_5_19 39
#define EXECUTE_CACHE_5_15 41
#define EXECUTE_CACHE_5_12 43
#define EXECUTE_CACHE_5_8 45
#define FREE_REFERENCE_5_2 48
#define FREE_REFERENCE_5_1 49
#define FREE_REFERENCE_5_0 50
#define FREE_REFERENCES_LABEL_5_0 34
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rlife_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd31;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_5_4);
      goto propagate_block_deleteB_13;

    case 1:
      current_block = (Rpc - LABEL_5_7);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_5_6);
      goto lambda_2;

    case 4:
      current_block = (Rpc - LABEL_5_13);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_5_14);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_12;

    case 7:
      current_block = (Rpc - LABEL_5_10);
      goto lambda_24;

    case 8:
      current_block = (Rpc - LABEL_5_16);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_5_17);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_5_20);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_5_18);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_5_23);
      goto label_20;

    case 13:
      current_block = (Rpc - LABEL_5_21);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_5_24);
      goto continuation_9;

    case 15:
      current_block = (Rpc - LABEL_5_26);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (propagate_block_deleteB_23)
DEFLABEL (propagate_block_deleteB_13)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_27;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd18.Lng))))
    goto label_27;
  (Wrd12.Obj) = ((Wrd16.pObj) [10]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_10])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_5_9);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (label_27)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_5_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (lambda_25)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_5_6);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_33;
  Wrd7 = Wrd11;

DEFLABEL (label_32)
  Wrd6 = Wrd7;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_31;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd19.Lng))))
    goto label_31;
  (Wrd14.Obj) = ((Wrd17.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_30)
  (Wrd26.Obj) = (current_block [OBJECT_5_3]);
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 10)
    goto label_29;

DEFLABEL (label_28)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_5]), 3);

DEFLABEL (label_29)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_28;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) (Wrd38.Lng)) < ((unsigned long) (Wrd42.Lng))))
    goto label_28;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd32.pObj) = (& ((Wrd40.pObj) [(Wrd29.Lng)]));
  ((Wrd32.pObj) [1]) = (Wrd26.Obj);
  Rvl = (current_block [OBJECT_5_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd22.Obj) = (current_block [OBJECT_5_2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_13])), (Wrd8.pObj));

DEFLABEL (label_16)
  (Wrd7.Obj) = Rvl;
  goto label_32;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_5_10);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_46;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_46;
  (Wrd9.Obj) = ((Wrd15.pObj) [10]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_45)
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_44;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd37.Lng))))
    goto label_44;
  (Wrd31.Obj) = ((Wrd35.pObj) [1]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_43)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_18);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_40;

DEFLABEL (label_39)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_22]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_21);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_36;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_24]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_25]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_24);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_2]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_35;
  Wrd7 = Wrd11;

DEFLABEL (label_34)
  (Rsp [5]) = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_26])), (Wrd8.pObj));

DEFLABEL (label_21)
  (Wrd7.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_36)
  (Wrd7.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_6]);
  (Rsp [4]) = (Wrd8.Obj);
  (Rsp [5]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 10)
    goto label_38;

DEFLABEL (label_37)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_5]), 3);

DEFLABEL (label_38)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd20.Lng))))
    goto label_37;
  ((Wrd18.pObj) [1]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_5_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_42;
  Wrd10 = Wrd14;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_20);
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_23])), (Wrd11.pObj));

DEFLABEL (label_20)
  (Wrd10.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.Obj) = (current_block [OBJECT_5_6]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_5_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_6 5
#define LABEL_6_7 7
#define LABEL_6_5 9
#define LABEL_6_9 11
#define LABEL_6_10 13
#define LABEL_6_8 15
#define LABEL_6_11 17
#define TAG_6_12 7
#define LABEL_6_14 19
#define LABEL_6_15 21
#define ENVIRONMENT_LABEL_6_3 32
#define DEBUGGING_LABEL_6_2 31
#define OBJECT_6_3 30
#define OBJECT_6_2 29
#define OBJECT_6_1 28
#define OBJECT_6_0 27
#define EXECUTE_CACHE_6_13 23
#define FREE_REFERENCE_6_0 26
#define FREE_REFERENCES_LABEL_6_0 22
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rlife_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_6_4);
      goto propagation_loop_8;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_6_9);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_6_10);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_6_11);
      goto lambda_16;

    case 8:
      current_block = (Rpc - LABEL_6_14);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_6_15);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (propagation_loop_15)
DEFLABEL (propagation_loop_8)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_24;
  Wrd9 = Wrd13;

DEFLABEL (label_23)
  Wrd8 = Wrd9;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_22;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd21.Lng))))
    goto label_22;
  (Wrd16.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_21)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_20;
  Wrd9 = Wrd13;

DEFLABEL (label_19)
  Wrd8 = Wrd9;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_18;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd21.Lng))))
    goto label_18;
  (Wrd16.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_17)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_11])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  ((Wrd12.pObj) [4]) = Rvl;
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (label_18)
  (Wrd24.Obj) = (current_block [OBJECT_6_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_9])), (Wrd10.pObj));

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd24.Obj) = (current_block [OBJECT_6_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_6])), (Wrd10.pObj));

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_23;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_6_11);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_15);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_9 9
#define ENVIRONMENT_LABEL_7_3 18
#define DEBUGGING_LABEL_7_2 17
#define OBJECT_7_1 16
#define OBJECT_7_0 15
#define EXECUTE_CACHE_7_8 11
#define EXECUTE_CACHE_7_6 13
#define FREE_REFERENCES_LABEL_7_0 10
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rlife_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_7_4);
      goto update_live_registersB_3;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (update_live_registersB_6)
DEFLABEL (update_live_registersB_3)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_8 9
#define LABEL_8_10 11
#define LABEL_8_11 13
#define ENVIRONMENT_LABEL_8_3 27
#define DEBUGGING_LABEL_8_2 26
#define OBJECT_8_4 25
#define OBJECT_8_3 24
#define OBJECT_8_2 23
#define OBJECT_8_1 22
#define OBJECT_8_0 21
#define EXECUTE_CACHE_8_12 15
#define EXECUTE_CACHE_8_9 17
#define EXECUTE_CACHE_8_7 19
#define FREE_REFERENCES_LABEL_8_0 14
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rlife_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_8_4);
      goto mark_set_registersB_8;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_8_11);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mark_set_registersB_12)
DEFLABEL (mark_set_registersB_8)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_17;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_16)
  if ((Wrd5.Obj) == (current_block [OBJECT_8_1]))
    goto label_13;
  Rvl = (current_block [OBJECT_8_3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  Rvl = (current_block [OBJECT_8_3]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_11);
  (Wrd5.Obj) = (Rsp [4]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_8_3]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_5 3
#define LABEL_9_6 5
#define LABEL_9_4 7
#define LABEL_9_13 9
#define LABEL_9_11 11
#define TAG_9_12 4
#define LABEL_9_8 13
#define LABEL_9_17 15
#define LABEL_9_7 17
#define LABEL_9_9 19
#define LABEL_9_15 21
#define LABEL_9_18 23
#define LABEL_9_19 25
#define LABEL_9_20 27
#define LABEL_9_21 29
#define LABEL_9_24 31
#define LABEL_9_25 33
#define LABEL_9_26 35
#define LABEL_9_23 37
#define LABEL_9_28 39
#define ENVIRONMENT_LABEL_9_3 66
#define DEBUGGING_LABEL_9_2 65
#define OBJECT_9_11 64
#define OBJECT_9_10 63
#define OBJECT_9_9 62
#define OBJECT_9_8 61
#define OBJECT_9_7 60
#define OBJECT_9_6 59
#define OBJECT_9_5 58
#define OBJECT_9_4 57
#define OBJECT_9_3 56
#define OBJECT_9_2 55
#define OBJECT_9_1 54
#define OBJECT_9_0 53
#define EXECUTE_CACHE_9_29 41
#define EXECUTE_CACHE_9_27 43
#define EXECUTE_CACHE_9_22 45
#define EXECUTE_CACHE_9_16 47
#define EXECUTE_CACHE_9_14 49
#define EXECUTE_CACHE_9_10 51
#define FREE_REFERENCES_LABEL_9_0 40
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rlife_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd67;
  machine_word Wrd92;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_9_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_9_6);
      goto label_26;

    case 2:
      current_block = (Rpc - LABEL_9_4);
      goto mark_used_registersB_23;

    case 3:
      current_block = (Rpc - LABEL_9_13);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_9_11);
      goto loop_33;

    case 5:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_9_17);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_9_15);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_9_18);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_9_19);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_9_20);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_9_21);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_9_24);
      goto continuation_17;

    case 15:
      current_block = (Rpc - LABEL_9_25);
      goto label_29;

    case 16:
      current_block = (Rpc - LABEL_9_26);
      goto label_30;

    case 17:
      current_block = (Rpc - LABEL_9_23);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_9_28);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mark_used_registersB_32)
DEFLABEL (mark_used_registersB_23)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd35.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_11])));
  Rhp += 4;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  Wrd33 = Wrd35;
  (Wrd34.Obj) = (Rsp [5]);
  ((Wrd33.pObj) [2]) = (Wrd34.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  ((Wrd33.pObj) [3]) = (Wrd31.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  ((Wrd33.pObj) [4]) = (Wrd28.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd33.pObj) [5]) = (Wrd25.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_43;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_42)
  if ((Wrd5.Obj) == (current_block [OBJECT_9_3]))
    goto label_35;

DEFLABEL (label_34)
  (Wrd15.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd16.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_14]));

DEFLABEL (label_35)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Wrd40.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd40.uLng) == 1))
    goto label_41;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd38.Obj) = ((Wrd39.pObj) [0]);

DEFLABEL (label_40)
  if (! ((Wrd38.Obj) == (current_block [OBJECT_9_1])))
    goto label_34;
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd57.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (* (--Rsp)) = Rvl;
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 26))
    goto label_39;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd18.Lng) < 5L)
    goto label_37;

DEFLABEL (label_36)
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_5]), 2);

DEFLABEL (label_37)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_38)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_9_18);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [4]));
  goto loop_22;

DEFLABEL (label_39)
  (Wrd24.Obj) = (current_block [OBJECT_9_4]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto label_37;

DEFLABEL (label_41)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_26)
  (Wrd38.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_25)
  (Wrd5.Obj) = Rvl;
  goto label_42;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_38;
  Rvl = (current_block [OBJECT_9_6]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (loop_33)
  CLOSURE_HEADER (LABEL_9_11);

DEFLABEL (loop_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_9_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_44;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_14]));

DEFLABEL (label_44)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_9_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_8]), 2);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_9_20);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_45;
  Rvl = (current_block [OBJECT_9_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_21]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_22]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_9_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_5]), 2);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_9_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;

DEFLABEL (label_46)
  Rvl = (current_block [OBJECT_9_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_24]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_53;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd24.Lng))))
    goto label_53;
  (Wrd16.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_52)
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_29]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_9_24);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_46;
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [2]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_51;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd51.Lng))))
    goto label_51;
  (Wrd39.Obj) = ((Wrd49.pObj) [2]);

DEFLABEL (label_50)
  (Wrd66.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (Wrd81.Obj) = (Rsp [1]);
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [2]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 10))
    goto label_49;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd80.Lng))))
    goto label_49;
  ((Wrd78.pObj) [2]) = (Wrd63.Obj);

DEFLABEL (label_48)
  (Wrd67.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd67.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_27]));

DEFLABEL (label_49)
  (Wrd86.Obj) = (Rsp [1]);
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd85.Obj) = ((Wrd87.pObj) [2]);
  (Wrd88.Obj) = (current_block [OBJECT_9_9]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_26]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_11]), 3);

DEFLABEL (label_30)
  goto label_48;

DEFLABEL (label_51)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [2]);
  (Wrd59.Obj) = (current_block [OBJECT_9_9]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_25]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_10]), 2);

DEFLABEL (label_29)
  (Wrd39.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [2]);
  (Wrd32.Obj) = (current_block [OBJECT_9_9]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_28]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_10]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_52;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_7 9
#define LABEL_10_8 11
#define LABEL_10_9 13
#define LABEL_10_10 15
#define LABEL_10_11 17
#define LABEL_10_12 19
#define LABEL_10_13 21
#define ENVIRONMENT_LABEL_10_3 32
#define DEBUGGING_LABEL_10_2 31
#define OBJECT_10_3 30
#define OBJECT_10_2 29
#define OBJECT_10_1 28
#define OBJECT_10_0 27
#define EXECUTE_CACHE_10_14 23
#define FREE_REFERENCE_10_0 26
#define FREE_REFERENCES_LABEL_10_0 22
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rlife_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd67;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd81;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd54;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd61;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd109;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd120;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd95;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd102;
  machine_word Wrd88;
  machine_word Wrd89;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd37;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_10_4);
      goto record_register_reference_7;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_10_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_10_9);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_10_10);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_10_11);
      goto label_12;

    case 8:
      current_block = (Rpc - LABEL_10_12);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_10_13);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_register_reference_19)
DEFLABEL (record_register_reference_7)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_38;
  Wrd6 = Wrd10;

DEFLABEL (label_37)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_36;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_36;
  (Wrd12.Obj) = ((Wrd16.pObj) [4]);

DEFLABEL (label_35)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_34;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_34;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) (Wrd33.Lng)) < ((unsigned long) (Wrd36.Lng))))
    goto label_34;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd30.Obj));
  (Wrd28.pObj) = (& ((Wrd34.pObj) [(Wrd26.Lng)]));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_33)
  (Wrd43.Obj) = (Rsp [0]);
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd45.Obj) = (Rsp [2]);
  if (! ((Wrd45.Obj) == (Wrd43.Obj)))
    goto label_21;

DEFLABEL (label_20)
  (Wrd67.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd67.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_14]));

DEFLABEL (label_21)
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd52.Obj) = ((Wrd49.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_26;
  Wrd48 = Wrd52;

DEFLABEL (label_25)
  Wrd47 = Wrd48;
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd61.uLng) == 10))
    goto label_24;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd60.Lng))))
    goto label_24;
  (Wrd54.Obj) = ((Wrd58.pObj) [4]);

DEFLABEL (label_23)
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd81.uLng) == 10))
    goto label_22;
  (Wrd74.Obj) = (Rsp [1]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 26))
    goto label_22;
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if (! (((unsigned long) (Wrd77.Lng)) < ((unsigned long) (Wrd80.Lng))))
    goto label_22;
  (Wrd70.uLng) = (OBJECT_DATUM (Wrd74.Obj));
  (Wrd72.pObj) = (& ((Wrd78.pObj) [(Wrd70.Lng)]));
  (Wrd73.Obj) = (current_block [OBJECT_10_3]);
  ((Wrd72.pObj) [1]) = (Wrd73.Obj);
  goto label_20;

DEFLABEL (label_22)
  (Wrd83.Obj) = (Rsp [1]);
  (Wrd84.Obj) = (current_block [OBJECT_10_3]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 3);

DEFLABEL (label_14)
  goto label_20;

DEFLABEL (label_24)
  (Wrd63.Obj) = (current_block [OBJECT_10_0]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_13)
  (Wrd54.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_11])), (Wrd49.pObj));

DEFLABEL (label_12)
  (Wrd48.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_27)
  (Wrd90.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd93.Obj) = ((Wrd90.pObj) [0]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if ((Wrd94.uLng) == 50)
    goto label_32;
  Wrd89 = Wrd93;

DEFLABEL (label_31)
  Wrd88 = Wrd89;
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd102.uLng) == 10))
    goto label_30;
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd100.Obj) = ((Wrd99.pObj) [0]);
  (Wrd101.Lng) = (FIXNUM_TO_LONG (Wrd100.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd101.Lng))))
    goto label_30;
  (Wrd95.Obj) = ((Wrd99.pObj) [4]);

DEFLABEL (label_29)
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd120.uLng) == 10))
    goto label_28;
  (Wrd113.Obj) = (Rsp [1]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 26))
    goto label_28;
  (Wrd116.Lng) = (FIXNUM_TO_LONG (Wrd113.Obj));
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd118.Obj));
  if (! (((unsigned long) (Wrd116.Lng)) < ((unsigned long) (Wrd119.Lng))))
    goto label_28;
  (Wrd109.uLng) = (OBJECT_DATUM (Wrd113.Obj));
  (Wrd111.pObj) = (& ((Wrd117.pObj) [(Wrd109.Lng)]));
  (Wrd112.Obj) = (Rsp [2]);
  ((Wrd111.pObj) [1]) = (Wrd112.Obj);
  goto label_20;

DEFLABEL (label_28)
  (Wrd122.Obj) = (Rsp [1]);
  (Wrd123.Obj) = (Rsp [2]);
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 3);

DEFLABEL (label_17)
  goto label_20;

DEFLABEL (label_30)
  (Wrd104.Obj) = (current_block [OBJECT_10_0]);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_16)
  (Wrd95.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_8])), (Wrd90.pObj));

DEFLABEL (label_15)
  (Wrd89.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd21.Obj) = (current_block [OBJECT_10_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_10)
  (Wrd12.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_5])), (Wrd7.pObj));

DEFLABEL (label_9)
  (Wrd6.Obj) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_8 7
#define LABEL_11_10 9
#define LABEL_11_12 11
#define LABEL_11_13 13
#define LABEL_11_6 15
#define LABEL_11_14 17
#define LABEL_11_9 19
#define LABEL_11_11 21
#define ENVIRONMENT_LABEL_11_3 38
#define DEBUGGING_LABEL_11_2 37
#define OBJECT_11_7 36
#define OBJECT_11_6 35
#define OBJECT_11_5 34
#define OBJECT_11_4 33
#define OBJECT_11_3 32
#define OBJECT_11_2 31
#define OBJECT_11_1 30
#define OBJECT_11_0 29
#define EXECUTE_CACHE_11_15 23
#define EXECUTE_CACHE_11_7 25
#define FREE_REFERENCE_11_0 28
#define FREE_REFERENCES_LABEL_11_0 22
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rlife_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd47;
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
      current_block = (Rpc - LABEL_11_4);
      goto instruction_deadP_13;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_11_10);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_11_12);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_11_13);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_11_14);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (instruction_deadP_20)
DEFLABEL (instruction_deadP_13)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_34;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_33)
  if ((Wrd5.Obj) == (current_block [OBJECT_11_1]))
    goto label_21;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (* (--Rsp)) = Rvl;
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd9.uLng) == 1))
    goto label_32;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_31)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_11_6])))
    goto label_22;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_12);
  (Rsp [0]) = Rvl;
  (Wrd25.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd25.uLng) == 26))
    goto label_30;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd27.Lng) < 5L)
    goto label_22;

DEFLABEL (label_29)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_5]), 2);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  Rsp = (& (Rsp [1]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd52.Obj) = ((Wrd49.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_28;
  Wrd48 = Wrd52;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_15]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_11_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_24;

DEFLABEL (label_25)
  Rvl = (current_block [OBJECT_11_7]);

DEFLABEL (label_24)
DEFLABEL (label_26)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_10])), (Wrd49.pObj));

DEFLABEL (label_18)
  (Wrd48.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd37.Obj) = (current_block [OBJECT_11_4]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_22;

DEFLABEL (label_32)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_8 9
#define ENVIRONMENT_LABEL_12_3 19
#define DEBUGGING_LABEL_12_2 18
#define OBJECT_12_4 17
#define OBJECT_12_3 16
#define OBJECT_12_2 15
#define OBJECT_12_1 14
#define OBJECT_12_0 13
#define EXECUTE_CACHE_12_7 11
#define FREE_REFERENCES_LABEL_12_0 10
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rlife_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_12_4);
      goto interesting_registerP_4;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interesting_registerP_9)
DEFLABEL (interesting_registerP_4)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_17;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_16)
  if ((Wrd5.Obj) == (current_block [OBJECT_12_1]))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_12_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_15;
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd7.Lng) < 5L)
    goto label_12;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_12_4]);
  goto label_11;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd15.Obj) = (current_block [OBJECT_12_3]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_12;

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_16;

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
rlife_so_deb28be3375cd170 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1,
	2,
	2,
	1,
	1,
	3,
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

static const struct liarc_code_S arr_decl_rlife_so_deb28be3375cd170 [12] =
  {
    { "rlife_so_code_1", 2, rlife_so_code_1 },
    { "rlife_so_code_2", 28, rlife_so_code_2 },
    { "rlife_so_code_3", 21, rlife_so_code_3 },
    { "rlife_so_code_4", 4, rlife_so_code_4 },
    { "rlife_so_code_5", 16, rlife_so_code_5 },
    { "rlife_so_code_6", 10, rlife_so_code_6 },
    { "rlife_so_code_7", 4, rlife_so_code_7 },
    { "rlife_so_code_8", 6, rlife_so_code_8 },
    { "rlife_so_code_9", 19, rlife_so_code_9 },
    { "rlife_so_code_10", 10, rlife_so_code_10 },
    { "rlife_so_code_11", 10, rlife_so_code_11 },
    { "rlife_so_code_12", 4, rlife_so_code_12 }
  };

int
decl_rlife_so_deb28be3375cd170 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rlife_so_deb28be3375cd170);
  return (0);
}

DECLARE_COMPILED_CODE ("rlife.so", 3, decl_rlife_so_deb28be3375cd170, rlife_so_deb28be3375cd170)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rlife_so_data_deb28be3375cd170 [2422] =
  "\x5b\x1f\xe4\x04\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x24\x28"
  "\x0d\xba\x23\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82\x88\x02"
  "\x02\x02\x1d\x02\xc2\x86\x85\x84\xc3\xbc\x83\x80\xc2\xbd\x82\x0d"
  "\xbe\x25\xb6\x24\x28\x0d\x28\xb2\x28\x0d\x28\x0d\xbf\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xc2\x1c"
  "\x02\xc2\xc2\x02\xb5\x02\x1d\x07\x28\xb2\x28\x0d\xba\x28\x0d\x1c"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x84\x88\x80\xb5\x02\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x80"
  "\xb4\x1d\x0d\x1c\x83\xb5\x02\xb6\x0d\x0d\x24\x28\x0d\x28\x1b\x28"
  "\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86"
  "\x88\xc2\xc1\xb5\x80\xb6\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\xc2\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x1c\x1d\x86\x0d\x1c\xc1\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb4\xb5\x81\x1b\x02\x1d\xc2\x1c\x85\x1b\x86"
  "\x0d\x1c\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb4"
  "\xb5\x83\xb6\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\x1b\x1b\x85\x02\x86\x1b\x1b\x0d\x24\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x85"
  "\x86\x1b\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb3\x2a\x17\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\xb2\x1b\xb7\xb1\x0d\x17\x28\x0d\x26\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x02\x5a\x2f\x55\x73\x65\x72\x73\x2f"
  "\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d"
  "\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63"
  "\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x2f\x72\x74\x6c\x6f\x70\x74\x2f\x72\x6c\x69\x66\x65\x2e\x69"
  "\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0c\x77\x61\x6c\x6b\x2d\x72\x67"
  "\x72\x61\x70\x68\x02\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x02"
  "\x05\x06\x81\x83\x02\x04\x04\x83\x04\x05\x0d\x02\x0b\x0c\x0a\x02"
  "\x08\x10\x6d\x61\x6b\x65\x2d\x62\x69\x74\x2d\x73\x74\x72\x69\x6e"
  "\x67\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x0b\x76\x65"
  "\x63\x74\x6f\x72\x2d\x72\x65\x66\x11\x2a\x63\x75\x72\x72\x65\x6e"
  "\x74\x2d\x72\x67\x72\x61\x70\x68\x2a\x02\x02\x04\x0c\x6d\x61\x6b"
  "\x65\x2d\x76\x65\x63\x74\x6f\x72\x04\x05\x13\x73\x68\x61\x6c\x6c"
  "\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x03\x0d\x77"
  "\x61\x6c\x6b\x2d\x62\x62\x6c\x6f\x63\x6b\x73\x05\x21\x3a\x81\x87"
  "\x02\x20\x38\x81\x85\x02\x1f\x36\x81\x85\x02\x1e\x34\x83\x04\x1d"
  "\x32\x81\x85\x02\x1c\x30\x81\x85\x02\x1b\x2e\x81\x83\x02\x1a\x2c"
  "\x81\x85\x02\x19\x2a\x81\x83\x02\x18\x28\x81\x83\x02\x17\x26\x81"
  "\x83\x02\x16\x24\x81\x87\x02\x15\x22\x81\x87\x02\x14\x20\x81\x85"
  "\x02\x13\x1e\x81\x87\x02\x12\x1c\x81\x87\x02\x11\x1a\x81\x87\x02"
  "\x10\x18\x81\x87\x02\x0f\x16\x81\x87\x02\x0e\x14\x81\x87\x02\x0d"
  "\x12\x81\x87\x02\x0c\x10\x81\x87\x02\x0b\x0e\x81\x87\x02\x0a\x0c"
  "\x81\x87\x02\x09\x0a\x81\x87\x02\x08\x08\x81\x85\x02\x07\x06\x81"
  "\x83\x02\x06\x04\x83\x04\x39\x57\x09\x02\x0f\x62\x69\x74\x2d\x73"
  "\x74\x72\x69\x6e\x67\x2d\x6f\x72\x21\x0a\x0a\x11\x62\x69\x74\x2d"
  "\x73\x74\x72\x69\x6e\x67\x2d\x6d\x6f\x76\x65\x21\x0d\x62\x69\x74"
  "\x2d\x73\x74\x72\x69\x6e\x67\x3d\x3f\x0b\x0c\x02\x04\x03\x18\x70"
  "\x72\x6f\x70\x61\x67\x61\x74\x65\x2d\x62\x6c\x6f\x63\x6b\x26\x64"
  "\x65\x6c\x65\x74\x65\x21\x03\x10\x70\x72\x6f\x70\x61\x67\x61\x74"
  "\x65\x2d\x62\x6c\x6f\x63\x6b\x0b\x04\x17\x66\x6f\x72\x2d\x65\x61"
  "\x63\x68\x2d\x70\x72\x65\x76\x69\x6f\x75\x73\x2d\x6e\x6f\x64\x65"
  "\x05\x36\x2c\x81\x87\x02\x35\x2a\x81\x85\x02\x34\x28\x81\x85\x02"
  "\x33\x26\x81\x85\x02\x32\x24\x81\x85\x02\x31\x22\x81\x83\x02\x30"
  "\x20\x81\x89\x02\x2f\x1e\x81\x87\x02\x2e\x1c\x81\x85\x02\x2d\x1a"
  "\x81\x87\x02\x2c\x18\x81\x85\x02\x2b\x16\x83\x04\x2a\x14\x81\x89"
  "\x02\x29\x12\x81\x87\x02\x28\x10\x81\x89\x02\x27\x0e\x81\x87\x02"
  "\x26\x0c\x81\x85\x02\x25\x0a\x81\x85\x02\x24\x08\x81\x87\x02\x23"
  "\x06\x81\x87\x02\x22\x04\x83\x04\x2b\x40\x0c\x02\x0a\x04\x11\x70"
  "\x72\x6f\x70\x61\x67\x61\x74\x69\x6f\x6e\x2d\x6c\x6f\x6f\x70\x0d"
  "\x08\x17\x75\x70\x64\x61\x74\x65\x2d\x6c\x69\x76\x65\x2d\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x73\x21\x0e\x03\x3a\x0a\x81\x8d\x02\x39"
  "\x08\x81\x8b\x02\x38\x06\x81\x89\x02\x37\x04\x83\x04\x09\x14\x0f"
  "\x02\x02\x0a\x6e\x6f\x6e\x2d\x6c\x6f\x63\x61\x6c\x10\x0a\x17\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x63\x72\x6f\x73\x73\x65\x73\x2d"
  "\x63\x61\x6c\x6c\x21\x20\x69\x6e\x63\x72\x65\x6d\x65\x6e\x74\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6c\x69\x76\x65\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x21\x04\x04\x17\x66\x6f\x72\x2d\x65\x61\x63\x68"
  "\x2d\x72\x65\x67\x73\x65\x74\x2d\x6d\x65\x6d\x62\x65\x72\x04\x0d"
  "\x03\x1a\x62\x62\x6c\x6f\x63\x6b\x2d\x70\x65\x72\x66\x6f\x72\x6d"
  "\x2d\x64\x65\x6c\x65\x74\x69\x6f\x6e\x73\x21\x03\x10\x72\x74\x6c"
  "\x3a\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3f\x04\x12\x69\x6e"
  "\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x2d\x64\x65\x61\x64\x3f\x11"
  "\x08\x0e\x07\x4a\x22\x81\x8d\x02\x49\x20\x81\x8d\x02\x48\x1e\x81"
  "\x8d\x02\x47\x1c\x81\x8f\x02\x46\x1a\x81\x8d\x02\x45\x18\x81\x8d"
  "\x02\x44\x16\x81\x8b\x02\x43\x14\x81\x89\x02\x42\x12\x81\x89\x02"
  "\x41\x10\x81\x83\x02\x40\x0e\x81\x85\x02\x3f\x0c\x81\x85\x02\x3e"
  "\x0a\x83\x04\x3d\x08\x81\x83\x02\x3c\x06\x81\x87\x02\x3b\x04\x83"
  "\x04\x21\x3c\x12\x02\x11\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67"
  "\x2d\x66\x69\x6c\x6c\x21\x14\x62\x69\x74\x2d\x73\x74\x72\x69\x6e"
  "\x67\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x02\x04\x15\x62\x62\x6c"
  "\x6f\x63\x6b\x2d\x77\x61\x6c\x6b\x2d\x62\x61\x63\x6b\x77\x61\x72"
  "\x64\x02\x54\x16\x81\x85\x02\x53\x14\x81\x85\x02\x52\x12\x81\x85"
  "\x02\x51\x10\x81\x87\x02\x50\x0e\x81\x89\x02\x4f\x0c\x81\x89\x02"
  "\x4e\x0a\x81\x85\x02\x4d\x08\x81\x87\x02\x4c\x06\x81\x87\x02\x4b"
  "\x04\x84\x06\x15\x21\x13\x02\x08\x0a\x11\x62\x69\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x2d\x61\x6e\x64\x63\x21\x06\x14\x6d\x61\x72\x6b"
  "\x2d\x73\x65\x74\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x73\x21\x0a"
  "\x07\x15\x6d\x61\x72\x6b\x2d\x75\x73\x65\x64\x2d\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x73\x21\x14\x03\x58\x0a\x81\x8d\x02\x57\x08\x81"
  "\x8d\x02\x56\x06\x81\x8d\x02\x55\x04\x88\x0e\x09\x13\x15\x02\x09"
  "\x10\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x73\x65\x74\x21"
  "\x16\x02\x07\x61\x73\x73\x69\x67\x6e\x17\x04\x63\x61\x72\x18\x04"
  "\x10\x67\x65\x6e\x65\x72\x61\x6c\x2d\x63\x61\x72\x2d\x63\x64\x72"
  "\x19\x03\x16\x69\x6e\x74\x65\x72\x65\x73\x74\x69\x6e\x67\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x3f\x1a\x04\x1a\x72\x65\x63\x6f\x72"
  "\x64\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x72\x65\x66\x65\x72"
  "\x65\x6e\x63\x65\x1b\x04\x5e\x0e\x81\x8b\x02\x5d\x0c\x81\x8b\x02"
  "\x5c\x0a\x81\x8b\x02\x5b\x08\x81\x89\x02\x5a\x06\x81\x89\x02\x59"
  "\x04\x86\x0a\x0d\x1c\x1c\x02\x0a\x16\x0d\x02\x0f\x62\x69\x74\x2d"
  "\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x16\x17\x09\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x1d\x18\x04\x19\x04\x1b\x72\x74\x6c\x3a\x66"
  "\x6f\x72\x2d\x65\x61\x63\x68\x2d\x73\x75\x62\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x03\x1a\x04\x1b\x03\x1d\x69\x6e\x63\x72\x65"
  "\x6d\x65\x6e\x74\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6e\x2d"
  "\x64\x65\x61\x74\x68\x73\x21\x04\x05\x6d\x65\x6d\x71\x07\x71\x28"
  "\x81\x89\x02\x70\x26\x81\x87\x02\x6f\x24\x81\x87\x02\x6e\x22\x81"
  "\x87\x02\x6d\x20\x81\x87\x02\x6c\x1e\x81\x87\x02\x6b\x1c\x81\x87"
  "\x02\x6a\x1a\x81\x85\x02\x69\x18\x81\x8d\x02\x68\x16\x81\x85\x02"
  "\x67\x14\x81\x93\x02\x66\x12\x81\x8d\x02\x65\x10\x81\x83\x02\x64"
  "\x0e\x81\x8f\x02\x63\x0c\x81\x85\x02\x62\x0a\x81\x8d\x02\x61\x08"
  "\x87\x0c\x60\x06\x81\x8d\x02\x5f\x04\x81\x8d\x02\x27\x43\x1e\x02"
  "\x0b\x10\x02\x03\x1b\x69\x6e\x63\x72\x65\x6d\x65\x6e\x74\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x6e\x2d\x72\x65\x66\x73\x21\x02"
  "\x7b\x16\x81\x87\x02\x7a\x14\x81\x87\x02\x79\x12\x81\x87\x02\x78"
  "\x10\x81\x87\x02\x77\x0e\x81\x87\x02\x76\x0c\x81\x87\x02\x75\x0a"
  "\x81\x85\x02\x74\x08\x81\x85\x02\x73\x06\x81\x85\x02\x72\x04\x84"
  "\x06\x15\x21\x10\x02\x0c\x1d\x16\x0d\x17\x18\x19\x72\x74\x6c\x3a"
  "\x76\x6f\x6c\x61\x74\x69\x6c\x65\x2d\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x3f\x02\x04\x19\x04\x19\x72\x74\x6c\x3a\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x2d\x63\x6f\x6e\x74\x61\x69\x6e\x73"
  "\x3f\x03\x85\x01\x16\x81\x89\x02\x84\x01\x14\x81\x85\x02\x83\x01"
  "\x12\x81\x87\x02\x82\x01\x10\x81\x85\x02\x81\x01\x0e\x81\x87\x02"
  "\x80\x01\x0c\x81\x87\x02\x7f\x0a\x81\x87\x02\x7e\x08\x81\x87\x02"
  "\x7d\x06\x81\x85\x02\x7c\x04\x84\x06\x15\x27\x17\x02\x0d\x1d\x18"
  "\x04\x19\x02\x89\x01\x0a\x81\x83\x02\x88\x01\x08\x81\x83\x02\x87"
  "\x01\x06\x81\x83\x02\x86\x01\x04\x83\x04\x09\x14\x1d\x0d\x19\x19"
  "\x1d\x04\x17\x04\x10\x04\x1e\x08\x1c\x04\x15\x04\x13\x04\x12\x04"
  "\x0f\x04\x0c\x04\x09\x04\x04\x0d\x1a\x11\x1b\x14\x0a\x0e\x0d\x0b"
  "\x12\x6c\x69\x66\x65\x74\x69\x6d\x65\x2d\x61\x6e\x61\x6c\x79\x73"
  "\x69\x73\x0d\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74"
  "\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01"
  "\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
rlife_so_data_deb28be3375cd170 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rlife_so_data_deb28be3375cd170 [0]))), (sizeof (prog_rlife_so_data_deb28be3375cd170)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("rlife.so", rlife_so_data_deb28be3375cd170)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rlife.so", "06c6bc415b2187b8")
