/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:15-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_8 9
#define LABEL_1_9 11
#define LABEL_1_10 13
#define LABEL_1_12 15
#define LABEL_1_13 17
#define LABEL_1_15 19
#define LABEL_1_19 21
#define LABEL_1_16 23
#define LABEL_1_20 25
#define LABEL_1_11 27
#define LABEL_1_22 29
#define LABEL_1_23 31
#define LABEL_1_24 33
#define LABEL_1_25 35
#define LABEL_1_26 37
#define LABEL_1_21 39
#define LABEL_1_27 41
#define ENVIRONMENT_LABEL_1_3 69
#define DEBUGGING_LABEL_1_2 68
#define OBJECT_1_7 67
#define OBJECT_1_6 66
#define OBJECT_1_5 65
#define OBJECT_1_4 64
#define OBJECT_1_3 63
#define OBJECT_1_2 62
#define OBJECT_1_1 61
#define OBJECT_1_0 60
#define EXECUTE_CACHE_1_28 43
#define EXECUTE_CACHE_1_18 45
#define EXECUTE_CACHE_1_17 47
#define EXECUTE_CACHE_1_14 49
#define EXECUTE_CACHE_1_7 51
#define FREE_REFERENCE_1_5 54
#define FREE_REFERENCE_1_4 55
#define FREE_REFERENCE_1_3 56
#define FREE_REFERENCE_1_2 57
#define FREE_REFERENCE_1_1 58
#define FREE_REFERENCE_1_0 59
#define FREE_REFERENCES_LABEL_1_0 42
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd45;
  machine_word Wrd71;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd52;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd50;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd70;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      goto setup_block_typesB_16;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto loop_12;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_1_12);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_1_13);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_1_15);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_1_20);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_1_22);
      goto label_26;

    case 14:
      current_block = (Rpc - LABEL_1_23);
      goto label_25;

    case 15:
      current_block = (Rpc - LABEL_1_24);
      goto block_typeB_15;

    case 16:
      current_block = (Rpc - LABEL_1_25);
      goto label_28;

    case 17:
      current_block = (Rpc - LABEL_1_26);
      goto label_27;

    case 18:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_9;

    case 19:
      current_block = (Rpc - LABEL_1_27);
      goto label_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (setup_block_typesB_31)
DEFLABEL (setup_block_typesB_16)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto loop_12;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_36;
  Wrd5 = Wrd9;

DEFLABEL (label_35)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (label_34)
  Rvl = (current_block [OBJECT_1_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd6.pObj));

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_35;

DEFLABEL (loop_32)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_1_8);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_50;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_50;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_49)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_48;
  Wrd22 = Wrd26;

DEFLABEL (label_47)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_46;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_45;
  Wrd30 = Wrd34;

DEFLABEL (label_44)
  (Wrd36.Obj) = (Rsp [0]);
  if ((Wrd36.Obj) == (Wrd30.Obj))
    goto label_41;
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_40;
  Wrd38 = Wrd42;

DEFLABEL (label_39)
  (Wrd44.Obj) = (Rsp [0]);
  if ((Wrd44.Obj) == (Wrd38.Obj))
    goto label_37;
  (Wrd45.Obj) = (current_block [OBJECT_1_4]);
  (Rsp [0]) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (label_37)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_38)
  (Wrd71.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd71.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_15])), (Wrd39.pObj));

DEFLABEL (label_22)
  (Wrd38.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (Rsp [0]) = (Wrd50.Obj);
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 10))
    goto label_43;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd60.Lng))))
    goto label_43;
  (Wrd52.Obj) = ((Wrd58.pObj) [5]);

DEFLABEL (label_42)
  (Rsp [1]) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (label_43)
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.Obj) = (current_block [OBJECT_1_3]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_23)
  (Wrd52.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_12])), (Wrd31.pObj));

DEFLABEL (label_21)
  (Wrd30.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd70.Obj);
  goto label_38;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_10])), (Wrd23.pObj));

DEFLABEL (label_20)
  (Wrd22.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_1_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_16);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_53;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_19);

DEFLABEL (label_53)
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_52;
  Wrd9 = Wrd13;

DEFLABEL (label_51)
  (Rsp [1]) = (Wrd9.Obj);
  goto block_typeB_15;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_20])), (Wrd10.pObj));

DEFLABEL (label_24)
  (Wrd9.Obj) = Rvl;
  goto label_51;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_55;
  Wrd9 = Wrd13;

DEFLABEL (label_54)
  (Rsp [1]) = (Wrd9.Obj);
  goto block_typeB_15;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_23])), (Wrd10.pObj));

DEFLABEL (label_25)
  (Wrd9.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_56)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_5]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_60;
  Wrd18 = Wrd22;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  goto block_typeB_15;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_21);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_58;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_58;
  (Wrd5.Obj) = ((Wrd11.pObj) [8]);

DEFLABEL (label_57)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

DEFLABEL (label_58)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_1_7]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_29)
  (Wrd5.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_22])), (Wrd19.pObj));

DEFLABEL (label_26)
  (Wrd18.Obj) = Rvl;
  goto label_59;

DEFLABEL (block_typeB_33)
DEFLABEL (block_typeB_15)
  INTERRUPT_CHECK (26, LABEL_1_24);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_64;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd31.Lng))))
    goto label_64;
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd29.pObj) [3]) = (Wrd25.Obj);

DEFLABEL (label_63)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_62;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_62;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_61)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (Rsp [0]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (label_62)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_1_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (current_block [OBJECT_1_1]);
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_25]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_6]), 3);

DEFLABEL (label_28)
  goto label_63;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define LABEL_2_8 11
#define LABEL_2_11 13
#define LABEL_2_12 15
#define LABEL_2_13 17
#define LABEL_2_15 19
#define LABEL_2_18 21
#define LABEL_2_20 23
#define LABEL_2_21 25
#define LABEL_2_22 27
#define LABEL_2_23 29
#define LABEL_2_9 31
#define LABEL_2_16 33
#define LABEL_2_25 35
#define LABEL_2_28 37
#define TAG_2_29 17
#define ENVIRONMENT_LABEL_2_3 67
#define DEBUGGING_LABEL_2_2 66
#define OBJECT_2_5 65
#define OBJECT_2_4 64
#define OBJECT_2_3 63
#define OBJECT_2_2 62
#define OBJECT_2_1 61
#define OBJECT_2_0 60
#define EXECUTE_CACHE_2_30 39
#define EXECUTE_CACHE_2_27 41
#define EXECUTE_CACHE_2_26 43
#define EXECUTE_CACHE_2_24 45
#define EXECUTE_CACHE_2_19 47
#define EXECUTE_CACHE_2_17 49
#define EXECUTE_CACHE_2_14 51
#define EXECUTE_CACHE_2_10 53
#define FREE_REFERENCE_2_3 56
#define FREE_REFERENCE_2_2 57
#define FREE_REFERENCE_2_1 58
#define FREE_REFERENCE_2_0 59
#define FREE_REFERENCES_LABEL_2_0 38
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd57;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd66;
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
      current_block = (Rpc - LABEL_2_4);
      goto merge_closure_blocksB_23;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto loop_19;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_2_8);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_2_15);
      goto examine_children_22;

    case 9:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_2_20);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_2_21);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_2_22);
      goto label_31;

    case 13:
      current_block = (Rpc - LABEL_2_23);
      goto label_32;

    case 14:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_21;

    case 16:
      current_block = (Rpc - LABEL_2_25);
      goto continuation_14;

    case 17:
      current_block = (Rpc - LABEL_2_28);
      goto lambda_37;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (merge_closure_blocksB_34)
DEFLABEL (merge_closure_blocksB_23)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  goto loop_19;

DEFLABEL (loop_35)
DEFLABEL (loop_19)
  INTERRUPT_CHECK (26, LABEL_2_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_63;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_63;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_62)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_61;
  Wrd22 = Wrd26;

DEFLABEL (label_60)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_46;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_45;
  Wrd30 = Wrd34;

DEFLABEL (label_44)
  (Wrd36.Obj) = (Rsp [0]);
  if (! ((Wrd36.Obj) == (Wrd30.Obj)))
    goto label_39;

DEFLABEL (label_38)
  Rsp = (& (Rsp [1]));
  goto examine_children_22;

DEFLABEL (label_39)
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_43;
  Wrd38 = Wrd42;

DEFLABEL (label_42)
  (Wrd44.Obj) = (Rsp [0]);
  if ((Wrd44.Obj) == (Wrd38.Obj))
    goto label_38;
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_3]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_41;
  Wrd46 = Wrd50;

DEFLABEL (label_40)
  (Wrd52.Obj) = (Rsp [0]);
  if ((Wrd52.Obj) == (Wrd46.Obj))
    goto label_38;
  (Wrd53.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_2_3]);
  (Rsp [1]) = (Wrd54.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_13])), (Wrd47.pObj));

DEFLABEL (label_29)
  (Wrd46.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_12])), (Wrd39.pObj));

DEFLABEL (label_28)
  (Wrd38.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_11])), (Wrd31.pObj));

DEFLABEL (label_27)
  (Wrd30.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd66.Obj) = (Rsp [1]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 10))
    goto label_59;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd65.Lng))))
    goto label_59;
  (Wrd57.Obj) = ((Wrd63.pObj) [8]);

DEFLABEL (label_58)
  (Rsp [0]) = (Wrd57.Obj);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;

DEFLABEL (label_50)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_26]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_2_25);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  (Wrd8.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_48)
  (Wrd8.Obj) = (Rsp [3]);

DEFLABEL (label_47)
DEFLABEL (label_49)
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto examine_children_22;

DEFLABEL (label_51)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_57;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd30.Lng))))
    goto label_57;
  (Wrd24.Obj) = ((Wrd28.pObj) [4]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_56)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_55;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd46.Lng))))
    goto label_55;
  (Wrd38.Obj) = ((Wrd44.pObj) [17]);

DEFLABEL (label_54)
  (Wrd54.Obj) = (Rsp [0]);
  if (! ((Wrd54.Obj) == (Wrd38.Obj)))
    goto label_52;
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_24]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_2_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;

DEFLABEL (label_52)
  Rsp = (& (Rsp [2]));
  goto label_50;

DEFLABEL (label_53)
  (Wrd64.Obj) = (Rsp [4]);
  if ((Wrd64.Obj) == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Wrd66.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd66.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_19]));

DEFLABEL (label_55)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (current_block [OBJECT_2_5]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_32)
  (Wrd38.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (current_block [OBJECT_2_4]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd68.Obj) = (Rsp [1]);
  (Wrd69.Obj) = (current_block [OBJECT_2_2]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_30)
  (Wrd57.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_7])), (Wrd23.pObj));

DEFLABEL (label_26)
  (Wrd22.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_2_20);
  goto label_50;

DEFLABEL (examine_children_36)
DEFLABEL (examine_children_22)
  INTERRUPT_CHECK (26, LABEL_2_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_2_16);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_28])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_30]));

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_2_28);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  goto loop_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_9 7
#define LABEL_3_6 9
#define LABEL_3_12 11
#define LABEL_3_7 13
#define TAG_3_8 5
#define LABEL_3_13 15
#define LABEL_3_14 17
#define LABEL_3_15 19
#define ENVIRONMENT_LABEL_3_3 36
#define DEBUGGING_LABEL_3_2 35
#define OBJECT_3_7 34
#define OBJECT_3_6 33
#define OBJECT_3_5 32
#define OBJECT_3_4 31
#define OBJECT_3_3 30
#define OBJECT_3_2 29
#define OBJECT_3_1 28
#define OBJECT_3_0 27
#define EXECUTE_CACHE_3_11 21
#define EXECUTE_CACHE_3_10 23
#define FREE_REFERENCE_3_0 26
#define FREE_REFERENCES_LABEL_3_0 20
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd69;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd32;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd50;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_3_4);
      goto original_block_children_9;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_3_9);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_3_7);
      goto lambda_18;

    case 6:
      current_block = (Rpc - LABEL_3_13);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_3_14);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_3_15);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (original_block_children_17)
DEFLABEL (original_block_children_9)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_22;
  (Wrd7.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_21)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_7])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd26 = Wrd25;
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_20;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd36.Lng))))
    goto label_20;
  (Wrd30.Obj) = ((Wrd34.pObj) [5]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_19)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (label_20)
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd40.Obj) = (current_block [OBJECT_3_2]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_3_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_3_7);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_36;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_36;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_35)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_34;
  Wrd26 = Wrd30;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_32;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd40.Lng))))
    goto label_32;
  (Wrd32.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_31)
  (Wrd48.Obj) = (* (Rsp++));
  if ((Wrd32.Obj) == (Wrd48.Obj))
    goto label_28;

DEFLABEL (label_27)
  (Wrd50.Obj) = (current_block [OBJECT_3_6]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_26)
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [2]);
  if ((Wrd54.Obj) == (Wrd50.Obj))
    goto label_24;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_23;

DEFLABEL (label_24)
  Rvl = (current_block [OBJECT_3_7]);

DEFLABEL (label_23)
DEFLABEL (label_25)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd57.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (current_block [OBJECT_3_5]);
  (Rsp [1]) = (Wrd58.Obj);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd69.uLng) == 10)
    goto label_30;

DEFLABEL (label_29)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_30)
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd67.Lng))))
    goto label_29;
  (Wrd50.Obj) = ((Wrd65.pObj) [23]);
  Rsp = (& (Rsp [3]));
  goto label_26;

DEFLABEL (label_32)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (current_block [OBJECT_3_4]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_15)
  (Wrd32.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_14])), (Wrd27.pObj));

DEFLABEL (label_14)
  (Wrd26.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_3_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_12);
  (Wrd50.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define LABEL_4_9 11
#define LABEL_4_10 13
#define LABEL_4_11 15
#define LABEL_4_13 17
#define LABEL_4_23 19
#define LABEL_4_14 21
#define LABEL_4_25 23
#define LABEL_4_15 25
#define TAG_4_16 11
#define LABEL_4_17 27
#define LABEL_4_18 29
#define TAG_4_19 13
#define LABEL_4_20 31
#define LABEL_4_32 33
#define LABEL_4_21 35
#define TAG_4_22 16
#define LABEL_4_26 37
#define LABEL_4_35 39
#define LABEL_4_27 41
#define LABEL_4_29 43
#define LABEL_4_38 45
#define LABEL_4_39 47
#define LABEL_4_40 49
#define LABEL_4_31 51
#define LABEL_4_33 53
#define LABEL_4_43 55
#define LABEL_4_36 57
#define ENVIRONMENT_LABEL_4_3 99
#define DEBUGGING_LABEL_4_2 98
#define OBJECT_4_16 97
#define OBJECT_4_15 96
#define OBJECT_4_14 95
#define OBJECT_4_13 94
#define OBJECT_4_12 93
#define OBJECT_4_11 92
#define OBJECT_4_10 91
#define OBJECT_4_9 90
#define OBJECT_4_8 89
#define OBJECT_4_7 88
#define OBJECT_4_6 87
#define OBJECT_4_5 86
#define OBJECT_4_4 85
#define OBJECT_4_3 84
#define OBJECT_4_2 83
#define OBJECT_4_1 82
#define OBJECT_4_0 81
#define EXECUTE_CACHE_4_44 59
#define EXECUTE_CACHE_4_42 61
#define EXECUTE_CACHE_4_41 63
#define EXECUTE_CACHE_4_37 65
#define EXECUTE_CACHE_4_34 67
#define EXECUTE_CACHE_4_30 69
#define EXECUTE_CACHE_4_28 71
#define EXECUTE_CACHE_4_24 73
#define EXECUTE_CACHE_4_12 75
#define EXECUTE_CACHE_4_8 77
#define FREE_REFERENCE_4_0 80
#define FREE_REFERENCES_LABEL_4_0 58
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd40;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd7;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_4_4);
      goto maybe_close_procedureB_35;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_37;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_38;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_4_9);
      goto label_39;

    case 5:
      current_block = (Rpc - LABEL_4_10);
      goto label_40;

    case 6:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_4_13);
      goto label_42;

    case 8:
      current_block = (Rpc - LABEL_4_23);
      goto label_41;

    case 9:
      current_block = (Rpc - LABEL_4_14);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_4_25);
      goto label_43;

    case 11:
      current_block = (Rpc - LABEL_4_15);
      goto lambda_51;

    case 12:
      current_block = (Rpc - LABEL_4_17);
      goto continuation_21;

    case 13:
      current_block = (Rpc - LABEL_4_18);
      goto lambda_52;

    case 14:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_27;

    case 15:
      current_block = (Rpc - LABEL_4_32);
      goto label_44;

    case 16:
      current_block = (Rpc - LABEL_4_21);
      goto lambda_53;

    case 17:
      current_block = (Rpc - LABEL_4_26);
      goto continuation_32;

    case 18:
      current_block = (Rpc - LABEL_4_35);
      goto continuation_9;

    case 19:
      current_block = (Rpc - LABEL_4_27);
      goto continuation_8;

    case 20:
      current_block = (Rpc - LABEL_4_29);
      goto continuation_13;

    case 21:
      current_block = (Rpc - LABEL_4_38);
      goto label_45;

    case 22:
      current_block = (Rpc - LABEL_4_39);
      goto label_46;

    case 23:
      current_block = (Rpc - LABEL_4_40);
      goto label_47;

    case 24:
      current_block = (Rpc - LABEL_4_31);
      goto continuation_29;

    case 25:
      current_block = (Rpc - LABEL_4_33);
      goto continuation_23;

    case 26:
      current_block = (Rpc - LABEL_4_43);
      goto label_48;

    case 27:
      current_block = (Rpc - LABEL_4_36);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_close_procedureB_50)
DEFLABEL (maybe_close_procedureB_35)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_68;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd13.Lng))))
    goto label_68;
  (Wrd5.Obj) = ((Wrd11.pObj) [19]);

DEFLABEL (label_67)
  if ((Wrd5.Obj) == (current_block [OBJECT_4_2]))
    goto label_54;
  Rvl = (current_block [OBJECT_4_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_66;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd32.Lng))))
    goto label_66;
  (Wrd26.Obj) = ((Wrd30.pObj) [23]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_65)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_64;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_64;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_63)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_62;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_62;
  (Wrd23.Obj) = ((Wrd27.pObj) [4]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_61)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (Wrd5.Obj) = Rvl;
  (Wrd56.Obj) = (Rsp [4]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_60;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd55.Lng))))
    goto label_60;
  ((Wrd53.pObj) [19]) = Rvl;

DEFLABEL (label_59)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_15])));
  Rhp += 3;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd15 = Wrd10;
  (Wrd16.Obj) = (Rsp [5]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [4]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_18])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  ((Wrd21.pObj) [2]) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_4_7]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_21])));
  Rhp += 1;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  ((Wrd29.pObj) [2]) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_58;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd40.Lng))))
    goto label_58;
  (Wrd34.Obj) = ((Wrd38.pObj) [10]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_57)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_24]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_4_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_31]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [10]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_56;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd18.Lng))))
    goto label_56;
  (Wrd12.Obj) = ((Wrd16.pObj) [11]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_55)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_24]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_4_31);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_42]));

DEFLABEL (label_56)
  (Wrd21.Obj) = (Rsp [10]);
  (Wrd22.Obj) = (current_block [OBJECT_4_11]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_32]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd43.Obj) = (Rsp [8]);
  (Wrd44.Obj) = (current_block [OBJECT_4_8]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd58.Obj) = (Rsp [4]);
  (Wrd59.Obj) = (current_block [OBJECT_4_0]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 3);

DEFLABEL (label_42)
  goto label_59;

DEFLABEL (label_62)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_4_5]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_4_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_4_3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_4_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_37)
  (Wrd5.Obj) = Rvl;
  goto label_67;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_4_17);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_4_14);
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_72;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd21.Lng))))
    goto label_72;
  (Wrd15.Obj) = (current_block [OBJECT_4_9]);
  ((Wrd19.pObj) [18]) = (Wrd15.Obj);

DEFLABEL (label_71)
  (Wrd5.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_69;
  Rvl = (current_block [OBJECT_4_4]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_69)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_4_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  Rvl = (current_block [OBJECT_4_4]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_70)
  (Wrd9.Obj) = (current_block [OBJECT_4_12]);
  (Rsp [3]) = (Wrd9.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_34]));

DEFLABEL (label_72)
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.Obj) = (current_block [OBJECT_4_10]);
  (Wrd26.Obj) = (current_block [OBJECT_4_9]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 3);

DEFLABEL (label_43)
  goto label_71;

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_4_15);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_28]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_76;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_36]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_4_13]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_4_14]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_37]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_4_36);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_44]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_35);
  (Wrd18.Obj) = Rvl;

DEFLABEL (label_75)
  (Rsp [2]) = (Wrd18.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [2]);
  (Rsp [0]) = (Wrd19.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_4_15]);
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd35.uLng) == 10)
    goto label_74;

DEFLABEL (label_73)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 3);

DEFLABEL (label_74)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 21L) < ((unsigned long) (Wrd33.Lng))))
    goto label_73;
  ((Wrd31.pObj) [22]) = (Wrd18.Obj);
  Rvl = (current_block [OBJECT_4_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd15.Obj) = (Rsp [2]);
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_78;
  (Wrd18.Obj) = (current_block [OBJECT_4_14]);
  goto label_77;

DEFLABEL (label_78)
  (Wrd18.Obj) = (current_block [OBJECT_4_13]);

DEFLABEL (label_77)
DEFLABEL (label_79)
  Rsp = (& (Rsp [1]));
  goto label_75;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_4_18);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_30]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_4_29);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  Rvl = Rvl;

DEFLABEL (label_80)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_89;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_89;
  (Wrd9.Obj) = ((Wrd15.pObj) [10]);

DEFLABEL (label_88)
  (Rsp [0]) = (Wrd9.Obj);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_82;
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [2]);
  if ((Wrd9.Obj) == (Wrd30.Obj))
    goto label_87;
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_86;
  Wrd31 = Wrd35;

DEFLABEL (label_85)
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_84;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd45.Lng))))
    goto label_84;
  (Wrd37.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_83)
  (Wrd53.Obj) = (* (Rsp++));
  if (! ((Wrd37.Obj) == (Wrd53.Obj)))
    goto label_82;
  (Wrd56.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd56.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_41]));

DEFLABEL (label_82)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_80;

DEFLABEL (label_84)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.Obj) = (current_block [OBJECT_4_13]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_40]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_47)
  (Wrd37.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_39])), (Wrd32.pObj));

DEFLABEL (label_46)
  (Wrd31.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_87)
  Rvl = (current_block [OBJECT_4_2]);
  goto label_80;

DEFLABEL (label_89)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_4_8]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_38]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_45)
  (Wrd9.Obj) = Rvl;
  goto label_88;

DEFLABEL (lambda_53)
  CLOSURE_HEADER (LABEL_4_21);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_20;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_4_33);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_91;
  Rvl = Rvl;

DEFLABEL (label_90)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_91)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_93;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 20L) < ((unsigned long) (Wrd19.Lng))))
    goto label_93;
  (Wrd13.Obj) = (current_block [OBJECT_4_2]);
  ((Wrd17.pObj) [21]) = (Wrd13.Obj);

DEFLABEL (label_92)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_90;

DEFLABEL (label_93)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_4_16]);
  (Wrd24.Obj) = (current_block [OBJECT_4_2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_43]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 3);

DEFLABEL (label_48)
  goto label_92;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_6 5
#define LABEL_5_5 7
#define LABEL_5_8 9
#define LABEL_5_9 11
#define LABEL_5_10 13
#define LABEL_5_12 15
#define LABEL_5_16 17
#define LABEL_5_11 19
#define LABEL_5_13 21
#define TAG_5_14 9
#define LABEL_5_15 23
#define LABEL_5_19 25
#define LABEL_5_22 27
#define LABEL_5_23 29
#define LABEL_5_24 31
#define LABEL_5_25 33
#define LABEL_5_26 35
#define LABEL_5_29 37
#define LABEL_5_30 39
#define LABEL_5_31 41
#define LABEL_5_32 43
#define LABEL_5_27 45
#define ENVIRONMENT_LABEL_5_3 73
#define DEBUGGING_LABEL_5_2 72
#define OBJECT_5_7 71
#define OBJECT_5_6 70
#define OBJECT_5_5 69
#define OBJECT_5_4 68
#define OBJECT_5_3 67
#define OBJECT_5_2 66
#define OBJECT_5_1 65
#define OBJECT_5_0 64
#define EXECUTE_CACHE_5_33 47
#define EXECUTE_CACHE_5_28 49
#define EXECUTE_CACHE_5_21 51
#define EXECUTE_CACHE_5_20 53
#define EXECUTE_CACHE_5_18 55
#define EXECUTE_CACHE_5_17 57
#define EXECUTE_CACHE_5_7 59
#define FREE_REFERENCE_5_1 62
#define FREE_REFERENCE_5_0 63
#define FREE_REFERENCES_LABEL_5_0 46
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd56;
  machine_word Wrd64;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd80;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd86;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd73;
  machine_word Wrd74;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd57;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd65;
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
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_5_4);
      goto attempt_child_graft_27;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto label_29;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto label_30;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto label_31;

    case 5:
      current_block = (Rpc - LABEL_5_10);
      goto label_32;

    case 6:
      current_block = (Rpc - LABEL_5_12);
      goto label_33;

    case 7:
      current_block = (Rpc - LABEL_5_16);
      goto label_34;

    case 8:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_24;

    case 9:
      current_block = (Rpc - LABEL_5_13);
      goto lambda_45;

    case 10:
      current_block = (Rpc - LABEL_5_15);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_5_19);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_5_22);
      goto label_35;

    case 13:
      current_block = (Rpc - LABEL_5_23);
      goto label_36;

    case 14:
      current_block = (Rpc - LABEL_5_24);
      goto label_37;

    case 15:
      current_block = (Rpc - LABEL_5_25);
      goto label_38;

    case 16:
      current_block = (Rpc - LABEL_5_26);
      goto label_39;

    case 17:
      current_block = (Rpc - LABEL_5_29);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_5_30);
      goto label_40;

    case 19:
      current_block = (Rpc - LABEL_5_31);
      goto label_41;

    case 20:
      current_block = (Rpc - LABEL_5_32);
      goto label_42;

    case 21:
      current_block = (Rpc - LABEL_5_27);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (attempt_child_graft_44)
