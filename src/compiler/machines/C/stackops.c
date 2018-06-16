/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:20-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define LABEL_1_8 11
#define LABEL_1_9 13
#define LABEL_1_10 15
#define LABEL_1_11 17
#define LABEL_1_12 19
#define LABEL_1_13 21
#define LABEL_1_14 23
#define LABEL_1_15 25
#define LABEL_1_16 27
#define LABEL_1_17 29
#define LABEL_1_21 31
#define LABEL_1_22 33
#define LABEL_1_19 35
#define LABEL_1_26 37
#define LABEL_1_27 39
#define LABEL_1_24 41
#define ENVIRONMENT_LABEL_1_3 63
#define DEBUGGING_LABEL_1_2 62
#define OBJECT_1_10 61
#define OBJECT_1_9 60
#define OBJECT_1_8 59
#define OBJECT_1_7 58
#define OBJECT_1_6 57
#define OBJECT_1_5 56
#define OBJECT_1_4 55
#define OBJECT_1_3 54
#define OBJECT_1_2 53
#define OBJECT_1_1 52
#define OBJECT_1_0 51
#define EXECUTE_CACHE_1_25 43
#define EXECUTE_CACHE_1_23 45
#define EXECUTE_CACHE_1_20 47
#define EXECUTE_CACHE_1_18 49
#define FREE_REFERENCES_LABEL_1_0 42
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackops_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd41;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd76;
  machine_word Wrd74;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd86;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_1_4);
      goto lambda_42;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_44;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_45;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto label_46;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto label_47;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_1_12);
      goto loop_39;

    case 9:
      current_block = (Rpc - LABEL_1_13);
      goto label_48;

    case 10:
      current_block = (Rpc - LABEL_1_14);
      goto label_52;

    case 11:
      current_block = (Rpc - LABEL_1_15);
      goto label_49;

    case 12:
      current_block = (Rpc - LABEL_1_16);
      goto label_50;

    case 13:
      current_block = (Rpc - LABEL_1_17);
      goto label_51;

    case 14:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_32;

    case 15:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_31;

    case 16:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_1_26);
      goto label_53;

    case 18:
      current_block = (Rpc - LABEL_1_27);
      goto label_54;

    case 19:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_56)
DEFLABEL (lambda_42)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_65;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_64)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_63;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_62)
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_61;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_60)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_59;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_58)
  (Rsp [0]) = (Wrd30.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd42.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd43.Obj);
  goto loop_39;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (Wrd10.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_47)
  (Wrd30.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_46)
  (Wrd21.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_45)
  (Wrd14.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_44)
  (Wrd5.Obj) = Rvl;
  goto label_64;

DEFLABEL (loop_57)
DEFLABEL (loop_39)
  INTERRUPT_CHECK (26, LABEL_1_12);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_66;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_1_21);
  (Wrd9.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_8]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_1_24);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_1_10]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Rsp [3]) = (Wrd14.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (label_66)
  if (! ((Wrd6.uLng) == 1))
    goto label_85;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_84)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_81;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_80)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 1)
    goto label_72;
  (Wrd36.Obj) = (Rsp [3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_71)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_1_19);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_70;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_70;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_69)
  (Rsp [4]) = (Wrd9.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_68;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_67)
  (Rsp [5]) = (Wrd15.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd32.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_1_9]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd40.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Rsp [6]) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (Wrd53.Obj) = (Rsp [7]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (Rsp [7]) = (Wrd50.Obj);
  Rsp = (& (Rsp [4]));
  goto loop_39;

DEFLABEL (label_68)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_54)
  (Wrd15.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_53)
  (Wrd9.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  if (! ((Wrd34.uLng) == 1))
    goto label_79;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [1]);

DEFLABEL (label_78)
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_77;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_76)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 26))
    goto label_75;
  (Wrd61.Obj) = (Rsp [4]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 26))
    goto label_75;
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! ((Wrd74.Lng) < (Wrd76.Lng)))
    goto label_74;

DEFLABEL (label_73)
  (Wrd71.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd72.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (label_74)
  (Wrd70.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd70.Obj);
  goto label_71;

DEFLABEL (label_75)
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd64.Obj) = (Rsp [4]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_51)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_74;
  goto label_73;

DEFLABEL (label_77)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_49)
  (Wrd43.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  if (! ((Wrd27.uLng) == 1))
    goto label_83;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd78.Obj) = ((Wrd80.pObj) [0]);

DEFLABEL (label_82)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd78.Obj);
  goto label_80;

DEFLABEL (label_83)
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_52)
  (Wrd78.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (* (--Rsp)) = Rvl;
  goto label_80;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_8 9
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
#define ENVIRONMENT_LABEL_2_3 47
#define DEBUGGING_LABEL_2_2 46
#define OBJECT_2_7 45
#define OBJECT_2_6 44
#define OBJECT_2_5 43
#define OBJECT_2_4 42
#define OBJECT_2_3 41
#define OBJECT_2_2 40
#define OBJECT_2_1 39
#define OBJECT_2_0 38
#define EXECUTE_CACHE_2_7 31
#define FREE_REFERENCE_2_1 34
#define FREE_REFERENCE_2_0 35
#define FREE_ASSIGNMENT_2_0 37
#define FREE_REFERENCES_LABEL_2_0 30
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackops_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd85;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd100;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd110;
  machine_word Wrd108;
  machine_word Wrd8;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd19;
  machine_word Wrd17;
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
      goto stackify_setup_debugB_18;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_2_11);
      goto do_loop_12;

    case 7:
      current_block = (Rpc - LABEL_2_12);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_2_13);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_2_14);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_2_15);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_2_16);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_2_17);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_2_18);
      goto label_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_setup_debugB_31)
DEFLABEL (stackify_setup_debugB_18)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_39;
  Wrd5 = Wrd9;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd19.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (Rsp [0]) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_37;
  Wrd6 = Wrd10;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_35;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Obj) = (MAKE_OBJECT (26, (Wrd15.uLng)));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_34)
  (Wrd23.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd23.Obj);
  goto do_loop_12;

DEFLABEL (label_35)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_8])), (Wrd7.pObj));

DEFLABEL (label_21)
  (Wrd6.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd6.pObj));

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_38;

DEFLABEL (do_loop_32)
DEFLABEL (do_loop_12)
  INTERRUPT_CHECK (26, LABEL_2_11);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_58;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_58;
  (Wrd108.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd110.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd108.Lng) < (Wrd110.Lng))
    goto label_44;

DEFLABEL (label_43)
  Rsp = (& (Rsp [1]));
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd24.Obj) = ((Wrd16.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_42;

DEFLABEL (label_41)
  ((Wrd16.pObj) [0]) = (Wrd17.Obj);

DEFLABEL (label_40)
  Rvl = (current_block [OBJECT_2_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_42)
  if ((Wrd24.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_41;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_13])), (Wrd16.pObj), (Wrd17.Obj));

DEFLABEL (label_24)
  goto label_40;

DEFLABEL (label_44)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_57;
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_57;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) (Wrd42.Lng)) < ((unsigned long) (Wrd46.Lng))))
    goto label_57;
  (Wrd34.uLng) = (OBJECT_DATUM (Wrd39.Obj));
  (Wrd37.pObj) = (& ((Wrd44.pObj) [(Wrd34.Lng)]));
  (Wrd38.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_56)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_55;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd54.Obj) = ((Wrd56.pObj) [1]);

DEFLABEL (label_54)
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_53;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_52)
  (Wrd70.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd74.Obj) = (Rsp [2]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 1))
    goto label_51;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd71.Obj) = ((Wrd73.pObj) [0]);

DEFLABEL (label_50)
  (Rsp [2]) = (Wrd71.Obj);
  (Wrd105.Obj) = (Rsp [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 10)
    goto label_46;

DEFLABEL (label_45)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_7]), 3);

DEFLABEL (label_46)
  (Wrd97.Obj) = (Rsp [1]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 26))
    goto label_45;
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd97.Obj));
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd103.Obj) = ((Wrd102.pObj) [0]);
  (Wrd104.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  if (! (((unsigned long) (Wrd100.Lng)) < ((unsigned long) (Wrd104.Lng))))
    goto label_45;
  (Wrd92.uLng) = (OBJECT_DATUM (Wrd97.Obj));
  (Wrd95.pObj) = (& ((Wrd102.pObj) [(Wrd92.Lng)]));
  ((Wrd95.pObj) [1]) = (Wrd71.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_49)
  (Wrd86.Obj) = (Rsp [0]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 26))
    goto label_48;
  (Wrd90.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  (Wrd88.Lng) = ((Wrd90.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd88.Lng)))
    goto label_48;
  (Wrd85.Obj) = (LONG_TO_FIXNUM (Wrd88.Lng));

DEFLABEL (label_47)
  (Rsp [0]) = (Wrd85.Obj);
  goto do_loop_12;

DEFLABEL (label_48)
  (Wrd81.Obj) = (Rsp [0]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_29)
  (Wrd85.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_51)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 1);

DEFLABEL (label_28)
  (Wrd71.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 1);

DEFLABEL (label_26)
  (Wrd54.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_58)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_44;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_10);
  goto label_49;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_7 9
#define LABEL_3_8 11
#define LABEL_3_9 13
#define LABEL_3_10 15
#define LABEL_3_11 17
#define ENVIRONMENT_LABEL_3_3 31
#define DEBUGGING_LABEL_3_2 30
#define OBJECT_3_11 29
#define OBJECT_3_10 28
#define OBJECT_3_9 27
#define OBJECT_3_8 26
#define OBJECT_3_7 25
#define OBJECT_3_6 24
#define OBJECT_3_5 23
#define OBJECT_3_4 22
#define OBJECT_3_3 21
#define OBJECT_3_2 20
#define OBJECT_3_1 19
#define OBJECT_3_0 18
#define FREE_REFERENCES_LABEL_3_0 18
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackops_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd72;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd74;
  machine_word Wrd82;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd103;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd118;
  machine_word Wrd116;
  machine_word Wrd124;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd139;
  machine_word Wrd137;
  machine_word Wrd145;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd13;
  machine_word Wrd149;
  machine_word Wrd147;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_3_4);
      goto stackify_c_quotify_17;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_3_8);
      goto do_loop_13;

    case 5:
      current_block = (Rpc - LABEL_3_9);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_3_10);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_3_11);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_c_quotify_24)
DEFLABEL (stackify_c_quotify_17)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_27;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_26)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_13;

DEFLABEL (label_27)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (do_loop_25)
DEFLABEL (do_loop_13)
  INTERRUPT_CHECK (26, LABEL_3_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_41;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_41;
  (Wrd147.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd149.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd147.Lng) < (Wrd149.Lng))
    goto label_29;

DEFLABEL (label_28)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd36.Obj) = (Rsp [4]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 30))
    goto label_40;
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_40;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) (Wrd31.Lng)) < ((unsigned long) (Wrd35.Lng))))
    goto label_40;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd28.Obj));
  (Wrd25.pChr) = (& ((Wrd33.pChr) [(Wrd22.Lng)]));
  (Wrd26.uLng) = ((unsigned long) (((unsigned char *) (Wrd25.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd27.Obj) = (MAKE_OBJECT (2, (Wrd26.uLng)));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_39)
  (Wrd43.Obj) = (Rsp [0]);
  if ((Wrd43.Obj) == (current_block [OBJECT_3_4]))
    goto label_38;
  if ((Wrd43.Obj) == (current_block [OBJECT_3_6]))
    goto label_37;
  if ((Wrd43.Obj) == (current_block [OBJECT_3_7]))
    goto label_37;
  if ((Wrd43.Obj) == (current_block [OBJECT_3_9]))
    goto label_36;
  (Wrd51.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd82.uLng) == 30)
    goto label_31;

DEFLABEL (label_30)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_11]), 3);

DEFLABEL (label_31)
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd74.uLng) == 26))
    goto label_30;
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [1]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if (! (((unsigned long) (Wrd76.Lng)) < ((unsigned long) (Wrd80.Lng))))
    goto label_30;
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd72.uLng) == 2))
    goto label_30;
  (Wrd65.uLng) = (OBJECT_DATUM (Wrd51.Obj));
  (Wrd68.pChr) = (& ((Wrd78.pChr) [(Wrd65.Lng)]));
  ((Wrd68.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd43.Obj)));

