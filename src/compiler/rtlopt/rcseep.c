/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:24-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_7 5
#define TAG_1_8 1
#define LABEL_1_9 7
#define LABEL_1_10 9
#define LABEL_1_5 11
#define TAG_1_6 4
#define LABEL_1_15 13
#define LABEL_1_11 15
#define LABEL_1_13 17
#define LABEL_1_19 19
#define LABEL_1_20 21
#define LABEL_1_16 23
#define LABEL_1_17 25
#define LABEL_1_22 27
#define LABEL_1_24 29
#define LABEL_1_26 31
#define LABEL_1_28 33
#define LABEL_1_29 35
#define LABEL_1_30 37
#define LABEL_1_31 39
#define LABEL_1_32 41
#define LABEL_1_33 43
#define LABEL_1_27 45
#define ENVIRONMENT_LABEL_1_3 70
#define DEBUGGING_LABEL_1_2 69
#define OBJECT_1_7 68
#define OBJECT_1_6 67
#define OBJECT_1_5 66
#define OBJECT_1_4 65
#define OBJECT_1_3 64
#define OBJECT_1_2 63
#define OBJECT_1_1 62
#define OBJECT_1_0 61
#define EXECUTE_CACHE_1_25 47
#define EXECUTE_CACHE_1_23 49
#define EXECUTE_CACHE_1_21 51
#define EXECUTE_CACHE_1_18 53
#define EXECUTE_CACHE_1_14 55
#define EXECUTE_CACHE_1_12 57
#define FREE_REFERENCE_1_0 60
#define FREE_REFERENCES_LABEL_1_0 46
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcseep_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd76;
  machine_word Wrd80;
  machine_word Wrd78;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd88;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd63;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd70;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd50;
  machine_word Wrd37;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd104;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto expression_equivalentP_26;

    case 1:
      current_block = (Rpc - LABEL_1_7);
      goto loop_39;

    case 2:
      current_block = (Rpc - LABEL_1_9);
      goto label_28;

    case 3:
      current_block = (Rpc - LABEL_1_10);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_1_5);
      goto register_equivalentP_25;

    case 5:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_14;

    case 8:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_16;

    case 13:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_1_28);
      goto label_30;

    case 16:
      current_block = (Rpc - LABEL_1_29);
      goto label_31;

    case 17:
      current_block = (Rpc - LABEL_1_30);
      goto label_32;

    case 18:
      current_block = (Rpc - LABEL_1_31);
      goto label_33;

    case 19:
      current_block = (Rpc - LABEL_1_32);
      goto label_34;

    case 20:
      current_block = (Rpc - LABEL_1_33);
      goto label_35;

    case 21:
      current_block = (Rpc - LABEL_1_27);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_equivalentP_37)
DEFLABEL (expression_equivalentP_26)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_7])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  Wrd13 = Wrd17;
  (Wrd14.Obj) = (Rsp [4]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_12;

DEFLABEL (loop_39)
  CLOSURE_HEADER (LABEL_1_7);

DEFLABEL (loop_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_51;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_50)
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_49;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_48)
  (Wrd23.Obj) = (Rsp [0]);
  if ((Wrd23.Obj) == (Wrd14.Obj))
    goto label_40;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_40)
  if (! ((Wrd23.Obj) == (current_block [OBJECT_1_1])))
    goto label_41;
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [2]);
  (Rsp [1]) = (Wrd33.Obj);
  Rsp = (& (Rsp [1]));
  goto register_equivalentP_25;

DEFLABEL (label_41)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_43;

DEFLABEL (label_42)
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd17.Obj);
  (Rsp [1]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (label_43)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_16);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_44;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_27);
  (Wrd5.Obj) = (* (Rsp++));
  if (Rvl == (Wrd5.Obj))
    goto label_46;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_45;

DEFLABEL (label_46)
  Rvl = (current_block [OBJECT_1_4]);