DEFLABEL (attempt_child_graft_27)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_59;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd16.Lng))))
    goto label_59;
  (Wrd10.Obj) = ((Wrd14.pObj) [23]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_58)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_46;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_57;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_57;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_56)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_55;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd31.Lng))))
    goto label_55;
  (Wrd23.Obj) = ((Wrd29.pObj) [4]);

DEFLABEL (label_54)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_53;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd45.Lng))))
    goto label_53;
  (Wrd39.Obj) = ((Wrd43.pObj) [17]);

DEFLABEL (label_52)
  (Rsp [1]) = (Wrd39.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd65.uLng) == 10))
    goto label_51;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd63.Lng))))
    goto label_51;
  (Wrd57.Obj) = ((Wrd61.pObj) [9]);
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_50)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd74.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_13])));
  Rhp += 2;
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd74.pObj)));
  Wrd77 = Wrd74;
  (Wrd78.Obj) = (Rsp [3]);
  ((Wrd77.pObj) [2]) = (Wrd78.Obj);
  (Wrd76.Obj) = (Rsp [0]);
  ((Wrd77.pObj) [3]) = (Wrd76.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd83.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd93.Obj) = (Rsp [5]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd94.uLng) == 10))
    goto label_49;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd91.Obj) = ((Wrd90.pObj) [0]);
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd92.Lng))))
    goto label_49;
  (Wrd86.Obj) = ((Wrd90.pObj) [9]);
  (* (--Rsp)) = (Wrd86.Obj);

DEFLABEL (label_48)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_21]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_5_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (label_47)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd95.Obj) = (Rsp [5]);
  (Wrd96.Obj) = (current_block [OBJECT_5_4]);
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd66.Obj) = (Rsp [2]);
  (Wrd67.Obj) = (current_block [OBJECT_5_4]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd48.Obj) = (current_block [OBJECT_5_3]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_32)
  (Wrd39.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_5_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_31)
  (Wrd23.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_5_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_5_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_5_13);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_19);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  Rvl = Rvl;

DEFLABEL (label_60)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_82;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_82;
  (Wrd9.Obj) = ((Wrd15.pObj) [10]);

DEFLABEL (label_81)
  (Rsp [0]) = (Wrd9.Obj);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_71;
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_80;
  Wrd27 = Wrd31;

DEFLABEL (label_79)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_78;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd41.Lng))))
    goto label_78;
  (Wrd33.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_77)
  (Wrd49.Obj) = (* (Rsp++));
  if ((Wrd33.Obj) == (Wrd49.Obj))
    goto label_76;
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_75;
  Wrd50 = Wrd54;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 10))
    goto label_73;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd64.Lng))))
    goto label_73;
  (Wrd56.Obj) = ((Wrd62.pObj) [1]);

DEFLABEL (label_72)
  (Wrd72.Obj) = (* (Rsp++));
  if (! ((Wrd56.Obj) == (Wrd72.Obj)))
    goto label_71;
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_27]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd78.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_28]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_5_27);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_29]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_33]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_5_29);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;

DEFLABEL (label_63)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_62)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_70;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd23.Lng))))
    goto label_70;
  (Wrd15.Obj) = ((Wrd21.pObj) [4]);

DEFLABEL (label_69)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_68;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd37.Lng))))
    goto label_68;
  (Wrd31.Obj) = ((Wrd35.pObj) [4]);

DEFLABEL (label_67)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_66;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd50.Lng))))
    goto label_66;
  (Wrd44.Obj) = ((Wrd48.pObj) [17]);

DEFLABEL (label_65)
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [2]);
  if (! ((Wrd44.Obj) == (Wrd60.Obj)))
    goto label_63;
  Rvl = (current_block [OBJECT_5_7]);
  goto label_62;

DEFLABEL (label_66)
  (Wrd53.Obj) = (current_block [OBJECT_5_3]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_32]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_42)
  (Wrd44.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd40.Obj) = (current_block [OBJECT_5_2]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_31]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_41)
  (Wrd31.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (current_block [OBJECT_5_2]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_30]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_40)
  (Wrd15.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_71)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_60;

DEFLABEL (label_73)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.Obj) = (current_block [OBJECT_5_6]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_26]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_39)
  (Wrd56.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_25])), (Wrd51.pObj));

DEFLABEL (label_38)
  (Wrd50.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_76)
  (Wrd80.Obj) = (Rsp [0]);
  (Wrd81.Obj) = (Rsp [1]);
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [2]);
  if (! ((Wrd80.Obj) == (Wrd83.Obj)))
    goto label_71;
  Rvl = (current_block [OBJECT_5_7]);
  goto label_60;

DEFLABEL (label_78)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.Obj) = (current_block [OBJECT_5_6]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_24]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_37)
  (Wrd33.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_23])), (Wrd28.pObj));

DEFLABEL (label_36)
  (Wrd27.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_5_5]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_35)
  (Wrd9.Obj) = Rvl;
  goto label_81;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_6 5
#define LABEL_6_5 7
#define LABEL_6_12 9
#define LABEL_6_13 11
#define LABEL_6_14 13
#define LABEL_6_15 15
#define LABEL_6_7 17
#define TAG_6_8 7
#define LABEL_6_17 19
#define LABEL_6_18 21
#define LABEL_6_19 23
#define LABEL_6_10 25
#define ENVIRONMENT_LABEL_6_3 48
#define DEBUGGING_LABEL_6_2 47
#define OBJECT_6_11 46
#define OBJECT_6_10 45
#define OBJECT_6_9 44
#define OBJECT_6_8 43
#define OBJECT_6_7 42
#define OBJECT_6_6 41
#define OBJECT_6_5 40
#define OBJECT_6_4 39
#define OBJECT_6_3 38
#define OBJECT_6_2 37
#define OBJECT_6_1 36
#define OBJECT_6_0 35
#define EXECUTE_CACHE_6_20 27
#define EXECUTE_CACHE_6_16 29
#define EXECUTE_CACHE_6_11 31
#define EXECUTE_CACHE_6_9 33
#define FREE_REFERENCES_LABEL_6_0 26
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd13;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd108;
  machine_word Wrd103;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd86;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd96;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd78;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_6_4);
      goto graft_childB_13;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_11;

    case 3:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_6_13);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_6_14);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_6_15);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_6_7);
      goto lambda_23;

    case 8:
      current_block = (Rpc - LABEL_6_17);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_6_18);
      goto label_17;

    case 10:
      current_block = (Rpc - LABEL_6_19);
      goto label_16;

    case 11:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graft_childB_22)
DEFLABEL (graft_childB_13)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_25;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 28L) < ((unsigned long) (Wrd16.Lng))))
    goto label_25;
  (Wrd10.Obj) = ((Wrd14.pObj) [29]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_24)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_7])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd26 = Wrd25;
  (Wrd27.Obj) = (Rsp [3]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_6_10);
  Rvl = (current_block [OBJECT_6_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_6_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_6_7);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_42;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd53.Lng))))
    goto label_42;
  (Wrd7.Obj) = ((Wrd51.pObj) [10]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_27;

DEFLABEL (label_26)
  Rvl = (current_block [OBJECT_6_11]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_41;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 20L) < ((unsigned long) (Wrd39.Lng))))
    goto label_41;
  (Wrd13.Obj) = ((Wrd37.pObj) [21]);
  if (! ((Wrd13.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_26;

DEFLABEL (label_40)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_39;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd26.Lng))))
    goto label_39;
  (Wrd20.Obj) = ((Wrd24.pObj) [15]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_20]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_13);
  (* (--Rsp)) = Rvl;
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd64.Obj);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd78.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd78.uLng) == 10))
    goto label_36;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd76.Lng))))
    goto label_36;
  (Wrd68.Obj) = ((Wrd74.pObj) [4]);

DEFLABEL (label_35)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_34)
  (Rsp [0]) = (Wrd68.Obj);
  if ((Wrd68.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd96.uLng) == 10))
    goto label_32;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [0]);
  (Wrd94.Lng) = (FIXNUM_TO_LONG (Wrd93.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd94.Lng))))
    goto label_32;
  (Wrd86.Obj) = ((Wrd92.pObj) [17]);

DEFLABEL (label_31)
  (Wrd104.Obj) = (Rsp [1]);
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd106.Obj) = ((Wrd105.pObj) [2]);
  if ((Wrd86.Obj) == (Wrd106.Obj))
    goto label_29;
  (Wrd103.Obj) = (current_block [OBJECT_6_6]);
  goto label_28;

DEFLABEL (label_29)
  (Wrd103.Obj) = (current_block [OBJECT_6_5]);

DEFLABEL (label_28)
DEFLABEL (label_30)
  Rsp = (& (Rsp [1]));
  if ((Wrd103.Obj) == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd108.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd108.Obj);
  (Wrd110.Obj) = (Rsp [1]);
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd109.Obj) = ((Wrd111.pObj) [2]);
  (Rsp [2]) = (Wrd109.Obj);
  (Wrd112.Obj) = (current_block [OBJECT_6_7]);
  (Rsp [1]) = (Wrd112.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_16]));

DEFLABEL (label_32)
  (Wrd97.Obj) = (Rsp [0]);
  (Wrd98.Obj) = (current_block [OBJECT_6_4]);
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_20)
  (Wrd86.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  Rsp = (& (Rsp [1]));
  goto label_26;

DEFLABEL (label_36)
  (Wrd79.Obj) = (Rsp [1]);
  (Wrd80.Obj) = (current_block [OBJECT_6_3]);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_19)
  (Wrd68.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd68.Obj) = ((SCHEME_OBJECT) 0);
  goto label_35;

DEFLABEL (label_39)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.Obj) = (current_block [OBJECT_6_10]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.Obj) = (current_block [OBJECT_6_9]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  goto label_26;

DEFLABEL (label_42)
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.Obj) = (current_block [OBJECT_6_8]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_27;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_12);
  (Wrd68.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_5 3
#define LABEL_7_4 5
#define LABEL_7_6 7
#define LABEL_7_7 9
#define LABEL_7_8 11
#define LABEL_7_10 13
#define LABEL_7_9 15
#define LABEL_7_13 17
#define LABEL_7_14 19
#define LABEL_7_15 21
#define ENVIRONMENT_LABEL_7_3 41
#define DEBUGGING_LABEL_7_2 40
#define OBJECT_7_8 39
#define OBJECT_7_7 38
#define OBJECT_7_6 37
#define OBJECT_7_5 36
#define OBJECT_7_4 35
#define OBJECT_7_3 34
#define OBJECT_7_2 33
#define OBJECT_7_1 32
#define OBJECT_7_0 31
#define EXECUTE_CACHE_7_17 23
#define EXECUTE_CACHE_7_16 25
#define EXECUTE_CACHE_7_12 27
#define EXECUTE_CACHE_7_11 29
#define FREE_REFERENCES_LABEL_7_0 22
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd63;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd34;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
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
      current_block = (Rpc - LABEL_7_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_7_4);
      goto update_closureB_12;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_7_8);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_7_10);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_7_13);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_7_15);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (update_closureB_20)
DEFLABEL (update_closureB_12)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_33;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_33;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_32)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_31;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd27.Lng))))
    goto label_31;
  (Wrd22.Obj) = ((Wrd25.pObj) [4]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_30)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_29;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd42.Lng))))
    goto label_29;
  (Wrd34.Obj) = ((Wrd40.pObj) [17]);

DEFLABEL (label_28)
  (Wrd50.Obj) = (Rsp [0]);
  if ((Wrd34.Obj) == (Wrd50.Obj))
    goto label_27;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (current_block [OBJECT_7_5]);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_5);

DEFLABEL (label_27)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (current_block [OBJECT_7_3]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd70.Obj) = (Rsp [3]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_26;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd69.Lng))))
    goto label_26;
  (Wrd63.Obj) = ((Wrd67.pObj) [9]);
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (* (--Rsp)) = Rvl;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_24;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd21.Lng))))
    goto label_24;
  ((Wrd19.pObj) [9]) = Rvl;

DEFLABEL (label_23)
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_7_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_17]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7_14);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_7_7]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_22;

DEFLABEL (label_21)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_6]), 3);

DEFLABEL (label_22)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 21L) < ((unsigned long) (Wrd17.Lng))))
    goto label_21;
  ((Wrd15.pObj) [22]) = Rvl;
  Rvl = (current_block [OBJECT_7_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_7_4]);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_6]), 3);

DEFLABEL (label_18)
  goto label_23;

DEFLABEL (label_26)
  (Wrd72.Obj) = (Rsp [3]);
  (Wrd73.Obj) = (current_block [OBJECT_7_4]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_29)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.Obj) = (current_block [OBJECT_7_2]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_16)
  (Wrd34.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd30.Obj) = (current_block [OBJECT_7_0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_9 9
#define LABEL_8_10 11
#define LABEL_8_11 13
#define LABEL_8_12 15
#define LABEL_8_13 17
#define LABEL_8_14 19
#define LABEL_8_15 21
#define LABEL_8_16 23
#define LABEL_8_18 25
#define LABEL_8_17 27
#define LABEL_8_20 29
#define ENVIRONMENT_LABEL_8_3 49
#define DEBUGGING_LABEL_8_2 48
#define OBJECT_8_8 47
#define OBJECT_8_7 46
#define OBJECT_8_6 45
#define OBJECT_8_5 44
#define OBJECT_8_4 43
#define OBJECT_8_3 42
#define OBJECT_8_2 41
#define OBJECT_8_1 40
#define OBJECT_8_0 39
#define EXECUTE_CACHE_8_19 31
#define EXECUTE_CACHE_8_8 33
#define EXECUTE_CACHE_8_6 35
#define FREE_REFERENCE_8_0 38
#define FREE_REFERENCES_LABEL_8_0 30
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd123;
  machine_word Wrd125;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd112;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd80;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd74;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd122;
  machine_word Wrd114;
  machine_word Wrd116;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd56;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd133;
  machine_word Wrd129;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
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
      goto refilter_variables_23;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto loop_21;

    case 3:
      current_block = (Rpc - LABEL_8_9);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto label_26;

    case 5:
      current_block = (Rpc - LABEL_8_11);
      goto label_29;

    case 6:
      current_block = (Rpc - LABEL_8_12);
      goto label_33;

    case 7:
      current_block = (Rpc - LABEL_8_13);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_8_14);
      goto label_31;

    case 9:
      current_block = (Rpc - LABEL_8_15);
      goto label_32;

    case 10:
      current_block = (Rpc - LABEL_8_16);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_8_18);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_8_17);
      goto continuation_16;

    case 13:
      current_block = (Rpc - LABEL_8_20);
      goto label_34;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (refilter_variables_36)
DEFLABEL (refilter_variables_23)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_38;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd7.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  goto loop_21;

DEFLABEL (loop_37)
DEFLABEL (loop_21)
  INTERRUPT_CHECK (26, LABEL_8_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_65;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_64;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_63)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_62;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 23L) < ((unsigned long) (Wrd24.Lng))))
    goto label_62;
  (Wrd18.Obj) = ((Wrd22.pObj) [24]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_61)
  (Wrd32.Obj) = (Rsp [0]);
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_46;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_45)
  (Rsp [2]) = (Wrd34.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_44;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_43)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_19]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_8_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd7.Obj) = (Rsp [3]);

DEFLABEL (label_39)
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_21;

DEFLABEL (label_40)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_42;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_41)
  (Wrd20.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  goto label_39;

DEFLABEL (label_42)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_20]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_34)
  (Wrd9.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_27)
  (Wrd34.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_47)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 10))
    goto label_60;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd64.Lng))))
    goto label_60;
  (Wrd56.Obj) = ((Wrd62.pObj) [10]);

DEFLABEL (label_59)
  (Rsp [0]) = (Wrd56.Obj);
  if ((Wrd56.Obj) == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd75.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd78.Obj) = ((Wrd75.pObj) [0]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if ((Wrd79.uLng) == 50)
    goto label_55;
  Wrd74 = Wrd78;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd89.Obj) = (Rsp [1]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 10))
    goto label_53;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [0]);
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd87.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd88.Lng))))
    goto label_53;
  (Wrd80.Obj) = ((Wrd86.pObj) [1]);

DEFLABEL (label_52)
  (Wrd96.Obj) = (* (Rsp++));
  if (! ((Wrd80.Obj) == (Wrd96.Obj)))
    goto label_48;
  (Wrd112.Obj) = (current_block [OBJECT_8_8]);
  (Rsp [5]) = (Wrd112.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (label_48)
  (Wrd100.Obj) = (Rsp [2]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 1))
    goto label_51;
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd97.Obj) = ((Wrd99.pObj) [1]);

DEFLABEL (label_50)
  (Rsp [2]) = (Wrd97.Obj);

DEFLABEL (label_49)
  (Wrd126.Obj) = (Rsp [1]);
  (Wrd127.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd126.Obj);
  (* (Rhp++)) = (Wrd127.Obj);
  (Wrd125.pObj) = (& (Rhp [-2]));
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd125.pObj)));
  (Rsp [3]) = (Wrd123.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_21;

DEFLABEL (label_51)
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_32)
  (Wrd97.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd91.Obj) = (Rsp [1]);
  (Wrd92.Obj) = (current_block [OBJECT_8_7]);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 2);

DEFLABEL (label_31)
  (Wrd80.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_13])), (Wrd75.pObj));

DEFLABEL (label_30)
  (Wrd74.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_56)
  (Wrd117.Obj) = (Rsp [2]);
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd117.Obj));
  if (! ((Wrd118.uLng) == 1))
    goto label_58;
  (Wrd116.pObj) = (OBJECT_ADDRESS (Wrd117.Obj));
  (Wrd114.Obj) = ((Wrd116.pObj) [1]);

DEFLABEL (label_57)
  (Rsp [2]) = (Wrd114.Obj);
  goto label_49;

DEFLABEL (label_58)
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_33)
  (Wrd114.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.Obj) = (current_block [OBJECT_8_5]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 2);

DEFLABEL (label_29)
  (Wrd56.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (current_block [OBJECT_8_3]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_65)
  (Wrd129.Obj) = (Rsp [1]);
  if ((Wrd129.Obj) == (Wrd6.Obj))
    goto label_66;
  Rvl = (Wrd129.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd133.Obj) = (current_block [OBJECT_8_1]);
  (Rsp [3]) = (Wrd133.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_13 9
#define LABEL_9_7 11
#define LABEL_9_9 13
#define TAG_9_10 5
#define LABEL_9_17 15
#define LABEL_9_11 17
#define LABEL_9_19 19
#define LABEL_9_14 21
#define LABEL_9_21 23
#define ENVIRONMENT_LABEL_9_3 46
#define DEBUGGING_LABEL_9_2 45
#define OBJECT_9_5 44
#define OBJECT_9_4 43
#define OBJECT_9_3 42
#define OBJECT_9_2 41
#define OBJECT_9_1 40
#define OBJECT_9_0 39
#define EXECUTE_CACHE_9_22 25
#define EXECUTE_CACHE_9_20 27
#define EXECUTE_CACHE_9_18 29
#define EXECUTE_CACHE_9_16 31
#define EXECUTE_CACHE_9_15 33
#define EXECUTE_CACHE_9_12 35
#define EXECUTE_CACHE_9_8 37
#define FREE_REFERENCES_LABEL_9_0 24
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_9_4);
      goto attempt_children_merge_16;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto lambda_5;

    case 3:
      current_block = (Rpc - LABEL_9_13);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_9_9);
      goto lambda_23;

    case 6:
      current_block = (Rpc - LABEL_9_17);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_9_11);
      goto lambda_9;

    case 8:
      current_block = (Rpc - LABEL_9_19);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_9_14);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_9_21);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (attempt_children_merge_22)
DEFLABEL (attempt_children_merge_16)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_9_0]))
    goto label_26;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_9])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  (Rsp [1]) = Rvl;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (Rsp [2]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (label_26)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_24)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_9_6);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_33;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_33;
  (Wrd5.Obj) = ((Wrd11.pObj) [8]);

DEFLABEL (label_32)
  (Rsp [0]) = (Wrd5.Obj);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_27;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_28;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_22]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_29;

DEFLABEL (label_30)
  Rvl = (current_block [OBJECT_9_5]);

DEFLABEL (label_29)
DEFLABEL (label_31)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_9_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 2);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_32;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_9_9);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_35;

DEFLABEL (label_34)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (Wrd6.Obj))
    goto label_37;

DEFLABEL (label_36)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd16.Obj);
  (Wrd17.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [4]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_18]));

DEFLABEL (label_37)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_39;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_38)
  if ((Wrd20.Obj) == (current_block [OBJECT_9_0]))
    goto label_34;
  goto label_36;

DEFLABEL (label_39)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_19)
  (Wrd20.Obj) = Rvl;
  goto label_38;

DEFLABEL (lambda_25)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_9_11);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_41;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_41;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_40)
  (Wrd21.Obj) = (current_block [OBJECT_9_4]);
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_20]));

DEFLABEL (label_41)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_9_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_6 5
#define LABEL_10_7 7
#define LABEL_10_5 9
#define LABEL_10_8 11
#define LABEL_10_9 13
#define LABEL_10_17 15
#define LABEL_10_10 17
#define LABEL_10_19 19
#define LABEL_10_13 21
#define LABEL_10_20 23
#define LABEL_10_12 25
#define LABEL_10_14 27
#define LABEL_10_23 29
#define LABEL_10_21 31
#define LABEL_10_24 33
#define LABEL_10_25 35
#define LABEL_10_26 37
#define LABEL_10_27 39
#define LABEL_10_29 41
#define LABEL_10_30 43
#define LABEL_10_31 45
#define LABEL_10_32 47
#define LABEL_10_36 49
#define LABEL_10_37 51
#define LABEL_10_33 53
#define TAG_10_34 25
#define LABEL_10_35 55
#define LABEL_10_28 57
#define LABEL_10_42 59
#define LABEL_10_38 61
#define LABEL_10_43 63
#define LABEL_10_44 65
#define ENVIRONMENT_LABEL_10_3 96
#define DEBUGGING_LABEL_10_2 95
#define OBJECT_10_7 94
#define OBJECT_10_6 93
#define OBJECT_10_5 92
#define OBJECT_10_4 91
#define OBJECT_10_3 90
#define OBJECT_10_2 89
#define OBJECT_10_1 88
#define OBJECT_10_0 87
#define EXECUTE_CACHE_10_45 67
#define EXECUTE_CACHE_10_41 69
#define EXECUTE_CACHE_10_40 71
#define EXECUTE_CACHE_10_39 73
#define EXECUTE_CACHE_10_22 75
#define EXECUTE_CACHE_10_18 77
#define EXECUTE_CACHE_10_16 79
#define EXECUTE_CACHE_10_15 81
#define EXECUTE_CACHE_10_11 83
#define FREE_REFERENCE_10_0 86
#define FREE_REFERENCES_LABEL_10_0 66
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd67;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd50;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd93;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd81;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd34;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd9;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd116;
  machine_word Wrd108;
  machine_word Wrd110;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd84;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd134;
  machine_word Wrd126;
  machine_word Wrd128;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto merge_childrenB_40;

    case 1:
      current_block = (Rpc - LABEL_10_6);
      goto label_42;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto label_43;

    case 3:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_12;

    case 4:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_10_17);
      goto label_44;

    case 7:
      current_block = (Rpc - LABEL_10_10);
      goto lambda_7;

    case 8:
      current_block = (Rpc - LABEL_10_19);
      goto label_45;

    case 9:
      current_block = (Rpc - LABEL_10_13);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_10_20);
      goto label_46;

    case 11:
      current_block = (Rpc - LABEL_10_12);
      goto continuation_3;

    case 12:
      current_block = (Rpc - LABEL_10_14);
      goto lambda_1;

    case 13:
      current_block = (Rpc - LABEL_10_23);
      goto label_47;

    case 14:
      current_block = (Rpc - LABEL_10_21);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_10_24);
      goto continuation_33;

    case 16:
      current_block = (Rpc - LABEL_10_25);
      goto label_55;

    case 17:
      current_block = (Rpc - LABEL_10_26);
      goto loop_37;

    case 18:
      current_block = (Rpc - LABEL_10_27);
      goto label_54;

    case 19:
      current_block = (Rpc - LABEL_10_29);
      goto label_48;

    case 20:
      current_block = (Rpc - LABEL_10_30);
      goto label_49;

    case 21:
      current_block = (Rpc - LABEL_10_31);
      goto label_53;

    case 22:
      current_block = (Rpc - LABEL_10_32);
      goto label_52;

    case 23:
      current_block = (Rpc - LABEL_10_36);
      goto label_50;

    case 24:
      current_block = (Rpc - LABEL_10_37);
      goto label_51;

    case 25:
      current_block = (Rpc - LABEL_10_33);
      goto lambda_63;

    case 26:
      current_block = (Rpc - LABEL_10_35);
      goto continuation_26;

    case 27:
      current_block = (Rpc - LABEL_10_28);
      goto continuation_18;

    case 28:
      current_block = (Rpc - LABEL_10_42);
      goto continuation_29;

    case 29:
      current_block = (Rpc - LABEL_10_38);
      goto continuation_27;

    case 30:
      current_block = (Rpc - LABEL_10_43);
      goto label_56;

    case 31:
      current_block = (Rpc - LABEL_10_44);
      goto label_57;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (merge_childrenB_59)
