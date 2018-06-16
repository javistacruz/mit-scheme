/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:15-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_9 11
#define LABEL_1_11 13
#define LABEL_1_14 15
#define LABEL_1_12 17
#define LABEL_1_15 19
#define LABEL_1_16 21
#define LABEL_1_17 23
#define ENVIRONMENT_LABEL_1_3 45
#define DEBUGGING_LABEL_1_2 44
#define OBJECT_1_10 43
#define OBJECT_1_9 42
#define OBJECT_1_8 41
#define OBJECT_1_7 40
#define OBJECT_1_6 39
#define OBJECT_1_5 38
#define OBJECT_1_4 37
#define OBJECT_1_3 36
#define OBJECT_1_2 35
#define OBJECT_1_1 34
#define OBJECT_1_0 33
#define EXECUTE_CACHE_1_13 25
#define EXECUTE_CACHE_1_10 27
#define EXECUTE_CACHE_1_6 29
#define FREE_REFERENCE_1_0 32
#define FREE_REFERENCES_LABEL_1_0 24
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
contan_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd13;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd33;
  machine_word Wrd32;
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
      current_block = (Rpc - LABEL_1_4);
      goto continuation_analysis_12;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_1_11);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_1_15);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_1_16);
      goto label_17;

    case 10:
      current_block = (Rpc - LABEL_1_17);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_analysis_21)
DEFLABEL (continuation_analysis_12)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (lambda_22)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_40;
  Wrd5 = Wrd9;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_38;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_38;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_37)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_23;
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (Wrd5.Obj) = Rvl;
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_36;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd17.Lng))))
    goto label_36;
  ((Wrd15.pObj) [17]) = Rvl;

DEFLABEL (label_35)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (* (--Rsp)) = Rvl;
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_34;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd55.Lng))))
    goto label_34;
  ((Wrd53.pObj) [19]) = Rvl;

DEFLABEL (label_33)
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  if ((Wrd9.Obj) == (current_block [OBJECT_1_6]))
    goto label_28;
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_32;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_31)
  if ((Wrd11.Obj) == (current_block [OBJECT_1_6]))
    goto label_29;

DEFLABEL (label_28)
  (Wrd22.Obj) = (current_block [OBJECT_1_9]);

DEFLABEL (label_27)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_26)
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_1_10]);
  (Rsp [1]) = (Wrd23.Obj);
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 10)
    goto label_25;

DEFLABEL (label_24)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 3);

DEFLABEL (label_25)
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd34.Lng))))
    goto label_24;
  ((Wrd32.pObj) [20]) = (Wrd22.Obj);
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_30;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd22.Obj) = ((Wrd39.pObj) [0]);
  goto label_27;

DEFLABEL (label_30)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_8]), 1);

DEFLABEL (label_18)
  (Wrd22.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_32)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_7]), 1);

DEFLABEL (label_17)
  (Wrd11.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.Obj) = (current_block [OBJECT_1_5]);
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 3);

DEFLABEL (label_19)
  goto label_33;

DEFLABEL (label_36)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_1_3]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 3);

DEFLABEL (label_16)
  goto label_35;

DEFLABEL (label_38)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_1_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_15)
  (Wrd11.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd6.pObj));

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_39;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_14);
  (Wrd22.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define LABEL_2_8 9
#define LABEL_2_9 11
#define LABEL_2_10 13
#define LABEL_2_11 15
#define LABEL_2_15 17
#define LABEL_2_16 19
#define LABEL_2_12 21
#define TAG_2_13 9
#define LABEL_2_19 23
#define LABEL_2_20 25
#define LABEL_2_21 27
#define LABEL_2_17 29
#define LABEL_2_26 31
#define LABEL_2_24 33
#define TAG_2_25 15
#define LABEL_2_22 35
#define TAG_2_23 16
#define LABEL_2_28 37
#define LABEL_2_30 39
#define LABEL_2_33 41
#define LABEL_2_34 43
#define LABEL_2_36 45
#define LABEL_2_31 47
#define LABEL_2_35 49
#define LABEL_2_38 51
#define ENVIRONMENT_LABEL_2_3 82
#define DEBUGGING_LABEL_2_2 81
#define OBJECT_2_11 80
#define OBJECT_2_10 79
#define OBJECT_2_9 78
#define OBJECT_2_8 77
#define OBJECT_2_7 76
#define OBJECT_2_6 75
#define OBJECT_2_5 74
#define OBJECT_2_4 73
#define OBJECT_2_3 72
#define OBJECT_2_2 71
#define OBJECT_2_1 70
#define OBJECT_2_0 69
#define EXECUTE_CACHE_2_39 53
#define EXECUTE_CACHE_2_37 55
#define EXECUTE_CACHE_2_32 57
#define EXECUTE_CACHE_2_29 59
#define EXECUTE_CACHE_2_27 61
#define EXECUTE_CACHE_2_18 63
#define EXECUTE_CACHE_2_14 65
#define EXECUTE_CACHE_2_6 67
#define FREE_REFERENCES_LABEL_2_0 52
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
contan_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd50;
  machine_word Wrd40;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd64;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd5;
  machine_word Wrd42;
  machine_word Wrd27;
  machine_word Wrd37;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_2_4);
      goto compute_block_stack_link_32;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_34;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_35;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto label_36;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto label_37;

    case 6:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_24;

    case 7:
      current_block = (Rpc - LABEL_2_15);
      goto label_38;

    case 8:
      current_block = (Rpc - LABEL_2_16);
      goto label_39;

    case 9:
      current_block = (Rpc - LABEL_2_12);
      goto lambda_49;

    case 10:
      current_block = (Rpc - LABEL_2_19);
      goto label_40;

    case 11:
      current_block = (Rpc - LABEL_2_20);
      goto label_41;

    case 12:
      current_block = (Rpc - LABEL_2_21);
      goto label_42;

    case 13:
      current_block = (Rpc - LABEL_2_17);
      goto continuation_27;

    case 14:
      current_block = (Rpc - LABEL_2_26);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_2_24);
      goto loop_19;

    case 16:
      current_block = (Rpc - LABEL_2_22);
      goto next_50;

    case 17:
      current_block = (Rpc - LABEL_2_28);
      goto continuation_28;

    case 18:
      current_block = (Rpc - LABEL_2_30);
      goto continuation_9;

    case 19:
      current_block = (Rpc - LABEL_2_33);
      goto label_43;

    case 20:
      current_block = (Rpc - LABEL_2_34);
      goto label_44;

    case 21:
      current_block = (Rpc - LABEL_2_36);
      goto label_45;

    case 22:
      current_block = (Rpc - LABEL_2_31);
      goto continuation_20;

    case 23:
      current_block = (Rpc - LABEL_2_35);
      goto continuation_17;

    case 24:
      current_block = (Rpc - LABEL_2_38);
      goto label_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_block_stack_link_48)