DEFLABEL (label_45)
DEFLABEL (label_47)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_29)
  (Wrd14.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (register_equivalentP_38)
DEFLABEL (register_equivalentP_25)
  INTERRUPT_CHECK (26, LABEL_1_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_1_26);
  (Wrd5.Obj) = (* (Rsp++));
  if (Rvl == (Wrd5.Obj))
    goto label_52;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_54;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_53;

DEFLABEL (label_54)
  (Wrd104.Obj) = (current_block [OBJECT_1_4]);
  (* (--Rsp)) = (Wrd104.Obj);

DEFLABEL (label_53)
DEFLABEL (label_73)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_55;
  Rvl = (Wrd14.Obj);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_72;
  Wrd19 = Wrd23;

DEFLABEL (label_71)
  Wrd18 = Wrd19;
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_70;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd31.Lng))))
    goto label_70;
  (Wrd25.Obj) = ((Wrd29.pObj) [6]);

DEFLABEL (label_69)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_68;
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_68;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) (Wrd46.Lng)) < ((unsigned long) (Wrd49.Lng))))
    goto label_68;
  (Wrd40.uLng) = (OBJECT_DATUM (Wrd43.Obj));
  (Wrd42.pObj) = (& ((Wrd47.pObj) [(Wrd40.Lng)]));
  (Wrd38.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_67)
  (Rsp [4]) = (Wrd38.Obj);
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_66;
  Wrd57 = Wrd61;

DEFLABEL (label_65)
  Wrd56 = Wrd57;
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd70.uLng) == 10))
    goto label_64;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd69.Lng))))
    goto label_64;
  (Wrd63.Obj) = ((Wrd67.pObj) [5]);

DEFLABEL (label_63)
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd88.uLng) == 10))
    goto label_62;
  (Wrd81.Obj) = (Rsp [2]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 26))
    goto label_62;
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  if (! (((unsigned long) (Wrd84.Lng)) < ((unsigned long) (Wrd87.Lng))))
    goto label_62;
  (Wrd78.uLng) = (OBJECT_DATUM (Wrd81.Obj));
  (Wrd80.pObj) = (& ((Wrd85.pObj) [(Wrd78.Lng)]));
  (Wrd76.Obj) = ((Wrd80.pObj) [1]);

DEFLABEL (label_61)
  (Rsp [5]) = (Wrd76.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd95.Obj) = (Rsp [0]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd96.uLng) == 26)
    goto label_57;

DEFLABEL (label_56)
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_57)
  (Wrd97.Obj) = (Rsp [1]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 26))
    goto label_56;
  if ((Wrd95.Obj) == (Wrd97.Obj))
    goto label_59;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_58;

DEFLABEL (label_59)
  Rvl = (current_block [OBJECT_1_4]);

DEFLABEL (label_58)
DEFLABEL (label_60)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd90.Obj) = (Rsp [2]);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_33]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_6]), 2);

DEFLABEL (label_35)
  (Wrd76.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd72.Obj) = (current_block [OBJECT_1_7]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_32]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_6]), 2);

DEFLABEL (label_34)
  (Wrd63.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_31])), (Wrd58.pObj));

DEFLABEL (label_33)
  (Wrd57.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_30]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_6]), 2);

DEFLABEL (label_32)
  (Wrd38.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd34.Obj) = (current_block [OBJECT_1_5]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_29]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_6]), 2);

DEFLABEL (label_31)
  (Wrd25.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_28])), (Wrd20.pObj));

DEFLABEL (label_30)
  (Wrd19.Obj) = Rvl;
  goto label_71;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define LABEL_2_7 7
#define LABEL_2_8 9
#define ENVIRONMENT_LABEL_2_3 18
#define DEBUGGING_LABEL_2_2 17
#define OBJECT_2_1 16
#define OBJECT_2_0 15
#define EXECUTE_CACHE_2_10 11
#define EXECUTE_CACHE_2_9 13
#define FREE_REFERENCES_LABEL_2_0 10
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcseep_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto expression_refers_toP_5;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto loop_11;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_refers_toP_10)
DEFLABEL (expression_refers_toP_5)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  Wrd9 = Wrd11;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [1]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_4;