DEFLABEL (merge_childrenB_40)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_75;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_74)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_73;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd23.Lng))))
    goto label_73;
  (Wrd18.Obj) = ((Wrd21.pObj) [8]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_72)
  (Wrd30.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_10_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_71;
  Wrd6 = Wrd10;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_10_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_16]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_13);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 10))
    goto label_68;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd19.Lng))))
    goto label_68;
  (Wrd13.Obj) = ((Wrd17.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_67)
  (Wrd27.Obj) = (current_block [OBJECT_10_4]);
  (Rsp [1]) = (Wrd27.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 10)
    goto label_65;

DEFLABEL (label_64)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_65)
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd37.Lng))))
    goto label_64;
  (Wrd29.Obj) = ((Wrd35.pObj) [4]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_66)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_22]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_10_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_37;

DEFLABEL (label_68)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_10_4]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_20]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_69)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_66;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_17])), (Wrd7.pObj));

DEFLABEL (label_44)
  (Wrd6.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd26.Obj) = (current_block [OBJECT_10_1]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_42)
  (Wrd8.Obj) = Rvl;
  goto label_74;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_12);
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (lambda_60)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_10_10);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_79;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_79;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_78)
  (Wrd21.Obj) = (current_block [OBJECT_10_5]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 10)
    goto label_77;

DEFLABEL (label_76)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_77)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd31.Lng))))
    goto label_76;
  Rvl = ((Wrd29.pObj) [9]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_79)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_10_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (lambda_61)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_10_14);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_83;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_83;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_82)
  (Wrd21.Obj) = (current_block [OBJECT_10_4]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 10)
    goto label_81;

DEFLABEL (label_80)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_81)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd31.Lng))))
    goto label_80;
  Rvl = ((Wrd29.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_83)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_10_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (loop_62)
DEFLABEL (loop_37)
  INTERRUPT_CHECK (26, LABEL_10_26);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_10_3]))
    goto label_101;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_100;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_99)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_98;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd24.Lng))))
    goto label_98;
  (Wrd18.Obj) = ((Wrd22.pObj) [4]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_97)
  (Wrd100.Obj) = (Rsp [0]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 10))
    goto label_96;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [0]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd99.Lng))))
    goto label_96;
  (Wrd34.Obj) = ((Wrd97.pObj) [4]);
  if ((Wrd34.Obj) == ((SCHEME_OBJECT) 0))
    goto label_94;

DEFLABEL (label_95)
  (Wrd81.Obj) = (Rsp [4]);
  if ((Wrd81.Obj) == ((SCHEME_OBJECT) 0))
    goto label_89;

DEFLABEL (label_94)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_24]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd40.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_33])));
  Rhp += 2;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd40.pObj)));
  Wrd43 = Wrd40;
  (Wrd44.Obj) = (Rsp [9]);
  ((Wrd43.pObj) [2]) = (Wrd44.Obj);
  (Wrd42.Obj) = (Rsp [6]);
  ((Wrd43.pObj) [3]) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_35]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd57.Obj) = (Rsp [4]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_93;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd56.Lng))))
    goto label_93;
  (Wrd50.Obj) = ((Wrd54.pObj) [8]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_92)
  (Wrd64.Obj) = (Rsp [14]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd74.Obj) = (Rsp [5]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 10))
    goto label_91;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [0]);
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd73.Lng))))
    goto label_91;
  (Wrd67.Obj) = ((Wrd71.pObj) [9]);
  (* (--Rsp)) = (Wrd67.Obj);

DEFLABEL (label_90)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_16]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_10_35);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_40]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_10_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_89;
  (Wrd129.Obj) = (Rsp [2]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if (! ((Wrd130.uLng) == 1))
    goto label_88;
  (Wrd128.pObj) = (OBJECT_ADDRESS (Wrd129.Obj));
  (Wrd126.Obj) = ((Wrd128.pObj) [0]);

DEFLABEL (label_87)
  (Wrd138.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd126.Obj);
  (* (Rhp++)) = (Wrd138.Obj);
  (Wrd137.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd137.pObj)));

DEFLABEL (label_86)
  Rsp = (& (Rsp [2]));
  (Rsp [1]) = (Wrd84.Obj);
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd89.uLng) == 1))
    goto label_85;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd85.Obj) = ((Wrd87.pObj) [1]);

DEFLABEL (label_84)
  (Rsp [0]) = (Wrd85.Obj);
  goto loop_37;

DEFLABEL (label_85)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_32]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_6]), 1);

DEFLABEL (label_52)
  (Wrd85.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_88)
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_25]))));
  (* (--Rsp)) = (Wrd134.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_55)
  (Wrd126.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_89)
  (Wrd84.Obj) = (Rsp [3]);
  goto label_86;

DEFLABEL (label_91)
  (Wrd76.Obj) = (Rsp [5]);
  (Wrd77.Obj) = (current_block [OBJECT_10_5]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_37]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd59.Obj) = (Rsp [4]);
  (Wrd60.Obj) = (current_block [OBJECT_10_1]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_36]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (label_96)
  (Wrd102.Obj) = (Rsp [0]);
  (Wrd103.Obj) = (current_block [OBJECT_10_4]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_31]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_53)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;
  goto label_95;

DEFLABEL (label_98)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (current_block [OBJECT_10_4]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_30]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_29]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_99;

DEFLABEL (label_101)
  (Wrd111.Obj) = (Rsp [1]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd112.uLng) == 1))
    goto label_104;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd108.Obj) = ((Wrd110.pObj) [1]);

DEFLABEL (label_103)
  if (! ((Wrd108.Obj) == (current_block [OBJECT_10_3])))
    goto label_102;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_102)
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_28]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (Wrd121.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd121.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_22]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_10_28);
  (Rsp [6]) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [7]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [8]) = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_41]));

DEFLABEL (label_104)
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_27]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_6]), 1);

DEFLABEL (label_54)
  (Wrd108.Obj) = Rvl;
  goto label_103;

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_10_33);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_39]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_10_38);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_105;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_105)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_111;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 23L) < ((unsigned long) (Wrd17.Lng))))
    goto label_111;
  (Wrd9.Obj) = ((Wrd15.pObj) [24]);

DEFLABEL (label_110)
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_42]))));
  (* (--Rsp)) = (Wrd30.Obj);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_109;
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_108;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [0]);

DEFLABEL (label_107)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_106)
  (Rsp [2]) = (Wrd34.Obj);
  (Wrd43.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd43.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_45]));

DEFLABEL (label_108)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_44]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_57)
  (Wrd34.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_109)
  (Wrd34.Obj) = (Rsp [4]);
  goto label_107;

DEFLABEL (label_111)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_10_7]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_43]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_56)
  (Wrd9.Obj) = Rvl;
  goto label_110;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_10_42);
  (Wrd34.Obj) = Rvl;
  goto label_106;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_10 5
#define LABEL_11_5 7
#define TAG_11_6 2
#define LABEL_11_7 9
#define TAG_11_8 3
#define LABEL_11_12 11
#define LABEL_11_19 13
#define LABEL_11_13 15
#define LABEL_11_14 17
#define LABEL_11_22 19
#define LABEL_11_15 21
#define LABEL_11_24 23
#define LABEL_11_25 25
#define LABEL_11_18 27
#define LABEL_11_26 29
#define LABEL_11_27 31
#define LABEL_11_28 33
#define LABEL_11_29 35
#define LABEL_11_30 37
#define LABEL_11_31 39
#define LABEL_11_32 41
#define LABEL_11_34 43
#define LABEL_11_33 45
#define LABEL_11_36 47
#define LABEL_11_37 49
#define LABEL_11_38 51
#define LABEL_11_39 53
#define TAG_11_40 25
#define LABEL_11_45 55
#define LABEL_11_46 57
#define LABEL_11_42 59
#define LABEL_11_43 61
#define TAG_11_44 29
#define LABEL_11_48 63
#define LABEL_11_49 65
#define TAG_11_50 31
#define LABEL_11_53 67
#define LABEL_11_56 69
#define LABEL_11_51 71
#define LABEL_11_54 73
#define LABEL_11_58 75
#define LABEL_11_59 77
#define LABEL_11_60 79
#define ENVIRONMENT_LABEL_11_3 128
#define DEBUGGING_LABEL_11_2 127
#define OBJECT_11_16 126
#define OBJECT_11_15 125
#define OBJECT_11_14 124
#define OBJECT_11_13 123
#define OBJECT_11_12 122
#define OBJECT_11_11 121
#define OBJECT_11_10 120
#define OBJECT_11_9 119
#define OBJECT_11_8 118
#define OBJECT_11_7 117
#define OBJECT_11_6 116
#define OBJECT_11_5 115
#define OBJECT_11_4 114
#define OBJECT_11_3 113
#define OBJECT_11_2 112
#define OBJECT_11_1 111
#define OBJECT_11_0 110
#define EXECUTE_CACHE_11_55 81
#define EXECUTE_CACHE_11_52 83
#define EXECUTE_CACHE_11_47 85
#define EXECUTE_CACHE_11_41 87
#define EXECUTE_CACHE_11_35 89
#define EXECUTE_CACHE_11_23 91
#define EXECUTE_CACHE_11_21 93
#define EXECUTE_CACHE_11_20 95
#define EXECUTE_CACHE_11_17 97
#define EXECUTE_CACHE_11_16 99
#define EXECUTE_CACHE_11_57 101
#define EXECUTE_CACHE_11_11 103
#define EXECUTE_CACHE_11_9 105
#define FREE_REFERENCE_11_1 108
#define FREE_REFERENCE_11_0 109
#define FREE_REFERENCES_LABEL_11_0 80
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd86;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd46;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd153;
  machine_word Wrd149;
  machine_word Wrd146;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd164;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd181;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd167;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd198;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd193;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd34;
  machine_word Wrd215;
  machine_word Wrd212;
  machine_word Wrd211;
  machine_word Wrd210;
  machine_word Wrd201;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd209;
  machine_word Wrd208;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_11_4);
      goto link_childrenB_50;

    case 1:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_11_5);
      goto lambda_73;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto lambda_74;

    case 4:
      current_block = (Rpc - LABEL_11_12);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_11_19);
      goto label_52;

    case 6:
      current_block = (Rpc - LABEL_11_13);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_11_14);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_11_22);
      goto label_53;

    case 9:
      current_block = (Rpc - LABEL_11_15);
      goto lambda_6;

    case 10:
      current_block = (Rpc - LABEL_11_24);
      goto label_54;

    case 11:
      current_block = (Rpc - LABEL_11_25);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_11_18);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_11_26);
      goto label_55;

    case 14:
      current_block = (Rpc - LABEL_11_27);
      goto label_62;

    case 15:
      current_block = (Rpc - LABEL_11_28);
      goto label_61;

    case 16:
      current_block = (Rpc - LABEL_11_29);
      goto label_60;

    case 17:
      current_block = (Rpc - LABEL_11_30);
      goto label_59;

    case 18:
      current_block = (Rpc - LABEL_11_31);
      goto label_56;

    case 19:
      current_block = (Rpc - LABEL_11_32);
      goto label_58;

    case 20:
      current_block = (Rpc - LABEL_11_34);
      goto label_57;

    case 21:
      current_block = (Rpc - LABEL_11_33);
      goto continuation_23;

    case 22:
      current_block = (Rpc - LABEL_11_36);
      goto label_64;

    case 23:
      current_block = (Rpc - LABEL_11_37);
      goto label_63;

    case 24:
      current_block = (Rpc - LABEL_11_38);
      goto continuation_32;

    case 25:
      current_block = (Rpc - LABEL_11_39);
      goto lambda_76;

    case 26:
      current_block = (Rpc - LABEL_11_45);
      goto label_65;

    case 27:
      current_block = (Rpc - LABEL_11_46);
      goto label_66;

    case 28:
      current_block = (Rpc - LABEL_11_42);
      goto continuation_37;

    case 29:
      current_block = (Rpc - LABEL_11_43);
      goto lambda_77;

    case 30:
      current_block = (Rpc - LABEL_11_48);
      goto continuation_46;

    case 31:
      current_block = (Rpc - LABEL_11_49);
      goto lambda_78;

    case 32:
      current_block = (Rpc - LABEL_11_53);
      goto label_67;

    case 33:
      current_block = (Rpc - LABEL_11_56);
      goto continuation_35;

    case 34:
      current_block = (Rpc - LABEL_11_51);
      goto continuation_34;

    case 35:
      current_block = (Rpc - LABEL_11_54);
      goto continuation_39;

    case 36:
      current_block = (Rpc - LABEL_11_58);
      goto label_68;

    case 37:
      current_block = (Rpc - LABEL_11_59);
      goto label_69;

    case 38:
      current_block = (Rpc - LABEL_11_60);
      goto label_70;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (link_childrenB_72)
DEFLABEL (link_childrenB_50)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_5])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [6]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_7])));
  Rhp += 1;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  ((Wrd20.pObj) [2]) = (Wrd13.Obj);
  (Rsp [3]) = (Wrd19.Obj);
  (Rsp [2]) = (Wrd17.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (lambda_73)
  CLOSURE_HEADER (LABEL_11_5);

DEFLABEL (lambda_49)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_11_0]))
    goto label_107;

DEFLABEL (label_106)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_105;
  Wrd6 = Wrd10;

DEFLABEL (label_104)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_11_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_103;
  Wrd8 = Wrd12;

DEFLABEL (label_102)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_18);
  (* (--Rsp)) = Rvl;
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [5]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_101;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_101;
  (Wrd9.Obj) = ((Wrd15.pObj) [9]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_100)
  (Wrd208.Obj) = (Rsp [1]);
  (Wrd209.uLng) = (OBJECT_TYPE (Wrd208.Obj));
  if (! ((Wrd209.uLng) == 10))
    goto label_99;
  (Wrd205.pObj) = (OBJECT_ADDRESS (Wrd208.Obj));
  (Wrd206.Obj) = ((Wrd205.pObj) [0]);
  (Wrd207.Lng) = (FIXNUM_TO_LONG (Wrd206.Obj));
  if (! (((unsigned long) 20L) < ((unsigned long) (Wrd207.Lng))))
    goto label_99;
  (Wrd201.Obj) = (current_block [OBJECT_11_6]);
  ((Wrd205.pObj) [21]) = (Wrd201.Obj);

DEFLABEL (label_98)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_25]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_11_0]);
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd191.Obj) = (Rsp [3]);
  (Wrd192.uLng) = (OBJECT_TYPE (Wrd191.Obj));
  if (! ((Wrd192.uLng) == 10))
    goto label_97;
  (Wrd188.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd189.Obj) = ((Wrd188.pObj) [0]);
  (Wrd190.Lng) = (FIXNUM_TO_LONG (Wrd189.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd190.Lng))))
    goto label_97;
  ((Wrd188.pObj) [8]) = (Wrd34.Obj);

DEFLABEL (label_96)
  (Wrd174.Obj) = (Rsp [3]);
  (Wrd175.uLng) = (OBJECT_TYPE (Wrd174.Obj));
  if (! ((Wrd175.uLng) == 10))
    goto label_95;
  (Wrd171.pObj) = (OBJECT_ADDRESS (Wrd174.Obj));
  (Wrd172.Obj) = ((Wrd171.pObj) [0]);
  (Wrd173.Lng) = (FIXNUM_TO_LONG (Wrd172.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd173.Lng))))
    goto label_95;
  (Wrd167.Obj) = (Rsp [0]);
  ((Wrd171.pObj) [9]) = (Wrd167.Obj);

DEFLABEL (label_94)
  (Wrd37.Obj) = (current_block [OBJECT_11_4]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [6]);
  (Rsp [2]) = (Wrd39.Obj);
  (Wrd164.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd164.uLng) == 10)
    goto label_80;

DEFLABEL (label_79)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_8]), 3);

DEFLABEL (label_80)
  (Wrd160.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd161.Obj) = ((Wrd160.pObj) [0]);
  (Wrd162.Lng) = (FIXNUM_TO_LONG (Wrd161.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd162.Lng))))
    goto label_79;
  ((Wrd160.pObj) [10]) = (Wrd39.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_93)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Wrd142.Obj) = (Rsp [3]);
  (Wrd143.pObj) = (OBJECT_ADDRESS (Wrd142.Obj));
  (Wrd144.Obj) = ((Wrd143.pObj) [5]);
  (Wrd145.uLng) = (OBJECT_TYPE (Wrd144.Obj));
  if (! ((Wrd145.uLng) == 10))
    goto label_92;
  (Wrd139.pObj) = (OBJECT_ADDRESS (Wrd144.Obj));
  (Wrd140.Obj) = ((Wrd139.pObj) [0]);
  (Wrd141.Lng) = (FIXNUM_TO_LONG (Wrd140.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd141.Lng))))
    goto label_92;
  ((Wrd139.pObj) [9]) = (Wrd41.Obj);

DEFLABEL (label_91)
  (Wrd59.Obj) = (Rsp [3]);
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [5]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 10))
    goto label_90;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd58.Lng))))
    goto label_90;
  (Wrd46.Obj) = ((Wrd56.pObj) [10]);

DEFLABEL (label_89)
  (Wrd73.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd72.pObj) = (& (Rhp [-2]));
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd72.pObj)));
  (Wrd118.Obj) = (Rsp [3]);
  (Wrd119.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd120.Obj) = ((Wrd119.pObj) [5]);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if (! ((Wrd121.uLng) == 10))
    goto label_88;
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd120.Obj));
  (Wrd116.Obj) = ((Wrd115.pObj) [0]);
  (Wrd117.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd117.Lng))))
    goto label_88;
  ((Wrd115.pObj) [10]) = (Wrd70.Obj);

DEFLABEL (label_87)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_33]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd80.Obj) = (Rsp [2]);
  (Wrd81.Obj) = (current_block [OBJECT_11_0]);
  (* (Rhp++)) = (Wrd80.Obj);
  (* (Rhp++)) = (Wrd81.Obj);
  (Wrd78.pObj) = (& (Rhp [-2]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd78.pObj)));
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd95.Obj) = (Rsp [5]);
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd97.Obj) = ((Wrd96.pObj) [6]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 10))
    goto label_86;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [0]);
  (Wrd94.Lng) = (FIXNUM_TO_LONG (Wrd93.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd94.Lng))))
    goto label_86;
  (Wrd86.Obj) = ((Wrd92.pObj) [9]);
  (* (--Rsp)) = (Wrd86.Obj);

DEFLABEL (label_85)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_35]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_11_33);
  (Wrd5.Obj) = Rvl;
  (Wrd54.Obj) = (Rsp [3]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [6]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_84;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd53.Lng))))
    goto label_84;
  ((Wrd51.pObj) [9]) = Rvl;

DEFLABEL (label_83)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_82;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd33.Lng))))
    goto label_82;
  (Wrd27.Obj) = (current_block [OBJECT_11_10]);
  ((Wrd31.pObj) [18]) = (Wrd27.Obj);

DEFLABEL (label_81)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_38]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_11_12]);
  (Wrd16.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_39])));
  Rhp += 2;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd23 = Wrd20;
  (Wrd24.Obj) = (Rsp [5]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  ((Wrd23.pObj) [3]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_41]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_11_38);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_11_6]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_42]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_44);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_43])));
  Rhp += 2;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd18 = Wrd15;
  (Wrd19.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  ((Wrd18.pObj) [3]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_41]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_11_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_50);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_49])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd14.Obj) = (Rsp [5]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_41]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_11_48);
  Rvl = (current_block [OBJECT_11_6]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (current_block [OBJECT_11_11]);
  (Wrd38.Obj) = (current_block [OBJECT_11_10]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_37]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_8]), 3);

DEFLABEL (label_63)
  goto label_81;

DEFLABEL (label_84)
  (Wrd59.Obj) = (Rsp [3]);
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd58.Obj) = ((Wrd60.pObj) [6]);
  (Wrd61.Obj) = (current_block [OBJECT_11_5]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_36]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_8]), 3);

DEFLABEL (label_64)
  goto label_83;

DEFLABEL (label_86)
  (Wrd100.Obj) = (Rsp [5]);
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd99.Obj) = ((Wrd101.pObj) [6]);
  (Wrd102.Obj) = (current_block [OBJECT_11_5]);
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_34]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 2);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd123.Obj) = (Rsp [3]);
  (Wrd124.pObj) = (OBJECT_ADDRESS (Wrd123.Obj));
  (Wrd122.Obj) = ((Wrd124.pObj) [5]);
  (Wrd125.Obj) = (current_block [OBJECT_11_4]);
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_32]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_8]), 3);

DEFLABEL (label_58)
  goto label_87;

DEFLABEL (label_90)
  (Wrd64.Obj) = (Rsp [3]);
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd63.Obj) = ((Wrd65.pObj) [5]);
  (Wrd66.Obj) = (current_block [OBJECT_11_4]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_31]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 2);

DEFLABEL (label_56)
  (Wrd46.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd147.Obj) = (Rsp [3]);
  (Wrd148.pObj) = (OBJECT_ADDRESS (Wrd147.Obj));
  (Wrd146.Obj) = ((Wrd148.pObj) [5]);
  (Wrd149.Obj) = (current_block [OBJECT_11_5]);
  (Wrd153.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_30]))));
  (* (--Rsp)) = (Wrd153.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd149.Obj);
  (* (--Rsp)) = (Wrd146.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_8]), 3);

DEFLABEL (label_59)
  goto label_91;

DEFLABEL (label_95)
  (Wrd176.Obj) = (Rsp [3]);
  (Wrd177.Obj) = (current_block [OBJECT_11_5]);
  (Wrd178.Obj) = (Rsp [0]);
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_29]))));
  (* (--Rsp)) = (Wrd181.Obj);
  (* (--Rsp)) = (Wrd178.Obj);
  (* (--Rsp)) = (Wrd177.Obj);
  (* (--Rsp)) = (Wrd176.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_8]), 3);

DEFLABEL (label_60)
  goto label_94;

DEFLABEL (label_97)
  (Wrd193.Obj) = (Rsp [3]);
  (Wrd194.Obj) = (current_block [OBJECT_11_9]);
  (Wrd195.Obj) = (Rsp [0]);
  (Wrd198.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_28]))));
  (* (--Rsp)) = (Wrd198.Obj);
  (* (--Rsp)) = (Wrd195.Obj);
  (* (--Rsp)) = (Wrd194.Obj);
  (* (--Rsp)) = (Wrd193.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_8]), 3);

DEFLABEL (label_61)
  goto label_96;

DEFLABEL (label_99)
  (Wrd210.Obj) = (Rsp [1]);
  (Wrd211.Obj) = (current_block [OBJECT_11_7]);
  (Wrd212.Obj) = (current_block [OBJECT_11_6]);
  (Wrd215.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_27]))));
  (* (--Rsp)) = (Wrd215.Obj);
  (* (--Rsp)) = (Wrd212.Obj);
  (* (--Rsp)) = (Wrd211.Obj);
  (* (--Rsp)) = (Wrd210.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_8]), 3);

DEFLABEL (label_62)
  goto label_98;

DEFLABEL (label_101)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [5]);
  (Wrd25.Obj) = (current_block [OBJECT_11_5]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_26]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 2);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_19])), (Wrd9.pObj));

DEFLABEL (label_52)
  (Wrd8.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_22])), (Wrd7.pObj));

DEFLABEL (label_53)
  (Wrd6.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  if (! ((Wrd25.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_106;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = ((Wrd24.pObj) [2]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd24.pObj) [4]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_10);
  goto label_106;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_11_25);
  goto label_93;

DEFLABEL (lambda_74)
  CLOSURE_HEADER (LABEL_11_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_17]));

DEFLABEL (lambda_75)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_11_15);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_111;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_111;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_110)
  (Wrd21.Obj) = (current_block [OBJECT_11_4]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 10)
    goto label_109;

DEFLABEL (label_108)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 2);

DEFLABEL (label_109)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd31.Lng))))
    goto label_108;
  Rvl = ((Wrd29.pObj) [10]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_111)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_11_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 2);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (lambda_76)
  CLOSURE_HEADER (LABEL_11_39);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_115;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd19.Lng))))
    goto label_115;
  (Wrd11.Obj) = ((Wrd17.pObj) [4]);

DEFLABEL (label_114)
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_113;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd35.Lng))))
    goto label_113;
  (Wrd27.Obj) = ((Wrd33.pObj) [8]);

DEFLABEL (label_112)
  (Rsp [3]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_47]));

DEFLABEL (label_113)
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.Obj) = (current_block [OBJECT_11_9]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_46]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 2);

DEFLABEL (label_66)
  (Wrd27.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.Obj) = (current_block [OBJECT_11_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_45]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 2);

DEFLABEL (label_65)
  (Wrd11.Obj) = Rvl;
  goto label_114;

DEFLABEL (lambda_77)
  CLOSURE_HEADER (LABEL_11_43);

DEFLABEL (lambda_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_52]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_11_51);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_118;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_56]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_11_15]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_57]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_11_56);

DEFLABEL (label_118)
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [3]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_11_13]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd24.uLng) == 10)
    goto label_117;

DEFLABEL (label_116)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_8]), 3);

DEFLABEL (label_117)
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 23L) < ((unsigned long) (Wrd22.Lng))))
    goto label_116;
  ((Wrd20.pObj) [24]) = (Wrd8.Obj);
  Rvl = (current_block [OBJECT_11_14]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_78)
  CLOSURE_HEADER (LABEL_11_49);

DEFLABEL (lambda_45)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_131;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 23L) < ((unsigned long) (Wrd20.Lng))))
    goto label_131;
  (Wrd7.Obj) = ((Wrd18.pObj) [24]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_120;

DEFLABEL (label_119)
  Rvl = (current_block [OBJECT_11_14]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_120)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_54]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_55]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_11_54);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_122;

DEFLABEL (label_121)
  Rvl = (current_block [OBJECT_11_14]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_122)
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 10))
    goto label_130;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_130;
  (Wrd7.Obj) = ((Wrd13.pObj) [4]);

DEFLABEL (label_129)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_128;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_128;
  (Wrd23.Obj) = ((Wrd27.pObj) [4]);