DEFLABEL (compute_block_stack_link_32)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_52;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_70;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_70;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_69)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_68;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd31.Lng))))
    goto label_68;
  (Wrd23.Obj) = ((Wrd29.pObj) [8]);

DEFLABEL (label_67)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_66;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd45.Lng))))
    goto label_66;
  (Wrd39.Obj) = ((Wrd43.pObj) [6]);

DEFLABEL (label_65)
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_64;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_63)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd63.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_12])));
  Rhp += 2;
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd63.pObj)));
  Wrd66 = Wrd63;
  (Wrd67.Obj) = (Rsp [2]);
  ((Wrd66.pObj) [2]) = (Wrd67.Obj);
  (Wrd65.Obj) = (Rsp [1]);
  ((Wrd66.pObj) [3]) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_2_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_62;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_62;
  (Wrd11.Obj) = ((Wrd15.pObj) [10]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_61)
  (Wrd25.Obj) = (Rsp [0]);
  if (! ((Wrd25.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_54;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_60;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd35.Lng))))
    goto label_60;
  (Wrd27.Obj) = ((Wrd33.pObj) [4]);

DEFLABEL (label_59)
  (Rsp [0]) = (Wrd27.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_18]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_2_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_55;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_29]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_2_28);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_56;

DEFLABEL (label_57)
  Rvl = (Rsp [0]);

DEFLABEL (label_56)
DEFLABEL (label_58)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.Obj) = (current_block [OBJECT_2_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_39)
  (Wrd27.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_2_5]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd48.Obj) = (current_block [OBJECT_2_3]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_36)
  (Wrd39.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_2_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_35)
  (Wrd23.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_2_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_2_12);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_76;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_76;
  (Wrd5.Obj) = ((Wrd15.pObj) [8]);

DEFLABEL (label_75)
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_74;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd35.Lng))))
    goto label_74;
  (Wrd29.Obj) = ((Wrd33.pObj) [6]);

DEFLABEL (label_73)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_72;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_71)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd64.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_22])));
  Rhp += 1;
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd64.pObj)));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd62.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_24])));
  Rhp += 2;
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd62.pObj)));
  (* (--Rsp)) = (Wrd63.Obj);
  Wrd57 = Wrd62;
  ((Wrd57.pObj) [2]) = (Wrd65.Obj);
  (Wrd55.Obj) = (Rsp [2]);
  ((Wrd57.pObj) [3]) = (Wrd55.Obj);
  ((Wrd64.pObj) [2]) = (Wrd63.Obj);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_26);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_19;

DEFLABEL (label_72)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 1);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd38.Obj) = (current_block [OBJECT_2_3]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_41)
  (Wrd29.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_2_2]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_40)
  (Wrd5.Obj) = Rvl;
  goto label_75;

DEFLABEL (loop_51)
DEFLABEL (loop_19)
  INTERRUPT_CHECK (26, LABEL_2_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_2_30);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_87;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd13.Lng))))
    goto label_87;
  (Wrd7.Obj) = ((Wrd11.pObj) [12]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_86)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_78;
  if ((Wrd21.Obj) == (current_block [OBJECT_2_7]))
    goto label_78;
  Rsp = (& (Rsp [1]));

DEFLABEL (label_77)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_78)
  Rsp = (& (Rsp [1]));
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_85;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd37.Lng))))
    goto label_85;
  (Wrd29.Obj) = ((Wrd35.pObj) [8]);

DEFLABEL (label_84)
  if (! ((Wrd29.Obj) == (current_block [OBJECT_2_8])))
    goto label_77;
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_35]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 10))
    goto label_83;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd59.Lng))))
    goto label_83;
  (Wrd53.Obj) = ((Wrd57.pObj) [7]);
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_82)
  (Wrd67.Obj) = (Rsp [2]);
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [3]);
  (* (--Rsp)) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_37]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_2_35);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_79;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_79)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_81;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_81;
  (Wrd10.Obj) = ((Wrd16.pObj) [5]);

DEFLABEL (label_80)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd26.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_39]));

DEFLABEL (label_81)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_2_11]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_38]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_46)
  (Wrd10.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.Obj) = (current_block [OBJECT_2_9]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_36]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_2_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_34]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_44)
  (Wrd29.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_2_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_33]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (next_50)
  CLOSURE_HEADER (LABEL_2_22);

DEFLABEL (next_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_32]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_2_31);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_88;
  Rvl = (current_block [OBJECT_2_10]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_88)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_8 9