DEFLABEL (label_35)
  Rsp = (& (Rsp [4]));

DEFLABEL (label_34)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 26))
    goto label_33;
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd61.Lng) = ((Wrd63.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd61.Lng)))
    goto label_33;
  (Wrd58.Obj) = (LONG_TO_FIXNUM (Wrd61.Lng));

DEFLABEL (label_32)
  (Rsp [0]) = (Wrd58.Obj);
  goto do_loop_13;

DEFLABEL (label_33)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_22)
  (Wrd58.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_36)
  (Wrd83.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd84.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (current_block [OBJECT_3_10]);
  (Rsp [2]) = (Wrd85.Obj);
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd103.uLng) == 30))
    goto label_30;
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd95.uLng) == 26))
    goto label_30;
  (Wrd97.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd100.Obj) = ((Wrd99.pObj) [1]);
  (Wrd101.Lng) = (FIXNUM_TO_LONG (Wrd100.Obj));
  if (! (((unsigned long) (Wrd97.Lng)) < ((unsigned long) (Wrd101.Lng))))
    goto label_30;
  (Wrd88.uLng) = (OBJECT_DATUM (Wrd83.Obj));
  (Wrd91.pChr) = (& ((Wrd99.pChr) [(Wrd88.Lng)]));
  ((Wrd91.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd85.Obj)));
  goto label_35;

DEFLABEL (label_37)
  (Wrd104.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd105.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd106.Obj) = (current_block [OBJECT_3_8]);
  (Rsp [2]) = (Wrd106.Obj);
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd124.uLng) == 30))
    goto label_30;
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd116.uLng) == 26))
    goto label_30;
  (Wrd118.Lng) = (FIXNUM_TO_LONG (Wrd104.Obj));
  (Wrd120.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd121.Obj) = ((Wrd120.pObj) [1]);
  (Wrd122.Lng) = (FIXNUM_TO_LONG (Wrd121.Obj));
  if (! (((unsigned long) (Wrd118.Lng)) < ((unsigned long) (Wrd122.Lng))))
    goto label_30;
  (Wrd109.uLng) = (OBJECT_DATUM (Wrd104.Obj));
  (Wrd112.pChr) = (& ((Wrd120.pChr) [(Wrd109.Lng)]));
  ((Wrd112.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd106.Obj)));
  goto label_35;

DEFLABEL (label_38)
  (Wrd125.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd125.Obj);
  (Wrd126.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd126.Obj);
  (Wrd127.Obj) = (current_block [OBJECT_3_5]);
  (Rsp [2]) = (Wrd127.Obj);
  (Wrd145.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if (! ((Wrd145.uLng) == 30))
    goto label_30;
  (Wrd137.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if (! ((Wrd137.uLng) == 26))
    goto label_30;
  (Wrd139.Lng) = (FIXNUM_TO_LONG (Wrd125.Obj));
  (Wrd141.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd142.Obj) = ((Wrd141.pObj) [1]);
  (Wrd143.Lng) = (FIXNUM_TO_LONG (Wrd142.Obj));
  if (! (((unsigned long) (Wrd139.Lng)) < ((unsigned long) (Wrd143.Lng))))
    goto label_30;
  (Wrd130.uLng) = (OBJECT_DATUM (Wrd125.Obj));
  (Wrd133.pChr) = (& ((Wrd141.pChr) [(Wrd130.Lng)]));
  ((Wrd133.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd127.Obj)));
  goto label_35;

DEFLABEL (label_40)
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_29;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_7);
  goto label_34;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_11 9
#define LABEL_4_12 11
#define LABEL_4_8 13
#define LABEL_4_10 15
#define LABEL_4_15 17
#define LABEL_4_17 19
#define LABEL_4_18 21
#define LABEL_4_19 23
#define LABEL_4_20 25
#define LABEL_4_22 27
#define LABEL_4_25 29
#define LABEL_4_26 31
#define LABEL_4_27 33
#define LABEL_4_28 35
#define LABEL_4_29 37
#define LABEL_4_33 39
#define LABEL_4_13 41
#define LABEL_4_21 43
#define LABEL_4_24 45
#define LABEL_4_37 47
#define LABEL_4_31 49
#define LABEL_4_38 51
#define LABEL_4_32 53
#define LABEL_4_35 55
#define LABEL_4_40 57
#define ENVIRONMENT_LABEL_4_3 105
#define DEBUGGING_LABEL_4_2 104
#define OBJECT_4_23 103
#define OBJECT_4_22 102
#define OBJECT_4_21 101
#define OBJECT_4_20 100
#define OBJECT_4_19 99
#define OBJECT_4_18 98
#define OBJECT_4_17 97
#define OBJECT_4_16 96
#define OBJECT_4_15 95
#define OBJECT_4_14 94
#define OBJECT_4_13 93
#define OBJECT_4_12 92
#define OBJECT_4_11 91
#define OBJECT_4_10 90
#define OBJECT_4_9 89
#define OBJECT_4_8 88
#define OBJECT_4_7 87
#define OBJECT_4_6 86
#define OBJECT_4_5 85
#define OBJECT_4_4 84
#define OBJECT_4_3 83
#define OBJECT_4_2 82
#define OBJECT_4_1 81
#define OBJECT_4_0 80
#define EXECUTE_CACHE_4_39 59
#define EXECUTE_CACHE_4_36 61
#define EXECUTE_CACHE_4_34 63
#define EXECUTE_CACHE_4_30 65
#define EXECUTE_CACHE_4_23 67
#define EXECUTE_CACHE_4_16 69
#define EXECUTE_CACHE_4_14 71
#define EXECUTE_CACHE_4_9 73
#define EXECUTE_CACHE_4_6 75
#define FREE_REFERENCE_4_1 78
#define FREE_REFERENCE_4_0 79
#define FREE_REFERENCES_LABEL_4_0 58
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackops_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd136;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd127;
  machine_word Wrd124;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd121;
  machine_word Wrd115;
  machine_word Wrd117;
  machine_word Wrd110;
  machine_word Wrd112;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd104;
  machine_word Wrd138;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd94;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd88;
  machine_word Wrd147;
  machine_word Wrd143;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd44;
  machine_word Wrd31;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd151;
  machine_word Wrd149;
  machine_word Wrd109;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_4_4);
      goto stackify_dump_c_enums_52;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_51;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_14;

    case 3:
      current_block = (Rpc - LABEL_4_11);
      goto label_54;

    case 4:
      current_block = (Rpc - LABEL_4_12);
      goto label_55;

    case 5:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_15;

    case 7:
      current_block = (Rpc - LABEL_4_15);
      goto label_56;

    case 8:
      current_block = (Rpc - LABEL_4_17);
      goto continuation_29;

    case 9:
      current_block = (Rpc - LABEL_4_18);
      goto do_loop_38;

    case 10:
      current_block = (Rpc - LABEL_4_19);
      goto label_57;

    case 11:
      current_block = (Rpc - LABEL_4_20);
      goto label_58;

    case 12:
      current_block = (Rpc - LABEL_4_22);
      goto label_59;

    case 13:
      current_block = (Rpc - LABEL_4_25);
      goto label_60;

    case 14:
      current_block = (Rpc - LABEL_4_26);
      goto label_61;

    case 15:
      current_block = (Rpc - LABEL_4_27);
      goto label_62;

    case 16:
      current_block = (Rpc - LABEL_4_28);
      goto label_63;

    case 17:
      current_block = (Rpc - LABEL_4_29);
      goto label_64;

    case 18:
      current_block = (Rpc - LABEL_4_33);
      goto label_65;

    case 19:
      current_block = (Rpc - LABEL_4_13);
      goto continuation_3;

    case 20:
      current_block = (Rpc - LABEL_4_21);
      goto continuation_41;

    case 21:
      current_block = (Rpc - LABEL_4_24);
      goto continuation_21;

    case 22:
      current_block = (Rpc - LABEL_4_37);
      goto label_66;

    case 23:
      current_block = (Rpc - LABEL_4_31);
      goto continuation_27;

    case 24:
      current_block = (Rpc - LABEL_4_38);
      goto label_67;

    case 25:
      current_block = (Rpc - LABEL_4_32);
      goto continuation_26;

    case 26:
      current_block = (Rpc - LABEL_4_35);
      goto continuation_2;

    case 27:
      current_block = (Rpc - LABEL_4_40);
      goto label_68;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_dump_c_enums_70)
DEFLABEL (stackify_dump_c_enums_52)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (lambda_71)
DEFLABEL (lambda_51)
  INTERRUPT_CHECK (26, LABEL_4_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_13);
  (Wrd8.Obj) = (current_block [OBJECT_4_13]);
  (Wrd9.Obj) = (current_block [OBJECT_4_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_4_14]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_4_15]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_4_16]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_35]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_36]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_35);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_4_20]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_4_21]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_4_22]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_4_23]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_78;
  Wrd27 = Wrd31;

DEFLABEL (label_77)
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_76;
  Wrd8 = Wrd12;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_74;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Obj) = (MAKE_OBJECT (26, (Wrd17.uLng)));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_73)
  (Wrd28.Obj) = (current_block [OBJECT_4_1]);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd26.pObj) = (& (Rhp [-1]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd29.Obj);
  goto do_loop_38;

DEFLABEL (label_74)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_11])), (Wrd9.pObj));

DEFLABEL (label_54)
  (Wrd8.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_40])), (Wrd28.pObj));

DEFLABEL (label_68)
  (Wrd27.Obj) = Rvl;
  goto label_77;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (Wrd8.Obj) = (current_block [OBJECT_4_3]);
  (Wrd9.Obj) = (current_block [OBJECT_4_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_4_5]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_80;
  Wrd14 = Wrd18;

DEFLABEL (label_79)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (label_80)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_15])), (Wrd15.pObj));

DEFLABEL (label_56)
  (Wrd14.Obj) = Rvl;
  goto label_79;

DEFLABEL (do_loop_72)
DEFLABEL (do_loop_38)
  INTERRUPT_CHECK (26, LABEL_4_18);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_104;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_104;
  (Wrd149.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd151.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd149.Lng) < (Wrd151.Lng))
    goto label_86;

DEFLABEL (label_85)
  Rsp = (& (Rsp [1]));
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_84;
  Wrd17 = Wrd21;

DEFLABEL (label_83)
  (Rsp [1]) = (Wrd17.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_82;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd36.Lng) = ((Wrd40.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd36.Lng)))
    goto label_82;
  (Wrd41.Obj) = (LONG_TO_FIXNUM (Wrd36.Lng));
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_81)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_23]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_4_21);
  (Wrd8.Obj) = (current_block [OBJECT_4_17]);
  (Wrd9.Obj) = (current_block [OBJECT_4_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_4_18]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_4_19]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (label_82)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_22]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_20])), (Wrd18.pObj));

DEFLABEL (label_58)
  (Wrd17.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd59.Obj) = (Rsp [4]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 10))
    goto label_103;
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_103;
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) (Wrd54.Lng)) < ((unsigned long) (Wrd58.Lng))))
    goto label_103;
  (Wrd46.uLng) = (OBJECT_DATUM (Wrd51.Obj));
  (Wrd49.pObj) = (& ((Wrd56.pObj) [(Wrd46.Lng)]));
  (Wrd50.Obj) = ((Wrd49.pObj) [1]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_102)
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 1))
    goto label_101;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd66.Obj) = ((Wrd68.pObj) [1]);

DEFLABEL (label_100)
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_99;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (* (--Rsp)) = (Wrd76.Obj);