DEFLABEL (loop_11)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (loop_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  if (! ((Wrd5.Obj) == (Wrd8.Obj)))
    goto label_12;
  Rvl = (current_block [OBJECT_2_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_17;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_16)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_15;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [0]);

DEFLABEL (label_14)
  (Wrd33.Obj) = (* (Rsp++));
  if ((Wrd24.Obj) == (Wrd33.Obj))
    goto label_13;
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd35.Obj);
  (Rsp [1]) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (label_13)
  (Wrd36.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [2]);
  (Rsp [1]) = (Wrd37.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (label_15)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_8)
  (Wrd24.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define ENVIRONMENT_LABEL_3_3 17
#define DEBUGGING_LABEL_3_2 16
#define OBJECT_3_2 15
#define OBJECT_3_1 14
#define OBJECT_3_0 13
#define EXECUTE_CACHE_3_8 9
#define EXECUTE_CACHE_3_7 11
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcseep_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_3_4);
      goto interpreter_register_referenceP_3;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_register_referenceP_7)
DEFLABEL (interpreter_register_referenceP_3)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_10;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_9)
  if ((Wrd5.Obj) == (current_block [OBJECT_3_1]))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_8 7
#define LABEL_4_7 9
#define LABEL_4_10 11
#define ENVIRONMENT_LABEL_4_3 24
#define DEBUGGING_LABEL_4_2 23
#define OBJECT_4_1 22
#define OBJECT_4_0 21
#define EXECUTE_CACHE_4_11 13
#define EXECUTE_CACHE_4_9 15
#define EXECUTE_CACHE_4_6 17
#define FREE_REFERENCE_4_0 20
#define FREE_REFERENCES_LABEL_4_0 12
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcseep_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_4_4);
      goto expression_address_variesP_3;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_4_10);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_address_variesP_8)
DEFLABEL (expression_address_variesP_3)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_14;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_12;
  Wrd9 = Wrd13;

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_10])), (Wrd10.pObj));

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_13;

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
rcseep_so_4c1fded7df1c2cae (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 4)
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

static const struct liarc_code_S arr_decl_rcseep_so_4c1fded7df1c2cae [4] =
  {
    { "rcseep_so_code_1", 22, rcseep_so_code_1 },
    { "rcseep_so_code_2", 4, rcseep_so_code_2 },
    { "rcseep_so_code_3", 3, rcseep_so_code_3 },
    { "rcseep_so_code_4", 5, rcseep_so_code_4 }
  };

int
decl_rcseep_so_4c1fded7df1c2cae (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rcseep_so_4c1fded7df1c2cae);
  return (0);
}