DEFLABEL (label_127)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_126;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd42.Lng))))
    goto label_126;
  (Wrd36.Obj) = ((Wrd40.pObj) [17]);

DEFLABEL (label_125)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [2]);
  if (! ((Wrd36.Obj) == (Wrd51.Obj)))
    goto label_121;
  (Wrd54.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd54.Obj);
  (Wrd55.Obj) = ((Wrd50.pObj) [3]);
  (Rsp [2]) = (Wrd55.Obj);
  (Wrd58.Obj) = (current_block [OBJECT_11_13]);
  (Rsp [1]) = (Wrd58.Obj);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd71.uLng) == 10)
    goto label_124;

DEFLABEL (label_123)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_8]), 3);

DEFLABEL (label_124)
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 23L) < ((unsigned long) (Wrd69.Lng))))
    goto label_123;
  ((Wrd67.pObj) [24]) = (Wrd55.Obj);
  goto label_121;

DEFLABEL (label_126)
  (Wrd45.Obj) = (current_block [OBJECT_11_16]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_60]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 2);

DEFLABEL (label_70)
  (Wrd36.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  (Wrd32.Obj) = (current_block [OBJECT_11_2]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_59]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 2);

DEFLABEL (label_69)
  (Wrd23.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_11_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_58]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 2);

DEFLABEL (label_68)
  (Wrd7.Obj) = Rvl;
  goto label_129;

DEFLABEL (label_131)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (current_block [OBJECT_11_13]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_53]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 2);

DEFLABEL (label_67)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_120;
  goto label_119;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_7 5
#define LABEL_12_8 7
#define LABEL_12_5 9
#define LABEL_12_9 11
#define LABEL_12_10 13
#define LABEL_12_11 15
#define LABEL_12_12 17
#define LABEL_12_13 19
#define LABEL_12_14 21
#define LABEL_12_15 23
#define LABEL_12_16 25
#define LABEL_12_17 27
#define LABEL_12_18 29
#define LABEL_12_21 31
#define LABEL_12_23 33
#define LABEL_12_24 35
#define LABEL_12_25 37
#define LABEL_12_26 39
#define LABEL_12_27 41
#define LABEL_12_28 43
#define TAG_12_29 20
#define LABEL_12_31 45
#define LABEL_12_19 47
#define TAG_12_20 22
#define LABEL_12_32 49
#define LABEL_12_35 51
#define LABEL_12_36 53
#define LABEL_12_37 55
#define LABEL_12_38 57
#define LABEL_12_33 59
#define ENVIRONMENT_LABEL_12_3 87
#define DEBUGGING_LABEL_12_2 86
#define OBJECT_12_14 85
#define OBJECT_12_13 84
#define OBJECT_12_12 83
#define OBJECT_12_11 82
#define OBJECT_12_10 81
#define OBJECT_12_9 80
#define OBJECT_12_8 79
#define OBJECT_12_7 78
#define OBJECT_12_6 77
#define OBJECT_12_5 76
#define OBJECT_12_4 75
#define OBJECT_12_3 74
#define OBJECT_12_2 73
#define OBJECT_12_1 72
#define OBJECT_12_0 71
#define EXECUTE_CACHE_12_39 61
#define EXECUTE_CACHE_12_34 63
#define EXECUTE_CACHE_12_30 65
#define EXECUTE_CACHE_12_22 67
#define EXECUTE_CACHE_12_6 69
#define FREE_REFERENCES_LABEL_12_0 60
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd47;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd133;
  machine_word Wrd135;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd128;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd113;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd110;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd91;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd172;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd158;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd189;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd175;
  machine_word Wrd181;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd210;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd195;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd201;
  machine_word Wrd205;
  machine_word Wrd204;
  machine_word Wrd194;
  machine_word Wrd193;
  machine_word Wrd191;
  machine_word Wrd192;
  machine_word Wrd227;
  machine_word Wrd224;
  machine_word Wrd223;
  machine_word Wrd222;
  machine_word Wrd219;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd83;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd240;
  machine_word Wrd244;
  machine_word Wrd232;
  machine_word Wrd230;
  machine_word Wrd228;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd67;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd51;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd48;
  machine_word Wrd247;
  machine_word Wrd253;
  machine_word Wrd252;
  machine_word Wrd251;
  machine_word Wrd255;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd271;
  machine_word Wrd267;
  machine_word Wrd266;
  machine_word Wrd263;
  machine_word Wrd262;
  machine_word Wrd261;
  machine_word Wrd265;
  machine_word Wrd264;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd288;
  machine_word Wrd285;
  machine_word Wrd284;
  machine_word Wrd283;
  machine_word Wrd274;
  machine_word Wrd280;
  machine_word Wrd279;
  machine_word Wrd278;
  machine_word Wrd282;
  machine_word Wrd281;
  machine_word Wrd31;
  machine_word Wrd290;
  machine_word Wrd27;
  machine_word Wrd26;
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
  machine_word Wrd311;
  machine_word Wrd308;
  machine_word Wrd307;
  machine_word Wrd306;
  machine_word Wrd297;
  machine_word Wrd303;
  machine_word Wrd302;
  machine_word Wrd301;
  machine_word Wrd305;
  machine_word Wrd304;
  machine_word Wrd324;
  machine_word Wrd321;
  machine_word Wrd320;
  machine_word Wrd293;
  machine_word Wrd317;
  machine_word Wrd316;
  machine_word Wrd315;
  machine_word Wrd319;
  machine_word Wrd318;
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
      current_block = (Rpc - LABEL_12_4);
      goto graft_blockB_37;

    case 1:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_11;

    case 2:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto label_54;

    case 5:
      current_block = (Rpc - LABEL_12_10);
      goto label_53;

    case 6:
      current_block = (Rpc - LABEL_12_11);
      goto label_39;

    case 7:
      current_block = (Rpc - LABEL_12_12);
      goto label_40;

    case 8:
      current_block = (Rpc - LABEL_12_13);
      goto label_52;

    case 9:
      current_block = (Rpc - LABEL_12_14);
      goto label_41;

    case 10:
      current_block = (Rpc - LABEL_12_15);
      goto label_51;

    case 11:
      current_block = (Rpc - LABEL_12_16);
      goto label_42;

    case 12:
      current_block = (Rpc - LABEL_12_17);
      goto label_43;

    case 13:
      current_block = (Rpc - LABEL_12_18);
      goto label_50;

    case 14:
      current_block = (Rpc - LABEL_12_21);
      goto label_49;

    case 15:
      current_block = (Rpc - LABEL_12_23);
      goto label_48;

    case 16:
      current_block = (Rpc - LABEL_12_24);
      goto label_47;

    case 17:
      current_block = (Rpc - LABEL_12_25);
      goto label_44;

    case 18:
      current_block = (Rpc - LABEL_12_26);
      goto label_46;

    case 19:
      current_block = (Rpc - LABEL_12_27);
      goto label_45;

    case 20:
      current_block = (Rpc - LABEL_12_28);
      goto lambda_63;

    case 21:
      current_block = (Rpc - LABEL_12_31);
      goto label_55;

    case 22:
      current_block = (Rpc - LABEL_12_19);
      goto lambda_62;

    case 23:
      current_block = (Rpc - LABEL_12_32);
      goto continuation_26;

    case 24:
      current_block = (Rpc - LABEL_12_35);
      goto label_56;

    case 25:
      current_block = (Rpc - LABEL_12_36);
      goto label_57;

    case 26:
      current_block = (Rpc - LABEL_12_37);
      goto label_58;

    case 27:
      current_block = (Rpc - LABEL_12_38);
      goto label_59;

    case 28:
      current_block = (Rpc - LABEL_12_33);
      goto continuation_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graft_blockB_61)
DEFLABEL (graft_blockB_37)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_100;

DEFLABEL (label_99)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_98;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd18.Lng))))
    goto label_98;
  (Wrd12.Obj) = ((Wrd16.pObj) [18]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_97)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_96;
  (Wrd290.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if ((Wrd290.Lng) == 0)
    goto label_94;

DEFLABEL (label_93)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_92;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd40.Lng) = ((Wrd42.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd40.Lng)))
    goto label_92;
  (Wrd37.Obj) = (LONG_TO_FIXNUM (Wrd40.Lng));

DEFLABEL (label_91)
  (Wrd264.Obj) = (Rsp [3]);
  (Wrd265.uLng) = (OBJECT_TYPE (Wrd264.Obj));
  if (! ((Wrd265.uLng) == 10))
    goto label_90;
  (Wrd261.pObj) = (OBJECT_ADDRESS (Wrd264.Obj));
  (Wrd262.Obj) = ((Wrd261.pObj) [0]);
  (Wrd263.Lng) = (FIXNUM_TO_LONG (Wrd262.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd263.Lng))))
    goto label_90;
  ((Wrd261.pObj) [18]) = (Wrd37.Obj);

DEFLABEL (label_89)
  (Wrd43.Obj) = (current_block [OBJECT_12_3]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd255.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd255.uLng) == 10)
    goto label_65;

DEFLABEL (label_64)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 3);

DEFLABEL (label_65)
  (Wrd251.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd252.Obj) = ((Wrd251.pObj) [0]);
  (Wrd253.Lng) = (FIXNUM_TO_LONG (Wrd252.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd253.Lng))))
    goto label_64;
  (Wrd247.Obj) = (Rsp [2]);
  ((Wrd251.pObj) [18]) = (Wrd247.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_88)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd58.Obj) = (Rsp [3]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 10))
    goto label_87;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd57.Lng))))
    goto label_87;
  (Wrd51.Obj) = ((Wrd55.pObj) [4]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_86)
  (Wrd74.Obj) = (Rsp [3]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 10))
    goto label_85;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [0]);
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd73.Lng))))
    goto label_85;
  (Wrd67.Obj) = ((Wrd71.pObj) [4]);
  (* (--Rsp)) = (Wrd67.Obj);

DEFLABEL (label_84)
  (Wrd81.Obj) = (Rsp [1]);
  if ((Wrd81.Obj) == ((SCHEME_OBJECT) 0))
    goto label_83;
  (Wrd83.Obj) = (Rsp [0]);
  if ((Wrd83.Obj) == ((SCHEME_OBJECT) 0))
    goto label_78;
  if ((Wrd83.Obj) == (Wrd81.Obj))
    goto label_66;
  (Wrd87.Obj) = (current_block [OBJECT_12_9]);
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd88.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd88.Obj);
  (Wrd89.Obj) = (Rsp [6]);
  (Rsp [2]) = (Wrd89.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_30]));

DEFLABEL (label_66)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_77)
  (Wrd182.Obj) = (Rsp [3]);
  (Wrd183.uLng) = (OBJECT_TYPE (Wrd182.Obj));
  if (! ((Wrd183.uLng) == 10))
    goto label_76;
  (Wrd179.pObj) = (OBJECT_ADDRESS (Wrd182.Obj));
  (Wrd180.Obj) = ((Wrd179.pObj) [0]);
  (Wrd181.Lng) = (FIXNUM_TO_LONG (Wrd180.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd181.Lng))))
    goto label_76;
  (Wrd175.Obj) = (Rsp [0]);
  ((Wrd179.pObj) [18]) = (Wrd175.Obj);

DEFLABEL (label_75)
  (Wrd165.Obj) = (Rsp [2]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if (! ((Wrd166.uLng) == 10))
    goto label_74;
  (Wrd162.pObj) = (OBJECT_ADDRESS (Wrd165.Obj));
  (Wrd163.Obj) = ((Wrd162.pObj) [0]);
  (Wrd164.Lng) = (FIXNUM_TO_LONG (Wrd163.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd164.Lng))))
    goto label_74;
  (Wrd158.Obj) = (Rsp [1]);
  ((Wrd162.pObj) [17]) = (Wrd158.Obj);

DEFLABEL (label_73)
  (Wrd100.Obj) = (Rsp [1]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 10))
    goto label_72;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [0]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd99.Lng))))
    goto label_72;
  (Wrd91.Obj) = ((Wrd97.pObj) [19]);

DEFLABEL (label_71)
  (Wrd110.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd110.Obj);
  (* (Rhp++)) = (Wrd91.Obj);
  (Wrd108.pObj) = (& (Rhp [-2]));
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd108.pObj)));
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd148.Obj) = (Rsp [2]);
  (Wrd149.uLng) = (OBJECT_TYPE (Wrd148.Obj));
  if (! ((Wrd149.uLng) == 10))
    goto label_70;
  (Wrd145.pObj) = (OBJECT_ADDRESS (Wrd148.Obj));
  (Wrd146.Obj) = ((Wrd145.pObj) [0]);
  (Wrd147.Lng) = (FIXNUM_TO_LONG (Wrd146.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd147.Lng))))
    goto label_70;
  ((Wrd145.pObj) [19]) = (Wrd109.Obj);

DEFLABEL (label_69)
  (Wrd120.Obj) = (Rsp [2]);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if (! ((Wrd121.uLng) == 10))
    goto label_68;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd120.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd118.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd119.Lng))))
    goto label_68;
  (Wrd113.Obj) = ((Wrd117.pObj) [9]);
  (* (--Rsp)) = (Wrd113.Obj);

DEFLABEL (label_67)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd129.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_28])));
  Rhp += 1;
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd129.pObj)));
  Wrd130 = Wrd129;
  (Wrd131.Obj) = (Rsp [0]);
  ((Wrd130.pObj) [2]) = (Wrd131.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [3]) = (Wrd128.Obj);
  (Wrd136.Obj) = (Rsp [2]);
  (Wrd137.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd136.Obj);
  (* (Rhp++)) = (Wrd137.Obj);
  (Wrd135.pObj) = (& (Rhp [-2]));
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd135.pObj)));
  (Rsp [4]) = (Wrd133.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_22]));

DEFLABEL (label_68)
  (Wrd122.Obj) = (Rsp [2]);
  (Wrd123.Obj) = (current_block [OBJECT_12_8]);
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_27]))));
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd150.Obj) = (Rsp [2]);
  (Wrd151.Obj) = (current_block [OBJECT_12_6]);
  (Wrd152.Obj) = (Rsp [0]);
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_26]))));
  (* (--Rsp)) = (Wrd155.Obj);
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = (Wrd151.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 3);

DEFLABEL (label_46)
  goto label_69;

DEFLABEL (label_72)
  (Wrd102.Obj) = (Rsp [1]);
  (Wrd103.Obj) = (current_block [OBJECT_12_6]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_25]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_44)
  (Wrd91.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd167.Obj) = (Rsp [2]);
  (Wrd168.Obj) = (current_block [OBJECT_12_7]);
  (Wrd169.Obj) = (Rsp [1]);
  (Wrd172.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_24]))));
  (* (--Rsp)) = (Wrd172.Obj);
  (* (--Rsp)) = (Wrd169.Obj);
  (* (--Rsp)) = (Wrd168.Obj);
  (* (--Rsp)) = (Wrd167.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 3);

DEFLABEL (label_47)
  goto label_73;

DEFLABEL (label_76)
  (Wrd184.Obj) = (Rsp [3]);
  (Wrd185.Obj) = (current_block [OBJECT_12_3]);
  (Wrd186.Obj) = (Rsp [0]);
  (Wrd189.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_23]))));
  (* (--Rsp)) = (Wrd189.Obj);
  (* (--Rsp)) = (Wrd186.Obj);
  (* (--Rsp)) = (Wrd185.Obj);
  (* (--Rsp)) = (Wrd184.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 3);

DEFLABEL (label_48)
  goto label_75;

DEFLABEL (label_78)
  (Wrd220.Obj) = (Rsp [4]);
  (Wrd221.uLng) = (OBJECT_TYPE (Wrd220.Obj));
  if (! ((Wrd221.uLng) == 10))
    goto label_82;
  (Wrd217.pObj) = (OBJECT_ADDRESS (Wrd220.Obj));
  (Wrd218.Obj) = ((Wrd217.pObj) [0]);
  (Wrd219.Lng) = (FIXNUM_TO_LONG (Wrd218.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd219.Lng))))
    goto label_82;
  ((Wrd217.pObj) [4]) = (Wrd81.Obj);

DEFLABEL (label_81)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd192.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_19])));
  Rhp += 1;
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd192.pObj)));
  Wrd193 = Wrd192;
  (Wrd194.Obj) = (Rsp [1]);
  ((Wrd193.pObj) [2]) = (Wrd194.Obj);
  (Rsp [0]) = (Wrd191.Obj);
  (Wrd204.Obj) = (Rsp [4]);
  (Wrd205.uLng) = (OBJECT_TYPE (Wrd204.Obj));
  if (! ((Wrd205.uLng) == 10))
    goto label_80;
  (Wrd201.pObj) = (OBJECT_ADDRESS (Wrd204.Obj));
  (Wrd202.Obj) = ((Wrd201.pObj) [0]);
  (Wrd203.Lng) = (FIXNUM_TO_LONG (Wrd202.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd203.Lng))))
    goto label_80;
  (Wrd195.Obj) = ((Wrd201.pObj) [19]);

DEFLABEL (label_79)
  (Rsp [1]) = (Wrd195.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_22]));

DEFLABEL (label_80)
  (Wrd206.Obj) = (Rsp [4]);
  (Wrd207.Obj) = (current_block [OBJECT_12_6]);
  (Wrd210.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_21]))));
  (* (--Rsp)) = (Wrd210.Obj);
  (* (--Rsp)) = (Wrd207.Obj);
  (* (--Rsp)) = (Wrd206.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_49)
  (Wrd195.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd222.Obj) = (Rsp [4]);
  (Wrd223.Obj) = (current_block [OBJECT_12_5]);
  (Wrd224.Obj) = (Rsp [1]);
  (Wrd227.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_18]))));
  (* (--Rsp)) = (Wrd227.Obj);
  (* (--Rsp)) = (Wrd224.Obj);
  (* (--Rsp)) = (Wrd223.Obj);
  (* (--Rsp)) = (Wrd222.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 3);

DEFLABEL (label_50)
  goto label_81;

DEFLABEL (label_83)
  (Wrd228.Obj) = (Rsp [0]);
  if ((Wrd228.Obj) == ((SCHEME_OBJECT) 0))
    goto label_66;
  (Wrd230.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd230.Obj);
  (Rsp [2]) = (Wrd228.Obj);
  (Wrd232.Obj) = (current_block [OBJECT_12_5]);
  (Rsp [1]) = (Wrd232.Obj);
  (Wrd244.uLng) = (OBJECT_TYPE (Wrd230.Obj));
  if (! ((Wrd244.uLng) == 10))
    goto label_64;
  (Wrd240.pObj) = (OBJECT_ADDRESS (Wrd230.Obj));
  (Wrd241.Obj) = ((Wrd240.pObj) [0]);
  (Wrd242.Lng) = (FIXNUM_TO_LONG (Wrd241.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd242.Lng))))
    goto label_64;
  ((Wrd240.pObj) [4]) = (Wrd228.Obj);
  Rsp = (& (Rsp [4]));
  goto label_77;

DEFLABEL (label_85)
  (Wrd76.Obj) = (Rsp [3]);
  (Wrd77.Obj) = (current_block [OBJECT_12_5]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_17]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd60.Obj) = (Rsp [3]);
  (Wrd61.Obj) = (current_block [OBJECT_12_5]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (label_90)
  (Wrd266.Obj) = (Rsp [3]);
  (Wrd267.Obj) = (current_block [OBJECT_12_3]);
  (Wrd271.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd271.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd267.Obj);
  (* (--Rsp)) = (Wrd266.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 3);

DEFLABEL (label_51)
  goto label_89;

DEFLABEL (label_92)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_41)
  (Wrd37.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd281.Obj) = (Rsp [3]);
  (Wrd282.uLng) = (OBJECT_TYPE (Wrd281.Obj));
  if (! ((Wrd282.uLng) == 10))
    goto label_95;
  (Wrd278.pObj) = (OBJECT_ADDRESS (Wrd281.Obj));
  (Wrd279.Obj) = ((Wrd278.pObj) [0]);
  (Wrd280.Lng) = (FIXNUM_TO_LONG (Wrd279.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd280.Lng))))
    goto label_95;
  (Wrd274.Obj) = (Rsp [5]);
  ((Wrd278.pObj) [8]) = (Wrd274.Obj);
  goto label_93;

DEFLABEL (label_95)
  (Wrd283.Obj) = (Rsp [3]);
  (Wrd284.Obj) = (current_block [OBJECT_12_0]);
  (Wrd285.Obj) = (Rsp [5]);
  (Wrd288.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd288.Obj);
  (* (--Rsp)) = (Wrd285.Obj);
  (* (--Rsp)) = (Wrd284.Obj);
  (* (--Rsp)) = (Wrd283.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 3);

DEFLABEL (label_52)
  goto label_93;

DEFLABEL (label_96)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_40)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_93;
  goto label_94;

DEFLABEL (label_98)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_12_3]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd318.Obj) = (Rsp [3]);
  (Wrd319.uLng) = (OBJECT_TYPE (Wrd318.Obj));
  if (! ((Wrd319.uLng) == 10))
    goto label_103;
  (Wrd315.pObj) = (OBJECT_ADDRESS (Wrd318.Obj));
  (Wrd316.Obj) = ((Wrd315.pObj) [0]);
  (Wrd317.Lng) = (FIXNUM_TO_LONG (Wrd316.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd317.Lng))))
    goto label_103;
  (Wrd293.Obj) = ((Wrd315.pObj) [8]);
  if (! ((Wrd293.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_99;

DEFLABEL (label_102)
  (Wrd304.Obj) = (Rsp [2]);
  (Wrd305.uLng) = (OBJECT_TYPE (Wrd304.Obj));
  if (! ((Wrd305.uLng) == 10))
    goto label_101;
  (Wrd301.pObj) = (OBJECT_ADDRESS (Wrd304.Obj));
  (Wrd302.Obj) = ((Wrd301.pObj) [0]);
  (Wrd303.Lng) = (FIXNUM_TO_LONG (Wrd302.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd303.Lng))))
    goto label_101;
  (Wrd297.Obj) = (current_block [OBJECT_12_2]);
  ((Wrd301.pObj) [18]) = (Wrd297.Obj);
  goto label_88;

DEFLABEL (label_101)
  (Wrd306.Obj) = (Rsp [2]);
  (Wrd307.Obj) = (current_block [OBJECT_12_3]);
  (Wrd308.Obj) = (current_block [OBJECT_12_2]);
  (Wrd311.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd311.Obj);
  (* (--Rsp)) = (Wrd308.Obj);
  (* (--Rsp)) = (Wrd307.Obj);
  (* (--Rsp)) = (Wrd306.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 3);

DEFLABEL (label_53)
  goto label_88;

DEFLABEL (label_103)
  (Wrd320.Obj) = (Rsp [3]);
  (Wrd321.Obj) = (current_block [OBJECT_12_0]);
  (Wrd324.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd324.Obj);
  (* (--Rsp)) = (Wrd321.Obj);
  (* (--Rsp)) = (Wrd320.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_54)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_102;
  goto label_99;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_12_7);
  goto label_77;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_8);
  goto label_88;

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_12_28);

DEFLABEL (lambda_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_117;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd22.Lng))))
    goto label_117;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd20.pObj) [9]) = (Wrd16.Obj);

DEFLABEL (label_116)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_34]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_12_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_39]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_12_32);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_115;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_115;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_114)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_12_12])))
    goto label_105;

DEFLABEL (label_104)
  Rvl = (current_block [OBJECT_12_10]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_105)
  (Wrd22.Obj) = (current_block [OBJECT_12_13]);
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_113;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd32.Lng))))
    goto label_113;
  (Wrd24.Obj) = ((Wrd30.pObj) [5]);

DEFLABEL (label_112)
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_111;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd40.Obj) = ((Wrd41.pObj) [0]);

DEFLABEL (label_110)
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_109;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd53.Lng))))
    goto label_109;
  (Wrd47.Obj) = ((Wrd51.pObj) [8]);

DEFLABEL (label_108)
  (Rsp [1]) = (Wrd47.Obj);
  (Wrd60.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd60.Obj);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd73.uLng) == 10)
    goto label_107;

DEFLABEL (label_106)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 3);

DEFLABEL (label_107)
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) 21L) < ((unsigned long) (Wrd71.Lng))))
    goto label_106;
  ((Wrd69.pObj) [22]) = (Wrd60.Obj);
  goto label_104;

DEFLABEL (label_109)
  (Wrd56.Obj) = (current_block [OBJECT_12_0]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_38]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_59)
  (Wrd47.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_37]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_14]), 1);

DEFLABEL (label_58)
  (Wrd40.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_12_11]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_36]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_57)
  (Wrd24.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_12_11]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_35]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_56)
  (Wrd5.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_12_8]);
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [2]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_31]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 3);

DEFLABEL (label_55)
  goto label_116;

DEFLABEL (lambda_62)
  CLOSURE_HEADER (LABEL_12_19);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12_5]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd22.uLng) == 10)
    goto label_119;

DEFLABEL (label_118)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 3);

DEFLABEL (label_119)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd20.Lng))))
    goto label_118;
  ((Wrd18.pObj) [4]) = (Wrd6.Obj);
  Rvl = (current_block [OBJECT_12_10]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_8 9
#define LABEL_13_9 11
#define LABEL_13_10 13
#define LABEL_13_11 15
#define ENVIRONMENT_LABEL_13_3 27
#define DEBUGGING_LABEL_13_2 26
#define OBJECT_13_6 25
#define OBJECT_13_5 24
#define OBJECT_13_4 23
#define OBJECT_13_3 22
#define OBJECT_13_2 21
#define OBJECT_13_1 20
#define OBJECT_13_0 19
#define EXECUTE_CACHE_13_7 17
#define FREE_REFERENCES_LABEL_13_0 16
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd97;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd78;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd65;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd72;
  machine_word Wrd64;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd42;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd98;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_13_4);
      goto indirection_block_procedure_8;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_13_9);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_13_10);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_13_11);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (indirection_block_procedure_17)