#define LABEL_3_9 11
#define ENVIRONMENT_LABEL_3_3 25
#define DEBUGGING_LABEL_3_2 24
#define OBJECT_3_4 23
#define OBJECT_3_3 22
#define OBJECT_3_2 21
#define OBJECT_3_1 20
#define OBJECT_3_0 19
#define EXECUTE_CACHE_3_10 13
#define EXECUTE_CACHE_3_6 15
#define FREE_REFERENCE_3_0 18
#define FREE_REFERENCES_LABEL_3_0 12
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
contan_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_3_4);
      goto setup_block_static_linksB_4;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_3;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (setup_block_static_linksB_9)
DEFLABEL (setup_block_static_linksB_4)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (lambda_10)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_3_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_17;
  Wrd5 = Wrd9;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_15;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_15;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_14)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_11;
  Rvl = (current_block [OBJECT_3_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd30.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (Rsp [2]) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 3);

DEFLABEL (label_13)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd16.Lng))))
    goto label_12;
  ((Wrd14.pObj) [18]) = Rvl;
  Rvl = (current_block [OBJECT_3_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_3_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_7)
  (Wrd11.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_7])), (Wrd6.pObj));

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define LABEL_4_8 11
#define LABEL_4_9 13
#define ENVIRONMENT_LABEL_4_3 27
#define DEBUGGING_LABEL_4_2 26
#define OBJECT_4_4 25
#define OBJECT_4_3 24
#define OBJECT_4_2 23
#define OBJECT_4_1 22
#define OBJECT_4_0 21
#define EXECUTE_CACHE_4_11 15
#define EXECUTE_CACHE_4_10 17
#define FREE_REFERENCE_4_0 20
#define FREE_REFERENCES_LABEL_4_0 14
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
contan_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd52;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd65;
  machine_word Wrd64;
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
      current_block = (Rpc - LABEL_4_4);
      goto compute_block_static_linkP_6;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_block_static_linkP_13)
DEFLABEL (compute_block_static_linkP_6)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_26;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_25)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_24;
  Wrd23 = Wrd27;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_22;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd37.Lng))))
    goto label_22;
  (Wrd29.Obj) = ((Wrd35.pObj) [3]);

DEFLABEL (label_21)
  (Wrd45.Obj) = (* (Rsp++));
  if ((Wrd29.Obj) == (Wrd45.Obj))
    goto label_15;
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_4_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 10))
    goto label_20;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd63.Lng))))
    goto label_20;
  (Wrd52.Obj) = ((Wrd61.pObj) [17]);
  if ((Wrd52.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;

DEFLABEL (label_18)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_16;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_4_4]);

DEFLABEL (label_16)
DEFLABEL (label_19)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd66.Obj) = (Rsp [1]);
  (Wrd67.Obj) = (current_block [OBJECT_4_3]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

DEFLABEL (label_22)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_4_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_10)
  (Wrd29.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_6])), (Wrd24.pObj));

DEFLABEL (label_9)
  (Wrd23.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_4_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_7 5
#define LABEL_5_5 7
#define LABEL_5_6 9
#define LABEL_5_9 11
#define TAG_5_10 4
#define LABEL_5_16 13
#define LABEL_5_11 15
#define LABEL_5_18 17
#define LABEL_5_13 19
#define LABEL_5_21 21
#define LABEL_5_22 23
#define LABEL_5_23 25
#define LABEL_5_24 27
#define LABEL_5_14 29
#define TAG_5_15 13
#define LABEL_5_25 31
#define LABEL_5_26 33
#define LABEL_5_28 35
#define LABEL_5_19 37
#define LABEL_5_30 39
#define ENVIRONMENT_LABEL_5_3 68
#define DEBUGGING_LABEL_5_2 67
#define OBJECT_5_11 66
#define OBJECT_5_10 65
#define OBJECT_5_9 64
#define OBJECT_5_8 63
#define OBJECT_5_7 62
#define OBJECT_5_6 61
#define OBJECT_5_5 60
#define OBJECT_5_4 59
#define OBJECT_5_3 58
#define OBJECT_5_2 57
#define OBJECT_5_1 56
#define OBJECT_5_0 55
#define EXECUTE_CACHE_5_31 41
#define EXECUTE_CACHE_5_29 43
#define EXECUTE_CACHE_5_27 45
#define EXECUTE_CACHE_5_20 47
#define EXECUTE_CACHE_5_17 49
#define EXECUTE_CACHE_5_12 51
#define EXECUTE_CACHE_5_8 53
#define FREE_REFERENCES_LABEL_5_0 40
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
contan_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd46;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd14;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd81;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd88;
  machine_word Wrd79;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd15;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
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
      goto block_no_free_referencesP_24;

    case 1:
      current_block = (Rpc - LABEL_5_7);
      goto label_26;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_5_6);
      goto lambda_7;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto loop_36;

    case 5:
      current_block = (Rpc - LABEL_5_16);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_5_18);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_20;

    case 9:
      current_block = (Rpc - LABEL_5_21);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_5_22);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_5_23);
      goto label_33;

    case 12:
      current_block = (Rpc - LABEL_5_24);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_5_14);
      goto lambda_38;

    case 14:
      current_block = (Rpc - LABEL_5_25);
      goto label_30;

    case 15:
      current_block = (Rpc - LABEL_5_26);
      goto label_32;

    case 16:
      current_block = (Rpc - LABEL_5_28);
      goto label_31;

    case 17:
      current_block = (Rpc - LABEL_5_19);
      goto continuation_3;

    case 18:
      current_block = (Rpc - LABEL_5_30);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_no_free_referencesP_35)
DEFLABEL (block_no_free_referencesP_24)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_41;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd18.Lng))))
    goto label_41;
  (Wrd12.Obj) = ((Wrd16.pObj) [10]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_9])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  Wrd10 = Wrd12;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd13.Obj);
  goto loop_22;