DEFLABEL (label_98)
  (Wrd82.Obj) = (Rsp [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 26))
    goto label_97;
  (Wrd84.Obj) = (Rsp [4]);
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 26))
    goto label_97;
  (Wrd143.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  (Wrd147.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  if (! ((Wrd143.Lng) > (Wrd147.Lng)))
    goto label_95;

DEFLABEL (label_96)
  (Wrd139.Obj) = (Rsp [4]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = (Rsp [0]);
  ((Wrd140.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_95)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd99.Obj) = (Rsp [1]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd100.uLng) == 26))
    goto label_94;
  (Wrd138.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  if ((Wrd138.Lng) == 0)
    goto label_93;

DEFLABEL (label_92)
  (Wrd106.Obj) = (current_block [OBJECT_4_9]);
  (* (--Rsp)) = (Wrd106.Obj);
  (Wrd107.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd107.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_30]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_4_17);
  (Wrd109.Obj) = Rvl;

DEFLABEL (label_91)
  (Wrd113.Obj) = (current_block [OBJECT_4_11]);
  (Wrd114.Obj) = (current_block [OBJECT_4_4]);
  (* (Rhp++)) = (Wrd113.Obj);
  (* (Rhp++)) = (Wrd114.Obj);
  (Wrd112.pObj) = (& (Rhp [-2]));
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd112.pObj)));
  (* (Rhp++)) = (Wrd109.Obj);
  (* (Rhp++)) = (Wrd110.Obj);
  (Wrd117.pObj) = (& (Rhp [-2]));
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd117.pObj)));
  (Wrd121.Obj) = (current_block [OBJECT_4_12]);
  (* (Rhp++)) = (Wrd121.Obj);
  (* (Rhp++)) = (Wrd115.Obj);
  (Wrd119.pObj) = (& (Rhp [-2]));
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd119.pObj)));
  (* (--Rsp)) = (Wrd120.Obj);
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_31]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_32]))));
  (* (--Rsp)) = (Wrd127.Obj);
  (Wrd131.Obj) = (Rsp [4]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if (! ((Wrd132.uLng) == 1))
    goto label_90;
  (Wrd129.pObj) = (OBJECT_ADDRESS (Wrd131.Obj));
  (Wrd130.Obj) = ((Wrd129.pObj) [0]);
  (* (--Rsp)) = (Wrd130.Obj);

DEFLABEL (label_89)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_34]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_4_32);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_39]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_4_31);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_4_19]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_88;
  Wrd15 = Wrd19;

DEFLABEL (label_87)
  (Rsp [0]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (label_88)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_38])), (Wrd16.pObj));

DEFLABEL (label_67)
  (Wrd15.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_33]))));
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_8]), 1);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (label_93)
  (Wrd109.Obj) = (current_block [OBJECT_4_10]);
  Rsp = (& (Rsp [1]));
  goto label_91;

DEFLABEL (label_94)
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_29]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_64)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  goto label_93;

DEFLABEL (label_97)
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd90.Obj) = (Rsp [4]);
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd89.Obj) = ((Wrd91.pObj) [0]);
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_28]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_63)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_95;
  goto label_96;

DEFLABEL (label_99)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_27]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_8]), 1);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_26]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_7]), 1);

DEFLABEL (label_61)
  (Wrd66.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (Wrd61.Obj) = (Rsp [4]);
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 2);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_102;

DEFLABEL (label_104)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_57)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_85;
  goto label_86;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_4_24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_106;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_106;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_105)
  (Rsp [0]) = (Wrd9.Obj);
  goto do_loop_38;

DEFLABEL (label_106)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_37]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_66)
  (Wrd9.Obj) = Rvl;
  goto label_105;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_11 15