DEFLABEL (indirection_block_procedure_8)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_34;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_33)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = (Wrd21.Obj);

DEFLABEL (label_18)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_32;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd33.Lng))))
    goto label_32;
  (Wrd25.Obj) = ((Wrd31.pObj) [19]);

DEFLABEL (label_31)
  if (! ((Wrd25.Obj) == (current_block [OBJECT_13_3])))
    goto label_20;
  (Wrd98.Obj) = (current_block [OBJECT_13_4]);
  (Rsp [0]) = (Wrd98.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (label_20)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_30;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd50.Lng))))
    goto label_30;
  (Wrd42.Obj) = ((Wrd48.pObj) [19]);

DEFLABEL (label_29)
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_28;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd58.Obj) = ((Wrd59.pObj) [0]);

DEFLABEL (label_27)
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd72.uLng) == 10))
    goto label_26;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd71.Lng))))
    goto label_26;
  (Wrd65.Obj) = ((Wrd69.pObj) [5]);

DEFLABEL (label_25)
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd80.uLng) == 1))
    goto label_24;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd78.Obj) = ((Wrd79.pObj) [0]);

DEFLABEL (label_23)
  (Rsp [0]) = (Wrd78.Obj);
  (Wrd85.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd85.Obj);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if ((Wrd97.uLng) == 10)
    goto label_22;

DEFLABEL (label_21)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_22)
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd94.Obj) = ((Wrd93.pObj) [0]);
  (Wrd95.Lng) = (FIXNUM_TO_LONG (Wrd94.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd95.Lng))))
    goto label_21;
  Rvl = ((Wrd93.pObj) [8]);
  goto label_18;

DEFLABEL (label_24)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_5]), 1);

DEFLABEL (label_15)
  (Wrd78.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd74.Obj) = (current_block [OBJECT_13_6]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_14)
  (Wrd65.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_5]), 1);

DEFLABEL (label_13)
  (Wrd58.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.Obj) = (current_block [OBJECT_13_2]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_12)
  (Wrd42.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (current_block [OBJECT_13_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_11)
  (Wrd25.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_13_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define LABEL_14_7 9
#define LABEL_14_8 11
#define ENVIRONMENT_LABEL_14_3 22
#define DEBUGGING_LABEL_14_2 21
#define OBJECT_14_3 20
#define OBJECT_14_2 19
#define OBJECT_14_1 18
#define OBJECT_14_0 17
#define EXECUTE_CACHE_14_9 13
#define FREE_REFERENCE_14_0 16
#define FREE_REFERENCES_LABEL_14_0 12
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd48;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
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
      current_block = (Rpc - LABEL_14_4);
      goto lvalue_implicitP_5;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_14_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_14_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lvalue_implicitP_12)
DEFLABEL (lvalue_implicitP_5)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd13.Lng))))
    goto label_22;
  (Wrd7.Obj) = ((Wrd11.pObj) [10]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_21)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_14;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_20;
  Wrd23 = Wrd27;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_18;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd37.Lng))))
    goto label_18;
  (Wrd29.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_17)
  (Wrd45.Obj) = (* (Rsp++));
  if (! ((Wrd29.Obj) == (Wrd45.Obj)))
    goto label_13;
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_16;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd56.Lng))))
    goto label_16;
  (Wrd48.Obj) = ((Wrd54.pObj) [4]);

DEFLABEL (label_15)
  (Rsp [1]) = (Wrd48.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (label_16)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.Obj) = (current_block [OBJECT_14_3]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_10)
  (Wrd48.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_14_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_9)
  (Wrd29.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_6])), (Wrd24.pObj));

DEFLABEL (label_8)
  (Wrd23.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_14_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_7 9
#define LABEL_15_10 11
#define LABEL_15_8 13
#define ENVIRONMENT_LABEL_15_3 25
#define DEBUGGING_LABEL_15_2 24
#define OBJECT_15_2 23
#define OBJECT_15_1 22
#define OBJECT_15_0 21
#define EXECUTE_CACHE_15_11 15
#define EXECUTE_CACHE_15_9 17
#define FREE_REFERENCE_15_0 20
#define FREE_REFERENCES_LABEL_15_0 14
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd51;
  machine_word Wrd50;
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
      current_block = (Rpc - LABEL_15_4);
      goto lvalue_known_closure_6;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_15_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lvalue_known_closure_12)
DEFLABEL (lvalue_known_closure_6)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd13.Lng))))
    goto label_24;
  (Wrd5.Obj) = ((Wrd11.pObj) [10]);

DEFLABEL (label_23)
  (Rsp [0]) = (Wrd5.Obj);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_14;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_22;
  Wrd23 = Wrd27;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_20;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd37.Lng))))
    goto label_20;
  (Wrd29.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_19)
  (Wrd45.Obj) = (* (Rsp++));
  if (! ((Wrd29.Obj) == (Wrd45.Obj)))
    goto label_13;
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_15_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_17)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_15;

DEFLABEL (label_16)
  Rvl = (Rsp [0]);

DEFLABEL (label_15)
DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_15_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_10)
  (Wrd29.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_6])), (Wrd24.pObj));

DEFLABEL (label_9)
  (Wrd23.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_15_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define ENVIRONMENT_LABEL_16_3 15
#define DEBUGGING_LABEL_16_2 14
#define OBJECT_16_0 13
#define EXECUTE_CACHE_16_8 9
#define EXECUTE_CACHE_16_6 11
#define FREE_REFERENCES_LABEL_16_0 8
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_16_4);
      goto procedure_full_closureP_2;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_full_closureP_5)
DEFLABEL (procedure_full_closureP_2)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_16_0]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_7 9
#define LABEL_17_8 11
#define LABEL_17_11 13
#define TAG_17_12 5
#define LABEL_17_9 15
#define TAG_17_10 6
#define ENVIRONMENT_LABEL_17_3 20
#define DEBUGGING_LABEL_17_2 19
#define OBJECT_17_2 18
#define OBJECT_17_1 17
#define OBJECT_17_0 16
#define FREE_REFERENCES_LABEL_17_0 16
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_17_4);
      goto list_split_13;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto split_11;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_17_11);
      goto lambda_21;

    case 6:
      current_block = (Rpc - LABEL_17_9);
      goto lambda_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (list_split_18)
DEFLABEL (list_split_13)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto split_11;

DEFLABEL (split_19)
DEFLABEL (split_11)
  INTERRUPT_CHECK (26, LABEL_17_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_22;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17_2]);
  (Rsp [3]) = (Wrd8.Obj);
  (Rsp [4]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_22)
  if (! ((Wrd6.uLng) == 1))
    goto label_29;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_28)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_27;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_26)
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd33.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_17_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_11])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Wrd13 = Wrd7;
  goto label_23;

DEFLABEL (label_24)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_9])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd19 = Wrd16;
  (Wrd20.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  Wrd13 = Wrd15;

DEFLABEL (label_23)
DEFLABEL (label_25)
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  goto split_11;

DEFLABEL (label_27)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_16)
  (Wrd20.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_17_11);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd12.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [0]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_17_9);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd12.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [0]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_5 3
#define LABEL_18_7 5
#define LABEL_18_4 7
#define LABEL_18_11 9
#define LABEL_18_9 11
#define TAG_18_10 4
#define LABEL_18_6 13
#define LABEL_18_14 15
#define TAG_18_15 6
#define LABEL_18_18 17
#define LABEL_18_16 19
#define TAG_18_17 8
#define LABEL_18_19 21
#define LABEL_18_20 23
#define LABEL_18_21 25
#define ENVIRONMENT_LABEL_18_3 45
#define DEBUGGING_LABEL_18_2 44
#define OBJECT_18_6 43
#define OBJECT_18_5 42
#define OBJECT_18_4 41
#define OBJECT_18_3 40
#define OBJECT_18_2 39
#define OBJECT_18_1 38
#define OBJECT_18_0 37
#define EXECUTE_CACHE_18_22 27
#define EXECUTE_CACHE_18_13 29
#define EXECUTE_CACHE_18_12 31
#define EXECUTE_CACHE_18_8 33
#define FREE_REFERENCE_18_0 36
#define FREE_REFERENCES_LABEL_18_0 26
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd67;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd77;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd40;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_18_7);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_18_4);
      goto find_closure_bindings_18;

    case 3:
      current_block = (Rpc - LABEL_18_11);
      goto continuation_12;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto lambda_26;

    case 5:
      current_block = (Rpc - LABEL_18_6);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_18_14);
      goto lambda_27;

    case 7:
      current_block = (Rpc - LABEL_18_18);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_18_16);
      goto lambda_28;

    case 9:
      current_block = (Rpc - LABEL_18_19);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_18_20);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_18_21);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_closure_bindings_25)
DEFLABEL (find_closure_bindings_18)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;

DEFLABEL (label_33)
  (Wrd11.Obj) = (Rsp [1]);
  if ((Wrd11.Obj) == (current_block [OBJECT_18_2]))
    goto label_30;
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto label_29;

DEFLABEL (label_30)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_29)
DEFLABEL (label_32)
  (Wrd14.Obj) = (Rsp [3]);
  if (! ((Wrd14.Obj) == (current_block [OBJECT_18_2])))
    goto label_31;
  (Wrd23.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd23.Obj);
  Rsp = (& (Rsp [4]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_9])));
  Rhp += 1;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd27 = Wrd26;
  (Wrd28.Obj) = (Rsp [0]);
  ((Wrd27.pObj) [2]) = (Wrd28.Obj);
  Rvl = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_12]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_18_11);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_36;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd46.Lng))))
    goto label_36;
  (Wrd40.Obj) = ((Wrd44.pObj) [9]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_18_6);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_16])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_36)
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.Obj) = (current_block [OBJECT_18_0]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_18_9);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_18_14);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18_3]);
  (Rsp [2]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_18_16);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_47;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd20.Lng))))
    goto label_47;
  (Wrd12.Obj) = ((Wrd18.pObj) [8]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_46)
  (Wrd32.Obj) = (Rsp [0]);
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_45;
  Wrd34 = Wrd38;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_43;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd48.Lng))))
    goto label_43;
  (Wrd40.Obj) = ((Wrd46.pObj) [1]);

DEFLABEL (label_42)
  (Wrd56.Obj) = (* (Rsp++));
  if ((Wrd40.Obj) == (Wrd56.Obj))
    goto label_39;

DEFLABEL (label_38)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_37)
  (Wrd59.Obj) = (Rsp [2]);
  (Wrd60.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd60.Obj);
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd61.Obj) = ((Wrd63.pObj) [2]);
  (Rsp [3]) = (Wrd61.Obj);
  (Rsp [1]) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_22]));

DEFLABEL (label_39)
  (Wrd64.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (current_block [OBJECT_18_6]);
  (Rsp [1]) = (Wrd65.Obj);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd77.uLng) == 10)
    goto label_41;

DEFLABEL (label_40)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_41)
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd75.Lng))))
    goto label_40;
  (Wrd67.Obj) = ((Wrd73.pObj) [23]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd67.Obj);
  goto label_37;

DEFLABEL (label_43)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.Obj) = (current_block [OBJECT_18_5]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_21]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_23)
  (Wrd40.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_20])), (Wrd35.pObj));

DEFLABEL (label_22)
  (Wrd34.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [3]);
  (Wrd28.Obj) = (current_block [OBJECT_18_4]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_19]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_18);
  (* (--Rsp)) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_8 5
#define LABEL_19_7 7
#define LABEL_19_10 9
#define LABEL_19_13 11
#define LABEL_19_5 13
#define TAG_19_6 5
#define LABEL_19_12 15
#define LABEL_19_15 17
#define LABEL_19_16 19
#define ENVIRONMENT_LABEL_19_3 31
#define DEBUGGING_LABEL_19_2 30
#define OBJECT_19_2 29
#define OBJECT_19_1 28
#define OBJECT_19_0 27
#define EXECUTE_CACHE_19_14 21
#define EXECUTE_CACHE_19_11 23
#define EXECUTE_CACHE_19_9 25
#define FREE_REFERENCES_LABEL_19_0 20
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_19_4);
      goto filter_bound_variables_11;

    case 1:
      current_block = (Rpc - LABEL_19_8);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_19_10);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_19_13);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_19_5);
      goto lambda_20;

    case 6:
      current_block = (Rpc - LABEL_19_12);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_19_15);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_19_16);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (filter_bound_variables_19)
DEFLABEL (filter_bound_variables_11)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_19_0])))
    goto label_21;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_5])));
  Rhp += 2;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd25 = Wrd22;
  (Wrd26.Obj) = (Rsp [1]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [0]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  Rvl = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_32;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_27;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_19_12);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_25;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [0]);

DEFLABEL (label_24)
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_23;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_22)
  (Rsp [0]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (label_23)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_16]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_17)
  (Wrd19.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_16)
  (Wrd6.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_30;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_29)
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (label_30)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_15)
  (Wrd20.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_19_5);

DEFLABEL (lambda_9)
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

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_7 7
#define LABEL_20_8 9
#define LABEL_20_9 11
#define LABEL_20_10 13
#define LABEL_20_11 15
#define LABEL_20_12 17
#define ENVIRONMENT_LABEL_20_3 32
#define DEBUGGING_LABEL_20_2 31
#define OBJECT_20_9 30
#define OBJECT_20_8 29
#define OBJECT_20_7 28
#define OBJECT_20_6 27
#define OBJECT_20_5 26
#define OBJECT_20_4 25
#define OBJECT_20_3 24
#define OBJECT_20_2 23
#define OBJECT_20_1 22
#define OBJECT_20_0 21
#define EXECUTE_CACHE_20_6 19
#define FREE_REFERENCES_LABEL_20_0 18
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd60;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd77;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd94;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd102;
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
      current_block = (Rpc - LABEL_20_4);
      goto make_closure_block_8;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_20_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_20_9);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_20_10);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_20_11);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_20_12);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_closure_block_17)
DEFLABEL (make_closure_block_8)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (* (--Rsp)) = Rvl;
  (Wrd102.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd102.uLng) == 10))
    goto label_29;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd99.Obj) = ((Wrd98.pObj) [0]);
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd100.Lng))))
    goto label_29;
  (Wrd94.Obj) = (Rsp [2]);
  ((Wrd98.pObj) [10]) = (Wrd94.Obj);

DEFLABEL (label_28)
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 10))
    goto label_27;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [0]);
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd83.Lng))))
    goto label_27;
  (Wrd77.Obj) = (Rsp [3]);
  ((Wrd81.pObj) [9]) = (Wrd77.Obj);

DEFLABEL (label_26)
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 10))
    goto label_25;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd66.Lng))))
    goto label_25;
  (Wrd60.Obj) = (Rsp [4]);
  ((Wrd64.pObj) [11]) = (Wrd60.Obj);

DEFLABEL (label_24)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_23;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd49.Lng))))
    goto label_23;
  ((Wrd47.pObj) [17]) = (Wrd50.Obj);

DEFLABEL (label_22)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_21;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd32.Lng))))
    goto label_21;
  (Wrd26.Obj) = (current_block [OBJECT_20_6]);
  ((Wrd30.pObj) [18]) = (Wrd26.Obj);

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_19;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd15.Lng))))
    goto label_19;
  (Wrd9.Obj) = (current_block [OBJECT_20_8]);
  ((Wrd13.pObj) [19]) = (Wrd9.Obj);

DEFLABEL (label_18)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_20_9]);
  (Wrd20.Obj) = (current_block [OBJECT_20_8]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_10)
  goto label_18;

DEFLABEL (label_21)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_20_7]);
  (Wrd37.Obj) = (current_block [OBJECT_20_6]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_11)
  goto label_20;

DEFLABEL (label_23)
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.Obj) = (current_block [OBJECT_20_5]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_12)
  goto label_22;

DEFLABEL (label_25)
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd70.Obj) = (current_block [OBJECT_20_4]);
  (Wrd71.Obj) = (Rsp [4]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_13)
  goto label_24;

DEFLABEL (label_27)
  (Wrd86.Obj) = (Rsp [0]);
  (Wrd87.Obj) = (current_block [OBJECT_20_3]);
  (Wrd88.Obj) = (Rsp [3]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_14)
  goto label_26;

DEFLABEL (label_29)
  (Wrd103.Obj) = (Rsp [0]);
  (Wrd104.Obj) = (current_block [OBJECT_20_1]);
  (Wrd105.Obj) = (Rsp [2]);
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_15)
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_5 3
#define LABEL_21_4 5
#define LABEL_21_6 7
#define LABEL_21_7 9
#define LABEL_21_9 11
#define LABEL_21_10 13
#define LABEL_21_12 15
#define LABEL_21_14 17
#define LABEL_21_11 19
#define LABEL_21_15 21
#define LABEL_21_16 23
#define LABEL_21_17 25
#define LABEL_21_18 27
#define LABEL_21_19 29
#define ENVIRONMENT_LABEL_21_3 49
#define DEBUGGING_LABEL_21_2 48
#define OBJECT_21_10 47
#define OBJECT_21_9 46
#define OBJECT_21_8 45
#define OBJECT_21_7 44
#define OBJECT_21_6 43
#define OBJECT_21_5 42
#define OBJECT_21_4 41
#define OBJECT_21_3 40
#define OBJECT_21_2 39
#define OBJECT_21_1 38
#define OBJECT_21_0 37
#define EXECUTE_CACHE_21_20 31
#define EXECUTE_CACHE_21_13 33
#define EXECUTE_CACHE_21_8 35
#define FREE_REFERENCES_LABEL_21_0 30
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd65;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd51;
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
      current_block = (Rpc - LABEL_21_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_21_4);
      goto compute_closure_offsetsB_20;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_21_9);
      goto do_loop_17;

    case 5:
      current_block = (Rpc - LABEL_21_10);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_21_12);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_21_14);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_21_11);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_21_15);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_21_16);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_21_17);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_21_18);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_21_19);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_closure_offsetsB_32)
DEFLABEL (compute_closure_offsetsB_20)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_34;
  Rvl = (current_block [OBJECT_21_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_41;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_41;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_40)
  (Wrd23.Obj) = (Rsp [0]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd51.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd51.Obj);
  goto label_35;

DEFLABEL (label_36)
  (Wrd29.Obj) = (current_block [OBJECT_21_1]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_35)
DEFLABEL (label_39)
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_38;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd38.Lng))))
    goto label_38;
  (Wrd32.Obj) = ((Wrd36.pObj) [9]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_37)
  (Wrd46.Obj) = (current_block [OBJECT_21_5]);
  (Rsp [2]) = (Wrd46.Obj);
  goto do_loop_17;

DEFLABEL (label_38)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.Obj) = (current_block [OBJECT_21_4]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_3]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_41)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_21_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_3]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (do_loop_33)
DEFLABEL (do_loop_17)
  INTERRUPT_CHECK (26, LABEL_21_9);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_21_5]))
    goto label_55;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_54;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_53)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_21_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_52;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_51)
  (Wrd19.Obj) = (current_block [OBJECT_21_10]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_21_14);

DEFLABEL (label_50)
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_49;
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_49;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) + (Wrd33.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_49;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_48)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_47;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [0]);

DEFLABEL (label_46)
  (Wrd44.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd51.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (Rsp [2]) = (Wrd48.Obj);
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_45;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd52.Obj) = ((Wrd54.pObj) [1]);

DEFLABEL (label_44)
  (Rsp [0]) = (Wrd52.Obj);
  (Wrd66.Obj) = (Rsp [1]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 26))
    goto label_43;
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  (Wrd68.Lng) = ((Wrd70.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd68.Lng)))
    goto label_43;
  (Wrd65.Obj) = (LONG_TO_FIXNUM (Wrd68.Lng));

DEFLABEL (label_42)
  (Rsp [1]) = (Wrd65.Obj);
  goto do_loop_17;

DEFLABEL (label_43)
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_18]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_30)
  (Wrd65.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_17]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_9]), 1);

DEFLABEL (label_29)
  (Wrd52.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_16]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_8]), 1);

DEFLABEL (label_28)
  (Wrd35.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_52)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_19]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_8]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_8]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_57;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd29.Lng))))
    goto label_57;
  (Wrd23.Obj) = (Rsp [2]);
  ((Wrd27.pObj) [15]) = (Wrd23.Obj);

DEFLABEL (label_56)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (current_block [OBJECT_21_6]);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_7]), 3);

DEFLABEL (label_25)
  goto label_56;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define TAG_22_6 1
#define LABEL_22_10 7
#define LABEL_22_8 9
#define LABEL_22_9 11
#define LABEL_22_12 13
#define LABEL_22_16 15
#define LABEL_22_15 17
#define ENVIRONMENT_LABEL_22_3 33
#define DEBUGGING_LABEL_22_2 32
#define OBJECT_22_2 31
#define OBJECT_22_1 30
#define OBJECT_22_0 29
#define EXECUTE_CACHE_22_17 19
#define EXECUTE_CACHE_22_14 21
#define EXECUTE_CACHE_22_13 23
#define EXECUTE_CACHE_22_11 25
#define EXECUTE_CACHE_22_7 27
#define FREE_REFERENCES_LABEL_22_0 18
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_22_4);
      goto setup_closure_contextsB_7;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_22_10);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_22_12);
      goto lambda_5;

    case 6:
      current_block = (Rpc - LABEL_22_16);
      goto label_10;

    case 7:
      current_block = (Rpc - LABEL_22_15);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (setup_closure_contextsB_12)
DEFLABEL (setup_closure_contextsB_7)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_22_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_16;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd23.Lng))))
    goto label_16;
  (Wrd15.Obj) = ((Wrd21.pObj) [5]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_15)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_8);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_13]));

DEFLABEL (label_16)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [3]);
  (Wrd31.Obj) = (current_block [OBJECT_22_0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (lambda_14)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_22_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_18;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_18;
  (Wrd10.Obj) = ((Wrd14.pObj) [11]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_15);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_17]));

DEFLABEL (label_18)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_22_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_16]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_5 3
#define LABEL_23_4 5
#define ENVIRONMENT_LABEL_23_3 13
#define DEBUGGING_LABEL_23_2 12
#define OBJECT_23_0 11
#define EXECUTE_CACHE_23_7 7
#define EXECUTE_CACHE_23_6 9
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_23_4);
      goto setup_closure_contexts_next_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (setup_closure_contexts_next_4)