DEFLABEL (label_39)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_5_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (lambda_37)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_5_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_48;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd17.Lng))))
    goto label_48;
  (Wrd9.Obj) = ((Wrd15.pObj) [15]);

DEFLABEL (label_47)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_20]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_43;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_30]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_31]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_30);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_44;

DEFLABEL (label_45)
  Rvl = (current_block [OBJECT_5_11]);

DEFLABEL (label_44)
DEFLABEL (label_46)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_5_3]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_28)
  (Wrd9.Obj) = Rvl;
  goto label_47;

DEFLABEL (loop_36)
  CLOSURE_HEADER (LABEL_5_9);

DEFLABEL (loop_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_14])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_53;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd22.Lng))))
    goto label_53;
  (Wrd16.Obj) = ((Wrd20.pObj) [13]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_52)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_17]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_5_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_51;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_51;
  (Wrd10.Obj) = ((Wrd16.pObj) [5]);

DEFLABEL (label_50)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd26.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (label_51)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_5_4]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_29)
  (Wrd10.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.Obj) = (current_block [OBJECT_5_2]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_5_14);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_66;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_66;
  (Wrd8.Obj) = ((Wrd14.pObj) [8]);

DEFLABEL (label_65)
  if ((Wrd8.Obj) == (current_block [OBJECT_5_7]))
    goto label_60;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_59;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd36.Lng))))
    goto label_59;
  (Wrd30.Obj) = ((Wrd34.pObj) [9]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_58)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_29]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_5_22);
  (Wrd79.Obj) = Rvl;
  (Wrd88.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd88.uLng) == 10))
    goto label_57;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd87.Lng))))
    goto label_57;
  (Wrd81.Obj) = ((Wrd85.pObj) [20]);

DEFLABEL (label_56)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd81.Obj);

DEFLABEL (label_55)
  (Wrd68.Obj) = (Rsp [0]);
  if ((Wrd68.Obj) == ((SCHEME_OBJECT) 0))
    goto label_54;
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd70.Obj) = ((Wrd72.pObj) [2]);
  (Rsp [1]) = (Wrd70.Obj);
  (Rsp [2]) = (Wrd68.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_27]));

DEFLABEL (label_54)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd90.Obj) = (current_block [OBJECT_5_5]);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_23]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_33)
  (Wrd81.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd40.Obj) = (current_block [OBJECT_5_10]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_28]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (label_60)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_64;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd52.Lng))))
    goto label_64;
  (Wrd46.Obj) = ((Wrd50.pObj) [17]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_63)
  (Wrd60.Obj) = (Rsp [0]);
  if ((Wrd60.Obj) == ((SCHEME_OBJECT) 0))
    goto label_62;
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd67.uLng) == 1)
    goto label_61;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_9]), 1);

DEFLABEL (label_61)
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd63.Obj) = ((Wrd65.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd63.Obj);
  goto label_55;

DEFLABEL (label_62)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_55;

DEFLABEL (label_64)
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd56.Obj) = (current_block [OBJECT_5_8]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_26]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_5_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_25]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_30)
  (Wrd8.Obj) = Rvl;
  goto label_65;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_5_24);
  (* (--Rsp)) = Rvl;
  goto label_55;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_7 7
#define LABEL_6_8 9
#define LABEL_6_13 11
#define LABEL_6_14 13
#define LABEL_6_15 15
#define LABEL_6_10 17
#define TAG_6_11 7
#define LABEL_6_16 19
#define TAG_6_17 8
#define LABEL_6_24 21
#define LABEL_6_25 23
#define LABEL_6_26 25
#define LABEL_6_20 27
#define TAG_6_21 12
#define LABEL_6_22 29
#define TAG_6_23 13
#define LABEL_6_27 31
#define LABEL_6_32 33
#define LABEL_6_29 35
#define LABEL_6_33 37
#define LABEL_6_35 39
#define LABEL_6_31 41
#define LABEL_6_34 43
#define LABEL_6_38 45
#define LABEL_6_40 47
#define ENVIRONMENT_LABEL_6_3 83
#define DEBUGGING_LABEL_6_2 82
#define OBJECT_6_8 81
#define OBJECT_6_7 80
#define OBJECT_6_6 79
#define OBJECT_6_5 78
#define OBJECT_6_4 77
#define OBJECT_6_3 76
#define OBJECT_6_2 75
#define OBJECT_6_1 74
#define OBJECT_6_0 73
#define EXECUTE_CACHE_6_42 49
#define EXECUTE_CACHE_6_41 51
#define EXECUTE_CACHE_6_39 53
#define EXECUTE_CACHE_6_37 55
#define EXECUTE_CACHE_6_36 57
#define EXECUTE_CACHE_6_30 59
#define EXECUTE_CACHE_6_28 61
#define EXECUTE_CACHE_6_19 63
#define EXECUTE_CACHE_6_18 65
#define EXECUTE_CACHE_6_12 67
#define EXECUTE_CACHE_6_9 69
#define EXECUTE_CACHE_6_6 71
#define FREE_REFERENCES_LABEL_6_0 48
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
contan_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd18;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd70;
  machine_word Wrd77;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd19;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_6_4);
      goto compute_block_popping_limits_29;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_6_13);
      goto label_31;

    case 5:
      current_block = (Rpc - LABEL_6_14);
      goto label_32;

    case 6:
      current_block = (Rpc - LABEL_6_15);
      goto label_33;

    case 7:
      current_block = (Rpc - LABEL_6_10);
      goto lambda_41;

    case 8:
      current_block = (Rpc - LABEL_6_16);
      goto lambda_42;

    case 9:
      current_block = (Rpc - LABEL_6_24);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_6_25);
      goto label_35;

    case 11:
      current_block = (Rpc - LABEL_6_26);
      goto label_36;

    case 12:
      current_block = (Rpc - LABEL_6_20);
      goto next_43;

    case 13:
      current_block = (Rpc - LABEL_6_22);
      goto loop_20;

    case 14:
      current_block = (Rpc - LABEL_6_27);
      goto continuation_21;

    case 15:
      current_block = (Rpc - LABEL_6_32);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_6_29);
      goto continuation_11;

    case 17:
      current_block = (Rpc - LABEL_6_33);
      goto label_37;

    case 18:
      current_block = (Rpc - LABEL_6_35);
      goto label_38;

    case 19:
      current_block = (Rpc - LABEL_6_31);
      goto continuation_23;

    case 20:
      current_block = (Rpc - LABEL_6_34);
      goto continuation_19;

    case 21:
      current_block = (Rpc - LABEL_6_38);
      goto continuation_24;

    case 22:
      current_block = (Rpc - LABEL_6_40);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_block_popping_limits_40)