#define LABEL_12 17
#define LABEL_13 19
#define LABEL_14 21
#define LABEL_15 23
#define LABEL_16 25
#define LABEL_17 27
#define LABEL_18 29
#define LABEL_19 31
#define LABEL_20 33
#define LABEL_21 35
#define LABEL_22 37
#define LABEL_23 39
#define LABEL_24 41
#define LABEL_25 43
#define LABEL_26 45
#define LABEL_27 47
#define LABEL_28 49
#define LABEL_29 51
#define LABEL_30 53
#define LABEL_31 55
#define LABEL_32 57
#define LABEL_33 59
#define LABEL_34 61
#define LABEL_35 63
#define LABEL_36 65
#define LABEL_37 67
#define LABEL_38 69
#define LABEL_39 71
#define LABEL_40 73
#define LABEL_41 75
#define LABEL_42 77
#define LABEL_43 79
#define LABEL_44 81
#define LABEL_45 83
#define LABEL_46 85
#define LABEL_47 87
#define LABEL_48 89
#define LABEL_49 91
#define LABEL_50 93
#define LABEL_51 95
#define LABEL_52 97
#define LABEL_53 99
#define LABEL_54 101
#define LABEL_55 103
#define LABEL_56 105
#define LABEL_57 107
#define LABEL_58 109
#define LABEL_59 111
#define LABEL_60 113
#define LABEL_61 115
#define LABEL_62 117
#define LABEL_63 119
#define LABEL_64 121
#define LABEL_65 123
#define LABEL_66 125
#define LABEL_67 127
#define LABEL_68 129
#define LABEL_69 131
#define LABEL_70 133
#define LABEL_71 135
#define LABEL_72 137
#define LABEL_73 139
#define LABEL_74 141
#define LABEL_75 143
#define LABEL_76 145
#define LABEL_77 147
#define LABEL_78 149
#define LABEL_79 151
#define LABEL_80 153
#define LABEL_81 155
#define LABEL_82 157
#define LABEL_83 159
#define LABEL_84 161
#define LABEL_85 163
#define LABEL_86 165
#define LABEL_87 167
#define LABEL_88 169
#define LABEL_89 171
#define LABEL_90 173
#define LABEL_91 175
#define LABEL_92 177
#define LABEL_93 179
#define LABEL_94 181
#define LABEL_95 183
#define LABEL_96 185
#define LABEL_97 187
#define LABEL_98 189
#define LABEL_99 191
#define LABEL_100 193
#define LABEL_101 195
#define LABEL_102 197
#define LABEL_103 199
#define LABEL_104 201
#define LABEL_105 203
#define LABEL_106 205
#define LABEL_107 207
#define LABEL_108 209
#define LABEL_109 211
#define LABEL_110 213
#define LABEL_111 215
#define LABEL_112 217
#define LABEL_113 219
#define LABEL_114 221
#define LABEL_115 223
#define LABEL_116 225
#define LABEL_117 227
#define LABEL_118 229
#define LABEL_119 231
#define LABEL_120 233
#define LABEL_121 235
#define LABEL_122 237
#define LABEL_123 239
#define LABEL_124 241
#define LABEL_125 243
#define LABEL_126 245
#define LABEL_127 247
#define LABEL_128 249
#define LABEL_129 251
#define LABEL_130 253
#define LABEL_131 255
#define LABEL_132 257
#define LABEL_133 259
#define LABEL_134 261
#define LABEL_135 263
#define LABEL_136 265
#define LABEL_137 267
#define LABEL_138 269
#define LABEL_139 271
#define LABEL_140 273
#define ENVIRONMENT_LABEL_3 537
#define DEBUGGING_LABEL_2 536
#define PURIFICATION_ROOT 535
#define OBJECT_257 534
#define OBJECT_256 533
#define OBJECT_255 532
#define OBJECT_254 531
#define OBJECT_253 530
#define OBJECT_252 529
#define OBJECT_251 528
#define OBJECT_250 527
#define OBJECT_249 526
#define OBJECT_248 525
#define OBJECT_247 524
#define OBJECT_246 523
#define OBJECT_245 522
#define OBJECT_244 521
#define OBJECT_243 520
#define OBJECT_242 519
#define OBJECT_241 518
#define OBJECT_240 517
#define OBJECT_239 516
#define OBJECT_238 515
#define OBJECT_237 514
#define OBJECT_236 513
#define OBJECT_235 512
#define OBJECT_234 511
#define OBJECT_233 510
#define OBJECT_232 509
#define OBJECT_231 508
#define OBJECT_230 507
#define OBJECT_229 506
#define OBJECT_228 505
#define OBJECT_227 504
#define OBJECT_226 503
#define OBJECT_225 502
#define OBJECT_224 501
#define OBJECT_223 500
#define OBJECT_222 499
#define OBJECT_221 498
#define OBJECT_220 497
#define OBJECT_219 496
#define OBJECT_218 495
#define OBJECT_217 494
#define OBJECT_216 493
#define OBJECT_215 492
#define OBJECT_214 491
#define OBJECT_213 490
#define OBJECT_212 489
#define OBJECT_211 488
#define OBJECT_210 487
#define OBJECT_209 486
#define OBJECT_208 485
#define OBJECT_207 484
#define OBJECT_206 483
#define OBJECT_205 482
#define OBJECT_204 481
#define OBJECT_203 480
#define OBJECT_202 479
#define OBJECT_201 478
#define OBJECT_200 477
#define OBJECT_199 476
#define OBJECT_198 475
#define OBJECT_197 474
#define OBJECT_196 473
#define OBJECT_195 472
#define OBJECT_194 471
#define OBJECT_193 470
#define OBJECT_192 469
#define OBJECT_191 468
#define OBJECT_190 467
#define OBJECT_189 466
#define OBJECT_188 465
#define OBJECT_187 464
#define OBJECT_186 463
#define OBJECT_185 462
#define OBJECT_184 461
#define OBJECT_183 460
#define OBJECT_182 459
#define OBJECT_181 458
#define OBJECT_180 457
#define OBJECT_179 456
#define OBJECT_178 455
#define OBJECT_177 454
#define OBJECT_176 453
#define OBJECT_175 452
#define OBJECT_174 451
#define OBJECT_173 450
#define OBJECT_172 449
#define OBJECT_171 448
#define OBJECT_170 447
#define OBJECT_169 446
#define OBJECT_168 445
#define OBJECT_167 444
#define OBJECT_166 443
#define OBJECT_165 442
#define OBJECT_164 441
#define OBJECT_163 440
#define OBJECT_162 439
#define OBJECT_161 438
#define OBJECT_160 437
#define OBJECT_159 436
#define OBJECT_158 435
#define OBJECT_157 434
#define OBJECT_156 433
#define OBJECT_155 432
#define OBJECT_154 431
#define OBJECT_153 430
#define OBJECT_152 429
#define OBJECT_151 428
#define OBJECT_150 427
#define OBJECT_149 426
#define OBJECT_148 425
#define OBJECT_147 424
#define OBJECT_146 423
#define OBJECT_145 422
#define OBJECT_144 421
#define OBJECT_143 420
#define OBJECT_142 419
#define OBJECT_141 418
#define OBJECT_140 417
#define OBJECT_139 416
#define OBJECT_138 415
#define OBJECT_137 414
#define OBJECT_136 413
#define OBJECT_135 412
#define OBJECT_134 411
#define OBJECT_133 410
#define OBJECT_132 409
#define OBJECT_131 408
#define OBJECT_130 407
#define OBJECT_129 406
#define OBJECT_128 405
#define OBJECT_127 404
#define OBJECT_126 403
#define OBJECT_125 402
#define OBJECT_124 401
#define OBJECT_123 400
#define OBJECT_122 399
#define OBJECT_121 398
#define OBJECT_120 397
#define OBJECT_119 396
#define OBJECT_118 395
#define OBJECT_117 394
#define OBJECT_116 393
#define OBJECT_115 392
#define OBJECT_114 391
#define OBJECT_113 390
#define OBJECT_112 389
#define OBJECT_111 388
#define OBJECT_110 387
#define OBJECT_109 386
#define OBJECT_108 385
#define OBJECT_107 384
#define OBJECT_106 383
#define OBJECT_105 382
#define OBJECT_104 381
#define OBJECT_103 380
#define OBJECT_102 379
#define OBJECT_101 378
#define OBJECT_100 377
#define OBJECT_99 376
#define OBJECT_98 375
#define OBJECT_97 374
#define OBJECT_96 373
#define OBJECT_95 372
#define OBJECT_94 371
#define OBJECT_93 370
#define OBJECT_92 369
#define OBJECT_91 368
#define OBJECT_90 367
#define OBJECT_89 366
#define OBJECT_88 365
#define OBJECT_87 364
#define OBJECT_86 363
#define OBJECT_85 362
#define OBJECT_84 361
#define OBJECT_83 360
#define OBJECT_82 359
#define OBJECT_81 358
#define OBJECT_80 357
#define OBJECT_79 356
#define OBJECT_78 355
#define OBJECT_77 354
#define OBJECT_76 353
#define OBJECT_75 352
#define OBJECT_74 351
#define OBJECT_73 350
#define OBJECT_72 349
#define OBJECT_71 348
#define OBJECT_70 347
#define OBJECT_69 346
#define OBJECT_68 345
#define OBJECT_67 344
#define OBJECT_66 343
#define OBJECT_65 342
#define OBJECT_64 341
#define OBJECT_63 340
#define OBJECT_62 339
#define OBJECT_61 338
#define OBJECT_60 337
#define OBJECT_59 336
#define OBJECT_58 335
#define OBJECT_57 334
#define OBJECT_56 333
#define OBJECT_55 332
#define OBJECT_54 331
#define OBJECT_53 330
#define OBJECT_52 329
#define OBJECT_51 328
#define OBJECT_50 327
#define OBJECT_49 326
#define OBJECT_48 325
#define OBJECT_47 324
#define OBJECT_46 323
#define OBJECT_45 322
#define OBJECT_44 321
#define OBJECT_43 320
#define OBJECT_42 319
#define OBJECT_41 318
#define OBJECT_40 317
#define OBJECT_39 316
#define OBJECT_38 315
#define OBJECT_37 314
#define OBJECT_36 313
#define OBJECT_35 312
#define OBJECT_34 311
#define OBJECT_33 310
#define OBJECT_32 309
#define OBJECT_31 308
#define OBJECT_30 307
#define OBJECT_29 306
#define OBJECT_28 305
#define OBJECT_27 304
#define OBJECT_26 303
#define OBJECT_25 302
#define OBJECT_24 301
#define OBJECT_23 300
#define OBJECT_22 299
#define OBJECT_21 298
#define OBJECT_20 297
#define OBJECT_19 296
#define OBJECT_18 295
#define OBJECT_17 294
#define OBJECT_16 293
#define OBJECT_15 292
#define OBJECT_14 291
#define OBJECT_13 290
#define OBJECT_12 289
#define OBJECT_11 288
#define OBJECT_10 287
#define OBJECT_9 286
#define OBJECT_8 285
#define OBJECT_7 284
#define OBJECT_6 283
#define OBJECT_5 282
#define OBJECT_4 281
#define OBJECT_3 280
#define OBJECT_2 279
#define OBJECT_1 278
#define OBJECT_0 277
#define GLOBAL_EXECUTE_CACHE_7 275
#define FREE_REFERENCES_LABEL_0 274
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
stackops_so_66cafa2d6080c680 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd11;
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
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_19);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_20);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_17;

    case 17:
      current_block = (Rpc - LABEL_22);
      goto continuation_18;

    case 18:
      current_block = (Rpc - LABEL_23);
      goto continuation_19;

    case 19:
      current_block = (Rpc - LABEL_24);
      goto continuation_20;

    case 20:
      current_block = (Rpc - LABEL_25);
      goto continuation_21;

    case 21:
      current_block = (Rpc - LABEL_26);
      goto continuation_22;

    case 22:
      current_block = (Rpc - LABEL_27);
      goto continuation_23;

    case 23:
      current_block = (Rpc - LABEL_28);
      goto continuation_24;

    case 24:
      current_block = (Rpc - LABEL_29);
      goto continuation_25;

    case 25:
      current_block = (Rpc - LABEL_30);
      goto continuation_26;

    case 26:
      current_block = (Rpc - LABEL_31);
      goto continuation_27;

    case 27:
      current_block = (Rpc - LABEL_32);
      goto continuation_28;

    case 28:
      current_block = (Rpc - LABEL_33);
      goto continuation_29;

    case 29:
      current_block = (Rpc - LABEL_34);
      goto continuation_30;

    case 30:
      current_block = (Rpc - LABEL_35);
      goto continuation_31;

    case 31:
      current_block = (Rpc - LABEL_36);
      goto continuation_32;

    case 32:
      current_block = (Rpc - LABEL_37);
      goto continuation_33;

    case 33:
      current_block = (Rpc - LABEL_38);
      goto continuation_34;

    case 34:
      current_block = (Rpc - LABEL_39);
      goto continuation_35;

    case 35:
      current_block = (Rpc - LABEL_40);
      goto continuation_36;

    case 36:
      current_block = (Rpc - LABEL_41);
      goto continuation_37;

    case 37:
      current_block = (Rpc - LABEL_42);
      goto continuation_38;

    case 38:
      current_block = (Rpc - LABEL_43);
      goto continuation_39;

    case 39:
      current_block = (Rpc - LABEL_44);
      goto continuation_40;

    case 40:
      current_block = (Rpc - LABEL_45);
      goto continuation_41;

    case 41:
      current_block = (Rpc - LABEL_46);
      goto continuation_42;

    case 42:
      current_block = (Rpc - LABEL_47);
      goto continuation_43;

    case 43:
      current_block = (Rpc - LABEL_48);
      goto continuation_44;

    case 44:
      current_block = (Rpc - LABEL_49);
      goto continuation_45;

    case 45:
      current_block = (Rpc - LABEL_50);
      goto continuation_46;

    case 46:
      current_block = (Rpc - LABEL_51);
      goto continuation_47;

    case 47:
      current_block = (Rpc - LABEL_52);
      goto continuation_48;

    case 48:
      current_block = (Rpc - LABEL_53);
      goto continuation_49;

    case 49:
      current_block = (Rpc - LABEL_54);
      goto continuation_50;

    case 50:
      current_block = (Rpc - LABEL_55);
      goto continuation_51;

    case 51:
      current_block = (Rpc - LABEL_56);
      goto continuation_52;

    case 52:
      current_block = (Rpc - LABEL_57);
      goto continuation_53;

    case 53:
      current_block = (Rpc - LABEL_58);
      goto continuation_54;

    case 54:
      current_block = (Rpc - LABEL_59);
      goto continuation_55;

    case 55:
      current_block = (Rpc - LABEL_60);
      goto continuation_56;

    case 56:
      current_block = (Rpc - LABEL_61);
      goto continuation_57;

    case 57:
      current_block = (Rpc - LABEL_62);
      goto continuation_58;

    case 58:
      current_block = (Rpc - LABEL_63);
      goto continuation_59;

    case 59:
      current_block = (Rpc - LABEL_64);
      goto continuation_60;

    case 60:
      current_block = (Rpc - LABEL_65);
      goto continuation_61;

    case 61:
      current_block = (Rpc - LABEL_66);
      goto continuation_62;

    case 62:
      current_block = (Rpc - LABEL_67);
      goto continuation_63;

    case 63:
      current_block = (Rpc - LABEL_68);
      goto continuation_64;

    case 64:
      current_block = (Rpc - LABEL_69);
      goto continuation_65;

    case 65:
      current_block = (Rpc - LABEL_70);
      goto continuation_66;

    case 66:
      current_block = (Rpc - LABEL_71);
      goto continuation_67;

    case 67:
      current_block = (Rpc - LABEL_72);
      goto continuation_68;

    case 68:
      current_block = (Rpc - LABEL_73);
      goto continuation_69;

    case 69:
      current_block = (Rpc - LABEL_74);
      goto continuation_70;

    case 70:
      current_block = (Rpc - LABEL_75);
      goto continuation_71;

    case 71:
      current_block = (Rpc - LABEL_76);
      goto continuation_72;

    case 72:
      current_block = (Rpc - LABEL_77);
      goto continuation_73;

    case 73:
      current_block = (Rpc - LABEL_78);
      goto continuation_74;

    case 74:
      current_block = (Rpc - LABEL_79);
      goto continuation_75;

    case 75:
      current_block = (Rpc - LABEL_80);
      goto continuation_76;

    case 76:
      current_block = (Rpc - LABEL_81);
      goto continuation_77;

    case 77:
      current_block = (Rpc - LABEL_82);
      goto continuation_78;

    case 78:
      current_block = (Rpc - LABEL_83);
      goto continuation_79;

    case 79:
      current_block = (Rpc - LABEL_84);
      goto continuation_80;

    case 80:
      current_block = (Rpc - LABEL_85);
      goto continuation_81;

    case 81:
      current_block = (Rpc - LABEL_86);
      goto continuation_82;

    case 82:
      current_block = (Rpc - LABEL_87);
      goto continuation_83;

    case 83:
      current_block = (Rpc - LABEL_88);
      goto continuation_84;

    case 84:
      current_block = (Rpc - LABEL_89);
      goto continuation_85;

    case 85:
      current_block = (Rpc - LABEL_90);
      goto continuation_86;

    case 86:
      current_block = (Rpc - LABEL_91);
      goto continuation_87;

    case 87:
      current_block = (Rpc - LABEL_92);
      goto continuation_88;

    case 88:
      current_block = (Rpc - LABEL_93);
      goto continuation_89;

    case 89:
      current_block = (Rpc - LABEL_94);
      goto continuation_90;

    case 90:
      current_block = (Rpc - LABEL_95);
      goto continuation_91;

    case 91:
      current_block = (Rpc - LABEL_96);
      goto continuation_92;

    case 92:
      current_block = (Rpc - LABEL_97);
      goto continuation_93;

    case 93:
      current_block = (Rpc - LABEL_98);
      goto continuation_94;

    case 94:
      current_block = (Rpc - LABEL_99);
      goto continuation_95;

    case 95:
      current_block = (Rpc - LABEL_100);
      goto continuation_96;

    case 96:
      current_block = (Rpc - LABEL_101);
      goto continuation_97;

    case 97:
      current_block = (Rpc - LABEL_102);
      goto continuation_98;

    case 98:
      current_block = (Rpc - LABEL_103);
      goto continuation_99;

    case 99:
      current_block = (Rpc - LABEL_104);
      goto continuation_100;

    case 100:
      current_block = (Rpc - LABEL_105);
      goto continuation_101;

    case 101:
      current_block = (Rpc - LABEL_106);
      goto continuation_102;

    case 102:
      current_block = (Rpc - LABEL_107);
      goto continuation_103;

    case 103:
      current_block = (Rpc - LABEL_108);
      goto continuation_104;

    case 104:
      current_block = (Rpc - LABEL_109);
      goto continuation_105;

    case 105:
      current_block = (Rpc - LABEL_110);
      goto continuation_106;

    case 106:
      current_block = (Rpc - LABEL_111);
      goto continuation_107;

    case 107:
      current_block = (Rpc - LABEL_112);
      goto continuation_108;

    case 108:
      current_block = (Rpc - LABEL_113);
      goto continuation_109;

    case 109:
      current_block = (Rpc - LABEL_114);
      goto continuation_110;

    case 110:
      current_block = (Rpc - LABEL_115);
      goto continuation_111;

    case 111:
      current_block = (Rpc - LABEL_116);
      goto continuation_112;

    case 112:
      current_block = (Rpc - LABEL_117);
      goto continuation_113;

    case 113:
      current_block = (Rpc - LABEL_118);
      goto continuation_114;

    case 114:
      current_block = (Rpc - LABEL_119);
      goto continuation_115;

    case 115:
      current_block = (Rpc - LABEL_120);
      goto continuation_116;

    case 116:
      current_block = (Rpc - LABEL_121);
      goto continuation_117;

    case 117:
      current_block = (Rpc - LABEL_122);
      goto continuation_118;

    case 118:
      current_block = (Rpc - LABEL_123);
      goto continuation_119;

    case 119:
      current_block = (Rpc - LABEL_124);
      goto continuation_120;

    case 120:
      current_block = (Rpc - LABEL_125);
      goto continuation_121;

    case 121:
      current_block = (Rpc - LABEL_126);
      goto continuation_123;

    case 122:
      current_block = (Rpc - LABEL_127);
      goto continuation_125;

    case 123:
      current_block = (Rpc - LABEL_128);
      goto continuation_127;

    case 124:
      current_block = (Rpc - LABEL_129);
      goto continuation_129;

    case 125:
      current_block = (Rpc - LABEL_130);
      goto continuation_131;

    case 126:
      current_block = (Rpc - LABEL_131);
      goto continuation_133;

    case 127:
      current_block = (Rpc - LABEL_132);
      goto continuation_135;

    case 128:
      current_block = (Rpc - LABEL_133);
      goto continuation_137;

    case 129:
      current_block = (Rpc - LABEL_134);
      goto continuation_139;

    case 130:
      current_block = (Rpc - LABEL_135);
      goto continuation_140;

    case 131:
      current_block = (Rpc - LABEL_136);
      goto continuation_141;

    case 132:
      current_block = (Rpc - LABEL_137);
      goto continuation_142;

    case 133:
      current_block = (Rpc - LABEL_138);
      goto label_147;

    case 134:
      current_block = (Rpc - LABEL_139);
      goto label_148;

    case 135:
      current_block = (Rpc - LABEL_140);
      goto expression_144;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_144)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_139])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_148)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_147)
  {
    static const short sections [] =
      {
	0,
	2,
	0,
	3,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 4)
      goto label_146;
    blocks = (current_block [OBJECT_257]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_138])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_146)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_103]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_105]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_107]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_111]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_112]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_113]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_114]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_115]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_119]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_120]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_121]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_122]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_123]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_124]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_125]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_126]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_127]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_128]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_130]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_131]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_132]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_133]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_134]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_135]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_136]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_138]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_139]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_140]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_141]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_142]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_143]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_144]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_145]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_146]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_147]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_148]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_149]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_150]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_152]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_81);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_153]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_155]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_156]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_83);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_157]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_84);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_159]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_160]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_85);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_161]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_162]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_86);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_163]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_164]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_87);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_165]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_166]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_88);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_167]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_168]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_89);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_169]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_170]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_90);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_171]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_172]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_173]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_174]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_92);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_175]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_176]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_93);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_177]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_178]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_179]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_180]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_95);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_181]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_182]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_96);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_183]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_184]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_185]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_186]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_98);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_187]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_188]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_189]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_190]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_191]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_192]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_101);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_193]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_194]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_195]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_196]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_197]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_198]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_104);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_199]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_200]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_105);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_201]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_202]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_203]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_204]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_107);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_205]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_206]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_108);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_207]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_208]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_109);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_209]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_210]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_110);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_211]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_212]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_213]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_214]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_112);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_215]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_216]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_113);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_217]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_218]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_114);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_219]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_220]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_221]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_222]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_116);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_223]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_224]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_117);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_225]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_226]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_114)
  INTERRUPT_CHECK (27, LABEL_118);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_227]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_228]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_119);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_229]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_230]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_120);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_231]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_232]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_121);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_233]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_234]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_122);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_235]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_236]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_123);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_237]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_238]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_124);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_239]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_240]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_125);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (MAKE_OBJECT (0, 7));
  (Wrd18.Obj) = (current_block [OBJECT_95]);
  (Wrd19.Obj) = (current_block [OBJECT_97]);
  (Wrd20.Obj) = (current_block [OBJECT_99]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_101]);
  (Wrd12.Obj) = (current_block [OBJECT_103]);
  (Wrd13.Obj) = (current_block [OBJECT_105]);
  (Wrd14.Obj) = (current_block [OBJECT_107]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd9.pObj) = (& (Rhp [-8]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_241]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_123)
  INTERRUPT_CHECK (27, LABEL_126);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.Obj) = (MAKE_OBJECT (0, 8));
  (Wrd19.Obj) = (current_block [OBJECT_111]);
  (Wrd20.Obj) = (current_block [OBJECT_113]);
  (Wrd21.Obj) = (current_block [OBJECT_115]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_117]);
  (Wrd13.Obj) = (current_block [OBJECT_119]);
  (Wrd14.Obj) = (current_block [OBJECT_121]);
  (Wrd15.Obj) = (current_block [OBJECT_123]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_125]);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-9]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_242]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_125)
  INTERRUPT_CHECK (27, LABEL_127);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.Obj) = (MAKE_OBJECT (0, 8));
  (Wrd19.Obj) = (current_block [OBJECT_127]);
  (Wrd20.Obj) = (current_block [OBJECT_129]);
  (Wrd21.Obj) = (current_block [OBJECT_131]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_133]);
  (Wrd13.Obj) = (current_block [OBJECT_135]);
  (Wrd14.Obj) = (current_block [OBJECT_137]);
  (Wrd15.Obj) = (current_block [OBJECT_139]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_141]);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-9]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_243]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_127)
  INTERRUPT_CHECK (27, LABEL_128);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd19.Obj) = (MAKE_OBJECT (0, 9));
  (Wrd21.Obj) = (current_block [OBJECT_143]);
  (Wrd22.Obj) = (current_block [OBJECT_145]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_147]);
  (Wrd14.Obj) = (current_block [OBJECT_149]);
  (Wrd15.Obj) = (current_block [OBJECT_151]);
  (Wrd16.Obj) = (current_block [OBJECT_153]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_155]);
  (Wrd12.Obj) = (current_block [OBJECT_157]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-10]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_244]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_129);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.Obj) = (MAKE_OBJECT (0, 8));
  (Wrd19.Obj) = (current_block [OBJECT_159]);
  (Wrd20.Obj) = (current_block [OBJECT_161]);
  (Wrd21.Obj) = (current_block [OBJECT_163]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_165]);
  (Wrd13.Obj) = (current_block [OBJECT_167]);
  (Wrd14.Obj) = (current_block [OBJECT_169]);
  (Wrd15.Obj) = (current_block [OBJECT_171]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_173]);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-9]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_245]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_131)
  INTERRUPT_CHECK (27, LABEL_130);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd19.Obj) = (MAKE_OBJECT (0, 9));
  (Wrd21.Obj) = (current_block [OBJECT_175]);
  (Wrd22.Obj) = (current_block [OBJECT_177]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_179]);
  (Wrd14.Obj) = (current_block [OBJECT_181]);
  (Wrd15.Obj) = (current_block [OBJECT_183]);
  (Wrd16.Obj) = (current_block [OBJECT_185]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_187]);
  (Wrd12.Obj) = (current_block [OBJECT_189]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-10]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_246]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_133)
  INTERRUPT_CHECK (27, LABEL_131);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.Obj) = (MAKE_OBJECT (0, 8));
  (Wrd19.Obj) = (current_block [OBJECT_191]);
  (Wrd20.Obj) = (current_block [OBJECT_193]);
  (Wrd21.Obj) = (current_block [OBJECT_195]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_197]);
  (Wrd13.Obj) = (current_block [OBJECT_199]);
  (Wrd14.Obj) = (current_block [OBJECT_201]);
  (Wrd15.Obj) = (current_block [OBJECT_203]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_205]);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-9]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_247]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_135)
  INTERRUPT_CHECK (27, LABEL_132);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.Obj) = (MAKE_OBJECT (0, 8));
  (Wrd19.Obj) = (current_block [OBJECT_207]);
  (Wrd20.Obj) = (current_block [OBJECT_209]);
  (Wrd21.Obj) = (current_block [OBJECT_211]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_213]);
  (Wrd13.Obj) = (current_block [OBJECT_215]);
  (Wrd14.Obj) = (current_block [OBJECT_217]);
  (Wrd15.Obj) = (current_block [OBJECT_219]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_221]);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-9]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_248]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_137)
  INTERRUPT_CHECK (27, LABEL_133);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.Obj) = (MAKE_OBJECT (0, 8));
  (Wrd19.Obj) = (current_block [OBJECT_223]);
  (Wrd20.Obj) = (current_block [OBJECT_225]);
  (Wrd21.Obj) = (current_block [OBJECT_227]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_229]);
  (Wrd13.Obj) = (current_block [OBJECT_231]);
  (Wrd14.Obj) = (current_block [OBJECT_233]);
  (Wrd15.Obj) = (current_block [OBJECT_235]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_237]);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-9]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_249]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_139)
  INTERRUPT_CHECK (27, LABEL_134);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_250]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_140)
  INTERRUPT_CHECK (27, LABEL_135);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_251]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_252]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_141)
  INTERRUPT_CHECK (27, LABEL_136);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_137]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_253]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_254]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_142)
  INTERRUPT_CHECK (27, LABEL_137);
  (Wrd5.Obj) = (current_block [OBJECT_255]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_256]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_stackops_so_66cafa2d6080c680 [4] =
  {
    { "stackops_so_code_1", 20, stackops_so_code_1 },
    { "stackops_so_code_2", 14, stackops_so_code_2 },
    { "stackops_so_code_3", 8, stackops_so_code_3 },
    { "stackops_so_code_4", 28, stackops_so_code_4 }
  };