DEFLABEL (setup_closure_contexts_next_1)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_6;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_23_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_7 5
#define LABEL_24_5 7
#define LABEL_24_8 9
#define LABEL_24_9 11
#define LABEL_24_11 13
#define LABEL_24_14 15
#define LABEL_24_15 17
#define LABEL_24_16 19
#define LABEL_24_18 21
#define LABEL_24_20 23
#define LABEL_24_21 25
#define LABEL_24_23 27
#define LABEL_24_25 29
#define LABEL_24_26 31
#define LABEL_24_28 33
#define LABEL_24_29 35
#define LABEL_24_30 37
#define LABEL_24_32 39
#define LABEL_24_33 41
#define LABEL_24_34 43
#define LABEL_24_36 45
#define LABEL_24_37 47
#define LABEL_24_39 49
#define LABEL_24_40 51
#define LABEL_24_41 53
#define LABEL_24_43 55
#define LABEL_24_42 57
#define LABEL_24_35 59
#define LABEL_24_49 61
#define LABEL_24_31 63
#define LABEL_24_51 65
#define LABEL_24_27 67
#define LABEL_24_53 69
#define LABEL_24_24 71
#define LABEL_24_54 73
#define LABEL_24_55 75
#define LABEL_24_56 77
#define LABEL_24_22 79
#define LABEL_24_58 81
#define LABEL_24_19 83
#define LABEL_24_17 85
#define LABEL_24_61 87
#define LABEL_24_10 89
#define LABEL_24_63 91
#define LABEL_24_64 93
#define LABEL_24_12 95
#define LABEL_24_65 97
#define LABEL_24_67 99
#define LABEL_24_69 101
#define LABEL_24_47 103
#define LABEL_24_71 105
#define LABEL_24_48 107
#define LABEL_24_50 109
#define LABEL_24_52 111
#define LABEL_24_57 113
#define LABEL_24_59 115
#define TAG_24_60 56
#define LABEL_24_62 117
#define LABEL_24_66 119
#define LABEL_24_72 121
#define LABEL_24_73 123
#define LABEL_24_74 125
#define LABEL_24_70 127
#define ENVIRONMENT_LABEL_24_3 168
#define DEBUGGING_LABEL_24_2 167
#define OBJECT_24_13 166
#define OBJECT_24_12 165
#define OBJECT_24_11 164
#define OBJECT_24_10 163
#define OBJECT_24_9 162
#define OBJECT_24_8 161
#define OBJECT_24_7 160
#define OBJECT_24_6 159
#define OBJECT_24_5 158
#define OBJECT_24_4 157
#define OBJECT_24_3 156
#define OBJECT_24_2 155
#define OBJECT_24_1 154
#define OBJECT_24_0 153
#define EXECUTE_CACHE_24_68 129
#define EXECUTE_CACHE_24_46 131
#define EXECUTE_CACHE_24_45 133
#define EXECUTE_CACHE_24_44 135
#define EXECUTE_CACHE_24_38 137
#define EXECUTE_CACHE_24_13 139
#define EXECUTE_CACHE_24_6 141
#define FREE_REFERENCE_24_8 144
#define FREE_REFERENCE_24_7 145
#define FREE_REFERENCE_24_6 146
#define FREE_REFERENCE_24_5 147
#define FREE_REFERENCE_24_4 148
#define FREE_REFERENCE_24_3 149
#define FREE_REFERENCE_24_2 150
#define FREE_REFERENCE_24_1 151
#define FREE_REFERENCE_24_0 152
#define FREE_REFERENCES_LABEL_24_0 128
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd29;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd65;
  machine_word Wrd69;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd94;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd100;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd97;
  machine_word Wrd92;
  machine_word Wrd86;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd78;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd148;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd135;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd119;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd116;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd183;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd170;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd167;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd154;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd151;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd218;
  machine_word Wrd215;
  machine_word Wrd214;
  machine_word Wrd205;
  machine_word Wrd211;
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd213;
  machine_word Wrd212;
  machine_word Wrd202;
  machine_word Wrd199;
  machine_word Wrd198;
  machine_word Wrd189;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd193;
  machine_word Wrd197;
  machine_word Wrd196;
  machine_word Wrd186;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd332;
  machine_word Wrd256;
  machine_word Wrd253;
  machine_word Wrd252;
  machine_word Wrd243;
  machine_word Wrd249;
  machine_word Wrd248;
  machine_word Wrd247;
  machine_word Wrd251;
  machine_word Wrd250;
  machine_word Wrd240;
  machine_word Wrd237;
  machine_word Wrd234;
  machine_word Wrd233;
  machine_word Wrd224;
  machine_word Wrd230;
  machine_word Wrd229;
  machine_word Wrd228;
  machine_word Wrd232;
  machine_word Wrd231;
  machine_word Wrd221;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd293;
  machine_word Wrd290;
  machine_word Wrd289;
  machine_word Wrd280;
  machine_word Wrd286;
  machine_word Wrd285;
  machine_word Wrd284;
  machine_word Wrd288;
  machine_word Wrd287;
  machine_word Wrd277;
  machine_word Wrd331;
  machine_word Wrd328;
  machine_word Wrd327;
  machine_word Wrd318;
  machine_word Wrd324;
  machine_word Wrd323;
  machine_word Wrd322;
  machine_word Wrd326;
  machine_word Wrd325;
  machine_word Wrd315;
  machine_word Wrd312;
  machine_word Wrd309;
  machine_word Wrd308;
  machine_word Wrd299;
  machine_word Wrd305;
  machine_word Wrd304;
  machine_word Wrd303;
  machine_word Wrd307;
  machine_word Wrd306;
  machine_word Wrd296;
  machine_word Wrd273;
  machine_word Wrd270;
  machine_word Wrd269;
  machine_word Wrd258;
  machine_word Wrd266;
  machine_word Wrd265;
  machine_word Wrd264;
  machine_word Wrd268;
  machine_word Wrd267;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd353;
  machine_word Wrd351;
  machine_word Wrd348;
  machine_word Wrd347;
  machine_word Wrd338;
  machine_word Wrd344;
  machine_word Wrd343;
  machine_word Wrd342;
  machine_word Wrd346;
  machine_word Wrd345;
  machine_word Wrd335;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto setup_closure_contexts_node_68;

    case 1:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_45;

    case 2:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto label_70;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto label_71;

    case 5:
      current_block = (Rpc - LABEL_24_11);
      goto label_93;

    case 6:
      current_block = (Rpc - LABEL_24_14);
      goto label_72;

    case 7:
      current_block = (Rpc - LABEL_24_15);
      goto label_89;

    case 8:
      current_block = (Rpc - LABEL_24_16);
      goto label_91;

    case 9:
      current_block = (Rpc - LABEL_24_18);
      goto label_92;

    case 10:
      current_block = (Rpc - LABEL_24_20);
      goto label_90;

    case 11:
      current_block = (Rpc - LABEL_24_21);
      goto label_73;

    case 12:
      current_block = (Rpc - LABEL_24_23);
      goto label_87;

    case 13:
      current_block = (Rpc - LABEL_24_25);
      goto label_88;

    case 14:
      current_block = (Rpc - LABEL_24_26);
      goto label_74;

    case 15:
      current_block = (Rpc - LABEL_24_28);
      goto label_85;

    case 16:
      current_block = (Rpc - LABEL_24_29);
      goto label_86;

    case 17:
      current_block = (Rpc - LABEL_24_30);
      goto label_75;

    case 18:
      current_block = (Rpc - LABEL_24_32);
      goto label_83;

    case 19:
      current_block = (Rpc - LABEL_24_33);
      goto label_84;

    case 20:
      current_block = (Rpc - LABEL_24_34);
      goto label_76;

    case 21:
      current_block = (Rpc - LABEL_24_36);
      goto label_81;

    case 22:
      current_block = (Rpc - LABEL_24_37);
      goto label_82;

    case 23:
      current_block = (Rpc - LABEL_24_39);
      goto label_77;

    case 24:
      current_block = (Rpc - LABEL_24_40);
      goto label_78;

    case 25:
      current_block = (Rpc - LABEL_24_41);
      goto label_79;

    case 26:
      current_block = (Rpc - LABEL_24_43);
      goto label_80;

    case 27:
      current_block = (Rpc - LABEL_24_42);
      goto continuation_12;

    case 28:
      current_block = (Rpc - LABEL_24_35);
      goto continuation_15;

    case 29:
      current_block = (Rpc - LABEL_24_49);
      goto label_94;

    case 30:
      current_block = (Rpc - LABEL_24_31);
      goto continuation_23;

    case 31:
      current_block = (Rpc - LABEL_24_51);
      goto label_95;

    case 32:
      current_block = (Rpc - LABEL_24_27);
      goto continuation_28;

    case 33:
      current_block = (Rpc - LABEL_24_53);
      goto label_96;

    case 34:
      current_block = (Rpc - LABEL_24_24);
      goto continuation_34;

    case 35:
      current_block = (Rpc - LABEL_24_54);
      goto label_98;

    case 36:
      current_block = (Rpc - LABEL_24_55);
      goto label_100;

    case 37:
      current_block = (Rpc - LABEL_24_56);
      goto label_99;

    case 38:
      current_block = (Rpc - LABEL_24_22);
      goto continuation_32;

    case 39:
      current_block = (Rpc - LABEL_24_58);
      goto label_97;

    case 40:
      current_block = (Rpc - LABEL_24_19);
      goto continuation_52;

    case 41:
      current_block = (Rpc - LABEL_24_17);
      goto continuation_47;

    case 42:
      current_block = (Rpc - LABEL_24_61);
      goto label_101;

    case 43:
      current_block = (Rpc - LABEL_24_10);
      goto continuation_64;

    case 44:
      current_block = (Rpc - LABEL_24_63);
      goto label_102;

    case 45:
      current_block = (Rpc - LABEL_24_64);
      goto continuation_54;

    case 46:
      current_block = (Rpc - LABEL_24_12);
      goto lambda_62;

    case 47:
      current_block = (Rpc - LABEL_24_65);
      goto label_103;

    case 48:
      current_block = (Rpc - LABEL_24_67);
      goto label_105;

    case 49:
      current_block = (Rpc - LABEL_24_69);
      goto label_104;

    case 50:
      current_block = (Rpc - LABEL_24_47);
      goto continuation_18;

    case 51:
      current_block = (Rpc - LABEL_24_71);
      goto label_106;

    case 52:
      current_block = (Rpc - LABEL_24_48);
      goto continuation_17;

    case 53:
      current_block = (Rpc - LABEL_24_50);
      goto continuation_25;

    case 54:
      current_block = (Rpc - LABEL_24_52);
      goto continuation_30;

    case 55:
      current_block = (Rpc - LABEL_24_57);
      goto continuation_41;

    case 56:
      current_block = (Rpc - LABEL_24_59);
      goto lambda_112;

    case 57:
      current_block = (Rpc - LABEL_24_62);
      goto continuation_66;

    case 58:
      current_block = (Rpc - LABEL_24_66);
      goto continuation_58;

    case 59:
      current_block = (Rpc - LABEL_24_72);
      goto label_107;

    case 60:
      current_block = (Rpc - LABEL_24_73);
      goto label_108;

    case 61:
      current_block = (Rpc - LABEL_24_74);
      goto label_109;

    case 62:
      current_block = (Rpc - LABEL_24_70);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (setup_closure_contexts_node_111)
DEFLABEL (setup_closure_contexts_node_68)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_171;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_171;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_170)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_169;
  Wrd22 = Wrd26;

DEFLABEL (label_168)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_163;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_162;
  Wrd30 = Wrd34;

DEFLABEL (label_161)
  (Wrd36.Obj) = (Rsp [0]);
  if ((Wrd36.Obj) == (Wrd30.Obj))
    goto label_152;
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_2]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_151;
  Wrd38 = Wrd42;

DEFLABEL (label_150)
  (Wrd44.Obj) = (Rsp [0]);
  if ((Wrd44.Obj) == (Wrd38.Obj))
    goto label_144;
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_3]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_143;
  Wrd46 = Wrd50;

DEFLABEL (label_142)
  (Wrd52.Obj) = (Rsp [0]);
  if ((Wrd52.Obj) == (Wrd46.Obj))
    goto label_138;
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_4]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_137;
  Wrd54 = Wrd58;

DEFLABEL (label_136)
  (Wrd60.Obj) = (Rsp [0]);
  if ((Wrd60.Obj) == (Wrd54.Obj))
    goto label_132;
  (Wrd63.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_5]));
  (Wrd66.Obj) = ((Wrd63.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_131;
  Wrd62 = Wrd66;

DEFLABEL (label_130)
  (Wrd68.Obj) = (Rsp [0]);
  if ((Wrd68.Obj) == (Wrd62.Obj))
    goto label_124;
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_6]));
  (Wrd74.Obj) = ((Wrd71.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_123;
  Wrd70 = Wrd74;

DEFLABEL (label_122)
  (Wrd76.Obj) = (Rsp [0]);
  if ((Wrd76.Obj) == (Wrd70.Obj))
    goto label_114;
  (Wrd79.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_7]));
  (Wrd82.Obj) = ((Wrd79.pObj) [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if ((Wrd83.uLng) == 50)
    goto label_121;
  Wrd78 = Wrd82;

DEFLABEL (label_120)
  (Wrd84.Obj) = (Rsp [0]);
  if ((Wrd84.Obj) == (Wrd78.Obj))
    goto label_114;
  (Wrd87.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_8]));
  (Wrd90.Obj) = ((Wrd87.pObj) [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if ((Wrd91.uLng) == 50)
    goto label_119;
  Wrd86 = Wrd90;

DEFLABEL (label_118)
  (Wrd92.Obj) = (Rsp [0]);
  if ((Wrd92.Obj) == (Wrd86.Obj))
    goto label_114;
  (Rsp [1]) = (Wrd92.Obj);
  (Wrd94.Obj) = (current_block [OBJECT_24_7]);
  (Rsp [0]) = (Wrd94.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_45]));

DEFLABEL (label_114)
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_42]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (Wrd107.Obj) = (Rsp [2]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if (! ((Wrd108.uLng) == 10))
    goto label_116;
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd107.Obj));
  (Wrd105.Obj) = ((Wrd104.pObj) [0]);
  (Wrd106.Lng) = (FIXNUM_TO_LONG (Wrd105.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd106.Lng))))
    goto label_116;
  (Wrd100.Obj) = ((Wrd104.pObj) [7]);
  (* (--Rsp)) = (Wrd100.Obj);

DEFLABEL (label_115)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_44]));

DEFLABEL (label_116)
  (Wrd109.Obj) = (Rsp [2]);
  (Wrd110.Obj) = (current_block [OBJECT_24_6]);
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_43]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_80)
DEFLABEL (label_117)
  (* (--Rsp)) = Rvl;
  goto label_115;

DEFLABEL (label_119)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_41])), (Wrd87.pObj));

DEFLABEL (label_79)
  (Wrd86.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_40])), (Wrd79.pObj));

DEFLABEL (label_78)
  (Wrd78.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_39])), (Wrd71.pObj));

DEFLABEL (label_77)
  (Wrd70.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_124)
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_35]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (Wrd126.Obj) = (Rsp [2]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if (! ((Wrd127.uLng) == 10))
    goto label_129;
  (Wrd123.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd124.Obj) = ((Wrd123.pObj) [0]);
  (Wrd125.Lng) = (FIXNUM_TO_LONG (Wrd124.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd125.Lng))))
    goto label_129;
  (Wrd119.Obj) = ((Wrd123.pObj) [10]);
  (* (--Rsp)) = (Wrd119.Obj);

DEFLABEL (label_128)
  (Wrd142.Obj) = (Rsp [3]);
  (Wrd143.uLng) = (OBJECT_TYPE (Wrd142.Obj));
  if (! ((Wrd143.uLng) == 10))
    goto label_126;
  (Wrd139.pObj) = (OBJECT_ADDRESS (Wrd142.Obj));
  (Wrd140.Obj) = ((Wrd139.pObj) [0]);
  (Wrd141.Lng) = (FIXNUM_TO_LONG (Wrd140.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd141.Lng))))
    goto label_126;
  (Wrd135.Obj) = ((Wrd139.pObj) [9]);
  (* (--Rsp)) = (Wrd135.Obj);

DEFLABEL (label_125)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_38]));

DEFLABEL (label_126)
  (Wrd144.Obj) = (Rsp [3]);
  (Wrd145.Obj) = (current_block [OBJECT_24_2]);
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_37]))));
  (* (--Rsp)) = (Wrd148.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_82)
DEFLABEL (label_127)
  (* (--Rsp)) = Rvl;
  goto label_125;

DEFLABEL (label_129)
  (Wrd128.Obj) = (Rsp [2]);
  (Wrd129.Obj) = (current_block [OBJECT_24_5]);
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_36]))));
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_81)
  (* (--Rsp)) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_34])), (Wrd63.pObj));

DEFLABEL (label_76)
  (Wrd62.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_132)
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_31]))));
  (* (--Rsp)) = (Wrd151.Obj);
  (Wrd161.Obj) = (Rsp [2]);
  (Wrd162.uLng) = (OBJECT_TYPE (Wrd161.Obj));
  if (! ((Wrd162.uLng) == 10))
    goto label_135;
  (Wrd158.pObj) = (OBJECT_ADDRESS (Wrd161.Obj));
  (Wrd159.Obj) = ((Wrd158.pObj) [0]);
  (Wrd160.Lng) = (FIXNUM_TO_LONG (Wrd159.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd160.Lng))))
    goto label_135;
  (Wrd154.Obj) = ((Wrd158.pObj) [10]);
  (* (--Rsp)) = (Wrd154.Obj);

DEFLABEL (label_134)
  (Wrd177.Obj) = (Rsp [3]);
  (Wrd178.uLng) = (OBJECT_TYPE (Wrd177.Obj));
  if (! ((Wrd178.uLng) == 10))
    goto label_133;
  (Wrd174.pObj) = (OBJECT_ADDRESS (Wrd177.Obj));
  (Wrd175.Obj) = ((Wrd174.pObj) [0]);
  (Wrd176.Lng) = (FIXNUM_TO_LONG (Wrd175.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd176.Lng))))
    goto label_133;
  (Wrd170.Obj) = ((Wrd174.pObj) [8]);
  (* (--Rsp)) = (Wrd170.Obj);
  goto label_125;

DEFLABEL (label_133)
  (Wrd179.Obj) = (Rsp [3]);
  (Wrd180.Obj) = (current_block [OBJECT_24_3]);
  (Wrd183.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_33]))));
  (* (--Rsp)) = (Wrd183.Obj);
  (* (--Rsp)) = (Wrd180.Obj);
  (* (--Rsp)) = (Wrd179.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_84)
  goto label_127;

DEFLABEL (label_135)
  (Wrd163.Obj) = (Rsp [2]);
  (Wrd164.Obj) = (current_block [OBJECT_24_5]);
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_32]))));
  (* (--Rsp)) = (Wrd167.Obj);
  (* (--Rsp)) = (Wrd164.Obj);
  (* (--Rsp)) = (Wrd163.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_83)
  (* (--Rsp)) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_30])), (Wrd55.pObj));

DEFLABEL (label_75)
  (Wrd54.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_138)
  (Wrd186.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_27]))));
  (* (--Rsp)) = (Wrd186.Obj);
  (Wrd196.Obj) = (Rsp [2]);
  (Wrd197.uLng) = (OBJECT_TYPE (Wrd196.Obj));
  if (! ((Wrd197.uLng) == 10))
    goto label_141;
  (Wrd193.pObj) = (OBJECT_ADDRESS (Wrd196.Obj));
  (Wrd194.Obj) = ((Wrd193.pObj) [0]);
  (Wrd195.Lng) = (FIXNUM_TO_LONG (Wrd194.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd195.Lng))))
    goto label_141;
  (Wrd189.Obj) = ((Wrd193.pObj) [10]);
  (* (--Rsp)) = (Wrd189.Obj);

DEFLABEL (label_140)
  (Wrd212.Obj) = (Rsp [3]);
  (Wrd213.uLng) = (OBJECT_TYPE (Wrd212.Obj));
  if (! ((Wrd213.uLng) == 10))
    goto label_139;
  (Wrd209.pObj) = (OBJECT_ADDRESS (Wrd212.Obj));
  (Wrd210.Obj) = ((Wrd209.pObj) [0]);
  (Wrd211.Lng) = (FIXNUM_TO_LONG (Wrd210.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd211.Lng))))
    goto label_139;
  (Wrd205.Obj) = ((Wrd209.pObj) [8]);
  (* (--Rsp)) = (Wrd205.Obj);
  goto label_125;

DEFLABEL (label_139)
  (Wrd214.Obj) = (Rsp [3]);
  (Wrd215.Obj) = (current_block [OBJECT_24_3]);
  (Wrd218.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_29]))));
  (* (--Rsp)) = (Wrd218.Obj);
  (* (--Rsp)) = (Wrd215.Obj);
  (* (--Rsp)) = (Wrd214.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_86)
  goto label_127;

DEFLABEL (label_141)
  (Wrd198.Obj) = (Rsp [2]);
  (Wrd199.Obj) = (current_block [OBJECT_24_5]);
  (Wrd202.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_28]))));
  (* (--Rsp)) = (Wrd202.Obj);
  (* (--Rsp)) = (Wrd199.Obj);
  (* (--Rsp)) = (Wrd198.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_85)
  (* (--Rsp)) = Rvl;
  goto label_140;

DEFLABEL (label_143)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_26])), (Wrd47.pObj));

DEFLABEL (label_74)
  (Wrd46.Obj) = Rvl;
  goto label_142;

DEFLABEL (label_144)
  (Wrd221.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_22]))));
  (* (--Rsp)) = (Wrd221.Obj);
  (Wrd231.Obj) = (Rsp [2]);
  (Wrd232.uLng) = (OBJECT_TYPE (Wrd231.Obj));
  if (! ((Wrd232.uLng) == 10))
    goto label_149;
  (Wrd228.pObj) = (OBJECT_ADDRESS (Wrd231.Obj));
  (Wrd229.Obj) = ((Wrd228.pObj) [0]);
  (Wrd230.Lng) = (FIXNUM_TO_LONG (Wrd229.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd230.Lng))))
    goto label_149;
  (Wrd224.Obj) = ((Wrd228.pObj) [8]);
  (* (--Rsp)) = (Wrd224.Obj);

DEFLABEL (label_148)
  (Wrd240.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_24]))));
  (* (--Rsp)) = (Wrd240.Obj);
  (Wrd250.Obj) = (Rsp [4]);
  (Wrd251.uLng) = (OBJECT_TYPE (Wrd250.Obj));
  if (! ((Wrd251.uLng) == 10))
    goto label_146;
  (Wrd247.pObj) = (OBJECT_ADDRESS (Wrd250.Obj));
  (Wrd248.Obj) = ((Wrd247.pObj) [0]);
  (Wrd249.Lng) = (FIXNUM_TO_LONG (Wrd248.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd249.Lng))))
    goto label_146;
  (Wrd243.Obj) = ((Wrd247.pObj) [10]);
  (* (--Rsp)) = (Wrd243.Obj);

DEFLABEL (label_145)
  (Wrd332.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd332.Obj);
  goto label_125;

DEFLABEL (label_146)
  (Wrd252.Obj) = (Rsp [4]);
  (Wrd253.Obj) = (current_block [OBJECT_24_5]);
  (Wrd256.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_25]))));
  (* (--Rsp)) = (Wrd256.Obj);
  (* (--Rsp)) = (Wrd253.Obj);
  (* (--Rsp)) = (Wrd252.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_88)
DEFLABEL (label_147)
  (* (--Rsp)) = Rvl;
  goto label_145;

DEFLABEL (label_149)
  (Wrd233.Obj) = (Rsp [2]);
  (Wrd234.Obj) = (current_block [OBJECT_24_3]);
  (Wrd237.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_23]))));
  (* (--Rsp)) = (Wrd237.Obj);
  (* (--Rsp)) = (Wrd234.Obj);
  (* (--Rsp)) = (Wrd233.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_87)
  (* (--Rsp)) = Rvl;
  goto label_148;

DEFLABEL (label_151)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_21])), (Wrd39.pObj));

DEFLABEL (label_73)
  (Wrd38.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_152)
  (Wrd267.Obj) = (Rsp [1]);
  (Wrd268.uLng) = (OBJECT_TYPE (Wrd267.Obj));
  if (! ((Wrd268.uLng) == 10))
    goto label_160;
  (Wrd264.pObj) = (OBJECT_ADDRESS (Wrd267.Obj));
  (Wrd265.Obj) = ((Wrd264.pObj) [0]);
  (Wrd266.Lng) = (FIXNUM_TO_LONG (Wrd265.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd266.Lng))))
    goto label_160;
  (Wrd258.Obj) = ((Wrd264.pObj) [8]);

DEFLABEL (label_159)
  if ((Wrd258.Obj) == (current_block [OBJECT_24_4]))
    goto label_155;

DEFLABEL (label_154)
  (Wrd277.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_19]))));
  (* (--Rsp)) = (Wrd277.Obj);
  (Wrd287.Obj) = (Rsp [2]);
  (Wrd288.uLng) = (OBJECT_TYPE (Wrd287.Obj));
  if (! ((Wrd288.uLng) == 10))
    goto label_153;
  (Wrd284.pObj) = (OBJECT_ADDRESS (Wrd287.Obj));
  (Wrd285.Obj) = ((Wrd284.pObj) [0]);
  (Wrd286.Lng) = (FIXNUM_TO_LONG (Wrd285.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd286.Lng))))
    goto label_153;
  (Wrd280.Obj) = ((Wrd284.pObj) [7]);
  (* (--Rsp)) = (Wrd280.Obj);
  goto label_115;

DEFLABEL (label_153)
  (Wrd289.Obj) = (Rsp [2]);
  (Wrd290.Obj) = (current_block [OBJECT_24_6]);
  (Wrd293.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_20]))));
  (* (--Rsp)) = (Wrd293.Obj);
  (* (--Rsp)) = (Wrd290.Obj);
  (* (--Rsp)) = (Wrd289.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_90)
  goto label_117;

DEFLABEL (label_155)
  (Wrd296.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd296.Obj);
  (Wrd306.Obj) = (Rsp [2]);
  (Wrd307.uLng) = (OBJECT_TYPE (Wrd306.Obj));
  if (! ((Wrd307.uLng) == 10))
    goto label_158;
  (Wrd303.pObj) = (OBJECT_ADDRESS (Wrd306.Obj));
  (Wrd304.Obj) = ((Wrd303.pObj) [0]);
  (Wrd305.Lng) = (FIXNUM_TO_LONG (Wrd304.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd305.Lng))))
    goto label_158;
  (Wrd299.Obj) = ((Wrd303.pObj) [9]);
  (* (--Rsp)) = (Wrd299.Obj);

DEFLABEL (label_157)
  (Wrd315.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_17]))));
  (* (--Rsp)) = (Wrd315.Obj);
  (Wrd325.Obj) = (Rsp [4]);
  (Wrd326.uLng) = (OBJECT_TYPE (Wrd325.Obj));
  if (! ((Wrd326.uLng) == 10))
    goto label_156;
  (Wrd322.pObj) = (OBJECT_ADDRESS (Wrd325.Obj));
  (Wrd323.Obj) = ((Wrd322.pObj) [0]);
  (Wrd324.Lng) = (FIXNUM_TO_LONG (Wrd323.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd324.Lng))))
    goto label_156;
  (Wrd318.Obj) = ((Wrd322.pObj) [10]);
  (* (--Rsp)) = (Wrd318.Obj);
  goto label_145;

DEFLABEL (label_156)
  (Wrd327.Obj) = (Rsp [4]);
  (Wrd328.Obj) = (current_block [OBJECT_24_5]);
  (Wrd331.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_18]))));
  (* (--Rsp)) = (Wrd331.Obj);
  (* (--Rsp)) = (Wrd328.Obj);
  (* (--Rsp)) = (Wrd327.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_92)
  goto label_147;

DEFLABEL (label_158)
  (Wrd308.Obj) = (Rsp [2]);
  (Wrd309.Obj) = (current_block [OBJECT_24_2]);
  (Wrd312.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_16]))));
  (* (--Rsp)) = (Wrd312.Obj);
  (* (--Rsp)) = (Wrd309.Obj);
  (* (--Rsp)) = (Wrd308.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_91)
  (* (--Rsp)) = Rvl;
  goto label_157;

DEFLABEL (label_160)
  (Wrd269.Obj) = (Rsp [1]);
  (Wrd270.Obj) = (current_block [OBJECT_24_3]);
  (Wrd273.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_15]))));
  (* (--Rsp)) = (Wrd273.Obj);
  (* (--Rsp)) = (Wrd270.Obj);
  (* (--Rsp)) = (Wrd269.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_89)
  (Wrd258.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_14])), (Wrd31.pObj));

DEFLABEL (label_72)
  (Wrd30.Obj) = Rvl;
  goto label_161;

DEFLABEL (label_163)
  (Wrd335.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd335.Obj);
  (Wrd345.Obj) = (Rsp [2]);
  (Wrd346.uLng) = (OBJECT_TYPE (Wrd345.Obj));
  if (! ((Wrd346.uLng) == 10))
    goto label_167;
  (Wrd342.pObj) = (OBJECT_ADDRESS (Wrd345.Obj));
  (Wrd343.Obj) = ((Wrd342.pObj) [0]);
  (Wrd344.Lng) = (FIXNUM_TO_LONG (Wrd343.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd344.Lng))))
    goto label_167;
  (Wrd338.Obj) = ((Wrd342.pObj) [9]);
  (* (--Rsp)) = (Wrd338.Obj);