DEFLABEL (compute_block_popping_limits_29)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_50;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_50;
  (Wrd5.Obj) = ((Wrd11.pObj) [8]);

DEFLABEL (label_49)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_48;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd27.Lng))))
    goto label_48;
  (Wrd21.Obj) = ((Wrd25.pObj) [6]);

DEFLABEL (label_47)
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_46;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_45)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd43.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_16])));
  Rhp += 4;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd43.pObj)));
  Wrd50 = Wrd43;
  (Wrd51.Obj) = (Rsp [4]);
  ((Wrd50.pObj) [2]) = (Wrd51.Obj);
  (Wrd49.Obj) = (Rsp [3]);
  ((Wrd50.pObj) [3]) = (Wrd49.Obj);
  (Wrd47.Obj) = (Rsp [1]);
  ((Wrd50.pObj) [4]) = (Wrd47.Obj);
  (Wrd45.Obj) = (Rsp [0]);
  ((Wrd50.pObj) [5]) = (Wrd45.Obj);
  (Rsp [1]) = (Wrd42.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (label_46)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd30.Obj) = (current_block [OBJECT_6_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_32)
  (Wrd21.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_6_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_31)
  (Wrd5.Obj) = Rvl;
  goto label_49;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_10])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_6_10);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  if ((Wrd5.Obj) == (Wrd10.Obj))
    goto label_51;
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_19]));

DEFLABEL (label_51)
  Rvl = (Wrd10.Obj);

DEFLABEL (label_52)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  Rvl = ((Wrd20.pObj) [3]);
  goto label_52;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_6_16);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd83.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_20])));
  Rhp += 4;
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd83.pObj)));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd81.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_22])));
  Rhp += 3;
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd81.pObj)));
  (* (--Rsp)) = (Wrd82.Obj);
  Wrd59 = Wrd81;
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [3]);
  ((Wrd59.pObj) [2]) = (Wrd62.Obj);
  (Wrd57.Obj) = ((Wrd61.pObj) [4]);
  ((Wrd59.pObj) [3]) = (Wrd57.Obj);
  ((Wrd59.pObj) [4]) = (Wrd84.Obj);
  Wrd77 = Wrd83;
  ((Wrd77.pObj) [2]) = (Wrd62.Obj);
  ((Wrd77.pObj) [3]) = (Wrd57.Obj);
  (Wrd70.Obj) = ((Wrd61.pObj) [5]);
  ((Wrd77.pObj) [4]) = (Wrd70.Obj);
  ((Wrd77.pObj) [5]) = (Wrd82.Obj);
  (Wrd20.Obj) = ((Wrd61.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_59;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_59;
  (Wrd5.Obj) = ((Wrd15.pObj) [8]);

DEFLABEL (label_58)
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_57;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd35.Lng))))
    goto label_57;
  (Wrd29.Obj) = ((Wrd33.pObj) [6]);

DEFLABEL (label_56)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_55;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd42.Obj) = ((Wrd43.pObj) [0]);

DEFLABEL (label_54)
  (Rsp [2]) = (Wrd42.Obj);
  Rsp = (& (Rsp [1]));
  goto next_25;

DEFLABEL (label_55)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_26]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_36)
  (Wrd42.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd38.Obj) = (current_block [OBJECT_6_2]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_25]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_35)
  (Wrd29.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_6_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_24]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_34)
  (Wrd5.Obj) = Rvl;
  goto label_58;

DEFLABEL (next_43)
  CLOSURE_HEADER (LABEL_6_20);

DEFLABEL (next_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_28]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_6_27);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  Rvl = (current_block [OBJECT_6_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  if ((Wrd9.Obj) == (Wrd12.Obj))
    goto label_61;
  (Wrd13.Obj) = ((Wrd11.pObj) [5]);
  (Rsp [0]) = (Wrd13.Obj);
  goto loop_20;

DEFLABEL (label_61)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_31]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_30]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_6_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_39]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_6_38);
  (Rsp [1]) = Rvl;
  (Rsp [0]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_41]));

DEFLABEL (loop_44)
DEFLABEL (loop_20)
  INTERRUPT_CHECK (26, LABEL_6_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_30]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_6_29);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_67;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd13.Lng))))
    goto label_67;
  (Wrd7.Obj) = ((Wrd11.pObj) [12]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_66)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_65;
  if ((Wrd21.Obj) == (current_block [OBJECT_6_6]))
    goto label_65;
  Rsp = (& (Rsp [1]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_32]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_6_8]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_37]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_6_32);

DEFLABEL (label_64)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_34]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_63;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd43.Lng))))
    goto label_63;
  (Wrd37.Obj) = ((Wrd41.pObj) [5]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_62)
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [4]);
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_36]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_6_34);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_39]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_6_40);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_42]));