int
decl_stackops_so_66cafa2d6080c680 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_stackops_so_66cafa2d6080c680);
  return (0);
}

DECLARE_COMPILED_CODE ("stackops.so", 136, decl_stackops_so_66cafa2d6080c680, stackops_so_66cafa2d6080c680)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_stackops_so_data_66cafa2d6080c680 [8019] =
  "\x9a\x04\x77\xfe\x0a\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\x0d\x0d"
  "\x0d\x0d\x0c\x0d\x80\x08\xc1\xb9\xc1\xba\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d"
  "\xb0\x82\x88\xc3\xb1\xb2\xc2\xbc\x1d\x80\xc1\xbd\x02\x0d\xbe\x25"
  "\xb6\x0d\xbf\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xc3\x0f\x0f\x0f\x0f"
  "\x0f\x0f\x0f\xc2\x80\xc1\xc1\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0c"
  "\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x02\xb1\xb2"
  "\xb4\x0c\x08\x0c\x80\x87\xb5\xb7\x0d\x24\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\xbd\x28\xb5\x28\x0d\x28\x0d\x28\x0d\xbd\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x9b\xba\x88\xb2\xb4"
  "\x2a\x0d\xb5\x1b\x2a\x0d\x1b\x2a\xb6\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\xb7\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\xbf\x02"
  "\x08\x89\x0d\xbe\x02\x08\x89\x0d\xbd\x02\x08\x89\x0d\xbc\x02\x08"
  "\x89\x0d\xba\x02\x08\x89\x0d\xb9\x02\x08\x89\x0d\xb8\x02\x08\x89"
  "\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d"
  "\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c"
  "\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02"
  "\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08"
  "\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89"
  "\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d"
  "\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c"
  "\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02"
  "\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08"
  "\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89"
  "\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d"
  "\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c"
  "\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02"
  "\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08"
  "\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89"
  "\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d"
  "\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c"
  "\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02"
  "\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08"
  "\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89"
  "\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d"
  "\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c"
  "\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02"
  "\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08"
  "\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89"
  "\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d"
  "\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c"
  "\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02"
  "\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08"
  "\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89"
  "\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d"
  "\x1c\x02\x08\x89\x0d\x1c\x02\x08\x89\x0d\x1c\x86\x08\x89\x0d\x1c"
  "\x85\x08\x89\x0d\x1c\x84\x08\x89\x0d\x1c\x83\x08\x89\x0d\x1c\x82"
  "\x08\x89\x0d\x1c\x81\x08\x89\x0d\x1c\x80\x08\x89\x17\x1b\x02\x1b"
  "\x02\xb7\x02\xb6\x02\xb5\x02\xb4\x02\xb2\x02\xb1\x02\xb0\x02\x1b"
  "\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b"
  "\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b"
  "\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b"
  "\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b"
  "\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b"
  "\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b"
  "\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b"
  "\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b"
  "\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b"
  "\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b"
  "\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b"
  "\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x1b\x02\x1b\x02\x1b\x02\x1b\x02"
  "\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x86\x1b\x85\x1b\x84\x1b\x83"
  "\x1b\x82\x1b\x81\xc2\x02\x02\x0d\xc3\x1b\x80\xb3\x2a\x28\x0d\x26"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x02\x61\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53"
  "\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f"
  "\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x6d\x61\x63"
  "\x68\x69\x6e\x65\x73\x2f\x43\x2f\x73\x74\x61\x63\x6b\x6f\x70\x73"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x07\x64\x65\x66\x69\x6e"
  "\x65\x12\x64\x65\x66\x69\x6e\x65\x2d\x69\x6e\x74\x65\x67\x72\x61"
  "\x62\x6c\x65\x02\x2a\x06\x71\x75\x6f\x74\x65\x02\x2f\x1c\x64\x65"
  "\x66\x69\x6e\x65\x2d\x65\x6e\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e"
  "\x3a\x20\x4f\x76\x65\x72\x6c\x61\x70\x06\x62\x65\x67\x69\x6e\x04"
  "\x63\x61\x72\x04\x63\x64\x72\x04\x06\x65\x72\x72\x6f\x72\x05\x0e"
  "\x73\x79\x6d\x62\x6f\x6c\x2d\x61\x70\x70\x65\x6e\x64\x03\x09\x72"
  "\x65\x76\x65\x72\x73\x65\x21\x03\x0d\x6c\x69\x73\x74\x2d\x3e\x76"
  "\x65\x63\x74\x6f\x72\x05\x9c\x01\x2a\x81\x8b\x02\x9b\x01\x28\x81"
  "\x91\x02\x9a\x01\x26\x81\x91\x02\x99\x01\x24\x81\x8f\x02\x98\x01"
  "\x22\x81\x8b\x02\x97\x01\x20\x81\x89\x02\x96\x01\x1e\x81\x83\x02"
  "\x95\x01\x1c\x81\x8f\x02\x94\x01\x1a\x81\x8f\x02\x93\x01\x18\x81"
  "\x8d\x02\x92\x01\x16\x81\x89\x02\x91\x01\x14\x81\x89\x02\x90\x01"
  "\x12\x81\x8b\x02\x8f\x01\x10\x81\x8d\x02\x8e\x01\x0e\x81\x85\x02"
  "\x8d\x01\x0c\x81\x85\x02\x8c\x01\x0a\x81\x85\x02\x8b\x01\x08\x81"
  "\x85\x02\x8a\x01\x06\x81\x85\x02\x89\x01\x04\x84\x06\x29\x40\x02"
  "\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x0b\x76\x65\x63"
  "\x74\x6f\x72\x2d\x72\x65\x66\x02\x0e\x76\x65\x63\x74\x6f\x72\x2d"
  "\x6c\x65\x6e\x67\x74\x68\x81\x02\x17\x2a\x73\x74\x61\x63\x6b\x69"
  "\x66\x79\x2f\x6f\x70\x63\x6f\x64\x65\x2d\x6e\x61\x6d\x65\x2a\x02"
  "\x12\x2a\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64"
  "\x65\x2a\x03\x04\x0c\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72"
  "\x02\xaa\x01\x1e\x81\x89\x02\xa9\x01\x1c\x81\x87\x02\xa8\x01\x1a"
  "\x81\x83\x02\xa7\x01\x18\x81\x83\x02\xa6\x01\x16\x81\x8b\x02\xa5"
  "\x01\x14\x81\x87\x02\xa4\x01\x12\x81\x89\x02\xa3\x01\x10\x81\x89"
  "\x02\xa2\x01\x0e\x81\x89\x02\xa1\x01\x0c\x81\x85\x02\xa0\x01\x0a"
  "\x81\x83\x02\x9f\x01\x08\x81\x83\x02\x9e\x01\x06\x81\x81\x02\x9d"
  "\x01\x04\x82\x02\x1d\x30\x09\x02\x0c\x73\x74\x72\x69\x6e\x67\x2d"
  "\x73\x65\x74\x21\x01\x51\x01\x2c\x01\x60\x01\x30\x01\x2e\x01\x54"
  "\x01\x2b\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x10\x73\x74"
  "\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x0e\x73\x74"
  "\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\xb2\x01\x12\x81\x89"
  "\x02\xb1\x01\x10\x81\x8b\x02\xb0\x01\x0e\x81\x89\x02\xaf\x01\x0c"
  "\x81\x89\x02\xae\x01\x0a\x81\x89\x02\xad\x01\x08\x81\x85\x02\xac"
  "\x01\x06\x81\x83\x02\xab\x01\x04\x83\x04\x11\x20\x0a\x02\x27\x2f"
  "\x2a\x20\x45\x6d\x61\x63\x73\x3a\x20\x74\x68\x69\x73\x20\x69\x73"
  "\x20\x2d\x2a\x2d\x20\x43\x20\x2d\x2a\x2d\x20\x63\x6f\x64\x65\x2e"
  "\x20\x2a\x2f\x0a\x0a\x14\x23\x69\x66\x6e\x64\x65\x66\x20\x53\x54"
  "\x41\x43\x4b\x4f\x50\x53\x5f\x48\x0a\x15\x23\x64\x65\x66\x69\x6e"
  "\x65\x20\x53\x54\x41\x43\x4b\x4f\x50\x53\x5f\x48\x0a\x0a\x17\x2f"
  "\x2a\x20\x43\x20\x63\x6f\x64\x65\x20\x70\x72\x6f\x64\x75\x63\x65"
  "\x64\x0a\x20\x20\x20\x02\x09\x15\x4e\x5f\x53\x54\x41\x43\x4b\x49"
  "\x46\x59\x5f\x4f\x50\x43\x4f\x44\x45\x20\x3d\x20\x02\x0a\x05\x20"
  "\x61\x74\x20\x07\x0a\x20\x2a\x2f\x0a\x0a\x0e\x74\x79\x70\x65\x64"
  "\x65\x66\x20\x65\x6e\x75\x6d\x0a\x03\x7b\x0a\x05\x20\x3d\x20\x30"
  "\x03\x2c\x0a\x01\x09\x17\x7d\x20\x73\x74\x61\x63\x6b\x69\x66\x79"
  "\x5f\x6f\x70\x63\x6f\x64\x65\x5f\x74\x3b\x0a\x0a\x19\x23\x65\x6e"
  "\x64\x69\x66\x20\x2f\x2a\x20\x53\x54\x41\x43\x4b\x4f\x50\x53\x5f"
  "\x48\x20\x2a\x2f\x0a\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69"
  "\x6e\x67\x03\x04\x14\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74"
  "\x2d\x74\x6f\x2d\x66\x69\x6c\x65\x02\x11\x67\x65\x74\x2d\x64\x65"
  "\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x03\x19\x64\x65\x63\x6f"
  "\x64\x65\x64\x2d\x74\x69\x6d\x65\x2f\x74\x69\x6d\x65\x2d\x73\x74"
  "\x72\x69\x6e\x67\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x03\x0f"
  "\x6e\x75\x6d\x62\x65\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67\x04\x03"
  "\x0c\x73\x79\x6d\x62\x6f\x6c\x2d\x6e\x61\x6d\x65\x03\x19\x64\x65"
  "\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2f\x64\x61\x74\x65\x2d"
  "\x73\x74\x72\x69\x6e\x67\x03\x13\x73\x74\x61\x63\x6b\x69\x66\x79"
  "\x2f\x63\x2d\x71\x75\x6f\x74\x69\x66\x79\x0a\xce\x01\x3a\x81\x85"
  "\x02\xcd\x01\x38\x81\x87\x02\xcc\x01\x36\x81\x89\x02\xcb\x01\x34"
  "\x81\x85\x02\xca\x01\x32\x81\x87\x02\xc9\x01\x30\x81\x89\x02\xc8"
  "\x01\x2e\x81\x89\x02\xc7\x01\x2c\x81\x87\x02\xc6\x01\x2a\x81\x85"
  "\x02\xc5\x01\x28\x81\x8b\x02\xc4\x01\x26\x81\x87\x02\xc3\x01\x24"
  "\x81\x85\x02\xc2\x01\x22\x81\x83\x02\xc1\x01\x20\x81\x83\x02\xc0"
  "\x01\x1e\x81\x8b\x02\xbf\x01\x1c\x81\x89\x02\xbe\x01\x1a\x81\x87"
  "\x02\xbd\x01\x18\x81\x89\x02\xbc\x01\x16\x81\x89\x02\xbb\x01\x14"
  "\x81\x85\x02\xba\x01\x12\x81\x83\x02\xb9\x01\x10\x81\x81\x02\xb8"
  "\x01\x0e\x81\x83\x02\xb7\x01\x0c\x81\x83\x02\xb6\x01\x0a\x81\x83"
  "\x02\xb5\x01\x08\x81\x81\x02\xb4\x01\x06\x82\x02\xb3\x01\x04\x83"
  "\x04\x39\x6a\x04\x16\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x64\x75"
  "\x6d\x70\x2d\x63\x2d\x65\x6e\x75\x6d\x73\x0a\x04\x16\x73\x74\x61"
  "\x63\x6b\x69\x66\x79\x2f\x73\x65\x74\x75\x70\x2d\x64\x65\x62\x75"
  "\x67\x21\x09\x04\x20\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x66\x61"
  "\x73\x74\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x70\x63"
  "\x6f\x64\x65\x73\x1c\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x66\x61"
  "\x73\x74\x2d\x73\x74\x6f\x72\x65\x2d\x6f\x70\x63\x6f\x64\x65\x73"
  "\x1d\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x66\x61\x73\x74\x2d\x6c"
  "\x6f\x6f\x6b\x75\x70\x2d\x6f\x70\x63\x6f\x64\x65\x73\x1d\x73\x74"
  "\x61\x63\x6b\x69\x66\x79\x2f\x66\x61\x73\x74\x2d\x72\x65\x63\x6f"
  "\x72\x64\x2d\x6f\x70\x63\x6f\x64\x65\x73\x21\x73\x74\x61\x63\x6b"
  "\x69\x66\x79\x2f\x66\x61\x73\x74\x2d\x72\x65\x63\x6f\x72\x64\x2d"
  "\x73\x65\x74\x2d\x6f\x70\x63\x6f\x64\x65\x73\x1d\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2f\x66\x61\x73\x74\x2d\x76\x65\x63\x74\x6f\x72"
  "\x2d\x6f\x70\x63\x6f\x64\x65\x73\x21\x73\x74\x61\x63\x6b\x69\x66"
  "\x79\x2f\x66\x61\x73\x74\x2d\x76\x65\x63\x74\x6f\x72\x2d\x73\x65"
  "\x74\x2d\x6f\x70\x63\x6f\x64\x65\x73\x1c\x73\x74\x61\x63\x6b\x69"
  "\x66\x79\x2f\x66\x61\x73\x74\x2d\x63\x6f\x6e\x73\x2a\x2d\x6f\x70"
  "\x63\x6f\x64\x65\x73\x1d\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x66"
  "\x61\x73\x74\x2d\x66\x69\x78\x6e\x75\x6d\x2d\x6f\x70\x63\x6f\x64"
  "\x65\x73\x21\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f"
  "\x64\x65\x2f\x70\x75\x73\x68\x2d\x70\x72\x69\x6d\x69\x74\x69\x76"
  "\x65\x2d\x37\x0a\xc8\x01\x21\x73\x74\x61\x63\x6b\x69\x66\x79\x2d"
  "\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x70\x72\x69\x6d"
  "\x69\x74\x69\x76\x65\x2d\x36\x09\xc7\x01\x21\x73\x74\x61\x63\x6b"
  "\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d"
  "\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x35\xc6\x01\x21\x73\x74"
  "\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75"
  "\x73\x68\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x34\xc5\x01"
  "\x21\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65"
  "\x2f\x70\x75\x73\x68\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d"
  "\x33\xc4\x01\x21\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63"
  "\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x70\x72\x69\x6d\x69\x74\x69"
  "\x76\x65\x2d\x32\xc3\x01\x21\x73\x74\x61\x63\x6b\x69\x66\x79\x2d"
  "\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x70\x72\x69\x6d"
  "\x69\x74\x69\x76\x65\x2d\x31\xc2\x01\x21\x73\x74\x61\x63\x6b\x69"
  "\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x70"
  "\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x30\xc1\x01\x18\x73\x74\x61"
  "\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x73\x74\x6f"
  "\x72\x65\x2d\x37\xc0\x01\x18\x73\x74\x61\x63\x6b\x69\x66\x79\x2d"
  "\x6f\x70\x63\x6f\x64\x65\x2f\x73\x74\x6f\x72\x65\x2d\x36\x0b\xbf"
  "\x01\x18\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64"
  "\x65\x2f\x73\x74\x6f\x72\x65\x2d\x35\x0c\xbe\x01\x18\x73\x74\x61"
  "\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x73\x74\x6f"
  "\x72\x65\x2d\x34\x0d\xbd\x01\x18\x73\x74\x61\x63\x6b\x69\x66\x79"
  "\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x73\x74\x6f\x72\x65\x2d\x33\x0e"
  "\xbc\x01\x18\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f"
  "\x64\x65\x2f\x73\x74\x6f\x72\x65\x2d\x32\x0f\xbb\x01\x18\x73\x74"
  "\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x73\x74"
  "\x6f\x72\x65\x2d\x31\x10\xba\x01\x18\x73\x74\x61\x63\x6b\x69\x66"
  "\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x73\x74\x6f\x72\x65\x2d\x30"
  "\x11\xb9\x01\x1e\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63"
  "\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x6c\x6f\x6f\x6b\x75\x70\x2d"
  "\x37\x12\xb8\x01\x1e\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70"
  "\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x6c\x6f\x6f\x6b\x75\x70"
  "\x2d\x36\x13\xb7\x01\x1e\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f"
  "\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x6c\x6f\x6f\x6b\x75"
  "\x70\x2d\x35\x14\xb6\x01\x1e\x73\x74\x61\x63\x6b\x69\x66\x79\x2d"
  "\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x6c\x6f\x6f\x6b"
  "\x75\x70\x2d\x34\x15\xb5\x01\x1e\x73\x74\x61\x63\x6b\x69\x66\x79"
  "\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x6c\x6f\x6f"
  "\x6b\x75\x70\x2d\x33\x16\xb4\x01\x1e\x73\x74\x61\x63\x6b\x69\x66"
  "\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x6c\x6f"
  "\x6f\x6b\x75\x70\x2d\x32\x17\xb3\x01\x1e\x73\x74\x61\x63\x6b\x69"
  "\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x6c"
  "\x6f\x6f\x6b\x75\x70\x2d\x31\x18\xb2\x01\x1e\x73\x74\x61\x63\x6b"
  "\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d"
  "\x6c\x6f\x6f\x6b\x75\x70\x2d\x30\x19\xb1\x01\x1e\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68"
  "\x2d\x72\x65\x63\x6f\x72\x64\x2d\x38\x1a\xb0\x01\x1e\x73\x74\x61"
  "\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73"
  "\x68\x2d\x72\x65\x63\x6f\x72\x64\x2d\x37\x1b\xaf\x01\x1e\x73\x74"
  "\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75"
  "\x73\x68\x2d\x72\x65\x63\x6f\x72\x64\x2d\x36\x1c\xae\x01\x1e\x73"
  "\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70"
  "\x75\x73\x68\x2d\x72\x65\x63\x6f\x72\x64\x2d\x35\x1d\xad\x01\x1e"
  "\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f"
  "\x70\x75\x73\x68\x2d\x72\x65\x63\x6f\x72\x64\x2d\x34\x1e\xac\x01"
  "\x1e\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65"
  "\x2f\x70\x75\x73\x68\x2d\x72\x65\x63\x6f\x72\x64\x2d\x33\x1f\xab"
  "\x01\x1e\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64"
  "\x65\x2f\x70\x75\x73\x68\x2d\x72\x65\x63\x6f\x72\x64\x2d\x32\x20"
  "\xaa\x01\x1e\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f"
  "\x64\x65\x2f\x70\x75\x73\x68\x2d\x72\x65\x63\x6f\x72\x64\x2d\x31"
  "\x21\xa9\x01\x25\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63"
  "\x6f\x64\x65\x2f\x70\x6f\x70\x2d\x61\x6e\x64\x2d\x72\x65\x63\x6f"
  "\x72\x64\x2d\x73\x65\x74\x2d\x37\x22\xa8\x01\x25\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x6f\x70\x2d"
  "\x61\x6e\x64\x2d\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x2d\x36"
  "\x23\xa7\x01\x25\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63"
  "\x6f\x64\x65\x2f\x70\x6f\x70\x2d\x61\x6e\x64\x2d\x72\x65\x63\x6f"
  "\x72\x64\x2d\x73\x65\x74\x2d\x35\x24\xa6\x01\x25\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x6f\x70\x2d"
  "\x61\x6e\x64\x2d\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x2d\x34"
  "\x25\xa5\x01\x25\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63"
  "\x6f\x64\x65\x2f\x70\x6f\x70\x2d\x61\x6e\x64\x2d\x72\x65\x63\x6f"
  "\x72\x64\x2d\x73\x65\x74\x2d\x33\x26\xa4\x01\x25\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x6f\x70\x2d"
  "\x61\x6e\x64\x2d\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x2d\x32"
  "\x27\xa3\x01\x25\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63"
  "\x6f\x64\x65\x2f\x70\x6f\x70\x2d\x61\x6e\x64\x2d\x72\x65\x63\x6f"
  "\x72\x64\x2d\x73\x65\x74\x2d\x31\x28\xa2\x01\x25\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x6f\x70\x2d"
  "\x61\x6e\x64\x2d\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x2d\x30"
  "\x29\xa1\x01\x1e\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63"
  "\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x76\x65\x63\x74\x6f\x72\x2d"
  "\x38\x2a\xa0\x01\x1e\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70"
  "\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x76\x65\x63\x74\x6f\x72"
  "\x2d\x37\x2b\x9f\x01\x1e\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f"
  "\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x76\x65\x63\x74\x6f"
  "\x72\x2d\x36\x2c\x9e\x01\x1e\x73\x74\x61\x63\x6b\x69\x66\x79\x2d"
  "\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x76\x65\x63\x74"
  "\x6f\x72\x2d\x35\x2d\x9d\x01\x1e\x73\x74\x61\x63\x6b\x69\x66\x79"
  "\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x76\x65\x63"
  "\x74\x6f\x72\x2d\x34\x2e\x9c\x01\x1e\x73\x74\x61\x63\x6b\x69\x66"
  "\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x76\x65"
  "\x63\x74\x6f\x72\x2d\x33\x2f\x9b\x01\x1e\x73\x74\x61\x63\x6b\x69"
  "\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x76"
  "\x65\x63\x74\x6f\x72\x2d\x32\x30\x9a\x01\x1e\x73\x74\x61\x63\x6b"
  "\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d"
  "\x76\x65\x63\x74\x6f\x72\x2d\x31\x31\x99\x01\x25\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x6f\x70\x2d"
  "\x61\x6e\x64\x2d\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x2d\x37"
  "\x32\x98\x01\x25\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63"
  "\x6f\x64\x65\x2f\x70\x6f\x70\x2d\x61\x6e\x64\x2d\x76\x65\x63\x74"
  "\x6f\x72\x2d\x73\x65\x74\x2d\x36\x33\x97\x01\x25\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x6f\x70\x2d"
  "\x61\x6e\x64\x2d\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x2d\x35"
  "\x34\x96\x01\x25\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63"
  "\x6f\x64\x65\x2f\x70\x6f\x70\x2d\x61\x6e\x64\x2d\x76\x65\x63\x74"
  "\x6f\x72\x2d\x73\x65\x74\x2d\x34\x35\x95\x01\x25\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x6f\x70\x2d"
  "\x61\x6e\x64\x2d\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x2d\x33"
  "\x36\x94\x01\x25\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63"
  "\x6f\x64\x65\x2f\x70\x6f\x70\x2d\x61\x6e\x64\x2d\x76\x65\x63\x74"
  "\x6f\x72\x2d\x73\x65\x74\x2d\x32\x37\x93\x01\x25\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x6f\x70\x2d"
  "\x61\x6e\x64\x2d\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x2d\x31"
  "\x38\x92\x01\x25\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63"
  "\x6f\x64\x65\x2f\x70\x6f\x70\x2d\x61\x6e\x64\x2d\x76\x65\x63\x74"
  "\x6f\x72\x2d\x73\x65\x74\x2d\x30\x39\x91\x01\x1d\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68"
  "\x2d\x63\x6f\x6e\x73\x2a\x2d\x37\x3a\x90\x01\x1d\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68"
  "\x2d\x63\x6f\x6e\x73\x2a\x2d\x36\x3b\x8f\x01\x1d\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68"
  "\x2d\x63\x6f\x6e\x73\x2a\x2d\x35\x3c\x8e\x01\x1d\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68"
  "\x2d\x63\x6f\x6e\x73\x2a\x2d\x34\x3d\x8d\x01\x1d\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68"
  "\x2d\x63\x6f\x6e\x73\x2a\x2d\x33\x3e\x8c\x01\x1d\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68"
  "\x2d\x63\x6f\x6e\x73\x2a\x2d\x32\x3f\x8b\x01\x1d\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68"
  "\x2d\x63\x6f\x6e\x73\x2a\x2d\x31\x40\x8a\x01\x1d\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68"
  "\x2d\x63\x6f\x6e\x73\x2a\x2d\x30\x41\x89\x01\x18\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68"
  "\x2d\x2d\x31\x42\x88\x01\x17\x73\x74\x61\x63\x6b\x69\x66\x79\x2d"
  "\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x36\x43\x87\x01"
  "\x17\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65"
  "\x2f\x70\x75\x73\x68\x2d\x35\x44\x86\x01\x17\x73\x74\x61\x63\x6b"
  "\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d"
  "\x34\x45\x85\x01\x17\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70"
  "\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x33\x46\x84\x01\x17\x73"
  "\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70"
  "\x75\x73\x68\x2d\x32\x47\x83\x01\x17\x73\x74\x61\x63\x6b\x69\x66"
  "\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x31\x48"
  "\x82\x01\x17\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f"
  "\x64\x65\x2f\x70\x75\x73\x68\x2d\x30\x49\x81\x01\x21\x73\x74\x61"
  "\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73"
  "\x68\x2d\x72\x65\x74\x75\x72\x6e\x2d\x63\x6f\x64\x65\x4a\x2d\x1f"
  "\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f"
  "\x72\x65\x74\x61\x67\x2d\x63\x63\x2d\x62\x6c\x6f\x63\x6b\x4b\x2c"
  "\x22\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65"
  "\x2f\x63\x63\x2d\x62\x6c\x6f\x63\x6b\x2d\x74\x6f\x2d\x65\x6e\x74"
  "\x72\x79\x4c\x2b\x26\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70"
  "\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x6c\x61\x62\x65\x6c\x2d"
  "\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x4d\x2a\x1b\x73\x74\x61"
  "\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73"
  "\x68\x2d\x75\x6c\x6f\x6e\x67\x4e\x29\x2c\x73\x74\x61\x63\x6b\x69"
  "\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x6c"
  "\x69\x6e\x6b\x61\x67\x65\x2d\x68\x65\x61\x64\x65\x72\x2d\x63\x6c"
  "\x6f\x73\x75\x72\x65\x4f\x28\x2b\x73\x74\x61\x63\x6b\x69\x66\x79"
  "\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x6c\x69\x6e"
  "\x6b\x61\x67\x65\x2d\x68\x65\x61\x64\x65\x72\x2d\x67\x6c\x6f\x62"
  "\x61\x6c\x50\x27\x2f\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70"
  "\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x6c\x69\x6e\x6b\x61\x67"
  "\x65\x2d\x68\x65\x61\x64\x65\x72\x2d\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x51\x26\x2e\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f"
  "\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x6c\x69\x6e\x6b\x61"
  "\x67\x65\x2d\x68\x65\x61\x64\x65\x72\x2d\x72\x65\x66\x65\x72\x65"
  "\x6e\x63\x65\x52\x25\x2d\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f"
  "\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x6c\x69\x6e\x6b\x61"
  "\x67\x65\x2d\x68\x65\x61\x64\x65\x72\x2d\x6f\x70\x65\x72\x61\x74"
  "\x6f\x72\x53\x24\x21\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70"
  "\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x6c\x61\x62\x65\x6c\x2d"
  "\x65\x6e\x74\x72\x79\x54\x23\x1f\x73\x74\x61\x63\x6b\x69\x66\x79"
  "\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x6e\x6d\x2d"
  "\x68\x65\x61\x64\x65\x72\x55\x22\x25\x73\x74\x61\x63\x6b\x69\x66"
  "\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x6c\x65\x78\x70\x72\x56\x21\x1f"
  "\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f"
  "\x70\x75\x73\x68\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x57\x20"
  "\x20\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65"
  "\x2f\x70\x75\x73\x68\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64"
  "\x58\x1f\x1e\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f"
  "\x64\x65\x2f\x70\x75\x73\x68\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74"
  "\x59\x1e\x16\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f"
  "\x64\x65\x2f\x73\x74\x6f\x72\x65\x5a\x1d\x1c\x73\x74\x61\x63\x6b"
  "\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d"
  "\x6c\x6f\x6f\x6b\x75\x70\x5b\x1c\x1c\x73\x74\x61\x63\x6b\x69\x66"
  "\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x72\x65"
  "\x63\x6f\x72\x64\x5c\x1b\x23\x73\x74\x61\x63\x6b\x69\x66\x79\x2d"
  "\x6f\x70\x63\x6f\x64\x65\x2f\x70\x6f\x70\x2d\x61\x6e\x64\x2d\x72"
  "\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x5d\x1a\x22\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68"
  "\x2d\x65\x6d\x70\x74\x79\x2d\x72\x65\x63\x6f\x72\x64\x5e\x19\x1c"
  "\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f"
  "\x70\x75\x73\x68\x2d\x76\x65\x63\x74\x6f\x72\x5f\x18\x23\x73\x74"
  "\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x6f"
  "\x70\x2d\x61\x6e\x64\x2d\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74"
  "\x60\x17\x22\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f"
  "\x64\x65\x2f\x70\x75\x73\x68\x2d\x65\x6d\x70\x74\x79\x2d\x76\x65"
  "\x63\x74\x6f\x72\x61\x16\x1b\x73\x74\x61\x63\x6b\x69\x66\x79\x2d"
  "\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x63\x6f\x6e\x73"
  "\x2a\x62\x15\x20\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63"
  "\x6f\x64\x65\x2f\x70\x6f\x70\x2d\x61\x6e\x64\x2d\x73\x65\x74\x2d"
  "\x63\x64\x72\x63\x14\x20\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f"
  "\x70\x63\x6f\x64\x65\x2f\x70\x6f\x70\x2d\x61\x6e\x64\x2d\x73\x65"
  "\x74\x2d\x63\x61\x72\x64\x13\x20\x73\x74\x61\x63\x6b\x69\x66\x79"
  "\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x65\x6d\x70"
  "\x74\x79\x2d\x63\x6f\x6e\x73\x65\x12\x20\x73\x74\x61\x63\x6b\x69"
  "\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x62"
  "\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x66\x11\x1a\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68"
  "\x2d\x63\x68\x61\x72\x67\x10\x27\x73\x74\x61\x63\x6b\x69\x66\x79"
  "\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x75\x6e\x69"
  "\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x68\x0f"
  "\x1c\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65"
  "\x2f\x70\x75\x73\x68\x2d\x73\x79\x6d\x62\x6f\x6c\x69\x0e\x1c\x73"
  "\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70"
  "\x75\x73\x68\x2d\x73\x74\x72\x69\x6e\x67\x6a\x0d\x21\x73\x74\x61"
  "\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73"
  "\x68\x2d\x63\x6f\x6e\x73\x2d\x72\x65\x63\x6e\x75\x6d\x6b\x0c\x21"
  "\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f"
  "\x70\x75\x73\x68\x2d\x63\x6f\x6e\x73\x2d\x72\x61\x74\x6e\x75\x6d"
  "\x6c\x0b\x1c\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f"
  "\x64\x65\x2f\x70\x75\x73\x68\x2d\x66\x6c\x6f\x6e\x75\x6d\x6d\x0a"
  "\x19\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65"
  "\x2f\x70\x75\x73\x68\x2d\x6e\x69\x6c\x6e\x09\x1a\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68"
  "\x2d\x74\x72\x75\x65\x6f\x08\x1b\x73\x74\x61\x63\x6b\x69\x66\x79"
  "\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x66\x61\x6c"
  "\x73\x65\x70\x1e\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63"
  "\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x2d\x69\x6e\x74\x65\x67\x65"
  "\x72\x71\x1e\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f"
  "\x64\x65\x2f\x70\x75\x73\x68\x2d\x2b\x69\x6e\x74\x65\x67\x65\x72"
  "\x72\x1d\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64"
  "\x65\x2f\x70\x75\x73\x68\x2d\x2d\x66\x69\x78\x6e\x75\x6d\x73\x1d"
  "\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f"
  "\x70\x75\x73\x68\x2d\x2b\x66\x69\x78\x6e\x75\x6d\x74\x17\x73\x74"
  "\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x65\x73"
  "\x63\x61\x70\x65\x75\x18\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f"
  "\x70\x63\x6f\x64\x65\x2f\x69\x6c\x6c\x65\x67\x61\x6c\x76\x76\x0a"
  "\xc8\x01\x09\xc7\x01\xc6\x01\xc5\x01\xc4\x01\xc3\x01\xc2\x01\xc1"
  "\x01\xc0\x01\x0b\xbf\x01\x0c\xbe\x01\x0d\xbd\x01\x0e\xbc\x01\x0f"
  "\xbb\x01\x10\xba\x01\x11\xb9\x01\x12\xb8\x01\x13\xb7\x01\x14\xb6"
  "\x01\x15\xb5\x01\x16\xb4\x01\x17\xb3\x01\x18\xb2\x01\x19\xb1\x01"
  "\x1a\xb0\x01\x1b\xaf\x01\x1c\xae\x01\x1d\xad\x01\x1e\xac\x01\x1f"
  "\xab\x01\x20\xaa\x01\x21\xa9\x01\x22\xa8\x01\x23\xa7\x01\x24\xa6"
  "\x01\x25\xa5\x01\x26\xa4\x01\x27\xa3\x01\x28\xa2\x01\x29\xa1\x01"
  "\x2a\xa0\x01\x2b\x9f\x01\x2c\x9e\x01\x2d\x9d\x01\x2e\x9c\x01\x2f"
  "\x9b\x01\x30\x9a\x01\x31\x99\x01\x32\x98\x01\x33\x97\x01\x34\x96"
  "\x01\x35\x95\x01\x36\x94\x01\x37\x93\x01\x38\x92\x01\x39\x91\x01"
  "\x3a\x90\x01\x3b\x8f\x01\x3c\x8e\x01\x3d\x8d\x01\x3e\x8c\x01\x3f"
  "\x8b\x01\x40\x8a\x01\x41\x89\x01\x42\x88\x01\x43\x87\x01\x44\x86"
  "\x01\x45\x85\x01\x46\x84\x01\x47\x83\x01\x48\x82\x01\x49\x81\x01"
  "\x4a\x2d\x4b\x2c\x4c\x2b\x4d\x2a\x4e\x29\x4f\x28\x50\x27\x51\x26"
  "\x52\x25\x53\x24\x54\x23\x55\x22\x56\x21\x57\x20\x58\x1f\x59\x1e"
  "\x5a\x1d\x5b\x1c\x5c\x1b\x5d\x1a\x5e\x19\x5f\x18\x60\x17\x61\x16"
  "\x62\x15\x63\x14\x64\x13\x65\x12\x66\x11\x67\x68\x0f\x69\x0e\x6a"
  "\x0d\x6b\x0c\x6c\x0b\x6d\x0a\x6e\x09\x6f\x08\x70\x71\x72\x73\x74"
  "\x75\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x33\x10\x13\x64\x65"
  "\x66\x69\x6e\x65\x2d\x65\x6e\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e"
  "\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x76\x04\x04\x1f\x73\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72"
  "\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e"
  "\x64\x65\x72\x02\x88\x01\x92\x02\x80\x80\x04\x87\x01\x90\x02\x81"
  "\x81\x02\x86\x01\x8e\x02\x81\x81\x02\x85\x01\x8c\x02\x81\x83\x02"
  "\x84\x01\x8a\x02\x81\x83\x02\x83\x01\x88\x02\x81\x83\x02\x82\x01"
  "\x86\x02\x81\x83\x02\x81\x01\x84\x02\x81\x83\x02\x80\x01\x82\x02"
  "\x81\x83\x02\x7f\x80\x02\x81\x83\x02\x7e\xfe\x01\x81\x83\x02\x7d"
  "\xfc\x01\x81\x83\x02\x7c\xfa\x01\x81\x83\x02\x7b\xf8\x01\x81\x83"
  "\x02\x7a\xf6\x01\x81\x83\x02\x79\xf4\x01\x81\x83\x02\x78\xf2\x01"
  "\x81\x83\x02\x77\xf0\x01\x81\x83\x02\x76\xee\x01\x81\x83\x02\x75"
  "\xec\x01\x81\x83\x02\x74\xea\x01\x81\x83\x02\x73\xe8\x01\x81\x83"
  "\x02\x72\xe6\x01\x81\x83\x02\x71\xe4\x01\x81\x83\x02\x70\xe2\x01"
  "\x81\x83\x02\x6f\xe0\x01\x81\x83\x02\x6e\xde\x01\x81\x83\x02\x6d"
  "\xdc\x01\x81\x83\x02\x6c\xda\x01\x81\x83\x02\x6b\xd8\x01\x81\x83"
  "\x02\x6a\xd6\x01\x81\x83\x02\x69\xd4\x01\x81\x83\x02\x68\xd2\x01"
  "\x81\x83\x02\x67\xd0\x01\x81\x83\x02\x66\xce\x01\x81\x83\x02\x65"
  "\xcc\x01\x81\x83\x02\x64\xca\x01\x81\x83\x02\x63\xc8\x01\x81\x83"
  "\x02\x62\xc6\x01\x81\x83\x02\x61\xc4\x01\x81\x83\x02\x60\xc2\x01"
  "\x81\x83\x02\x5f\xc0\x01\x81\x83\x02\x5e\xbe\x01\x81\x83\x02\x5d"
  "\xbc\x01\x81\x83\x02\x5c\xba\x01\x81\x83\x02\x5b\xb8\x01\x81\x83"
  "\x02\x5a\xb6\x01\x81\x83\x02\x59\xb4\x01\x81\x83\x02\x58\xb2\x01"
  "\x81\x83\x02\x57\xb0\x01\x81\x83\x02\x56\xae\x01\x81\x83\x02\x55"
  "\xac\x01\x81\x83\x02\x54\xaa\x01\x81\x83\x02\x53\xa8\x01\x81\x83"
  "\x02\x52\xa6\x01\x81\x83\x02\x51\xa4\x01\x81\x83\x02\x50\xa2\x01"
  "\x81\x83\x02\x4f\xa0\x01\x81\x83\x02\x4e\x9e\x01\x81\x83\x02\x4d"
  "\x9c\x01\x81\x83\x02\x4c\x9a\x01\x81\x83\x02\x4b\x98\x01\x81\x83"
  "\x02\x4a\x96\x01\x81\x83\x02\x49\x94\x01\x81\x83\x02\x48\x92\x01"
  "\x81\x83\x02\x47\x90\x01\x81\x83\x02\x46\x8e\x01\x81\x83\x02\x45"
  "\x8c\x01\x81\x83\x02\x44\x8a\x01\x81\x83\x02\x43\x88\x01\x81\x83"
  "\x02\x42\x86\x01\x81\x83\x02\x41\x84\x01\x81\x83\x02\x40\x82\x01"
  "\x81\x83\x02\x3f\x80\x01\x81\x83\x02\x3e\x7e\x81\x83\x02\x3d\x7c"
  "\x81\x83\x02\x3c\x7a\x81\x83\x02\x3b\x78\x81\x83\x02\x3a\x76\x81"
  "\x83\x02\x39\x74\x81\x83\x02\x38\x72\x81\x83\x02\x37\x70\x81\x83"
  "\x02\x36\x6e\x81\x83\x02\x35\x6c\x81\x83\x02\x34\x6a\x81\x83\x02"
  "\x33\x68\x81\x83\x02\x32\x66\x81\x83\x02\x31\x64\x81\x83\x02\x30"
  "\x62\x81\x83\x02\x2f\x60\x81\x83\x02\x2e\x5e\x81\x83\x02\x2d\x5c"
  "\x81\x83\x02\x2c\x5a\x81\x83\x02\x2b\x58\x81\x83\x02\x2a\x56\x81"
  "\x83\x02\x29\x54\x81\x83\x02\x28\x52\x81\x83\x02\x27\x50\x81\x83"
  "\x02\x26\x4e\x81\x83\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x83\x02"
  "\x23\x48\x81\x83\x02\x22\x46\x81\x83\x02\x21\x44\x81\x83\x02\x20"
  "\x42\x81\x83\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x83\x02\x1d\x3c"
  "\x81\x83\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x83\x02\x1a\x36\x81"
  "\x83\x02\x19\x34\x81\x83\x02\x18\x32\x81\x83\x02\x17\x30\x81\x83"
  "\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x83\x02\x14\x2a\x81\x83\x02"
  "\x13\x28\x81\x83\x02\x12\x26\x81\x83\x02\x11\x24\x81\x83\x02\x10"
  "\x22\x81\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x83\x02\x0d\x1c"
  "\x81\x83\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x83\x02\x0a\x16\x81"
  "\x83\x02\x09\x14\x81\x83\x02\x08\x12\x81\x83\x02\x07\x10\x81\x83"
  "\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x83\x02"
  "\x03\x08\x81\x87\x02\x02\x06\x81\x85\x02\x01\x04\x81\x83\x02\x91"
  "\x02\x9a\x04";

SCHEME_OBJECT *
stackops_so_data_66cafa2d6080c680 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_stackops_so_data_66cafa2d6080c680 [0]))), (sizeof (prog_stackops_so_data_66cafa2d6080c680)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_140]));
}

DECLARE_COMPILED_DATA_NS ("stackops.so", stackops_so_data_66cafa2d6080c680)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("stackops.so", "0d14ca5997e0c78f")