DEFLABEL (label_166)
  (Wrd353.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd353.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_13]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_24_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_165;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_165;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_164)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_44]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_24_62);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_46]));

DEFLABEL (label_165)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_24_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_63]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_102)
  (* (--Rsp)) = Rvl;
  goto label_164;

DEFLABEL (label_167)
  (Wrd347.Obj) = (Rsp [2]);
  (Wrd348.Obj) = (current_block [OBJECT_24_2]);
  (Wrd351.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd351.Obj);
  (* (--Rsp)) = (Wrd348.Obj);
  (* (--Rsp)) = (Wrd347.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_93)
  (* (--Rsp)) = Rvl;
  goto label_166;

DEFLABEL (label_169)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_9])), (Wrd23.pObj));

DEFLABEL (label_71)
  (Wrd22.Obj) = Rvl;
  goto label_168;

DEFLABEL (label_171)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_24_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_70)
  (* (--Rsp)) = Rvl;
  goto label_170;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_24_42);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_46]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_24_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_48]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_175;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd19.Lng))))
    goto label_175;
  (Wrd13.Obj) = ((Wrd17.pObj) [7]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_174)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_44]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_24_48);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_46]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_24_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_173;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_173;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_172)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_44]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_24_70);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_46]));

DEFLABEL (label_173)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_24_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_71]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_106)
  (* (--Rsp)) = Rvl;
  goto label_172;

DEFLABEL (label_175)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.Obj) = (current_block [OBJECT_24_6]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_49]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_94)
  (* (--Rsp)) = Rvl;
  goto label_174;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_24_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_177;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_177;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_176)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_44]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_24_50);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_46]));

DEFLABEL (label_177)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_24_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_51]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_95)
  (* (--Rsp)) = Rvl;
  goto label_176;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_24_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_179;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_179;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_178)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_44]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_24_52);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_46]));

DEFLABEL (label_179)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_24_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_53]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_96)
  (* (--Rsp)) = Rvl;
  goto label_178;

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_24_24);
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_189;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd32.Lng))))
    goto label_189;
  (Wrd26.Obj) = ((Wrd30.pObj) [9]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_188)
  (Wrd68.Obj) = (Rsp [0]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 62))
    goto label_187;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd67.Lng))))
    goto label_187;
  (Wrd42.Obj) = ((Wrd65.pObj) [4]);
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_184;

DEFLABEL (label_183)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_182)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_181;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_181;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_180)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_44]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_24_57);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_46]));

DEFLABEL (label_181)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_24_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_58]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_97)
  (* (--Rsp)) = Rvl;
  goto label_180;

DEFLABEL (label_184)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 62))
    goto label_186;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd52.Lng))))
    goto label_186;
  (Wrd44.Obj) = ((Wrd50.pObj) [2]);

DEFLABEL (label_185)
  (Wrd60.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd60.Obj);
  (Rsp [1]) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_38]));

DEFLABEL (label_186)
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.Obj) = (current_block [OBJECT_24_10]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_56]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_9]), 2);

DEFLABEL (label_99)
  (Wrd44.Obj) = Rvl;
  goto label_185;

DEFLABEL (label_187)
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.Obj) = (current_block [OBJECT_24_8]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_55]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_9]), 2);

DEFLABEL (label_100)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_184;
  goto label_183;

DEFLABEL (label_189)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_24_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_54]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_98)
  (* (--Rsp)) = Rvl;
  goto label_188;

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_24_22);
  goto label_182;

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_24_19);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_46]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_24_17);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_60);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_59])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_191;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd17.Lng))))
    goto label_191;
  (Wrd9.Obj) = ((Wrd15.pObj) [11]);

DEFLABEL (label_190)
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_13]));

DEFLABEL (label_191)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.Obj) = (current_block [OBJECT_24_11]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_61]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_101)
  (Wrd9.Obj) = Rvl;
  goto label_190;

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_24_7);
  goto label_154;

DEFLABEL (lambda_113)
DEFLABEL (lambda_62)
  INTERRUPT_CHECK (26, LABEL_24_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_206;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_206;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_205)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_194;
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_193;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd34.Lng))))
    goto label_193;
  (Wrd26.Obj) = ((Wrd32.pObj) [2]);

DEFLABEL (label_192)
  (Rsp [0]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_46]));

DEFLABEL (label_193)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_24_10]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_69]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_104)
  (Wrd26.Obj) = Rvl;
  goto label_192;

DEFLABEL (label_194)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_204)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_66]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_203;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd54.Lng))))
    goto label_203;
  (Wrd48.Obj) = ((Wrd52.pObj) [3]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_202)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_68]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_24_66);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_195;
  Rvl = (current_block [OBJECT_24_13]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_195)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_201;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_201;
  (Wrd9.Obj) = ((Wrd15.pObj) [3]);

DEFLABEL (label_200)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_199;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd31.Lng))))
    goto label_199;
  (Wrd26.Obj) = ((Wrd29.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_198)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_197;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd46.Lng))))
    goto label_197;
  (Wrd38.Obj) = ((Wrd44.pObj) [4]);

DEFLABEL (label_196)
  (Rsp [1]) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_38]));

DEFLABEL (label_197)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.Obj) = (current_block [OBJECT_24_8]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_74]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_9]), 2);

DEFLABEL (label_109)
  (Wrd38.Obj) = Rvl;
  goto label_196;

DEFLABEL (label_199)
  (Wrd34.Obj) = (current_block [OBJECT_24_10]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_73]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_9]), 2);

DEFLABEL (label_108)
  (* (--Rsp)) = Rvl;
  goto label_198;

DEFLABEL (label_201)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_24_12]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_72]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_9]), 2);

DEFLABEL (label_107)
  (Wrd9.Obj) = Rvl;
  goto label_200;

DEFLABEL (label_203)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_24_12]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_67]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_9]), 2);

DEFLABEL (label_105)
  (* (--Rsp)) = Rvl;
  goto label_202;

DEFLABEL (label_206)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_24_10]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_65]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_9]), 2);

DEFLABEL (label_103)
  (* (--Rsp)) = Rvl;
  goto label_205;

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_24_64);
  goto label_204;

DEFLABEL (lambda_112)
  CLOSURE_HEADER (LABEL_24_59);

DEFLABEL (lambda_48)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_38]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_5 3
#define LABEL_25_6 5
#define LABEL_25_8 7
#define LABEL_25_4 9
#define LABEL_25_11 11
#define LABEL_25_12 13
#define LABEL_25_13 15
#define LABEL_25_9 17
#define ENVIRONMENT_LABEL_25_3 34
#define DEBUGGING_LABEL_25_2 33
#define OBJECT_25_5 32
#define OBJECT_25_4 31
#define OBJECT_25_3 30
#define OBJECT_25_2 29
#define OBJECT_25_1 28
#define OBJECT_25_0 27
#define EXECUTE_CACHE_25_14 19
#define EXECUTE_CACHE_25_10 21
#define EXECUTE_CACHE_25_7 23
#define FREE_REFERENCE_25_0 26
#define FREE_REFERENCES_LABEL_25_0 18
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blktyp_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd32;
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
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd83;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd57;
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
      current_block = (Rpc - LABEL_25_5);
      goto continuation_8;

    case 1:
      current_block = (Rpc - LABEL_25_6);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_25_8);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_25_4);
      goto setup_closure_contexts_rvalue_11;

    case 4:
      current_block = (Rpc - LABEL_25_11);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_25_12);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_25_13);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_25_9);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (setup_closure_contexts_rvalue_17)
DEFLABEL (setup_closure_contexts_rvalue_11)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_29;
  Wrd5 = Wrd9;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_27;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_27;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_26)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_19;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_25_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_25;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd38.Lng))))
    goto label_25;
  (Wrd32.Obj) = ((Wrd36.pObj) [19]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_24)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_25_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_25_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_25_6);
  (Wrd57.Obj) = (* (Rsp++));
  if (Rvl == (Wrd57.Obj))
    goto label_23;
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd64.Obj) = (current_block [OBJECT_25_3]);
  (* (--Rsp)) = (Wrd64.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_25_5);

DEFLABEL (label_23)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.Obj) = (Rsp [0]);
  if ((Wrd65.Obj) == (Wrd66.Obj))
    goto label_22;
  Rsp = (& (Rsp [1]));
  (Wrd68.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd69.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd69.Obj);
  (Wrd70.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd70.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if ((Wrd83.uLng) == 10)
    goto label_21;

DEFLABEL (label_20)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 3);

DEFLABEL (label_21)
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd81.Lng))))
    goto label_20;
  ((Wrd79.pObj) [19]) = (Wrd69.Obj);
  Rvl = (current_block [OBJECT_25_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  goto label_18;

DEFLABEL (label_25)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_25_0]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_13]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_5]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_25_4]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_12]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_5]), 2);

DEFLABEL (label_14)
  (Wrd11.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_11])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_28;

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
blktyp_so_6d0138444fb73d89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	1,
	1,
	1,
	1,
	1,
	2,
	0,
	1,
	2,
	2,
	1,
	1,
	2,
	2,
	1,
	2,
	1,
	1,
	2,
	2,
	2,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 25)
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

static const struct liarc_code_S arr_decl_blktyp_so_6d0138444fb73d89 [25] =
  {
    { "blktyp_so_code_1", 20, blktyp_so_code_1 },
    { "blktyp_so_code_2", 18, blktyp_so_code_2 },
    { "blktyp_so_code_3", 9, blktyp_so_code_3 },
    { "blktyp_so_code_4", 28, blktyp_so_code_4 },
    { "blktyp_so_code_5", 22, blktyp_so_code_5 },
    { "blktyp_so_code_6", 12, blktyp_so_code_6 },
    { "blktyp_so_code_7", 10, blktyp_so_code_7 },
    { "blktyp_so_code_8", 14, blktyp_so_code_8 },
    { "blktyp_so_code_9", 11, blktyp_so_code_9 },
    { "blktyp_so_code_10", 32, blktyp_so_code_10 },
    { "blktyp_so_code_11", 39, blktyp_so_code_11 },
    { "blktyp_so_code_12", 29, blktyp_so_code_12 },
    { "blktyp_so_code_13", 7, blktyp_so_code_13 },
    { "blktyp_so_code_14", 5, blktyp_so_code_14 },
    { "blktyp_so_code_15", 6, blktyp_so_code_15 },
    { "blktyp_so_code_16", 3, blktyp_so_code_16 },
    { "blktyp_so_code_17", 7, blktyp_so_code_17 },
    { "blktyp_so_code_18", 12, blktyp_so_code_18 },
    { "blktyp_so_code_19", 9, blktyp_so_code_19 },
    { "blktyp_so_code_20", 8, blktyp_so_code_20 },
    { "blktyp_so_code_21", 14, blktyp_so_code_21 },
    { "blktyp_so_code_22", 8, blktyp_so_code_22 },
    { "blktyp_so_code_23", 2, blktyp_so_code_23 },
    { "blktyp_so_code_24", 63, blktyp_so_code_24 },
    { "blktyp_so_code_25", 8, blktyp_so_code_25 }
  };

int
decl_blktyp_so_6d0138444fb73d89 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_blktyp_so_6d0138444fb73d89);
  return (0);
}