DEFLABEL (label_63)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.Obj) = (current_block [OBJECT_6_7]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_35]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  Rsp = (& (Rsp [1]));
  goto label_64;

DEFLABEL (label_67)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_6_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_33]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_66;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_9 5
#define LABEL_7_10 7
#define LABEL_7_5 9
#define TAG_7_6 3
#define LABEL_7_7 11
#define LABEL_7_8 13
#define LABEL_7_15 15
#define LABEL_7_12 17
#define LABEL_7_16 19
#define LABEL_7_18 21
#define LABEL_7_19 23
#define LABEL_7_20 25
#define LABEL_7_21 27
#define LABEL_7_22 29
#define LABEL_7_23 31
#define ENVIRONMENT_LABEL_7_3 50
#define DEBUGGING_LABEL_7_2 49
#define OBJECT_7_4 48
#define OBJECT_7_3 47
#define OBJECT_7_2 46
#define OBJECT_7_1 45
#define OBJECT_7_0 44
#define EXECUTE_CACHE_7_17 33
#define EXECUTE_CACHE_7_14 35
#define EXECUTE_CACHE_7_13 37
#define EXECUTE_CACHE_7_11 39
#define FREE_REFERENCE_7_1 42
#define FREE_REFERENCE_7_0 43
#define FREE_REFERENCES_LABEL_7_0 32
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
contan_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd32;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_7_4);
      goto join_blocks_17;

    case 1:
      current_block = (Rpc - LABEL_7_9);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_7_10);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_29;

    case 4:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_16;

    case 5:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_15;

    case 6:
      current_block = (Rpc - LABEL_7_15);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_0;

    case 8:
      current_block = (Rpc - LABEL_7_16);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_7_18);
      goto loop_11;

    case 10:
      current_block = (Rpc - LABEL_7_19);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_7_20);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_7_21);
      goto label_24;

    case 13:
      current_block = (Rpc - LABEL_7_22);
      goto label_25;

    case 14:
      current_block = (Rpc - LABEL_7_23);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (join_blocks_28)
DEFLABEL (join_blocks_17)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_36;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd26.Lng))))
    goto label_36;
  (Wrd20.Obj) = ((Wrd24.pObj) [8]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_35)
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_34;
  Wrd34 = Wrd38;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_32;
  Wrd5 = Wrd9;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_15])), (Wrd6.pObj));

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_10])), (Wrd35.pObj));

DEFLABEL (label_20)
  (Wrd34.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.Obj) = (current_block [OBJECT_7_0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_7_5);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_37;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd8.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_16);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  goto loop_11;

DEFLABEL (loop_30)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_7_18);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_7_2]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_39;

DEFLABEL (label_38)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == (Wrd6.Obj))
    goto label_38;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_49;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_48)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_47;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_46)
  (Wrd27.Obj) = (* (Rsp++));
  if (! ((Wrd18.Obj) == (Wrd27.Obj)))
    goto label_38;
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_45;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_44)
  (Rsp [1]) = (Wrd30.Obj);
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_43;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [0]);

DEFLABEL (label_42)
  (Rsp [2]) = (Wrd39.Obj);
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_41;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [1]);

DEFLABEL (label_40)
  (Rsp [0]) = (Wrd48.Obj);
  goto loop_11;

DEFLABEL (label_41)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_23]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 1);

DEFLABEL (label_26)
  (Wrd48.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_22]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 1);

DEFLABEL (label_25)
  (Wrd39.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_21]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 1);

DEFLABEL (label_24)
  (Wrd30.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_20]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 1);

DEFLABEL (label_23)
  (Wrd18.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_19]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_48;

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
contan_so_30db592c63fd7aad (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	2,
	2,
	1,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 7)
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

static const struct liarc_code_S arr_decl_contan_so_30db592c63fd7aad [7] =
  {
    { "contan_so_code_1", 11, contan_so_code_1 },
    { "contan_so_code_2", 25, contan_so_code_2 },
    { "contan_so_code_3", 5, contan_so_code_3 },
    { "contan_so_code_4", 6, contan_so_code_4 },
    { "contan_so_code_5", 19, contan_so_code_5 },
    { "contan_so_code_6", 23, contan_so_code_6 },
    { "contan_so_code_7", 15, contan_so_code_7 }
  };

int
decl_contan_so_30db592c63fd7aad (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_contan_so_30db592c63fd7aad);
  return (0);
}