DECLARE_COMPILED_CODE ("rcseep.so", 3, decl_rcseep_so_4c1fded7df1c2cae, rcseep_so_4c1fded7df1c2cae)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rcseep_so_data_4c1fded7df1c2cae [921] =
  "\x4a\x0b\xc8\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x84\xc2\x85\x07"
  "\x86\x0d\xb9\x0d\xba\x08\x89\x0d\xc1\xbb\x0d\x24\x28\x0d\xbc\x28"
  "\x0d\xbd\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x82\x88\xb3"
  "\x07\x28\x0d\xbf\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x86\xb1\xb3\x28\xb5\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x84\x88\xb3\xb1"
  "\xb2\x0d\x0d\x08\x8b\x0d\xbb\x24\x28\x0d\xba\x28\xb4\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x9b\xbc"
  "\x88\xb4\x1b\x2a\xb5\x2a\x1b\x2a\xb6\x2a\x9b\xb3\xb2\x0d\xb7\x9b"
  "\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5b\x2f\x55\x73"
  "\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65"
  "\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x2f\x72\x74\x6c\x6f\x70\x74\x2f\x72\x63\x73"
  "\x65\x65\x70\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69"
  "\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0b\x76\x65"
  "\x63\x74\x6f\x72\x2d\x72\x65\x66\x07\x6f\x66\x66\x73\x65\x74\x0c"
  "\x62\x79\x74\x65\x2d\x6f\x66\x66\x73\x65\x74\x09\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x04\x63\x61\x72\x12\x2a\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x2d\x74\x61\x62\x6c\x65\x73\x2a\x02\x04\x05\x6d\x65\x6d"
  "\x71\x04\x10\x67\x65\x6e\x65\x72\x61\x6c\x2d\x63\x61\x72\x2d\x63"
  "\x64\x72\x05\x19\x72\x74\x6c\x3a\x6d\x61\x74\x63\x68\x2d\x73\x75"
  "\x62\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x73\x03\x1b\x69\x6e"
  "\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x73\x74\x61\x63\x6b\x2d"
  "\x70\x6f\x69\x6e\x74\x65\x72\x3f\x03\x16\x67\x65\x74\x2d\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x2d\x71\x75\x61\x6e\x74\x69\x74\x79\x03"
  "\x19\x73\x74\x61\x63\x6b\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\x2d\x71\x75\x61\x6e\x74\x69\x74\x79\x07\x19\x2e\x81\x8b\x02\x18"
  "\x2c\x81\x8d\x02\x17\x2a\x81\x8d\x02\x16\x28\x81\x8d\x02\x15\x26"
  "\x81\x8d\x02\x14\x24\x81\x8d\x02\x13\x22\x81\x8d\x02\x12\x20\x81"
  "\x8d\x02\x11\x1e\x81\x89\x02\x10\x1c\x81\x8b\x02\x0f\x1a\x81\x8b"
  "\x02\x0e\x18\x81\x89\x02\x0d\x16\x81\x89\x02\x0c\x14\x81\x8b\x02"
  "\x0b\x12\x81\x87\x02\x0a\x10\x81\x89\x02\x09\x0e\x81\x89\x02\x08"
  "\x0c\x81\x87\x02\x07\x0a\x81\x89\x02\x06\x08\x81\x87\x02\x05\x06"
  "\x81\x87\x02\x04\x04\x85\x08\x2d\x47\x02\x05\x17\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x2d\x65\x71\x75\x69\x76\x61\x6c\x65\x6e"
  "\x74\x3f\x04\x17\x72\x74\x6c\x3a\x61\x6e\x79\x2d\x73\x75\x62\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f\x09\x03\x1d\x0a\x81\x87"
  "\x02\x1c\x08\x81\x85\x02\x1b\x06\x81\x85\x02\x1a\x04\x84\x06\x09"
  "\x13\x0a\x02\x04\x03\x1a\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65"
  "\x72\x2d\x72\x65\x67\x73\x2d\x70\x6f\x69\x6e\x74\x65\x72\x3f\x03"
  "\x20\x08\x81\x83\x02\x1f\x06\x81\x83\x02\x1e\x04\x83\x04\x07\x12"
  "\x02\x0e\x70\x72\x65\x2d\x69\x6e\x63\x72\x65\x6d\x65\x6e\x74\x0f"
  "\x70\x6f\x73\x74\x2d\x69\x6e\x63\x72\x65\x6d\x65\x6e\x74\x1b\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x61\x64\x64\x72\x65\x73"
  "\x73\x2d\x76\x61\x72\x69\x65\x73\x3f\x02\x03\x20\x69\x6e\x74\x65"
  "\x72\x70\x72\x65\x74\x65\x72\x2d\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x3f\x04\x04\x09\x04\x25"
  "\x0c\x81\x85\x02\x24\x0a\x81\x83\x02\x23\x08\x81\x87\x02\x22\x06"
  "\x81\x83\x02\x21\x04\x83\x04\x0b\x19\x09\x09\x04\x04\x0a\x04\x04"
  "\x16\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x72\x65\x66\x65"
  "\x72\x73\x2d\x74\x6f\x3f\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d"
  "\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81"
  "\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
rcseep_so_data_4c1fded7df1c2cae (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rcseep_so_data_4c1fded7df1c2cae [0]))), (sizeof (prog_rcseep_so_data_4c1fded7df1c2cae)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("rcseep.so", rcseep_so_data_4c1fded7df1c2cae)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rcseep.so", "cf02f5ecb315fc00")