DECLARE_COMPILED_CODE ("blktyp.so", 3, decl_blktyp_so_6d0138444fb73d89, blktyp_so_6d0138444fb73d89)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_blktyp_so_data_6d0138444fb73d89 [6578] =
  "\xc3\x01\x34\xdd\x0c\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x02\xc3\xb9"
  "\x0c\x0c\x84\xc2\xba\x82\x1d\x0d\x0d\x0d\xbb\x0d\xbc\x0d\xbd\x0d"
  "\xbe\x24\x28\x0d\xbf\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82"
  "\x88\x02\x83\x0c\x02\xb2\x82\xb6\xb5\xb3\xb4\x24\x28\x0d\xbe\x28"
  "\x1b\x28\x0d\xbd\x28\x0d\xbc\x28\x0d\xbb\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x07"
  "\x06\x02\x80\x02\x84\xb2\x85\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x02\x02\x81\x80\x0c"
  "\x02\x02\x0d\x08\x88\x02\x08\xb1\x83\x1d\x02\x07\xb2\x02\x1b\x24"
  "\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x07\x80\x02\x02\x02\x83\xb2\x02"
  "\x0d\x1c\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\xb6\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1d\x02\x02\x02"
  "\x0d\x06\x07\x02\x83\x0d\x08\x88\xb2\x02\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x02\xb1\x0c\x02\x07\x02\xb2\x83\x28\x1b\x28"
  "\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x80\xc1\x1c\x02\xb2\x02\xc1\x1c\x0c\x08\x1b\x24"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1b\xb2"
  "\x02\x08\x28\xb5\x28\x0d\x1c\x28\xb6\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x02\x1b\x02\x83\x08\xb2\x02\x1b\x0d\x1c\x24\x28\x0d\x1c\x28"
  "\x0d\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x0c\x1d\x02\x0d"
  "\x02\x80\x02\xb1\x02\x07\x02\x02\xb2\x83\x0c\x08\x0d\x1c\x1b\x24"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x02\x08\x84\x1d\x0c\x02\x02\x02\x83\xb1\x02\x80"
  "\xb2\x02\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84"
  "\x1b\x0c\x08\x02\xb2\x02\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83"
  "\x80\xb2\x02\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\xb2\x02\x1b\x24\x28"
  "\xb6\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\xb6\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x1b\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbe\x1d\xb0\x02\x88\x02\x80\x02\x07\x08\xb2\x02\x1b\x24\x28\x0d"
  "\x1c\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x28\x1b\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x08\x02\x81"
  "\x02\x02\x02\xb1\x02\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x1b\x1b\xb1\x02\x08\x02\xb2\x83\x80\x81\x28\x0d\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xb2\x84\x28\x0d\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x82\x02\x81\xc2\x83\x0c\x86\x02\x0d\x02\x02\xb2\x80"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x24\x28\x0d\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb2\x80\x0c\xb1\x1d\x02\x1b\x24\x28\x1b\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb6\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x0d\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\x0d\x1b"
  "\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\xb4\x1b"
  "\xb3\x1b\xb5\xb7\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x02\x5a\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f"
  "\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73"
  "\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x66\x67\x6f\x70"
  "\x74\x2f\x62\x6c\x6b\x74\x79\x70\x2e\x69\x6e\x66\x15\x23\x5b\x70"
  "\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74"
  "\x5d\x02\x08\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x20"
  "\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x20\x62\x6c\x6f\x63\x6b"
  "\x20\x6e\x6f\x74\x20\x70\x61\x73\x73\x65\x64\x20\x6f\x75\x74\x13"
  "\x49\x6c\x6c\x65\x67\x61\x6c\x20\x62\x6c\x6f\x63\x6b\x20\x74\x79"
  "\x70\x65\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x02\x1c\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x75\x73\x65\x2d\x6d\x75\x6c\x74"
  "\x69\x63\x6c\x6f\x73\x75\x72\x65\x73\x3f\x15\x62\x6c\x6f\x63\x6b"
  "\x2d\x74\x79\x70\x65\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x18"
  "\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70\x65\x2f\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x16\x62\x6c\x6f\x63\x6b\x2d\x74\x79"
  "\x70\x65\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x0e\x62\x6c"
  "\x6f\x63\x6b\x2d\x74\x79\x70\x65\x2f\x69\x63\x11\x62\x6c\x6f\x63"
  "\x6b\x2d\x74\x79\x70\x65\x2f\x73\x74\x61\x63\x6b\x07\x03\x16\x6d"
  "\x65\x72\x67\x65\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x62\x6c\x6f"
  "\x63\x6b\x73\x21\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x09\x03"
  "\x12\x62\x6c\x6f\x63\x6b\x2d\x70\x61\x73\x73\x65\x64\x2d\x6f\x75"
  "\x74\x3f\x04\x06\x65\x72\x72\x6f\x72\x0a\x03\x17\x6d\x61\x79\x62"
  "\x65\x2d\x63\x6c\x6f\x73\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x21\x0b\x06\x17\x2a\x81\x85\x02\x16\x28\x81\x85\x02\x15\x26"
  "\x81\x85\x02\x14\x24\x81\x85\x02\x13\x22\x81\x85\x02\x12\x20\x81"
  "\x85\x02\x11\x1e\x81\x87\x02\x10\x1c\x81\x85\x02\x0f\x1a\x81\x85"
  "\x02\x0e\x18\x81\x85\x02\x0d\x16\x81\x85\x02\x0c\x14\x81\x85\x02"
  "\x0b\x12\x81\x85\x02\x0a\x10\x81\x85\x02\x09\x0e\x81\x85\x02\x08"
  "\x0c\x81\x83\x02\x07\x0a\x83\x04\x06\x08\x81\x83\x02\x05\x06\x81"
  "\x83\x02\x04\x04\x83\x04\x29\x46\x0c\x02\x11\x13\x49\x6c\x6c\x65"
  "\x67\x61\x6c\x20\x62\x6c\x6f\x63\x6b\x20\x74\x79\x70\x65\x08\x05"
  "\x03\x13\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x63\x6c\x6f\x73"
  "\x75\x72\x65\x3f\x04\x0a\x03\x18\x6f\x72\x69\x67\x69\x6e\x61\x6c"
  "\x2d\x62\x6c\x6f\x63\x6b\x2d\x63\x68\x69\x6c\x64\x72\x65\x6e\x03"
  "\x10\x75\x70\x64\x61\x74\x65\x2d\x63\x6c\x6f\x73\x75\x72\x65\x21"
  "\x05\x14\x61\x74\x74\x65\x6d\x70\x74\x2d\x63\x68\x69\x6c\x64\x2d"
  "\x67\x72\x61\x66\x74\x05\x17\x61\x74\x74\x65\x6d\x70\x74\x2d\x63"
  "\x68\x69\x6c\x64\x72\x65\x6e\x2d\x6d\x65\x72\x67\x65\x0d\x03\x1b"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x74\x72\x69\x76\x69\x61"
  "\x6c\x2d\x63\x6c\x6f\x73\x75\x72\x65\x3f\x0e\x04\x09\x09\x29\x26"
  "\x81\x85\x02\x28\x24\x81\x87\x02\x27\x22\x81\x85\x02\x26\x20\x81"
  "\x87\x02\x25\x1e\x81\x83\x02\x24\x1c\x81\x89\x02\x23\x1a\x81\x87"
  "\x02\x22\x18\x81\x87\x02\x21\x16\x81\x83\x02\x20\x14\x81\x85\x02"
  "\x1f\x12\x81\x87\x02\x1e\x10\x81\x87\x02\x1d\x0e\x81\x87\x02\x1c"
  "\x0c\x81\x87\x02\x1b\x0a\x81\x87\x02\x1a\x08\x81\x85\x02\x19\x06"
  "\x81\x85\x02\x18\x04\x83\x04\x25\x44\x0f\x02\x17\x08\x0e\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x74\x61\x67\x10\x02\x04\x18\x6c"
  "\x69\x73\x74\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x70\x6f"
  "\x73\x69\x74\x69\x76\x65\x11\x04\x07\x61\x70\x70\x65\x6e\x64\x12"
  "\x03\x32\x14\x81\x85\x02\x31\x12\x81\x83\x02\x30\x10\x81\x87\x02"
  "\x2f\x0e\x81\x85\x02\x2e\x0c\x81\x85\x02\x2d\x0a\x81\x85\x02\x2c"
  "\x08\x81\x89\x02\x2b\x06\x81\x83\x02\x2a\x04\x83\x04\x13\x25\x13"
  "\x02\x15\x16\x27\x74\x72\x69\x76\x69\x61\x6c\x20\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x20\x62\x65\x63\x6f\x6d\x69\x6e\x67\x20\x6e"
  "\x6f\x6e\x2d\x74\x72\x69\x76\x69\x61\x6c\x0b\x12\x07\x6e\x6f\x72"
  "\x6d\x61\x6c\x0a\x02\x17\x13\x10\x02\x03\x0e\x03\x17\x6d\x61\x6b"
  "\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74"
  "\x65\x78\x74\x04\x18\x6c\x69\x73\x74\x2d\x74\x72\x61\x6e\x73\x66"
  "\x6f\x72\x6d\x2d\x6e\x65\x67\x61\x74\x69\x76\x65\x05\x16\x74\x72"
  "\x61\x6e\x73\x66\x65\x72\x2d\x62\x6c\x6f\x63\x6b\x2d\x63\x68\x69"
  "\x6c\x64\x21\x03\x13\x6c\x76\x61\x6c\x75\x65\x2d\x69\x6e\x74\x65"
  "\x67\x72\x61\x74\x65\x64\x3f\x14\x04\x0a\x04\x15\x63\x6c\x6f\x73"
  "\x75\x72\x65\x2d\x66\x69\x72\x73\x74\x2d\x6f\x66\x66\x73\x65\x74"
  "\x03\x1e\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x74\x72\x69\x76"
  "\x69\x61\x6c\x2d\x6f\x72\x2d\x76\x69\x72\x74\x75\x61\x6c\x3f\x06"
  "\x16\x66\x69\x6e\x64\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x62\x69"
  "\x6e\x64\x69\x6e\x67\x73\x15\x04\x19\x63\x6f\x6d\x70\x75\x74\x65"
  "\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x6f\x66\x66\x73\x65\x74\x73"
  "\x21\x16\x0b\x4e\x3a\x81\x89\x02\x4d\x38\x81\x87\x02\x4c\x36\x81"
  "\x85\x02\x4b\x34\x81\x89\x02\x4a\x32\x81\x89\x02\x49\x30\x81\x87"
  "\x02\x48\x2e\x81\x87\x02\x47\x2c\x81\x85\x02\x46\x2a\x81\x87\x02"
  "\x45\x28\x81\x87\x02\x44\x26\x81\x8b\x02\x43\x24\x81\x85\x02\x42"
  "\x22\x81\x8d\x02\x41\x20\x81\x85\x02\x40\x1e\x81\x85\x02\x3f\x1c"
  "\x81\x8f\x02\x3e\x1a\x81\x87\x02\x3d\x18\x81\x8b\x02\x3c\x16\x81"
  "\x8b\x02\x3b\x14\x81\x89\x02\x3a\x12\x81\x8b\x02\x39\x10\x81\x8b"
  "\x02\x38\x0e\x81\x89\x02\x37\x0c\x81\x87\x02\x36\x0a\x81\x85\x02"
  "\x35\x08\x81\x83\x02\x34\x06\x81\x83\x02\x33\x04\x83\x04\x39\x64"
  "\x17\x02\x0a\x09\x11\x17\x0a\x62\x6c\x6f\x63\x6b\x2d\x74\x61\x67"
  "\x18\x10\x03\x03\x1f\x62\x6c\x6f\x63\x6b\x2d\x6e\x65\x61\x72\x65"
  "\x73\x74\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x61\x6e\x63\x65\x73"
  "\x74\x6f\x72\x19\x05\x13\x72\x65\x66\x69\x6c\x74\x65\x72\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x73\x1a\x05\x0d\x67\x72\x61\x66\x74"
  "\x2d\x63\x68\x69\x6c\x64\x21\x1b\x04\x05\x6d\x65\x6d\x71\x1c\x04"
  "\x09\x66\x6f\x72\x2d\x61\x6c\x6c\x3f\x1d\x03\x03\x0e\x08\x64\x2e"
  "\x81\x87\x02\x63\x2c\x81\x87\x02\x62\x2a\x81\x87\x02\x61\x28\x81"
  "\x87\x02\x60\x26\x81\x87\x02\x5f\x24\x81\x89\x02\x5e\x22\x81\x87"
  "\x02\x5d\x20\x81\x89\x02\x5c\x1e\x81\x87\x02\x5b\x1c\x81\x87\x02"
  "\x5a\x1a\x81\x85\x02\x59\x18\x81\x8f\x02\x58\x16\x81\x85\x02\x57"
  "\x14\x81\x8b\x02\x56\x12\x81\x95\x02\x55\x10\x81\x8d\x02\x54\x0e"
  "\x81\x8b\x02\x53\x0c\x81\x8b\x02\x52\x0a\x81\x89\x02\x51\x08\x81"
  "\x87\x02\x50\x06\x81\x89\x02\x4f\x04\x85\x08\x2d\x4a\x1e\x02\x02"
  "\x0f\x15\x0a\x0b\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x64\x11\x0b"
  "\x64\x65\x73\x63\x65\x6e\x64\x61\x6e\x74\x1d\x04\x09\x06\x0d\x67"
  "\x72\x61\x66\x74\x2d\x62\x6c\x6f\x63\x6b\x21\x1f\x05\x0c\x6c\x76"
  "\x61\x6c\x75\x65\x2d\x70\x75\x74\x21\x03\x19\x05\x70\x1a\x81\x87"
  "\x02\x6f\x18\x81\x87\x02\x6e\x16\x81\x85\x02\x6d\x14\x81\x85\x02"
  "\x6c\x12\x81\x85\x02\x6b\x10\x81\x87\x02\x6a\x0e\x81\x89\x02\x69"
  "\x0c\x81\x85\x02\x68\x0a\x81\x87\x02\x67\x08\x81\x87\x02\x66\x06"
  "\x81\x89\x02\x65\x04\x85\x08\x19\x31\x19\x02\x08\x02\x16\x29\x75"
  "\x70\x64\x61\x74\x65\x2d\x63\x6c\x6f\x73\x75\x72\x65\x21\x3a\x20"
  "\x55\x70\x64\x61\x74\x69\x6e\x67\x20\x73\x68\x61\x72\x65\x64\x20"
  "\x63\x6c\x6f\x73\x75\x72\x65\x09\x11\x05\x1a\x04\x0a\x03\x1b\x63"
  "\x6c\x6f\x73\x75\x72\x65\x2d\x62\x6c\x6f\x63\x6b\x2d\x66\x69\x72"
  "\x73\x74\x2d\x6f\x66\x66\x73\x65\x74\x20\x04\x16\x05\x7a\x16\x81"
  "\x89\x02\x79\x14\x81\x87\x02\x78\x12\x81\x87\x02\x77\x10\x81\x85"
  "\x02\x76\x0e\x81\x8b\x02\x75\x0c\x81\x85\x02\x74\x0a\x81\x83\x02"
  "\x73\x08\x81\x83\x02\x72\x06\x83\x04\x71\x04\x81\x85\x02\x15\x2a"
  "\x21\x02\x09\x20\x72\x65\x66\x69\x6c\x74\x65\x72\x2d\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x73\x3a\x20\x42\x6c\x6f\x63\x6b\x20\x66\x6f"
  "\x75\x6e\x64\x04\x63\x64\x72\x22\x0a\x18\x04\x63\x61\x72\x23\x26"
  "\x72\x65\x66\x69\x6c\x74\x65\x72\x2d\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x73\x3a\x20\x62\x65\x63\x6f\x6d\x69\x6e\x67\x20\x74\x72\x69"
  "\x76\x69\x61\x6c\x21\x18\x02\x03\x08\x72\x65\x76\x65\x72\x73\x65"
  "\x18\x04\x0a\x04\x1c\x04\x88\x01\x1e\x81\x8f\x02\x87\x01\x1c\x81"
  "\x8f\x02\x86\x01\x1a\x81\x93\x02\x85\x01\x18\x81\x8f\x02\x84\x01"
  "\x16\x81\x8f\x02\x83\x01\x14\x81\x91\x02\x82\x01\x12\x81\x8f\x02"
  "\x81\x01\x10\x81\x8f\x02\x80\x01\x0e\x81\x8f\x02\x7f\x0c\x81\x8d"
  "\x02\x7e\x0a\x81\x8b\x02\x7d\x08\x81\x8b\x02\x7c\x06\x81\x89\x02"
  "\x7b\x04\x85\x08\x1d\x32\x24\x02\x0a\x0e\x75\x6e\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x61\x6c\x22\x08\x03\x05\x0b\x6c\x69\x73\x74"
  "\x2d\x73\x70\x6c\x69\x74\x25\x03\x04\x11\x07\x10\x6d\x65\x72\x67"
  "\x65\x2d\x63\x68\x69\x6c\x64\x72\x65\x6e\x21\x11\x04\x0e\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x67\x65\x74\x03\x0e\x08\x93\x01"
  "\x18\x81\x83\x02\x92\x01\x16\x81\x83\x02\x91\x01\x14\x81\x83\x02"
  "\x90\x01\x12\x83\x04\x8f\x01\x10\x81\x87\x02\x8e\x01\x0e\x81\x87"
  "\x02\x8d\x01\x0c\x81\x8b\x02\x8c\x01\x0a\x81\x83\x02\x8b\x01\x08"
  "\x83\x04\x8a\x01\x06\x81\x87\x02\x89\x01\x04\x85\x08\x17\x2f\x26"
  "\x02\x0b\x18\x22\x09\x08\x23\x0d\x65\x71\x2d\x73\x65\x74\x2d\x75"
  "\x6e\x69\x6f\x6e\x27\x02\x04\x04\x6d\x61\x70\x28\x04\x15\x6c\x69"
  "\x73\x74\x2d\x73\x65\x61\x72\x63\x68\x2d\x70\x6f\x73\x69\x74\x69"
  "\x76\x65\x05\x1a\x05\x0d\x72\x65\x64\x75\x63\x65\x2d\x72\x69\x67"
  "\x68\x74\x29\x03\x18\x04\x11\x6c\x76\x61\x6c\x75\x65\x2d\x69\x6d"
  "\x70\x6c\x69\x63\x69\x74\x3f\x18\x04\x1d\x07\x0f\x6c\x69\x6e\x6b"
  "\x2d\x63\x68\x69\x6c\x64\x72\x65\x6e\x21\x1d\x04\x1c\x0a\xb3\x01"
  "\x42\x81\x8b\x02\xb2\x01\x40\x81\x87\x02\xb1\x01\x3e\x81\x85\x02"
  "\xb0\x01\x3c\x81\x89\x02\xaf\x01\x3a\x81\x93\x02\xae\x01\x38\x81"
  "\x9b\x02\xad\x01\x36\x81\x85\x02\xac\x01\x34\x81\xa1\x02\xab\x01"
  "\x32\x81\x9d\x02\xaa\x01\x30\x81\x93\x02\xa9\x01\x2e\x81\x97\x02"
  "\xa8\x01\x2c\x81\x95\x02\xa7\x01\x2a\x81\x93\x02\xa6\x01\x28\x81"
  "\x93\x02\xa5\x01\x26\x81\x93\x02\xa4\x01\x24\x81\x97\x02\xa3\x01"
  "\x22\x81\x97\x02\xa2\x01\x20\x81\x8f\x02\xa1\x01\x1e\x81\x83\x02"
  "\xa0\x01\x1c\x83\x04\x9f\x01\x1a\x81\x8d\x02\x9e\x01\x18\x81\x83"
  "\x02\x9d\x01\x16\x81\x8f\x02\x9c\x01\x14\x81\x83\x02\x9b\x01\x12"
  "\x83\x04\x9a\x01\x10\x81\x97\x02\x99\x01\x0e\x81\x93\x02\x98\x01"
  "\x0c\x81\x91\x02\x97\x01\x0a\x81\x8b\x02\x96\x01\x08\x81\x8d\x02"
  "\x95\x01\x06\x81\x8d\x02\x94\x01\x04\x87\x0c\x41\x61\x2a\x02\x0c"
  "\x11\x25\x6c\x69\x6e\x6b\x2d\x63\x68\x69\x6c\x64\x72\x65\x6e\x21"
  "\x3a\x20\x6e\x6f\x6e\x2d\x6c\x65\x74\x72\x65\x63\x20\x72\x65\x6d"
  "\x6f\x76\x61\x62\x6c\x65\x02\x18\x0b\x69\x6e\x64\x69\x72\x65\x63"
  "\x74\x65\x64\x12\x08\x15\x09\x0a\x25\x6c\x69\x6e\x6b\x2d\x63\x68"
  "\x69\x6c\x64\x72\x65\x6e\x21\x3a\x20\x54\x72\x69\x76\x69\x61\x6c"
  "\x20\x6d\x75\x6c\x74\x69\x63\x6c\x6f\x73\x75\x72\x65\x18\x63\x6c"
  "\x6f\x73\x75\x72\x65\x2d\x72\x65\x64\x69\x72\x65\x63\x74\x69\x6f"
  "\x6e\x2d\x74\x61\x67\x2b\x27\x03\x05\x25\x05\x0a\x04\x0a\x04\x28"
  "\x04\x18\x04\x0e\x6d\x61\x6b\x65\x2d\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x06\x13\x6d\x61\x6b\x65\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d"
  "\x62\x6c\x6f\x63\x6b\x28\x05\x29\x04\x12\x04\x09\x06\x1f\x04\x1c"
  "\x03\x15\x6c\x76\x61\x6c\x75\x65\x2d\x6b\x6e\x6f\x77\x6e\x2d\x63"
  "\x6c\x6f\x73\x75\x72\x65\x29\x0e\xda\x01\x50\x81\x87\x02\xd9\x01"
  "\x4e\x81\x87\x02\xd8\x01\x4c\x81\x87\x02\xd7\x01\x4a\x81\x85\x02"
  "\xd6\x01\x48\x81\x85\x02\xd5\x01\x46\x81\x85\x02\xd4\x01\x44\x81"
  "\x85\x02\xd3\x01\x42\x81\x85\x02\xd2\x01\x40\x81\x8f\x02\xd1\x01"
  "\x3e\x81\x85\x02\xd0\x01\x3c\x81\x8f\x02\xcf\x01\x3a\x81\x89\x02"
  "\xce\x01\x38\x81\x89\x02\xcd\x01\x36\x81\x85\x02\xcc\x01\x34\x81"
  "\x8d\x02\xcb\x01\x32\x81\x8d\x02\xca\x01\x30\x81\x8d\x02\xc9\x01"
  "\x2e\x81\x8d\x02\xc8\x01\x2c\x81\x91\x02\xc7\x01\x2a\x81\x8d\x02"
  "\xc6\x01\x28\x81\x8d\x02\xc5\x01\x26\x81\x8d\x02\xc4\x01\x24\x81"
  "\x83\x02\xc3\x01\x22\x81\x83\x02\xc2\x01\x20\x81\x8d\x02\xc1\x01"
  "\x1e\x81\x8b\x02\xc0\x01\x1c\x81\x89\x02\xbf\x01\x1a\x81\x8d\x02"
  "\xbe\x01\x18\x81\x83\x02\xbd\x01\x16\x83\x04\xbc\x01\x14\x81\x93"
  "\x02\xbb\x01\x12\x81\x8f\x02\xba\x01\x10\x81\x8d\x02\xb9\x01\x0e"
  "\x81\x8b\x02\xb8\x01\x0c\x81\x87\x02\xb7\x01\x0a\x81\x85\x02\xb6"
  "\x01\x08\x81\x87\x02\xb5\x01\x06\x81\x87\x02\xb4\x01\x04\x87\x0c"
  "\x4f\x81\x01\x27\x02\x0d\x23\x16\x02\x20\x67\x72\x61\x66\x74\x2d"
  "\x62\x6c\x6f\x63\x6b\x21\x3a\x20\x44\x69\x66\x66\x65\x72\x69\x6e"
  "\x67\x20\x70\x61\x72\x65\x6e\x74\x73\x09\x11\x13\x12\x08\x03\x2d"
  "\x63\x6c\x6f\x73\x75\x72\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2d\x6e\x65\x65\x64\x73\x2d\x65\x78\x74\x65\x72\x6e\x61\x6c"
  "\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3f\x04\x09\x05\x0a"
  "\x03\x20\x04\x16\x06\xf7\x01\x3c\x81\x87\x02\xf6\x01\x3a\x81\x89"
  "\x02\xf5\x01\x38\x81\x89\x02\xf4\x01\x36\x81\x89\x02\xf3\x01\x34"
  "\x81\x87\x02\xf2\x01\x32\x81\x85\x02\xf1\x01\x30\x81\x85\x02\xf0"
  "\x01\x2e\x81\x85\x02\xef\x01\x2c\x81\x85\x02\xee\x01\x2a\x81\x8b"
  "\x02\xed\x01\x28\x81\x8b\x02\xec\x01\x26\x81\x89\x02\xeb\x01\x24"
  "\x81\x89\x02\xea\x01\x22\x81\x89\x02\xe9\x01\x20\x81\x85\x02\xe8"
  "\x01\x1e\x81\x85\x02\xe7\x01\x1c\x81\x8d\x02\xe6\x01\x1a\x81\x8b"
  "\x02\xe5\x01\x18\x81\x83\x02\xe4\x01\x16\x81\x83\x02\xe3\x01\x14"
  "\x81\x83\x02\xe2\x01\x12\x81\x83\x02\xe1\x01\x10\x81\x8b\x02\xe0"
  "\x01\x0e\x81\x89\x02\xdf\x01\x0c\x81\x89\x02\xde\x01\x0a\x81\x89"
  "\x02\xdd\x01\x08\x81\x89\x02\xdc\x01\x06\x81\x89\x02\xdb\x01\x04"
  "\x86\x0a\x3b\x58\x20\x02\x0e\x23\x33\x69\x6e\x64\x69\x72\x65\x63"
  "\x74\x69\x6f\x6e\x2d\x62\x6c\x6f\x63\x6b\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x3a\x20\x42\x61\x64\x20\x69\x6e\x64\x69\x72\x65"
  "\x63\x74\x69\x6f\x6e\x20\x62\x6c\x6f\x63\x6b\x13\x08\x04\x0a\x02"
  "\xfe\x01\x10\x81\x85\x02\xfd\x01\x0e\x81\x85\x02\xfc\x01\x0c\x81"
  "\x85\x02\xfb\x01\x0a\x81\x85\x02\xfa\x01\x08\x81\x85\x02\xf9\x01"
  "\x06\x81\x83\x02\xf8\x01\x04\x83\x04\x0f\x1c\x12\x02\x0f\x0a\x10"
  "\x02\x04\x1c\x02\x83\x02\x0c\x81\x87\x02\x82\x02\x0a\x81\x89\x02"
  "\x81\x02\x08\x81\x87\x02\x80\x02\x06\x81\x85\x02\xff\x01\x04\x84"
  "\x06\x0b\x17\x2c\x02\x10\x0a\x10\x02\x03\x03\x0e\x03\x89\x02\x0e"
  "\x81\x83\x02\x88\x02\x0c\x81\x83\x02\x87\x02\x0a\x81\x85\x02\x86"
  "\x02\x08\x81\x83\x02\x85\x02\x06\x81\x83\x02\x84\x02\x04\x83\x04"
  "\x0d\x1a\x2d\x02\x11\x03\x03\x0e\x03\x8c\x02\x08\x81\x83\x02\x8b"
  "\x02\x06\x81\x83\x02\x8a\x02\x04\x83\x04\x07\x10\x0e\x02\x12\x22"
  "\x23\x93\x02\x10\x81\x87\x02\x92\x02\x0e\x81\x87\x02\x91\x02\x0c"
  "\x81\x8d\x02\x90\x02\x0a\x81\x8d\x02\x8f\x02\x08\x81\x8b\x02\x8e"
  "\x02\x06\x81\x8b\x02\x8d\x02\x04\x85\x08\x0f\x15\x02\x13\x17\x08"
  "\x09\x10\x02\x05\x17\x66\x69\x6c\x74\x65\x72\x2d\x62\x6f\x75\x6e"
  "\x64\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x2e\x06\x28\x03\x0a"
  "\x69\x63\x2d\x62\x6c\x6f\x63\x6b\x3f\x06\x15\x05\x9f\x02\x1a\x81"
  "\x85\x02\x9e\x02\x18\x81\x83\x02\x9d\x02\x16\x81\x89\x02\x9c\x02"
  "\x14\x81\x87\x02\x9b\x02\x12\x81\x87\x02\x9a\x02\x10\x81\x85\x02"
  "\x99\x02\x0e\x81\x89\x02\x98\x02\x0c\x81\x85\x02\x97\x02\x0a\x81"
  "\x8b\x02\x96\x02\x08\x86\x0a\x95\x02\x06\x81\x8f\x02\x94\x02\x04"
  "\x81\x89\x02\x19\x2e\x2f\x02\x14\x22\x23\x04\x1c\x05\x2e\x04\x06"
  "\x64\x65\x6c\x71\x21\x04\xa8\x02\x14\x81\x87\x02\xa7\x02\x12\x81"
  "\x87\x02\xa6\x02\x10\x81\x87\x02\xa5\x02\x0e\x81\x85\x02\xa4\x02"
  "\x0c\x81\x8b\x02\xa3\x02\x0a\x81\x87\x02\xa2\x02\x08\x81\x87\x02"
  "\xa1\x02\x06\x81\x8b\x02\xa0\x02\x04\x85\x08\x13\x20\x1c\x02\x15"
  "\x13\x12\x11\x0b\x09\x0a\x08\x63\x6c\x6f\x73\x75\x72\x65\x04\x0b"
  "\x6d\x61\x6b\x65\x2d\x62\x6c\x6f\x63\x6b\x02\xb0\x02\x12\x81\x8b"
  "\x02\xaf\x02\x10\x81\x8b\x02\xae\x02\x0e\x81\x8b\x02\xad\x02\x0c"
  "\x81\x8b\x02\xac\x02\x0a\x81\x8b\x02\xab\x02\x08\x81\x8b\x02\xaa"
  "\x02\x06\x81\x89\x02\xa9\x02\x04\x86\x0a\x11\x21\x30\x02\x16\x2c"
  "\x63\x6f\x6d\x70\x75\x74\x65\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d"
  "\x6f\x66\x66\x73\x65\x74\x73\x21\x3a\x20\x69\x6e\x74\x65\x67\x72"
  "\x61\x74\x65\x64\x20\x6c\x76\x61\x6c\x75\x65\x22\x23\x0f\x09\x03"
  "\x15\x69\x63\x2d\x62\x6c\x6f\x63\x6b\x2f\x75\x73\x65\x2d\x6c\x6f"
  "\x6f\x6b\x75\x70\x3f\x03\x14\x04\x0a\x04\xbe\x02\x1e\x81\x8d\x02"
  "\xbd\x02\x1c\x81\x8b\x02\xbc\x02\x1a\x81\x8b\x02\xbb\x02\x18\x81"
  "\x8d\x02\xba\x02\x16\x81\x8b\x02\xb9\x02\x14\x81\x8b\x02\xb8\x02"
  "\x12\x81\x8b\x02\xb7\x02\x10\x81\x8d\x02\xb6\x02\x0e\x81\x8b\x02"
  "\xb5\x02\x0c\x81\x8b\x02\xb4\x02\x0a\x81\x89\x02\xb3\x02\x08\x81"
  "\x85\x02\xb2\x02\x06\x84\x06\xb1\x02\x04\x81\x87\x02\x1d\x32\x23"
  "\x02\x17\x0b\x03\x14\x77\x69\x74\x68\x2d\x6e\x65\x77\x2d\x6e\x6f"
  "\x64\x65\x2d\x6d\x61\x72\x6b\x73\x03\x0f\x65\x64\x67\x65\x2d\x6e"
  "\x65\x78\x74\x2d\x6e\x6f\x64\x65\x22\x04\x09\x03\x1c\x73\x65\x74"
  "\x75\x70\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x6f\x6e\x74\x65"
  "\x78\x74\x73\x2f\x6e\x6f\x64\x65\x14\x03\x1c\x73\x65\x74\x75\x70"
  "\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74"
  "\x73\x2f\x6e\x65\x78\x74\x31\x06\xc6\x02\x12\x81\x83\x02\xc5\x02"
  "\x10\x81\x85\x02\xc4\x02\x0e\x83\x04\xc3\x02\x0c\x81\x85\x02\xc2"
  "\x02\x0a\x81\x83\x02\xc1\x02\x08\x81\x87\x02\xc0\x02\x06\x81\x83"
  "\x02\xbf\x02\x04\x84\x06\x11\x22\x32\x02\x18\x02\x03\x14\x03\x0d"
  "\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x65\x64\x3f\x03\xc8\x02\x06"
  "\x83\x04\xc7\x02\x04\x81\x83\x02\x05\x0e\x33\x02\x19\x02\x0b\x0c"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x13\x55\x6e\x6b\x6e"
  "\x6f\x77\x6e\x20\x6e\x6f\x64\x65\x20\x74\x79\x70\x65\x3a\x0a\x07"
  "\x72\x65\x74\x75\x72\x6e\x08\x09\x0d\x70\x61\x72\x61\x6c\x6c\x65"
  "\x6c\x2d\x74\x61\x67\x10\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x74\x61\x67\x13\x76\x69\x72\x74\x75\x61\x6c\x2d\x72\x65"
  "\x74\x75\x72\x6e\x2d\x74\x61\x67\x0f\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x2d\x74\x61\x67\x0f\x64\x65\x66\x69\x6e\x69\x74\x69"
  "\x6f\x6e\x2d\x74\x61\x67\x0e\x74\x72\x75\x65\x2d\x74\x65\x73\x74"
  "\x2d\x74\x61\x67\x14\x73\x74\x61\x63\x6b\x2d\x6f\x76\x65\x72\x77"
  "\x72\x69\x74\x65\x2d\x74\x61\x67\x08\x70\x6f\x70\x2d\x74\x61\x67"
  "\x0c\x66\x67\x2d\x6e\x6f\x6f\x70\x2d\x74\x61\x67\x0a\x03\x0b\x6e"
  "\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x21\x04\x09\x04\x1e\x73\x65\x74"
  "\x75\x70\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x6f\x6e\x74\x65"
  "\x78\x74\x73\x2f\x72\x76\x61\x6c\x75\x65\x09\x03\x22\x04\x0a\x03"
  "\x31\x03\x0b\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x08\x87\x03"
  "\x80\x01\x81\x85\x02\x86\x03\x7e\x81\x85\x02\x85\x03\x7c\x81\x83"
  "\x02\x84\x03\x7a\x81\x83\x02\x83\x03\x78\x81\x83\x02\x82\x03\x76"
  "\x81\x85\x02\x81\x03\x74\x81\x85\x02\x80\x03\x72\x81\x85\x02\xff"
  "\x02\x70\x81\x85\x02\xfe\x02\x6e\x81\x85\x02\xfd\x02\x6c\x81\x87"
  "\x02\xfc\x02\x6a\x81\x87\x02\xfb\x02\x68\x81\x85\x02\xfa\x02\x66"
  "\x81\x83\x02\xf9\x02\x64\x81\x85\x02\xf8\x02\x62\x81\x85\x02\xf7"
  "\x02\x60\x83\x04\xf6\x02\x5e\x81\x83\x02\xf5\x02\x5c\x81\x87\x02"
  "\xf4\x02\x5a\x81\x85\x02\xf3\x02\x58\x81\x85\x02\xf2\x02\x56\x81"
  "\x83\x02\xf1\x02\x54\x81\x85\x02\xf0\x02\x52\x81\x87\x02\xef\x02"
  "\x50\x81\x85\x02\xee\x02\x4e\x81\x85\x02\xed\x02\x4c\x81\x85\x02"
  "\xec\x02\x4a\x81\x83\x02\xeb\x02\x48\x81\x83\x02\xea\x02\x46\x81"
  "\x87\x02\xe9\x02\x44\x81\x85\x02\xe8\x02\x42\x81\x87\x02\xe7\x02"
  "\x40\x81\x85\x02\xe6\x02\x3e\x81\x89\x02\xe5\x02\x3c\x81\x85\x02"
  "\xe4\x02\x3a\x81\x85\x02\xe3\x02\x38\x81\x87\x02\xe2\x02\x36\x81"
  "\x85\x02\xe1\x02\x34\x81\x85\x02\xe0\x02\x32\x81\x85\x02\xdf\x02"
  "\x30\x81\x89\x02\xde\x02\x2e\x81\x87\x02\xdd\x02\x2c\x81\x85\x02"
  "\xdc\x02\x2a\x81\x89\x02\xdb\x02\x28\x81\x87\x02\xda\x02\x26\x81"
  "\x85\x02\xd9\x02\x24\x81\x89\x02\xd8\x02\x22\x81\x87\x02\xd7\x02"
  "\x20\x81\x85\x02\xd6\x02\x1e\x81\x85\x02\xd5\x02\x1c\x81\x87\x02"
  "\xd4\x02\x1a\x81\x85\x02\xd3\x02\x18\x81\x87\x02\xd2\x02\x16\x81"
  "\x85\x02\xd1\x02\x14\x81\x87\x02\xd0\x02\x12\x81\x85\x02\xcf\x02"
  "\x10\x81\x85\x02\xce\x02\x0e\x81\x87\x02\xcd\x02\x0c\x81\x85\x02"
  "\xcc\x02\x0a\x81\x83\x02\xcb\x02\x08\x81\x83\x02\xca\x02\x06\x81"
  "\x85\x02\xc9\x02\x04\x83\x04\x7f\xa9\x01\x22\x02\x1a\x1e\x6d\x69"
  "\x73\x6d\x61\x74\x63\x68\x65\x64\x20\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x20\x63\x6f\x6e\x74\x65\x78\x74\x73\x02\x13\x10\x02\x05"
  "\x0a\x03\x18\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e"
  "\x74\x65\x78\x74\x2f\x62\x6c\x6f\x63\x6b\x03\x13\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x3f\x04\x8f"
  "\x03\x12\x81\x87\x02\x8e\x03\x10\x81\x85\x02\x8d\x03\x0e\x81\x87"
  "\x02\x8c\x03\x0c\x81\x85\x02\x8b\x03\x0a\x84\x06\x8a\x03\x08\x81"
  "\x87\x02\x89\x03\x06\x81\x89\x02\x88\x03\x04\x81\x87\x02\x11\x23"
  "\x10\x1a\x0a\x0a\x10\x0a\x22\x04\x33\x06\x32\x04\x23\x06\x30\x04"
  "\x1c\x04\x2f\x08\x04\x0e\x04\x2d\x04\x2c\x04\x12\x04\x20\x04\x27"
  "\x04\x17\x23\x5b\x63\x6c\x6f\x73\x75\x72\x65\x2d\x72\x65\x64\x69"
  "\x72\x65\x63\x74\x69\x6f\x6e\x5d\x2a\x04\x26\x04\x24\x04\x21\x06"
  "\x19\x04\x1e\x04\x17\x04\x13\x04\x0f\x04\x0c\x04\x1b\x09\x14\x31"
  "\x18\x73\x65\x74\x75\x70\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63"
  "\x6f\x6e\x74\x65\x78\x74\x73\x21\x16\x28\x2e\x15\x25\x18\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2f\x66\x75\x6c\x6c\x2d\x63\x6c\x6f"
  "\x73\x75\x72\x65\x3f\x29\x18\x1c\x69\x6e\x64\x69\x72\x65\x63\x74"
  "\x69\x6f\x6e\x2d\x62\x6c\x6f\x63\x6b\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x1f\x1d\x2b\x11\x0d\x1a\x1b\x0b\x13\x73\x65\x74\x75"
  "\x70\x2d\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70\x65\x73\x21\x1b\x05"
  "\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02"
  "\x07\x11";

SCHEME_OBJECT *
blktyp_so_data_6d0138444fb73d89 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_blktyp_so_data_6d0138444fb73d89 [0]))), (sizeof (prog_blktyp_so_data_6d0138444fb73d89)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("blktyp.so", blktyp_so_data_6d0138444fb73d89)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("blktyp.so", "cea96eb05b0e9349")