DECLARE_COMPILED_CODE ("contan.so", 3, decl_contan_so_30db592c63fd7aad, contan_so_30db592c63fd7aad)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_contan_so_data_30db592c63fd7aad [1942] =
  "\x5c\x15\xdf\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x02\x06\xc1\xb9"
  "\xc1\xba\x08\x02\xc3\xbb\x02\x1d\xc2\xbc\x82\x0d\xbd\x24\x28\x0d"
  "\xbe\x28\x0d\xbf\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x82\x88\x84\x07\x86\x08\x0d\x1c\x02\x02\xb1\x85"
  "\x02\xb4\x83\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x83\x88\xb3\x1d\x02\xb4\x82\xb5\x24\x28\xb6\x28\x0d\xbe"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d"
  "\xb0\x84\x88\x07\x02\x82\xb4\x83\xb5\x24\x28\x0d\xbd\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x85\x88\x07\x02\xb2\x02\x0d\x02\x02\x84\x02\x02\xb4"
  "\x02\x28\x1b\x28\x0d\x28\x0d\x28\xb5\x28\x1b\x28\x0d\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x0c\x84"
  "\x1b\x02\x08\xb1\x85\xb4\x02\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\xb1\x08\xb4\x02\x0d\x0d"
  "\x24\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x9e\x1c\x88\x1b"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb3\x2a\x1b\x2a\x1b\x2a\x9e\x1b"
  "\x1b\x0d\xb6\x0d\xb7\x0d\x9e\x28\x0d\x26\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x02\x5a\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53"
  "\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f"
  "\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x66\x67\x6f"
  "\x70\x74\x2f\x63\x6f\x6e\x74\x61\x6e\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x14\x04\x63\x61\x72\x04\x63\x64\x72\x13\x0c\x76\x65"
  "\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x11\x02\x0b\x76\x65\x63\x74"
  "\x6f\x72\x2d\x72\x65\x66\x11\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70"
  "\x65\x2f\x73\x74\x61\x63\x6b\x02\x04\x09\x66\x6f\x72\x2d\x65\x61"
  "\x63\x68\x03\x19\x63\x6f\x6d\x70\x75\x74\x65\x2d\x62\x6c\x6f\x63"
  "\x6b\x2d\x73\x74\x61\x63\x6b\x2d\x6c\x69\x6e\x6b\x03\x1d\x63\x6f"
  "\x6d\x70\x75\x74\x65\x2d\x62\x6c\x6f\x63\x6b\x2d\x70\x6f\x70\x70"
  "\x69\x6e\x67\x2d\x6c\x69\x6d\x69\x74\x73\x09\x04\x0e\x18\x81\x89"
  "\x02\x0d\x16\x81\x89\x02\x0c\x14\x81\x85\x02\x0b\x12\x81\x83\x02"
  "\x0a\x10\x81\x87\x02\x09\x0e\x81\x83\x02\x08\x0c\x81\x83\x02\x07"
  "\x0a\x81\x85\x02\x06\x08\x81\x83\x02\x05\x06\x83\x04\x04\x04\x83"
  "\x04\x17\x2e\x0a\x02\x0a\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x0b"
  "\x0c\x0a\x08\x03\x0e\x73\x74\x61\x63\x6b\x2d\x70\x61\x72\x65\x6e"
  "\x74\x3f\x03\x16\x77\x69\x74\x68\x2d\x6e\x65\x77\x2d\x6c\x76\x61"
  "\x6c\x75\x65\x2d\x6d\x61\x72\x6b\x73\x0c\x04\x10\x62\x6c\x6f\x63"
  "\x6b\x2d\x61\x6e\x63\x65\x73\x74\x6f\x72\x3f\x0d\x03\x0d\x6c\x76"
  "\x61\x6c\x75\x65\x2d\x6d\x61\x72\x6b\x21\x0e\x04\x18\x62\x6c\x6f"
  "\x63\x6b\x2d\x61\x6e\x63\x65\x73\x74\x6f\x72\x2d\x6f\x72\x2d\x73"
  "\x65\x6c\x66\x3f\x0f\x03\x0f\x6c\x76\x61\x6c\x75\x65\x2d\x6d\x61"
  "\x72\x6b\x65\x64\x3f\x10\x04\x05\x6d\x65\x6d\x71\x04\x09\x66\x6f"
  "\x72\x2d\x61\x6c\x6c\x3f\x11\x09\x27\x34\x81\x87\x02\x26\x32\x81"
  "\x85\x02\x25\x30\x81\x85\x02\x24\x2e\x81\x87\x02\x23\x2c\x81\x85"
  "\x02\x22\x2a\x81\x85\x02\x21\x28\x81\x85\x02\x20\x26\x81\x89\x02"
  "\x1f\x24\x81\x85\x02\x1e\x22\x81\x85\x02\x1d\x20\x81\x89\x02\x1c"
  "\x1e\x81\x89\x02\x1b\x1c\x81\x83\x02\x1a\x1a\x81\x83\x02\x19\x18"
  "\x81\x83\x02\x18\x16\x81\x83\x02\x17\x14\x81\x89\x02\x16\x12\x81"
  "\x87\x02\x15\x10\x81\x87\x02\x14\x0e\x81\x85\x02\x13\x0c\x81\x85"
  "\x02\x12\x0a\x81\x85\x02\x11\x08\x81\x83\x02\x10\x06\x81\x83\x02"
  "\x0f\x04\x83\x04\x33\x53\x12\x02\x02\x12\x02\x04\x03\x1b\x63\x6f"
  "\x6d\x70\x75\x74\x65\x2d\x62\x6c\x6f\x63\x6b\x2d\x73\x74\x61\x74"
  "\x69\x63\x2d\x6c\x69\x6e\x6b\x3f\x03\x2c\x0c\x81\x87\x02\x2b\x0a"
  "\x81\x85\x02\x2a\x08\x81\x83\x02\x29\x06\x83\x04\x28\x04\x83\x04"
  "\x0b\x1a\x02\x11\x02\x03\x0a\x69\x63\x2d\x62\x6c\x6f\x63\x6b\x3f"
  "\x03\x15\x69\x63\x2d\x62\x6c\x6f\x63\x6b\x2f\x75\x73\x65\x2d\x6c"
  "\x6f\x6f\x6b\x75\x70\x3f\x13\x03\x32\x0e\x81\x85\x02\x31\x0c\x81"
  "\x85\x02\x30\x0a\x81\x87\x02\x2f\x08\x81\x85\x02\x2e\x06\x81\x83"
  "\x02\x2d\x04\x83\x04\x0d\x1c\x14\x02\x09\x11\x0c\x63\x6f\x6d\x62"
  "\x69\x6e\x61\x74\x69\x6f\x6e\x08\x14\x0f\x0d\x0a\x04\x11\x03\x13"
  "\x6c\x76\x61\x6c\x75\x65\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x65"
  "\x64\x3f\x04\x0e\x74\x68\x65\x72\x65\x2d\x65\x78\x69\x73\x74\x73"
  "\x3f\x03\x04\x0d\x03\x18\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d"
  "\x63\x6f\x6e\x74\x65\x78\x74\x2f\x62\x6c\x6f\x63\x6b\x03\x13\x08"
  "\x45\x28\x81\x83\x02\x44\x26\x81\x83\x02\x43\x24\x81\x89\x02\x42"
  "\x22\x81\x87\x02\x41\x20\x81\x87\x02\x40\x1e\x81\x85\x02\x3f\x1c"
  "\x81\x85\x02\x3e\x1a\x81\x87\x02\x3d\x18\x81\x87\x02\x3c\x16\x81"
  "\x87\x02\x3b\x14\x81\x85\x02\x3a\x12\x81\x85\x02\x39\x10\x81\x83"
  "\x02\x38\x0e\x81\x89\x02\x37\x0c\x81\x85\x02\x36\x0a\x83\x04\x35"
  "\x08\x81\x83\x02\x34\x06\x81\x87\x02\x33\x04\x83\x04\x27\x45\x13"
  "\x02\x29\x69\x6e\x74\x65\x72\x6e\x61\x6c\x20\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x20\x69\x73\x20\x65\x78\x74\x65\x72"
  "\x6e\x61\x6c\x20\x73\x6f\x75\x72\x63\x65\x0b\x0c\x08\x03\x1e\x73"
  "\x74\x61\x63\x6b\x2d\x62\x6c\x6f\x63\x6b\x2f\x65\x78\x74\x65\x72"
  "\x6e\x61\x6c\x2d\x61\x6e\x63\x65\x73\x74\x6f\x72\x04\x17\x62\x6c"
  "\x6f\x63\x6b\x2d\x70\x61\x72\x74\x69\x61\x6c\x2d\x61\x6e\x63\x65"
  "\x73\x74\x72\x79\x11\x04\x0c\x6d\x61\x70\x2d\x3e\x65\x71\x2d\x73"
  "\x65\x74\x0d\x03\x0c\x04\x21\x62\x6c\x6f\x63\x6b\x2d\x66\x61\x72"
  "\x74\x68\x65\x73\x74\x2d\x75\x6e\x63\x6f\x6d\x6d\x6f\x6e\x2d\x61"
  "\x6e\x63\x65\x73\x74\x6f\x72\x03\x10\x03\x0e\x04\x0a\x6d\x61\x70"
  "\x2d\x75\x6e\x69\x6f\x6e\x04\x06\x65\x72\x72\x6f\x72\x05\x0c\x6a"
  "\x6f\x69\x6e\x2d\x62\x6c\x6f\x63\x6b\x73\x10\x04\x0e\x65\x71\x2d"
  "\x73\x65\x74\x2d\x61\x64\x6a\x6f\x69\x6e\x04\x0d\x65\x71\x2d\x73"
  "\x65\x74\x2d\x75\x6e\x69\x6f\x6e\x0d\x5c\x30\x81\x87\x02\x5b\x2e"
  "\x81\x85\x02\x5a\x2c\x81\x85\x02\x59\x2a\x81\x85\x02\x58\x28\x81"
  "\x87\x02\x57\x26\x81\x85\x02\x56\x24\x81\x85\x02\x55\x22\x81\x85"
  "\x02\x54\x20\x81\x85\x02\x53\x1e\x81\x85\x02\x52\x1c\x81\x85\x02"
  "\x51\x1a\x81\x87\x02\x50\x18\x81\x87\x02\x4f\x16\x81\x87\x02\x4e"
  "\x14\x81\x87\x02\x4d\x12\x81\x85\x02\x4c\x10\x81\x89\x02\x4b\x0e"
  "\x81\x89\x02\x4a\x0c\x81\x89\x02\x49\x0a\x81\x87\x02\x48\x08\x81"
  "\x85\x02\x47\x06\x81\x83\x02\x46\x04\x83\x04\x2f\x54\x0e\x02\x08"
  "\x08\x10\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x62\x6c\x6f\x63"
  "\x6b\x0d\x62\x6c\x6f\x63\x6b\x2d\x70\x61\x72\x65\x6e\x74\x03\x04"
  "\x04\x6d\x61\x70\x04\x0f\x04\x0d\x04\x11\x05\x6b\x20\x81\x87\x02"
  "\x6a\x1e\x81\x87\x02\x69\x1c\x81\x87\x02\x68\x1a\x81\x89\x02\x67"
  "\x18\x81\x87\x02\x66\x16\x81\x87\x02\x65\x14\x81\x89\x02\x64\x12"
  "\x81\x85\x02\x63\x10\x81\x8b\x02\x62\x0e\x81\x89\x02\x61\x0c\x81"
  "\x87\x02\x60\x0a\x81\x85\x02\x5f\x08\x81\x8d\x02\x5e\x06\x81\x8b"
  "\x02\x5d\x04\x85\x08\x1f\x33\x11\x0f\x0f\x11\x04\x0e\x04\x13\x04"
  "\x14\x04\x04\x12\x04\x0a\x04\x10\x09\x1a\x62\x6c\x6f\x63\x6b\x2f"
  "\x6e\x6f\x2d\x66\x72\x65\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x73\x3f\x1a\x73\x65\x74\x75\x70\x2d\x62\x6c\x6f\x63\x6b\x2d"
  "\x73\x74\x61\x74\x69\x63\x2d\x6c\x69\x6e\x6b\x73\x21\x16\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x61\x6e\x61\x6c\x79"
  "\x73\x69\x73\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74"
  "\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01"
  "\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
contan_so_data_30db592c63fd7aad (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_contan_so_data_30db592c63fd7aad [0]))), (sizeof (prog_contan_so_data_30db592c63fd7aad)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("contan.so", contan_so_data_30db592c63fd7aad)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("contan.so", "6c4d73d6ee5da338")
