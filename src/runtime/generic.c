/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:34-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_5 3
#define LABEL_1_6 5
#define LABEL_1_7 7
#define LABEL_1_4 9
#define LABEL_1_8 11
#define LABEL_1_10 13
#define LABEL_1_11 15
#define LABEL_1_15 17
#define LABEL_1_13 19
#define LABEL_1_16 21
#define LABEL_1_19 23
#define LABEL_1_20 25
#define LABEL_1_21 27
#define LABEL_1_22 29
#define LABEL_1_27 31
#define LABEL_1_29 33
#define LABEL_1_24 35
#define LABEL_1_28 37
#define LABEL_1_31 39
#define LABEL_1_32 41
#define ENVIRONMENT_LABEL_1_3 81
#define DEBUGGING_LABEL_1_2 80
#define OBJECT_1_13 79
#define OBJECT_1_12 78
#define OBJECT_1_11 77
#define OBJECT_1_10 76
#define OBJECT_1_9 75
#define OBJECT_1_8 74
#define OBJECT_1_7 73
#define OBJECT_1_6 72
#define OBJECT_1_5 71
#define OBJECT_1_4 70
#define OBJECT_1_3 69
#define OBJECT_1_2 68
#define OBJECT_1_1 67
#define OBJECT_1_0 66
#define EXECUTE_CACHE_1_33 43
#define EXECUTE_CACHE_1_30 45
#define EXECUTE_CACHE_1_26 47
#define EXECUTE_CACHE_1_25 49
#define EXECUTE_CACHE_1_23 51
#define EXECUTE_CACHE_1_18 53
#define EXECUTE_CACHE_1_17 55
#define EXECUTE_CACHE_1_14 57
#define EXECUTE_CACHE_1_12 59
#define EXECUTE_CACHE_1_9 61
#define FREE_REFERENCE_1_1 64
#define FREE_REFERENCE_1_0 65
#define FREE_REFERENCES_LABEL_1_0 42
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd7;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd52;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd83;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_1_5);
      goto continuation_13;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_9;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_1_4);
      goto make_generic_procedure_32;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto label_35;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto label_34;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_14;

    case 7:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_17;

    case 8:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_15;

    case 9:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_18;

    case 10:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_25;

    case 11:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_24;

    case 12:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_23;

    case 13:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_26;

    case 14:
      current_block = (Rpc - LABEL_1_27);
      goto label_37;

    case 15:
      current_block = (Rpc - LABEL_1_29);
      goto label_36;

    case 16:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_22;

    case 17:
      current_block = (Rpc - LABEL_1_28);
      goto continuation_28;

    case 18:
      current_block = (Rpc - LABEL_1_31);
      goto continuation_21;

    case 19:
      current_block = (Rpc - LABEL_1_32);
      goto label_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_generic_procedure_40)
DEFLABEL (make_generic_procedure_32)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == (current_block [OBJECT_1_0]))
    goto label_42;
  (* (--Rsp)) = (Wrd5.Obj);
  goto label_41;

DEFLABEL (label_42)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_41)
DEFLABEL (label_73)
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == (current_block [OBJECT_1_0]))
    goto label_44;
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_43;

DEFLABEL (label_44)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_43)
DEFLABEL (label_72)
  (Wrd11.Obj) = (Rsp [3]);
  if ((Wrd11.Obj) == (current_block [OBJECT_1_0]))
    goto label_46;
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_45;

DEFLABEL (label_46)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_45)
DEFLABEL (label_71)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd75.Obj) = (current_block [OBJECT_1_1]);
  (Wrd78.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd78.Lng))))
    goto label_70;
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd75.Obj));
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd21.Obj) == (Wrd23.Obj))
    goto label_69;

DEFLABEL (label_68)
  (Wrd24.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd34.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd34.Lng)))
    goto label_47;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_47)
  (Wrd28.uLng) = (OBJECT_DATUM (Wrd24.Obj));
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd28.Obj) == (Wrd30.Obj))
    goto label_49;
  (Wrd26.Obj) = (current_block [OBJECT_1_5]);
  goto label_48;

DEFLABEL (label_49)
  (Wrd26.Obj) = (current_block [OBJECT_1_4]);

DEFLABEL (label_48)
DEFLABEL (label_67)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd26.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_65;

DEFLABEL (label_66)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_1_7]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_6);

DEFLABEL (label_65)
  (Wrd42.Obj) = (Rsp [1]);
  if (! ((Wrd42.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_60;

DEFLABEL (label_59)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd73.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd6.Lng) > 0)
    goto label_58;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_1_15);

DEFLABEL (label_58)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_1_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_26]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_1_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_1_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_55;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd5.Obj);

DEFLABEL (label_54)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_33]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_1_19);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [6]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (* (--Rsp)) = Rvl;
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_53;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd24.Lng))))
    goto label_53;
  ((Wrd22.pObj) [8]) = Rvl;

DEFLABEL (label_52)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_51;
  Wrd10 = Wrd14;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_30]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_1_28);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_29])), (Wrd11.pObj));

DEFLABEL (label_36)
  (Wrd10.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Obj) = (current_block [OBJECT_1_12]);
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_13]), 3);

DEFLABEL (label_37)
  goto label_52;

DEFLABEL (label_55)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_57;
  Wrd12 = Wrd16;

DEFLABEL (label_56)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_32])), (Wrd13.pObj));

DEFLABEL (label_38)
  (Wrd12.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_60)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd45.uLng) == 62)
    goto label_62;

DEFLABEL (label_61)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (current_block [OBJECT_1_11]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_5);
  goto label_59;

DEFLABEL (label_62)
  if (! ((Wrd45.uLng) == 62))
    goto label_64;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd60.Lng))))
    goto label_64;
  (Wrd52.Obj) = ((Wrd58.pObj) [1]);

DEFLABEL (label_63)
  if ((Wrd52.Obj) == (current_block [OBJECT_1_10]))
    goto label_59;
  goto label_61;

DEFLABEL (label_64)
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.Obj) = (current_block [OBJECT_1_8]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_9]), 2);

DEFLABEL (label_34)
  (Wrd52.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_69)
  Rsp = (& (Rsp [2]));
  goto label_65;

DEFLABEL (label_70)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_35)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  goto label_69;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  goto label_65;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 7
#define DEBUGGING_LABEL_2_2 6
#define OBJECT_2_1 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto generic_record_tag_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_record_tag_3)
DEFLABEL (generic_record_tag_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

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

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 7
#define DEBUGGING_LABEL_3_2 6
#define OBJECT_3_1 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto generic_record_arity_min_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_record_arity_min_3)
DEFLABEL (generic_record_arity_min_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

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

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 7
#define DEBUGGING_LABEL_4_2 6
#define OBJECT_4_1 5
#define OBJECT_4_0 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto generic_record_arity_max_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_record_arity_max_3)
DEFLABEL (generic_record_arity_max_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

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

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 7
#define DEBUGGING_LABEL_5_2 6
#define OBJECT_5_1 5
#define OBJECT_5_0 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto generic_record_generator_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_record_generator_3)
DEFLABEL (generic_record_generator_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

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

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 7
#define DEBUGGING_LABEL_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto generic_record_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_record_name_3)
DEFLABEL (generic_record_name_0)
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
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
generic_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto generic_record_cache_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_record_cache_3)
DEFLABEL (generic_record_cache_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
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
generic_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto generic_record_procedure_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_record_procedure_3)
DEFLABEL (generic_record_procedure_0)
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
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 8
#define DEBUGGING_LABEL_9_2 7
#define OBJECT_9_2 6
#define OBJECT_9_1 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      goto set_generic_record_generatorB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_generic_record_generatorB_3)
DEFLABEL (set_generic_record_generatorB_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_9_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 8
#define DEBUGGING_LABEL_10_2 7
#define OBJECT_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      goto set_generic_record_cacheB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_generic_record_cacheB_3)
DEFLABEL (set_generic_record_cacheB_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_10_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 8
#define DEBUGGING_LABEL_11_2 7
#define OBJECT_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      goto set_generic_record_procedureB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_generic_record_procedureB_3)
DEFLABEL (set_generic_record_procedureB_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [8]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_11_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define ENVIRONMENT_LABEL_12_3 17
#define DEBUGGING_LABEL_12_2 16
#define OBJECT_12_3 15
#define OBJECT_12_2 14
#define OBJECT_12_1 13
#define OBJECT_12_0 12
#define FREE_REFERENCE_12_0 11
#define FREE_REFERENCES_LABEL_12_0 10
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto generic_recordP_4;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_recordP_10)
DEFLABEL (generic_recordP_4)
  INTERRUPT_CHECK (26, LABEL_12_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
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
  Rvl = (current_block [OBJECT_12_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_12_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_6 5
#define LABEL_13_5 7
#define ENVIRONMENT_LABEL_13_3 15
#define DEBUGGING_LABEL_13_2 14
#define OBJECT_13_0 13
#define EXECUTE_CACHE_13_7 9
#define FREE_REFERENCE_13_0 12
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
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
      goto generic_procedureP_1;

    case 1:
      current_block = (Rpc - LABEL_13_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_procedureP_5)
DEFLABEL (generic_procedureP_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_10;
  Wrd10 = Wrd14;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = (current_block [OBJECT_13_0]);
  goto label_6;

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_6])), (Wrd11.pObj));

DEFLABEL (label_3)
  (Wrd10.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define ENVIRONMENT_LABEL_14_3 16
#define DEBUGGING_LABEL_14_2 15
#define OBJECT_14_3 14
#define OBJECT_14_2 13
#define OBJECT_14_1 12
#define OBJECT_14_0 11
#define EXECUTE_CACHE_14_7 9
#define FREE_REFERENCES_LABEL_14_0 8
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
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
      current_block = (Rpc - LABEL_14_4);
      goto generic_record_arity_2;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_record_arity_7)
DEFLABEL (generic_record_arity_2)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_10)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_9;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_9;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_8)
  (Wrd37.Obj) = (current_block [OBJECT_14_3]);
  (Rsp [2]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (label_9)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_14_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_14_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 13
#define DEBUGGING_LABEL_15_2 12
#define OBJECT_15_0 11
#define EXECUTE_CACHE_15_7 7
#define EXECUTE_CACHE_15_6 9
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto generic_procedure_arity_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_procedure_arity_4)
DEFLABEL (generic_procedure_arity_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 13
#define DEBUGGING_LABEL_16_2 12
#define OBJECT_16_2 11
#define OBJECT_16_1 10
#define OBJECT_16_0 9
#define EXECUTE_CACHE_16_6 7
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_16_4);
      goto generic_procedure_arity_min_1;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_procedure_arity_min_4)
DEFLABEL (generic_procedure_arity_min_1)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_16_1]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 13
#define DEBUGGING_LABEL_17_2 12
#define OBJECT_17_2 11
#define OBJECT_17_1 10
#define OBJECT_17_0 9
#define EXECUTE_CACHE_17_6 7
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_17_4);
      goto generic_procedure_arity_max_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_procedure_arity_max_4)
DEFLABEL (generic_procedure_arity_max_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17_1]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 13
#define DEBUGGING_LABEL_18_2 12
#define OBJECT_18_2 11
#define OBJECT_18_1 10
#define OBJECT_18_0 9
#define EXECUTE_CACHE_18_6 7
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_18_4);
      goto generic_procedure_name_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_procedure_name_4)
DEFLABEL (generic_procedure_name_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_18_1]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 13
#define DEBUGGING_LABEL_19_2 12
#define OBJECT_19_2 11
#define OBJECT_19_1 10
#define OBJECT_19_0 9
#define EXECUTE_CACHE_19_6 7
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_19_4);
      goto generic_procedure_generator_1;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_procedure_generator_4)
DEFLABEL (generic_procedure_generator_1)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19_1]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_7 7
#define LABEL_20_9 9
#define TAG_20_10 3
#define LABEL_20_12 11
#define ENVIRONMENT_LABEL_20_3 25
#define DEBUGGING_LABEL_20_2 24
#define OBJECT_20_2 23
#define OBJECT_20_1 22
#define OBJECT_20_0 21
#define EXECUTE_CACHE_20_13 13
#define EXECUTE_CACHE_20_11 15
#define EXECUTE_CACHE_20_8 17
#define EXECUTE_CACHE_20_6 19
#define FREE_REFERENCES_LABEL_20_0 12
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
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
      goto set_generic_procedure_generatorB_5;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_20_9);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_20_12);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_generic_procedure_generatorB_9)
DEFLABEL (set_generic_procedure_generatorB_5)
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
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_7);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_9])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_20_9);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_12;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd22.Lng))))
    goto label_12;
  (Wrd14.Obj) = ((Wrd24.pObj) [2]);
  ((Wrd20.pObj) [5]) = (Wrd14.Obj);

DEFLABEL (label_11)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_13]));

DEFLABEL (label_12)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [3]);
  (Wrd30.Obj) = (current_block [OBJECT_20_1]);
  (Wrd31.Obj) = ((Wrd29.pObj) [2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_7)
  goto label_11;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_8 5
#define LABEL_21_6 7
#define TAG_21_7 2
#define LABEL_21_10 9
#define LABEL_21_5 11
#define ENVIRONMENT_LABEL_21_3 28
#define DEBUGGING_LABEL_21_2 27
#define OBJECT_21_3 26
#define OBJECT_21_2 25
#define OBJECT_21_1 24
#define OBJECT_21_0 23
#define EXECUTE_CACHE_21_13 13
#define EXECUTE_CACHE_21_12 15
#define EXECUTE_CACHE_21_11 17
#define EXECUTE_CACHE_21_9 19
#define FREE_REFERENCE_21_0 22
#define FREE_REFERENCES_LABEL_21_0 12
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd30;
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
      goto purge_generic_procedure_cache_8;

    case 1:
      current_block = (Rpc - LABEL_21_8);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto lambda_13;

    case 3:
      current_block = (Rpc - LABEL_21_10);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_21_5);
      goto lambda_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (purge_generic_procedure_cache_12)
DEFLABEL (purge_generic_procedure_cache_8)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_21_0]))
    goto label_16;
  if ((Wrd5.Obj) == (current_block [OBJECT_21_1]))
    goto label_16;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_6])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_15;

DEFLABEL (label_16)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_15)
DEFLABEL (label_20)
  (Wrd14.Obj) = (Rsp [1]);
  if ((Wrd14.Obj) == (current_block [OBJECT_21_2]))
    goto label_17;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_21_3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_21_10);
  (Rsp [2]) = Rvl;
  goto pop_return;

DEFLABEL (label_17)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_19;
  Wrd21 = Wrd25;

DEFLABEL (label_18)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd27.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd27.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_8])), (Wrd22.pObj));

DEFLABEL (label_10)
  (Wrd21.Obj) = Rvl;
  goto label_18;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_21_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [2]) = (Wrd7.Obj);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_12]));

DEFLABEL (lambda_14)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_21_5);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_13]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_6 5
#define LABEL_22_5 7
#define ENVIRONMENT_LABEL_22_3 17
#define DEBUGGING_LABEL_22_2 16
#define OBJECT_22_4 15
#define OBJECT_22_3 14
#define OBJECT_22_2 13
#define OBJECT_22_1 12
#define OBJECT_22_0 11
#define EXECUTE_CACHE_22_7 9
#define FREE_REFERENCES_LABEL_22_0 8
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_22_4);
      goto Z__reset_generic_procedure_cacheB_2;

    case 1:
      current_block = (Rpc - LABEL_22_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__reset_generic_procedure_cacheB_6)
DEFLABEL (Z__reset_generic_procedure_cacheB_2)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_10;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Rsp [2]) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 3);

DEFLABEL (label_8)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_7;
  ((Wrd14.pObj) [7]) = Rvl;
  Rvl = (current_block [OBJECT_22_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_22_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define TAG_23_6 1
#define LABEL_23_11 7
#define LABEL_23_8 9
#define LABEL_23_9 11
#define TAG_23_10 4
#define ENVIRONMENT_LABEL_23_3 22
#define DEBUGGING_LABEL_23_2 21
#define OBJECT_23_3 20
#define OBJECT_23_2 19
#define OBJECT_23_1 18
#define OBJECT_23_0 17
#define EXECUTE_CACHE_23_12 13
#define EXECUTE_CACHE_23_7 15
#define FREE_REFERENCES_LABEL_23_0 12
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_23_4);
      goto Z__purge_generic_procedure_cacheB_4;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_23_11);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_23_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_23_9);
      goto lambda_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__purge_generic_procedure_cacheB_8)
DEFLABEL (Z__purge_generic_procedure_cacheB_4)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_5])));
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
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_23_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_9])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd18 = Wrd13;
  (Wrd21.Obj) = ((Wrd7.pObj) [2]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd7.pObj) [4]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_14;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd34.Lng))))
    goto label_14;
  (Wrd26.Obj) = ((Wrd32.pObj) [7]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_8);
  (Rsp [2]) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 3);

DEFLABEL (label_12)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_11;
  ((Wrd14.pObj) [7]) = Rvl;
  Rvl = (current_block [OBJECT_23_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [3]);
  (Wrd42.Obj) = (current_block [OBJECT_23_0]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_23_9);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_6 5
#define LABEL_24_5 7
#define ENVIRONMENT_LABEL_24_3 17
#define DEBUGGING_LABEL_24_2 16
#define OBJECT_24_0 15
#define EXECUTE_CACHE_24_8 9
#define EXECUTE_CACHE_24_7 11
#define FREE_REFERENCE_24_0 14
#define FREE_REFERENCES_LABEL_24_0 8
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_24_4);
      goto guarantee_generic_procedure_2;

    case 1:
      current_block = (Rpc - LABEL_24_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_generic_procedure_6)
DEFLABEL (guarantee_generic_procedure_2)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;
  Wrd10 = Wrd14;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_24_0]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_6])), (Wrd11.pObj));

DEFLABEL (label_4)
  (Wrd10.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_5 3
#define LABEL_25_6 5
#define LABEL_25_4 7
#define ENVIRONMENT_LABEL_25_3 19
#define DEBUGGING_LABEL_25_2 18
#define OBJECT_25_2 17
#define OBJECT_25_1 16
#define OBJECT_25_0 15
#define EXECUTE_CACHE_25_9 9
#define EXECUTE_CACHE_25_8 11
#define EXECUTE_CACHE_25_7 13
#define FREE_REFERENCES_LABEL_25_0 8
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_25_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_4);
      goto guarantee_generator_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_generator_5)
DEFLABEL (guarantee_generator_2)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_7;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_25_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;

DEFLABEL (label_8)
  (Wrd20.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (label_9)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_25_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_7 7
#define LABEL_26_6 9
#define ENVIRONMENT_LABEL_26_3 28
#define DEBUGGING_LABEL_26_2 27
#define OBJECT_26_3 26
#define OBJECT_26_2 25
#define OBJECT_26_1 24
#define OBJECT_26_0 23
#define EXECUTE_CACHE_26_13 11
#define EXECUTE_CACHE_26_12 13
#define EXECUTE_CACHE_26_11 15
#define EXECUTE_CACHE_26_10 17
#define EXECUTE_CACHE_26_9 19
#define EXECUTE_CACHE_26_8 21
#define FREE_REFERENCES_LABEL_26_0 10
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_26_4);
      goto compute_apply_generic_9;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_26_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_apply_generic_14)
DEFLABEL (compute_apply_generic_9)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_23;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_22)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_21;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_21;
  (Wrd26.Obj) = ((Wrd30.pObj) [4]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_20)
  (Wrd40.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;

DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (label_16)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd8.Lng) > 4L)
    goto label_15;
  if (! ((Wrd7.Obj) == (current_block [OBJECT_26_3])))
    goto label_17;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (label_17)
  if (! ((Wrd7.Obj) == (current_block [OBJECT_26_0])))
    goto label_18;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_11]));

DEFLABEL (label_18)
  if ((Wrd7.Obj) == (current_block [OBJECT_26_2]))
    goto label_19;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_13]));

DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_12]));

DEFLABEL (label_21)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_26_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_26_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_6 7
#define LABEL_27_7 9
#define TAG_27_8 3
#define LABEL_27_9 11
#define TAG_27_10 4
#define LABEL_27_11 13
#define LABEL_27_14 15
#define LABEL_27_15 17
#define LABEL_27_16 19
#define LABEL_27_17 21
#define LABEL_27_18 23
#define LABEL_27_20 25
#define LABEL_27_23 27
#define LABEL_27_22 29
#define LABEL_27_25 31
#define LABEL_27_19 33
#define ENVIRONMENT_LABEL_27_3 55
#define DEBUGGING_LABEL_27_2 54
#define OBJECT_27_8 53
#define OBJECT_27_7 52
#define OBJECT_27_6 51
#define OBJECT_27_5 50
#define OBJECT_27_4 49
#define OBJECT_27_3 48
#define OBJECT_27_2 47
#define OBJECT_27_1 46
#define OBJECT_27_0 45
#define EXECUTE_CACHE_27_26 35
#define EXECUTE_CACHE_27_24 37
#define EXECUTE_CACHE_27_21 39
#define EXECUTE_CACHE_27_13 41
#define EXECUTE_CACHE_27_12 43
#define FREE_REFERENCES_LABEL_27_0 34
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd84;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd91;
  machine_word Wrd73;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd63;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
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
      current_block = (Rpc - LABEL_27_4);
      goto apply_generic_34;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_36;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto label_37;

    case 3:
      current_block = (Rpc - LABEL_27_7);
      goto lambda_44;

    case 4:
      current_block = (Rpc - LABEL_27_9);
      goto lambda_45;

    case 5:
      current_block = (Rpc - LABEL_27_11);
      goto continuation_27;

    case 6:
      current_block = (Rpc - LABEL_27_14);
      goto continuation_20;

    case 7:
      current_block = (Rpc - LABEL_27_15);
      goto loop_18;

    case 8:
      current_block = (Rpc - LABEL_27_16);
      goto label_41;

    case 9:
      current_block = (Rpc - LABEL_27_17);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_27_18);
      goto loop_24;

    case 11:
      current_block = (Rpc - LABEL_27_20);
      goto label_39;

    case 12:
      current_block = (Rpc - LABEL_27_23);
      goto label_38;

    case 13:
      current_block = (Rpc - LABEL_27_22);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_27_25);
      goto label_40;

    case 15:
      current_block = (Rpc - LABEL_27_19);
      goto continuation_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_generic_43)
DEFLABEL (apply_generic_34)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_54;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_54;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_53)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_52;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_52;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_51)
  (Wrd37.Obj) = (Rsp [1]);
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_49;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd43.Lng) = ((Wrd40.Lng) - (Wrd42.Lng));
  (Wrd44.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (* (--Rsp)) = (Wrd44.Obj);
  goto label_48;

DEFLABEL (label_49)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_48)
DEFLABEL (label_50)
  (Wrd50.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd46.pObj) = (& (Rhp [-1]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd52.pObj) = (& (Rhp [-1]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd52.pObj)));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd58.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_7])));
  Rhp += 2;
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd58.pObj)));
  Wrd61 = Wrd58;
  (Wrd62.Obj) = (Rsp [5]);
  ((Wrd61.pObj) [2]) = (Wrd62.Obj);
  ((Wrd61.pObj) [3]) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd64.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1fe, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_9])));
  Rhp += 4;
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd64.pObj)));
  Wrd71 = Wrd64;
  ((Wrd71.pObj) [2]) = (Wrd62.Obj);
  (Wrd70.Obj) = (Rsp [4]);
  ((Wrd71.pObj) [3]) = (Wrd70.Obj);
  (Wrd68.Obj) = (Rsp [3]);
  ((Wrd71.pObj) [4]) = (Wrd68.Obj);
  ((Wrd71.pObj) [5]) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  ((Wrd52.pObj) [0]) = (Wrd63.Obj);
  ((Wrd46.pObj) [0]) = (Wrd57.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd81.Obj) = (Rsp [0]);
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  Rvl = ((Wrd82.pObj) [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_27_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_27_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_27_7);

DEFLABEL (lambda_28)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_12]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_27_11);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_13]));

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_27_9);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_27_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto loop_24;

DEFLABEL (loop_47)
DEFLABEL (loop_24)
  INTERRUPT_CHECK (26, LABEL_27_18);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_27_4]))
    goto label_61;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_56;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_17]))));
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_55)
  (Wrd92.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd92.Obj);
  (Wrd93.Obj) = (Rsp [5]);
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [5]);
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd97.Obj) = ((Wrd96.pObj) [0]);
  (* (--Rsp)) = (Wrd97.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_56)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Lng) = ((Wrd20.Lng) - 1L);
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));
  (Rsp [1]) = (Wrd18.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_22]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_60;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_59)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_24]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_27_22);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_58;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_57)
  (Rsp [0]) = (Wrd10.Obj);
  goto loop_24;

DEFLABEL (label_58)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_25]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_5]), 1);

DEFLABEL (label_40)
  (Wrd10.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_23]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_7]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_61)
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [4]);
  if ((Wrd36.Obj) == ((SCHEME_OBJECT) 0))
    goto label_62;
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd41.Obj);
  goto loop_18;

DEFLABEL (label_62)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_19]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd59.Obj) = (Rsp [5]);
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [2]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 62))
    goto label_65;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd58.Lng))))
    goto label_65;
  (Wrd50.Obj) = ((Wrd56.pObj) [7]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_64)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_21]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_27_19);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_63;
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_8]), 2);

DEFLABEL (label_63)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_26]));

DEFLABEL (label_65)
  (Wrd64.Obj) = (Rsp [5]);
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd63.Obj) = ((Wrd65.pObj) [2]);
  (Wrd66.Obj) = (current_block [OBJECT_27_6]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_20]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_27_17);
  goto label_56;

DEFLABEL (loop_46)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_27_15);
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 1)
    goto label_66;
  Rsp = (& (Rsp [2]));
  goto label_62;

DEFLABEL (label_66)
  (Wrd73.Obj) = (Rsp [1]);
  if ((Wrd73.Obj) == (current_block [OBJECT_27_4]))
    goto label_69;
  if (! ((Wrd71.uLng) == 1))
    goto label_68;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [1]);

DEFLABEL (label_67)
  (Rsp [0]) = (Wrd75.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  (Wrd87.Lng) = ((Wrd86.Lng) - 1L);
  (Wrd84.Obj) = (LONG_TO_FIXNUM (Wrd87.Lng));
  (Rsp [1]) = (Wrd84.Obj);
  goto loop_18;

DEFLABEL (label_68)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_16]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_5]), 1);

DEFLABEL (label_41)
  (Wrd75.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_69)
  Rsp = (& (Rsp [2]));
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_14]))));
  (* (--Rsp)) = (Wrd91.Obj);
  goto label_55;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_27_14);
  goto label_62;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_6 5
#define LABEL_28_5 7
#define LABEL_28_8 9
#define LABEL_28_10 11
#define LABEL_28_12 13
#define LABEL_28_13 15
#define LABEL_28_14 17
#define LABEL_28_15 19
#define ENVIRONMENT_LABEL_28_3 37
#define DEBUGGING_LABEL_28_2 36
#define OBJECT_28_4 35
#define OBJECT_28_3 34
#define OBJECT_28_2 33
#define OBJECT_28_1 32
#define OBJECT_28_0 31
#define EXECUTE_CACHE_28_16 21
#define EXECUTE_CACHE_28_11 23
#define EXECUTE_CACHE_28_9 25
#define EXECUTE_CACHE_28_7 27
#define FREE_REFERENCE_28_0 30
#define FREE_REFERENCES_LABEL_28_0 20
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd58;
  machine_word Wrd74;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
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
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_28_4);
      goto generic_procedure_applicableP_12;

    case 1:
      current_block = (Rpc - LABEL_28_6);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_28_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_28_10);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_28_12);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_28_13);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_28_14);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_28_15);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_procedure_applicableP_19)
DEFLABEL (generic_procedure_applicableP_12)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_32;
  Wrd9 = Wrd13;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_28_10);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_30;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_30;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_29)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_28;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_28;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_27)
  (Wrd46.Obj) = (Rsp [3]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_26;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd45.Lng))))
    goto label_26;
  (Wrd39.Obj) = ((Wrd43.pObj) [5]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_25)
  (Wrd53.Obj) = (Rsp [0]);
  if (! ((Wrd53.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_21;

DEFLABEL (label_20)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd55.Obj) = (Rsp [3]);
  (Wrd56.Obj) = (Rsp [1]);
  if (! ((Wrd55.Obj) == (Wrd56.Obj)))
    goto label_22;
  (Wrd74.Obj) = (Rsp [5]);
  (Rsp [7]) = (Wrd74.Obj);
  (Rsp [5]) = (Wrd53.Obj);
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_22)
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! ((Wrd58.Lng) > (Wrd60.Lng)))
    goto label_20;
  (Wrd63.Obj) = (Rsp [2]);
  if (! ((Wrd63.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_24;

DEFLABEL (label_23)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_15]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd73.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_28_15);
  (Rsp [7]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_24)
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if ((Wrd58.Lng) > (Wrd68.Lng))
    goto label_20;
  goto label_23;

DEFLABEL (label_26)
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.Obj) = (current_block [OBJECT_28_4]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_14]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_28_3]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_13]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_28_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_6])), (Wrd10.pObj));

DEFLABEL (label_14)
  (Wrd9.Obj) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_7 5
#define LABEL_29_8 7
#define LABEL_29_9 9
#define LABEL_29_10 11
#define LABEL_29_11 13
#define LABEL_29_12 15
#define LABEL_29_13 17
#define LABEL_29_14 19
#define LABEL_29_15 21
#define LABEL_29_16 23
#define LABEL_29_17 25
#define LABEL_29_18 27
#define LABEL_29_19 29
#define LABEL_29_20 31
#define LABEL_29_21 33
#define LABEL_29_22 35
#define LABEL_29_5 37
#define TAG_29_6 17
#define LABEL_29_23 39
#define LABEL_29_24 41
#define LABEL_29_25 43
#define LABEL_29_26 45
#define LABEL_29_27 47
#define LABEL_29_28 49
#define LABEL_29_29 51
#define LABEL_29_30 53
#define LABEL_29_31 55
#define LABEL_29_32 57
#define LABEL_29_33 59
#define LABEL_29_34 61
#define LABEL_29_35 63
#define LABEL_29_36 65
#define LABEL_29_37 67
#define LABEL_29_39 69
#define LABEL_29_40 71
#define LABEL_29_41 73
#define LABEL_29_42 75
#define LABEL_29_43 77
#define LABEL_29_44 79
#define LABEL_29_45 81
#define LABEL_29_46 83
#define LABEL_29_47 85
#define ENVIRONMENT_LABEL_29_3 107
#define DEBUGGING_LABEL_29_2 106
#define OBJECT_29_13 105
#define OBJECT_29_12 104
#define OBJECT_29_11 103
#define OBJECT_29_10 102
#define OBJECT_29_9 101
#define OBJECT_29_8 100
#define OBJECT_29_7 99
#define OBJECT_29_6 98
#define OBJECT_29_5 97
#define OBJECT_29_4 96
#define OBJECT_29_3 95
#define OBJECT_29_2 94
#define OBJECT_29_1 93
#define OBJECT_29_0 92
#define EXECUTE_CACHE_29_38 87
#define FREE_REFERENCE_29_1 90
#define FREE_REFERENCE_29_0 91
#define FREE_REFERENCES_LABEL_29_0 86
#define NUMBER_OF_LINKER_SECTIONS_29_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd344;
  machine_word Wrd343;
  machine_word Wrd342;
  machine_word Wrd340;
  machine_word Wrd339;
  machine_word Wrd337;
  machine_word Wrd336;
  machine_word Wrd332;
  machine_word Wrd319;
  machine_word Wrd323;
  machine_word Wrd320;
  machine_word Wrd329;
  machine_word Wrd328;
  machine_word Wrd327;
  machine_word Wrd325;
  machine_word Wrd324;
  machine_word Wrd331;
  machine_word Wrd330;
  machine_word Wrd318;
  machine_word Wrd315;
  machine_word Wrd314;
  machine_word Wrd303;
  machine_word Wrd311;
  machine_word Wrd310;
  machine_word Wrd309;
  machine_word Wrd313;
  machine_word Wrd312;
  machine_word Wrd302;
  machine_word Wrd299;
  machine_word Wrd298;
  machine_word Wrd289;
  machine_word Wrd295;
  machine_word Wrd294;
  machine_word Wrd293;
  machine_word Wrd297;
  machine_word Wrd296;
  machine_word Wrd345;
  machine_word Wrd286;
  machine_word Wrd283;
  machine_word Wrd285;
  machine_word Wrd284;
  machine_word Wrd281;
  machine_word Wrd280;
  machine_word Wrd278;
  machine_word Wrd277;
  machine_word Wrd273;
  machine_word Wrd260;
  machine_word Wrd264;
  machine_word Wrd261;
  machine_word Wrd270;
  machine_word Wrd269;
  machine_word Wrd268;
  machine_word Wrd266;
  machine_word Wrd265;
  machine_word Wrd272;
  machine_word Wrd271;
  machine_word Wrd259;
  machine_word Wrd256;
  machine_word Wrd255;
  machine_word Wrd244;
  machine_word Wrd252;
  machine_word Wrd251;
  machine_word Wrd250;
  machine_word Wrd254;
  machine_word Wrd253;
  machine_word Wrd243;
  machine_word Wrd240;
  machine_word Wrd239;
  machine_word Wrd230;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd234;
  machine_word Wrd238;
  machine_word Wrd237;
  machine_word Wrd227;
  machine_word Wrd222;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd223;
  machine_word Wrd218;
  machine_word Wrd215;
  machine_word Wrd214;
  machine_word Wrd203;
  machine_word Wrd211;
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd213;
  machine_word Wrd212;
  machine_word Wrd202;
  machine_word Wrd201;
  machine_word Wrd198;
  machine_word Wrd197;
  machine_word Wrd188;
  machine_word Wrd194;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd196;
  machine_word Wrd195;
  machine_word Wrd441;
  machine_word Wrd443;
  machine_word Wrd445;
  machine_word Wrd444;
  machine_word Wrd438;
  machine_word Wrd440;
  machine_word Wrd439;
  machine_word Wrd434;
  machine_word Wrd418;
  machine_word Wrd423;
  machine_word Wrd420;
  machine_word Wrd431;
  machine_word Wrd430;
  machine_word Wrd429;
  machine_word Wrd427;
  machine_word Wrd425;
  machine_word Wrd424;
  machine_word Wrd433;
  machine_word Wrd416;
  machine_word Wrd413;
  machine_word Wrd412;
  machine_word Wrd401;
  machine_word Wrd409;
  machine_word Wrd408;
  machine_word Wrd407;
  machine_word Wrd411;
  machine_word Wrd410;
  machine_word Wrd397;
  machine_word Wrd400;
  machine_word Wrd399;
  machine_word Wrd398;
  machine_word Wrd396;
  machine_word Wrd395;
  machine_word Wrd391;
  machine_word Wrd378;
  machine_word Wrd382;
  machine_word Wrd379;
  machine_word Wrd388;
  machine_word Wrd387;
  machine_word Wrd386;
  machine_word Wrd384;
  machine_word Wrd383;
  machine_word Wrd390;
  machine_word Wrd389;
  machine_word Wrd377;
  machine_word Wrd374;
  machine_word Wrd373;
  machine_word Wrd362;
  machine_word Wrd370;
  machine_word Wrd369;
  machine_word Wrd368;
  machine_word Wrd372;
  machine_word Wrd371;
  machine_word Wrd361;
  machine_word Wrd358;
  machine_word Wrd357;
  machine_word Wrd348;
  machine_word Wrd354;
  machine_word Wrd353;
  machine_word Wrd352;
  machine_word Wrd356;
  machine_word Wrd355;
  machine_word Wrd185;
  machine_word Wrd183;
  machine_word Wrd184;
  machine_word Wrd182;
  machine_word Wrd168;
  machine_word Wrd171;
  machine_word Wrd169;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd177;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd151;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd141;
  machine_word Wrd128;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd127;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd112;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd98;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd76;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd56;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd71;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd457;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd451;
  machine_word Wrd450;
  machine_word Wrd449;
  machine_word Wrd448;
  machine_word Wrd452;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd509;
  machine_word Wrd517;
  machine_word Wrd516;
  machine_word Wrd515;
  machine_word Wrd519;
  machine_word Wrd507;
  machine_word Wrd506;
  machine_word Wrd504;
  machine_word Wrd501;
  machine_word Wrd492;
  machine_word Wrd498;
  machine_word Wrd497;
  machine_word Wrd496;
  machine_word Wrd499;
  machine_word Wrd491;
  machine_word Wrd488;
  machine_word Wrd487;
  machine_word Wrd476;
  machine_word Wrd484;
  machine_word Wrd483;
  machine_word Wrd482;
  machine_word Wrd486;
  machine_word Wrd485;
  machine_word Wrd475;
  machine_word Wrd474;
  machine_word Wrd471;
  machine_word Wrd470;
  machine_word Wrd459;
  machine_word Wrd467;
  machine_word Wrd466;
  machine_word Wrd465;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd577;
  machine_word Wrd580;
  machine_word Wrd579;
  machine_word Wrd578;
  machine_word Wrd573;
  machine_word Wrd569;
  machine_word Wrd572;
  machine_word Wrd571;
  machine_word Wrd570;
  machine_word Wrd568;
  machine_word Wrd560;
  machine_word Wrd563;
  machine_word Wrd562;
  machine_word Wrd564;
  machine_word Wrd559;
  machine_word Wrd556;
  machine_word Wrd555;
  machine_word Wrd544;
  machine_word Wrd552;
  machine_word Wrd551;
  machine_word Wrd550;
  machine_word Wrd554;
  machine_word Wrd553;
  machine_word Wrd636;
  machine_word Wrd641;
  machine_word Wrd638;
  machine_word Wrd649;
  machine_word Wrd648;
  machine_word Wrd647;
  machine_word Wrd645;
  machine_word Wrd643;
  machine_word Wrd642;
  machine_word Wrd651;
  machine_word Wrd650;
  machine_word Wrd634;
  machine_word Wrd633;
  machine_word Wrd630;
  machine_word Wrd629;
  machine_word Wrd618;
  machine_word Wrd626;
  machine_word Wrd625;
  machine_word Wrd624;
  machine_word Wrd628;
  machine_word Wrd627;
  machine_word Wrd617;
  machine_word Wrd615;
  machine_word Wrd616;
  machine_word Wrd614;
  machine_word Wrd611;
  machine_word Wrd597;
  machine_word Wrd601;
  machine_word Wrd599;
  machine_word Wrd608;
  machine_word Wrd607;
  machine_word Wrd606;
  machine_word Wrd605;
  machine_word Wrd603;
  machine_word Wrd602;
  machine_word Wrd609;
  machine_word Wrd596;
  machine_word Wrd593;
  machine_word Wrd592;
  machine_word Wrd581;
  machine_word Wrd589;
  machine_word Wrd588;
  machine_word Wrd587;
  machine_word Wrd591;
  machine_word Wrd590;
  machine_word Wrd665;
  machine_word Wrd662;
  machine_word Wrd542;
  machine_word Wrd541;
  machine_word Wrd539;
  machine_word Wrd659;
  machine_word Wrd658;
  machine_word Wrd657;
  machine_word Wrd656;
  machine_word Wrd654;
  machine_word Wrd653;
  machine_word Wrd660;
  machine_word Wrd537;
  machine_word Wrd534;
  machine_word Wrd533;
  machine_word Wrd522;
  machine_word Wrd530;
  machine_word Wrd529;
  machine_word Wrd528;
  machine_word Wrd532;
  machine_word Wrd531;
  machine_word Wrd682;
  machine_word Wrd679;
  machine_word Wrd678;
  machine_word Wrd667;
  machine_word Wrd675;
  machine_word Wrd674;
  machine_word Wrd673;
  machine_word Wrd677;
  machine_word Wrd676;
  machine_word Wrd521;
  machine_word Wrd520;
  machine_word Wrd713;
  machine_word Wrd705;
  machine_word Wrd707;
  machine_word Wrd709;
  machine_word Wrd708;
  machine_word Wrd724;
  machine_word Wrd726;
  machine_word Wrd728;
  machine_word Wrd727;
  machine_word Wrd722;
  machine_word Wrd714;
  machine_word Wrd716;
  machine_word Wrd718;
  machine_word Wrd717;
  machine_word Wrd704;
  machine_word Wrd702;
  machine_word Wrd703;
  machine_word Wrd701;
  machine_word Wrd695;
  machine_word Wrd696;
  machine_word Wrd697;
  machine_word Wrd694;
  machine_word Wrd686;
  machine_word Wrd688;
  machine_word Wrd690;
  machine_word Wrd684;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_29_4);
      goto apply_generic_1_75;

    case 1:
      current_block = (Rpc - LABEL_29_7);
      goto search_overflow_61;

    case 2:
      current_block = (Rpc - LABEL_29_8);
      goto label_109;

    case 3:
      current_block = (Rpc - LABEL_29_9);
      goto label_110;

    case 4:
      current_block = (Rpc - LABEL_29_10);
      goto label_112;

    case 5:
      current_block = (Rpc - LABEL_29_11);
      goto label_111;

    case 6:
      current_block = (Rpc - LABEL_29_12);
      goto search_lines_63;

    case 7:
      current_block = (Rpc - LABEL_29_13);
      goto label_108;

    case 8:
      current_block = (Rpc - LABEL_29_14);
      goto label_101;

    case 9:
      current_block = (Rpc - LABEL_29_15);
      goto label_107;

    case 10:
      current_block = (Rpc - LABEL_29_16);
      goto label_104;

    case 11:
      current_block = (Rpc - LABEL_29_17);
      goto label_105;

    case 12:
      current_block = (Rpc - LABEL_29_18);
      goto label_106;

    case 13:
      current_block = (Rpc - LABEL_29_19);
      goto label_102;

    case 14:
      current_block = (Rpc - LABEL_29_20);
      goto label_103;

    case 15:
      current_block = (Rpc - LABEL_29_21);
      goto continuation_1;

    case 16:
      current_block = (Rpc - LABEL_29_22);
      goto continuation_14;

    case 17:
      current_block = (Rpc - LABEL_29_5);
      goto lambda_115;

    case 18:
      current_block = (Rpc - LABEL_29_23);
      goto label_98;

    case 19:
      current_block = (Rpc - LABEL_29_24);
      goto label_99;

    case 20:
      current_block = (Rpc - LABEL_29_25);
      goto label_100;

    case 21:
      current_block = (Rpc - LABEL_29_26);
      goto label_97;

    case 22:
      current_block = (Rpc - LABEL_29_27);
      goto label_77;

    case 23:
      current_block = (Rpc - LABEL_29_28);
      goto label_78;

    case 24:
      current_block = (Rpc - LABEL_29_29);
      goto label_79;

    case 25:
      current_block = (Rpc - LABEL_29_30);
      goto label_80;

    case 26:
      current_block = (Rpc - LABEL_29_31);
      goto label_81;

    case 27:
      current_block = (Rpc - LABEL_29_32);
      goto label_82;

    case 28:
      current_block = (Rpc - LABEL_29_33);
      goto label_83;

    case 29:
      current_block = (Rpc - LABEL_29_34);
      goto label_93;

    case 30:
      current_block = (Rpc - LABEL_29_35);
      goto label_94;

    case 31:
      current_block = (Rpc - LABEL_29_36);
      goto label_95;

    case 32:
      current_block = (Rpc - LABEL_29_37);
      goto label_96;

    case 33:
      current_block = (Rpc - LABEL_29_39);
      goto label_84;

    case 34:
      current_block = (Rpc - LABEL_29_40);
      goto label_85;

    case 35:
      current_block = (Rpc - LABEL_29_41);
      goto label_86;

    case 36:
      current_block = (Rpc - LABEL_29_42);
      goto label_87;

    case 37:
      current_block = (Rpc - LABEL_29_43);
      goto label_88;

    case 38:
      current_block = (Rpc - LABEL_29_44);
      goto label_89;

    case 39:
      current_block = (Rpc - LABEL_29_45);
      goto label_90;

    case 40:
      current_block = (Rpc - LABEL_29_46);
      goto label_91;

    case 41:
      current_block = (Rpc - LABEL_29_47);
      goto label_92;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_generic_1_114)
DEFLABEL (apply_generic_1_75)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_115)
  CLOSURE_HEADER (LABEL_29_5);

DEFLABEL (lambda_74)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 62)
    goto label_170;

DEFLABEL (label_169)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd13.Obj) = ((Wrd14.pObj) [0]);
  (Wrd17.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  (Wrd16.Obj) = (MAKE_OBJECT (26, (Wrd19.uLng)));
  (Wrd452.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd452.uLng) == 10))
    goto label_168;
  if (! ((Wrd17.uLng) == 26))
    goto label_168;
  (Wrd448.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd449.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd450.Obj) = ((Wrd449.pObj) [0]);
  (Wrd451.Lng) = (FIXNUM_TO_LONG (Wrd450.Obj));
  if (! (((unsigned long) (Wrd448.Lng)) < ((unsigned long) (Wrd451.Lng))))
    goto label_168;
  (Wrd22.pObj) = (& ((Wrd449.pObj) [(Wrd19.Lng)]));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_166;

DEFLABEL (label_165)
  (Wrd48.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  (Wrd51.Obj) = (MAKE_OBJECT (26, (Wrd50.uLng)));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd54.Obj) = ((Wrd52.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd71.uLng) == 10)
    goto label_119;

DEFLABEL (label_118)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_6]), 2);

DEFLABEL (label_119)
  if (! ((Wrd48.uLng) == 26))
    goto label_118;
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) (Wrd65.Lng)) < ((unsigned long) (Wrd69.Lng))))
    goto label_118;
  (Wrd61.pObj) = (& ((Wrd67.pObj) [(Wrd50.Lng)]));
  (Wrd56.Obj) = ((Wrd61.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_164)
  (Wrd85.Obj) = (Rsp [2]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [2]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd88.uLng) == 62))
    goto label_163;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd84.Lng))))
    goto label_163;
  (Wrd76.Obj) = ((Wrd82.pObj) [7]);
  (* (--Rsp)) = (Wrd76.Obj);

DEFLABEL (label_162)
  (Wrd105.Obj) = (Rsp [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd106.uLng) == 62))
    goto label_161;
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd103.Obj) = ((Wrd102.pObj) [0]);
  (Wrd104.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd104.Lng))))
    goto label_161;
  (Wrd98.Obj) = ((Wrd102.pObj) [3]);
  (* (--Rsp)) = (Wrd98.Obj);

DEFLABEL (label_160)
  (Wrd121.Obj) = (Rsp [1]);
  (Wrd122.uLng) = (OBJECT_TYPE (Wrd121.Obj));
  if (! ((Wrd122.uLng) == 62))
    goto label_159;
  (Wrd118.pObj) = (OBJECT_ADDRESS (Wrd121.Obj));
  (Wrd119.Obj) = ((Wrd118.pObj) [0]);
  (Wrd120.Lng) = (FIXNUM_TO_LONG (Wrd119.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd120.Lng))))
    goto label_159;
  (Wrd112.Obj) = ((Wrd118.pObj) [2]);

DEFLABEL (label_158)
  (Wrd139.Obj) = (Rsp [2]);
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd139.Obj));
  if (! ((Wrd140.uLng) == 62))
    goto label_157;
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if (! ((Wrd133.uLng) == 26))
    goto label_157;
  (Wrd134.Lng) = (FIXNUM_TO_LONG (Wrd112.Obj));
  (Wrd136.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd137.Obj) = ((Wrd136.pObj) [0]);
  (Wrd138.Lng) = (FIXNUM_TO_LONG (Wrd137.Obj));
  if (! (((unsigned long) (Wrd134.Lng)) < ((unsigned long) (Wrd138.Lng))))
    goto label_157;
  (Wrd129.uLng) = (OBJECT_DATUM (Wrd112.Obj));
  (Wrd132.pObj) = (& ((Wrd136.pObj) [(Wrd129.Lng)]));
  (Wrd128.Obj) = ((Wrd132.pObj) [1]);

DEFLABEL (label_156)
  (Wrd146.Obj) = (* (Rsp++));
  (Wrd147.Lng) = (FIXNUM_TO_LONG (Wrd128.Obj));
  (Wrd148.Lng) = (FIXNUM_TO_LONG (Wrd146.Obj));
  (Wrd149.Lng) = ((Wrd147.Lng) & (Wrd148.Lng));
  (Wrd150.Obj) = (LONG_TO_FIXNUM (Wrd149.Lng));
  (* (--Rsp)) = (Wrd150.Obj);
  (Wrd160.Obj) = (Rsp [1]);
  (Wrd161.uLng) = (OBJECT_TYPE (Wrd160.Obj));
  if (! ((Wrd161.uLng) == 62))
    goto label_155;
  (Wrd157.pObj) = (OBJECT_ADDRESS (Wrd160.Obj));
  (Wrd158.Obj) = ((Wrd157.pObj) [0]);
  (Wrd159.Lng) = (FIXNUM_TO_LONG (Wrd158.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd159.Lng))))
    goto label_155;
  (Wrd151.Obj) = ((Wrd157.pObj) [6]);

DEFLABEL (label_154)
  (Wrd167.Obj) = (* (Rsp++));
  (Wrd177.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if (! ((Wrd177.uLng) == 10))
    goto label_153;
  (Wrd172.uLng) = (OBJECT_TYPE (Wrd167.Obj));
  if (! ((Wrd172.uLng) == 26))
    goto label_153;
  (Wrd173.Lng) = (FIXNUM_TO_LONG (Wrd167.Obj));
  (Wrd174.pObj) = (OBJECT_ADDRESS (Wrd151.Obj));
  (Wrd175.Obj) = ((Wrd174.pObj) [0]);
  (Wrd176.Lng) = (FIXNUM_TO_LONG (Wrd175.Obj));
  if (! (((unsigned long) (Wrd173.Lng)) < ((unsigned long) (Wrd176.Lng))))
    goto label_153;
  (Wrd169.uLng) = (OBJECT_DATUM (Wrd167.Obj));
  (Wrd171.pObj) = (& ((Wrd174.pObj) [(Wrd169.Lng)]));
  (Wrd168.Obj) = ((Wrd171.pObj) [1]);

DEFLABEL (label_152)
  (Wrd184.pObj) = (OBJECT_ADDRESS (Wrd168.Obj));
  (Wrd183.Obj) = ((Wrd184.pObj) [0]);
  (Wrd185.Obj) = (Rsp [1]);
  if ((Wrd185.Obj) == (Wrd183.Obj))
    goto label_140;
  (Wrd195.Obj) = (Rsp [0]);
  (Wrd196.uLng) = (OBJECT_TYPE (Wrd195.Obj));
  if (! ((Wrd196.uLng) == 62))
    goto label_139;
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd195.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (Wrd194.Lng) = (FIXNUM_TO_LONG (Wrd193.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd194.Lng))))
    goto label_139;
  (Wrd188.Obj) = ((Wrd192.pObj) [4]);
  (* (--Rsp)) = (Wrd188.Obj);

DEFLABEL (label_138)
  (Wrd202.Obj) = (current_block [OBJECT_29_9]);
  (* (--Rsp)) = (Wrd202.Obj);
  (Wrd212.Obj) = (Rsp [2]);
  (Wrd213.uLng) = (OBJECT_TYPE (Wrd212.Obj));
  if (! ((Wrd213.uLng) == 62))
    goto label_137;
  (Wrd209.pObj) = (OBJECT_ADDRESS (Wrd212.Obj));
  (Wrd210.Obj) = ((Wrd209.pObj) [0]);
  (Wrd211.Lng) = (FIXNUM_TO_LONG (Wrd210.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd211.Lng))))
    goto label_137;
  (Wrd203.Obj) = ((Wrd209.pObj) [6]);

DEFLABEL (label_136)
  (Wrd223.uLng) = (OBJECT_TYPE (Wrd203.Obj));
  if (! ((Wrd223.uLng) == 10))
    goto label_135;
  (Wrd220.pObj) = (OBJECT_ADDRESS (Wrd203.Obj));
  (Wrd221.Obj) = ((Wrd220.pObj) [0]);
  (Wrd222.Obj) = (MAKE_OBJECT (26, (Wrd221.uLng)));
  (* (--Rsp)) = (Wrd222.Obj);

DEFLABEL (label_134)
  (Wrd237.Obj) = (Rsp [3]);
  (Wrd238.uLng) = (OBJECT_TYPE (Wrd237.Obj));
  if (! ((Wrd238.uLng) == 62))
    goto label_133;
  (Wrd234.pObj) = (OBJECT_ADDRESS (Wrd237.Obj));
  (Wrd235.Obj) = ((Wrd234.pObj) [0]);
  (Wrd236.Lng) = (FIXNUM_TO_LONG (Wrd235.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd236.Lng))))
    goto label_133;
  (Wrd230.Obj) = ((Wrd234.pObj) [3]);
  (* (--Rsp)) = (Wrd230.Obj);

DEFLABEL (label_132)
  (Wrd253.Obj) = (Rsp [4]);
  (Wrd254.uLng) = (OBJECT_TYPE (Wrd253.Obj));
  if (! ((Wrd254.uLng) == 62))
    goto label_131;
  (Wrd250.pObj) = (OBJECT_ADDRESS (Wrd253.Obj));
  (Wrd251.Obj) = ((Wrd250.pObj) [0]);
  (Wrd252.Lng) = (FIXNUM_TO_LONG (Wrd251.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd252.Lng))))
    goto label_131;
  (Wrd244.Obj) = ((Wrd250.pObj) [2]);

DEFLABEL (label_130)
  (Wrd271.Obj) = (Rsp [5]);
  (Wrd272.uLng) = (OBJECT_TYPE (Wrd271.Obj));
  if (! ((Wrd272.uLng) == 62))
    goto label_129;
  (Wrd265.uLng) = (OBJECT_TYPE (Wrd244.Obj));
  if (! ((Wrd265.uLng) == 26))
    goto label_129;
  (Wrd266.Lng) = (FIXNUM_TO_LONG (Wrd244.Obj));
  (Wrd268.pObj) = (OBJECT_ADDRESS (Wrd271.Obj));
  (Wrd269.Obj) = ((Wrd268.pObj) [0]);
  (Wrd270.Lng) = (FIXNUM_TO_LONG (Wrd269.Obj));
  if (! (((unsigned long) (Wrd266.Lng)) < ((unsigned long) (Wrd270.Lng))))
    goto label_129;
  (Wrd261.uLng) = (OBJECT_DATUM (Wrd244.Obj));
  (Wrd264.pObj) = (& ((Wrd268.pObj) [(Wrd261.Lng)]));
  (Wrd260.Obj) = ((Wrd264.pObj) [1]);

DEFLABEL (label_128)
  (Wrd278.Obj) = (* (Rsp++));
  (Wrd280.Lng) = (FIXNUM_TO_LONG (Wrd260.Obj));
  (Wrd281.Lng) = (FIXNUM_TO_LONG (Wrd278.Obj));
  (Wrd284.Lng) = ((Wrd280.Lng) & (Wrd281.Lng));
  (Wrd285.Lng) = ((Wrd284.Lng) + 1L);
  (Wrd283.Obj) = (LONG_TO_FIXNUM (Wrd285.Lng));
  (Wrd286.Obj) = (* (Rsp++));
  if ((Wrd283.Obj) == (Wrd286.Obj))
    goto label_127;
  (Wrd296.Obj) = (Rsp [2]);
  (Wrd297.uLng) = (OBJECT_TYPE (Wrd296.Obj));
  if (! ((Wrd297.uLng) == 62))
    goto label_126;
  (Wrd293.pObj) = (OBJECT_ADDRESS (Wrd296.Obj));
  (Wrd294.Obj) = ((Wrd293.pObj) [0]);
  (Wrd295.Lng) = (FIXNUM_TO_LONG (Wrd294.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd295.Lng))))
    goto label_126;
  (Wrd289.Obj) = ((Wrd293.pObj) [3]);
  (* (--Rsp)) = (Wrd289.Obj);

DEFLABEL (label_125)
  (Wrd312.Obj) = (Rsp [3]);
  (Wrd313.uLng) = (OBJECT_TYPE (Wrd312.Obj));
  if (! ((Wrd313.uLng) == 62))
    goto label_124;
  (Wrd309.pObj) = (OBJECT_ADDRESS (Wrd312.Obj));
  (Wrd310.Obj) = ((Wrd309.pObj) [0]);
  (Wrd311.Lng) = (FIXNUM_TO_LONG (Wrd310.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd311.Lng))))
    goto label_124;
  (Wrd303.Obj) = ((Wrd309.pObj) [2]);

DEFLABEL (label_123)
  (Wrd330.Obj) = (Rsp [4]);
  (Wrd331.uLng) = (OBJECT_TYPE (Wrd330.Obj));
  if (! ((Wrd331.uLng) == 62))
    goto label_122;
  (Wrd324.uLng) = (OBJECT_TYPE (Wrd303.Obj));
  if (! ((Wrd324.uLng) == 26))
    goto label_122;
  (Wrd325.Lng) = (FIXNUM_TO_LONG (Wrd303.Obj));
  (Wrd327.pObj) = (OBJECT_ADDRESS (Wrd330.Obj));
  (Wrd328.Obj) = ((Wrd327.pObj) [0]);
  (Wrd329.Lng) = (FIXNUM_TO_LONG (Wrd328.Obj));
  if (! (((unsigned long) (Wrd325.Lng)) < ((unsigned long) (Wrd329.Lng))))
    goto label_122;
  (Wrd320.uLng) = (OBJECT_DATUM (Wrd303.Obj));
  (Wrd323.pObj) = (& ((Wrd327.pObj) [(Wrd320.Lng)]));
  (Wrd319.Obj) = ((Wrd323.pObj) [1]);

DEFLABEL (label_121)
  (Wrd337.Obj) = (* (Rsp++));
  (Wrd339.Lng) = (FIXNUM_TO_LONG (Wrd319.Obj));
  (Wrd340.Lng) = (FIXNUM_TO_LONG (Wrd337.Obj));
  (Wrd342.Lng) = ((Wrd339.Lng) & (Wrd340.Lng));
  (Wrd343.Lng) = ((Wrd342.Lng) + 1L);
  (Wrd344.Obj) = (LONG_TO_FIXNUM (Wrd343.Lng));
  (* (--Rsp)) = (Wrd344.Obj);

DEFLABEL (label_120)
  goto search_lines_63;

DEFLABEL (label_122)
  (Wrd332.Obj) = (Rsp [4]);
  (Wrd336.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_47]))));
  (* (--Rsp)) = (Wrd336.Obj);
  (* (--Rsp)) = (Wrd303.Obj);
  (* (--Rsp)) = (Wrd332.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_92)
  (Wrd319.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd314.Obj) = (Rsp [3]);
  (Wrd315.Obj) = (current_block [OBJECT_29_12]);
  (Wrd318.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_46]))));
  (* (--Rsp)) = (Wrd318.Obj);
  (* (--Rsp)) = (Wrd315.Obj);
  (* (--Rsp)) = (Wrd314.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_91)
  (Wrd303.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd298.Obj) = (Rsp [2]);
  (Wrd299.Obj) = (current_block [OBJECT_29_11]);
  (Wrd302.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_45]))));
  (* (--Rsp)) = (Wrd302.Obj);
  (* (--Rsp)) = (Wrd299.Obj);
  (* (--Rsp)) = (Wrd298.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_90)
  (* (--Rsp)) = Rvl;
  goto label_125;

DEFLABEL (label_127)
  (Wrd345.Obj) = (current_block [OBJECT_29_9]);
  (* (--Rsp)) = (Wrd345.Obj);
  goto label_120;

DEFLABEL (label_129)
  (Wrd273.Obj) = (Rsp [5]);
  (Wrd277.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_44]))));
  (* (--Rsp)) = (Wrd277.Obj);
  (* (--Rsp)) = (Wrd244.Obj);
  (* (--Rsp)) = (Wrd273.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_89)
  (Wrd260.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  (Wrd255.Obj) = (Rsp [4]);
  (Wrd256.Obj) = (current_block [OBJECT_29_12]);
  (Wrd259.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_43]))));
  (* (--Rsp)) = (Wrd259.Obj);
  (* (--Rsp)) = (Wrd256.Obj);
  (* (--Rsp)) = (Wrd255.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_88)
  (Wrd244.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  (Wrd239.Obj) = (Rsp [3]);
  (Wrd240.Obj) = (current_block [OBJECT_29_11]);
  (Wrd243.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_42]))));
  (* (--Rsp)) = (Wrd243.Obj);
  (* (--Rsp)) = (Wrd240.Obj);
  (* (--Rsp)) = (Wrd239.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_87)
  (* (--Rsp)) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  (Wrd227.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_41]))));
  (* (--Rsp)) = (Wrd227.Obj);
  (* (--Rsp)) = (Wrd203.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_8]), 1);

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd214.Obj) = (Rsp [2]);
  (Wrd215.Obj) = (current_block [OBJECT_29_5]);
  (Wrd218.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_40]))));
  (* (--Rsp)) = (Wrd218.Obj);
  (* (--Rsp)) = (Wrd215.Obj);
  (* (--Rsp)) = (Wrd214.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_85)
  (Wrd203.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  (Wrd197.Obj) = (Rsp [0]);
  (Wrd198.Obj) = (current_block [OBJECT_29_13]);
  (Wrd201.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_39]))));
  (* (--Rsp)) = (Wrd201.Obj);
  (* (--Rsp)) = (Wrd198.Obj);
  (* (--Rsp)) = (Wrd197.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_84)
  (* (--Rsp)) = Rvl;
  goto label_138;

DEFLABEL (label_140)
  (Wrd355.Obj) = (Rsp [0]);
  (Wrd356.uLng) = (OBJECT_TYPE (Wrd355.Obj));
  if (! ((Wrd356.uLng) == 62))
    goto label_151;
  (Wrd352.pObj) = (OBJECT_ADDRESS (Wrd355.Obj));
  (Wrd353.Obj) = ((Wrd352.pObj) [0]);
  (Wrd354.Lng) = (FIXNUM_TO_LONG (Wrd353.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd354.Lng))))
    goto label_151;
  (Wrd348.Obj) = ((Wrd352.pObj) [3]);
  (* (--Rsp)) = (Wrd348.Obj);

DEFLABEL (label_150)
  (Wrd371.Obj) = (Rsp [1]);
  (Wrd372.uLng) = (OBJECT_TYPE (Wrd371.Obj));
  if (! ((Wrd372.uLng) == 62))
    goto label_149;
  (Wrd368.pObj) = (OBJECT_ADDRESS (Wrd371.Obj));
  (Wrd369.Obj) = ((Wrd368.pObj) [0]);
  (Wrd370.Lng) = (FIXNUM_TO_LONG (Wrd369.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd370.Lng))))
    goto label_149;
  (Wrd362.Obj) = ((Wrd368.pObj) [2]);

DEFLABEL (label_148)
  (Wrd389.Obj) = (Rsp [2]);
  (Wrd390.uLng) = (OBJECT_TYPE (Wrd389.Obj));
  if (! ((Wrd390.uLng) == 62))
    goto label_147;
  (Wrd383.uLng) = (OBJECT_TYPE (Wrd362.Obj));
  if (! ((Wrd383.uLng) == 26))
    goto label_147;
  (Wrd384.Lng) = (FIXNUM_TO_LONG (Wrd362.Obj));
  (Wrd386.pObj) = (OBJECT_ADDRESS (Wrd389.Obj));
  (Wrd387.Obj) = ((Wrd386.pObj) [0]);
  (Wrd388.Lng) = (FIXNUM_TO_LONG (Wrd387.Obj));
  if (! (((unsigned long) (Wrd384.Lng)) < ((unsigned long) (Wrd388.Lng))))
    goto label_147;
  (Wrd379.uLng) = (OBJECT_DATUM (Wrd362.Obj));
  (Wrd382.pObj) = (& ((Wrd386.pObj) [(Wrd379.Lng)]));
  (Wrd378.Obj) = ((Wrd382.pObj) [1]);

DEFLABEL (label_146)
  (Wrd396.Obj) = (* (Rsp++));
  (Wrd398.Lng) = (FIXNUM_TO_LONG (Wrd378.Obj));
  (Wrd399.Lng) = (FIXNUM_TO_LONG (Wrd396.Obj));
  (Wrd400.Lng) = ((Wrd398.Lng) & (Wrd399.Lng));
  (Wrd397.Obj) = (LONG_TO_FIXNUM (Wrd400.Lng));
  (Rsp [1]) = (Wrd397.Obj);
  (Wrd410.Obj) = (Rsp [0]);
  (Wrd411.uLng) = (OBJECT_TYPE (Wrd410.Obj));
  if (! ((Wrd411.uLng) == 62))
    goto label_145;
  (Wrd407.pObj) = (OBJECT_ADDRESS (Wrd410.Obj));
  (Wrd408.Obj) = ((Wrd407.pObj) [0]);
  (Wrd409.Lng) = (FIXNUM_TO_LONG (Wrd408.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd409.Lng))))
    goto label_145;
  (Wrd401.Obj) = ((Wrd407.pObj) [7]);

DEFLABEL (label_144)
  (Rsp [0]) = (Wrd401.Obj);
  (Wrd433.uLng) = (OBJECT_TYPE (Wrd401.Obj));
  if (! ((Wrd433.uLng) == 10))
    goto label_118;
  (Wrd424.Obj) = (Rsp [1]);
  (Wrd425.uLng) = (OBJECT_TYPE (Wrd424.Obj));
  if (! ((Wrd425.uLng) == 26))
    goto label_118;
  (Wrd427.Lng) = (FIXNUM_TO_LONG (Wrd424.Obj));
  (Wrd429.pObj) = (OBJECT_ADDRESS (Wrd401.Obj));
  (Wrd430.Obj) = ((Wrd429.pObj) [0]);
  (Wrd431.Lng) = (FIXNUM_TO_LONG (Wrd430.Obj));
  if (! (((unsigned long) (Wrd427.Lng)) < ((unsigned long) (Wrd431.Lng))))
    goto label_118;
  (Wrd420.uLng) = (OBJECT_DATUM (Wrd424.Obj));
  (Wrd423.pObj) = (& ((Wrd429.pObj) [(Wrd420.Lng)]));
  (Wrd418.Obj) = ((Wrd423.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd418.Obj);

DEFLABEL (label_143)
  (Wrd434.Obj) = (Rsp [0]);
  if (! ((Wrd434.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_141;
  (Wrd439.Obj) = (Rsp [1]);
  (Wrd440.pObj) = (OBJECT_ADDRESS (Wrd439.Obj));
  (Wrd438.Obj) = ((Wrd440.pObj) [2]);
  (Rsp [1]) = (Wrd438.Obj);
  (Wrd444.Obj) = (Rsp [2]);
  (Wrd445.Obj) = (current_block [OBJECT_29_0]);
  (* (Rhp++)) = (Wrd444.Obj);
  (* (Rhp++)) = (Wrd445.Obj);
  (Wrd443.pObj) = (& (Rhp [-2]));
  (Wrd441.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd443.pObj)));
  (Rsp [2]) = (Wrd441.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_38]));

DEFLABEL (label_141)
  (Rsp [1]) = (Wrd434.Obj);
  Rsp = (& (Rsp [1]));

DEFLABEL (label_142)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_145)
  (Wrd412.Obj) = (Rsp [0]);
  (Wrd413.Obj) = (current_block [OBJECT_29_7]);
  (Wrd416.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_37]))));
  (* (--Rsp)) = (Wrd416.Obj);
  (* (--Rsp)) = (Wrd413.Obj);
  (* (--Rsp)) = (Wrd412.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_96)
  (Wrd401.Obj) = Rvl;
  goto label_144;

DEFLABEL (label_147)
  (Wrd391.Obj) = (Rsp [2]);
  (Wrd395.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_36]))));
  (* (--Rsp)) = (Wrd395.Obj);
  (* (--Rsp)) = (Wrd362.Obj);
  (* (--Rsp)) = (Wrd391.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_95)
  (Wrd378.Obj) = Rvl;
  goto label_146;

DEFLABEL (label_149)
  (Wrd373.Obj) = (Rsp [1]);
  (Wrd374.Obj) = (current_block [OBJECT_29_12]);
  (Wrd377.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_35]))));
  (* (--Rsp)) = (Wrd377.Obj);
  (* (--Rsp)) = (Wrd374.Obj);
  (* (--Rsp)) = (Wrd373.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_94)
  (Wrd362.Obj) = Rvl;
  goto label_148;

DEFLABEL (label_151)
  (Wrd357.Obj) = (Rsp [0]);
  (Wrd358.Obj) = (current_block [OBJECT_29_11]);
  (Wrd361.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_34]))));
  (* (--Rsp)) = (Wrd361.Obj);
  (* (--Rsp)) = (Wrd358.Obj);
  (* (--Rsp)) = (Wrd357.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_93)
  (* (--Rsp)) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  (Wrd182.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_33]))));
  (* (--Rsp)) = (Wrd182.Obj);
  (* (--Rsp)) = (Wrd167.Obj);
  (* (--Rsp)) = (Wrd151.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_6]), 2);

DEFLABEL (label_83)
  (Wrd168.Obj) = Rvl;
  goto label_152;

DEFLABEL (label_155)
  (Wrd162.Obj) = (Rsp [1]);
  (Wrd163.Obj) = (current_block [OBJECT_29_5]);
  (Wrd166.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_32]))));
  (* (--Rsp)) = (Wrd166.Obj);
  (* (--Rsp)) = (Wrd163.Obj);
  (* (--Rsp)) = (Wrd162.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_82)
  (Wrd151.Obj) = Rvl;
  goto label_154;

DEFLABEL (label_157)
  (Wrd141.Obj) = (Rsp [2]);
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_31]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd141.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_81)
  (Wrd128.Obj) = Rvl;
  goto label_156;

DEFLABEL (label_159)
  (Wrd123.Obj) = (Rsp [1]);
  (Wrd124.Obj) = (current_block [OBJECT_29_12]);
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_30]))));
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_80)
  (Wrd112.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  (Wrd107.Obj) = (Rsp [0]);
  (Wrd108.Obj) = (current_block [OBJECT_29_11]);
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_29]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_79)
  (* (--Rsp)) = Rvl;
  goto label_160;

DEFLABEL (label_163)
  (Wrd90.Obj) = (Rsp [2]);
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd89.Obj) = ((Wrd91.pObj) [2]);
  (Wrd92.Obj) = (current_block [OBJECT_29_7]);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_28]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_78)
  (* (--Rsp)) = Rvl;
  goto label_162;

DEFLABEL (label_166)
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_1]));
  (Wrd26.Obj) = ((Wrd27.pObj) [0]);
  (Wrd30.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  (Wrd29.Obj) = (MAKE_OBJECT (26, (Wrd32.uLng)));
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_167;
  if (! ((Wrd30.uLng) == 26))
    goto label_167;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) (Wrd38.Lng)) < ((unsigned long) (Wrd41.Lng))))
    goto label_167;
  (Wrd35.pObj) = (& ((Wrd39.pObj) [(Wrd32.Lng)]));
  (Wrd36.Obj) = ((Wrd35.pObj) [1]);
  (* (--Rsp)) = (Wrd36.Obj);
  goto label_142;

DEFLABEL (label_167)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_27]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_6]), 2);

DEFLABEL (label_77)
  (* (--Rsp)) = Rvl;
  goto label_142;

DEFLABEL (label_168)
  (Wrd457.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_26]))));
  (* (--Rsp)) = (Wrd457.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_6]), 2);

DEFLABEL (label_97)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_166;
  goto label_165;

DEFLABEL (label_170)
  if (! ((Wrd12.uLng) == 62))
    goto label_178;
  (Wrd465.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd466.Obj) = ((Wrd465.pObj) [0]);
  (Wrd467.Lng) = (FIXNUM_TO_LONG (Wrd466.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd467.Lng))))
    goto label_178;
  (Wrd459.Obj) = ((Wrd465.pObj) [1]);

DEFLABEL (label_177)
  (Wrd475.uLng) = (OBJECT_TYPE (Wrd459.Obj));
  if (! ((Wrd475.uLng) == 62))
    goto label_169;
  (Wrd485.Obj) = (Rsp [3]);
  (Wrd486.uLng) = (OBJECT_TYPE (Wrd485.Obj));
  if (! ((Wrd486.uLng) == 62))
    goto label_176;
  (Wrd482.pObj) = (OBJECT_ADDRESS (Wrd485.Obj));
  (Wrd483.Obj) = ((Wrd482.pObj) [0]);
  (Wrd484.Lng) = (FIXNUM_TO_LONG (Wrd483.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd484.Lng))))
    goto label_176;
  (Wrd476.Obj) = ((Wrd482.pObj) [1]);

DEFLABEL (label_175)
  (Wrd499.uLng) = (OBJECT_TYPE (Wrd476.Obj));
  if (! ((Wrd499.uLng) == 62))
    goto label_174;
  (Wrd496.pObj) = (OBJECT_ADDRESS (Wrd476.Obj));
  (Wrd497.Obj) = ((Wrd496.pObj) [0]);
  (Wrd498.Lng) = (FIXNUM_TO_LONG (Wrd497.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd498.Lng))))
    goto label_174;
  (Wrd492.Obj) = ((Wrd496.pObj) [1]);

DEFLABEL (label_173)
  if (! ((Wrd492.Obj) == (current_block [OBJECT_29_10])))
    goto label_169;
  (Wrd506.Obj) = (current_block [OBJECT_29_9]);
  (* (--Rsp)) = (Wrd506.Obj);
  (Wrd507.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd507.Obj);
  (Wrd519.uLng) = (OBJECT_TYPE (Wrd507.Obj));
  if ((Wrd519.uLng) == 62)
    goto label_172;

DEFLABEL (label_171)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_172)
  (Wrd515.pObj) = (OBJECT_ADDRESS (Wrd507.Obj));
  (Wrd516.Obj) = ((Wrd515.pObj) [0]);
  (Wrd517.Lng) = (FIXNUM_TO_LONG (Wrd516.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd517.Lng))))
    goto label_171;
  (Wrd509.Obj) = ((Wrd515.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd509.Obj);
  goto label_164;

DEFLABEL (label_174)
  (Wrd501.Obj) = (current_block [OBJECT_29_9]);
  (Wrd504.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_25]))));
  (* (--Rsp)) = (Wrd504.Obj);
  (* (--Rsp)) = (Wrd501.Obj);
  (* (--Rsp)) = (Wrd476.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_100)
  (Wrd492.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  (Wrd487.Obj) = (Rsp [3]);
  (Wrd488.Obj) = (current_block [OBJECT_29_9]);
  (Wrd491.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_24]))));
  (* (--Rsp)) = (Wrd491.Obj);
  (* (--Rsp)) = (Wrd488.Obj);
  (* (--Rsp)) = (Wrd487.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_99)
  (Wrd476.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  (Wrd470.Obj) = (Rsp [3]);
  (Wrd471.Obj) = (current_block [OBJECT_29_9]);
  (Wrd474.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_23]))));
  (* (--Rsp)) = (Wrd474.Obj);
  (* (--Rsp)) = (Wrd471.Obj);
  (* (--Rsp)) = (Wrd470.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_98)
  (Wrd459.Obj) = Rvl;
  goto label_177;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_21);
  (* (--Rsp)) = Rvl;
  goto label_164;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_29_22);
  (* (--Rsp)) = Rvl;
  goto label_143;

DEFLABEL (search_lines_117)
DEFLABEL (search_lines_63)
  INTERRUPT_CHECK (26, LABEL_29_12);
  (Wrd520.Obj) = (Rsp [1]);
  (Wrd521.Obj) = (Rsp [2]);
  if ((Wrd520.Obj) == (Wrd521.Obj))
    goto label_198;
  (Wrd531.Obj) = (Rsp [3]);
  (Wrd532.uLng) = (OBJECT_TYPE (Wrd531.Obj));
  if (! ((Wrd532.uLng) == 62))
    goto label_197;
  (Wrd528.pObj) = (OBJECT_ADDRESS (Wrd531.Obj));
  (Wrd529.Obj) = ((Wrd528.pObj) [0]);
  (Wrd530.Lng) = (FIXNUM_TO_LONG (Wrd529.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd530.Lng))))
    goto label_197;
  (Wrd522.Obj) = ((Wrd528.pObj) [6]);

DEFLABEL (label_196)
  (Wrd660.uLng) = (OBJECT_TYPE (Wrd522.Obj));
  if (! ((Wrd660.uLng) == 10))
    goto label_195;
  (Wrd653.Obj) = (Rsp [0]);
  (Wrd654.uLng) = (OBJECT_TYPE (Wrd653.Obj));
  if (! ((Wrd654.uLng) == 26))
    goto label_195;
  (Wrd656.Lng) = (FIXNUM_TO_LONG (Wrd653.Obj));
  (Wrd657.pObj) = (OBJECT_ADDRESS (Wrd522.Obj));
  (Wrd658.Obj) = ((Wrd657.pObj) [0]);
  (Wrd659.Lng) = (FIXNUM_TO_LONG (Wrd658.Obj));
  if (! (((unsigned long) (Wrd656.Lng)) < ((unsigned long) (Wrd659.Lng))))
    goto label_195;
  (Wrd539.uLng) = (OBJECT_DATUM (Wrd653.Obj));
  (Wrd541.pObj) = (& ((Wrd657.pObj) [(Wrd539.Lng)]));
  (Wrd542.Obj) = ((Wrd541.pObj) [1]);
  if ((Wrd542.Obj) == ((SCHEME_OBJECT) 0))
    goto label_186;

DEFLABEL (label_194)
  (Wrd590.Obj) = (Rsp [3]);
  (Wrd591.uLng) = (OBJECT_TYPE (Wrd590.Obj));
  if (! ((Wrd591.uLng) == 62))
    goto label_193;
  (Wrd587.pObj) = (OBJECT_ADDRESS (Wrd590.Obj));
  (Wrd588.Obj) = ((Wrd587.pObj) [0]);
  (Wrd589.Lng) = (FIXNUM_TO_LONG (Wrd588.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd589.Lng))))
    goto label_193;
  (Wrd581.Obj) = ((Wrd587.pObj) [6]);

DEFLABEL (label_192)
  (Wrd609.uLng) = (OBJECT_TYPE (Wrd581.Obj));
  if (! ((Wrd609.uLng) == 10))
    goto label_191;
  (Wrd602.Obj) = (Rsp [0]);
  (Wrd603.uLng) = (OBJECT_TYPE (Wrd602.Obj));
  if (! ((Wrd603.uLng) == 26))
    goto label_191;
  (Wrd605.Lng) = (FIXNUM_TO_LONG (Wrd602.Obj));
  (Wrd606.pObj) = (OBJECT_ADDRESS (Wrd581.Obj));
  (Wrd607.Obj) = ((Wrd606.pObj) [0]);
  (Wrd608.Lng) = (FIXNUM_TO_LONG (Wrd607.Obj));
  if (! (((unsigned long) (Wrd605.Lng)) < ((unsigned long) (Wrd608.Lng))))
    goto label_191;
  (Wrd599.uLng) = (OBJECT_DATUM (Wrd602.Obj));
  (Wrd601.pObj) = (& ((Wrd606.pObj) [(Wrd599.Lng)]));
  (Wrd597.Obj) = ((Wrd601.pObj) [1]);

DEFLABEL (label_190)
  (Wrd616.pObj) = (OBJECT_ADDRESS (Wrd597.Obj));
  (Wrd615.Obj) = ((Wrd616.pObj) [0]);
  (Wrd617.Obj) = (Rsp [4]);
  if ((Wrd617.Obj) == (Wrd615.Obj))
    goto label_187;

DEFLABEL (label_186)
  (Wrd553.Obj) = (Rsp [3]);
  (Wrd554.uLng) = (OBJECT_TYPE (Wrd553.Obj));
  if (! ((Wrd554.uLng) == 62))
    goto label_185;
  (Wrd550.pObj) = (OBJECT_ADDRESS (Wrd553.Obj));
  (Wrd551.Obj) = ((Wrd550.pObj) [0]);
  (Wrd552.Lng) = (FIXNUM_TO_LONG (Wrd551.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd552.Lng))))
    goto label_185;
  (Wrd544.Obj) = ((Wrd550.pObj) [6]);

DEFLABEL (label_184)
  (Wrd564.uLng) = (OBJECT_TYPE (Wrd544.Obj));
  if (! ((Wrd564.uLng) == 10))
    goto label_183;
  (Wrd562.pObj) = (OBJECT_ADDRESS (Wrd544.Obj));
  (Wrd563.Obj) = ((Wrd562.pObj) [0]);
  (Wrd560.Obj) = (MAKE_OBJECT (26, (Wrd563.uLng)));

DEFLABEL (label_182)
  (Wrd570.Obj) = (Rsp [0]);
  (Wrd571.Lng) = (FIXNUM_TO_LONG (Wrd570.Obj));
  (Wrd572.Lng) = ((Wrd571.Lng) + 1L);
  (Wrd569.Obj) = (LONG_TO_FIXNUM (Wrd572.Lng));
  if ((Wrd569.Obj) == (Wrd560.Obj))
    goto label_180;
  Wrd573 = Wrd569;
  goto label_179;

DEFLABEL (label_180)
  (Wrd573.Obj) = (current_block [OBJECT_29_9]);

DEFLABEL (label_179)
DEFLABEL (label_181)
  (Rsp [0]) = (Wrd573.Obj);
  (Wrd578.Obj) = (Rsp [1]);
  (Wrd579.Lng) = (FIXNUM_TO_LONG (Wrd578.Obj));
  (Wrd580.Lng) = ((Wrd579.Lng) + 1L);
  (Wrd577.Obj) = (LONG_TO_FIXNUM (Wrd580.Lng));
  (Rsp [1]) = (Wrd577.Obj);
  goto label_120;

DEFLABEL (label_183)
  (Wrd568.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_20]))));
  (* (--Rsp)) = (Wrd568.Obj);
  (* (--Rsp)) = (Wrd544.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_8]), 1);

DEFLABEL (label_103)
  (Wrd560.Obj) = Rvl;
  goto label_182;

DEFLABEL (label_185)
  (Wrd555.Obj) = (Rsp [3]);
  (Wrd556.Obj) = (current_block [OBJECT_29_5]);
  (Wrd559.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_19]))));
  (* (--Rsp)) = (Wrd559.Obj);
  (* (--Rsp)) = (Wrd556.Obj);
  (* (--Rsp)) = (Wrd555.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_102)
  (Wrd544.Obj) = Rvl;
  goto label_184;

DEFLABEL (label_187)
  (Wrd627.Obj) = (Rsp [3]);
  (Wrd628.uLng) = (OBJECT_TYPE (Wrd627.Obj));
  if (! ((Wrd628.uLng) == 62))
    goto label_189;
  (Wrd624.pObj) = (OBJECT_ADDRESS (Wrd627.Obj));
  (Wrd625.Obj) = ((Wrd624.pObj) [0]);
  (Wrd626.Lng) = (FIXNUM_TO_LONG (Wrd625.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd626.Lng))))
    goto label_189;
  (Wrd618.Obj) = ((Wrd624.pObj) [7]);

DEFLABEL (label_188)
  (Rsp [3]) = (Wrd618.Obj);
  (Wrd634.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd634.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd650.Obj) = (Rsp [0]);
  (Wrd651.uLng) = (OBJECT_TYPE (Wrd650.Obj));
  if (! ((Wrd651.uLng) == 10))
    goto label_118;
  (Wrd642.Obj) = (Rsp [1]);
  (Wrd643.uLng) = (OBJECT_TYPE (Wrd642.Obj));
  if (! ((Wrd643.uLng) == 26))
    goto label_118;
  (Wrd645.Lng) = (FIXNUM_TO_LONG (Wrd642.Obj));
  (Wrd647.pObj) = (OBJECT_ADDRESS (Wrd650.Obj));
  (Wrd648.Obj) = ((Wrd647.pObj) [0]);
  (Wrd649.Lng) = (FIXNUM_TO_LONG (Wrd648.Obj));
  if (! (((unsigned long) (Wrd645.Lng)) < ((unsigned long) (Wrd649.Lng))))
    goto label_118;
  (Wrd638.uLng) = (OBJECT_DATUM (Wrd642.Obj));
  (Wrd641.pObj) = (& ((Wrd647.pObj) [(Wrd638.Lng)]));
  (Wrd636.Obj) = ((Wrd641.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd636.Obj);
  goto label_143;

DEFLABEL (label_189)
  (Wrd629.Obj) = (Rsp [3]);
  (Wrd630.Obj) = (current_block [OBJECT_29_7]);
  (Wrd633.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_18]))));
  (* (--Rsp)) = (Wrd633.Obj);
  (* (--Rsp)) = (Wrd630.Obj);
  (* (--Rsp)) = (Wrd629.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_106)
  (Wrd618.Obj) = Rvl;
  goto label_188;

DEFLABEL (label_191)
  (Wrd611.Obj) = (Rsp [0]);
  (Wrd614.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_17]))));
  (* (--Rsp)) = (Wrd614.Obj);
  (* (--Rsp)) = (Wrd611.Obj);
  (* (--Rsp)) = (Wrd581.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_6]), 2);

DEFLABEL (label_105)
  (Wrd597.Obj) = Rvl;
  goto label_190;

DEFLABEL (label_193)
  (Wrd592.Obj) = (Rsp [3]);
  (Wrd593.Obj) = (current_block [OBJECT_29_5]);
  (Wrd596.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_16]))));
  (* (--Rsp)) = (Wrd596.Obj);
  (* (--Rsp)) = (Wrd593.Obj);
  (* (--Rsp)) = (Wrd592.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_104)
  (Wrd581.Obj) = Rvl;
  goto label_192;

DEFLABEL (label_195)
  (Wrd662.Obj) = (Rsp [0]);
  (Wrd665.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_15]))));
  (* (--Rsp)) = (Wrd665.Obj);
  (* (--Rsp)) = (Wrd662.Obj);
  (* (--Rsp)) = (Wrd522.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_6]), 2);

DEFLABEL (label_107)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_186;
  goto label_194;

DEFLABEL (label_197)
  (Wrd533.Obj) = (Rsp [3]);
  (Wrd534.Obj) = (current_block [OBJECT_29_5]);
  (Wrd537.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_14]))));
  (* (--Rsp)) = (Wrd537.Obj);
  (* (--Rsp)) = (Wrd534.Obj);
  (* (--Rsp)) = (Wrd533.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_101)
  (Wrd522.Obj) = Rvl;
  goto label_196;

DEFLABEL (label_198)
  (Wrd676.Obj) = (Rsp [3]);
  (Wrd677.uLng) = (OBJECT_TYPE (Wrd676.Obj));
  if (! ((Wrd677.uLng) == 62))
    goto label_200;
  (Wrd673.pObj) = (OBJECT_ADDRESS (Wrd676.Obj));
  (Wrd674.Obj) = ((Wrd673.pObj) [0]);
  (Wrd675.Lng) = (FIXNUM_TO_LONG (Wrd674.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd675.Lng))))
    goto label_200;
  (Wrd667.Obj) = ((Wrd673.pObj) [8]);

DEFLABEL (label_199)
  (Rsp [2]) = (Wrd667.Obj);
  Rsp = (& (Rsp [2]));
  goto search_overflow_61;

DEFLABEL (label_200)
  (Wrd678.Obj) = (Rsp [3]);
  (Wrd679.Obj) = (current_block [OBJECT_29_3]);
  (Wrd682.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_13]))));
  (* (--Rsp)) = (Wrd682.Obj);
  (* (--Rsp)) = (Wrd679.Obj);
  (* (--Rsp)) = (Wrd678.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_108)
  (Wrd667.Obj) = Rvl;
  goto label_199;

DEFLABEL (search_overflow_116)
DEFLABEL (search_overflow_61)
  INTERRUPT_CHECK (26, LABEL_29_7);
  (Wrd684.Obj) = (Rsp [0]);
  if ((Wrd684.Obj) == (current_block [OBJECT_29_0]))
    goto label_211;
  (Wrd690.uLng) = (OBJECT_TYPE (Wrd684.Obj));
  if (! ((Wrd690.uLng) == 1))
    goto label_210;
  (Wrd688.pObj) = (OBJECT_ADDRESS (Wrd684.Obj));
  (Wrd686.Obj) = ((Wrd688.pObj) [0]);

DEFLABEL (label_209)
  (Wrd697.uLng) = (OBJECT_TYPE (Wrd686.Obj));
  if (! ((Wrd697.uLng) == 1))
    goto label_208;
  (Wrd696.pObj) = (OBJECT_ADDRESS (Wrd686.Obj));
  (Wrd695.Obj) = ((Wrd696.pObj) [0]);

DEFLABEL (label_207)
  (Wrd703.pObj) = (OBJECT_ADDRESS (Wrd695.Obj));
  (Wrd702.Obj) = ((Wrd703.pObj) [0]);
  (Wrd704.Obj) = (Rsp [2]);
  if ((Wrd704.Obj) == (Wrd702.Obj))
    goto label_203;
  (Wrd708.Obj) = (Rsp [0]);
  (Wrd709.uLng) = (OBJECT_TYPE (Wrd708.Obj));
  if (! ((Wrd709.uLng) == 1))
    goto label_202;
  (Wrd707.pObj) = (OBJECT_ADDRESS (Wrd708.Obj));
  (Wrd705.Obj) = ((Wrd707.pObj) [1]);

DEFLABEL (label_201)
  (Rsp [0]) = (Wrd705.Obj);
  goto search_overflow_61;

DEFLABEL (label_202)
  (Wrd713.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd713.Obj);
  (* (--Rsp)) = (Wrd708.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 1);

DEFLABEL (label_111)
  (Wrd705.Obj) = Rvl;
  goto label_201;

DEFLABEL (label_203)
  (Wrd717.Obj) = (Rsp [0]);
  (Wrd718.uLng) = (OBJECT_TYPE (Wrd717.Obj));
  if (! ((Wrd718.uLng) == 1))
    goto label_206;
  (Wrd716.pObj) = (OBJECT_ADDRESS (Wrd717.Obj));
  (Wrd714.Obj) = ((Wrd716.pObj) [0]);

DEFLABEL (label_205)
  (Rsp [2]) = (Wrd714.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd727.Obj) = (Rsp [0]);
  (Wrd728.uLng) = (OBJECT_TYPE (Wrd727.Obj));
  if ((Wrd728.uLng) == 1)
    goto label_204;
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 1);

DEFLABEL (label_204)
  (Wrd726.pObj) = (OBJECT_ADDRESS (Wrd727.Obj));
  (Wrd724.Obj) = ((Wrd726.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd724.Obj);
  goto label_143;

DEFLABEL (label_206)
  (Wrd722.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_10]))));
  (* (--Rsp)) = (Wrd722.Obj);
  (* (--Rsp)) = (Wrd717.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

DEFLABEL (label_112)
  (Wrd714.Obj) = Rvl;
  goto label_205;

DEFLABEL (label_208)
  (Wrd701.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd701.Obj);
  (* (--Rsp)) = (Wrd686.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

DEFLABEL (label_110)
  (Wrd695.Obj) = Rvl;
  goto label_207;

DEFLABEL (label_210)
  (Wrd694.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd694.Obj);
  (* (--Rsp)) = (Wrd684.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

DEFLABEL (label_109)
  (Wrd686.Obj) = Rvl;
  goto label_209;

DEFLABEL (label_211)
  Rsp = (& (Rsp [4]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_143;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_7 5
#define LABEL_30_8 7
#define LABEL_30_9 9
#define LABEL_30_10 11
#define LABEL_30_11 13
#define LABEL_30_12 15
#define LABEL_30_13 17
#define LABEL_30_14 19
#define LABEL_30_15 21
#define LABEL_30_16 23
#define LABEL_30_17 25
#define LABEL_30_18 27
#define LABEL_30_19 29
#define LABEL_30_20 31
#define LABEL_30_21 33
#define LABEL_30_22 35
#define LABEL_30_23 37
#define LABEL_30_24 39
#define LABEL_30_25 41
#define LABEL_30_26 43
#define LABEL_30_27 45
#define LABEL_30_5 47
#define TAG_30_6 22
#define LABEL_30_28 49
#define LABEL_30_29 51
#define LABEL_30_30 53
#define LABEL_30_31 55
#define LABEL_30_32 57
#define LABEL_30_33 59
#define LABEL_30_34 61
#define LABEL_30_35 63
#define LABEL_30_36 65
#define LABEL_30_37 67
#define LABEL_30_38 69
#define LABEL_30_39 71
#define LABEL_30_40 73
#define LABEL_30_41 75
#define LABEL_30_42 77
#define LABEL_30_43 79
#define LABEL_30_44 81
#define LABEL_30_45 83
#define LABEL_30_46 85
#define LABEL_30_47 87
#define LABEL_30_48 89
#define LABEL_30_49 91
#define LABEL_30_50 93
#define LABEL_30_51 95
#define LABEL_30_52 97
#define LABEL_30_53 99
#define LABEL_30_54 101
#define LABEL_30_55 103
#define LABEL_30_56 105
#define LABEL_30_57 107
#define LABEL_30_58 109
#define LABEL_30_59 111
#define LABEL_30_60 113
#define LABEL_30_61 115
#define LABEL_30_62 117
#define LABEL_30_63 119
#define LABEL_30_64 121
#define LABEL_30_65 123
#define LABEL_30_67 125
#define LABEL_30_68 127
#define LABEL_30_69 129
#define LABEL_30_70 131
#define LABEL_30_71 133
#define LABEL_30_72 135
#define LABEL_30_73 137
#define LABEL_30_74 139
#define LABEL_30_75 141
#define LABEL_30_76 143
#define LABEL_30_77 145
#define LABEL_30_78 147
#define LABEL_30_79 149
#define ENVIRONMENT_LABEL_30_3 171
#define DEBUGGING_LABEL_30_2 170
#define OBJECT_30_13 169
#define OBJECT_30_12 168
#define OBJECT_30_11 167
#define OBJECT_30_10 166
#define OBJECT_30_9 165
#define OBJECT_30_8 164
#define OBJECT_30_7 163
#define OBJECT_30_6 162
#define OBJECT_30_5 161
#define OBJECT_30_4 160
#define OBJECT_30_3 159
#define OBJECT_30_2 158
#define OBJECT_30_1 157
#define OBJECT_30_0 156
#define EXECUTE_CACHE_30_66 151
#define FREE_REFERENCE_30_1 154
#define FREE_REFERENCE_30_0 155
#define FREE_REFERENCES_LABEL_30_0 150
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd512;
  machine_word Wrd511;
  machine_word Wrd510;
  machine_word Wrd508;
  machine_word Wrd507;
  machine_word Wrd505;
  machine_word Wrd504;
  machine_word Wrd503;
  machine_word Wrd502;
  machine_word Wrd500;
  machine_word Wrd499;
  machine_word Wrd495;
  machine_word Wrd482;
  machine_word Wrd486;
  machine_word Wrd483;
  machine_word Wrd492;
  machine_word Wrd491;
  machine_word Wrd490;
  machine_word Wrd488;
  machine_word Wrd487;
  machine_word Wrd494;
  machine_word Wrd493;
  machine_word Wrd481;
  machine_word Wrd478;
  machine_word Wrd477;
  machine_word Wrd466;
  machine_word Wrd474;
  machine_word Wrd473;
  machine_word Wrd472;
  machine_word Wrd476;
  machine_word Wrd475;
  machine_word Wrd465;
  machine_word Wrd461;
  machine_word Wrd452;
  machine_word Wrd451;
  machine_word Wrd448;
  machine_word Wrd458;
  machine_word Wrd457;
  machine_word Wrd456;
  machine_word Wrd454;
  machine_word Wrd453;
  machine_word Wrd460;
  machine_word Wrd459;
  machine_word Wrd447;
  machine_word Wrd444;
  machine_word Wrd443;
  machine_word Wrd432;
  machine_word Wrd440;
  machine_word Wrd439;
  machine_word Wrd438;
  machine_word Wrd442;
  machine_word Wrd441;
  machine_word Wrd431;
  machine_word Wrd428;
  machine_word Wrd427;
  machine_word Wrd418;
  machine_word Wrd424;
  machine_word Wrd423;
  machine_word Wrd422;
  machine_word Wrd426;
  machine_word Wrd425;
  machine_word Wrd513;
  machine_word Wrd415;
  machine_word Wrd412;
  machine_word Wrd414;
  machine_word Wrd413;
  machine_word Wrd410;
  machine_word Wrd409;
  machine_word Wrd407;
  machine_word Wrd406;
  machine_word Wrd405;
  machine_word Wrd404;
  machine_word Wrd402;
  machine_word Wrd401;
  machine_word Wrd397;
  machine_word Wrd384;
  machine_word Wrd388;
  machine_word Wrd385;
  machine_word Wrd394;
  machine_word Wrd393;
  machine_word Wrd392;
  machine_word Wrd390;
  machine_word Wrd389;
  machine_word Wrd396;
  machine_word Wrd395;
  machine_word Wrd383;
  machine_word Wrd380;
  machine_word Wrd379;
  machine_word Wrd368;
  machine_word Wrd376;
  machine_word Wrd375;
  machine_word Wrd374;
  machine_word Wrd378;
  machine_word Wrd377;
  machine_word Wrd367;
  machine_word Wrd363;
  machine_word Wrd354;
  machine_word Wrd353;
  machine_word Wrd350;
  machine_word Wrd360;
  machine_word Wrd359;
  machine_word Wrd358;
  machine_word Wrd356;
  machine_word Wrd355;
  machine_word Wrd362;
  machine_word Wrd361;
  machine_word Wrd349;
  machine_word Wrd346;
  machine_word Wrd345;
  machine_word Wrd334;
  machine_word Wrd342;
  machine_word Wrd341;
  machine_word Wrd340;
  machine_word Wrd344;
  machine_word Wrd343;
  machine_word Wrd333;
  machine_word Wrd330;
  machine_word Wrd329;
  machine_word Wrd320;
  machine_word Wrd326;
  machine_word Wrd325;
  machine_word Wrd324;
  machine_word Wrd328;
  machine_word Wrd327;
  machine_word Wrd317;
  machine_word Wrd312;
  machine_word Wrd311;
  machine_word Wrd310;
  machine_word Wrd313;
  machine_word Wrd308;
  machine_word Wrd305;
  machine_word Wrd304;
  machine_word Wrd293;
  machine_word Wrd301;
  machine_word Wrd300;
  machine_word Wrd299;
  machine_word Wrd303;
  machine_word Wrd302;
  machine_word Wrd292;
  machine_word Wrd291;
  machine_word Wrd288;
  machine_word Wrd287;
  machine_word Wrd278;
  machine_word Wrd284;
  machine_word Wrd283;
  machine_word Wrd282;
  machine_word Wrd286;
  machine_word Wrd285;
  machine_word Wrd914;
  machine_word Wrd916;
  machine_word Wrd915;
  machine_word Wrd910;
  machine_word Wrd912;
  machine_word Wrd913;
  machine_word Wrd905;
  machine_word Wrd907;
  machine_word Wrd909;
  machine_word Wrd908;
  machine_word Wrd901;
  machine_word Wrd885;
  machine_word Wrd890;
  machine_word Wrd887;
  machine_word Wrd898;
  machine_word Wrd897;
  machine_word Wrd896;
  machine_word Wrd894;
  machine_word Wrd892;
  machine_word Wrd891;
  machine_word Wrd900;
  machine_word Wrd899;
  machine_word Wrd883;
  machine_word Wrd880;
  machine_word Wrd879;
  machine_word Wrd868;
  machine_word Wrd876;
  machine_word Wrd875;
  machine_word Wrd874;
  machine_word Wrd878;
  machine_word Wrd877;
  machine_word Wrd864;
  machine_word Wrd867;
  machine_word Wrd866;
  machine_word Wrd865;
  machine_word Wrd863;
  machine_word Wrd862;
  machine_word Wrd861;
  machine_word Wrd860;
  machine_word Wrd858;
  machine_word Wrd857;
  machine_word Wrd853;
  machine_word Wrd840;
  machine_word Wrd844;
  machine_word Wrd841;
  machine_word Wrd850;
  machine_word Wrd849;
  machine_word Wrd848;
  machine_word Wrd846;
  machine_word Wrd845;
  machine_word Wrd852;
  machine_word Wrd851;
  machine_word Wrd839;
  machine_word Wrd836;
  machine_word Wrd835;
  machine_word Wrd824;
  machine_word Wrd832;
  machine_word Wrd831;
  machine_word Wrd830;
  machine_word Wrd834;
  machine_word Wrd833;
  machine_word Wrd823;
  machine_word Wrd819;
  machine_word Wrd810;
  machine_word Wrd809;
  machine_word Wrd806;
  machine_word Wrd816;
  machine_word Wrd815;
  machine_word Wrd814;
  machine_word Wrd812;
  machine_word Wrd811;
  machine_word Wrd818;
  machine_word Wrd817;
  machine_word Wrd805;
  machine_word Wrd802;
  machine_word Wrd801;
  machine_word Wrd790;
  machine_word Wrd798;
  machine_word Wrd797;
  machine_word Wrd796;
  machine_word Wrd800;
  machine_word Wrd799;
  machine_word Wrd789;
  machine_word Wrd786;
  machine_word Wrd785;
  machine_word Wrd776;
  machine_word Wrd782;
  machine_word Wrd781;
  machine_word Wrd780;
  machine_word Wrd784;
  machine_word Wrd783;
  machine_word Wrd773;
  machine_word Wrd771;
  machine_word Wrd772;
  machine_word Wrd769;
  machine_word Wrd770;
  machine_word Wrd768;
  machine_word Wrd754;
  machine_word Wrd757;
  machine_word Wrd755;
  machine_word Wrd762;
  machine_word Wrd761;
  machine_word Wrd760;
  machine_word Wrd759;
  machine_word Wrd758;
  machine_word Wrd763;
  machine_word Wrd753;
  machine_word Wrd752;
  machine_word Wrd749;
  machine_word Wrd748;
  machine_word Wrd737;
  machine_word Wrd745;
  machine_word Wrd744;
  machine_word Wrd743;
  machine_word Wrd747;
  machine_word Wrd746;
  machine_word Wrd736;
  machine_word Wrd735;
  machine_word Wrd734;
  machine_word Wrd733;
  machine_word Wrd732;
  machine_word Wrd731;
  machine_word Wrd730;
  machine_word Wrd729;
  machine_word Wrd727;
  machine_word Wrd726;
  machine_word Wrd722;
  machine_word Wrd709;
  machine_word Wrd713;
  machine_word Wrd710;
  machine_word Wrd719;
  machine_word Wrd718;
  machine_word Wrd717;
  machine_word Wrd715;
  machine_word Wrd714;
  machine_word Wrd721;
  machine_word Wrd720;
  machine_word Wrd708;
  machine_word Wrd705;
  machine_word Wrd704;
  machine_word Wrd693;
  machine_word Wrd701;
  machine_word Wrd700;
  machine_word Wrd699;
  machine_word Wrd703;
  machine_word Wrd702;
  machine_word Wrd692;
  machine_word Wrd688;
  machine_word Wrd679;
  machine_word Wrd678;
  machine_word Wrd675;
  machine_word Wrd685;
  machine_word Wrd684;
  machine_word Wrd683;
  machine_word Wrd681;
  machine_word Wrd680;
  machine_word Wrd687;
  machine_word Wrd686;
  machine_word Wrd674;
  machine_word Wrd671;
  machine_word Wrd670;
  machine_word Wrd659;
  machine_word Wrd667;
  machine_word Wrd666;
  machine_word Wrd665;
  machine_word Wrd669;
  machine_word Wrd668;
  machine_word Wrd658;
  machine_word Wrd655;
  machine_word Wrd654;
  machine_word Wrd645;
  machine_word Wrd651;
  machine_word Wrd650;
  machine_word Wrd649;
  machine_word Wrd653;
  machine_word Wrd652;
  machine_word Wrd642;
  machine_word Wrd640;
  machine_word Wrd641;
  machine_word Wrd639;
  machine_word Wrd625;
  machine_word Wrd628;
  machine_word Wrd626;
  machine_word Wrd633;
  machine_word Wrd632;
  machine_word Wrd631;
  machine_word Wrd630;
  machine_word Wrd629;
  machine_word Wrd634;
  machine_word Wrd624;
  machine_word Wrd623;
  machine_word Wrd620;
  machine_word Wrd619;
  machine_word Wrd608;
  machine_word Wrd616;
  machine_word Wrd615;
  machine_word Wrd614;
  machine_word Wrd618;
  machine_word Wrd617;
  machine_word Wrd607;
  machine_word Wrd606;
  machine_word Wrd605;
  machine_word Wrd604;
  machine_word Wrd603;
  machine_word Wrd602;
  machine_word Wrd601;
  machine_word Wrd600;
  machine_word Wrd598;
  machine_word Wrd597;
  machine_word Wrd593;
  machine_word Wrd580;
  machine_word Wrd584;
  machine_word Wrd581;
  machine_word Wrd590;
  machine_word Wrd589;
  machine_word Wrd588;
  machine_word Wrd586;
  machine_word Wrd585;
  machine_word Wrd592;
  machine_word Wrd591;
  machine_word Wrd579;
  machine_word Wrd576;
  machine_word Wrd575;
  machine_word Wrd564;
  machine_word Wrd572;
  machine_word Wrd571;
  machine_word Wrd570;
  machine_word Wrd574;
  machine_word Wrd573;
  machine_word Wrd563;
  machine_word Wrd559;
  machine_word Wrd550;
  machine_word Wrd549;
  machine_word Wrd546;
  machine_word Wrd556;
  machine_word Wrd555;
  machine_word Wrd554;
  machine_word Wrd552;
  machine_word Wrd551;
  machine_word Wrd558;
  machine_word Wrd557;
  machine_word Wrd545;
  machine_word Wrd542;
  machine_word Wrd541;
  machine_word Wrd530;
  machine_word Wrd538;
  machine_word Wrd537;
  machine_word Wrd536;
  machine_word Wrd540;
  machine_word Wrd539;
  machine_word Wrd529;
  machine_word Wrd526;
  machine_word Wrd525;
  machine_word Wrd516;
  machine_word Wrd522;
  machine_word Wrd521;
  machine_word Wrd520;
  machine_word Wrd524;
  machine_word Wrd523;
  machine_word Wrd929;
  machine_word Wrd274;
  machine_word Wrd273;
  machine_word Wrd271;
  machine_word Wrd923;
  machine_word Wrd922;
  machine_word Wrd921;
  machine_word Wrd920;
  machine_word Wrd919;
  machine_word Wrd924;
  machine_word Wrd270;
  machine_word Wrd269;
  machine_word Wrd266;
  machine_word Wrd265;
  machine_word Wrd254;
  machine_word Wrd262;
  machine_word Wrd261;
  machine_word Wrd260;
  machine_word Wrd264;
  machine_word Wrd263;
  machine_word Wrd253;
  machine_word Wrd252;
  machine_word Wrd251;
  machine_word Wrd250;
  machine_word Wrd249;
  machine_word Wrd248;
  machine_word Wrd247;
  machine_word Wrd246;
  machine_word Wrd244;
  machine_word Wrd243;
  machine_word Wrd239;
  machine_word Wrd226;
  machine_word Wrd230;
  machine_word Wrd227;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd234;
  machine_word Wrd232;
  machine_word Wrd231;
  machine_word Wrd238;
  machine_word Wrd237;
  machine_word Wrd225;
  machine_word Wrd222;
  machine_word Wrd221;
  machine_word Wrd210;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd216;
  machine_word Wrd220;
  machine_word Wrd219;
  machine_word Wrd209;
  machine_word Wrd205;
  machine_word Wrd196;
  machine_word Wrd195;
  machine_word Wrd192;
  machine_word Wrd202;
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd198;
  machine_word Wrd197;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd191;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd176;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd175;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd162;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd159;
  machine_word Wrd156;
  machine_word Wrd153;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd140;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd120;
  machine_word Wrd125;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd129;
  machine_word Wrd135;
  machine_word Wrd118;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd106;
  machine_word Wrd93;
  machine_word Wrd96;
  machine_word Wrd94;
  machine_word Wrd90;
  machine_word Wrd91;
  machine_word Wrd89;
  machine_word Wrd941;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd935;
  machine_word Wrd934;
  machine_word Wrd933;
  machine_word Wrd932;
  machine_word Wrd936;
  machine_word Wrd80;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd993;
  machine_word Wrd1001;
  machine_word Wrd1000;
  machine_word Wrd999;
  machine_word Wrd1003;
  machine_word Wrd991;
  machine_word Wrd990;
  machine_word Wrd988;
  machine_word Wrd985;
  machine_word Wrd976;
  machine_word Wrd982;
  machine_word Wrd981;
  machine_word Wrd980;
  machine_word Wrd983;
  machine_word Wrd975;
  machine_word Wrd972;
  machine_word Wrd971;
  machine_word Wrd960;
  machine_word Wrd968;
  machine_word Wrd967;
  machine_word Wrd966;
  machine_word Wrd970;
  machine_word Wrd969;
  machine_word Wrd959;
  machine_word Wrd958;
  machine_word Wrd955;
  machine_word Wrd954;
  machine_word Wrd943;
  machine_word Wrd951;
  machine_word Wrd950;
  machine_word Wrd949;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd56;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd71;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd1014;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd1008;
  machine_word Wrd1007;
  machine_word Wrd1006;
  machine_word Wrd1005;
  machine_word Wrd1009;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd1066;
  machine_word Wrd1074;
  machine_word Wrd1073;
  machine_word Wrd1072;
  machine_word Wrd1076;
  machine_word Wrd1064;
  machine_word Wrd1063;
  machine_word Wrd1061;
  machine_word Wrd1058;
  machine_word Wrd1049;
  machine_word Wrd1055;
  machine_word Wrd1054;
  machine_word Wrd1053;
  machine_word Wrd1056;
  machine_word Wrd1048;
  machine_word Wrd1045;
  machine_word Wrd1044;
  machine_word Wrd1033;
  machine_word Wrd1041;
  machine_word Wrd1040;
  machine_word Wrd1039;
  machine_word Wrd1043;
  machine_word Wrd1042;
  machine_word Wrd1032;
  machine_word Wrd1031;
  machine_word Wrd1028;
  machine_word Wrd1027;
  machine_word Wrd1016;
  machine_word Wrd1024;
  machine_word Wrd1023;
  machine_word Wrd1022;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd1134;
  machine_word Wrd1137;
  machine_word Wrd1136;
  machine_word Wrd1135;
  machine_word Wrd1130;
  machine_word Wrd1126;
  machine_word Wrd1129;
  machine_word Wrd1128;
  machine_word Wrd1127;
  machine_word Wrd1125;
  machine_word Wrd1117;
  machine_word Wrd1120;
  machine_word Wrd1119;
  machine_word Wrd1121;
  machine_word Wrd1116;
  machine_word Wrd1113;
  machine_word Wrd1112;
  machine_word Wrd1101;
  machine_word Wrd1109;
  machine_word Wrd1108;
  machine_word Wrd1107;
  machine_word Wrd1111;
  machine_word Wrd1110;
  machine_word Wrd1232;
  machine_word Wrd1237;
  machine_word Wrd1234;
  machine_word Wrd1245;
  machine_word Wrd1244;
  machine_word Wrd1243;
  machine_word Wrd1241;
  machine_word Wrd1239;
  machine_word Wrd1238;
  machine_word Wrd1247;
  machine_word Wrd1246;
  machine_word Wrd1230;
  machine_word Wrd1229;
  machine_word Wrd1226;
  machine_word Wrd1225;
  machine_word Wrd1214;
  machine_word Wrd1222;
  machine_word Wrd1221;
  machine_word Wrd1220;
  machine_word Wrd1224;
  machine_word Wrd1223;
  machine_word Wrd1213;
  machine_word Wrd1211;
  machine_word Wrd1212;
  machine_word Wrd1209;
  machine_word Wrd1210;
  machine_word Wrd1208;
  machine_word Wrd1205;
  machine_word Wrd1191;
  machine_word Wrd1195;
  machine_word Wrd1193;
  machine_word Wrd1202;
  machine_word Wrd1201;
  machine_word Wrd1200;
  machine_word Wrd1199;
  machine_word Wrd1197;
  machine_word Wrd1196;
  machine_word Wrd1203;
  machine_word Wrd1190;
  machine_word Wrd1187;
  machine_word Wrd1186;
  machine_word Wrd1175;
  machine_word Wrd1183;
  machine_word Wrd1182;
  machine_word Wrd1181;
  machine_word Wrd1185;
  machine_word Wrd1184;
  machine_word Wrd1174;
  machine_word Wrd1172;
  machine_word Wrd1173;
  machine_word Wrd1171;
  machine_word Wrd1168;
  machine_word Wrd1154;
  machine_word Wrd1158;
  machine_word Wrd1156;
  machine_word Wrd1165;
  machine_word Wrd1164;
  machine_word Wrd1163;
  machine_word Wrd1162;
  machine_word Wrd1160;
  machine_word Wrd1159;
  machine_word Wrd1166;
  machine_word Wrd1153;
  machine_word Wrd1150;
  machine_word Wrd1149;
  machine_word Wrd1138;
  machine_word Wrd1146;
  machine_word Wrd1145;
  machine_word Wrd1144;
  machine_word Wrd1148;
  machine_word Wrd1147;
  machine_word Wrd1261;
  machine_word Wrd1258;
  machine_word Wrd1099;
  machine_word Wrd1098;
  machine_word Wrd1096;
  machine_word Wrd1255;
  machine_word Wrd1254;
  machine_word Wrd1253;
  machine_word Wrd1252;
  machine_word Wrd1250;
  machine_word Wrd1249;
  machine_word Wrd1256;
  machine_word Wrd1094;
  machine_word Wrd1091;
  machine_word Wrd1090;
  machine_word Wrd1079;
  machine_word Wrd1087;
  machine_word Wrd1086;
  machine_word Wrd1085;
  machine_word Wrd1089;
  machine_word Wrd1088;
  machine_word Wrd1278;
  machine_word Wrd1275;
  machine_word Wrd1274;
  machine_word Wrd1263;
  machine_word Wrd1271;
  machine_word Wrd1270;
  machine_word Wrd1269;
  machine_word Wrd1273;
  machine_word Wrd1272;
  machine_word Wrd1078;
  machine_word Wrd1077;
  machine_word Wrd1309;
  machine_word Wrd1301;
  machine_word Wrd1303;
  machine_word Wrd1305;
  machine_word Wrd1304;
  machine_word Wrd1341;
  machine_word Wrd1343;
  machine_word Wrd1345;
  machine_word Wrd1344;
  machine_word Wrd1339;
  machine_word Wrd1331;
  machine_word Wrd1333;
  machine_word Wrd1335;
  machine_word Wrd1334;
  machine_word Wrd1330;
  machine_word Wrd1328;
  machine_word Wrd1329;
  machine_word Wrd1326;
  machine_word Wrd1327;
  machine_word Wrd1325;
  machine_word Wrd1319;
  machine_word Wrd1320;
  machine_word Wrd1321;
  machine_word Wrd1318;
  machine_word Wrd1310;
  machine_word Wrd1312;
  machine_word Wrd1314;
  machine_word Wrd1313;
  machine_word Wrd1300;
  machine_word Wrd1298;
  machine_word Wrd1299;
  machine_word Wrd1297;
  machine_word Wrd1291;
  machine_word Wrd1292;
  machine_word Wrd1293;
  machine_word Wrd1290;
  machine_word Wrd1282;
  machine_word Wrd1284;
  machine_word Wrd1286;
  machine_word Wrd1280;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_30_4);
      goto apply_generic_2_132;

    case 1:
      current_block = (Rpc - LABEL_30_7);
      goto search_overflow_114;

    case 2:
      current_block = (Rpc - LABEL_30_8);
      goto label_195;

    case 3:
      current_block = (Rpc - LABEL_30_9);
      goto label_196;

    case 4:
      current_block = (Rpc - LABEL_30_10);
      goto label_198;

    case 5:
      current_block = (Rpc - LABEL_30_11);
      goto label_199;

    case 6:
      current_block = (Rpc - LABEL_30_12);
      goto label_200;

    case 7:
      current_block = (Rpc - LABEL_30_13);
      goto label_197;

    case 8:
      current_block = (Rpc - LABEL_30_14);
      goto search_lines_116;

    case 9:
      current_block = (Rpc - LABEL_30_15);
      goto label_194;

    case 10:
      current_block = (Rpc - LABEL_30_16);
      goto label_185;

    case 11:
      current_block = (Rpc - LABEL_30_17);
      goto label_193;

    case 12:
      current_block = (Rpc - LABEL_30_18);
      goto label_188;

    case 13:
      current_block = (Rpc - LABEL_30_19);
      goto label_189;

    case 14:
      current_block = (Rpc - LABEL_30_20);
      goto label_190;

    case 15:
      current_block = (Rpc - LABEL_30_21);
      goto label_191;

    case 16:
      current_block = (Rpc - LABEL_30_22);
      goto label_192;

    case 17:
      current_block = (Rpc - LABEL_30_23);
      goto label_186;

    case 18:
      current_block = (Rpc - LABEL_30_24);
      goto label_187;

    case 19:
      current_block = (Rpc - LABEL_30_25);
      goto continuation_1;

    case 20:
      current_block = (Rpc - LABEL_30_26);
      goto continuation_14;

    case 21:
      current_block = (Rpc - LABEL_30_27);
      goto continuation_27;

    case 22:
      current_block = (Rpc - LABEL_30_5);
      goto lambda_203;

    case 23:
      current_block = (Rpc - LABEL_30_28);
      goto label_182;

    case 24:
      current_block = (Rpc - LABEL_30_29);
      goto label_183;

    case 25:
      current_block = (Rpc - LABEL_30_30);
      goto label_184;

    case 26:
      current_block = (Rpc - LABEL_30_31);
      goto label_181;

    case 27:
      current_block = (Rpc - LABEL_30_32);
      goto label_134;

    case 28:
      current_block = (Rpc - LABEL_30_33);
      goto label_178;

    case 29:
      current_block = (Rpc - LABEL_30_34);
      goto label_179;

    case 30:
      current_block = (Rpc - LABEL_30_35);
      goto label_180;

    case 31:
      current_block = (Rpc - LABEL_30_36);
      goto label_177;

    case 32:
      current_block = (Rpc - LABEL_30_37);
      goto label_135;

    case 33:
      current_block = (Rpc - LABEL_30_38);
      goto label_136;

    case 34:
      current_block = (Rpc - LABEL_30_39);
      goto label_137;

    case 35:
      current_block = (Rpc - LABEL_30_40);
      goto label_138;

    case 36:
      current_block = (Rpc - LABEL_30_41);
      goto label_139;

    case 37:
      current_block = (Rpc - LABEL_30_42);
      goto label_140;

    case 38:
      current_block = (Rpc - LABEL_30_43);
      goto label_141;

    case 39:
      current_block = (Rpc - LABEL_30_44);
      goto label_142;

    case 40:
      current_block = (Rpc - LABEL_30_45);
      goto label_176;

    case 41:
      current_block = (Rpc - LABEL_30_46);
      goto label_156;

    case 42:
      current_block = (Rpc - LABEL_30_47);
      goto label_157;

    case 43:
      current_block = (Rpc - LABEL_30_48);
      goto label_158;

    case 44:
      current_block = (Rpc - LABEL_30_49);
      goto label_159;

    case 45:
      current_block = (Rpc - LABEL_30_50);
      goto label_160;

    case 46:
      current_block = (Rpc - LABEL_30_51);
      goto label_161;

    case 47:
      current_block = (Rpc - LABEL_30_52);
      goto label_162;

    case 48:
      current_block = (Rpc - LABEL_30_53);
      goto label_163;

    case 49:
      current_block = (Rpc - LABEL_30_54);
      goto label_164;

    case 50:
      current_block = (Rpc - LABEL_30_55);
      goto label_165;

    case 51:
      current_block = (Rpc - LABEL_30_56);
      goto label_166;

    case 52:
      current_block = (Rpc - LABEL_30_57);
      goto label_167;

    case 53:
      current_block = (Rpc - LABEL_30_58);
      goto label_168;

    case 54:
      current_block = (Rpc - LABEL_30_59);
      goto label_169;

    case 55:
      current_block = (Rpc - LABEL_30_60);
      goto label_170;

    case 56:
      current_block = (Rpc - LABEL_30_61);
      goto label_171;

    case 57:
      current_block = (Rpc - LABEL_30_62);
      goto label_172;

    case 58:
      current_block = (Rpc - LABEL_30_63);
      goto label_173;

    case 59:
      current_block = (Rpc - LABEL_30_64);
      goto label_174;

    case 60:
      current_block = (Rpc - LABEL_30_65);
      goto label_175;

    case 61:
      current_block = (Rpc - LABEL_30_67);
      goto label_143;

    case 62:
      current_block = (Rpc - LABEL_30_68);
      goto label_144;

    case 63:
      current_block = (Rpc - LABEL_30_69);
      goto label_145;

    case 64:
      current_block = (Rpc - LABEL_30_70);
      goto label_146;

    case 65:
      current_block = (Rpc - LABEL_30_71);
      goto label_147;

    case 66:
      current_block = (Rpc - LABEL_30_72);
      goto label_148;

    case 67:
      current_block = (Rpc - LABEL_30_73);
      goto label_149;

    case 68:
      current_block = (Rpc - LABEL_30_74);
      goto label_150;

    case 69:
      current_block = (Rpc - LABEL_30_75);
      goto label_151;

    case 70:
      current_block = (Rpc - LABEL_30_76);
      goto label_152;

    case 71:
      current_block = (Rpc - LABEL_30_77);
      goto label_153;

    case 72:
      current_block = (Rpc - LABEL_30_78);
      goto label_154;

    case 73:
      current_block = (Rpc - LABEL_30_79);
      goto label_155;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_generic_2_202)
DEFLABEL (apply_generic_2_132)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_203)
  CLOSURE_HEADER (LABEL_30_5);

DEFLABEL (lambda_131)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 62)
    goto label_319;

DEFLABEL (label_318)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd13.Obj) = ((Wrd14.pObj) [0]);
  (Wrd17.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  (Wrd16.Obj) = (MAKE_OBJECT (26, (Wrd19.uLng)));
  (Wrd1009.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd1009.uLng) == 10))
    goto label_317;
  if (! ((Wrd17.uLng) == 26))
    goto label_317;
  (Wrd1005.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd1006.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd1007.Obj) = ((Wrd1006.pObj) [0]);
  (Wrd1008.Lng) = (FIXNUM_TO_LONG (Wrd1007.Obj));
  if (! (((unsigned long) (Wrd1005.Lng)) < ((unsigned long) (Wrd1008.Lng))))
    goto label_317;
  (Wrd22.pObj) = (& ((Wrd1006.pObj) [(Wrd19.Lng)]));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_315;

DEFLABEL (label_314)
  (Wrd48.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd49.Obj) = (Rsp [4]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  (Wrd51.Obj) = (MAKE_OBJECT (26, (Wrd50.uLng)));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd54.Obj) = ((Wrd52.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd71.uLng) == 10)
    goto label_207;

DEFLABEL (label_206)
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_6]), 2);

DEFLABEL (label_207)
  if (! ((Wrd48.uLng) == 26))
    goto label_206;
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) (Wrd65.Lng)) < ((unsigned long) (Wrd69.Lng))))
    goto label_206;
  (Wrd61.pObj) = (& ((Wrd67.pObj) [(Wrd50.Lng)]));
  (Wrd56.Obj) = ((Wrd61.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_313)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_25]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = (Rsp [4]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if ((Wrd76.uLng) == 62)
    goto label_304;

DEFLABEL (label_303)
  (Wrd78.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd77.Obj) = ((Wrd78.pObj) [0]);
  (Wrd81.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd82.Obj) = (Rsp [4]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  (Wrd80.Obj) = (MAKE_OBJECT (26, (Wrd83.uLng)));
  (Wrd936.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd936.uLng) == 10))
    goto label_302;
  if (! ((Wrd81.uLng) == 26))
    goto label_302;
  (Wrd932.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  (Wrd933.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd934.Obj) = ((Wrd933.pObj) [0]);
  (Wrd935.Lng) = (FIXNUM_TO_LONG (Wrd934.Obj));
  if (! (((unsigned long) (Wrd932.Lng)) < ((unsigned long) (Wrd935.Lng))))
    goto label_302;
  (Wrd86.pObj) = (& ((Wrd933.pObj) [(Wrd83.Lng)]));
  (Wrd87.Obj) = ((Wrd86.pObj) [1]);
  if ((Wrd87.Obj) == ((SCHEME_OBJECT) 0))
    goto label_298;

DEFLABEL (label_297)
  (Wrd112.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd113.Obj) = (Rsp [4]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  (Wrd115.Obj) = (MAKE_OBJECT (26, (Wrd114.uLng)));
  (* (--Rsp)) = (Wrd115.Obj);
  (Wrd116.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd118.Obj) = ((Wrd116.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd135.uLng) == 10))
    goto label_206;
  if (! ((Wrd112.uLng) == 26))
    goto label_206;
  (Wrd129.Lng) = (FIXNUM_TO_LONG (Wrd115.Obj));
  (Wrd131.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd132.Obj) = ((Wrd131.pObj) [0]);
  (Wrd133.Lng) = (FIXNUM_TO_LONG (Wrd132.Obj));
  if (! (((unsigned long) (Wrd129.Lng)) < ((unsigned long) (Wrd133.Lng))))
    goto label_206;
  (Wrd125.pObj) = (& ((Wrd131.pObj) [(Wrd114.Lng)]));
  (Wrd120.Obj) = ((Wrd125.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd120.Obj);

DEFLABEL (label_296)
  (Wrd149.Obj) = (Rsp [3]);
  (Wrd150.pObj) = (OBJECT_ADDRESS (Wrd149.Obj));
  (Wrd151.Obj) = ((Wrd150.pObj) [2]);
  (Wrd152.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if (! ((Wrd152.uLng) == 62))
    goto label_295;
  (Wrd146.pObj) = (OBJECT_ADDRESS (Wrd151.Obj));
  (Wrd147.Obj) = ((Wrd146.pObj) [0]);
  (Wrd148.Lng) = (FIXNUM_TO_LONG (Wrd147.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd148.Lng))))
    goto label_295;
  (Wrd140.Obj) = ((Wrd146.pObj) [7]);
  (* (--Rsp)) = (Wrd140.Obj);

DEFLABEL (label_294)
  (Wrd169.Obj) = (Rsp [0]);
  (Wrd170.uLng) = (OBJECT_TYPE (Wrd169.Obj));
  if (! ((Wrd170.uLng) == 62))
    goto label_293;
  (Wrd166.pObj) = (OBJECT_ADDRESS (Wrd169.Obj));
  (Wrd167.Obj) = ((Wrd166.pObj) [0]);
  (Wrd168.Lng) = (FIXNUM_TO_LONG (Wrd167.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd168.Lng))))
    goto label_293;
  (Wrd162.Obj) = ((Wrd166.pObj) [3]);
  (* (--Rsp)) = (Wrd162.Obj);

DEFLABEL (label_292)
  (Wrd185.Obj) = (Rsp [1]);
  (Wrd186.uLng) = (OBJECT_TYPE (Wrd185.Obj));
  if (! ((Wrd186.uLng) == 62))
    goto label_291;
  (Wrd182.pObj) = (OBJECT_ADDRESS (Wrd185.Obj));
  (Wrd183.Obj) = ((Wrd182.pObj) [0]);
  (Wrd184.Lng) = (FIXNUM_TO_LONG (Wrd183.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd184.Lng))))
    goto label_291;
  (Wrd176.Obj) = ((Wrd182.pObj) [2]);

DEFLABEL (label_290)
  (Wrd203.Obj) = (Rsp [3]);
  (Wrd204.uLng) = (OBJECT_TYPE (Wrd203.Obj));
  if (! ((Wrd204.uLng) == 62))
    goto label_289;
  (Wrd197.uLng) = (OBJECT_TYPE (Wrd176.Obj));
  if (! ((Wrd197.uLng) == 26))
    goto label_289;
  (Wrd198.Lng) = (FIXNUM_TO_LONG (Wrd176.Obj));
  (Wrd200.pObj) = (OBJECT_ADDRESS (Wrd203.Obj));
  (Wrd201.Obj) = ((Wrd200.pObj) [0]);
  (Wrd202.Lng) = (FIXNUM_TO_LONG (Wrd201.Obj));
  if (! (((unsigned long) (Wrd198.Lng)) < ((unsigned long) (Wrd202.Lng))))
    goto label_289;
  (Wrd192.uLng) = (OBJECT_DATUM (Wrd176.Obj));
  (Wrd195.pObj) = (& ((Wrd200.pObj) [(Wrd192.Lng)]));
  (Wrd196.Obj) = ((Wrd195.pObj) [1]);
  (* (--Rsp)) = (Wrd196.Obj);

DEFLABEL (label_288)
  (Wrd219.Obj) = (Rsp [2]);
  (Wrd220.uLng) = (OBJECT_TYPE (Wrd219.Obj));
  if (! ((Wrd220.uLng) == 62))
    goto label_287;
  (Wrd216.pObj) = (OBJECT_ADDRESS (Wrd219.Obj));
  (Wrd217.Obj) = ((Wrd216.pObj) [0]);
  (Wrd218.Lng) = (FIXNUM_TO_LONG (Wrd217.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd218.Lng))))
    goto label_287;
  (Wrd210.Obj) = ((Wrd216.pObj) [2]);

DEFLABEL (label_286)
  (Wrd237.Obj) = (Rsp [3]);
  (Wrd238.uLng) = (OBJECT_TYPE (Wrd237.Obj));
  if (! ((Wrd238.uLng) == 62))
    goto label_285;
  (Wrd231.uLng) = (OBJECT_TYPE (Wrd210.Obj));
  if (! ((Wrd231.uLng) == 26))
    goto label_285;
  (Wrd232.Lng) = (FIXNUM_TO_LONG (Wrd210.Obj));
  (Wrd234.pObj) = (OBJECT_ADDRESS (Wrd237.Obj));
  (Wrd235.Obj) = ((Wrd234.pObj) [0]);
  (Wrd236.Lng) = (FIXNUM_TO_LONG (Wrd235.Obj));
  if (! (((unsigned long) (Wrd232.Lng)) < ((unsigned long) (Wrd236.Lng))))
    goto label_285;
  (Wrd227.uLng) = (OBJECT_DATUM (Wrd210.Obj));
  (Wrd230.pObj) = (& ((Wrd234.pObj) [(Wrd227.Lng)]));
  (Wrd226.Obj) = ((Wrd230.pObj) [1]);

DEFLABEL (label_284)
  (Wrd244.Obj) = (* (Rsp++));
  (Wrd246.Lng) = (FIXNUM_TO_LONG (Wrd226.Obj));
  (Wrd247.Lng) = (FIXNUM_TO_LONG (Wrd244.Obj));
  (Wrd248.Lng) = ((Wrd246.Lng) + (Wrd247.Lng));
  (Wrd249.Obj) = (* (Rsp++));
  Wrd250 = Wrd248;
  (Wrd251.Lng) = (FIXNUM_TO_LONG (Wrd249.Obj));
  (Wrd252.Lng) = ((Wrd250.Lng) & (Wrd251.Lng));
  (Wrd253.Obj) = (LONG_TO_FIXNUM (Wrd252.Lng));
  (* (--Rsp)) = (Wrd253.Obj);
  (Wrd263.Obj) = (Rsp [1]);
  (Wrd264.uLng) = (OBJECT_TYPE (Wrd263.Obj));
  if (! ((Wrd264.uLng) == 62))
    goto label_283;
  (Wrd260.pObj) = (OBJECT_ADDRESS (Wrd263.Obj));
  (Wrd261.Obj) = ((Wrd260.pObj) [0]);
  (Wrd262.Lng) = (FIXNUM_TO_LONG (Wrd261.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd262.Lng))))
    goto label_283;
  (Wrd254.Obj) = ((Wrd260.pObj) [6]);

DEFLABEL (label_282)
  (Wrd270.Obj) = (* (Rsp++));
  (Wrd924.uLng) = (OBJECT_TYPE (Wrd254.Obj));
  if (! ((Wrd924.uLng) == 10))
    goto label_281;
  (Wrd919.uLng) = (OBJECT_TYPE (Wrd270.Obj));
  if (! ((Wrd919.uLng) == 26))
    goto label_281;
  (Wrd920.Lng) = (FIXNUM_TO_LONG (Wrd270.Obj));
  (Wrd921.pObj) = (OBJECT_ADDRESS (Wrd254.Obj));
  (Wrd922.Obj) = ((Wrd921.pObj) [0]);
  (Wrd923.Lng) = (FIXNUM_TO_LONG (Wrd922.Obj));
  if (! (((unsigned long) (Wrd920.Lng)) < ((unsigned long) (Wrd923.Lng))))
    goto label_281;
  (Wrd271.uLng) = (OBJECT_DATUM (Wrd270.Obj));
  (Wrd273.pObj) = (& ((Wrd921.pObj) [(Wrd271.Lng)]));
  (Wrd274.Obj) = ((Wrd273.pObj) [1]);
  if ((Wrd274.Obj) == ((SCHEME_OBJECT) 0))
    goto label_236;

DEFLABEL (label_280)
  (Wrd523.Obj) = (Rsp [0]);
  (Wrd524.uLng) = (OBJECT_TYPE (Wrd523.Obj));
  if (! ((Wrd524.uLng) == 62))
    goto label_279;
  (Wrd520.pObj) = (OBJECT_ADDRESS (Wrd523.Obj));
  (Wrd521.Obj) = ((Wrd520.pObj) [0]);
  (Wrd522.Lng) = (FIXNUM_TO_LONG (Wrd521.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd522.Lng))))
    goto label_279;
  (Wrd516.Obj) = ((Wrd520.pObj) [3]);
  (* (--Rsp)) = (Wrd516.Obj);

DEFLABEL (label_278)
  (Wrd539.Obj) = (Rsp [1]);
  (Wrd540.uLng) = (OBJECT_TYPE (Wrd539.Obj));
  if (! ((Wrd540.uLng) == 62))
    goto label_277;
  (Wrd536.pObj) = (OBJECT_ADDRESS (Wrd539.Obj));
  (Wrd537.Obj) = ((Wrd536.pObj) [0]);
  (Wrd538.Lng) = (FIXNUM_TO_LONG (Wrd537.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd538.Lng))))
    goto label_277;
  (Wrd530.Obj) = ((Wrd536.pObj) [2]);

DEFLABEL (label_276)
  (Wrd557.Obj) = (Rsp [3]);
  (Wrd558.uLng) = (OBJECT_TYPE (Wrd557.Obj));
  if (! ((Wrd558.uLng) == 62))
    goto label_275;
  (Wrd551.uLng) = (OBJECT_TYPE (Wrd530.Obj));
  if (! ((Wrd551.uLng) == 26))
    goto label_275;
  (Wrd552.Lng) = (FIXNUM_TO_LONG (Wrd530.Obj));
  (Wrd554.pObj) = (OBJECT_ADDRESS (Wrd557.Obj));
  (Wrd555.Obj) = ((Wrd554.pObj) [0]);
  (Wrd556.Lng) = (FIXNUM_TO_LONG (Wrd555.Obj));
  if (! (((unsigned long) (Wrd552.Lng)) < ((unsigned long) (Wrd556.Lng))))
    goto label_275;
  (Wrd546.uLng) = (OBJECT_DATUM (Wrd530.Obj));
  (Wrd549.pObj) = (& ((Wrd554.pObj) [(Wrd546.Lng)]));
  (Wrd550.Obj) = ((Wrd549.pObj) [1]);
  (* (--Rsp)) = (Wrd550.Obj);

DEFLABEL (label_274)
  (Wrd573.Obj) = (Rsp [2]);
  (Wrd574.uLng) = (OBJECT_TYPE (Wrd573.Obj));
  if (! ((Wrd574.uLng) == 62))
    goto label_273;
  (Wrd570.pObj) = (OBJECT_ADDRESS (Wrd573.Obj));
  (Wrd571.Obj) = ((Wrd570.pObj) [0]);
  (Wrd572.Lng) = (FIXNUM_TO_LONG (Wrd571.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd572.Lng))))
    goto label_273;
  (Wrd564.Obj) = ((Wrd570.pObj) [2]);

DEFLABEL (label_272)
  (Wrd591.Obj) = (Rsp [3]);
  (Wrd592.uLng) = (OBJECT_TYPE (Wrd591.Obj));
  if (! ((Wrd592.uLng) == 62))
    goto label_271;
  (Wrd585.uLng) = (OBJECT_TYPE (Wrd564.Obj));
  if (! ((Wrd585.uLng) == 26))
    goto label_271;
  (Wrd586.Lng) = (FIXNUM_TO_LONG (Wrd564.Obj));
  (Wrd588.pObj) = (OBJECT_ADDRESS (Wrd591.Obj));
  (Wrd589.Obj) = ((Wrd588.pObj) [0]);
  (Wrd590.Lng) = (FIXNUM_TO_LONG (Wrd589.Obj));
  if (! (((unsigned long) (Wrd586.Lng)) < ((unsigned long) (Wrd590.Lng))))
    goto label_271;
  (Wrd581.uLng) = (OBJECT_DATUM (Wrd564.Obj));
  (Wrd584.pObj) = (& ((Wrd588.pObj) [(Wrd581.Lng)]));
  (Wrd580.Obj) = ((Wrd584.pObj) [1]);

DEFLABEL (label_270)
  (Wrd598.Obj) = (* (Rsp++));
  (Wrd600.Lng) = (FIXNUM_TO_LONG (Wrd580.Obj));
  (Wrd601.Lng) = (FIXNUM_TO_LONG (Wrd598.Obj));
  (Wrd602.Lng) = ((Wrd600.Lng) + (Wrd601.Lng));
  (Wrd603.Obj) = (* (Rsp++));
  Wrd604 = Wrd602;
  (Wrd605.Lng) = (FIXNUM_TO_LONG (Wrd603.Obj));
  (Wrd606.Lng) = ((Wrd604.Lng) & (Wrd605.Lng));
  (Wrd607.Obj) = (LONG_TO_FIXNUM (Wrd606.Lng));
  (* (--Rsp)) = (Wrd607.Obj);
  (Wrd617.Obj) = (Rsp [1]);
  (Wrd618.uLng) = (OBJECT_TYPE (Wrd617.Obj));
  if (! ((Wrd618.uLng) == 62))
    goto label_269;
  (Wrd614.pObj) = (OBJECT_ADDRESS (Wrd617.Obj));
  (Wrd615.Obj) = ((Wrd614.pObj) [0]);
  (Wrd616.Lng) = (FIXNUM_TO_LONG (Wrd615.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd616.Lng))))
    goto label_269;
  (Wrd608.Obj) = ((Wrd614.pObj) [6]);

DEFLABEL (label_268)
  (Wrd624.Obj) = (* (Rsp++));
  (Wrd634.uLng) = (OBJECT_TYPE (Wrd608.Obj));
  if (! ((Wrd634.uLng) == 10))
    goto label_267;
  (Wrd629.uLng) = (OBJECT_TYPE (Wrd624.Obj));
  if (! ((Wrd629.uLng) == 26))
    goto label_267;
  (Wrd630.Lng) = (FIXNUM_TO_LONG (Wrd624.Obj));
  (Wrd631.pObj) = (OBJECT_ADDRESS (Wrd608.Obj));
  (Wrd632.Obj) = ((Wrd631.pObj) [0]);
  (Wrd633.Lng) = (FIXNUM_TO_LONG (Wrd632.Obj));
  if (! (((unsigned long) (Wrd630.Lng)) < ((unsigned long) (Wrd633.Lng))))
    goto label_267;
  (Wrd626.uLng) = (OBJECT_DATUM (Wrd624.Obj));
  (Wrd628.pObj) = (& ((Wrd631.pObj) [(Wrd626.Lng)]));
  (Wrd625.Obj) = ((Wrd628.pObj) [1]);

DEFLABEL (label_266)
  (Wrd641.pObj) = (OBJECT_ADDRESS (Wrd625.Obj));
  (Wrd640.Obj) = ((Wrd641.pObj) [0]);
  (Wrd642.Obj) = (Rsp [1]);
  if ((Wrd642.Obj) == (Wrd640.Obj))
    goto label_237;

DEFLABEL (label_236)
  (Wrd285.Obj) = (Rsp [0]);
  (Wrd286.uLng) = (OBJECT_TYPE (Wrd285.Obj));
  if (! ((Wrd286.uLng) == 62))
    goto label_235;
  (Wrd282.pObj) = (OBJECT_ADDRESS (Wrd285.Obj));
  (Wrd283.Obj) = ((Wrd282.pObj) [0]);
  (Wrd284.Lng) = (FIXNUM_TO_LONG (Wrd283.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd284.Lng))))
    goto label_235;
  (Wrd278.Obj) = ((Wrd282.pObj) [4]);
  (* (--Rsp)) = (Wrd278.Obj);

DEFLABEL (label_234)
  (Wrd292.Obj) = (current_block [OBJECT_30_9]);
  (* (--Rsp)) = (Wrd292.Obj);
  (Wrd302.Obj) = (Rsp [2]);
  (Wrd303.uLng) = (OBJECT_TYPE (Wrd302.Obj));
  if (! ((Wrd303.uLng) == 62))
    goto label_233;
  (Wrd299.pObj) = (OBJECT_ADDRESS (Wrd302.Obj));
  (Wrd300.Obj) = ((Wrd299.pObj) [0]);
  (Wrd301.Lng) = (FIXNUM_TO_LONG (Wrd300.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd301.Lng))))
    goto label_233;
  (Wrd293.Obj) = ((Wrd299.pObj) [6]);

DEFLABEL (label_232)
  (Wrd313.uLng) = (OBJECT_TYPE (Wrd293.Obj));
  if (! ((Wrd313.uLng) == 10))
    goto label_231;
  (Wrd310.pObj) = (OBJECT_ADDRESS (Wrd293.Obj));
  (Wrd311.Obj) = ((Wrd310.pObj) [0]);
  (Wrd312.Obj) = (MAKE_OBJECT (26, (Wrd311.uLng)));
  (* (--Rsp)) = (Wrd312.Obj);

DEFLABEL (label_230)
  (Wrd327.Obj) = (Rsp [3]);
  (Wrd328.uLng) = (OBJECT_TYPE (Wrd327.Obj));
  if (! ((Wrd328.uLng) == 62))
    goto label_229;
  (Wrd324.pObj) = (OBJECT_ADDRESS (Wrd327.Obj));
  (Wrd325.Obj) = ((Wrd324.pObj) [0]);
  (Wrd326.Lng) = (FIXNUM_TO_LONG (Wrd325.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd326.Lng))))
    goto label_229;
  (Wrd320.Obj) = ((Wrd324.pObj) [3]);
  (* (--Rsp)) = (Wrd320.Obj);

DEFLABEL (label_228)
  (Wrd343.Obj) = (Rsp [4]);
  (Wrd344.uLng) = (OBJECT_TYPE (Wrd343.Obj));
  if (! ((Wrd344.uLng) == 62))
    goto label_227;
  (Wrd340.pObj) = (OBJECT_ADDRESS (Wrd343.Obj));
  (Wrd341.Obj) = ((Wrd340.pObj) [0]);
  (Wrd342.Lng) = (FIXNUM_TO_LONG (Wrd341.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd342.Lng))))
    goto label_227;
  (Wrd334.Obj) = ((Wrd340.pObj) [2]);

DEFLABEL (label_226)
  (Wrd361.Obj) = (Rsp [6]);
  (Wrd362.uLng) = (OBJECT_TYPE (Wrd361.Obj));
  if (! ((Wrd362.uLng) == 62))
    goto label_225;
  (Wrd355.uLng) = (OBJECT_TYPE (Wrd334.Obj));
  if (! ((Wrd355.uLng) == 26))
    goto label_225;
  (Wrd356.Lng) = (FIXNUM_TO_LONG (Wrd334.Obj));
  (Wrd358.pObj) = (OBJECT_ADDRESS (Wrd361.Obj));
  (Wrd359.Obj) = ((Wrd358.pObj) [0]);
  (Wrd360.Lng) = (FIXNUM_TO_LONG (Wrd359.Obj));
  if (! (((unsigned long) (Wrd356.Lng)) < ((unsigned long) (Wrd360.Lng))))
    goto label_225;
  (Wrd350.uLng) = (OBJECT_DATUM (Wrd334.Obj));
  (Wrd353.pObj) = (& ((Wrd358.pObj) [(Wrd350.Lng)]));
  (Wrd354.Obj) = ((Wrd353.pObj) [1]);
  (* (--Rsp)) = (Wrd354.Obj);

DEFLABEL (label_224)
  (Wrd377.Obj) = (Rsp [5]);
  (Wrd378.uLng) = (OBJECT_TYPE (Wrd377.Obj));
  if (! ((Wrd378.uLng) == 62))
    goto label_223;
  (Wrd374.pObj) = (OBJECT_ADDRESS (Wrd377.Obj));
  (Wrd375.Obj) = ((Wrd374.pObj) [0]);
  (Wrd376.Lng) = (FIXNUM_TO_LONG (Wrd375.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd376.Lng))))
    goto label_223;
  (Wrd368.Obj) = ((Wrd374.pObj) [2]);

DEFLABEL (label_222)
  (Wrd395.Obj) = (Rsp [6]);
  (Wrd396.uLng) = (OBJECT_TYPE (Wrd395.Obj));
  if (! ((Wrd396.uLng) == 62))
    goto label_221;
  (Wrd389.uLng) = (OBJECT_TYPE (Wrd368.Obj));
  if (! ((Wrd389.uLng) == 26))
    goto label_221;
  (Wrd390.Lng) = (FIXNUM_TO_LONG (Wrd368.Obj));
  (Wrd392.pObj) = (OBJECT_ADDRESS (Wrd395.Obj));
  (Wrd393.Obj) = ((Wrd392.pObj) [0]);
  (Wrd394.Lng) = (FIXNUM_TO_LONG (Wrd393.Obj));
  if (! (((unsigned long) (Wrd390.Lng)) < ((unsigned long) (Wrd394.Lng))))
    goto label_221;
  (Wrd385.uLng) = (OBJECT_DATUM (Wrd368.Obj));
  (Wrd388.pObj) = (& ((Wrd392.pObj) [(Wrd385.Lng)]));
  (Wrd384.Obj) = ((Wrd388.pObj) [1]);

DEFLABEL (label_220)
  (Wrd402.Obj) = (* (Rsp++));
  (Wrd404.Lng) = (FIXNUM_TO_LONG (Wrd384.Obj));
  (Wrd405.Lng) = (FIXNUM_TO_LONG (Wrd402.Obj));
  (Wrd406.Lng) = ((Wrd404.Lng) + (Wrd405.Lng));
  (Wrd407.Obj) = (* (Rsp++));
  Wrd409 = Wrd406;
  (Wrd410.Lng) = (FIXNUM_TO_LONG (Wrd407.Obj));
  (Wrd413.Lng) = ((Wrd409.Lng) & (Wrd410.Lng));
  (Wrd414.Lng) = ((Wrd413.Lng) + 1L);
  (Wrd412.Obj) = (LONG_TO_FIXNUM (Wrd414.Lng));
  (Wrd415.Obj) = (* (Rsp++));
  if ((Wrd412.Obj) == (Wrd415.Obj))
    goto label_219;
  (Wrd425.Obj) = (Rsp [2]);
  (Wrd426.uLng) = (OBJECT_TYPE (Wrd425.Obj));
  if (! ((Wrd426.uLng) == 62))
    goto label_218;
  (Wrd422.pObj) = (OBJECT_ADDRESS (Wrd425.Obj));
  (Wrd423.Obj) = ((Wrd422.pObj) [0]);
  (Wrd424.Lng) = (FIXNUM_TO_LONG (Wrd423.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd424.Lng))))
    goto label_218;
  (Wrd418.Obj) = ((Wrd422.pObj) [3]);
  (* (--Rsp)) = (Wrd418.Obj);

DEFLABEL (label_217)
  (Wrd441.Obj) = (Rsp [3]);
  (Wrd442.uLng) = (OBJECT_TYPE (Wrd441.Obj));
  if (! ((Wrd442.uLng) == 62))
    goto label_216;
  (Wrd438.pObj) = (OBJECT_ADDRESS (Wrd441.Obj));
  (Wrd439.Obj) = ((Wrd438.pObj) [0]);
  (Wrd440.Lng) = (FIXNUM_TO_LONG (Wrd439.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd440.Lng))))
    goto label_216;
  (Wrd432.Obj) = ((Wrd438.pObj) [2]);

DEFLABEL (label_215)
  (Wrd459.Obj) = (Rsp [5]);
  (Wrd460.uLng) = (OBJECT_TYPE (Wrd459.Obj));
  if (! ((Wrd460.uLng) == 62))
    goto label_214;
  (Wrd453.uLng) = (OBJECT_TYPE (Wrd432.Obj));
  if (! ((Wrd453.uLng) == 26))
    goto label_214;
  (Wrd454.Lng) = (FIXNUM_TO_LONG (Wrd432.Obj));
  (Wrd456.pObj) = (OBJECT_ADDRESS (Wrd459.Obj));
  (Wrd457.Obj) = ((Wrd456.pObj) [0]);
  (Wrd458.Lng) = (FIXNUM_TO_LONG (Wrd457.Obj));
  if (! (((unsigned long) (Wrd454.Lng)) < ((unsigned long) (Wrd458.Lng))))
    goto label_214;
  (Wrd448.uLng) = (OBJECT_DATUM (Wrd432.Obj));
  (Wrd451.pObj) = (& ((Wrd456.pObj) [(Wrd448.Lng)]));
  (Wrd452.Obj) = ((Wrd451.pObj) [1]);
  (* (--Rsp)) = (Wrd452.Obj);

DEFLABEL (label_213)
  (Wrd475.Obj) = (Rsp [4]);
  (Wrd476.uLng) = (OBJECT_TYPE (Wrd475.Obj));
  if (! ((Wrd476.uLng) == 62))
    goto label_212;
  (Wrd472.pObj) = (OBJECT_ADDRESS (Wrd475.Obj));
  (Wrd473.Obj) = ((Wrd472.pObj) [0]);
  (Wrd474.Lng) = (FIXNUM_TO_LONG (Wrd473.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd474.Lng))))
    goto label_212;
  (Wrd466.Obj) = ((Wrd472.pObj) [2]);

DEFLABEL (label_211)
  (Wrd493.Obj) = (Rsp [5]);
  (Wrd494.uLng) = (OBJECT_TYPE (Wrd493.Obj));
  if (! ((Wrd494.uLng) == 62))
    goto label_210;
  (Wrd487.uLng) = (OBJECT_TYPE (Wrd466.Obj));
  if (! ((Wrd487.uLng) == 26))
    goto label_210;
  (Wrd488.Lng) = (FIXNUM_TO_LONG (Wrd466.Obj));
  (Wrd490.pObj) = (OBJECT_ADDRESS (Wrd493.Obj));
  (Wrd491.Obj) = ((Wrd490.pObj) [0]);
  (Wrd492.Lng) = (FIXNUM_TO_LONG (Wrd491.Obj));
  if (! (((unsigned long) (Wrd488.Lng)) < ((unsigned long) (Wrd492.Lng))))
    goto label_210;
  (Wrd483.uLng) = (OBJECT_DATUM (Wrd466.Obj));
  (Wrd486.pObj) = (& ((Wrd490.pObj) [(Wrd483.Lng)]));
  (Wrd482.Obj) = ((Wrd486.pObj) [1]);

DEFLABEL (label_209)
  (Wrd500.Obj) = (* (Rsp++));
  (Wrd502.Lng) = (FIXNUM_TO_LONG (Wrd482.Obj));
  (Wrd503.Lng) = (FIXNUM_TO_LONG (Wrd500.Obj));
  (Wrd504.Lng) = ((Wrd502.Lng) + (Wrd503.Lng));
  (Wrd505.Obj) = (* (Rsp++));
  Wrd507 = Wrd504;
  (Wrd508.Lng) = (FIXNUM_TO_LONG (Wrd505.Obj));
  (Wrd510.Lng) = ((Wrd507.Lng) & (Wrd508.Lng));
  (Wrd511.Lng) = ((Wrd510.Lng) + 1L);
  (Wrd512.Obj) = (LONG_TO_FIXNUM (Wrd511.Lng));
  (* (--Rsp)) = (Wrd512.Obj);

DEFLABEL (label_208)
  goto search_lines_116;

DEFLABEL (label_210)
  (Wrd495.Obj) = (Rsp [5]);
  (Wrd499.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_79]))));
  (* (--Rsp)) = (Wrd499.Obj);
  (* (--Rsp)) = (Wrd466.Obj);
  (* (--Rsp)) = (Wrd495.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_155)
  (Wrd482.Obj) = Rvl;
  goto label_209;

DEFLABEL (label_212)
  (Wrd477.Obj) = (Rsp [4]);
  (Wrd478.Obj) = (current_block [OBJECT_30_12]);
  (Wrd481.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_78]))));
  (* (--Rsp)) = (Wrd481.Obj);
  (* (--Rsp)) = (Wrd478.Obj);
  (* (--Rsp)) = (Wrd477.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_154)
  (Wrd466.Obj) = Rvl;
  goto label_211;

DEFLABEL (label_214)
  (Wrd461.Obj) = (Rsp [5]);
  (Wrd465.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_77]))));
  (* (--Rsp)) = (Wrd465.Obj);
  (* (--Rsp)) = (Wrd432.Obj);
  (* (--Rsp)) = (Wrd461.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_153)
  (* (--Rsp)) = Rvl;
  goto label_213;

DEFLABEL (label_216)
  (Wrd443.Obj) = (Rsp [3]);
  (Wrd444.Obj) = (current_block [OBJECT_30_12]);
  (Wrd447.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_76]))));
  (* (--Rsp)) = (Wrd447.Obj);
  (* (--Rsp)) = (Wrd444.Obj);
  (* (--Rsp)) = (Wrd443.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_152)
  (Wrd432.Obj) = Rvl;
  goto label_215;

DEFLABEL (label_218)
  (Wrd427.Obj) = (Rsp [2]);
  (Wrd428.Obj) = (current_block [OBJECT_30_11]);
  (Wrd431.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_75]))));
  (* (--Rsp)) = (Wrd431.Obj);
  (* (--Rsp)) = (Wrd428.Obj);
  (* (--Rsp)) = (Wrd427.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_151)
  (* (--Rsp)) = Rvl;
  goto label_217;

DEFLABEL (label_219)
  (Wrd513.Obj) = (current_block [OBJECT_30_9]);
  (* (--Rsp)) = (Wrd513.Obj);
  goto label_208;

DEFLABEL (label_221)
  (Wrd397.Obj) = (Rsp [6]);
  (Wrd401.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_74]))));
  (* (--Rsp)) = (Wrd401.Obj);
  (* (--Rsp)) = (Wrd368.Obj);
  (* (--Rsp)) = (Wrd397.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_150)
  (Wrd384.Obj) = Rvl;
  goto label_220;

DEFLABEL (label_223)
  (Wrd379.Obj) = (Rsp [5]);
  (Wrd380.Obj) = (current_block [OBJECT_30_12]);
  (Wrd383.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_73]))));
  (* (--Rsp)) = (Wrd383.Obj);
  (* (--Rsp)) = (Wrd380.Obj);
  (* (--Rsp)) = (Wrd379.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_149)
  (Wrd368.Obj) = Rvl;
  goto label_222;

DEFLABEL (label_225)
  (Wrd363.Obj) = (Rsp [6]);
  (Wrd367.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_72]))));
  (* (--Rsp)) = (Wrd367.Obj);
  (* (--Rsp)) = (Wrd334.Obj);
  (* (--Rsp)) = (Wrd363.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_148)
  (* (--Rsp)) = Rvl;
  goto label_224;

DEFLABEL (label_227)
  (Wrd345.Obj) = (Rsp [4]);
  (Wrd346.Obj) = (current_block [OBJECT_30_12]);
  (Wrd349.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_71]))));
  (* (--Rsp)) = (Wrd349.Obj);
  (* (--Rsp)) = (Wrd346.Obj);
  (* (--Rsp)) = (Wrd345.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_147)
  (Wrd334.Obj) = Rvl;
  goto label_226;

DEFLABEL (label_229)
  (Wrd329.Obj) = (Rsp [3]);
  (Wrd330.Obj) = (current_block [OBJECT_30_11]);
  (Wrd333.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_70]))));
  (* (--Rsp)) = (Wrd333.Obj);
  (* (--Rsp)) = (Wrd330.Obj);
  (* (--Rsp)) = (Wrd329.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_146)
  (* (--Rsp)) = Rvl;
  goto label_228;

DEFLABEL (label_231)
  (Wrd317.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_69]))));
  (* (--Rsp)) = (Wrd317.Obj);
  (* (--Rsp)) = (Wrd293.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_8]), 1);

DEFLABEL (label_145)
  (* (--Rsp)) = Rvl;
  goto label_230;

DEFLABEL (label_233)
  (Wrd304.Obj) = (Rsp [2]);
  (Wrd305.Obj) = (current_block [OBJECT_30_5]);
  (Wrd308.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_68]))));
  (* (--Rsp)) = (Wrd308.Obj);
  (* (--Rsp)) = (Wrd305.Obj);
  (* (--Rsp)) = (Wrd304.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_144)
  (Wrd293.Obj) = Rvl;
  goto label_232;

DEFLABEL (label_235)
  (Wrd287.Obj) = (Rsp [0]);
  (Wrd288.Obj) = (current_block [OBJECT_30_13]);
  (Wrd291.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_67]))));
  (* (--Rsp)) = (Wrd291.Obj);
  (* (--Rsp)) = (Wrd288.Obj);
  (* (--Rsp)) = (Wrd287.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_143)
  (* (--Rsp)) = Rvl;
  goto label_234;

DEFLABEL (label_237)
  (Wrd652.Obj) = (Rsp [0]);
  (Wrd653.uLng) = (OBJECT_TYPE (Wrd652.Obj));
  if (! ((Wrd653.uLng) == 62))
    goto label_265;
  (Wrd649.pObj) = (OBJECT_ADDRESS (Wrd652.Obj));
  (Wrd650.Obj) = ((Wrd649.pObj) [0]);
  (Wrd651.Lng) = (FIXNUM_TO_LONG (Wrd650.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd651.Lng))))
    goto label_265;
  (Wrd645.Obj) = ((Wrd649.pObj) [3]);
  (* (--Rsp)) = (Wrd645.Obj);

DEFLABEL (label_264)
  (Wrd668.Obj) = (Rsp [1]);
  (Wrd669.uLng) = (OBJECT_TYPE (Wrd668.Obj));
  if (! ((Wrd669.uLng) == 62))
    goto label_263;
  (Wrd665.pObj) = (OBJECT_ADDRESS (Wrd668.Obj));
  (Wrd666.Obj) = ((Wrd665.pObj) [0]);
  (Wrd667.Lng) = (FIXNUM_TO_LONG (Wrd666.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd667.Lng))))
    goto label_263;
  (Wrd659.Obj) = ((Wrd665.pObj) [2]);

DEFLABEL (label_262)
  (Wrd686.Obj) = (Rsp [3]);
  (Wrd687.uLng) = (OBJECT_TYPE (Wrd686.Obj));
  if (! ((Wrd687.uLng) == 62))
    goto label_261;
  (Wrd680.uLng) = (OBJECT_TYPE (Wrd659.Obj));
  if (! ((Wrd680.uLng) == 26))
    goto label_261;
  (Wrd681.Lng) = (FIXNUM_TO_LONG (Wrd659.Obj));
  (Wrd683.pObj) = (OBJECT_ADDRESS (Wrd686.Obj));
  (Wrd684.Obj) = ((Wrd683.pObj) [0]);
  (Wrd685.Lng) = (FIXNUM_TO_LONG (Wrd684.Obj));
  if (! (((unsigned long) (Wrd681.Lng)) < ((unsigned long) (Wrd685.Lng))))
    goto label_261;
  (Wrd675.uLng) = (OBJECT_DATUM (Wrd659.Obj));
  (Wrd678.pObj) = (& ((Wrd683.pObj) [(Wrd675.Lng)]));
  (Wrd679.Obj) = ((Wrd678.pObj) [1]);
  (* (--Rsp)) = (Wrd679.Obj);

DEFLABEL (label_260)
  (Wrd702.Obj) = (Rsp [2]);
  (Wrd703.uLng) = (OBJECT_TYPE (Wrd702.Obj));
  if (! ((Wrd703.uLng) == 62))
    goto label_259;
  (Wrd699.pObj) = (OBJECT_ADDRESS (Wrd702.Obj));
  (Wrd700.Obj) = ((Wrd699.pObj) [0]);
  (Wrd701.Lng) = (FIXNUM_TO_LONG (Wrd700.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd701.Lng))))
    goto label_259;
  (Wrd693.Obj) = ((Wrd699.pObj) [2]);

DEFLABEL (label_258)
  (Wrd720.Obj) = (Rsp [3]);
  (Wrd721.uLng) = (OBJECT_TYPE (Wrd720.Obj));
  if (! ((Wrd721.uLng) == 62))
    goto label_257;
  (Wrd714.uLng) = (OBJECT_TYPE (Wrd693.Obj));
  if (! ((Wrd714.uLng) == 26))
    goto label_257;
  (Wrd715.Lng) = (FIXNUM_TO_LONG (Wrd693.Obj));
  (Wrd717.pObj) = (OBJECT_ADDRESS (Wrd720.Obj));
  (Wrd718.Obj) = ((Wrd717.pObj) [0]);
  (Wrd719.Lng) = (FIXNUM_TO_LONG (Wrd718.Obj));
  if (! (((unsigned long) (Wrd715.Lng)) < ((unsigned long) (Wrd719.Lng))))
    goto label_257;
  (Wrd710.uLng) = (OBJECT_DATUM (Wrd693.Obj));
  (Wrd713.pObj) = (& ((Wrd717.pObj) [(Wrd710.Lng)]));
  (Wrd709.Obj) = ((Wrd713.pObj) [1]);

DEFLABEL (label_256)
  (Wrd727.Obj) = (* (Rsp++));
  (Wrd729.Lng) = (FIXNUM_TO_LONG (Wrd709.Obj));
  (Wrd730.Lng) = (FIXNUM_TO_LONG (Wrd727.Obj));
  (Wrd731.Lng) = ((Wrd729.Lng) + (Wrd730.Lng));
  (Wrd732.Obj) = (* (Rsp++));
  Wrd733 = Wrd731;
  (Wrd734.Lng) = (FIXNUM_TO_LONG (Wrd732.Obj));
  (Wrd735.Lng) = ((Wrd733.Lng) & (Wrd734.Lng));
  (Wrd736.Obj) = (LONG_TO_FIXNUM (Wrd735.Lng));
  (* (--Rsp)) = (Wrd736.Obj);
  (Wrd746.Obj) = (Rsp [1]);
  (Wrd747.uLng) = (OBJECT_TYPE (Wrd746.Obj));
  if (! ((Wrd747.uLng) == 62))
    goto label_255;
  (Wrd743.pObj) = (OBJECT_ADDRESS (Wrd746.Obj));
  (Wrd744.Obj) = ((Wrd743.pObj) [0]);
  (Wrd745.Lng) = (FIXNUM_TO_LONG (Wrd744.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd745.Lng))))
    goto label_255;
  (Wrd737.Obj) = ((Wrd743.pObj) [6]);

DEFLABEL (label_254)
  (Wrd753.Obj) = (* (Rsp++));
  (Wrd763.uLng) = (OBJECT_TYPE (Wrd737.Obj));
  if (! ((Wrd763.uLng) == 10))
    goto label_253;
  (Wrd758.uLng) = (OBJECT_TYPE (Wrd753.Obj));
  if (! ((Wrd758.uLng) == 26))
    goto label_253;
  (Wrd759.Lng) = (FIXNUM_TO_LONG (Wrd753.Obj));
  (Wrd760.pObj) = (OBJECT_ADDRESS (Wrd737.Obj));
  (Wrd761.Obj) = ((Wrd760.pObj) [0]);
  (Wrd762.Lng) = (FIXNUM_TO_LONG (Wrd761.Obj));
  if (! (((unsigned long) (Wrd759.Lng)) < ((unsigned long) (Wrd762.Lng))))
    goto label_253;
  (Wrd755.uLng) = (OBJECT_DATUM (Wrd753.Obj));
  (Wrd757.pObj) = (& ((Wrd760.pObj) [(Wrd755.Lng)]));
  (Wrd754.Obj) = ((Wrd757.pObj) [1]);

DEFLABEL (label_252)
  (Wrd770.pObj) = (OBJECT_ADDRESS (Wrd754.Obj));
  (Wrd769.Obj) = ((Wrd770.pObj) [1]);
  (Wrd772.pObj) = (OBJECT_ADDRESS (Wrd769.Obj));
  (Wrd771.Obj) = ((Wrd772.pObj) [0]);
  (Wrd773.Obj) = (Rsp [2]);
  if (! ((Wrd773.Obj) == (Wrd771.Obj)))
    goto label_236;
  (Wrd783.Obj) = (Rsp [0]);
  (Wrd784.uLng) = (OBJECT_TYPE (Wrd783.Obj));
  if (! ((Wrd784.uLng) == 62))
    goto label_251;
  (Wrd780.pObj) = (OBJECT_ADDRESS (Wrd783.Obj));
  (Wrd781.Obj) = ((Wrd780.pObj) [0]);
  (Wrd782.Lng) = (FIXNUM_TO_LONG (Wrd781.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd782.Lng))))
    goto label_251;
  (Wrd776.Obj) = ((Wrd780.pObj) [3]);
  (* (--Rsp)) = (Wrd776.Obj);

DEFLABEL (label_250)
  (Wrd799.Obj) = (Rsp [1]);
  (Wrd800.uLng) = (OBJECT_TYPE (Wrd799.Obj));
  if (! ((Wrd800.uLng) == 62))
    goto label_249;
  (Wrd796.pObj) = (OBJECT_ADDRESS (Wrd799.Obj));
  (Wrd797.Obj) = ((Wrd796.pObj) [0]);
  (Wrd798.Lng) = (FIXNUM_TO_LONG (Wrd797.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd798.Lng))))
    goto label_249;
  (Wrd790.Obj) = ((Wrd796.pObj) [2]);

DEFLABEL (label_248)
  (Wrd817.Obj) = (Rsp [3]);
  (Wrd818.uLng) = (OBJECT_TYPE (Wrd817.Obj));
  if (! ((Wrd818.uLng) == 62))
    goto label_247;
  (Wrd811.uLng) = (OBJECT_TYPE (Wrd790.Obj));
  if (! ((Wrd811.uLng) == 26))
    goto label_247;
  (Wrd812.Lng) = (FIXNUM_TO_LONG (Wrd790.Obj));
  (Wrd814.pObj) = (OBJECT_ADDRESS (Wrd817.Obj));
  (Wrd815.Obj) = ((Wrd814.pObj) [0]);
  (Wrd816.Lng) = (FIXNUM_TO_LONG (Wrd815.Obj));
  if (! (((unsigned long) (Wrd812.Lng)) < ((unsigned long) (Wrd816.Lng))))
    goto label_247;
  (Wrd806.uLng) = (OBJECT_DATUM (Wrd790.Obj));
  (Wrd809.pObj) = (& ((Wrd814.pObj) [(Wrd806.Lng)]));
  (Wrd810.Obj) = ((Wrd809.pObj) [1]);
  (* (--Rsp)) = (Wrd810.Obj);

DEFLABEL (label_246)
  (Wrd833.Obj) = (Rsp [2]);
  (Wrd834.uLng) = (OBJECT_TYPE (Wrd833.Obj));
  if (! ((Wrd834.uLng) == 62))
    goto label_245;
  (Wrd830.pObj) = (OBJECT_ADDRESS (Wrd833.Obj));
  (Wrd831.Obj) = ((Wrd830.pObj) [0]);
  (Wrd832.Lng) = (FIXNUM_TO_LONG (Wrd831.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd832.Lng))))
    goto label_245;
  (Wrd824.Obj) = ((Wrd830.pObj) [2]);

DEFLABEL (label_244)
  (Wrd851.Obj) = (Rsp [3]);
  (Wrd852.uLng) = (OBJECT_TYPE (Wrd851.Obj));
  if (! ((Wrd852.uLng) == 62))
    goto label_243;
  (Wrd845.uLng) = (OBJECT_TYPE (Wrd824.Obj));
  if (! ((Wrd845.uLng) == 26))
    goto label_243;
  (Wrd846.Lng) = (FIXNUM_TO_LONG (Wrd824.Obj));
  (Wrd848.pObj) = (OBJECT_ADDRESS (Wrd851.Obj));
  (Wrd849.Obj) = ((Wrd848.pObj) [0]);
  (Wrd850.Lng) = (FIXNUM_TO_LONG (Wrd849.Obj));
  if (! (((unsigned long) (Wrd846.Lng)) < ((unsigned long) (Wrd850.Lng))))
    goto label_243;
  (Wrd841.uLng) = (OBJECT_DATUM (Wrd824.Obj));
  (Wrd844.pObj) = (& ((Wrd848.pObj) [(Wrd841.Lng)]));
  (Wrd840.Obj) = ((Wrd844.pObj) [1]);

DEFLABEL (label_242)
  (Wrd858.Obj) = (* (Rsp++));
  (Wrd860.Lng) = (FIXNUM_TO_LONG (Wrd840.Obj));
  (Wrd861.Lng) = (FIXNUM_TO_LONG (Wrd858.Obj));
  (Wrd862.Lng) = ((Wrd860.Lng) + (Wrd861.Lng));
  (Wrd863.Obj) = (* (Rsp++));
  Wrd865 = Wrd862;
  (Wrd866.Lng) = (FIXNUM_TO_LONG (Wrd863.Obj));
  (Wrd867.Lng) = ((Wrd865.Lng) & (Wrd866.Lng));
  (Wrd864.Obj) = (LONG_TO_FIXNUM (Wrd867.Lng));
  (Rsp [2]) = (Wrd864.Obj);
  (Wrd877.Obj) = (Rsp [0]);
  (Wrd878.uLng) = (OBJECT_TYPE (Wrd877.Obj));
  if (! ((Wrd878.uLng) == 62))
    goto label_241;
  (Wrd874.pObj) = (OBJECT_ADDRESS (Wrd877.Obj));
  (Wrd875.Obj) = ((Wrd874.pObj) [0]);
  (Wrd876.Lng) = (FIXNUM_TO_LONG (Wrd875.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd876.Lng))))
    goto label_241;
  (Wrd868.Obj) = ((Wrd874.pObj) [7]);

DEFLABEL (label_240)
  (Rsp [1]) = (Wrd868.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd899.Obj) = (Rsp [0]);
  (Wrd900.uLng) = (OBJECT_TYPE (Wrd899.Obj));
  if (! ((Wrd900.uLng) == 10))
    goto label_206;
  (Wrd891.Obj) = (Rsp [1]);
  (Wrd892.uLng) = (OBJECT_TYPE (Wrd891.Obj));
  if (! ((Wrd892.uLng) == 26))
    goto label_206;
  (Wrd894.Lng) = (FIXNUM_TO_LONG (Wrd891.Obj));
  (Wrd896.pObj) = (OBJECT_ADDRESS (Wrd899.Obj));
  (Wrd897.Obj) = ((Wrd896.pObj) [0]);
  (Wrd898.Lng) = (FIXNUM_TO_LONG (Wrd897.Obj));
  if (! (((unsigned long) (Wrd894.Lng)) < ((unsigned long) (Wrd898.Lng))))
    goto label_206;
  (Wrd887.uLng) = (OBJECT_DATUM (Wrd891.Obj));
  (Wrd890.pObj) = (& ((Wrd896.pObj) [(Wrd887.Lng)]));
  (Wrd885.Obj) = ((Wrd890.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd885.Obj);

DEFLABEL (label_239)
  (Wrd901.Obj) = (Rsp [0]);
  if ((Wrd901.Obj) == ((SCHEME_OBJECT) 0))
    goto label_238;
  (Rsp [1]) = (Wrd901.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_238)
  (Wrd908.Obj) = (Rsp [3]);
  (Wrd909.Obj) = (current_block [OBJECT_30_0]);
  (* (Rhp++)) = (Wrd908.Obj);
  (* (Rhp++)) = (Wrd909.Obj);
  (Wrd907.pObj) = (& (Rhp [-2]));
  (Wrd905.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd907.pObj)));
  (Wrd913.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd913.Obj);
  (* (Rhp++)) = (Wrd905.Obj);
  (Wrd912.pObj) = (& (Rhp [-2]));
  (Wrd910.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd912.pObj)));
  (Rsp [3]) = (Wrd910.Obj);
  (Wrd915.Obj) = (Rsp [1]);
  (Wrd916.pObj) = (OBJECT_ADDRESS (Wrd915.Obj));
  (Wrd914.Obj) = ((Wrd916.pObj) [2]);
  (Rsp [2]) = (Wrd914.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_66]));

DEFLABEL (label_241)
  (Wrd879.Obj) = (Rsp [0]);
  (Wrd880.Obj) = (current_block [OBJECT_30_7]);
  (Wrd883.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_65]))));
  (* (--Rsp)) = (Wrd883.Obj);
  (* (--Rsp)) = (Wrd880.Obj);
  (* (--Rsp)) = (Wrd879.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_175)
  (Wrd868.Obj) = Rvl;
  goto label_240;

DEFLABEL (label_243)
  (Wrd853.Obj) = (Rsp [3]);
  (Wrd857.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_64]))));
  (* (--Rsp)) = (Wrd857.Obj);
  (* (--Rsp)) = (Wrd824.Obj);
  (* (--Rsp)) = (Wrd853.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_174)
  (Wrd840.Obj) = Rvl;
  goto label_242;

DEFLABEL (label_245)
  (Wrd835.Obj) = (Rsp [2]);
  (Wrd836.Obj) = (current_block [OBJECT_30_12]);
  (Wrd839.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_63]))));
  (* (--Rsp)) = (Wrd839.Obj);
  (* (--Rsp)) = (Wrd836.Obj);
  (* (--Rsp)) = (Wrd835.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_173)
  (Wrd824.Obj) = Rvl;
  goto label_244;

DEFLABEL (label_247)
  (Wrd819.Obj) = (Rsp [3]);
  (Wrd823.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_62]))));
  (* (--Rsp)) = (Wrd823.Obj);
  (* (--Rsp)) = (Wrd790.Obj);
  (* (--Rsp)) = (Wrd819.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_172)
  (* (--Rsp)) = Rvl;
  goto label_246;

DEFLABEL (label_249)
  (Wrd801.Obj) = (Rsp [1]);
  (Wrd802.Obj) = (current_block [OBJECT_30_12]);
  (Wrd805.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_61]))));
  (* (--Rsp)) = (Wrd805.Obj);
  (* (--Rsp)) = (Wrd802.Obj);
  (* (--Rsp)) = (Wrd801.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_171)
  (Wrd790.Obj) = Rvl;
  goto label_248;

DEFLABEL (label_251)
  (Wrd785.Obj) = (Rsp [0]);
  (Wrd786.Obj) = (current_block [OBJECT_30_11]);
  (Wrd789.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_60]))));
  (* (--Rsp)) = (Wrd789.Obj);
  (* (--Rsp)) = (Wrd786.Obj);
  (* (--Rsp)) = (Wrd785.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_170)
  (* (--Rsp)) = Rvl;
  goto label_250;

DEFLABEL (label_253)
  (Wrd768.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_59]))));
  (* (--Rsp)) = (Wrd768.Obj);
  (* (--Rsp)) = (Wrd753.Obj);
  (* (--Rsp)) = (Wrd737.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_6]), 2);

DEFLABEL (label_169)
  (Wrd754.Obj) = Rvl;
  goto label_252;

DEFLABEL (label_255)
  (Wrd748.Obj) = (Rsp [1]);
  (Wrd749.Obj) = (current_block [OBJECT_30_5]);
  (Wrd752.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_58]))));
  (* (--Rsp)) = (Wrd752.Obj);
  (* (--Rsp)) = (Wrd749.Obj);
  (* (--Rsp)) = (Wrd748.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_168)
  (Wrd737.Obj) = Rvl;
  goto label_254;

DEFLABEL (label_257)
  (Wrd722.Obj) = (Rsp [3]);
  (Wrd726.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_57]))));
  (* (--Rsp)) = (Wrd726.Obj);
  (* (--Rsp)) = (Wrd693.Obj);
  (* (--Rsp)) = (Wrd722.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_167)
  (Wrd709.Obj) = Rvl;
  goto label_256;

DEFLABEL (label_259)
  (Wrd704.Obj) = (Rsp [2]);
  (Wrd705.Obj) = (current_block [OBJECT_30_12]);
  (Wrd708.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_56]))));
  (* (--Rsp)) = (Wrd708.Obj);
  (* (--Rsp)) = (Wrd705.Obj);
  (* (--Rsp)) = (Wrd704.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_166)
  (Wrd693.Obj) = Rvl;
  goto label_258;

DEFLABEL (label_261)
  (Wrd688.Obj) = (Rsp [3]);
  (Wrd692.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_55]))));
  (* (--Rsp)) = (Wrd692.Obj);
  (* (--Rsp)) = (Wrd659.Obj);
  (* (--Rsp)) = (Wrd688.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_165)
  (* (--Rsp)) = Rvl;
  goto label_260;

DEFLABEL (label_263)
  (Wrd670.Obj) = (Rsp [1]);
  (Wrd671.Obj) = (current_block [OBJECT_30_12]);
  (Wrd674.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_54]))));
  (* (--Rsp)) = (Wrd674.Obj);
  (* (--Rsp)) = (Wrd671.Obj);
  (* (--Rsp)) = (Wrd670.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_164)
  (Wrd659.Obj) = Rvl;
  goto label_262;

DEFLABEL (label_265)
  (Wrd654.Obj) = (Rsp [0]);
  (Wrd655.Obj) = (current_block [OBJECT_30_11]);
  (Wrd658.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_53]))));
  (* (--Rsp)) = (Wrd658.Obj);
  (* (--Rsp)) = (Wrd655.Obj);
  (* (--Rsp)) = (Wrd654.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_163)
  (* (--Rsp)) = Rvl;
  goto label_264;

DEFLABEL (label_267)
  (Wrd639.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_52]))));
  (* (--Rsp)) = (Wrd639.Obj);
  (* (--Rsp)) = (Wrd624.Obj);
  (* (--Rsp)) = (Wrd608.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_6]), 2);

DEFLABEL (label_162)
  (Wrd625.Obj) = Rvl;
  goto label_266;

DEFLABEL (label_269)
  (Wrd619.Obj) = (Rsp [1]);
  (Wrd620.Obj) = (current_block [OBJECT_30_5]);
  (Wrd623.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_51]))));
  (* (--Rsp)) = (Wrd623.Obj);
  (* (--Rsp)) = (Wrd620.Obj);
  (* (--Rsp)) = (Wrd619.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_161)
  (Wrd608.Obj) = Rvl;
  goto label_268;

DEFLABEL (label_271)
  (Wrd593.Obj) = (Rsp [3]);
  (Wrd597.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_50]))));
  (* (--Rsp)) = (Wrd597.Obj);
  (* (--Rsp)) = (Wrd564.Obj);
  (* (--Rsp)) = (Wrd593.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_160)
  (Wrd580.Obj) = Rvl;
  goto label_270;

DEFLABEL (label_273)
  (Wrd575.Obj) = (Rsp [2]);
  (Wrd576.Obj) = (current_block [OBJECT_30_12]);
  (Wrd579.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_49]))));
  (* (--Rsp)) = (Wrd579.Obj);
  (* (--Rsp)) = (Wrd576.Obj);
  (* (--Rsp)) = (Wrd575.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_159)
  (Wrd564.Obj) = Rvl;
  goto label_272;

DEFLABEL (label_275)
  (Wrd559.Obj) = (Rsp [3]);
  (Wrd563.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_48]))));
  (* (--Rsp)) = (Wrd563.Obj);
  (* (--Rsp)) = (Wrd530.Obj);
  (* (--Rsp)) = (Wrd559.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_158)
  (* (--Rsp)) = Rvl;
  goto label_274;

DEFLABEL (label_277)
  (Wrd541.Obj) = (Rsp [1]);
  (Wrd542.Obj) = (current_block [OBJECT_30_12]);
  (Wrd545.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_47]))));
  (* (--Rsp)) = (Wrd545.Obj);
  (* (--Rsp)) = (Wrd542.Obj);
  (* (--Rsp)) = (Wrd541.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_157)
  (Wrd530.Obj) = Rvl;
  goto label_276;

DEFLABEL (label_279)
  (Wrd525.Obj) = (Rsp [0]);
  (Wrd526.Obj) = (current_block [OBJECT_30_11]);
  (Wrd529.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_46]))));
  (* (--Rsp)) = (Wrd529.Obj);
  (* (--Rsp)) = (Wrd526.Obj);
  (* (--Rsp)) = (Wrd525.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_156)
  (* (--Rsp)) = Rvl;
  goto label_278;

DEFLABEL (label_281)
  (Wrd929.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_45]))));
  (* (--Rsp)) = (Wrd929.Obj);
  (* (--Rsp)) = (Wrd270.Obj);
  (* (--Rsp)) = (Wrd254.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_6]), 2);

DEFLABEL (label_176)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_236;
  goto label_280;

DEFLABEL (label_283)
  (Wrd265.Obj) = (Rsp [1]);
  (Wrd266.Obj) = (current_block [OBJECT_30_5]);
  (Wrd269.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_44]))));
  (* (--Rsp)) = (Wrd269.Obj);
  (* (--Rsp)) = (Wrd266.Obj);
  (* (--Rsp)) = (Wrd265.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_142)
  (Wrd254.Obj) = Rvl;
  goto label_282;

DEFLABEL (label_285)
  (Wrd239.Obj) = (Rsp [3]);
  (Wrd243.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_43]))));
  (* (--Rsp)) = (Wrd243.Obj);
  (* (--Rsp)) = (Wrd210.Obj);
  (* (--Rsp)) = (Wrd239.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_141)
  (Wrd226.Obj) = Rvl;
  goto label_284;

DEFLABEL (label_287)
  (Wrd221.Obj) = (Rsp [2]);
  (Wrd222.Obj) = (current_block [OBJECT_30_12]);
  (Wrd225.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_42]))));
  (* (--Rsp)) = (Wrd225.Obj);
  (* (--Rsp)) = (Wrd222.Obj);
  (* (--Rsp)) = (Wrd221.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_140)
  (Wrd210.Obj) = Rvl;
  goto label_286;

DEFLABEL (label_289)
  (Wrd205.Obj) = (Rsp [3]);
  (Wrd209.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_41]))));
  (* (--Rsp)) = (Wrd209.Obj);
  (* (--Rsp)) = (Wrd176.Obj);
  (* (--Rsp)) = (Wrd205.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_139)
  (* (--Rsp)) = Rvl;
  goto label_288;

DEFLABEL (label_291)
  (Wrd187.Obj) = (Rsp [1]);
  (Wrd188.Obj) = (current_block [OBJECT_30_12]);
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_40]))));
  (* (--Rsp)) = (Wrd191.Obj);
  (* (--Rsp)) = (Wrd188.Obj);
  (* (--Rsp)) = (Wrd187.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_138)
  (Wrd176.Obj) = Rvl;
  goto label_290;

DEFLABEL (label_293)
  (Wrd171.Obj) = (Rsp [0]);
  (Wrd172.Obj) = (current_block [OBJECT_30_11]);
  (Wrd175.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_39]))));
  (* (--Rsp)) = (Wrd175.Obj);
  (* (--Rsp)) = (Wrd172.Obj);
  (* (--Rsp)) = (Wrd171.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_137)
  (* (--Rsp)) = Rvl;
  goto label_292;

DEFLABEL (label_295)
  (Wrd154.Obj) = (Rsp [3]);
  (Wrd155.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd153.Obj) = ((Wrd155.pObj) [2]);
  (Wrd156.Obj) = (current_block [OBJECT_30_7]);
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_38]))));
  (* (--Rsp)) = (Wrd159.Obj);
  (* (--Rsp)) = (Wrd156.Obj);
  (* (--Rsp)) = (Wrd153.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_136)
  (* (--Rsp)) = Rvl;
  goto label_294;

DEFLABEL (label_298)
  (Wrd89.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd91.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_1]));
  (Wrd90.Obj) = ((Wrd91.pObj) [0]);
  (Wrd94.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  (Wrd93.Obj) = (MAKE_OBJECT (26, (Wrd96.uLng)));
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd106.uLng) == 10))
    goto label_300;
  if (! ((Wrd94.uLng) == 26))
    goto label_300;
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd93.Obj));
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd104.Obj) = ((Wrd103.pObj) [0]);
  (Wrd105.Lng) = (FIXNUM_TO_LONG (Wrd104.Obj));
  if (! (((unsigned long) (Wrd102.Lng)) < ((unsigned long) (Wrd105.Lng))))
    goto label_300;
  (Wrd99.pObj) = (& ((Wrd103.pObj) [(Wrd96.Lng)]));
  (Wrd100.Obj) = ((Wrd99.pObj) [1]);
  (* (--Rsp)) = (Wrd100.Obj);

DEFLABEL (label_299)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_300)
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_37]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_6]), 2);

DEFLABEL (label_135)
DEFLABEL (label_301)
  (* (--Rsp)) = Rvl;
  goto label_299;

DEFLABEL (label_302)
  (Wrd941.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_36]))));
  (* (--Rsp)) = (Wrd941.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_6]), 2);

DEFLABEL (label_177)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_298;
  goto label_297;

DEFLABEL (label_304)
  if (! ((Wrd76.uLng) == 62))
    goto label_312;
  (Wrd949.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd950.Obj) = ((Wrd949.pObj) [0]);
  (Wrd951.Lng) = (FIXNUM_TO_LONG (Wrd950.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd951.Lng))))
    goto label_312;
  (Wrd943.Obj) = ((Wrd949.pObj) [1]);

DEFLABEL (label_311)
  (Wrd959.uLng) = (OBJECT_TYPE (Wrd943.Obj));
  if (! ((Wrd959.uLng) == 62))
    goto label_303;
  (Wrd969.Obj) = (Rsp [4]);
  (Wrd970.uLng) = (OBJECT_TYPE (Wrd969.Obj));
  if (! ((Wrd970.uLng) == 62))
    goto label_310;
  (Wrd966.pObj) = (OBJECT_ADDRESS (Wrd969.Obj));
  (Wrd967.Obj) = ((Wrd966.pObj) [0]);
  (Wrd968.Lng) = (FIXNUM_TO_LONG (Wrd967.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd968.Lng))))
    goto label_310;
  (Wrd960.Obj) = ((Wrd966.pObj) [1]);

DEFLABEL (label_309)
  (Wrd983.uLng) = (OBJECT_TYPE (Wrd960.Obj));
  if (! ((Wrd983.uLng) == 62))
    goto label_308;
  (Wrd980.pObj) = (OBJECT_ADDRESS (Wrd960.Obj));
  (Wrd981.Obj) = ((Wrd980.pObj) [0]);
  (Wrd982.Lng) = (FIXNUM_TO_LONG (Wrd981.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd982.Lng))))
    goto label_308;
  (Wrd976.Obj) = ((Wrd980.pObj) [1]);

DEFLABEL (label_307)
  if (! ((Wrd976.Obj) == (current_block [OBJECT_30_10])))
    goto label_303;
  (Wrd990.Obj) = (current_block [OBJECT_30_9]);
  (* (--Rsp)) = (Wrd990.Obj);
  (Wrd991.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd991.Obj);
  (Wrd1003.uLng) = (OBJECT_TYPE (Wrd991.Obj));
  if ((Wrd1003.uLng) == 62)
    goto label_306;

DEFLABEL (label_305)
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_306)
  (Wrd999.pObj) = (OBJECT_ADDRESS (Wrd991.Obj));
  (Wrd1000.Obj) = ((Wrd999.pObj) [0]);
  (Wrd1001.Lng) = (FIXNUM_TO_LONG (Wrd1000.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1001.Lng))))
    goto label_305;
  (Wrd993.Obj) = ((Wrd999.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd993.Obj);
  goto label_296;

DEFLABEL (label_308)
  (Wrd985.Obj) = (current_block [OBJECT_30_9]);
  (Wrd988.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_35]))));
  (* (--Rsp)) = (Wrd988.Obj);
  (* (--Rsp)) = (Wrd985.Obj);
  (* (--Rsp)) = (Wrd960.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_180)
  (Wrd976.Obj) = Rvl;
  goto label_307;

DEFLABEL (label_310)
  (Wrd971.Obj) = (Rsp [4]);
  (Wrd972.Obj) = (current_block [OBJECT_30_9]);
  (Wrd975.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_34]))));
  (* (--Rsp)) = (Wrd975.Obj);
  (* (--Rsp)) = (Wrd972.Obj);
  (* (--Rsp)) = (Wrd971.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_179)
  (Wrd960.Obj) = Rvl;
  goto label_309;

DEFLABEL (label_312)
  (Wrd954.Obj) = (Rsp [4]);
  (Wrd955.Obj) = (current_block [OBJECT_30_9]);
  (Wrd958.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_33]))));
  (* (--Rsp)) = (Wrd958.Obj);
  (* (--Rsp)) = (Wrd955.Obj);
  (* (--Rsp)) = (Wrd954.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_178)
  (Wrd943.Obj) = Rvl;
  goto label_311;

DEFLABEL (label_315)
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_1]));
  (Wrd26.Obj) = ((Wrd27.pObj) [0]);
  (Wrd30.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  (Wrd29.Obj) = (MAKE_OBJECT (26, (Wrd32.uLng)));
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_316;
  if (! ((Wrd30.uLng) == 26))
    goto label_316;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) (Wrd38.Lng)) < ((unsigned long) (Wrd41.Lng))))
    goto label_316;
  (Wrd35.pObj) = (& ((Wrd39.pObj) [(Wrd32.Lng)]));
  (Wrd36.Obj) = ((Wrd35.pObj) [1]);
  (* (--Rsp)) = (Wrd36.Obj);
  goto label_299;

DEFLABEL (label_316)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_32]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_6]), 2);

DEFLABEL (label_134)
  goto label_301;

DEFLABEL (label_317)
  (Wrd1014.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_31]))));
  (* (--Rsp)) = (Wrd1014.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_6]), 2);

DEFLABEL (label_181)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_315;
  goto label_314;

DEFLABEL (label_319)
  if (! ((Wrd12.uLng) == 62))
    goto label_325;
  (Wrd1022.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd1023.Obj) = ((Wrd1022.pObj) [0]);
  (Wrd1024.Lng) = (FIXNUM_TO_LONG (Wrd1023.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1024.Lng))))
    goto label_325;
  (Wrd1016.Obj) = ((Wrd1022.pObj) [1]);

DEFLABEL (label_324)
  (Wrd1032.uLng) = (OBJECT_TYPE (Wrd1016.Obj));
  if (! ((Wrd1032.uLng) == 62))
    goto label_318;
  (Wrd1042.Obj) = (Rsp [4]);
  (Wrd1043.uLng) = (OBJECT_TYPE (Wrd1042.Obj));
  if (! ((Wrd1043.uLng) == 62))
    goto label_323;
  (Wrd1039.pObj) = (OBJECT_ADDRESS (Wrd1042.Obj));
  (Wrd1040.Obj) = ((Wrd1039.pObj) [0]);
  (Wrd1041.Lng) = (FIXNUM_TO_LONG (Wrd1040.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1041.Lng))))
    goto label_323;
  (Wrd1033.Obj) = ((Wrd1039.pObj) [1]);

DEFLABEL (label_322)
  (Wrd1056.uLng) = (OBJECT_TYPE (Wrd1033.Obj));
  if (! ((Wrd1056.uLng) == 62))
    goto label_321;
  (Wrd1053.pObj) = (OBJECT_ADDRESS (Wrd1033.Obj));
  (Wrd1054.Obj) = ((Wrd1053.pObj) [0]);
  (Wrd1055.Lng) = (FIXNUM_TO_LONG (Wrd1054.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1055.Lng))))
    goto label_321;
  (Wrd1049.Obj) = ((Wrd1053.pObj) [1]);

DEFLABEL (label_320)
  if (! ((Wrd1049.Obj) == (current_block [OBJECT_30_10])))
    goto label_318;
  (Wrd1063.Obj) = (current_block [OBJECT_30_9]);
  (* (--Rsp)) = (Wrd1063.Obj);
  (Wrd1064.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd1064.Obj);
  (Wrd1076.uLng) = (OBJECT_TYPE (Wrd1064.Obj));
  if (! ((Wrd1076.uLng) == 62))
    goto label_305;
  (Wrd1072.pObj) = (OBJECT_ADDRESS (Wrd1064.Obj));
  (Wrd1073.Obj) = ((Wrd1072.pObj) [0]);
  (Wrd1074.Lng) = (FIXNUM_TO_LONG (Wrd1073.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1074.Lng))))
    goto label_305;
  (Wrd1066.Obj) = ((Wrd1072.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd1066.Obj);
  goto label_313;

DEFLABEL (label_321)
  (Wrd1058.Obj) = (current_block [OBJECT_30_9]);
  (Wrd1061.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_30]))));
  (* (--Rsp)) = (Wrd1061.Obj);
  (* (--Rsp)) = (Wrd1058.Obj);
  (* (--Rsp)) = (Wrd1033.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_184)
  (Wrd1049.Obj) = Rvl;
  goto label_320;

DEFLABEL (label_323)
  (Wrd1044.Obj) = (Rsp [4]);
  (Wrd1045.Obj) = (current_block [OBJECT_30_9]);
  (Wrd1048.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_29]))));
  (* (--Rsp)) = (Wrd1048.Obj);
  (* (--Rsp)) = (Wrd1045.Obj);
  (* (--Rsp)) = (Wrd1044.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_183)
  (Wrd1033.Obj) = Rvl;
  goto label_322;

DEFLABEL (label_325)
  (Wrd1027.Obj) = (Rsp [4]);
  (Wrd1028.Obj) = (current_block [OBJECT_30_9]);
  (Wrd1031.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_28]))));
  (* (--Rsp)) = (Wrd1031.Obj);
  (* (--Rsp)) = (Wrd1028.Obj);
  (* (--Rsp)) = (Wrd1027.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_182)
  (Wrd1016.Obj) = Rvl;
  goto label_324;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_25);
  (* (--Rsp)) = Rvl;
  goto label_296;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_30_26);
  (* (--Rsp)) = Rvl;
  goto label_313;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_30_27);
  (* (--Rsp)) = Rvl;
  goto label_239;

DEFLABEL (search_lines_205)
DEFLABEL (search_lines_116)
  INTERRUPT_CHECK (26, LABEL_30_14);
  (Wrd1077.Obj) = (Rsp [1]);
  (Wrd1078.Obj) = (Rsp [2]);
  if ((Wrd1077.Obj) == (Wrd1078.Obj))
    goto label_349;
  (Wrd1088.Obj) = (Rsp [3]);
  (Wrd1089.uLng) = (OBJECT_TYPE (Wrd1088.Obj));
  if (! ((Wrd1089.uLng) == 62))
    goto label_348;
  (Wrd1085.pObj) = (OBJECT_ADDRESS (Wrd1088.Obj));
  (Wrd1086.Obj) = ((Wrd1085.pObj) [0]);
  (Wrd1087.Lng) = (FIXNUM_TO_LONG (Wrd1086.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd1087.Lng))))
    goto label_348;
  (Wrd1079.Obj) = ((Wrd1085.pObj) [6]);

DEFLABEL (label_347)
  (Wrd1256.uLng) = (OBJECT_TYPE (Wrd1079.Obj));
  if (! ((Wrd1256.uLng) == 10))
    goto label_346;
  (Wrd1249.Obj) = (Rsp [0]);
  (Wrd1250.uLng) = (OBJECT_TYPE (Wrd1249.Obj));
  if (! ((Wrd1250.uLng) == 26))
    goto label_346;
  (Wrd1252.Lng) = (FIXNUM_TO_LONG (Wrd1249.Obj));
  (Wrd1253.pObj) = (OBJECT_ADDRESS (Wrd1079.Obj));
  (Wrd1254.Obj) = ((Wrd1253.pObj) [0]);
  (Wrd1255.Lng) = (FIXNUM_TO_LONG (Wrd1254.Obj));
  if (! (((unsigned long) (Wrd1252.Lng)) < ((unsigned long) (Wrd1255.Lng))))
    goto label_346;
  (Wrd1096.uLng) = (OBJECT_DATUM (Wrd1249.Obj));
  (Wrd1098.pObj) = (& ((Wrd1253.pObj) [(Wrd1096.Lng)]));
  (Wrd1099.Obj) = ((Wrd1098.pObj) [1]);
  if ((Wrd1099.Obj) == ((SCHEME_OBJECT) 0))
    goto label_333;

DEFLABEL (label_345)
  (Wrd1147.Obj) = (Rsp [3]);
  (Wrd1148.uLng) = (OBJECT_TYPE (Wrd1147.Obj));
  if (! ((Wrd1148.uLng) == 62))
    goto label_344;
  (Wrd1144.pObj) = (OBJECT_ADDRESS (Wrd1147.Obj));
  (Wrd1145.Obj) = ((Wrd1144.pObj) [0]);
  (Wrd1146.Lng) = (FIXNUM_TO_LONG (Wrd1145.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd1146.Lng))))
    goto label_344;
  (Wrd1138.Obj) = ((Wrd1144.pObj) [6]);

DEFLABEL (label_343)
  (Wrd1166.uLng) = (OBJECT_TYPE (Wrd1138.Obj));
  if (! ((Wrd1166.uLng) == 10))
    goto label_342;
  (Wrd1159.Obj) = (Rsp [0]);
  (Wrd1160.uLng) = (OBJECT_TYPE (Wrd1159.Obj));
  if (! ((Wrd1160.uLng) == 26))
    goto label_342;
  (Wrd1162.Lng) = (FIXNUM_TO_LONG (Wrd1159.Obj));
  (Wrd1163.pObj) = (OBJECT_ADDRESS (Wrd1138.Obj));
  (Wrd1164.Obj) = ((Wrd1163.pObj) [0]);
  (Wrd1165.Lng) = (FIXNUM_TO_LONG (Wrd1164.Obj));
  if (! (((unsigned long) (Wrd1162.Lng)) < ((unsigned long) (Wrd1165.Lng))))
    goto label_342;
  (Wrd1156.uLng) = (OBJECT_DATUM (Wrd1159.Obj));
  (Wrd1158.pObj) = (& ((Wrd1163.pObj) [(Wrd1156.Lng)]));
  (Wrd1154.Obj) = ((Wrd1158.pObj) [1]);

DEFLABEL (label_341)
  (Wrd1173.pObj) = (OBJECT_ADDRESS (Wrd1154.Obj));
  (Wrd1172.Obj) = ((Wrd1173.pObj) [0]);
  (Wrd1174.Obj) = (Rsp [4]);
  if ((Wrd1174.Obj) == (Wrd1172.Obj))
    goto label_334;

DEFLABEL (label_333)
  (Wrd1110.Obj) = (Rsp [3]);
  (Wrd1111.uLng) = (OBJECT_TYPE (Wrd1110.Obj));
  if (! ((Wrd1111.uLng) == 62))
    goto label_332;
  (Wrd1107.pObj) = (OBJECT_ADDRESS (Wrd1110.Obj));
  (Wrd1108.Obj) = ((Wrd1107.pObj) [0]);
  (Wrd1109.Lng) = (FIXNUM_TO_LONG (Wrd1108.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd1109.Lng))))
    goto label_332;
  (Wrd1101.Obj) = ((Wrd1107.pObj) [6]);

DEFLABEL (label_331)
  (Wrd1121.uLng) = (OBJECT_TYPE (Wrd1101.Obj));
  if (! ((Wrd1121.uLng) == 10))
    goto label_330;
  (Wrd1119.pObj) = (OBJECT_ADDRESS (Wrd1101.Obj));
  (Wrd1120.Obj) = ((Wrd1119.pObj) [0]);
  (Wrd1117.Obj) = (MAKE_OBJECT (26, (Wrd1120.uLng)));

DEFLABEL (label_329)
  (Wrd1127.Obj) = (Rsp [0]);
  (Wrd1128.Lng) = (FIXNUM_TO_LONG (Wrd1127.Obj));
  (Wrd1129.Lng) = ((Wrd1128.Lng) + 1L);
  (Wrd1126.Obj) = (LONG_TO_FIXNUM (Wrd1129.Lng));
  if ((Wrd1126.Obj) == (Wrd1117.Obj))
    goto label_327;
  Wrd1130 = Wrd1126;
  goto label_326;

DEFLABEL (label_327)
  (Wrd1130.Obj) = (current_block [OBJECT_30_9]);

DEFLABEL (label_326)
DEFLABEL (label_328)
  (Rsp [0]) = (Wrd1130.Obj);
  (Wrd1135.Obj) = (Rsp [1]);
  (Wrd1136.Lng) = (FIXNUM_TO_LONG (Wrd1135.Obj));
  (Wrd1137.Lng) = ((Wrd1136.Lng) + 1L);
  (Wrd1134.Obj) = (LONG_TO_FIXNUM (Wrd1137.Lng));
  (Rsp [1]) = (Wrd1134.Obj);
  goto label_208;

DEFLABEL (label_330)
  (Wrd1125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_24]))));
  (* (--Rsp)) = (Wrd1125.Obj);
  (* (--Rsp)) = (Wrd1101.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_8]), 1);

DEFLABEL (label_187)
  (Wrd1117.Obj) = Rvl;
  goto label_329;

DEFLABEL (label_332)
  (Wrd1112.Obj) = (Rsp [3]);
  (Wrd1113.Obj) = (current_block [OBJECT_30_5]);
  (Wrd1116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_23]))));
  (* (--Rsp)) = (Wrd1116.Obj);
  (* (--Rsp)) = (Wrd1113.Obj);
  (* (--Rsp)) = (Wrd1112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_186)
  (Wrd1101.Obj) = Rvl;
  goto label_331;

DEFLABEL (label_334)
  (Wrd1184.Obj) = (Rsp [3]);
  (Wrd1185.uLng) = (OBJECT_TYPE (Wrd1184.Obj));
  if (! ((Wrd1185.uLng) == 62))
    goto label_340;
  (Wrd1181.pObj) = (OBJECT_ADDRESS (Wrd1184.Obj));
  (Wrd1182.Obj) = ((Wrd1181.pObj) [0]);
  (Wrd1183.Lng) = (FIXNUM_TO_LONG (Wrd1182.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd1183.Lng))))
    goto label_340;
  (Wrd1175.Obj) = ((Wrd1181.pObj) [6]);

DEFLABEL (label_339)
  (Wrd1203.uLng) = (OBJECT_TYPE (Wrd1175.Obj));
  if (! ((Wrd1203.uLng) == 10))
    goto label_338;
  (Wrd1196.Obj) = (Rsp [0]);
  (Wrd1197.uLng) = (OBJECT_TYPE (Wrd1196.Obj));
  if (! ((Wrd1197.uLng) == 26))
    goto label_338;
  (Wrd1199.Lng) = (FIXNUM_TO_LONG (Wrd1196.Obj));
  (Wrd1200.pObj) = (OBJECT_ADDRESS (Wrd1175.Obj));
  (Wrd1201.Obj) = ((Wrd1200.pObj) [0]);
  (Wrd1202.Lng) = (FIXNUM_TO_LONG (Wrd1201.Obj));
  if (! (((unsigned long) (Wrd1199.Lng)) < ((unsigned long) (Wrd1202.Lng))))
    goto label_338;
  (Wrd1193.uLng) = (OBJECT_DATUM (Wrd1196.Obj));
  (Wrd1195.pObj) = (& ((Wrd1200.pObj) [(Wrd1193.Lng)]));
  (Wrd1191.Obj) = ((Wrd1195.pObj) [1]);

DEFLABEL (label_337)
  (Wrd1210.pObj) = (OBJECT_ADDRESS (Wrd1191.Obj));
  (Wrd1209.Obj) = ((Wrd1210.pObj) [1]);
  (Wrd1212.pObj) = (OBJECT_ADDRESS (Wrd1209.Obj));
  (Wrd1211.Obj) = ((Wrd1212.pObj) [0]);
  (Wrd1213.Obj) = (Rsp [5]);
  if (! ((Wrd1213.Obj) == (Wrd1211.Obj)))
    goto label_333;
  (Wrd1223.Obj) = (Rsp [3]);
  (Wrd1224.uLng) = (OBJECT_TYPE (Wrd1223.Obj));
  if (! ((Wrd1224.uLng) == 62))
    goto label_336;
  (Wrd1220.pObj) = (OBJECT_ADDRESS (Wrd1223.Obj));
  (Wrd1221.Obj) = ((Wrd1220.pObj) [0]);
  (Wrd1222.Lng) = (FIXNUM_TO_LONG (Wrd1221.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd1222.Lng))))
    goto label_336;
  (Wrd1214.Obj) = ((Wrd1220.pObj) [7]);

DEFLABEL (label_335)
  (Rsp [4]) = (Wrd1214.Obj);
  (Wrd1230.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd1230.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd1246.Obj) = (Rsp [0]);
  (Wrd1247.uLng) = (OBJECT_TYPE (Wrd1246.Obj));
  if (! ((Wrd1247.uLng) == 10))
    goto label_206;
  (Wrd1238.Obj) = (Rsp [1]);
  (Wrd1239.uLng) = (OBJECT_TYPE (Wrd1238.Obj));
  if (! ((Wrd1239.uLng) == 26))
    goto label_206;
  (Wrd1241.Lng) = (FIXNUM_TO_LONG (Wrd1238.Obj));
  (Wrd1243.pObj) = (OBJECT_ADDRESS (Wrd1246.Obj));
  (Wrd1244.Obj) = ((Wrd1243.pObj) [0]);
  (Wrd1245.Lng) = (FIXNUM_TO_LONG (Wrd1244.Obj));
  if (! (((unsigned long) (Wrd1241.Lng)) < ((unsigned long) (Wrd1245.Lng))))
    goto label_206;
  (Wrd1234.uLng) = (OBJECT_DATUM (Wrd1238.Obj));
  (Wrd1237.pObj) = (& ((Wrd1243.pObj) [(Wrd1234.Lng)]));
  (Wrd1232.Obj) = ((Wrd1237.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd1232.Obj);
  goto label_239;

DEFLABEL (label_336)
  (Wrd1225.Obj) = (Rsp [3]);
  (Wrd1226.Obj) = (current_block [OBJECT_30_7]);
  (Wrd1229.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_22]))));
  (* (--Rsp)) = (Wrd1229.Obj);
  (* (--Rsp)) = (Wrd1226.Obj);
  (* (--Rsp)) = (Wrd1225.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_192)
  (Wrd1214.Obj) = Rvl;
  goto label_335;

DEFLABEL (label_338)
  (Wrd1205.Obj) = (Rsp [0]);
  (Wrd1208.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_21]))));
  (* (--Rsp)) = (Wrd1208.Obj);
  (* (--Rsp)) = (Wrd1205.Obj);
  (* (--Rsp)) = (Wrd1175.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_6]), 2);

DEFLABEL (label_191)
  (Wrd1191.Obj) = Rvl;
  goto label_337;

DEFLABEL (label_340)
  (Wrd1186.Obj) = (Rsp [3]);
  (Wrd1187.Obj) = (current_block [OBJECT_30_5]);
  (Wrd1190.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_20]))));
  (* (--Rsp)) = (Wrd1190.Obj);
  (* (--Rsp)) = (Wrd1187.Obj);
  (* (--Rsp)) = (Wrd1186.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_190)
  (Wrd1175.Obj) = Rvl;
  goto label_339;

DEFLABEL (label_342)
  (Wrd1168.Obj) = (Rsp [0]);
  (Wrd1171.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_19]))));
  (* (--Rsp)) = (Wrd1171.Obj);
  (* (--Rsp)) = (Wrd1168.Obj);
  (* (--Rsp)) = (Wrd1138.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_6]), 2);

DEFLABEL (label_189)
  (Wrd1154.Obj) = Rvl;
  goto label_341;

DEFLABEL (label_344)
  (Wrd1149.Obj) = (Rsp [3]);
  (Wrd1150.Obj) = (current_block [OBJECT_30_5]);
  (Wrd1153.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_18]))));
  (* (--Rsp)) = (Wrd1153.Obj);
  (* (--Rsp)) = (Wrd1150.Obj);
  (* (--Rsp)) = (Wrd1149.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_188)
  (Wrd1138.Obj) = Rvl;
  goto label_343;

DEFLABEL (label_346)
  (Wrd1258.Obj) = (Rsp [0]);
  (Wrd1261.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_17]))));
  (* (--Rsp)) = (Wrd1261.Obj);
  (* (--Rsp)) = (Wrd1258.Obj);
  (* (--Rsp)) = (Wrd1079.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_6]), 2);

DEFLABEL (label_193)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_333;
  goto label_345;

DEFLABEL (label_348)
  (Wrd1090.Obj) = (Rsp [3]);
  (Wrd1091.Obj) = (current_block [OBJECT_30_5]);
  (Wrd1094.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_16]))));
  (* (--Rsp)) = (Wrd1094.Obj);
  (* (--Rsp)) = (Wrd1091.Obj);
  (* (--Rsp)) = (Wrd1090.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_185)
  (Wrd1079.Obj) = Rvl;
  goto label_347;

DEFLABEL (label_349)
  (Wrd1272.Obj) = (Rsp [3]);
  (Wrd1273.uLng) = (OBJECT_TYPE (Wrd1272.Obj));
  if (! ((Wrd1273.uLng) == 62))
    goto label_351;
  (Wrd1269.pObj) = (OBJECT_ADDRESS (Wrd1272.Obj));
  (Wrd1270.Obj) = ((Wrd1269.pObj) [0]);
  (Wrd1271.Lng) = (FIXNUM_TO_LONG (Wrd1270.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd1271.Lng))))
    goto label_351;
  (Wrd1263.Obj) = ((Wrd1269.pObj) [8]);

DEFLABEL (label_350)
  (Rsp [2]) = (Wrd1263.Obj);
  Rsp = (& (Rsp [2]));
  goto search_overflow_114;

DEFLABEL (label_351)
  (Wrd1274.Obj) = (Rsp [3]);
  (Wrd1275.Obj) = (current_block [OBJECT_30_3]);
  (Wrd1278.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_15]))));
  (* (--Rsp)) = (Wrd1278.Obj);
  (* (--Rsp)) = (Wrd1275.Obj);
  (* (--Rsp)) = (Wrd1274.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_194)
  (Wrd1263.Obj) = Rvl;
  goto label_350;

DEFLABEL (search_overflow_204)
DEFLABEL (search_overflow_114)
  INTERRUPT_CHECK (26, LABEL_30_7);
  (Wrd1280.Obj) = (Rsp [0]);
  if ((Wrd1280.Obj) == (current_block [OBJECT_30_0]))
    goto label_367;
  (Wrd1286.uLng) = (OBJECT_TYPE (Wrd1280.Obj));
  if (! ((Wrd1286.uLng) == 1))
    goto label_366;
  (Wrd1284.pObj) = (OBJECT_ADDRESS (Wrd1280.Obj));
  (Wrd1282.Obj) = ((Wrd1284.pObj) [0]);

DEFLABEL (label_365)
  (Wrd1293.uLng) = (OBJECT_TYPE (Wrd1282.Obj));
  if (! ((Wrd1293.uLng) == 1))
    goto label_364;
  (Wrd1292.pObj) = (OBJECT_ADDRESS (Wrd1282.Obj));
  (Wrd1291.Obj) = ((Wrd1292.pObj) [0]);

DEFLABEL (label_363)
  (Wrd1299.pObj) = (OBJECT_ADDRESS (Wrd1291.Obj));
  (Wrd1298.Obj) = ((Wrd1299.pObj) [0]);
  (Wrd1300.Obj) = (Rsp [2]);
  if ((Wrd1300.Obj) == (Wrd1298.Obj))
    goto label_355;

DEFLABEL (label_354)
  (Wrd1304.Obj) = (Rsp [0]);
  (Wrd1305.uLng) = (OBJECT_TYPE (Wrd1304.Obj));
  if (! ((Wrd1305.uLng) == 1))
    goto label_353;
  (Wrd1303.pObj) = (OBJECT_ADDRESS (Wrd1304.Obj));
  (Wrd1301.Obj) = ((Wrd1303.pObj) [1]);

DEFLABEL (label_352)
  (Rsp [0]) = (Wrd1301.Obj);
  goto search_overflow_114;

DEFLABEL (label_353)
  (Wrd1309.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd1309.Obj);
  (* (--Rsp)) = (Wrd1304.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_197)
  (Wrd1301.Obj) = Rvl;
  goto label_352;

DEFLABEL (label_355)
  (Wrd1313.Obj) = (Rsp [0]);
  (Wrd1314.uLng) = (OBJECT_TYPE (Wrd1313.Obj));
  if (! ((Wrd1314.uLng) == 1))
    goto label_362;
  (Wrd1312.pObj) = (OBJECT_ADDRESS (Wrd1313.Obj));
  (Wrd1310.Obj) = ((Wrd1312.pObj) [0]);

DEFLABEL (label_361)
  (Wrd1321.uLng) = (OBJECT_TYPE (Wrd1310.Obj));
  if (! ((Wrd1321.uLng) == 1))
    goto label_360;
  (Wrd1320.pObj) = (OBJECT_ADDRESS (Wrd1310.Obj));
  (Wrd1319.Obj) = ((Wrd1320.pObj) [0]);

DEFLABEL (label_359)
  (Wrd1327.pObj) = (OBJECT_ADDRESS (Wrd1319.Obj));
  (Wrd1326.Obj) = ((Wrd1327.pObj) [1]);
  (Wrd1329.pObj) = (OBJECT_ADDRESS (Wrd1326.Obj));
  (Wrd1328.Obj) = ((Wrd1329.pObj) [0]);
  (Wrd1330.Obj) = (Rsp [3]);
  if (! ((Wrd1330.Obj) == (Wrd1328.Obj)))
    goto label_354;
  (Wrd1334.Obj) = (Rsp [0]);
  (Wrd1335.uLng) = (OBJECT_TYPE (Wrd1334.Obj));
  if (! ((Wrd1335.uLng) == 1))
    goto label_358;
  (Wrd1333.pObj) = (OBJECT_ADDRESS (Wrd1334.Obj));
  (Wrd1331.Obj) = ((Wrd1333.pObj) [0]);

DEFLABEL (label_357)
  (Rsp [3]) = (Wrd1331.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd1344.Obj) = (Rsp [0]);
  (Wrd1345.uLng) = (OBJECT_TYPE (Wrd1344.Obj));
  if ((Wrd1345.uLng) == 1)
    goto label_356;
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_356)
  (Wrd1343.pObj) = (OBJECT_ADDRESS (Wrd1344.Obj));
  (Wrd1341.Obj) = ((Wrd1343.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd1341.Obj);
  goto label_239;

DEFLABEL (label_358)
  (Wrd1339.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_12]))));
  (* (--Rsp)) = (Wrd1339.Obj);
  (* (--Rsp)) = (Wrd1334.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 1);

DEFLABEL (label_200)
  (Wrd1331.Obj) = Rvl;
  goto label_357;

DEFLABEL (label_360)
  (Wrd1325.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd1325.Obj);
  (* (--Rsp)) = (Wrd1310.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 1);

DEFLABEL (label_199)
  (Wrd1319.Obj) = Rvl;
  goto label_359;

DEFLABEL (label_362)
  (Wrd1318.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd1318.Obj);
  (* (--Rsp)) = (Wrd1313.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 1);

DEFLABEL (label_198)
  (Wrd1310.Obj) = Rvl;
  goto label_361;

DEFLABEL (label_364)
  (Wrd1297.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd1297.Obj);
  (* (--Rsp)) = (Wrd1282.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 1);

DEFLABEL (label_196)
  (Wrd1291.Obj) = Rvl;
  goto label_363;

DEFLABEL (label_366)
  (Wrd1290.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd1290.Obj);
  (* (--Rsp)) = (Wrd1280.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 1);

DEFLABEL (label_195)
  (Wrd1282.Obj) = Rvl;
  goto label_365;

DEFLABEL (label_367)
  Rsp = (& (Rsp [5]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_239;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_7 5
#define LABEL_31_8 7
#define LABEL_31_9 9
#define LABEL_31_10 11
#define LABEL_31_11 13
#define LABEL_31_12 15
#define LABEL_31_13 17
#define LABEL_31_14 19
#define LABEL_31_15 21
#define LABEL_31_16 23
#define LABEL_31_17 25
#define LABEL_31_18 27
#define LABEL_31_19 29
#define LABEL_31_20 31
#define LABEL_31_21 33
#define LABEL_31_22 35
#define LABEL_31_23 37
#define LABEL_31_24 39
#define LABEL_31_25 41
#define LABEL_31_26 43
#define LABEL_31_27 45
#define LABEL_31_28 47
#define LABEL_31_29 49
#define LABEL_31_30 51
#define LABEL_31_31 53
#define LABEL_31_32 55
#define LABEL_31_5 57
#define TAG_31_6 27
#define LABEL_31_33 59
#define LABEL_31_34 61
#define LABEL_31_35 63
#define LABEL_31_36 65
#define LABEL_31_37 67
#define LABEL_31_38 69
#define LABEL_31_39 71
#define LABEL_31_40 73
#define LABEL_31_41 75
#define LABEL_31_42 77
#define LABEL_31_43 79
#define LABEL_31_44 81
#define LABEL_31_45 83
#define LABEL_31_46 85
#define LABEL_31_47 87
#define LABEL_31_48 89
#define LABEL_31_49 91
#define LABEL_31_50 93
#define LABEL_31_51 95
#define LABEL_31_52 97
#define LABEL_31_53 99
#define LABEL_31_54 101
#define LABEL_31_55 103
#define LABEL_31_56 105
#define LABEL_31_57 107
#define LABEL_31_58 109
#define LABEL_31_59 111
#define LABEL_31_60 113
#define LABEL_31_61 115
#define LABEL_31_62 117
#define LABEL_31_63 119
#define LABEL_31_64 121
#define LABEL_31_65 123
#define LABEL_31_66 125
#define LABEL_31_67 127
#define LABEL_31_68 129
#define LABEL_31_69 131
#define LABEL_31_70 133
#define LABEL_31_71 135
#define LABEL_31_72 137
#define LABEL_31_73 139
#define LABEL_31_74 141
#define LABEL_31_75 143
#define LABEL_31_76 145
#define LABEL_31_77 147
#define LABEL_31_78 149
#define LABEL_31_79 151
#define LABEL_31_80 153
#define LABEL_31_81 155
#define LABEL_31_82 157
#define LABEL_31_83 159
#define LABEL_31_85 161
#define LABEL_31_86 163
#define LABEL_31_87 165
#define LABEL_31_88 167
#define LABEL_31_89 169
#define LABEL_31_90 171
#define LABEL_31_91 173
#define LABEL_31_92 175
#define LABEL_31_93 177
#define LABEL_31_94 179
#define LABEL_31_95 181
#define LABEL_31_96 183
#define LABEL_31_97 185
#define LABEL_31_98 187
#define LABEL_31_99 189
#define LABEL_31_100 191
#define LABEL_31_101 193
#define ENVIRONMENT_LABEL_31_3 215
#define DEBUGGING_LABEL_31_2 214
#define OBJECT_31_13 213
#define OBJECT_31_12 212
#define OBJECT_31_11 211
#define OBJECT_31_10 210
#define OBJECT_31_9 209
#define OBJECT_31_8 208
#define OBJECT_31_7 207
#define OBJECT_31_6 206
#define OBJECT_31_5 205
#define OBJECT_31_4 204
#define OBJECT_31_3 203
#define OBJECT_31_2 202
#define OBJECT_31_1 201
#define OBJECT_31_0 200
#define EXECUTE_CACHE_31_84 195
#define FREE_REFERENCE_31_1 198
#define FREE_REFERENCE_31_0 199
#define FREE_REFERENCES_LABEL_31_0 194
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd706;
  machine_word Wrd705;
  machine_word Wrd704;
  machine_word Wrd702;
  machine_word Wrd701;
  machine_word Wrd699;
  machine_word Wrd698;
  machine_word Wrd697;
  machine_word Wrd696;
  machine_word Wrd694;
  machine_word Wrd693;
  machine_word Wrd689;
  machine_word Wrd676;
  machine_word Wrd680;
  machine_word Wrd677;
  machine_word Wrd686;
  machine_word Wrd685;
  machine_word Wrd684;
  machine_word Wrd682;
  machine_word Wrd681;
  machine_word Wrd688;
  machine_word Wrd687;
  machine_word Wrd675;
  machine_word Wrd672;
  machine_word Wrd671;
  machine_word Wrd660;
  machine_word Wrd668;
  machine_word Wrd667;
  machine_word Wrd666;
  machine_word Wrd670;
  machine_word Wrd669;
  machine_word Wrd659;
  machine_word Wrd658;
  machine_word Wrd657;
  machine_word Wrd656;
  machine_word Wrd655;
  machine_word Wrd654;
  machine_word Wrd650;
  machine_word Wrd637;
  machine_word Wrd641;
  machine_word Wrd638;
  machine_word Wrd647;
  machine_word Wrd646;
  machine_word Wrd645;
  machine_word Wrd643;
  machine_word Wrd642;
  machine_word Wrd649;
  machine_word Wrd648;
  machine_word Wrd636;
  machine_word Wrd633;
  machine_word Wrd632;
  machine_word Wrd621;
  machine_word Wrd629;
  machine_word Wrd628;
  machine_word Wrd627;
  machine_word Wrd631;
  machine_word Wrd630;
  machine_word Wrd620;
  machine_word Wrd616;
  machine_word Wrd607;
  machine_word Wrd606;
  machine_word Wrd603;
  machine_word Wrd613;
  machine_word Wrd612;
  machine_word Wrd611;
  machine_word Wrd609;
  machine_word Wrd608;
  machine_word Wrd615;
  machine_word Wrd614;
  machine_word Wrd602;
  machine_word Wrd599;
  machine_word Wrd598;
  machine_word Wrd587;
  machine_word Wrd595;
  machine_word Wrd594;
  machine_word Wrd593;
  machine_word Wrd597;
  machine_word Wrd596;
  machine_word Wrd586;
  machine_word Wrd583;
  machine_word Wrd582;
  machine_word Wrd573;
  machine_word Wrd579;
  machine_word Wrd578;
  machine_word Wrd577;
  machine_word Wrd581;
  machine_word Wrd580;
  machine_word Wrd707;
  machine_word Wrd570;
  machine_word Wrd567;
  machine_word Wrd569;
  machine_word Wrd568;
  machine_word Wrd565;
  machine_word Wrd564;
  machine_word Wrd562;
  machine_word Wrd561;
  machine_word Wrd560;
  machine_word Wrd559;
  machine_word Wrd557;
  machine_word Wrd556;
  machine_word Wrd552;
  machine_word Wrd539;
  machine_word Wrd543;
  machine_word Wrd540;
  machine_word Wrd549;
  machine_word Wrd548;
  machine_word Wrd547;
  machine_word Wrd545;
  machine_word Wrd544;
  machine_word Wrd551;
  machine_word Wrd550;
  machine_word Wrd538;
  machine_word Wrd535;
  machine_word Wrd534;
  machine_word Wrd523;
  machine_word Wrd531;
  machine_word Wrd530;
  machine_word Wrd529;
  machine_word Wrd533;
  machine_word Wrd532;
  machine_word Wrd522;
  machine_word Wrd521;
  machine_word Wrd520;
  machine_word Wrd519;
  machine_word Wrd518;
  machine_word Wrd517;
  machine_word Wrd513;
  machine_word Wrd500;
  machine_word Wrd504;
  machine_word Wrd501;
  machine_word Wrd510;
  machine_word Wrd509;
  machine_word Wrd508;
  machine_word Wrd506;
  machine_word Wrd505;
  machine_word Wrd512;
  machine_word Wrd511;
  machine_word Wrd499;
  machine_word Wrd496;
  machine_word Wrd495;
  machine_word Wrd484;
  machine_word Wrd492;
  machine_word Wrd491;
  machine_word Wrd490;
  machine_word Wrd494;
  machine_word Wrd493;
  machine_word Wrd483;
  machine_word Wrd479;
  machine_word Wrd470;
  machine_word Wrd469;
  machine_word Wrd466;
  machine_word Wrd476;
  machine_word Wrd475;
  machine_word Wrd474;
  machine_word Wrd472;
  machine_word Wrd471;
  machine_word Wrd478;
  machine_word Wrd477;
  machine_word Wrd465;
  machine_word Wrd462;
  machine_word Wrd461;
  machine_word Wrd450;
  machine_word Wrd458;
  machine_word Wrd457;
  machine_word Wrd456;
  machine_word Wrd460;
  machine_word Wrd459;
  machine_word Wrd449;
  machine_word Wrd446;
  machine_word Wrd445;
  machine_word Wrd436;
  machine_word Wrd442;
  machine_word Wrd441;
  machine_word Wrd440;
  machine_word Wrd444;
  machine_word Wrd443;
  machine_word Wrd433;
  machine_word Wrd428;
  machine_word Wrd427;
  machine_word Wrd426;
  machine_word Wrd429;
  machine_word Wrd424;
  machine_word Wrd421;
  machine_word Wrd420;
  machine_word Wrd409;
  machine_word Wrd417;
  machine_word Wrd416;
  machine_word Wrd415;
  machine_word Wrd419;
  machine_word Wrd418;
  machine_word Wrd408;
  machine_word Wrd407;
  machine_word Wrd404;
  machine_word Wrd403;
  machine_word Wrd394;
  machine_word Wrd400;
  machine_word Wrd399;
  machine_word Wrd398;
  machine_word Wrd402;
  machine_word Wrd401;
  machine_word Wrd1233;
  machine_word Wrd1235;
  machine_word Wrd1234;
  machine_word Wrd1229;
  machine_word Wrd1231;
  machine_word Wrd1232;
  machine_word Wrd1225;
  machine_word Wrd1227;
  machine_word Wrd1228;
  machine_word Wrd1220;
  machine_word Wrd1222;
  machine_word Wrd1224;
  machine_word Wrd1223;
  machine_word Wrd1216;
  machine_word Wrd1200;
  machine_word Wrd1205;
  machine_word Wrd1202;
  machine_word Wrd1213;
  machine_word Wrd1212;
  machine_word Wrd1211;
  machine_word Wrd1209;
  machine_word Wrd1207;
  machine_word Wrd1206;
  machine_word Wrd1215;
  machine_word Wrd1214;
  machine_word Wrd1198;
  machine_word Wrd1195;
  machine_word Wrd1194;
  machine_word Wrd1183;
  machine_word Wrd1191;
  machine_word Wrd1190;
  machine_word Wrd1189;
  machine_word Wrd1193;
  machine_word Wrd1192;
  machine_word Wrd1179;
  machine_word Wrd1182;
  machine_word Wrd1181;
  machine_word Wrd1180;
  machine_word Wrd1178;
  machine_word Wrd1177;
  machine_word Wrd1176;
  machine_word Wrd1175;
  machine_word Wrd1173;
  machine_word Wrd1172;
  machine_word Wrd1168;
  machine_word Wrd1155;
  machine_word Wrd1159;
  machine_word Wrd1156;
  machine_word Wrd1165;
  machine_word Wrd1164;
  machine_word Wrd1163;
  machine_word Wrd1161;
  machine_word Wrd1160;
  machine_word Wrd1167;
  machine_word Wrd1166;
  machine_word Wrd1154;
  machine_word Wrd1151;
  machine_word Wrd1150;
  machine_word Wrd1139;
  machine_word Wrd1147;
  machine_word Wrd1146;
  machine_word Wrd1145;
  machine_word Wrd1149;
  machine_word Wrd1148;
  machine_word Wrd1138;
  machine_word Wrd1137;
  machine_word Wrd1136;
  machine_word Wrd1135;
  machine_word Wrd1134;
  machine_word Wrd1133;
  machine_word Wrd1129;
  machine_word Wrd1116;
  machine_word Wrd1120;
  machine_word Wrd1117;
  machine_word Wrd1126;
  machine_word Wrd1125;
  machine_word Wrd1124;
  machine_word Wrd1122;
  machine_word Wrd1121;
  machine_word Wrd1128;
  machine_word Wrd1127;
  machine_word Wrd1115;
  machine_word Wrd1112;
  machine_word Wrd1111;
  machine_word Wrd1100;
  machine_word Wrd1108;
  machine_word Wrd1107;
  machine_word Wrd1106;
  machine_word Wrd1110;
  machine_word Wrd1109;
  machine_word Wrd1099;
  machine_word Wrd1095;
  machine_word Wrd1086;
  machine_word Wrd1085;
  machine_word Wrd1082;
  machine_word Wrd1092;
  machine_word Wrd1091;
  machine_word Wrd1090;
  machine_word Wrd1088;
  machine_word Wrd1087;
  machine_word Wrd1094;
  machine_word Wrd1093;
  machine_word Wrd1081;
  machine_word Wrd1078;
  machine_word Wrd1077;
  machine_word Wrd1066;
  machine_word Wrd1074;
  machine_word Wrd1073;
  machine_word Wrd1072;
  machine_word Wrd1076;
  machine_word Wrd1075;
  machine_word Wrd1065;
  machine_word Wrd1062;
  machine_word Wrd1061;
  machine_word Wrd1052;
  machine_word Wrd1058;
  machine_word Wrd1057;
  machine_word Wrd1056;
  machine_word Wrd1060;
  machine_word Wrd1059;
  machine_word Wrd1049;
  machine_word Wrd1047;
  machine_word Wrd1048;
  machine_word Wrd1045;
  machine_word Wrd1046;
  machine_word Wrd1043;
  machine_word Wrd1044;
  machine_word Wrd1042;
  machine_word Wrd1028;
  machine_word Wrd1031;
  machine_word Wrd1029;
  machine_word Wrd1036;
  machine_word Wrd1035;
  machine_word Wrd1034;
  machine_word Wrd1033;
  machine_word Wrd1032;
  machine_word Wrd1037;
  machine_word Wrd1027;
  machine_word Wrd1026;
  machine_word Wrd1023;
  machine_word Wrd1022;
  machine_word Wrd1011;
  machine_word Wrd1019;
  machine_word Wrd1018;
  machine_word Wrd1017;
  machine_word Wrd1021;
  machine_word Wrd1020;
  machine_word Wrd1010;
  machine_word Wrd1009;
  machine_word Wrd1008;
  machine_word Wrd1007;
  machine_word Wrd1006;
  machine_word Wrd1005;
  machine_word Wrd1004;
  machine_word Wrd1003;
  machine_word Wrd1001;
  machine_word Wrd1000;
  machine_word Wrd996;
  machine_word Wrd983;
  machine_word Wrd987;
  machine_word Wrd984;
  machine_word Wrd993;
  machine_word Wrd992;
  machine_word Wrd991;
  machine_word Wrd989;
  machine_word Wrd988;
  machine_word Wrd995;
  machine_word Wrd994;
  machine_word Wrd982;
  machine_word Wrd979;
  machine_word Wrd978;
  machine_word Wrd967;
  machine_word Wrd975;
  machine_word Wrd974;
  machine_word Wrd973;
  machine_word Wrd977;
  machine_word Wrd976;
  machine_word Wrd966;
  machine_word Wrd965;
  machine_word Wrd964;
  machine_word Wrd963;
  machine_word Wrd962;
  machine_word Wrd961;
  machine_word Wrd957;
  machine_word Wrd944;
  machine_word Wrd948;
  machine_word Wrd945;
  machine_word Wrd954;
  machine_word Wrd953;
  machine_word Wrd952;
  machine_word Wrd950;
  machine_word Wrd949;
  machine_word Wrd956;
  machine_word Wrd955;
  machine_word Wrd943;
  machine_word Wrd940;
  machine_word Wrd939;
  machine_word Wrd928;
  machine_word Wrd936;
  machine_word Wrd935;
  machine_word Wrd934;
  machine_word Wrd938;
  machine_word Wrd937;
  machine_word Wrd927;
  machine_word Wrd923;
  machine_word Wrd914;
  machine_word Wrd913;
  machine_word Wrd910;
  machine_word Wrd920;
  machine_word Wrd919;
  machine_word Wrd918;
  machine_word Wrd916;
  machine_word Wrd915;
  machine_word Wrd922;
  machine_word Wrd921;
  machine_word Wrd909;
  machine_word Wrd906;
  machine_word Wrd905;
  machine_word Wrd894;
  machine_word Wrd902;
  machine_word Wrd901;
  machine_word Wrd900;
  machine_word Wrd904;
  machine_word Wrd903;
  machine_word Wrd893;
  machine_word Wrd890;
  machine_word Wrd889;
  machine_word Wrd880;
  machine_word Wrd886;
  machine_word Wrd885;
  machine_word Wrd884;
  machine_word Wrd888;
  machine_word Wrd887;
  machine_word Wrd877;
  machine_word Wrd875;
  machine_word Wrd876;
  machine_word Wrd873;
  machine_word Wrd874;
  machine_word Wrd872;
  machine_word Wrd858;
  machine_word Wrd861;
  machine_word Wrd859;
  machine_word Wrd866;
  machine_word Wrd865;
  machine_word Wrd864;
  machine_word Wrd863;
  machine_word Wrd862;
  machine_word Wrd867;
  machine_word Wrd857;
  machine_word Wrd856;
  machine_word Wrd853;
  machine_word Wrd852;
  machine_word Wrd841;
  machine_word Wrd849;
  machine_word Wrd848;
  machine_word Wrd847;
  machine_word Wrd851;
  machine_word Wrd850;
  machine_word Wrd840;
  machine_word Wrd839;
  machine_word Wrd838;
  machine_word Wrd837;
  machine_word Wrd836;
  machine_word Wrd835;
  machine_word Wrd834;
  machine_word Wrd833;
  machine_word Wrd831;
  machine_word Wrd830;
  machine_word Wrd826;
  machine_word Wrd813;
  machine_word Wrd817;
  machine_word Wrd814;
  machine_word Wrd823;
  machine_word Wrd822;
  machine_word Wrd821;
  machine_word Wrd819;
  machine_word Wrd818;
  machine_word Wrd825;
  machine_word Wrd824;
  machine_word Wrd812;
  machine_word Wrd809;
  machine_word Wrd808;
  machine_word Wrd797;
  machine_word Wrd805;
  machine_word Wrd804;
  machine_word Wrd803;
  machine_word Wrd807;
  machine_word Wrd806;
  machine_word Wrd796;
  machine_word Wrd795;
  machine_word Wrd794;
  machine_word Wrd793;
  machine_word Wrd792;
  machine_word Wrd791;
  machine_word Wrd787;
  machine_word Wrd774;
  machine_word Wrd778;
  machine_word Wrd775;
  machine_word Wrd784;
  machine_word Wrd783;
  machine_word Wrd782;
  machine_word Wrd780;
  machine_word Wrd779;
  machine_word Wrd786;
  machine_word Wrd785;
  machine_word Wrd773;
  machine_word Wrd770;
  machine_word Wrd769;
  machine_word Wrd758;
  machine_word Wrd766;
  machine_word Wrd765;
  machine_word Wrd764;
  machine_word Wrd768;
  machine_word Wrd767;
  machine_word Wrd757;
  machine_word Wrd753;
  machine_word Wrd744;
  machine_word Wrd743;
  machine_word Wrd740;
  machine_word Wrd750;
  machine_word Wrd749;
  machine_word Wrd748;
  machine_word Wrd746;
  machine_word Wrd745;
  machine_word Wrd752;
  machine_word Wrd751;
  machine_word Wrd739;
  machine_word Wrd736;
  machine_word Wrd735;
  machine_word Wrd724;
  machine_word Wrd732;
  machine_word Wrd731;
  machine_word Wrd730;
  machine_word Wrd734;
  machine_word Wrd733;
  machine_word Wrd723;
  machine_word Wrd720;
  machine_word Wrd719;
  machine_word Wrd710;
  machine_word Wrd716;
  machine_word Wrd715;
  machine_word Wrd714;
  machine_word Wrd718;
  machine_word Wrd717;
  machine_word Wrd391;
  machine_word Wrd389;
  machine_word Wrd390;
  machine_word Wrd388;
  machine_word Wrd374;
  machine_word Wrd377;
  machine_word Wrd375;
  machine_word Wrd382;
  machine_word Wrd381;
  machine_word Wrd380;
  machine_word Wrd379;
  machine_word Wrd378;
  machine_word Wrd383;
  machine_word Wrd373;
  machine_word Wrd372;
  machine_word Wrd369;
  machine_word Wrd368;
  machine_word Wrd357;
  machine_word Wrd365;
  machine_word Wrd364;
  machine_word Wrd363;
  machine_word Wrd367;
  machine_word Wrd366;
  machine_word Wrd356;
  machine_word Wrd355;
  machine_word Wrd354;
  machine_word Wrd353;
  machine_word Wrd352;
  machine_word Wrd351;
  machine_word Wrd350;
  machine_word Wrd349;
  machine_word Wrd347;
  machine_word Wrd346;
  machine_word Wrd342;
  machine_word Wrd329;
  machine_word Wrd333;
  machine_word Wrd330;
  machine_word Wrd339;
  machine_word Wrd338;
  machine_word Wrd337;
  machine_word Wrd335;
  machine_word Wrd334;
  machine_word Wrd341;
  machine_word Wrd340;
  machine_word Wrd328;
  machine_word Wrd325;
  machine_word Wrd324;
  machine_word Wrd313;
  machine_word Wrd321;
  machine_word Wrd320;
  machine_word Wrd319;
  machine_word Wrd323;
  machine_word Wrd322;
  machine_word Wrd312;
  machine_word Wrd311;
  machine_word Wrd310;
  machine_word Wrd309;
  machine_word Wrd308;
  machine_word Wrd307;
  machine_word Wrd303;
  machine_word Wrd290;
  machine_word Wrd294;
  machine_word Wrd291;
  machine_word Wrd300;
  machine_word Wrd299;
  machine_word Wrd298;
  machine_word Wrd296;
  machine_word Wrd295;
  machine_word Wrd302;
  machine_word Wrd301;
  machine_word Wrd289;
  machine_word Wrd286;
  machine_word Wrd285;
  machine_word Wrd274;
  machine_word Wrd282;
  machine_word Wrd281;
  machine_word Wrd280;
  machine_word Wrd284;
  machine_word Wrd283;
  machine_word Wrd273;
  machine_word Wrd269;
  machine_word Wrd260;
  machine_word Wrd259;
  machine_word Wrd256;
  machine_word Wrd266;
  machine_word Wrd265;
  machine_word Wrd264;
  machine_word Wrd262;
  machine_word Wrd261;
  machine_word Wrd268;
  machine_word Wrd267;
  machine_word Wrd255;
  machine_word Wrd252;
  machine_word Wrd251;
  machine_word Wrd240;
  machine_word Wrd248;
  machine_word Wrd247;
  machine_word Wrd246;
  machine_word Wrd250;
  machine_word Wrd249;
  machine_word Wrd239;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd226;
  machine_word Wrd232;
  machine_word Wrd231;
  machine_word Wrd230;
  machine_word Wrd234;
  machine_word Wrd233;
  machine_word Wrd223;
  machine_word Wrd220;
  machine_word Wrd217;
  machine_word Wrd219;
  machine_word Wrd218;
  machine_word Wrd204;
  machine_word Wrd212;
  machine_word Wrd211;
  machine_word Wrd210;
  machine_word Wrd216;
  machine_word Wrd215;
  machine_word Wrd214;
  machine_word Wrd213;
  machine_word Wrd184;
  machine_word Wrd189;
  machine_word Wrd197;
  machine_word Wrd196;
  machine_word Wrd195;
  machine_word Wrd193;
  machine_word Wrd199;
  machine_word Wrd182;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd170;
  machine_word Wrd157;
  machine_word Wrd160;
  machine_word Wrd158;
  machine_word Wrd154;
  machine_word Wrd155;
  machine_word Wrd153;
  machine_word Wrd1248;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd1242;
  machine_word Wrd1241;
  machine_word Wrd1240;
  machine_word Wrd1239;
  machine_word Wrd1243;
  machine_word Wrd144;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd141;
  machine_word Wrd142;
  machine_word Wrd1300;
  machine_word Wrd1308;
  machine_word Wrd1307;
  machine_word Wrd1306;
  machine_word Wrd1310;
  machine_word Wrd1298;
  machine_word Wrd1297;
  machine_word Wrd1295;
  machine_word Wrd1292;
  machine_word Wrd1283;
  machine_word Wrd1289;
  machine_word Wrd1288;
  machine_word Wrd1287;
  machine_word Wrd1290;
  machine_word Wrd1282;
  machine_word Wrd1279;
  machine_word Wrd1278;
  machine_word Wrd1267;
  machine_word Wrd1275;
  machine_word Wrd1274;
  machine_word Wrd1273;
  machine_word Wrd1277;
  machine_word Wrd1276;
  machine_word Wrd1266;
  machine_word Wrd1265;
  machine_word Wrd1262;
  machine_word Wrd1261;
  machine_word Wrd1250;
  machine_word Wrd1258;
  machine_word Wrd1257;
  machine_word Wrd1256;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd120;
  machine_word Wrd125;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd129;
  machine_word Wrd135;
  machine_word Wrd118;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd106;
  machine_word Wrd93;
  machine_word Wrd96;
  machine_word Wrd94;
  machine_word Wrd90;
  machine_word Wrd91;
  machine_word Wrd89;
  machine_word Wrd1321;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd1315;
  machine_word Wrd1314;
  machine_word Wrd1313;
  machine_word Wrd1312;
  machine_word Wrd1316;
  machine_word Wrd80;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd1373;
  machine_word Wrd1381;
  machine_word Wrd1380;
  machine_word Wrd1379;
  machine_word Wrd1383;
  machine_word Wrd1371;
  machine_word Wrd1370;
  machine_word Wrd1368;
  machine_word Wrd1365;
  machine_word Wrd1356;
  machine_word Wrd1362;
  machine_word Wrd1361;
  machine_word Wrd1360;
  machine_word Wrd1363;
  machine_word Wrd1355;
  machine_word Wrd1352;
  machine_word Wrd1351;
  machine_word Wrd1340;
  machine_word Wrd1348;
  machine_word Wrd1347;
  machine_word Wrd1346;
  machine_word Wrd1350;
  machine_word Wrd1349;
  machine_word Wrd1339;
  machine_word Wrd1338;
  machine_word Wrd1335;
  machine_word Wrd1334;
  machine_word Wrd1323;
  machine_word Wrd1331;
  machine_word Wrd1330;
  machine_word Wrd1329;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd56;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd71;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd1394;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd1388;
  machine_word Wrd1387;
  machine_word Wrd1386;
  machine_word Wrd1385;
  machine_word Wrd1389;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd1446;
  machine_word Wrd1454;
  machine_word Wrd1453;
  machine_word Wrd1452;
  machine_word Wrd1456;
  machine_word Wrd1444;
  machine_word Wrd1443;
  machine_word Wrd1441;
  machine_word Wrd1438;
  machine_word Wrd1429;
  machine_word Wrd1435;
  machine_word Wrd1434;
  machine_word Wrd1433;
  machine_word Wrd1436;
  machine_word Wrd1428;
  machine_word Wrd1425;
  machine_word Wrd1424;
  machine_word Wrd1413;
  machine_word Wrd1421;
  machine_word Wrd1420;
  machine_word Wrd1419;
  machine_word Wrd1423;
  machine_word Wrd1422;
  machine_word Wrd1412;
  machine_word Wrd1411;
  machine_word Wrd1408;
  machine_word Wrd1407;
  machine_word Wrd1396;
  machine_word Wrd1404;
  machine_word Wrd1403;
  machine_word Wrd1402;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd1514;
  machine_word Wrd1517;
  machine_word Wrd1516;
  machine_word Wrd1515;
  machine_word Wrd1510;
  machine_word Wrd1506;
  machine_word Wrd1509;
  machine_word Wrd1508;
  machine_word Wrd1507;
  machine_word Wrd1505;
  machine_word Wrd1497;
  machine_word Wrd1500;
  machine_word Wrd1499;
  machine_word Wrd1501;
  machine_word Wrd1496;
  machine_word Wrd1493;
  machine_word Wrd1492;
  machine_word Wrd1481;
  machine_word Wrd1489;
  machine_word Wrd1488;
  machine_word Wrd1487;
  machine_word Wrd1491;
  machine_word Wrd1490;
  machine_word Wrd1653;
  machine_word Wrd1658;
  machine_word Wrd1655;
  machine_word Wrd1666;
  machine_word Wrd1665;
  machine_word Wrd1664;
  machine_word Wrd1662;
  machine_word Wrd1660;
  machine_word Wrd1659;
  machine_word Wrd1668;
  machine_word Wrd1667;
  machine_word Wrd1651;
  machine_word Wrd1650;
  machine_word Wrd1647;
  machine_word Wrd1646;
  machine_word Wrd1635;
  machine_word Wrd1643;
  machine_word Wrd1642;
  machine_word Wrd1641;
  machine_word Wrd1645;
  machine_word Wrd1644;
  machine_word Wrd1634;
  machine_word Wrd1632;
  machine_word Wrd1633;
  machine_word Wrd1630;
  machine_word Wrd1631;
  machine_word Wrd1628;
  machine_word Wrd1629;
  machine_word Wrd1627;
  machine_word Wrd1624;
  machine_word Wrd1610;
  machine_word Wrd1614;
  machine_word Wrd1612;
  machine_word Wrd1621;
  machine_word Wrd1620;
  machine_word Wrd1619;
  machine_word Wrd1618;
  machine_word Wrd1616;
  machine_word Wrd1615;
  machine_word Wrd1622;
  machine_word Wrd1609;
  machine_word Wrd1606;
  machine_word Wrd1605;
  machine_word Wrd1594;
  machine_word Wrd1602;
  machine_word Wrd1601;
  machine_word Wrd1600;
  machine_word Wrd1604;
  machine_word Wrd1603;
  machine_word Wrd1593;
  machine_word Wrd1591;
  machine_word Wrd1592;
  machine_word Wrd1589;
  machine_word Wrd1590;
  machine_word Wrd1588;
  machine_word Wrd1585;
  machine_word Wrd1571;
  machine_word Wrd1575;
  machine_word Wrd1573;
  machine_word Wrd1582;
  machine_word Wrd1581;
  machine_word Wrd1580;
  machine_word Wrd1579;
  machine_word Wrd1577;
  machine_word Wrd1576;
  machine_word Wrd1583;
  machine_word Wrd1570;
  machine_word Wrd1567;
  machine_word Wrd1566;
  machine_word Wrd1555;
  machine_word Wrd1563;
  machine_word Wrd1562;
  machine_word Wrd1561;
  machine_word Wrd1565;
  machine_word Wrd1564;
  machine_word Wrd1554;
  machine_word Wrd1552;
  machine_word Wrd1553;
  machine_word Wrd1551;
  machine_word Wrd1548;
  machine_word Wrd1534;
  machine_word Wrd1538;
  machine_word Wrd1536;
  machine_word Wrd1545;
  machine_word Wrd1544;
  machine_word Wrd1543;
  machine_word Wrd1542;
  machine_word Wrd1540;
  machine_word Wrd1539;
  machine_word Wrd1546;
  machine_word Wrd1533;
  machine_word Wrd1530;
  machine_word Wrd1529;
  machine_word Wrd1518;
  machine_word Wrd1526;
  machine_word Wrd1525;
  machine_word Wrd1524;
  machine_word Wrd1528;
  machine_word Wrd1527;
  machine_word Wrd1682;
  machine_word Wrd1679;
  machine_word Wrd1479;
  machine_word Wrd1478;
  machine_word Wrd1476;
  machine_word Wrd1676;
  machine_word Wrd1675;
  machine_word Wrd1674;
  machine_word Wrd1673;
  machine_word Wrd1671;
  machine_word Wrd1670;
  machine_word Wrd1677;
  machine_word Wrd1474;
  machine_word Wrd1471;
  machine_word Wrd1470;
  machine_word Wrd1459;
  machine_word Wrd1467;
  machine_word Wrd1466;
  machine_word Wrd1465;
  machine_word Wrd1469;
  machine_word Wrd1468;
  machine_word Wrd1699;
  machine_word Wrd1696;
  machine_word Wrd1695;
  machine_word Wrd1684;
  machine_word Wrd1692;
  machine_word Wrd1691;
  machine_word Wrd1690;
  machine_word Wrd1694;
  machine_word Wrd1693;
  machine_word Wrd1458;
  machine_word Wrd1457;
  machine_word Wrd1730;
  machine_word Wrd1722;
  machine_word Wrd1724;
  machine_word Wrd1726;
  machine_word Wrd1725;
  machine_word Wrd1785;
  machine_word Wrd1787;
  machine_word Wrd1789;
  machine_word Wrd1788;
  machine_word Wrd1783;
  machine_word Wrd1775;
  machine_word Wrd1777;
  machine_word Wrd1779;
  machine_word Wrd1778;
  machine_word Wrd1774;
  machine_word Wrd1772;
  machine_word Wrd1773;
  machine_word Wrd1770;
  machine_word Wrd1771;
  machine_word Wrd1768;
  machine_word Wrd1769;
  machine_word Wrd1767;
  machine_word Wrd1761;
  machine_word Wrd1762;
  machine_word Wrd1763;
  machine_word Wrd1760;
  machine_word Wrd1752;
  machine_word Wrd1754;
  machine_word Wrd1756;
  machine_word Wrd1755;
  machine_word Wrd1751;
  machine_word Wrd1749;
  machine_word Wrd1750;
  machine_word Wrd1747;
  machine_word Wrd1748;
  machine_word Wrd1746;
  machine_word Wrd1740;
  machine_word Wrd1741;
  machine_word Wrd1742;
  machine_word Wrd1739;
  machine_word Wrd1731;
  machine_word Wrd1733;
  machine_word Wrd1735;
  machine_word Wrd1734;
  machine_word Wrd1721;
  machine_word Wrd1719;
  machine_word Wrd1720;
  machine_word Wrd1718;
  machine_word Wrd1712;
  machine_word Wrd1713;
  machine_word Wrd1714;
  machine_word Wrd1711;
  machine_word Wrd1703;
  machine_word Wrd1705;
  machine_word Wrd1707;
  machine_word Wrd1701;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_31_4);
      goto apply_generic_3_180;

    case 1:
      current_block = (Rpc - LABEL_31_7);
      goto search_overflow_158;

    case 2:
      current_block = (Rpc - LABEL_31_8);
      goto label_262;

    case 3:
      current_block = (Rpc - LABEL_31_9);
      goto label_263;

    case 4:
      current_block = (Rpc - LABEL_31_10);
      goto label_265;

    case 5:
      current_block = (Rpc - LABEL_31_11);
      goto label_266;

    case 6:
      current_block = (Rpc - LABEL_31_12);
      goto label_267;

    case 7:
      current_block = (Rpc - LABEL_31_13);
      goto label_268;

    case 8:
      current_block = (Rpc - LABEL_31_14);
      goto label_269;

    case 9:
      current_block = (Rpc - LABEL_31_15);
      goto label_264;

    case 10:
      current_block = (Rpc - LABEL_31_16);
      goto search_lines_160;

    case 11:
      current_block = (Rpc - LABEL_31_17);
      goto label_261;

    case 12:
      current_block = (Rpc - LABEL_31_18);
      goto label_250;

    case 13:
      current_block = (Rpc - LABEL_31_19);
      goto label_260;

    case 14:
      current_block = (Rpc - LABEL_31_20);
      goto label_253;

    case 15:
      current_block = (Rpc - LABEL_31_21);
      goto label_254;

    case 16:
      current_block = (Rpc - LABEL_31_22);
      goto label_255;

    case 17:
      current_block = (Rpc - LABEL_31_23);
      goto label_256;

    case 18:
      current_block = (Rpc - LABEL_31_24);
      goto label_257;

    case 19:
      current_block = (Rpc - LABEL_31_25);
      goto label_258;

    case 20:
      current_block = (Rpc - LABEL_31_26);
      goto label_259;

    case 21:
      current_block = (Rpc - LABEL_31_27);
      goto label_251;

    case 22:
      current_block = (Rpc - LABEL_31_28);
      goto label_252;

    case 23:
      current_block = (Rpc - LABEL_31_29);
      goto continuation_1;

    case 24:
      current_block = (Rpc - LABEL_31_30);
      goto continuation_14;

    case 25:
      current_block = (Rpc - LABEL_31_31);
      goto continuation_27;

    case 26:
      current_block = (Rpc - LABEL_31_32);
      goto continuation_40;

    case 27:
      current_block = (Rpc - LABEL_31_5);
      goto lambda_272;

    case 28:
      current_block = (Rpc - LABEL_31_33);
      goto label_247;

    case 29:
      current_block = (Rpc - LABEL_31_34);
      goto label_248;

    case 30:
      current_block = (Rpc - LABEL_31_35);
      goto label_249;

    case 31:
      current_block = (Rpc - LABEL_31_36);
      goto label_246;

    case 32:
      current_block = (Rpc - LABEL_31_37);
      goto label_182;

    case 33:
      current_block = (Rpc - LABEL_31_38);
      goto label_243;

    case 34:
      current_block = (Rpc - LABEL_31_39);
      goto label_244;

    case 35:
      current_block = (Rpc - LABEL_31_40);
      goto label_245;

    case 36:
      current_block = (Rpc - LABEL_31_41);
      goto label_242;

    case 37:
      current_block = (Rpc - LABEL_31_42);
      goto label_183;

    case 38:
      current_block = (Rpc - LABEL_31_43);
      goto label_239;

    case 39:
      current_block = (Rpc - LABEL_31_44);
      goto label_240;

    case 40:
      current_block = (Rpc - LABEL_31_45);
      goto label_241;

    case 41:
      current_block = (Rpc - LABEL_31_46);
      goto label_238;

    case 42:
      current_block = (Rpc - LABEL_31_47);
      goto label_184;

    case 43:
      current_block = (Rpc - LABEL_31_48);
      goto label_185;

    case 44:
      current_block = (Rpc - LABEL_31_49);
      goto label_186;

    case 45:
      current_block = (Rpc - LABEL_31_50);
      goto label_187;

    case 46:
      current_block = (Rpc - LABEL_31_51);
      goto label_188;

    case 47:
      current_block = (Rpc - LABEL_31_52);
      goto label_189;

    case 48:
      current_block = (Rpc - LABEL_31_53);
      goto label_190;

    case 49:
      current_block = (Rpc - LABEL_31_54);
      goto label_191;

    case 50:
      current_block = (Rpc - LABEL_31_55);
      goto label_192;

    case 51:
      current_block = (Rpc - LABEL_31_56);
      goto label_193;

    case 52:
      current_block = (Rpc - LABEL_31_57);
      goto label_194;

    case 53:
      current_block = (Rpc - LABEL_31_58);
      goto label_212;

    case 54:
      current_block = (Rpc - LABEL_31_59);
      goto label_213;

    case 55:
      current_block = (Rpc - LABEL_31_60);
      goto label_214;

    case 56:
      current_block = (Rpc - LABEL_31_61);
      goto label_215;

    case 57:
      current_block = (Rpc - LABEL_31_62);
      goto label_216;

    case 58:
      current_block = (Rpc - LABEL_31_63);
      goto label_217;

    case 59:
      current_block = (Rpc - LABEL_31_64);
      goto label_218;

    case 60:
      current_block = (Rpc - LABEL_31_65);
      goto label_219;

    case 61:
      current_block = (Rpc - LABEL_31_66);
      goto label_220;

    case 62:
      current_block = (Rpc - LABEL_31_67);
      goto label_221;

    case 63:
      current_block = (Rpc - LABEL_31_68);
      goto label_222;

    case 64:
      current_block = (Rpc - LABEL_31_69);
      goto label_223;

    case 65:
      current_block = (Rpc - LABEL_31_70);
      goto label_224;

    case 66:
      current_block = (Rpc - LABEL_31_71);
      goto label_225;

    case 67:
      current_block = (Rpc - LABEL_31_72);
      goto label_226;

    case 68:
      current_block = (Rpc - LABEL_31_73);
      goto label_227;

    case 69:
      current_block = (Rpc - LABEL_31_74);
      goto label_228;

    case 70:
      current_block = (Rpc - LABEL_31_75);
      goto label_229;

    case 71:
      current_block = (Rpc - LABEL_31_76);
      goto label_230;

    case 72:
      current_block = (Rpc - LABEL_31_77);
      goto label_231;

    case 73:
      current_block = (Rpc - LABEL_31_78);
      goto label_232;

    case 74:
      current_block = (Rpc - LABEL_31_79);
      goto label_233;

    case 75:
      current_block = (Rpc - LABEL_31_80);
      goto label_234;

    case 76:
      current_block = (Rpc - LABEL_31_81);
      goto label_235;

    case 77:
      current_block = (Rpc - LABEL_31_82);
      goto label_236;

    case 78:
      current_block = (Rpc - LABEL_31_83);
      goto label_237;

    case 79:
      current_block = (Rpc - LABEL_31_85);
      goto label_195;

    case 80:
      current_block = (Rpc - LABEL_31_86);
      goto label_196;

    case 81:
      current_block = (Rpc - LABEL_31_87);
      goto label_197;

    case 82:
      current_block = (Rpc - LABEL_31_88);
      goto label_198;

    case 83:
      current_block = (Rpc - LABEL_31_89);
      goto label_199;

    case 84:
      current_block = (Rpc - LABEL_31_90);
      goto label_200;

    case 85:
      current_block = (Rpc - LABEL_31_91);
      goto label_201;

    case 86:
      current_block = (Rpc - LABEL_31_92);
      goto label_202;

    case 87:
      current_block = (Rpc - LABEL_31_93);
      goto label_203;

    case 88:
      current_block = (Rpc - LABEL_31_94);
      goto label_204;

    case 89:
      current_block = (Rpc - LABEL_31_95);
      goto label_205;

    case 90:
      current_block = (Rpc - LABEL_31_96);
      goto label_206;

    case 91:
      current_block = (Rpc - LABEL_31_97);
      goto label_207;

    case 92:
      current_block = (Rpc - LABEL_31_98);
      goto label_208;

    case 93:
      current_block = (Rpc - LABEL_31_99);
      goto label_209;

    case 94:
      current_block = (Rpc - LABEL_31_100);
      goto label_210;

    case 95:
      current_block = (Rpc - LABEL_31_101);
      goto label_211;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_generic_3_271)
DEFLABEL (apply_generic_3_180)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_272)
  CLOSURE_HEADER (LABEL_31_5);

DEFLABEL (lambda_179)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_31]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 62)
    goto label_425;

DEFLABEL (label_424)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd13.Obj) = ((Wrd14.pObj) [0]);
  (Wrd17.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd18.Obj) = (Rsp [5]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  (Wrd16.Obj) = (MAKE_OBJECT (26, (Wrd19.uLng)));
  (Wrd1389.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd1389.uLng) == 10))
    goto label_423;
  if (! ((Wrd17.uLng) == 26))
    goto label_423;
  (Wrd1385.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd1386.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd1387.Obj) = ((Wrd1386.pObj) [0]);
  (Wrd1388.Lng) = (FIXNUM_TO_LONG (Wrd1387.Obj));
  if (! (((unsigned long) (Wrd1385.Lng)) < ((unsigned long) (Wrd1388.Lng))))
    goto label_423;
  (Wrd22.pObj) = (& ((Wrd1386.pObj) [(Wrd19.Lng)]));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_421;

DEFLABEL (label_420)
  (Wrd48.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd49.Obj) = (Rsp [5]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  (Wrd51.Obj) = (MAKE_OBJECT (26, (Wrd50.uLng)));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd54.Obj) = ((Wrd52.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd71.uLng) == 10)
    goto label_276;

DEFLABEL (label_275)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_6]), 2);

DEFLABEL (label_276)
  if (! ((Wrd48.uLng) == 26))
    goto label_275;
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) (Wrd65.Lng)) < ((unsigned long) (Wrd69.Lng))))
    goto label_275;
  (Wrd61.pObj) = (& ((Wrd67.pObj) [(Wrd50.Lng)]));
  (Wrd56.Obj) = ((Wrd61.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_419)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_30]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = (Rsp [5]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if ((Wrd76.uLng) == 62)
    goto label_412;

DEFLABEL (label_411)
  (Wrd78.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd77.Obj) = ((Wrd78.pObj) [0]);
  (Wrd81.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd82.Obj) = (Rsp [5]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  (Wrd80.Obj) = (MAKE_OBJECT (26, (Wrd83.uLng)));
  (Wrd1316.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd1316.uLng) == 10))
    goto label_410;
  if (! ((Wrd81.uLng) == 26))
    goto label_410;
  (Wrd1312.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  (Wrd1313.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd1314.Obj) = ((Wrd1313.pObj) [0]);
  (Wrd1315.Lng) = (FIXNUM_TO_LONG (Wrd1314.Obj));
  if (! (((unsigned long) (Wrd1312.Lng)) < ((unsigned long) (Wrd1315.Lng))))
    goto label_410;
  (Wrd86.pObj) = (& ((Wrd1313.pObj) [(Wrd83.Lng)]));
  (Wrd87.Obj) = ((Wrd86.pObj) [1]);
  if ((Wrd87.Obj) == ((SCHEME_OBJECT) 0))
    goto label_408;

DEFLABEL (label_407)
  (Wrd112.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd113.Obj) = (Rsp [5]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  (Wrd115.Obj) = (MAKE_OBJECT (26, (Wrd114.uLng)));
  (* (--Rsp)) = (Wrd115.Obj);
  (Wrd116.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd118.Obj) = ((Wrd116.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd135.uLng) == 10))
    goto label_275;
  if (! ((Wrd112.uLng) == 26))
    goto label_275;
  (Wrd129.Lng) = (FIXNUM_TO_LONG (Wrd115.Obj));
  (Wrd131.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd132.Obj) = ((Wrd131.pObj) [0]);
  (Wrd133.Lng) = (FIXNUM_TO_LONG (Wrd132.Obj));
  if (! (((unsigned long) (Wrd129.Lng)) < ((unsigned long) (Wrd133.Lng))))
    goto label_275;
  (Wrd125.pObj) = (& ((Wrd131.pObj) [(Wrd114.Lng)]));
  (Wrd120.Obj) = ((Wrd125.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd120.Obj);

DEFLABEL (label_406)
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_29]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (Wrd139.Obj) = (Rsp [5]);
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd139.Obj));
  if ((Wrd140.uLng) == 62)
    goto label_397;

DEFLABEL (label_396)
  (Wrd142.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd141.Obj) = ((Wrd142.pObj) [0]);
  (Wrd145.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd146.Obj) = (Rsp [5]);
  (Wrd147.uLng) = (OBJECT_TYPE (Wrd146.Obj));
  (Wrd144.Obj) = (MAKE_OBJECT (26, (Wrd147.uLng)));
  (Wrd1243.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if (! ((Wrd1243.uLng) == 10))
    goto label_395;
  if (! ((Wrd145.uLng) == 26))
    goto label_395;
  (Wrd1239.Lng) = (FIXNUM_TO_LONG (Wrd144.Obj));
  (Wrd1240.pObj) = (OBJECT_ADDRESS (Wrd141.Obj));
  (Wrd1241.Obj) = ((Wrd1240.pObj) [0]);
  (Wrd1242.Lng) = (FIXNUM_TO_LONG (Wrd1241.Obj));
  if (! (((unsigned long) (Wrd1239.Lng)) < ((unsigned long) (Wrd1242.Lng))))
    goto label_395;
  (Wrd150.pObj) = (& ((Wrd1240.pObj) [(Wrd147.Lng)]));
  (Wrd151.Obj) = ((Wrd150.pObj) [1]);
  if ((Wrd151.Obj) == ((SCHEME_OBJECT) 0))
    goto label_391;

DEFLABEL (label_390)
  (Wrd176.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd177.Obj) = (Rsp [5]);
  (Wrd178.uLng) = (OBJECT_TYPE (Wrd177.Obj));
  (Wrd179.Obj) = (MAKE_OBJECT (26, (Wrd178.uLng)));
  (* (--Rsp)) = (Wrd179.Obj);
  (Wrd180.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd182.Obj) = ((Wrd180.pObj) [0]);
  (* (--Rsp)) = (Wrd182.Obj);
  (Wrd199.uLng) = (OBJECT_TYPE (Wrd182.Obj));
  if (! ((Wrd199.uLng) == 10))
    goto label_275;
  if (! ((Wrd176.uLng) == 26))
    goto label_275;
  (Wrd193.Lng) = (FIXNUM_TO_LONG (Wrd179.Obj));
  (Wrd195.pObj) = (OBJECT_ADDRESS (Wrd182.Obj));
  (Wrd196.Obj) = ((Wrd195.pObj) [0]);
  (Wrd197.Lng) = (FIXNUM_TO_LONG (Wrd196.Obj));
  if (! (((unsigned long) (Wrd193.Lng)) < ((unsigned long) (Wrd197.Lng))))
    goto label_275;
  (Wrd189.pObj) = (& ((Wrd195.pObj) [(Wrd178.Lng)]));
  (Wrd184.Obj) = ((Wrd189.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd184.Obj);

DEFLABEL (label_389)
  (Wrd213.Obj) = (Rsp [4]);
  (Wrd214.pObj) = (OBJECT_ADDRESS (Wrd213.Obj));
  (Wrd215.Obj) = ((Wrd214.pObj) [2]);
  (Wrd216.uLng) = (OBJECT_TYPE (Wrd215.Obj));
  if (! ((Wrd216.uLng) == 62))
    goto label_388;
  (Wrd210.pObj) = (OBJECT_ADDRESS (Wrd215.Obj));
  (Wrd211.Obj) = ((Wrd210.pObj) [0]);
  (Wrd212.Lng) = (FIXNUM_TO_LONG (Wrd211.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd212.Lng))))
    goto label_388;
  (Wrd204.Obj) = ((Wrd210.pObj) [7]);
  (* (--Rsp)) = (Wrd204.Obj);

DEFLABEL (label_387)
  (Wrd233.Obj) = (Rsp [0]);
  (Wrd234.uLng) = (OBJECT_TYPE (Wrd233.Obj));
  if (! ((Wrd234.uLng) == 62))
    goto label_386;
  (Wrd230.pObj) = (OBJECT_ADDRESS (Wrd233.Obj));
  (Wrd231.Obj) = ((Wrd230.pObj) [0]);
  (Wrd232.Lng) = (FIXNUM_TO_LONG (Wrd231.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd232.Lng))))
    goto label_386;
  (Wrd226.Obj) = ((Wrd230.pObj) [3]);
  (* (--Rsp)) = (Wrd226.Obj);

DEFLABEL (label_385)
  (Wrd249.Obj) = (Rsp [1]);
  (Wrd250.uLng) = (OBJECT_TYPE (Wrd249.Obj));
  if (! ((Wrd250.uLng) == 62))
    goto label_384;
  (Wrd246.pObj) = (OBJECT_ADDRESS (Wrd249.Obj));
  (Wrd247.Obj) = ((Wrd246.pObj) [0]);
  (Wrd248.Lng) = (FIXNUM_TO_LONG (Wrd247.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd248.Lng))))
    goto label_384;
  (Wrd240.Obj) = ((Wrd246.pObj) [2]);

DEFLABEL (label_383)
  (Wrd267.Obj) = (Rsp [4]);
  (Wrd268.uLng) = (OBJECT_TYPE (Wrd267.Obj));
  if (! ((Wrd268.uLng) == 62))
    goto label_382;
  (Wrd261.uLng) = (OBJECT_TYPE (Wrd240.Obj));
  if (! ((Wrd261.uLng) == 26))
    goto label_382;
  (Wrd262.Lng) = (FIXNUM_TO_LONG (Wrd240.Obj));
  (Wrd264.pObj) = (OBJECT_ADDRESS (Wrd267.Obj));
  (Wrd265.Obj) = ((Wrd264.pObj) [0]);
  (Wrd266.Lng) = (FIXNUM_TO_LONG (Wrd265.Obj));
  if (! (((unsigned long) (Wrd262.Lng)) < ((unsigned long) (Wrd266.Lng))))
    goto label_382;
  (Wrd256.uLng) = (OBJECT_DATUM (Wrd240.Obj));
  (Wrd259.pObj) = (& ((Wrd264.pObj) [(Wrd256.Lng)]));
  (Wrd260.Obj) = ((Wrd259.pObj) [1]);
  (* (--Rsp)) = (Wrd260.Obj);

DEFLABEL (label_381)
  (Wrd283.Obj) = (Rsp [2]);
  (Wrd284.uLng) = (OBJECT_TYPE (Wrd283.Obj));
  if (! ((Wrd284.uLng) == 62))
    goto label_380;
  (Wrd280.pObj) = (OBJECT_ADDRESS (Wrd283.Obj));
  (Wrd281.Obj) = ((Wrd280.pObj) [0]);
  (Wrd282.Lng) = (FIXNUM_TO_LONG (Wrd281.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd282.Lng))))
    goto label_380;
  (Wrd274.Obj) = ((Wrd280.pObj) [2]);

DEFLABEL (label_379)
  (Wrd301.Obj) = (Rsp [4]);
  (Wrd302.uLng) = (OBJECT_TYPE (Wrd301.Obj));
  if (! ((Wrd302.uLng) == 62))
    goto label_378;
  (Wrd295.uLng) = (OBJECT_TYPE (Wrd274.Obj));
  if (! ((Wrd295.uLng) == 26))
    goto label_378;
  (Wrd296.Lng) = (FIXNUM_TO_LONG (Wrd274.Obj));
  (Wrd298.pObj) = (OBJECT_ADDRESS (Wrd301.Obj));
  (Wrd299.Obj) = ((Wrd298.pObj) [0]);
  (Wrd300.Lng) = (FIXNUM_TO_LONG (Wrd299.Obj));
  if (! (((unsigned long) (Wrd296.Lng)) < ((unsigned long) (Wrd300.Lng))))
    goto label_378;
  (Wrd291.uLng) = (OBJECT_DATUM (Wrd274.Obj));
  (Wrd294.pObj) = (& ((Wrd298.pObj) [(Wrd291.Lng)]));
  (Wrd290.Obj) = ((Wrd294.pObj) [1]);

DEFLABEL (label_377)
  (Wrd308.Obj) = (* (Rsp++));
  (Wrd309.Lng) = (FIXNUM_TO_LONG (Wrd290.Obj));
  (Wrd310.Lng) = (FIXNUM_TO_LONG (Wrd308.Obj));
  (Wrd311.Lng) = ((Wrd309.Lng) + (Wrd310.Lng));
  (Wrd312.Obj) = (LONG_TO_FIXNUM (Wrd311.Lng));
  (* (--Rsp)) = (Wrd312.Obj);
  (Wrd322.Obj) = (Rsp [2]);
  (Wrd323.uLng) = (OBJECT_TYPE (Wrd322.Obj));
  if (! ((Wrd323.uLng) == 62))
    goto label_376;
  (Wrd319.pObj) = (OBJECT_ADDRESS (Wrd322.Obj));
  (Wrd320.Obj) = ((Wrd319.pObj) [0]);
  (Wrd321.Lng) = (FIXNUM_TO_LONG (Wrd320.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd321.Lng))))
    goto label_376;
  (Wrd313.Obj) = ((Wrd319.pObj) [2]);

DEFLABEL (label_375)
  (Wrd340.Obj) = (Rsp [3]);
  (Wrd341.uLng) = (OBJECT_TYPE (Wrd340.Obj));
  if (! ((Wrd341.uLng) == 62))
    goto label_374;
  (Wrd334.uLng) = (OBJECT_TYPE (Wrd313.Obj));
  if (! ((Wrd334.uLng) == 26))
    goto label_374;
  (Wrd335.Lng) = (FIXNUM_TO_LONG (Wrd313.Obj));
  (Wrd337.pObj) = (OBJECT_ADDRESS (Wrd340.Obj));
  (Wrd338.Obj) = ((Wrd337.pObj) [0]);
  (Wrd339.Lng) = (FIXNUM_TO_LONG (Wrd338.Obj));
  if (! (((unsigned long) (Wrd335.Lng)) < ((unsigned long) (Wrd339.Lng))))
    goto label_374;
  (Wrd330.uLng) = (OBJECT_DATUM (Wrd313.Obj));
  (Wrd333.pObj) = (& ((Wrd337.pObj) [(Wrd330.Lng)]));
  (Wrd329.Obj) = ((Wrd333.pObj) [1]);

DEFLABEL (label_373)
  (Wrd347.Obj) = (* (Rsp++));
  (Wrd349.Lng) = (FIXNUM_TO_LONG (Wrd329.Obj));
  (Wrd350.Lng) = (FIXNUM_TO_LONG (Wrd347.Obj));
  (Wrd351.Lng) = ((Wrd349.Lng) + (Wrd350.Lng));
  (Wrd352.Obj) = (* (Rsp++));
  Wrd353 = Wrd351;
  (Wrd354.Lng) = (FIXNUM_TO_LONG (Wrd352.Obj));
  (Wrd355.Lng) = ((Wrd353.Lng) & (Wrd354.Lng));
  (Wrd356.Obj) = (LONG_TO_FIXNUM (Wrd355.Lng));
  (* (--Rsp)) = (Wrd356.Obj);
  (Wrd366.Obj) = (Rsp [1]);
  (Wrd367.uLng) = (OBJECT_TYPE (Wrd366.Obj));
  if (! ((Wrd367.uLng) == 62))
    goto label_372;
  (Wrd363.pObj) = (OBJECT_ADDRESS (Wrd366.Obj));
  (Wrd364.Obj) = ((Wrd363.pObj) [0]);
  (Wrd365.Lng) = (FIXNUM_TO_LONG (Wrd364.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd365.Lng))))
    goto label_372;
  (Wrd357.Obj) = ((Wrd363.pObj) [6]);

DEFLABEL (label_371)
  (Wrd373.Obj) = (* (Rsp++));
  (Wrd383.uLng) = (OBJECT_TYPE (Wrd357.Obj));
  if (! ((Wrd383.uLng) == 10))
    goto label_370;
  (Wrd378.uLng) = (OBJECT_TYPE (Wrd373.Obj));
  if (! ((Wrd378.uLng) == 26))
    goto label_370;
  (Wrd379.Lng) = (FIXNUM_TO_LONG (Wrd373.Obj));
  (Wrd380.pObj) = (OBJECT_ADDRESS (Wrd357.Obj));
  (Wrd381.Obj) = ((Wrd380.pObj) [0]);
  (Wrd382.Lng) = (FIXNUM_TO_LONG (Wrd381.Obj));
  if (! (((unsigned long) (Wrd379.Lng)) < ((unsigned long) (Wrd382.Lng))))
    goto label_370;
  (Wrd375.uLng) = (OBJECT_DATUM (Wrd373.Obj));
  (Wrd377.pObj) = (& ((Wrd380.pObj) [(Wrd375.Lng)]));
  (Wrd374.Obj) = ((Wrd377.pObj) [1]);

DEFLABEL (label_369)
  (Wrd390.pObj) = (OBJECT_ADDRESS (Wrd374.Obj));
  (Wrd389.Obj) = ((Wrd390.pObj) [0]);
  (Wrd391.Obj) = (Rsp [1]);
  if ((Wrd391.Obj) == (Wrd389.Obj))
    goto label_314;

DEFLABEL (label_313)
  (Wrd401.Obj) = (Rsp [0]);
  (Wrd402.uLng) = (OBJECT_TYPE (Wrd401.Obj));
  if (! ((Wrd402.uLng) == 62))
    goto label_312;
  (Wrd398.pObj) = (OBJECT_ADDRESS (Wrd401.Obj));
  (Wrd399.Obj) = ((Wrd398.pObj) [0]);
  (Wrd400.Lng) = (FIXNUM_TO_LONG (Wrd399.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd400.Lng))))
    goto label_312;
  (Wrd394.Obj) = ((Wrd398.pObj) [4]);
  (* (--Rsp)) = (Wrd394.Obj);

DEFLABEL (label_311)
  (Wrd408.Obj) = (current_block [OBJECT_31_9]);
  (* (--Rsp)) = (Wrd408.Obj);
  (Wrd418.Obj) = (Rsp [2]);
  (Wrd419.uLng) = (OBJECT_TYPE (Wrd418.Obj));
  if (! ((Wrd419.uLng) == 62))
    goto label_310;
  (Wrd415.pObj) = (OBJECT_ADDRESS (Wrd418.Obj));
  (Wrd416.Obj) = ((Wrd415.pObj) [0]);
  (Wrd417.Lng) = (FIXNUM_TO_LONG (Wrd416.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd417.Lng))))
    goto label_310;
  (Wrd409.Obj) = ((Wrd415.pObj) [6]);

DEFLABEL (label_309)
  (Wrd429.uLng) = (OBJECT_TYPE (Wrd409.Obj));
  if (! ((Wrd429.uLng) == 10))
    goto label_308;
  (Wrd426.pObj) = (OBJECT_ADDRESS (Wrd409.Obj));
  (Wrd427.Obj) = ((Wrd426.pObj) [0]);
  (Wrd428.Obj) = (MAKE_OBJECT (26, (Wrd427.uLng)));
  (* (--Rsp)) = (Wrd428.Obj);

DEFLABEL (label_307)
  (Wrd443.Obj) = (Rsp [3]);
  (Wrd444.uLng) = (OBJECT_TYPE (Wrd443.Obj));
  if (! ((Wrd444.uLng) == 62))
    goto label_306;
  (Wrd440.pObj) = (OBJECT_ADDRESS (Wrd443.Obj));
  (Wrd441.Obj) = ((Wrd440.pObj) [0]);
  (Wrd442.Lng) = (FIXNUM_TO_LONG (Wrd441.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd442.Lng))))
    goto label_306;
  (Wrd436.Obj) = ((Wrd440.pObj) [3]);
  (* (--Rsp)) = (Wrd436.Obj);

DEFLABEL (label_305)
  (Wrd459.Obj) = (Rsp [4]);
  (Wrd460.uLng) = (OBJECT_TYPE (Wrd459.Obj));
  if (! ((Wrd460.uLng) == 62))
    goto label_304;
  (Wrd456.pObj) = (OBJECT_ADDRESS (Wrd459.Obj));
  (Wrd457.Obj) = ((Wrd456.pObj) [0]);
  (Wrd458.Lng) = (FIXNUM_TO_LONG (Wrd457.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd458.Lng))))
    goto label_304;
  (Wrd450.Obj) = ((Wrd456.pObj) [2]);

DEFLABEL (label_303)
  (Wrd477.Obj) = (Rsp [7]);
  (Wrd478.uLng) = (OBJECT_TYPE (Wrd477.Obj));
  if (! ((Wrd478.uLng) == 62))
    goto label_302;
  (Wrd471.uLng) = (OBJECT_TYPE (Wrd450.Obj));
  if (! ((Wrd471.uLng) == 26))
    goto label_302;
  (Wrd472.Lng) = (FIXNUM_TO_LONG (Wrd450.Obj));
  (Wrd474.pObj) = (OBJECT_ADDRESS (Wrd477.Obj));
  (Wrd475.Obj) = ((Wrd474.pObj) [0]);
  (Wrd476.Lng) = (FIXNUM_TO_LONG (Wrd475.Obj));
  if (! (((unsigned long) (Wrd472.Lng)) < ((unsigned long) (Wrd476.Lng))))
    goto label_302;
  (Wrd466.uLng) = (OBJECT_DATUM (Wrd450.Obj));
  (Wrd469.pObj) = (& ((Wrd474.pObj) [(Wrd466.Lng)]));
  (Wrd470.Obj) = ((Wrd469.pObj) [1]);
  (* (--Rsp)) = (Wrd470.Obj);

DEFLABEL (label_301)
  (Wrd493.Obj) = (Rsp [5]);
  (Wrd494.uLng) = (OBJECT_TYPE (Wrd493.Obj));
  if (! ((Wrd494.uLng) == 62))
    goto label_300;
  (Wrd490.pObj) = (OBJECT_ADDRESS (Wrd493.Obj));
  (Wrd491.Obj) = ((Wrd490.pObj) [0]);
  (Wrd492.Lng) = (FIXNUM_TO_LONG (Wrd491.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd492.Lng))))
    goto label_300;
  (Wrd484.Obj) = ((Wrd490.pObj) [2]);

DEFLABEL (label_299)
  (Wrd511.Obj) = (Rsp [7]);
  (Wrd512.uLng) = (OBJECT_TYPE (Wrd511.Obj));
  if (! ((Wrd512.uLng) == 62))
    goto label_298;
  (Wrd505.uLng) = (OBJECT_TYPE (Wrd484.Obj));
  if (! ((Wrd505.uLng) == 26))
    goto label_298;
  (Wrd506.Lng) = (FIXNUM_TO_LONG (Wrd484.Obj));
  (Wrd508.pObj) = (OBJECT_ADDRESS (Wrd511.Obj));
  (Wrd509.Obj) = ((Wrd508.pObj) [0]);
  (Wrd510.Lng) = (FIXNUM_TO_LONG (Wrd509.Obj));
  if (! (((unsigned long) (Wrd506.Lng)) < ((unsigned long) (Wrd510.Lng))))
    goto label_298;
  (Wrd501.uLng) = (OBJECT_DATUM (Wrd484.Obj));
  (Wrd504.pObj) = (& ((Wrd508.pObj) [(Wrd501.Lng)]));
  (Wrd500.Obj) = ((Wrd504.pObj) [1]);

DEFLABEL (label_297)
  (Wrd518.Obj) = (* (Rsp++));
  (Wrd519.Lng) = (FIXNUM_TO_LONG (Wrd500.Obj));
  (Wrd520.Lng) = (FIXNUM_TO_LONG (Wrd518.Obj));
  (Wrd521.Lng) = ((Wrd519.Lng) + (Wrd520.Lng));
  (Wrd522.Obj) = (LONG_TO_FIXNUM (Wrd521.Lng));
  (* (--Rsp)) = (Wrd522.Obj);
  (Wrd532.Obj) = (Rsp [5]);
  (Wrd533.uLng) = (OBJECT_TYPE (Wrd532.Obj));
  if (! ((Wrd533.uLng) == 62))
    goto label_296;
  (Wrd529.pObj) = (OBJECT_ADDRESS (Wrd532.Obj));
  (Wrd530.Obj) = ((Wrd529.pObj) [0]);
  (Wrd531.Lng) = (FIXNUM_TO_LONG (Wrd530.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd531.Lng))))
    goto label_296;
  (Wrd523.Obj) = ((Wrd529.pObj) [2]);

DEFLABEL (label_295)
  (Wrd550.Obj) = (Rsp [6]);
  (Wrd551.uLng) = (OBJECT_TYPE (Wrd550.Obj));
  if (! ((Wrd551.uLng) == 62))
    goto label_294;
  (Wrd544.uLng) = (OBJECT_TYPE (Wrd523.Obj));
  if (! ((Wrd544.uLng) == 26))
    goto label_294;
  (Wrd545.Lng) = (FIXNUM_TO_LONG (Wrd523.Obj));
  (Wrd547.pObj) = (OBJECT_ADDRESS (Wrd550.Obj));
  (Wrd548.Obj) = ((Wrd547.pObj) [0]);
  (Wrd549.Lng) = (FIXNUM_TO_LONG (Wrd548.Obj));
  if (! (((unsigned long) (Wrd545.Lng)) < ((unsigned long) (Wrd549.Lng))))
    goto label_294;
  (Wrd540.uLng) = (OBJECT_DATUM (Wrd523.Obj));
  (Wrd543.pObj) = (& ((Wrd547.pObj) [(Wrd540.Lng)]));
  (Wrd539.Obj) = ((Wrd543.pObj) [1]);

DEFLABEL (label_293)
  (Wrd557.Obj) = (* (Rsp++));
  (Wrd559.Lng) = (FIXNUM_TO_LONG (Wrd539.Obj));
  (Wrd560.Lng) = (FIXNUM_TO_LONG (Wrd557.Obj));
  (Wrd561.Lng) = ((Wrd559.Lng) + (Wrd560.Lng));
  (Wrd562.Obj) = (* (Rsp++));
  Wrd564 = Wrd561;
  (Wrd565.Lng) = (FIXNUM_TO_LONG (Wrd562.Obj));
  (Wrd568.Lng) = ((Wrd564.Lng) & (Wrd565.Lng));
  (Wrd569.Lng) = ((Wrd568.Lng) + 1L);
  (Wrd567.Obj) = (LONG_TO_FIXNUM (Wrd569.Lng));
  (Wrd570.Obj) = (* (Rsp++));
  if ((Wrd567.Obj) == (Wrd570.Obj))
    goto label_292;
  (Wrd580.Obj) = (Rsp [2]);
  (Wrd581.uLng) = (OBJECT_TYPE (Wrd580.Obj));
  if (! ((Wrd581.uLng) == 62))
    goto label_291;
  (Wrd577.pObj) = (OBJECT_ADDRESS (Wrd580.Obj));
  (Wrd578.Obj) = ((Wrd577.pObj) [0]);
  (Wrd579.Lng) = (FIXNUM_TO_LONG (Wrd578.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd579.Lng))))
    goto label_291;
  (Wrd573.Obj) = ((Wrd577.pObj) [3]);
  (* (--Rsp)) = (Wrd573.Obj);

DEFLABEL (label_290)
  (Wrd596.Obj) = (Rsp [3]);
  (Wrd597.uLng) = (OBJECT_TYPE (Wrd596.Obj));
  if (! ((Wrd597.uLng) == 62))
    goto label_289;
  (Wrd593.pObj) = (OBJECT_ADDRESS (Wrd596.Obj));
  (Wrd594.Obj) = ((Wrd593.pObj) [0]);
  (Wrd595.Lng) = (FIXNUM_TO_LONG (Wrd594.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd595.Lng))))
    goto label_289;
  (Wrd587.Obj) = ((Wrd593.pObj) [2]);

DEFLABEL (label_288)
  (Wrd614.Obj) = (Rsp [6]);
  (Wrd615.uLng) = (OBJECT_TYPE (Wrd614.Obj));
  if (! ((Wrd615.uLng) == 62))
    goto label_287;
  (Wrd608.uLng) = (OBJECT_TYPE (Wrd587.Obj));
  if (! ((Wrd608.uLng) == 26))
    goto label_287;
  (Wrd609.Lng) = (FIXNUM_TO_LONG (Wrd587.Obj));
  (Wrd611.pObj) = (OBJECT_ADDRESS (Wrd614.Obj));
  (Wrd612.Obj) = ((Wrd611.pObj) [0]);
  (Wrd613.Lng) = (FIXNUM_TO_LONG (Wrd612.Obj));
  if (! (((unsigned long) (Wrd609.Lng)) < ((unsigned long) (Wrd613.Lng))))
    goto label_287;
  (Wrd603.uLng) = (OBJECT_DATUM (Wrd587.Obj));
  (Wrd606.pObj) = (& ((Wrd611.pObj) [(Wrd603.Lng)]));
  (Wrd607.Obj) = ((Wrd606.pObj) [1]);
  (* (--Rsp)) = (Wrd607.Obj);

DEFLABEL (label_286)
  (Wrd630.Obj) = (Rsp [4]);
  (Wrd631.uLng) = (OBJECT_TYPE (Wrd630.Obj));
  if (! ((Wrd631.uLng) == 62))
    goto label_285;
  (Wrd627.pObj) = (OBJECT_ADDRESS (Wrd630.Obj));
  (Wrd628.Obj) = ((Wrd627.pObj) [0]);
  (Wrd629.Lng) = (FIXNUM_TO_LONG (Wrd628.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd629.Lng))))
    goto label_285;
  (Wrd621.Obj) = ((Wrd627.pObj) [2]);

DEFLABEL (label_284)
  (Wrd648.Obj) = (Rsp [6]);
  (Wrd649.uLng) = (OBJECT_TYPE (Wrd648.Obj));
  if (! ((Wrd649.uLng) == 62))
    goto label_283;
  (Wrd642.uLng) = (OBJECT_TYPE (Wrd621.Obj));
  if (! ((Wrd642.uLng) == 26))
    goto label_283;
  (Wrd643.Lng) = (FIXNUM_TO_LONG (Wrd621.Obj));
  (Wrd645.pObj) = (OBJECT_ADDRESS (Wrd648.Obj));
  (Wrd646.Obj) = ((Wrd645.pObj) [0]);
  (Wrd647.Lng) = (FIXNUM_TO_LONG (Wrd646.Obj));
  if (! (((unsigned long) (Wrd643.Lng)) < ((unsigned long) (Wrd647.Lng))))
    goto label_283;
  (Wrd638.uLng) = (OBJECT_DATUM (Wrd621.Obj));
  (Wrd641.pObj) = (& ((Wrd645.pObj) [(Wrd638.Lng)]));
  (Wrd637.Obj) = ((Wrd641.pObj) [1]);

DEFLABEL (label_282)
  (Wrd655.Obj) = (* (Rsp++));
  (Wrd656.Lng) = (FIXNUM_TO_LONG (Wrd637.Obj));
  (Wrd657.Lng) = (FIXNUM_TO_LONG (Wrd655.Obj));
  (Wrd658.Lng) = ((Wrd656.Lng) + (Wrd657.Lng));
  (Wrd659.Obj) = (LONG_TO_FIXNUM (Wrd658.Lng));
  (* (--Rsp)) = (Wrd659.Obj);
  (Wrd669.Obj) = (Rsp [4]);
  (Wrd670.uLng) = (OBJECT_TYPE (Wrd669.Obj));
  if (! ((Wrd670.uLng) == 62))
    goto label_281;
  (Wrd666.pObj) = (OBJECT_ADDRESS (Wrd669.Obj));
  (Wrd667.Obj) = ((Wrd666.pObj) [0]);
  (Wrd668.Lng) = (FIXNUM_TO_LONG (Wrd667.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd668.Lng))))
    goto label_281;
  (Wrd660.Obj) = ((Wrd666.pObj) [2]);

DEFLABEL (label_280)
  (Wrd687.Obj) = (Rsp [5]);
  (Wrd688.uLng) = (OBJECT_TYPE (Wrd687.Obj));
  if (! ((Wrd688.uLng) == 62))
    goto label_279;
  (Wrd681.uLng) = (OBJECT_TYPE (Wrd660.Obj));
  if (! ((Wrd681.uLng) == 26))
    goto label_279;
  (Wrd682.Lng) = (FIXNUM_TO_LONG (Wrd660.Obj));
  (Wrd684.pObj) = (OBJECT_ADDRESS (Wrd687.Obj));
  (Wrd685.Obj) = ((Wrd684.pObj) [0]);
  (Wrd686.Lng) = (FIXNUM_TO_LONG (Wrd685.Obj));
  if (! (((unsigned long) (Wrd682.Lng)) < ((unsigned long) (Wrd686.Lng))))
    goto label_279;
  (Wrd677.uLng) = (OBJECT_DATUM (Wrd660.Obj));
  (Wrd680.pObj) = (& ((Wrd684.pObj) [(Wrd677.Lng)]));
  (Wrd676.Obj) = ((Wrd680.pObj) [1]);

DEFLABEL (label_278)
  (Wrd694.Obj) = (* (Rsp++));
  (Wrd696.Lng) = (FIXNUM_TO_LONG (Wrd676.Obj));
  (Wrd697.Lng) = (FIXNUM_TO_LONG (Wrd694.Obj));
  (Wrd698.Lng) = ((Wrd696.Lng) + (Wrd697.Lng));
  (Wrd699.Obj) = (* (Rsp++));
  Wrd701 = Wrd698;
  (Wrd702.Lng) = (FIXNUM_TO_LONG (Wrd699.Obj));
  (Wrd704.Lng) = ((Wrd701.Lng) & (Wrd702.Lng));
  (Wrd705.Lng) = ((Wrd704.Lng) + 1L);
  (Wrd706.Obj) = (LONG_TO_FIXNUM (Wrd705.Lng));
  (* (--Rsp)) = (Wrd706.Obj);

DEFLABEL (label_277)
  goto search_lines_160;

DEFLABEL (label_279)
  (Wrd689.Obj) = (Rsp [5]);
  (Wrd693.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_101]))));
  (* (--Rsp)) = (Wrd693.Obj);
  (* (--Rsp)) = (Wrd660.Obj);
  (* (--Rsp)) = (Wrd689.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_211)
  (Wrd676.Obj) = Rvl;
  goto label_278;

DEFLABEL (label_281)
  (Wrd671.Obj) = (Rsp [4]);
  (Wrd672.Obj) = (current_block [OBJECT_31_12]);
  (Wrd675.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_100]))));
  (* (--Rsp)) = (Wrd675.Obj);
  (* (--Rsp)) = (Wrd672.Obj);
  (* (--Rsp)) = (Wrd671.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_210)
  (Wrd660.Obj) = Rvl;
  goto label_280;

DEFLABEL (label_283)
  (Wrd650.Obj) = (Rsp [6]);
  (Wrd654.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_99]))));
  (* (--Rsp)) = (Wrd654.Obj);
  (* (--Rsp)) = (Wrd621.Obj);
  (* (--Rsp)) = (Wrd650.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_209)
  (Wrd637.Obj) = Rvl;
  goto label_282;

DEFLABEL (label_285)
  (Wrd632.Obj) = (Rsp [4]);
  (Wrd633.Obj) = (current_block [OBJECT_31_12]);
  (Wrd636.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_98]))));
  (* (--Rsp)) = (Wrd636.Obj);
  (* (--Rsp)) = (Wrd633.Obj);
  (* (--Rsp)) = (Wrd632.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_208)
  (Wrd621.Obj) = Rvl;
  goto label_284;

DEFLABEL (label_287)
  (Wrd616.Obj) = (Rsp [6]);
  (Wrd620.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_97]))));
  (* (--Rsp)) = (Wrd620.Obj);
  (* (--Rsp)) = (Wrd587.Obj);
  (* (--Rsp)) = (Wrd616.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_207)
  (* (--Rsp)) = Rvl;
  goto label_286;

DEFLABEL (label_289)
  (Wrd598.Obj) = (Rsp [3]);
  (Wrd599.Obj) = (current_block [OBJECT_31_12]);
  (Wrd602.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_96]))));
  (* (--Rsp)) = (Wrd602.Obj);
  (* (--Rsp)) = (Wrd599.Obj);
  (* (--Rsp)) = (Wrd598.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_206)
  (Wrd587.Obj) = Rvl;
  goto label_288;

DEFLABEL (label_291)
  (Wrd582.Obj) = (Rsp [2]);
  (Wrd583.Obj) = (current_block [OBJECT_31_11]);
  (Wrd586.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_95]))));
  (* (--Rsp)) = (Wrd586.Obj);
  (* (--Rsp)) = (Wrd583.Obj);
  (* (--Rsp)) = (Wrd582.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_205)
  (* (--Rsp)) = Rvl;
  goto label_290;

DEFLABEL (label_292)
  (Wrd707.Obj) = (current_block [OBJECT_31_9]);
  (* (--Rsp)) = (Wrd707.Obj);
  goto label_277;

DEFLABEL (label_294)
  (Wrd552.Obj) = (Rsp [6]);
  (Wrd556.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_94]))));
  (* (--Rsp)) = (Wrd556.Obj);
  (* (--Rsp)) = (Wrd523.Obj);
  (* (--Rsp)) = (Wrd552.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_204)
  (Wrd539.Obj) = Rvl;
  goto label_293;

DEFLABEL (label_296)
  (Wrd534.Obj) = (Rsp [5]);
  (Wrd535.Obj) = (current_block [OBJECT_31_12]);
  (Wrd538.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_93]))));
  (* (--Rsp)) = (Wrd538.Obj);
  (* (--Rsp)) = (Wrd535.Obj);
  (* (--Rsp)) = (Wrd534.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_203)
  (Wrd523.Obj) = Rvl;
  goto label_295;

DEFLABEL (label_298)
  (Wrd513.Obj) = (Rsp [7]);
  (Wrd517.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_92]))));
  (* (--Rsp)) = (Wrd517.Obj);
  (* (--Rsp)) = (Wrd484.Obj);
  (* (--Rsp)) = (Wrd513.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_202)
  (Wrd500.Obj) = Rvl;
  goto label_297;

DEFLABEL (label_300)
  (Wrd495.Obj) = (Rsp [5]);
  (Wrd496.Obj) = (current_block [OBJECT_31_12]);
  (Wrd499.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_91]))));
  (* (--Rsp)) = (Wrd499.Obj);
  (* (--Rsp)) = (Wrd496.Obj);
  (* (--Rsp)) = (Wrd495.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_201)
  (Wrd484.Obj) = Rvl;
  goto label_299;

DEFLABEL (label_302)
  (Wrd479.Obj) = (Rsp [7]);
  (Wrd483.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_90]))));
  (* (--Rsp)) = (Wrd483.Obj);
  (* (--Rsp)) = (Wrd450.Obj);
  (* (--Rsp)) = (Wrd479.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_200)
  (* (--Rsp)) = Rvl;
  goto label_301;

DEFLABEL (label_304)
  (Wrd461.Obj) = (Rsp [4]);
  (Wrd462.Obj) = (current_block [OBJECT_31_12]);
  (Wrd465.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_89]))));
  (* (--Rsp)) = (Wrd465.Obj);
  (* (--Rsp)) = (Wrd462.Obj);
  (* (--Rsp)) = (Wrd461.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_199)
  (Wrd450.Obj) = Rvl;
  goto label_303;

DEFLABEL (label_306)
  (Wrd445.Obj) = (Rsp [3]);
  (Wrd446.Obj) = (current_block [OBJECT_31_11]);
  (Wrd449.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_88]))));
  (* (--Rsp)) = (Wrd449.Obj);
  (* (--Rsp)) = (Wrd446.Obj);
  (* (--Rsp)) = (Wrd445.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_198)
  (* (--Rsp)) = Rvl;
  goto label_305;

DEFLABEL (label_308)
  (Wrd433.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_87]))));
  (* (--Rsp)) = (Wrd433.Obj);
  (* (--Rsp)) = (Wrd409.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_8]), 1);

DEFLABEL (label_197)
  (* (--Rsp)) = Rvl;
  goto label_307;

DEFLABEL (label_310)
  (Wrd420.Obj) = (Rsp [2]);
  (Wrd421.Obj) = (current_block [OBJECT_31_5]);
  (Wrd424.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_86]))));
  (* (--Rsp)) = (Wrd424.Obj);
  (* (--Rsp)) = (Wrd421.Obj);
  (* (--Rsp)) = (Wrd420.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_196)
  (Wrd409.Obj) = Rvl;
  goto label_309;

DEFLABEL (label_312)
  (Wrd403.Obj) = (Rsp [0]);
  (Wrd404.Obj) = (current_block [OBJECT_31_13]);
  (Wrd407.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_85]))));
  (* (--Rsp)) = (Wrd407.Obj);
  (* (--Rsp)) = (Wrd404.Obj);
  (* (--Rsp)) = (Wrd403.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_195)
  (* (--Rsp)) = Rvl;
  goto label_311;

DEFLABEL (label_314)
  (Wrd717.Obj) = (Rsp [0]);
  (Wrd718.uLng) = (OBJECT_TYPE (Wrd717.Obj));
  if (! ((Wrd718.uLng) == 62))
    goto label_368;
  (Wrd714.pObj) = (OBJECT_ADDRESS (Wrd717.Obj));
  (Wrd715.Obj) = ((Wrd714.pObj) [0]);
  (Wrd716.Lng) = (FIXNUM_TO_LONG (Wrd715.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd716.Lng))))
    goto label_368;
  (Wrd710.Obj) = ((Wrd714.pObj) [3]);
  (* (--Rsp)) = (Wrd710.Obj);

DEFLABEL (label_367)
  (Wrd733.Obj) = (Rsp [1]);
  (Wrd734.uLng) = (OBJECT_TYPE (Wrd733.Obj));
  if (! ((Wrd734.uLng) == 62))
    goto label_366;
  (Wrd730.pObj) = (OBJECT_ADDRESS (Wrd733.Obj));
  (Wrd731.Obj) = ((Wrd730.pObj) [0]);
  (Wrd732.Lng) = (FIXNUM_TO_LONG (Wrd731.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd732.Lng))))
    goto label_366;
  (Wrd724.Obj) = ((Wrd730.pObj) [2]);

DEFLABEL (label_365)
  (Wrd751.Obj) = (Rsp [4]);
  (Wrd752.uLng) = (OBJECT_TYPE (Wrd751.Obj));
  if (! ((Wrd752.uLng) == 62))
    goto label_364;
  (Wrd745.uLng) = (OBJECT_TYPE (Wrd724.Obj));
  if (! ((Wrd745.uLng) == 26))
    goto label_364;
  (Wrd746.Lng) = (FIXNUM_TO_LONG (Wrd724.Obj));
  (Wrd748.pObj) = (OBJECT_ADDRESS (Wrd751.Obj));
  (Wrd749.Obj) = ((Wrd748.pObj) [0]);
  (Wrd750.Lng) = (FIXNUM_TO_LONG (Wrd749.Obj));
  if (! (((unsigned long) (Wrd746.Lng)) < ((unsigned long) (Wrd750.Lng))))
    goto label_364;
  (Wrd740.uLng) = (OBJECT_DATUM (Wrd724.Obj));
  (Wrd743.pObj) = (& ((Wrd748.pObj) [(Wrd740.Lng)]));
  (Wrd744.Obj) = ((Wrd743.pObj) [1]);
  (* (--Rsp)) = (Wrd744.Obj);

DEFLABEL (label_363)
  (Wrd767.Obj) = (Rsp [2]);
  (Wrd768.uLng) = (OBJECT_TYPE (Wrd767.Obj));
  if (! ((Wrd768.uLng) == 62))
    goto label_362;
  (Wrd764.pObj) = (OBJECT_ADDRESS (Wrd767.Obj));
  (Wrd765.Obj) = ((Wrd764.pObj) [0]);
  (Wrd766.Lng) = (FIXNUM_TO_LONG (Wrd765.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd766.Lng))))
    goto label_362;
  (Wrd758.Obj) = ((Wrd764.pObj) [2]);

DEFLABEL (label_361)
  (Wrd785.Obj) = (Rsp [4]);
  (Wrd786.uLng) = (OBJECT_TYPE (Wrd785.Obj));
  if (! ((Wrd786.uLng) == 62))
    goto label_360;
  (Wrd779.uLng) = (OBJECT_TYPE (Wrd758.Obj));
  if (! ((Wrd779.uLng) == 26))
    goto label_360;
  (Wrd780.Lng) = (FIXNUM_TO_LONG (Wrd758.Obj));
  (Wrd782.pObj) = (OBJECT_ADDRESS (Wrd785.Obj));
  (Wrd783.Obj) = ((Wrd782.pObj) [0]);
  (Wrd784.Lng) = (FIXNUM_TO_LONG (Wrd783.Obj));
  if (! (((unsigned long) (Wrd780.Lng)) < ((unsigned long) (Wrd784.Lng))))
    goto label_360;
  (Wrd775.uLng) = (OBJECT_DATUM (Wrd758.Obj));
  (Wrd778.pObj) = (& ((Wrd782.pObj) [(Wrd775.Lng)]));
  (Wrd774.Obj) = ((Wrd778.pObj) [1]);

DEFLABEL (label_359)
  (Wrd792.Obj) = (* (Rsp++));
  (Wrd793.Lng) = (FIXNUM_TO_LONG (Wrd774.Obj));
  (Wrd794.Lng) = (FIXNUM_TO_LONG (Wrd792.Obj));
  (Wrd795.Lng) = ((Wrd793.Lng) + (Wrd794.Lng));
  (Wrd796.Obj) = (LONG_TO_FIXNUM (Wrd795.Lng));
  (* (--Rsp)) = (Wrd796.Obj);
  (Wrd806.Obj) = (Rsp [2]);
  (Wrd807.uLng) = (OBJECT_TYPE (Wrd806.Obj));
  if (! ((Wrd807.uLng) == 62))
    goto label_358;
  (Wrd803.pObj) = (OBJECT_ADDRESS (Wrd806.Obj));
  (Wrd804.Obj) = ((Wrd803.pObj) [0]);
  (Wrd805.Lng) = (FIXNUM_TO_LONG (Wrd804.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd805.Lng))))
    goto label_358;
  (Wrd797.Obj) = ((Wrd803.pObj) [2]);

DEFLABEL (label_357)
  (Wrd824.Obj) = (Rsp [3]);
  (Wrd825.uLng) = (OBJECT_TYPE (Wrd824.Obj));
  if (! ((Wrd825.uLng) == 62))
    goto label_356;
  (Wrd818.uLng) = (OBJECT_TYPE (Wrd797.Obj));
  if (! ((Wrd818.uLng) == 26))
    goto label_356;
  (Wrd819.Lng) = (FIXNUM_TO_LONG (Wrd797.Obj));
  (Wrd821.pObj) = (OBJECT_ADDRESS (Wrd824.Obj));
  (Wrd822.Obj) = ((Wrd821.pObj) [0]);
  (Wrd823.Lng) = (FIXNUM_TO_LONG (Wrd822.Obj));
  if (! (((unsigned long) (Wrd819.Lng)) < ((unsigned long) (Wrd823.Lng))))
    goto label_356;
  (Wrd814.uLng) = (OBJECT_DATUM (Wrd797.Obj));
  (Wrd817.pObj) = (& ((Wrd821.pObj) [(Wrd814.Lng)]));
  (Wrd813.Obj) = ((Wrd817.pObj) [1]);

DEFLABEL (label_355)
  (Wrd831.Obj) = (* (Rsp++));
  (Wrd833.Lng) = (FIXNUM_TO_LONG (Wrd813.Obj));
  (Wrd834.Lng) = (FIXNUM_TO_LONG (Wrd831.Obj));
  (Wrd835.Lng) = ((Wrd833.Lng) + (Wrd834.Lng));
  (Wrd836.Obj) = (* (Rsp++));
  Wrd837 = Wrd835;
  (Wrd838.Lng) = (FIXNUM_TO_LONG (Wrd836.Obj));
  (Wrd839.Lng) = ((Wrd837.Lng) & (Wrd838.Lng));
  (Wrd840.Obj) = (LONG_TO_FIXNUM (Wrd839.Lng));
  (* (--Rsp)) = (Wrd840.Obj);
  (Wrd850.Obj) = (Rsp [1]);
  (Wrd851.uLng) = (OBJECT_TYPE (Wrd850.Obj));
  if (! ((Wrd851.uLng) == 62))
    goto label_354;
  (Wrd847.pObj) = (OBJECT_ADDRESS (Wrd850.Obj));
  (Wrd848.Obj) = ((Wrd847.pObj) [0]);
  (Wrd849.Lng) = (FIXNUM_TO_LONG (Wrd848.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd849.Lng))))
    goto label_354;
  (Wrd841.Obj) = ((Wrd847.pObj) [6]);

DEFLABEL (label_353)
  (Wrd857.Obj) = (* (Rsp++));
  (Wrd867.uLng) = (OBJECT_TYPE (Wrd841.Obj));
  if (! ((Wrd867.uLng) == 10))
    goto label_352;
  (Wrd862.uLng) = (OBJECT_TYPE (Wrd857.Obj));
  if (! ((Wrd862.uLng) == 26))
    goto label_352;
  (Wrd863.Lng) = (FIXNUM_TO_LONG (Wrd857.Obj));
  (Wrd864.pObj) = (OBJECT_ADDRESS (Wrd841.Obj));
  (Wrd865.Obj) = ((Wrd864.pObj) [0]);
  (Wrd866.Lng) = (FIXNUM_TO_LONG (Wrd865.Obj));
  if (! (((unsigned long) (Wrd863.Lng)) < ((unsigned long) (Wrd866.Lng))))
    goto label_352;
  (Wrd859.uLng) = (OBJECT_DATUM (Wrd857.Obj));
  (Wrd861.pObj) = (& ((Wrd864.pObj) [(Wrd859.Lng)]));
  (Wrd858.Obj) = ((Wrd861.pObj) [1]);

DEFLABEL (label_351)
  (Wrd874.pObj) = (OBJECT_ADDRESS (Wrd858.Obj));
  (Wrd873.Obj) = ((Wrd874.pObj) [1]);
  (Wrd876.pObj) = (OBJECT_ADDRESS (Wrd873.Obj));
  (Wrd875.Obj) = ((Wrd876.pObj) [0]);
  (Wrd877.Obj) = (Rsp [2]);
  if (! ((Wrd877.Obj) == (Wrd875.Obj)))
    goto label_313;
  (Wrd887.Obj) = (Rsp [0]);
  (Wrd888.uLng) = (OBJECT_TYPE (Wrd887.Obj));
  if (! ((Wrd888.uLng) == 62))
    goto label_350;
  (Wrd884.pObj) = (OBJECT_ADDRESS (Wrd887.Obj));
  (Wrd885.Obj) = ((Wrd884.pObj) [0]);
  (Wrd886.Lng) = (FIXNUM_TO_LONG (Wrd885.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd886.Lng))))
    goto label_350;
  (Wrd880.Obj) = ((Wrd884.pObj) [3]);
  (* (--Rsp)) = (Wrd880.Obj);

DEFLABEL (label_349)
  (Wrd903.Obj) = (Rsp [1]);
  (Wrd904.uLng) = (OBJECT_TYPE (Wrd903.Obj));
  if (! ((Wrd904.uLng) == 62))
    goto label_348;
  (Wrd900.pObj) = (OBJECT_ADDRESS (Wrd903.Obj));
  (Wrd901.Obj) = ((Wrd900.pObj) [0]);
  (Wrd902.Lng) = (FIXNUM_TO_LONG (Wrd901.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd902.Lng))))
    goto label_348;
  (Wrd894.Obj) = ((Wrd900.pObj) [2]);

DEFLABEL (label_347)
  (Wrd921.Obj) = (Rsp [4]);
  (Wrd922.uLng) = (OBJECT_TYPE (Wrd921.Obj));
  if (! ((Wrd922.uLng) == 62))
    goto label_346;
  (Wrd915.uLng) = (OBJECT_TYPE (Wrd894.Obj));
  if (! ((Wrd915.uLng) == 26))
    goto label_346;
  (Wrd916.Lng) = (FIXNUM_TO_LONG (Wrd894.Obj));
  (Wrd918.pObj) = (OBJECT_ADDRESS (Wrd921.Obj));
  (Wrd919.Obj) = ((Wrd918.pObj) [0]);
  (Wrd920.Lng) = (FIXNUM_TO_LONG (Wrd919.Obj));
  if (! (((unsigned long) (Wrd916.Lng)) < ((unsigned long) (Wrd920.Lng))))
    goto label_346;
  (Wrd910.uLng) = (OBJECT_DATUM (Wrd894.Obj));
  (Wrd913.pObj) = (& ((Wrd918.pObj) [(Wrd910.Lng)]));
  (Wrd914.Obj) = ((Wrd913.pObj) [1]);
  (* (--Rsp)) = (Wrd914.Obj);

DEFLABEL (label_345)
  (Wrd937.Obj) = (Rsp [2]);
  (Wrd938.uLng) = (OBJECT_TYPE (Wrd937.Obj));
  if (! ((Wrd938.uLng) == 62))
    goto label_344;
  (Wrd934.pObj) = (OBJECT_ADDRESS (Wrd937.Obj));
  (Wrd935.Obj) = ((Wrd934.pObj) [0]);
  (Wrd936.Lng) = (FIXNUM_TO_LONG (Wrd935.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd936.Lng))))
    goto label_344;
  (Wrd928.Obj) = ((Wrd934.pObj) [2]);

DEFLABEL (label_343)
  (Wrd955.Obj) = (Rsp [4]);
  (Wrd956.uLng) = (OBJECT_TYPE (Wrd955.Obj));
  if (! ((Wrd956.uLng) == 62))
    goto label_342;
  (Wrd949.uLng) = (OBJECT_TYPE (Wrd928.Obj));
  if (! ((Wrd949.uLng) == 26))
    goto label_342;
  (Wrd950.Lng) = (FIXNUM_TO_LONG (Wrd928.Obj));
  (Wrd952.pObj) = (OBJECT_ADDRESS (Wrd955.Obj));
  (Wrd953.Obj) = ((Wrd952.pObj) [0]);
  (Wrd954.Lng) = (FIXNUM_TO_LONG (Wrd953.Obj));
  if (! (((unsigned long) (Wrd950.Lng)) < ((unsigned long) (Wrd954.Lng))))
    goto label_342;
  (Wrd945.uLng) = (OBJECT_DATUM (Wrd928.Obj));
  (Wrd948.pObj) = (& ((Wrd952.pObj) [(Wrd945.Lng)]));
  (Wrd944.Obj) = ((Wrd948.pObj) [1]);

DEFLABEL (label_341)
  (Wrd962.Obj) = (* (Rsp++));
  (Wrd963.Lng) = (FIXNUM_TO_LONG (Wrd944.Obj));
  (Wrd964.Lng) = (FIXNUM_TO_LONG (Wrd962.Obj));
  (Wrd965.Lng) = ((Wrd963.Lng) + (Wrd964.Lng));
  (Wrd966.Obj) = (LONG_TO_FIXNUM (Wrd965.Lng));
  (* (--Rsp)) = (Wrd966.Obj);
  (Wrd976.Obj) = (Rsp [2]);
  (Wrd977.uLng) = (OBJECT_TYPE (Wrd976.Obj));
  if (! ((Wrd977.uLng) == 62))
    goto label_340;
  (Wrd973.pObj) = (OBJECT_ADDRESS (Wrd976.Obj));
  (Wrd974.Obj) = ((Wrd973.pObj) [0]);
  (Wrd975.Lng) = (FIXNUM_TO_LONG (Wrd974.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd975.Lng))))
    goto label_340;
  (Wrd967.Obj) = ((Wrd973.pObj) [2]);

DEFLABEL (label_339)
  (Wrd994.Obj) = (Rsp [3]);
  (Wrd995.uLng) = (OBJECT_TYPE (Wrd994.Obj));
  if (! ((Wrd995.uLng) == 62))
    goto label_338;
  (Wrd988.uLng) = (OBJECT_TYPE (Wrd967.Obj));
  if (! ((Wrd988.uLng) == 26))
    goto label_338;
  (Wrd989.Lng) = (FIXNUM_TO_LONG (Wrd967.Obj));
  (Wrd991.pObj) = (OBJECT_ADDRESS (Wrd994.Obj));
  (Wrd992.Obj) = ((Wrd991.pObj) [0]);
  (Wrd993.Lng) = (FIXNUM_TO_LONG (Wrd992.Obj));
  if (! (((unsigned long) (Wrd989.Lng)) < ((unsigned long) (Wrd993.Lng))))
    goto label_338;
  (Wrd984.uLng) = (OBJECT_DATUM (Wrd967.Obj));
  (Wrd987.pObj) = (& ((Wrd991.pObj) [(Wrd984.Lng)]));
  (Wrd983.Obj) = ((Wrd987.pObj) [1]);

DEFLABEL (label_337)
  (Wrd1001.Obj) = (* (Rsp++));
  (Wrd1003.Lng) = (FIXNUM_TO_LONG (Wrd983.Obj));
  (Wrd1004.Lng) = (FIXNUM_TO_LONG (Wrd1001.Obj));
  (Wrd1005.Lng) = ((Wrd1003.Lng) + (Wrd1004.Lng));
  (Wrd1006.Obj) = (* (Rsp++));
  Wrd1007 = Wrd1005;
  (Wrd1008.Lng) = (FIXNUM_TO_LONG (Wrd1006.Obj));
  (Wrd1009.Lng) = ((Wrd1007.Lng) & (Wrd1008.Lng));
  (Wrd1010.Obj) = (LONG_TO_FIXNUM (Wrd1009.Lng));
  (* (--Rsp)) = (Wrd1010.Obj);
  (Wrd1020.Obj) = (Rsp [1]);
  (Wrd1021.uLng) = (OBJECT_TYPE (Wrd1020.Obj));
  if (! ((Wrd1021.uLng) == 62))
    goto label_336;
  (Wrd1017.pObj) = (OBJECT_ADDRESS (Wrd1020.Obj));
  (Wrd1018.Obj) = ((Wrd1017.pObj) [0]);
  (Wrd1019.Lng) = (FIXNUM_TO_LONG (Wrd1018.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd1019.Lng))))
    goto label_336;
  (Wrd1011.Obj) = ((Wrd1017.pObj) [6]);

DEFLABEL (label_335)
  (Wrd1027.Obj) = (* (Rsp++));
  (Wrd1037.uLng) = (OBJECT_TYPE (Wrd1011.Obj));
  if (! ((Wrd1037.uLng) == 10))
    goto label_334;
  (Wrd1032.uLng) = (OBJECT_TYPE (Wrd1027.Obj));
  if (! ((Wrd1032.uLng) == 26))
    goto label_334;
  (Wrd1033.Lng) = (FIXNUM_TO_LONG (Wrd1027.Obj));
  (Wrd1034.pObj) = (OBJECT_ADDRESS (Wrd1011.Obj));
  (Wrd1035.Obj) = ((Wrd1034.pObj) [0]);
  (Wrd1036.Lng) = (FIXNUM_TO_LONG (Wrd1035.Obj));
  if (! (((unsigned long) (Wrd1033.Lng)) < ((unsigned long) (Wrd1036.Lng))))
    goto label_334;
  (Wrd1029.uLng) = (OBJECT_DATUM (Wrd1027.Obj));
  (Wrd1031.pObj) = (& ((Wrd1034.pObj) [(Wrd1029.Lng)]));
  (Wrd1028.Obj) = ((Wrd1031.pObj) [1]);

DEFLABEL (label_333)
  (Wrd1044.pObj) = (OBJECT_ADDRESS (Wrd1028.Obj));
  (Wrd1043.Obj) = ((Wrd1044.pObj) [1]);
  (Wrd1046.pObj) = (OBJECT_ADDRESS (Wrd1043.Obj));
  (Wrd1045.Obj) = ((Wrd1046.pObj) [1]);
  (Wrd1048.pObj) = (OBJECT_ADDRESS (Wrd1045.Obj));
  (Wrd1047.Obj) = ((Wrd1048.pObj) [0]);
  (Wrd1049.Obj) = (Rsp [3]);
  if (! ((Wrd1049.Obj) == (Wrd1047.Obj)))
    goto label_313;
  (Wrd1059.Obj) = (Rsp [0]);
  (Wrd1060.uLng) = (OBJECT_TYPE (Wrd1059.Obj));
  if (! ((Wrd1060.uLng) == 62))
    goto label_332;
  (Wrd1056.pObj) = (OBJECT_ADDRESS (Wrd1059.Obj));
  (Wrd1057.Obj) = ((Wrd1056.pObj) [0]);
  (Wrd1058.Lng) = (FIXNUM_TO_LONG (Wrd1057.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd1058.Lng))))
    goto label_332;
  (Wrd1052.Obj) = ((Wrd1056.pObj) [3]);
  (* (--Rsp)) = (Wrd1052.Obj);

DEFLABEL (label_331)
  (Wrd1075.Obj) = (Rsp [1]);
  (Wrd1076.uLng) = (OBJECT_TYPE (Wrd1075.Obj));
  if (! ((Wrd1076.uLng) == 62))
    goto label_330;
  (Wrd1072.pObj) = (OBJECT_ADDRESS (Wrd1075.Obj));
  (Wrd1073.Obj) = ((Wrd1072.pObj) [0]);
  (Wrd1074.Lng) = (FIXNUM_TO_LONG (Wrd1073.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd1074.Lng))))
    goto label_330;
  (Wrd1066.Obj) = ((Wrd1072.pObj) [2]);

DEFLABEL (label_329)
  (Wrd1093.Obj) = (Rsp [4]);
  (Wrd1094.uLng) = (OBJECT_TYPE (Wrd1093.Obj));
  if (! ((Wrd1094.uLng) == 62))
    goto label_328;
  (Wrd1087.uLng) = (OBJECT_TYPE (Wrd1066.Obj));
  if (! ((Wrd1087.uLng) == 26))
    goto label_328;
  (Wrd1088.Lng) = (FIXNUM_TO_LONG (Wrd1066.Obj));
  (Wrd1090.pObj) = (OBJECT_ADDRESS (Wrd1093.Obj));
  (Wrd1091.Obj) = ((Wrd1090.pObj) [0]);
  (Wrd1092.Lng) = (FIXNUM_TO_LONG (Wrd1091.Obj));
  if (! (((unsigned long) (Wrd1088.Lng)) < ((unsigned long) (Wrd1092.Lng))))
    goto label_328;
  (Wrd1082.uLng) = (OBJECT_DATUM (Wrd1066.Obj));
  (Wrd1085.pObj) = (& ((Wrd1090.pObj) [(Wrd1082.Lng)]));
  (Wrd1086.Obj) = ((Wrd1085.pObj) [1]);
  (* (--Rsp)) = (Wrd1086.Obj);

DEFLABEL (label_327)
  (Wrd1109.Obj) = (Rsp [2]);
  (Wrd1110.uLng) = (OBJECT_TYPE (Wrd1109.Obj));
  if (! ((Wrd1110.uLng) == 62))
    goto label_326;
  (Wrd1106.pObj) = (OBJECT_ADDRESS (Wrd1109.Obj));
  (Wrd1107.Obj) = ((Wrd1106.pObj) [0]);
  (Wrd1108.Lng) = (FIXNUM_TO_LONG (Wrd1107.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd1108.Lng))))
    goto label_326;
  (Wrd1100.Obj) = ((Wrd1106.pObj) [2]);

DEFLABEL (label_325)
  (Wrd1127.Obj) = (Rsp [4]);
  (Wrd1128.uLng) = (OBJECT_TYPE (Wrd1127.Obj));
  if (! ((Wrd1128.uLng) == 62))
    goto label_324;
  (Wrd1121.uLng) = (OBJECT_TYPE (Wrd1100.Obj));
  if (! ((Wrd1121.uLng) == 26))
    goto label_324;
  (Wrd1122.Lng) = (FIXNUM_TO_LONG (Wrd1100.Obj));
  (Wrd1124.pObj) = (OBJECT_ADDRESS (Wrd1127.Obj));
  (Wrd1125.Obj) = ((Wrd1124.pObj) [0]);
  (Wrd1126.Lng) = (FIXNUM_TO_LONG (Wrd1125.Obj));
  if (! (((unsigned long) (Wrd1122.Lng)) < ((unsigned long) (Wrd1126.Lng))))
    goto label_324;
  (Wrd1117.uLng) = (OBJECT_DATUM (Wrd1100.Obj));
  (Wrd1120.pObj) = (& ((Wrd1124.pObj) [(Wrd1117.Lng)]));
  (Wrd1116.Obj) = ((Wrd1120.pObj) [1]);

DEFLABEL (label_323)
  (Wrd1134.Obj) = (* (Rsp++));
  (Wrd1135.Lng) = (FIXNUM_TO_LONG (Wrd1116.Obj));
  (Wrd1136.Lng) = (FIXNUM_TO_LONG (Wrd1134.Obj));
  (Wrd1137.Lng) = ((Wrd1135.Lng) + (Wrd1136.Lng));
  (Wrd1138.Obj) = (LONG_TO_FIXNUM (Wrd1137.Lng));
  (* (--Rsp)) = (Wrd1138.Obj);
  (Wrd1148.Obj) = (Rsp [2]);
  (Wrd1149.uLng) = (OBJECT_TYPE (Wrd1148.Obj));
  if (! ((Wrd1149.uLng) == 62))
    goto label_322;
  (Wrd1145.pObj) = (OBJECT_ADDRESS (Wrd1148.Obj));
  (Wrd1146.Obj) = ((Wrd1145.pObj) [0]);
  (Wrd1147.Lng) = (FIXNUM_TO_LONG (Wrd1146.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd1147.Lng))))
    goto label_322;
  (Wrd1139.Obj) = ((Wrd1145.pObj) [2]);

DEFLABEL (label_321)
  (Wrd1166.Obj) = (Rsp [3]);
  (Wrd1167.uLng) = (OBJECT_TYPE (Wrd1166.Obj));
  if (! ((Wrd1167.uLng) == 62))
    goto label_320;
  (Wrd1160.uLng) = (OBJECT_TYPE (Wrd1139.Obj));
  if (! ((Wrd1160.uLng) == 26))
    goto label_320;
  (Wrd1161.Lng) = (FIXNUM_TO_LONG (Wrd1139.Obj));
  (Wrd1163.pObj) = (OBJECT_ADDRESS (Wrd1166.Obj));
  (Wrd1164.Obj) = ((Wrd1163.pObj) [0]);
  (Wrd1165.Lng) = (FIXNUM_TO_LONG (Wrd1164.Obj));
  if (! (((unsigned long) (Wrd1161.Lng)) < ((unsigned long) (Wrd1165.Lng))))
    goto label_320;
  (Wrd1156.uLng) = (OBJECT_DATUM (Wrd1139.Obj));
  (Wrd1159.pObj) = (& ((Wrd1163.pObj) [(Wrd1156.Lng)]));
  (Wrd1155.Obj) = ((Wrd1159.pObj) [1]);

DEFLABEL (label_319)
  (Wrd1173.Obj) = (* (Rsp++));
  (Wrd1175.Lng) = (FIXNUM_TO_LONG (Wrd1155.Obj));
  (Wrd1176.Lng) = (FIXNUM_TO_LONG (Wrd1173.Obj));
  (Wrd1177.Lng) = ((Wrd1175.Lng) + (Wrd1176.Lng));
  (Wrd1178.Obj) = (* (Rsp++));
  Wrd1180 = Wrd1177;
  (Wrd1181.Lng) = (FIXNUM_TO_LONG (Wrd1178.Obj));
  (Wrd1182.Lng) = ((Wrd1180.Lng) & (Wrd1181.Lng));
  (Wrd1179.Obj) = (LONG_TO_FIXNUM (Wrd1182.Lng));
  (Rsp [3]) = (Wrd1179.Obj);
  (Wrd1192.Obj) = (Rsp [0]);
  (Wrd1193.uLng) = (OBJECT_TYPE (Wrd1192.Obj));
  if (! ((Wrd1193.uLng) == 62))
    goto label_318;
  (Wrd1189.pObj) = (OBJECT_ADDRESS (Wrd1192.Obj));
  (Wrd1190.Obj) = ((Wrd1189.pObj) [0]);
  (Wrd1191.Lng) = (FIXNUM_TO_LONG (Wrd1190.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd1191.Lng))))
    goto label_318;
  (Wrd1183.Obj) = ((Wrd1189.pObj) [7]);

DEFLABEL (label_317)
  (Rsp [2]) = (Wrd1183.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd1214.Obj) = (Rsp [0]);
  (Wrd1215.uLng) = (OBJECT_TYPE (Wrd1214.Obj));
  if (! ((Wrd1215.uLng) == 10))
    goto label_275;
  (Wrd1206.Obj) = (Rsp [1]);
  (Wrd1207.uLng) = (OBJECT_TYPE (Wrd1206.Obj));
  if (! ((Wrd1207.uLng) == 26))
    goto label_275;
  (Wrd1209.Lng) = (FIXNUM_TO_LONG (Wrd1206.Obj));
  (Wrd1211.pObj) = (OBJECT_ADDRESS (Wrd1214.Obj));
  (Wrd1212.Obj) = ((Wrd1211.pObj) [0]);
  (Wrd1213.Lng) = (FIXNUM_TO_LONG (Wrd1212.Obj));
  if (! (((unsigned long) (Wrd1209.Lng)) < ((unsigned long) (Wrd1213.Lng))))
    goto label_275;
  (Wrd1202.uLng) = (OBJECT_DATUM (Wrd1206.Obj));
  (Wrd1205.pObj) = (& ((Wrd1211.pObj) [(Wrd1202.Lng)]));
  (Wrd1200.Obj) = ((Wrd1205.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd1200.Obj);

DEFLABEL (label_316)
  (Wrd1216.Obj) = (Rsp [0]);
  if ((Wrd1216.Obj) == ((SCHEME_OBJECT) 0))
    goto label_315;
  (Rsp [1]) = (Wrd1216.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_315)
  (Wrd1223.Obj) = (Rsp [4]);
  (Wrd1224.Obj) = (current_block [OBJECT_31_0]);
  (* (Rhp++)) = (Wrd1223.Obj);
  (* (Rhp++)) = (Wrd1224.Obj);
  (Wrd1222.pObj) = (& (Rhp [-2]));
  (Wrd1220.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd1222.pObj)));
  (Wrd1228.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd1228.Obj);
  (* (Rhp++)) = (Wrd1220.Obj);
  (Wrd1227.pObj) = (& (Rhp [-2]));
  (Wrd1225.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd1227.pObj)));
  (Wrd1232.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd1232.Obj);
  (* (Rhp++)) = (Wrd1225.Obj);
  (Wrd1231.pObj) = (& (Rhp [-2]));
  (Wrd1229.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd1231.pObj)));
  (Rsp [4]) = (Wrd1229.Obj);
  (Wrd1234.Obj) = (Rsp [1]);
  (Wrd1235.pObj) = (OBJECT_ADDRESS (Wrd1234.Obj));
  (Wrd1233.Obj) = ((Wrd1235.pObj) [2]);
  (Rsp [3]) = (Wrd1233.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_84]));

DEFLABEL (label_318)
  (Wrd1194.Obj) = (Rsp [0]);
  (Wrd1195.Obj) = (current_block [OBJECT_31_7]);
  (Wrd1198.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_83]))));
  (* (--Rsp)) = (Wrd1198.Obj);
  (* (--Rsp)) = (Wrd1195.Obj);
  (* (--Rsp)) = (Wrd1194.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_237)
  (Wrd1183.Obj) = Rvl;
  goto label_317;

DEFLABEL (label_320)
  (Wrd1168.Obj) = (Rsp [3]);
  (Wrd1172.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_82]))));
  (* (--Rsp)) = (Wrd1172.Obj);
  (* (--Rsp)) = (Wrd1139.Obj);
  (* (--Rsp)) = (Wrd1168.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_236)
  (Wrd1155.Obj) = Rvl;
  goto label_319;

DEFLABEL (label_322)
  (Wrd1150.Obj) = (Rsp [2]);
  (Wrd1151.Obj) = (current_block [OBJECT_31_12]);
  (Wrd1154.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_81]))));
  (* (--Rsp)) = (Wrd1154.Obj);
  (* (--Rsp)) = (Wrd1151.Obj);
  (* (--Rsp)) = (Wrd1150.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_235)
  (Wrd1139.Obj) = Rvl;
  goto label_321;

DEFLABEL (label_324)
  (Wrd1129.Obj) = (Rsp [4]);
  (Wrd1133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_80]))));
  (* (--Rsp)) = (Wrd1133.Obj);
  (* (--Rsp)) = (Wrd1100.Obj);
  (* (--Rsp)) = (Wrd1129.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_234)
  (Wrd1116.Obj) = Rvl;
  goto label_323;

DEFLABEL (label_326)
  (Wrd1111.Obj) = (Rsp [2]);
  (Wrd1112.Obj) = (current_block [OBJECT_31_12]);
  (Wrd1115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_79]))));
  (* (--Rsp)) = (Wrd1115.Obj);
  (* (--Rsp)) = (Wrd1112.Obj);
  (* (--Rsp)) = (Wrd1111.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_233)
  (Wrd1100.Obj) = Rvl;
  goto label_325;

DEFLABEL (label_328)
  (Wrd1095.Obj) = (Rsp [4]);
  (Wrd1099.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_78]))));
  (* (--Rsp)) = (Wrd1099.Obj);
  (* (--Rsp)) = (Wrd1066.Obj);
  (* (--Rsp)) = (Wrd1095.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_232)
  (* (--Rsp)) = Rvl;
  goto label_327;

DEFLABEL (label_330)
  (Wrd1077.Obj) = (Rsp [1]);
  (Wrd1078.Obj) = (current_block [OBJECT_31_12]);
  (Wrd1081.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_77]))));
  (* (--Rsp)) = (Wrd1081.Obj);
  (* (--Rsp)) = (Wrd1078.Obj);
  (* (--Rsp)) = (Wrd1077.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_231)
  (Wrd1066.Obj) = Rvl;
  goto label_329;

DEFLABEL (label_332)
  (Wrd1061.Obj) = (Rsp [0]);
  (Wrd1062.Obj) = (current_block [OBJECT_31_11]);
  (Wrd1065.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_76]))));
  (* (--Rsp)) = (Wrd1065.Obj);
  (* (--Rsp)) = (Wrd1062.Obj);
  (* (--Rsp)) = (Wrd1061.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_230)
  (* (--Rsp)) = Rvl;
  goto label_331;

DEFLABEL (label_334)
  (Wrd1042.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_75]))));
  (* (--Rsp)) = (Wrd1042.Obj);
  (* (--Rsp)) = (Wrd1027.Obj);
  (* (--Rsp)) = (Wrd1011.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_6]), 2);

DEFLABEL (label_229)
  (Wrd1028.Obj) = Rvl;
  goto label_333;

DEFLABEL (label_336)
  (Wrd1022.Obj) = (Rsp [1]);
  (Wrd1023.Obj) = (current_block [OBJECT_31_5]);
  (Wrd1026.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_74]))));
  (* (--Rsp)) = (Wrd1026.Obj);
  (* (--Rsp)) = (Wrd1023.Obj);
  (* (--Rsp)) = (Wrd1022.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_228)
  (Wrd1011.Obj) = Rvl;
  goto label_335;

DEFLABEL (label_338)
  (Wrd996.Obj) = (Rsp [3]);
  (Wrd1000.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_73]))));
  (* (--Rsp)) = (Wrd1000.Obj);
  (* (--Rsp)) = (Wrd967.Obj);
  (* (--Rsp)) = (Wrd996.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_227)
  (Wrd983.Obj) = Rvl;
  goto label_337;

DEFLABEL (label_340)
  (Wrd978.Obj) = (Rsp [2]);
  (Wrd979.Obj) = (current_block [OBJECT_31_12]);
  (Wrd982.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_72]))));
  (* (--Rsp)) = (Wrd982.Obj);
  (* (--Rsp)) = (Wrd979.Obj);
  (* (--Rsp)) = (Wrd978.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_226)
  (Wrd967.Obj) = Rvl;
  goto label_339;

DEFLABEL (label_342)
  (Wrd957.Obj) = (Rsp [4]);
  (Wrd961.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_71]))));
  (* (--Rsp)) = (Wrd961.Obj);
  (* (--Rsp)) = (Wrd928.Obj);
  (* (--Rsp)) = (Wrd957.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_225)
  (Wrd944.Obj) = Rvl;
  goto label_341;

DEFLABEL (label_344)
  (Wrd939.Obj) = (Rsp [2]);
  (Wrd940.Obj) = (current_block [OBJECT_31_12]);
  (Wrd943.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_70]))));
  (* (--Rsp)) = (Wrd943.Obj);
  (* (--Rsp)) = (Wrd940.Obj);
  (* (--Rsp)) = (Wrd939.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_224)
  (Wrd928.Obj) = Rvl;
  goto label_343;

DEFLABEL (label_346)
  (Wrd923.Obj) = (Rsp [4]);
  (Wrd927.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_69]))));
  (* (--Rsp)) = (Wrd927.Obj);
  (* (--Rsp)) = (Wrd894.Obj);
  (* (--Rsp)) = (Wrd923.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_223)
  (* (--Rsp)) = Rvl;
  goto label_345;

DEFLABEL (label_348)
  (Wrd905.Obj) = (Rsp [1]);
  (Wrd906.Obj) = (current_block [OBJECT_31_12]);
  (Wrd909.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_68]))));
  (* (--Rsp)) = (Wrd909.Obj);
  (* (--Rsp)) = (Wrd906.Obj);
  (* (--Rsp)) = (Wrd905.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_222)
  (Wrd894.Obj) = Rvl;
  goto label_347;

DEFLABEL (label_350)
  (Wrd889.Obj) = (Rsp [0]);
  (Wrd890.Obj) = (current_block [OBJECT_31_11]);
  (Wrd893.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_67]))));
  (* (--Rsp)) = (Wrd893.Obj);
  (* (--Rsp)) = (Wrd890.Obj);
  (* (--Rsp)) = (Wrd889.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_221)
  (* (--Rsp)) = Rvl;
  goto label_349;

DEFLABEL (label_352)
  (Wrd872.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_66]))));
  (* (--Rsp)) = (Wrd872.Obj);
  (* (--Rsp)) = (Wrd857.Obj);
  (* (--Rsp)) = (Wrd841.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_6]), 2);

DEFLABEL (label_220)
  (Wrd858.Obj) = Rvl;
  goto label_351;

DEFLABEL (label_354)
  (Wrd852.Obj) = (Rsp [1]);
  (Wrd853.Obj) = (current_block [OBJECT_31_5]);
  (Wrd856.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_65]))));
  (* (--Rsp)) = (Wrd856.Obj);
  (* (--Rsp)) = (Wrd853.Obj);
  (* (--Rsp)) = (Wrd852.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_219)
  (Wrd841.Obj) = Rvl;
  goto label_353;

DEFLABEL (label_356)
  (Wrd826.Obj) = (Rsp [3]);
  (Wrd830.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_64]))));
  (* (--Rsp)) = (Wrd830.Obj);
  (* (--Rsp)) = (Wrd797.Obj);
  (* (--Rsp)) = (Wrd826.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_218)
  (Wrd813.Obj) = Rvl;
  goto label_355;

DEFLABEL (label_358)
  (Wrd808.Obj) = (Rsp [2]);
  (Wrd809.Obj) = (current_block [OBJECT_31_12]);
  (Wrd812.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_63]))));
  (* (--Rsp)) = (Wrd812.Obj);
  (* (--Rsp)) = (Wrd809.Obj);
  (* (--Rsp)) = (Wrd808.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_217)
  (Wrd797.Obj) = Rvl;
  goto label_357;

DEFLABEL (label_360)
  (Wrd787.Obj) = (Rsp [4]);
  (Wrd791.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_62]))));
  (* (--Rsp)) = (Wrd791.Obj);
  (* (--Rsp)) = (Wrd758.Obj);
  (* (--Rsp)) = (Wrd787.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_216)
  (Wrd774.Obj) = Rvl;
  goto label_359;

DEFLABEL (label_362)
  (Wrd769.Obj) = (Rsp [2]);
  (Wrd770.Obj) = (current_block [OBJECT_31_12]);
  (Wrd773.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_61]))));
  (* (--Rsp)) = (Wrd773.Obj);
  (* (--Rsp)) = (Wrd770.Obj);
  (* (--Rsp)) = (Wrd769.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_215)
  (Wrd758.Obj) = Rvl;
  goto label_361;

DEFLABEL (label_364)
  (Wrd753.Obj) = (Rsp [4]);
  (Wrd757.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_60]))));
  (* (--Rsp)) = (Wrd757.Obj);
  (* (--Rsp)) = (Wrd724.Obj);
  (* (--Rsp)) = (Wrd753.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_214)
  (* (--Rsp)) = Rvl;
  goto label_363;

DEFLABEL (label_366)
  (Wrd735.Obj) = (Rsp [1]);
  (Wrd736.Obj) = (current_block [OBJECT_31_12]);
  (Wrd739.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_59]))));
  (* (--Rsp)) = (Wrd739.Obj);
  (* (--Rsp)) = (Wrd736.Obj);
  (* (--Rsp)) = (Wrd735.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_213)
  (Wrd724.Obj) = Rvl;
  goto label_365;

DEFLABEL (label_368)
  (Wrd719.Obj) = (Rsp [0]);
  (Wrd720.Obj) = (current_block [OBJECT_31_11]);
  (Wrd723.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_58]))));
  (* (--Rsp)) = (Wrd723.Obj);
  (* (--Rsp)) = (Wrd720.Obj);
  (* (--Rsp)) = (Wrd719.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_212)
  (* (--Rsp)) = Rvl;
  goto label_367;

DEFLABEL (label_370)
  (Wrd388.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_57]))));
  (* (--Rsp)) = (Wrd388.Obj);
  (* (--Rsp)) = (Wrd373.Obj);
  (* (--Rsp)) = (Wrd357.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_6]), 2);

DEFLABEL (label_194)
  (Wrd374.Obj) = Rvl;
  goto label_369;

DEFLABEL (label_372)
  (Wrd368.Obj) = (Rsp [1]);
  (Wrd369.Obj) = (current_block [OBJECT_31_5]);
  (Wrd372.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_56]))));
  (* (--Rsp)) = (Wrd372.Obj);
  (* (--Rsp)) = (Wrd369.Obj);
  (* (--Rsp)) = (Wrd368.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_193)
  (Wrd357.Obj) = Rvl;
  goto label_371;

DEFLABEL (label_374)
  (Wrd342.Obj) = (Rsp [3]);
  (Wrd346.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_55]))));
  (* (--Rsp)) = (Wrd346.Obj);
  (* (--Rsp)) = (Wrd313.Obj);
  (* (--Rsp)) = (Wrd342.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_192)
  (Wrd329.Obj) = Rvl;
  goto label_373;

DEFLABEL (label_376)
  (Wrd324.Obj) = (Rsp [2]);
  (Wrd325.Obj) = (current_block [OBJECT_31_12]);
  (Wrd328.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_54]))));
  (* (--Rsp)) = (Wrd328.Obj);
  (* (--Rsp)) = (Wrd325.Obj);
  (* (--Rsp)) = (Wrd324.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_191)
  (Wrd313.Obj) = Rvl;
  goto label_375;

DEFLABEL (label_378)
  (Wrd303.Obj) = (Rsp [4]);
  (Wrd307.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_53]))));
  (* (--Rsp)) = (Wrd307.Obj);
  (* (--Rsp)) = (Wrd274.Obj);
  (* (--Rsp)) = (Wrd303.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_190)
  (Wrd290.Obj) = Rvl;
  goto label_377;

DEFLABEL (label_380)
  (Wrd285.Obj) = (Rsp [2]);
  (Wrd286.Obj) = (current_block [OBJECT_31_12]);
  (Wrd289.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_52]))));
  (* (--Rsp)) = (Wrd289.Obj);
  (* (--Rsp)) = (Wrd286.Obj);
  (* (--Rsp)) = (Wrd285.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_189)
  (Wrd274.Obj) = Rvl;
  goto label_379;

DEFLABEL (label_382)
  (Wrd269.Obj) = (Rsp [4]);
  (Wrd273.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_51]))));
  (* (--Rsp)) = (Wrd273.Obj);
  (* (--Rsp)) = (Wrd240.Obj);
  (* (--Rsp)) = (Wrd269.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_188)
  (* (--Rsp)) = Rvl;
  goto label_381;

DEFLABEL (label_384)
  (Wrd251.Obj) = (Rsp [1]);
  (Wrd252.Obj) = (current_block [OBJECT_31_12]);
  (Wrd255.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_50]))));
  (* (--Rsp)) = (Wrd255.Obj);
  (* (--Rsp)) = (Wrd252.Obj);
  (* (--Rsp)) = (Wrd251.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_187)
  (Wrd240.Obj) = Rvl;
  goto label_383;

DEFLABEL (label_386)
  (Wrd235.Obj) = (Rsp [0]);
  (Wrd236.Obj) = (current_block [OBJECT_31_11]);
  (Wrd239.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_49]))));
  (* (--Rsp)) = (Wrd239.Obj);
  (* (--Rsp)) = (Wrd236.Obj);
  (* (--Rsp)) = (Wrd235.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_186)
  (* (--Rsp)) = Rvl;
  goto label_385;

DEFLABEL (label_388)
  (Wrd218.Obj) = (Rsp [4]);
  (Wrd219.pObj) = (OBJECT_ADDRESS (Wrd218.Obj));
  (Wrd217.Obj) = ((Wrd219.pObj) [2]);
  (Wrd220.Obj) = (current_block [OBJECT_31_7]);
  (Wrd223.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_48]))));
  (* (--Rsp)) = (Wrd223.Obj);
  (* (--Rsp)) = (Wrd220.Obj);
  (* (--Rsp)) = (Wrd217.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_185)
  (* (--Rsp)) = Rvl;
  goto label_387;

DEFLABEL (label_391)
  (Wrd153.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd153.Obj);
  (Wrd155.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_1]));
  (Wrd154.Obj) = ((Wrd155.pObj) [0]);
  (Wrd158.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd160.uLng) = (OBJECT_TYPE (Wrd153.Obj));
  (Wrd157.Obj) = (MAKE_OBJECT (26, (Wrd160.uLng)));
  (Wrd170.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if (! ((Wrd170.uLng) == 10))
    goto label_393;
  if (! ((Wrd158.uLng) == 26))
    goto label_393;
  (Wrd166.Lng) = (FIXNUM_TO_LONG (Wrd157.Obj));
  (Wrd167.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd168.Obj) = ((Wrd167.pObj) [0]);
  (Wrd169.Lng) = (FIXNUM_TO_LONG (Wrd168.Obj));
  if (! (((unsigned long) (Wrd166.Lng)) < ((unsigned long) (Wrd169.Lng))))
    goto label_393;
  (Wrd163.pObj) = (& ((Wrd167.pObj) [(Wrd160.Lng)]));
  (Wrd164.Obj) = ((Wrd163.pObj) [1]);
  (* (--Rsp)) = (Wrd164.Obj);

DEFLABEL (label_392)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_393)
  (Wrd175.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_47]))));
  (* (--Rsp)) = (Wrd175.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd154.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_6]), 2);

DEFLABEL (label_184)
DEFLABEL (label_394)
  (* (--Rsp)) = Rvl;
  goto label_392;

DEFLABEL (label_395)
  (Wrd1248.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_46]))));
  (* (--Rsp)) = (Wrd1248.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd141.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_6]), 2);

DEFLABEL (label_238)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_391;
  goto label_390;

DEFLABEL (label_397)
  if (! ((Wrd140.uLng) == 62))
    goto label_405;
  (Wrd1256.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd1257.Obj) = ((Wrd1256.pObj) [0]);
  (Wrd1258.Lng) = (FIXNUM_TO_LONG (Wrd1257.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1258.Lng))))
    goto label_405;
  (Wrd1250.Obj) = ((Wrd1256.pObj) [1]);

DEFLABEL (label_404)
  (Wrd1266.uLng) = (OBJECT_TYPE (Wrd1250.Obj));
  if (! ((Wrd1266.uLng) == 62))
    goto label_396;
  (Wrd1276.Obj) = (Rsp [5]);
  (Wrd1277.uLng) = (OBJECT_TYPE (Wrd1276.Obj));
  if (! ((Wrd1277.uLng) == 62))
    goto label_403;
  (Wrd1273.pObj) = (OBJECT_ADDRESS (Wrd1276.Obj));
  (Wrd1274.Obj) = ((Wrd1273.pObj) [0]);
  (Wrd1275.Lng) = (FIXNUM_TO_LONG (Wrd1274.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1275.Lng))))
    goto label_403;
  (Wrd1267.Obj) = ((Wrd1273.pObj) [1]);

DEFLABEL (label_402)
  (Wrd1290.uLng) = (OBJECT_TYPE (Wrd1267.Obj));
  if (! ((Wrd1290.uLng) == 62))
    goto label_401;
  (Wrd1287.pObj) = (OBJECT_ADDRESS (Wrd1267.Obj));
  (Wrd1288.Obj) = ((Wrd1287.pObj) [0]);
  (Wrd1289.Lng) = (FIXNUM_TO_LONG (Wrd1288.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1289.Lng))))
    goto label_401;
  (Wrd1283.Obj) = ((Wrd1287.pObj) [1]);

DEFLABEL (label_400)
  if (! ((Wrd1283.Obj) == (current_block [OBJECT_31_10])))
    goto label_396;
  (Wrd1297.Obj) = (current_block [OBJECT_31_9]);
  (* (--Rsp)) = (Wrd1297.Obj);
  (Wrd1298.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd1298.Obj);
  (Wrd1310.uLng) = (OBJECT_TYPE (Wrd1298.Obj));
  if ((Wrd1310.uLng) == 62)
    goto label_399;

DEFLABEL (label_398)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_399)
  (Wrd1306.pObj) = (OBJECT_ADDRESS (Wrd1298.Obj));
  (Wrd1307.Obj) = ((Wrd1306.pObj) [0]);
  (Wrd1308.Lng) = (FIXNUM_TO_LONG (Wrd1307.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1308.Lng))))
    goto label_398;
  (Wrd1300.Obj) = ((Wrd1306.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd1300.Obj);
  goto label_389;

DEFLABEL (label_401)
  (Wrd1292.Obj) = (current_block [OBJECT_31_9]);
  (Wrd1295.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_45]))));
  (* (--Rsp)) = (Wrd1295.Obj);
  (* (--Rsp)) = (Wrd1292.Obj);
  (* (--Rsp)) = (Wrd1267.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_241)
  (Wrd1283.Obj) = Rvl;
  goto label_400;

DEFLABEL (label_403)
  (Wrd1278.Obj) = (Rsp [5]);
  (Wrd1279.Obj) = (current_block [OBJECT_31_9]);
  (Wrd1282.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_44]))));
  (* (--Rsp)) = (Wrd1282.Obj);
  (* (--Rsp)) = (Wrd1279.Obj);
  (* (--Rsp)) = (Wrd1278.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_240)
  (Wrd1267.Obj) = Rvl;
  goto label_402;

DEFLABEL (label_405)
  (Wrd1261.Obj) = (Rsp [5]);
  (Wrd1262.Obj) = (current_block [OBJECT_31_9]);
  (Wrd1265.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_43]))));
  (* (--Rsp)) = (Wrd1265.Obj);
  (* (--Rsp)) = (Wrd1262.Obj);
  (* (--Rsp)) = (Wrd1261.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_239)
  (Wrd1250.Obj) = Rvl;
  goto label_404;

DEFLABEL (label_408)
  (Wrd89.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd91.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_1]));
  (Wrd90.Obj) = ((Wrd91.pObj) [0]);
  (Wrd94.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  (Wrd93.Obj) = (MAKE_OBJECT (26, (Wrd96.uLng)));
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd106.uLng) == 10))
    goto label_409;
  if (! ((Wrd94.uLng) == 26))
    goto label_409;
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd93.Obj));
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd104.Obj) = ((Wrd103.pObj) [0]);
  (Wrd105.Lng) = (FIXNUM_TO_LONG (Wrd104.Obj));
  if (! (((unsigned long) (Wrd102.Lng)) < ((unsigned long) (Wrd105.Lng))))
    goto label_409;
  (Wrd99.pObj) = (& ((Wrd103.pObj) [(Wrd96.Lng)]));
  (Wrd100.Obj) = ((Wrd99.pObj) [1]);
  (* (--Rsp)) = (Wrd100.Obj);
  goto label_392;

DEFLABEL (label_409)
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_42]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_6]), 2);

DEFLABEL (label_183)
  goto label_394;

DEFLABEL (label_410)
  (Wrd1321.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_41]))));
  (* (--Rsp)) = (Wrd1321.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_6]), 2);

DEFLABEL (label_242)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_408;
  goto label_407;

DEFLABEL (label_412)
  if (! ((Wrd76.uLng) == 62))
    goto label_418;
  (Wrd1329.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd1330.Obj) = ((Wrd1329.pObj) [0]);
  (Wrd1331.Lng) = (FIXNUM_TO_LONG (Wrd1330.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1331.Lng))))
    goto label_418;
  (Wrd1323.Obj) = ((Wrd1329.pObj) [1]);

DEFLABEL (label_417)
  (Wrd1339.uLng) = (OBJECT_TYPE (Wrd1323.Obj));
  if (! ((Wrd1339.uLng) == 62))
    goto label_411;
  (Wrd1349.Obj) = (Rsp [5]);
  (Wrd1350.uLng) = (OBJECT_TYPE (Wrd1349.Obj));
  if (! ((Wrd1350.uLng) == 62))
    goto label_416;
  (Wrd1346.pObj) = (OBJECT_ADDRESS (Wrd1349.Obj));
  (Wrd1347.Obj) = ((Wrd1346.pObj) [0]);
  (Wrd1348.Lng) = (FIXNUM_TO_LONG (Wrd1347.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1348.Lng))))
    goto label_416;
  (Wrd1340.Obj) = ((Wrd1346.pObj) [1]);

DEFLABEL (label_415)
  (Wrd1363.uLng) = (OBJECT_TYPE (Wrd1340.Obj));
  if (! ((Wrd1363.uLng) == 62))
    goto label_414;
  (Wrd1360.pObj) = (OBJECT_ADDRESS (Wrd1340.Obj));
  (Wrd1361.Obj) = ((Wrd1360.pObj) [0]);
  (Wrd1362.Lng) = (FIXNUM_TO_LONG (Wrd1361.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1362.Lng))))
    goto label_414;
  (Wrd1356.Obj) = ((Wrd1360.pObj) [1]);

DEFLABEL (label_413)
  if (! ((Wrd1356.Obj) == (current_block [OBJECT_31_10])))
    goto label_411;
  (Wrd1370.Obj) = (current_block [OBJECT_31_9]);
  (* (--Rsp)) = (Wrd1370.Obj);
  (Wrd1371.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd1371.Obj);
  (Wrd1383.uLng) = (OBJECT_TYPE (Wrd1371.Obj));
  if (! ((Wrd1383.uLng) == 62))
    goto label_398;
  (Wrd1379.pObj) = (OBJECT_ADDRESS (Wrd1371.Obj));
  (Wrd1380.Obj) = ((Wrd1379.pObj) [0]);
  (Wrd1381.Lng) = (FIXNUM_TO_LONG (Wrd1380.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1381.Lng))))
    goto label_398;
  (Wrd1373.Obj) = ((Wrd1379.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd1373.Obj);
  goto label_406;

DEFLABEL (label_414)
  (Wrd1365.Obj) = (current_block [OBJECT_31_9]);
  (Wrd1368.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_40]))));
  (* (--Rsp)) = (Wrd1368.Obj);
  (* (--Rsp)) = (Wrd1365.Obj);
  (* (--Rsp)) = (Wrd1340.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_245)
  (Wrd1356.Obj) = Rvl;
  goto label_413;

DEFLABEL (label_416)
  (Wrd1351.Obj) = (Rsp [5]);
  (Wrd1352.Obj) = (current_block [OBJECT_31_9]);
  (Wrd1355.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_39]))));
  (* (--Rsp)) = (Wrd1355.Obj);
  (* (--Rsp)) = (Wrd1352.Obj);
  (* (--Rsp)) = (Wrd1351.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_244)
  (Wrd1340.Obj) = Rvl;
  goto label_415;

DEFLABEL (label_418)
  (Wrd1334.Obj) = (Rsp [5]);
  (Wrd1335.Obj) = (current_block [OBJECT_31_9]);
  (Wrd1338.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_38]))));
  (* (--Rsp)) = (Wrd1338.Obj);
  (* (--Rsp)) = (Wrd1335.Obj);
  (* (--Rsp)) = (Wrd1334.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_243)
  (Wrd1323.Obj) = Rvl;
  goto label_417;

DEFLABEL (label_421)
  (Wrd25.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_1]));
  (Wrd26.Obj) = ((Wrd27.pObj) [0]);
  (Wrd30.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  (Wrd29.Obj) = (MAKE_OBJECT (26, (Wrd32.uLng)));
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_422;
  if (! ((Wrd30.uLng) == 26))
    goto label_422;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) (Wrd38.Lng)) < ((unsigned long) (Wrd41.Lng))))
    goto label_422;
  (Wrd35.pObj) = (& ((Wrd39.pObj) [(Wrd32.Lng)]));
  (Wrd36.Obj) = ((Wrd35.pObj) [1]);
  (* (--Rsp)) = (Wrd36.Obj);
  goto label_392;

DEFLABEL (label_422)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_37]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_6]), 2);

DEFLABEL (label_182)
  goto label_394;

DEFLABEL (label_423)
  (Wrd1394.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_36]))));
  (* (--Rsp)) = (Wrd1394.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_6]), 2);

DEFLABEL (label_246)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_421;
  goto label_420;

DEFLABEL (label_425)
  if (! ((Wrd12.uLng) == 62))
    goto label_431;
  (Wrd1402.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd1403.Obj) = ((Wrd1402.pObj) [0]);
  (Wrd1404.Lng) = (FIXNUM_TO_LONG (Wrd1403.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1404.Lng))))
    goto label_431;
  (Wrd1396.Obj) = ((Wrd1402.pObj) [1]);

DEFLABEL (label_430)
  (Wrd1412.uLng) = (OBJECT_TYPE (Wrd1396.Obj));
  if (! ((Wrd1412.uLng) == 62))
    goto label_424;
  (Wrd1422.Obj) = (Rsp [5]);
  (Wrd1423.uLng) = (OBJECT_TYPE (Wrd1422.Obj));
  if (! ((Wrd1423.uLng) == 62))
    goto label_429;
  (Wrd1419.pObj) = (OBJECT_ADDRESS (Wrd1422.Obj));
  (Wrd1420.Obj) = ((Wrd1419.pObj) [0]);
  (Wrd1421.Lng) = (FIXNUM_TO_LONG (Wrd1420.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1421.Lng))))
    goto label_429;
  (Wrd1413.Obj) = ((Wrd1419.pObj) [1]);

DEFLABEL (label_428)
  (Wrd1436.uLng) = (OBJECT_TYPE (Wrd1413.Obj));
  if (! ((Wrd1436.uLng) == 62))
    goto label_427;
  (Wrd1433.pObj) = (OBJECT_ADDRESS (Wrd1413.Obj));
  (Wrd1434.Obj) = ((Wrd1433.pObj) [0]);
  (Wrd1435.Lng) = (FIXNUM_TO_LONG (Wrd1434.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1435.Lng))))
    goto label_427;
  (Wrd1429.Obj) = ((Wrd1433.pObj) [1]);

DEFLABEL (label_426)
  if (! ((Wrd1429.Obj) == (current_block [OBJECT_31_10])))
    goto label_424;
  (Wrd1443.Obj) = (current_block [OBJECT_31_9]);
  (* (--Rsp)) = (Wrd1443.Obj);
  (Wrd1444.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd1444.Obj);
  (Wrd1456.uLng) = (OBJECT_TYPE (Wrd1444.Obj));
  if (! ((Wrd1456.uLng) == 62))
    goto label_398;
  (Wrd1452.pObj) = (OBJECT_ADDRESS (Wrd1444.Obj));
  (Wrd1453.Obj) = ((Wrd1452.pObj) [0]);
  (Wrd1454.Lng) = (FIXNUM_TO_LONG (Wrd1453.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1454.Lng))))
    goto label_398;
  (Wrd1446.Obj) = ((Wrd1452.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd1446.Obj);
  goto label_419;

DEFLABEL (label_427)
  (Wrd1438.Obj) = (current_block [OBJECT_31_9]);
  (Wrd1441.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_35]))));
  (* (--Rsp)) = (Wrd1441.Obj);
  (* (--Rsp)) = (Wrd1438.Obj);
  (* (--Rsp)) = (Wrd1413.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_249)
  (Wrd1429.Obj) = Rvl;
  goto label_426;

DEFLABEL (label_429)
  (Wrd1424.Obj) = (Rsp [5]);
  (Wrd1425.Obj) = (current_block [OBJECT_31_9]);
  (Wrd1428.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_34]))));
  (* (--Rsp)) = (Wrd1428.Obj);
  (* (--Rsp)) = (Wrd1425.Obj);
  (* (--Rsp)) = (Wrd1424.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_248)
  (Wrd1413.Obj) = Rvl;
  goto label_428;

DEFLABEL (label_431)
  (Wrd1407.Obj) = (Rsp [5]);
  (Wrd1408.Obj) = (current_block [OBJECT_31_9]);
  (Wrd1411.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_33]))));
  (* (--Rsp)) = (Wrd1411.Obj);
  (* (--Rsp)) = (Wrd1408.Obj);
  (* (--Rsp)) = (Wrd1407.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_247)
  (Wrd1396.Obj) = Rvl;
  goto label_430;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_29);
  (* (--Rsp)) = Rvl;
  goto label_389;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_31_30);
  (* (--Rsp)) = Rvl;
  goto label_406;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_31_31);
  (* (--Rsp)) = Rvl;
  goto label_419;

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_31_32);
  (* (--Rsp)) = Rvl;
  goto label_316;

DEFLABEL (search_lines_274)
DEFLABEL (search_lines_160)
  INTERRUPT_CHECK (26, LABEL_31_16);
  (Wrd1457.Obj) = (Rsp [1]);
  (Wrd1458.Obj) = (Rsp [2]);
  if ((Wrd1457.Obj) == (Wrd1458.Obj))
    goto label_459;
  (Wrd1468.Obj) = (Rsp [3]);
  (Wrd1469.uLng) = (OBJECT_TYPE (Wrd1468.Obj));
  if (! ((Wrd1469.uLng) == 62))
    goto label_458;
  (Wrd1465.pObj) = (OBJECT_ADDRESS (Wrd1468.Obj));
  (Wrd1466.Obj) = ((Wrd1465.pObj) [0]);
  (Wrd1467.Lng) = (FIXNUM_TO_LONG (Wrd1466.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd1467.Lng))))
    goto label_458;
  (Wrd1459.Obj) = ((Wrd1465.pObj) [6]);

DEFLABEL (label_457)
  (Wrd1677.uLng) = (OBJECT_TYPE (Wrd1459.Obj));
  if (! ((Wrd1677.uLng) == 10))
    goto label_456;
  (Wrd1670.Obj) = (Rsp [0]);
  (Wrd1671.uLng) = (OBJECT_TYPE (Wrd1670.Obj));
  if (! ((Wrd1671.uLng) == 26))
    goto label_456;
  (Wrd1673.Lng) = (FIXNUM_TO_LONG (Wrd1670.Obj));
  (Wrd1674.pObj) = (OBJECT_ADDRESS (Wrd1459.Obj));
  (Wrd1675.Obj) = ((Wrd1674.pObj) [0]);
  (Wrd1676.Lng) = (FIXNUM_TO_LONG (Wrd1675.Obj));
  if (! (((unsigned long) (Wrd1673.Lng)) < ((unsigned long) (Wrd1676.Lng))))
    goto label_456;
  (Wrd1476.uLng) = (OBJECT_DATUM (Wrd1670.Obj));
  (Wrd1478.pObj) = (& ((Wrd1674.pObj) [(Wrd1476.Lng)]));
  (Wrd1479.Obj) = ((Wrd1478.pObj) [1]);
  if ((Wrd1479.Obj) == ((SCHEME_OBJECT) 0))
    goto label_439;

DEFLABEL (label_455)
  (Wrd1527.Obj) = (Rsp [3]);
  (Wrd1528.uLng) = (OBJECT_TYPE (Wrd1527.Obj));
  if (! ((Wrd1528.uLng) == 62))
    goto label_454;
  (Wrd1524.pObj) = (OBJECT_ADDRESS (Wrd1527.Obj));
  (Wrd1525.Obj) = ((Wrd1524.pObj) [0]);
  (Wrd1526.Lng) = (FIXNUM_TO_LONG (Wrd1525.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd1526.Lng))))
    goto label_454;
  (Wrd1518.Obj) = ((Wrd1524.pObj) [6]);

DEFLABEL (label_453)
  (Wrd1546.uLng) = (OBJECT_TYPE (Wrd1518.Obj));
  if (! ((Wrd1546.uLng) == 10))
    goto label_452;
  (Wrd1539.Obj) = (Rsp [0]);
  (Wrd1540.uLng) = (OBJECT_TYPE (Wrd1539.Obj));
  if (! ((Wrd1540.uLng) == 26))
    goto label_452;
  (Wrd1542.Lng) = (FIXNUM_TO_LONG (Wrd1539.Obj));
  (Wrd1543.pObj) = (OBJECT_ADDRESS (Wrd1518.Obj));
  (Wrd1544.Obj) = ((Wrd1543.pObj) [0]);
  (Wrd1545.Lng) = (FIXNUM_TO_LONG (Wrd1544.Obj));
  if (! (((unsigned long) (Wrd1542.Lng)) < ((unsigned long) (Wrd1545.Lng))))
    goto label_452;
  (Wrd1536.uLng) = (OBJECT_DATUM (Wrd1539.Obj));
  (Wrd1538.pObj) = (& ((Wrd1543.pObj) [(Wrd1536.Lng)]));
  (Wrd1534.Obj) = ((Wrd1538.pObj) [1]);

DEFLABEL (label_451)
  (Wrd1553.pObj) = (OBJECT_ADDRESS (Wrd1534.Obj));
  (Wrd1552.Obj) = ((Wrd1553.pObj) [0]);
  (Wrd1554.Obj) = (Rsp [4]);
  if ((Wrd1554.Obj) == (Wrd1552.Obj))
    goto label_440;

DEFLABEL (label_439)
  (Wrd1490.Obj) = (Rsp [3]);
  (Wrd1491.uLng) = (OBJECT_TYPE (Wrd1490.Obj));
  if (! ((Wrd1491.uLng) == 62))
    goto label_438;
  (Wrd1487.pObj) = (OBJECT_ADDRESS (Wrd1490.Obj));
  (Wrd1488.Obj) = ((Wrd1487.pObj) [0]);
  (Wrd1489.Lng) = (FIXNUM_TO_LONG (Wrd1488.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd1489.Lng))))
    goto label_438;
  (Wrd1481.Obj) = ((Wrd1487.pObj) [6]);

DEFLABEL (label_437)
  (Wrd1501.uLng) = (OBJECT_TYPE (Wrd1481.Obj));
  if (! ((Wrd1501.uLng) == 10))
    goto label_436;
  (Wrd1499.pObj) = (OBJECT_ADDRESS (Wrd1481.Obj));
  (Wrd1500.Obj) = ((Wrd1499.pObj) [0]);
  (Wrd1497.Obj) = (MAKE_OBJECT (26, (Wrd1500.uLng)));

DEFLABEL (label_435)
  (Wrd1507.Obj) = (Rsp [0]);
  (Wrd1508.Lng) = (FIXNUM_TO_LONG (Wrd1507.Obj));
  (Wrd1509.Lng) = ((Wrd1508.Lng) + 1L);
  (Wrd1506.Obj) = (LONG_TO_FIXNUM (Wrd1509.Lng));
  if ((Wrd1506.Obj) == (Wrd1497.Obj))
    goto label_433;
  Wrd1510 = Wrd1506;
  goto label_432;

DEFLABEL (label_433)
  (Wrd1510.Obj) = (current_block [OBJECT_31_9]);

DEFLABEL (label_432)
DEFLABEL (label_434)
  (Rsp [0]) = (Wrd1510.Obj);
  (Wrd1515.Obj) = (Rsp [1]);
  (Wrd1516.Lng) = (FIXNUM_TO_LONG (Wrd1515.Obj));
  (Wrd1517.Lng) = ((Wrd1516.Lng) + 1L);
  (Wrd1514.Obj) = (LONG_TO_FIXNUM (Wrd1517.Lng));
  (Rsp [1]) = (Wrd1514.Obj);
  goto label_277;

DEFLABEL (label_436)
  (Wrd1505.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_28]))));
  (* (--Rsp)) = (Wrd1505.Obj);
  (* (--Rsp)) = (Wrd1481.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_8]), 1);

DEFLABEL (label_252)
  (Wrd1497.Obj) = Rvl;
  goto label_435;

DEFLABEL (label_438)
  (Wrd1492.Obj) = (Rsp [3]);
  (Wrd1493.Obj) = (current_block [OBJECT_31_5]);
  (Wrd1496.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_27]))));
  (* (--Rsp)) = (Wrd1496.Obj);
  (* (--Rsp)) = (Wrd1493.Obj);
  (* (--Rsp)) = (Wrd1492.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_251)
  (Wrd1481.Obj) = Rvl;
  goto label_437;

DEFLABEL (label_440)
  (Wrd1564.Obj) = (Rsp [3]);
  (Wrd1565.uLng) = (OBJECT_TYPE (Wrd1564.Obj));
  if (! ((Wrd1565.uLng) == 62))
    goto label_450;
  (Wrd1561.pObj) = (OBJECT_ADDRESS (Wrd1564.Obj));
  (Wrd1562.Obj) = ((Wrd1561.pObj) [0]);
  (Wrd1563.Lng) = (FIXNUM_TO_LONG (Wrd1562.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd1563.Lng))))
    goto label_450;
  (Wrd1555.Obj) = ((Wrd1561.pObj) [6]);

DEFLABEL (label_449)
  (Wrd1583.uLng) = (OBJECT_TYPE (Wrd1555.Obj));
  if (! ((Wrd1583.uLng) == 10))
    goto label_448;
  (Wrd1576.Obj) = (Rsp [0]);
  (Wrd1577.uLng) = (OBJECT_TYPE (Wrd1576.Obj));
  if (! ((Wrd1577.uLng) == 26))
    goto label_448;
  (Wrd1579.Lng) = (FIXNUM_TO_LONG (Wrd1576.Obj));
  (Wrd1580.pObj) = (OBJECT_ADDRESS (Wrd1555.Obj));
  (Wrd1581.Obj) = ((Wrd1580.pObj) [0]);
  (Wrd1582.Lng) = (FIXNUM_TO_LONG (Wrd1581.Obj));
  if (! (((unsigned long) (Wrd1579.Lng)) < ((unsigned long) (Wrd1582.Lng))))
    goto label_448;
  (Wrd1573.uLng) = (OBJECT_DATUM (Wrd1576.Obj));
  (Wrd1575.pObj) = (& ((Wrd1580.pObj) [(Wrd1573.Lng)]));
  (Wrd1571.Obj) = ((Wrd1575.pObj) [1]);

DEFLABEL (label_447)
  (Wrd1590.pObj) = (OBJECT_ADDRESS (Wrd1571.Obj));
  (Wrd1589.Obj) = ((Wrd1590.pObj) [1]);
  (Wrd1592.pObj) = (OBJECT_ADDRESS (Wrd1589.Obj));
  (Wrd1591.Obj) = ((Wrd1592.pObj) [0]);
  (Wrd1593.Obj) = (Rsp [5]);
  if (! ((Wrd1593.Obj) == (Wrd1591.Obj)))
    goto label_439;
  (Wrd1603.Obj) = (Rsp [3]);
  (Wrd1604.uLng) = (OBJECT_TYPE (Wrd1603.Obj));
  if (! ((Wrd1604.uLng) == 62))
    goto label_446;
  (Wrd1600.pObj) = (OBJECT_ADDRESS (Wrd1603.Obj));
  (Wrd1601.Obj) = ((Wrd1600.pObj) [0]);
  (Wrd1602.Lng) = (FIXNUM_TO_LONG (Wrd1601.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd1602.Lng))))
    goto label_446;
  (Wrd1594.Obj) = ((Wrd1600.pObj) [6]);

DEFLABEL (label_445)
  (Wrd1622.uLng) = (OBJECT_TYPE (Wrd1594.Obj));
  if (! ((Wrd1622.uLng) == 10))
    goto label_444;
  (Wrd1615.Obj) = (Rsp [0]);
  (Wrd1616.uLng) = (OBJECT_TYPE (Wrd1615.Obj));
  if (! ((Wrd1616.uLng) == 26))
    goto label_444;
  (Wrd1618.Lng) = (FIXNUM_TO_LONG (Wrd1615.Obj));
  (Wrd1619.pObj) = (OBJECT_ADDRESS (Wrd1594.Obj));
  (Wrd1620.Obj) = ((Wrd1619.pObj) [0]);
  (Wrd1621.Lng) = (FIXNUM_TO_LONG (Wrd1620.Obj));
  if (! (((unsigned long) (Wrd1618.Lng)) < ((unsigned long) (Wrd1621.Lng))))
    goto label_444;
  (Wrd1612.uLng) = (OBJECT_DATUM (Wrd1615.Obj));
  (Wrd1614.pObj) = (& ((Wrd1619.pObj) [(Wrd1612.Lng)]));
  (Wrd1610.Obj) = ((Wrd1614.pObj) [1]);

DEFLABEL (label_443)
  (Wrd1629.pObj) = (OBJECT_ADDRESS (Wrd1610.Obj));
  (Wrd1628.Obj) = ((Wrd1629.pObj) [1]);
  (Wrd1631.pObj) = (OBJECT_ADDRESS (Wrd1628.Obj));
  (Wrd1630.Obj) = ((Wrd1631.pObj) [1]);
  (Wrd1633.pObj) = (OBJECT_ADDRESS (Wrd1630.Obj));
  (Wrd1632.Obj) = ((Wrd1633.pObj) [0]);
  (Wrd1634.Obj) = (Rsp [6]);
  if (! ((Wrd1634.Obj) == (Wrd1632.Obj)))
    goto label_439;
  (Wrd1644.Obj) = (Rsp [3]);
  (Wrd1645.uLng) = (OBJECT_TYPE (Wrd1644.Obj));
  if (! ((Wrd1645.uLng) == 62))
    goto label_442;
  (Wrd1641.pObj) = (OBJECT_ADDRESS (Wrd1644.Obj));
  (Wrd1642.Obj) = ((Wrd1641.pObj) [0]);
  (Wrd1643.Lng) = (FIXNUM_TO_LONG (Wrd1642.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd1643.Lng))))
    goto label_442;
  (Wrd1635.Obj) = ((Wrd1641.pObj) [7]);

DEFLABEL (label_441)
  (Rsp [5]) = (Wrd1635.Obj);
  (Wrd1651.Obj) = (Rsp [0]);
  (Rsp [6]) = (Wrd1651.Obj);
  Rsp = (& (Rsp [5]));
  (Wrd1667.Obj) = (Rsp [0]);
  (Wrd1668.uLng) = (OBJECT_TYPE (Wrd1667.Obj));
  if (! ((Wrd1668.uLng) == 10))
    goto label_275;
  (Wrd1659.Obj) = (Rsp [1]);
  (Wrd1660.uLng) = (OBJECT_TYPE (Wrd1659.Obj));
  if (! ((Wrd1660.uLng) == 26))
    goto label_275;
  (Wrd1662.Lng) = (FIXNUM_TO_LONG (Wrd1659.Obj));
  (Wrd1664.pObj) = (OBJECT_ADDRESS (Wrd1667.Obj));
  (Wrd1665.Obj) = ((Wrd1664.pObj) [0]);
  (Wrd1666.Lng) = (FIXNUM_TO_LONG (Wrd1665.Obj));
  if (! (((unsigned long) (Wrd1662.Lng)) < ((unsigned long) (Wrd1666.Lng))))
    goto label_275;
  (Wrd1655.uLng) = (OBJECT_DATUM (Wrd1659.Obj));
  (Wrd1658.pObj) = (& ((Wrd1664.pObj) [(Wrd1655.Lng)]));
  (Wrd1653.Obj) = ((Wrd1658.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd1653.Obj);
  goto label_316;

DEFLABEL (label_442)
  (Wrd1646.Obj) = (Rsp [3]);
  (Wrd1647.Obj) = (current_block [OBJECT_31_7]);
  (Wrd1650.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_26]))));
  (* (--Rsp)) = (Wrd1650.Obj);
  (* (--Rsp)) = (Wrd1647.Obj);
  (* (--Rsp)) = (Wrd1646.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_259)
  (Wrd1635.Obj) = Rvl;
  goto label_441;

DEFLABEL (label_444)
  (Wrd1624.Obj) = (Rsp [0]);
  (Wrd1627.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_25]))));
  (* (--Rsp)) = (Wrd1627.Obj);
  (* (--Rsp)) = (Wrd1624.Obj);
  (* (--Rsp)) = (Wrd1594.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_6]), 2);

DEFLABEL (label_258)
  (Wrd1610.Obj) = Rvl;
  goto label_443;

DEFLABEL (label_446)
  (Wrd1605.Obj) = (Rsp [3]);
  (Wrd1606.Obj) = (current_block [OBJECT_31_5]);
  (Wrd1609.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_24]))));
  (* (--Rsp)) = (Wrd1609.Obj);
  (* (--Rsp)) = (Wrd1606.Obj);
  (* (--Rsp)) = (Wrd1605.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_257)
  (Wrd1594.Obj) = Rvl;
  goto label_445;

DEFLABEL (label_448)
  (Wrd1585.Obj) = (Rsp [0]);
  (Wrd1588.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_23]))));
  (* (--Rsp)) = (Wrd1588.Obj);
  (* (--Rsp)) = (Wrd1585.Obj);
  (* (--Rsp)) = (Wrd1555.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_6]), 2);

DEFLABEL (label_256)
  (Wrd1571.Obj) = Rvl;
  goto label_447;

DEFLABEL (label_450)
  (Wrd1566.Obj) = (Rsp [3]);
  (Wrd1567.Obj) = (current_block [OBJECT_31_5]);
  (Wrd1570.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_22]))));
  (* (--Rsp)) = (Wrd1570.Obj);
  (* (--Rsp)) = (Wrd1567.Obj);
  (* (--Rsp)) = (Wrd1566.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_255)
  (Wrd1555.Obj) = Rvl;
  goto label_449;

DEFLABEL (label_452)
  (Wrd1548.Obj) = (Rsp [0]);
  (Wrd1551.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_21]))));
  (* (--Rsp)) = (Wrd1551.Obj);
  (* (--Rsp)) = (Wrd1548.Obj);
  (* (--Rsp)) = (Wrd1518.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_6]), 2);

DEFLABEL (label_254)
  (Wrd1534.Obj) = Rvl;
  goto label_451;

DEFLABEL (label_454)
  (Wrd1529.Obj) = (Rsp [3]);
  (Wrd1530.Obj) = (current_block [OBJECT_31_5]);
  (Wrd1533.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_20]))));
  (* (--Rsp)) = (Wrd1533.Obj);
  (* (--Rsp)) = (Wrd1530.Obj);
  (* (--Rsp)) = (Wrd1529.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_253)
  (Wrd1518.Obj) = Rvl;
  goto label_453;

DEFLABEL (label_456)
  (Wrd1679.Obj) = (Rsp [0]);
  (Wrd1682.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_19]))));
  (* (--Rsp)) = (Wrd1682.Obj);
  (* (--Rsp)) = (Wrd1679.Obj);
  (* (--Rsp)) = (Wrd1459.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_6]), 2);

DEFLABEL (label_260)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_439;
  goto label_455;

DEFLABEL (label_458)
  (Wrd1470.Obj) = (Rsp [3]);
  (Wrd1471.Obj) = (current_block [OBJECT_31_5]);
  (Wrd1474.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_18]))));
  (* (--Rsp)) = (Wrd1474.Obj);
  (* (--Rsp)) = (Wrd1471.Obj);
  (* (--Rsp)) = (Wrd1470.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_250)
  (Wrd1459.Obj) = Rvl;
  goto label_457;

DEFLABEL (label_459)
  (Wrd1693.Obj) = (Rsp [3]);
  (Wrd1694.uLng) = (OBJECT_TYPE (Wrd1693.Obj));
  if (! ((Wrd1694.uLng) == 62))
    goto label_461;
  (Wrd1690.pObj) = (OBJECT_ADDRESS (Wrd1693.Obj));
  (Wrd1691.Obj) = ((Wrd1690.pObj) [0]);
  (Wrd1692.Lng) = (FIXNUM_TO_LONG (Wrd1691.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd1692.Lng))))
    goto label_461;
  (Wrd1684.Obj) = ((Wrd1690.pObj) [8]);

DEFLABEL (label_460)
  (Rsp [2]) = (Wrd1684.Obj);
  Rsp = (& (Rsp [2]));
  goto search_overflow_158;

DEFLABEL (label_461)
  (Wrd1695.Obj) = (Rsp [3]);
  (Wrd1696.Obj) = (current_block [OBJECT_31_3]);
  (Wrd1699.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_17]))));
  (* (--Rsp)) = (Wrd1699.Obj);
  (* (--Rsp)) = (Wrd1696.Obj);
  (* (--Rsp)) = (Wrd1695.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_261)
  (Wrd1684.Obj) = Rvl;
  goto label_460;

DEFLABEL (search_overflow_273)
DEFLABEL (search_overflow_158)
  INTERRUPT_CHECK (26, LABEL_31_7);
  (Wrd1701.Obj) = (Rsp [0]);
  if ((Wrd1701.Obj) == (current_block [OBJECT_31_0]))
    goto label_481;
  (Wrd1707.uLng) = (OBJECT_TYPE (Wrd1701.Obj));
  if (! ((Wrd1707.uLng) == 1))
    goto label_480;
  (Wrd1705.pObj) = (OBJECT_ADDRESS (Wrd1701.Obj));
  (Wrd1703.Obj) = ((Wrd1705.pObj) [0]);

DEFLABEL (label_479)
  (Wrd1714.uLng) = (OBJECT_TYPE (Wrd1703.Obj));
  if (! ((Wrd1714.uLng) == 1))
    goto label_478;
  (Wrd1713.pObj) = (OBJECT_ADDRESS (Wrd1703.Obj));
  (Wrd1712.Obj) = ((Wrd1713.pObj) [0]);

DEFLABEL (label_477)
  (Wrd1720.pObj) = (OBJECT_ADDRESS (Wrd1712.Obj));
  (Wrd1719.Obj) = ((Wrd1720.pObj) [0]);
  (Wrd1721.Obj) = (Rsp [2]);
  if ((Wrd1721.Obj) == (Wrd1719.Obj))
    goto label_465;

DEFLABEL (label_464)
  (Wrd1725.Obj) = (Rsp [0]);
  (Wrd1726.uLng) = (OBJECT_TYPE (Wrd1725.Obj));
  if (! ((Wrd1726.uLng) == 1))
    goto label_463;
  (Wrd1724.pObj) = (OBJECT_ADDRESS (Wrd1725.Obj));
  (Wrd1722.Obj) = ((Wrd1724.pObj) [1]);

DEFLABEL (label_462)
  (Rsp [0]) = (Wrd1722.Obj);
  goto search_overflow_158;

DEFLABEL (label_463)
  (Wrd1730.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_15]))));
  (* (--Rsp)) = (Wrd1730.Obj);
  (* (--Rsp)) = (Wrd1725.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_264)
  (Wrd1722.Obj) = Rvl;
  goto label_462;

DEFLABEL (label_465)
  (Wrd1734.Obj) = (Rsp [0]);
  (Wrd1735.uLng) = (OBJECT_TYPE (Wrd1734.Obj));
  if (! ((Wrd1735.uLng) == 1))
    goto label_476;
  (Wrd1733.pObj) = (OBJECT_ADDRESS (Wrd1734.Obj));
  (Wrd1731.Obj) = ((Wrd1733.pObj) [0]);

DEFLABEL (label_475)
  (Wrd1742.uLng) = (OBJECT_TYPE (Wrd1731.Obj));
  if (! ((Wrd1742.uLng) == 1))
    goto label_474;
  (Wrd1741.pObj) = (OBJECT_ADDRESS (Wrd1731.Obj));
  (Wrd1740.Obj) = ((Wrd1741.pObj) [0]);

DEFLABEL (label_473)
  (Wrd1748.pObj) = (OBJECT_ADDRESS (Wrd1740.Obj));
  (Wrd1747.Obj) = ((Wrd1748.pObj) [1]);
  (Wrd1750.pObj) = (OBJECT_ADDRESS (Wrd1747.Obj));
  (Wrd1749.Obj) = ((Wrd1750.pObj) [0]);
  (Wrd1751.Obj) = (Rsp [3]);
  if (! ((Wrd1751.Obj) == (Wrd1749.Obj)))
    goto label_464;
  (Wrd1755.Obj) = (Rsp [0]);
  (Wrd1756.uLng) = (OBJECT_TYPE (Wrd1755.Obj));
  if (! ((Wrd1756.uLng) == 1))
    goto label_472;
  (Wrd1754.pObj) = (OBJECT_ADDRESS (Wrd1755.Obj));
  (Wrd1752.Obj) = ((Wrd1754.pObj) [0]);

DEFLABEL (label_471)
  (Wrd1763.uLng) = (OBJECT_TYPE (Wrd1752.Obj));
  if (! ((Wrd1763.uLng) == 1))
    goto label_470;
  (Wrd1762.pObj) = (OBJECT_ADDRESS (Wrd1752.Obj));
  (Wrd1761.Obj) = ((Wrd1762.pObj) [0]);

DEFLABEL (label_469)
  (Wrd1769.pObj) = (OBJECT_ADDRESS (Wrd1761.Obj));
  (Wrd1768.Obj) = ((Wrd1769.pObj) [1]);
  (Wrd1771.pObj) = (OBJECT_ADDRESS (Wrd1768.Obj));
  (Wrd1770.Obj) = ((Wrd1771.pObj) [1]);
  (Wrd1773.pObj) = (OBJECT_ADDRESS (Wrd1770.Obj));
  (Wrd1772.Obj) = ((Wrd1773.pObj) [0]);
  (Wrd1774.Obj) = (Rsp [4]);
  if (! ((Wrd1774.Obj) == (Wrd1772.Obj)))
    goto label_464;
  (Wrd1778.Obj) = (Rsp [0]);
  (Wrd1779.uLng) = (OBJECT_TYPE (Wrd1778.Obj));
  if (! ((Wrd1779.uLng) == 1))
    goto label_468;
  (Wrd1777.pObj) = (OBJECT_ADDRESS (Wrd1778.Obj));
  (Wrd1775.Obj) = ((Wrd1777.pObj) [0]);

DEFLABEL (label_467)
  (Rsp [4]) = (Wrd1775.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd1788.Obj) = (Rsp [0]);
  (Wrd1789.uLng) = (OBJECT_TYPE (Wrd1788.Obj));
  if ((Wrd1789.uLng) == 1)
    goto label_466;
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_466)
  (Wrd1787.pObj) = (OBJECT_ADDRESS (Wrd1788.Obj));
  (Wrd1785.Obj) = ((Wrd1787.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd1785.Obj);
  goto label_316;

DEFLABEL (label_468)
  (Wrd1783.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_14]))));
  (* (--Rsp)) = (Wrd1783.Obj);
  (* (--Rsp)) = (Wrd1778.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_269)
  (Wrd1775.Obj) = Rvl;
  goto label_467;

DEFLABEL (label_470)
  (Wrd1767.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_13]))));
  (* (--Rsp)) = (Wrd1767.Obj);
  (* (--Rsp)) = (Wrd1752.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_268)
  (Wrd1761.Obj) = Rvl;
  goto label_469;

DEFLABEL (label_472)
  (Wrd1760.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_12]))));
  (* (--Rsp)) = (Wrd1760.Obj);
  (* (--Rsp)) = (Wrd1755.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_267)
  (Wrd1752.Obj) = Rvl;
  goto label_471;

DEFLABEL (label_474)
  (Wrd1746.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_11]))));
  (* (--Rsp)) = (Wrd1746.Obj);
  (* (--Rsp)) = (Wrd1731.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_266)
  (Wrd1740.Obj) = Rvl;
  goto label_473;

DEFLABEL (label_476)
  (Wrd1739.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd1739.Obj);
  (* (--Rsp)) = (Wrd1734.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_265)
  (Wrd1731.Obj) = Rvl;
  goto label_475;

DEFLABEL (label_478)
  (Wrd1718.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd1718.Obj);
  (* (--Rsp)) = (Wrd1703.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_263)
  (Wrd1712.Obj) = Rvl;
  goto label_477;

DEFLABEL (label_480)
  (Wrd1711.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd1711.Obj);
  (* (--Rsp)) = (Wrd1701.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_262)
  (Wrd1703.Obj) = Rvl;
  goto label_479;

DEFLABEL (label_481)
  Rsp = (& (Rsp [6]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_316;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_7 5
#define LABEL_32_8 7
#define LABEL_32_9 9
#define LABEL_32_10 11
#define LABEL_32_11 13
#define LABEL_32_12 15
#define LABEL_32_13 17
#define LABEL_32_14 19
#define LABEL_32_15 21
#define LABEL_32_16 23
#define LABEL_32_17 25
#define LABEL_32_18 27
#define LABEL_32_19 29
#define LABEL_32_20 31
#define LABEL_32_21 33
#define LABEL_32_22 35
#define LABEL_32_23 37
#define LABEL_32_24 39
#define LABEL_32_25 41
#define LABEL_32_26 43
#define LABEL_32_27 45
#define LABEL_32_28 47
#define LABEL_32_29 49
#define LABEL_32_30 51
#define LABEL_32_31 53
#define LABEL_32_32 55
#define LABEL_32_33 57
#define LABEL_32_34 59
#define LABEL_32_35 61
#define LABEL_32_36 63
#define LABEL_32_37 65
#define LABEL_32_5 67
#define TAG_32_6 32
#define LABEL_32_38 69
#define LABEL_32_39 71
#define LABEL_32_40 73
#define LABEL_32_41 75
#define LABEL_32_42 77
#define LABEL_32_43 79
#define LABEL_32_44 81
#define LABEL_32_45 83
#define LABEL_32_46 85
#define LABEL_32_47 87
#define LABEL_32_48 89
#define LABEL_32_49 91
#define LABEL_32_50 93
#define LABEL_32_51 95
#define LABEL_32_52 97
#define LABEL_32_53 99
#define LABEL_32_54 101
#define LABEL_32_55 103
#define LABEL_32_56 105
#define LABEL_32_57 107
#define LABEL_32_58 109
#define LABEL_32_59 111
#define LABEL_32_60 113
#define LABEL_32_61 115
#define LABEL_32_62 117
#define LABEL_32_63 119
#define LABEL_32_64 121
#define LABEL_32_65 123
#define LABEL_32_66 125
#define LABEL_32_67 127
#define LABEL_32_68 129
#define LABEL_32_69 131
#define LABEL_32_70 133
#define LABEL_32_71 135
#define LABEL_32_72 137
#define LABEL_32_73 139
#define LABEL_32_74 141
#define LABEL_32_75 143
#define LABEL_32_76 145
#define LABEL_32_77 147
#define LABEL_32_78 149
#define LABEL_32_79 151
#define LABEL_32_80 153
#define LABEL_32_81 155
#define LABEL_32_82 157
#define LABEL_32_83 159
#define LABEL_32_84 161
#define LABEL_32_85 163
#define LABEL_32_86 165
#define LABEL_32_87 167
#define LABEL_32_88 169
#define LABEL_32_89 171
#define LABEL_32_90 173
#define LABEL_32_91 175
#define LABEL_32_92 177
#define LABEL_32_93 179
#define LABEL_32_94 181
#define LABEL_32_95 183
#define LABEL_32_96 185
#define LABEL_32_97 187
#define LABEL_32_98 189
#define LABEL_32_99 191
#define LABEL_32_100 193
#define LABEL_32_101 195
#define LABEL_32_102 197
#define LABEL_32_103 199
#define LABEL_32_104 201
#define LABEL_32_105 203
#define LABEL_32_106 205
#define LABEL_32_107 207
#define LABEL_32_108 209
#define LABEL_32_109 211
#define LABEL_32_110 213
#define LABEL_32_111 215
#define LABEL_32_112 217
#define LABEL_32_114 219
#define LABEL_32_115 221
#define LABEL_32_116 223
#define LABEL_32_117 225
#define LABEL_32_118 227
#define LABEL_32_119 229
#define LABEL_32_120 231
#define LABEL_32_121 233
#define LABEL_32_122 235
#define LABEL_32_123 237
#define LABEL_32_124 239
#define LABEL_32_125 241
#define LABEL_32_126 243
#define LABEL_32_127 245
#define LABEL_32_128 247
#define LABEL_32_129 249
#define LABEL_32_130 251
#define LABEL_32_131 253
#define LABEL_32_132 255
#define LABEL_32_133 257
#define LABEL_32_134 259
#define ENVIRONMENT_LABEL_32_3 281
#define DEBUGGING_LABEL_32_2 280
#define OBJECT_32_13 279
#define OBJECT_32_12 278
#define OBJECT_32_11 277
#define OBJECT_32_10 276
#define OBJECT_32_9 275
#define OBJECT_32_8 274
#define OBJECT_32_7 273
#define OBJECT_32_6 272
#define OBJECT_32_5 271
#define OBJECT_32_4 270
#define OBJECT_32_3 269
#define OBJECT_32_2 268
#define OBJECT_32_1 267
#define OBJECT_32_0 266
#define EXECUTE_CACHE_32_113 261
#define FREE_REFERENCE_32_1 264
#define FREE_REFERENCE_32_0 265
#define FREE_REFERENCES_LABEL_32_0 260
#define NUMBER_OF_LINKER_SECTIONS_32_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd887;
  machine_word Wrd886;
  machine_word Wrd885;
  machine_word Wrd883;
  machine_word Wrd882;
  machine_word Wrd880;
  machine_word Wrd879;
  machine_word Wrd878;
  machine_word Wrd877;
  machine_word Wrd875;
  machine_word Wrd874;
  machine_word Wrd873;
  machine_word Wrd872;
  machine_word Wrd870;
  machine_word Wrd869;
  machine_word Wrd865;
  machine_word Wrd852;
  machine_word Wrd856;
  machine_word Wrd853;
  machine_word Wrd862;
  machine_word Wrd861;
  machine_word Wrd860;
  machine_word Wrd858;
  machine_word Wrd857;
  machine_word Wrd864;
  machine_word Wrd863;
  machine_word Wrd851;
  machine_word Wrd848;
  machine_word Wrd847;
  machine_word Wrd836;
  machine_word Wrd844;
  machine_word Wrd843;
  machine_word Wrd842;
  machine_word Wrd846;
  machine_word Wrd845;
  machine_word Wrd835;
  machine_word Wrd831;
  machine_word Wrd822;
  machine_word Wrd821;
  machine_word Wrd818;
  machine_word Wrd828;
  machine_word Wrd827;
  machine_word Wrd826;
  machine_word Wrd824;
  machine_word Wrd823;
  machine_word Wrd830;
  machine_word Wrd829;
  machine_word Wrd817;
  machine_word Wrd814;
  machine_word Wrd813;
  machine_word Wrd802;
  machine_word Wrd810;
  machine_word Wrd809;
  machine_word Wrd808;
  machine_word Wrd812;
  machine_word Wrd811;
  machine_word Wrd801;
  machine_word Wrd800;
  machine_word Wrd799;
  machine_word Wrd798;
  machine_word Wrd797;
  machine_word Wrd796;
  machine_word Wrd792;
  machine_word Wrd779;
  machine_word Wrd783;
  machine_word Wrd780;
  machine_word Wrd789;
  machine_word Wrd788;
  machine_word Wrd787;
  machine_word Wrd785;
  machine_word Wrd784;
  machine_word Wrd791;
  machine_word Wrd790;
  machine_word Wrd778;
  machine_word Wrd775;
  machine_word Wrd774;
  machine_word Wrd763;
  machine_word Wrd771;
  machine_word Wrd770;
  machine_word Wrd769;
  machine_word Wrd773;
  machine_word Wrd772;
  machine_word Wrd762;
  machine_word Wrd758;
  machine_word Wrd749;
  machine_word Wrd748;
  machine_word Wrd745;
  machine_word Wrd755;
  machine_word Wrd754;
  machine_word Wrd753;
  machine_word Wrd751;
  machine_word Wrd750;
  machine_word Wrd757;
  machine_word Wrd756;
  machine_word Wrd744;
  machine_word Wrd741;
  machine_word Wrd740;
  machine_word Wrd729;
  machine_word Wrd737;
  machine_word Wrd736;
  machine_word Wrd735;
  machine_word Wrd739;
  machine_word Wrd738;
  machine_word Wrd728;
  machine_word Wrd725;
  machine_word Wrd724;
  machine_word Wrd715;
  machine_word Wrd721;
  machine_word Wrd720;
  machine_word Wrd719;
  machine_word Wrd723;
  machine_word Wrd722;
  machine_word Wrd888;
  machine_word Wrd712;
  machine_word Wrd709;
  machine_word Wrd711;
  machine_word Wrd710;
  machine_word Wrd707;
  machine_word Wrd706;
  machine_word Wrd704;
  machine_word Wrd703;
  machine_word Wrd702;
  machine_word Wrd701;
  machine_word Wrd699;
  machine_word Wrd698;
  machine_word Wrd697;
  machine_word Wrd696;
  machine_word Wrd694;
  machine_word Wrd693;
  machine_word Wrd689;
  machine_word Wrd676;
  machine_word Wrd680;
  machine_word Wrd677;
  machine_word Wrd686;
  machine_word Wrd685;
  machine_word Wrd684;
  machine_word Wrd682;
  machine_word Wrd681;
  machine_word Wrd688;
  machine_word Wrd687;
  machine_word Wrd675;
  machine_word Wrd672;
  machine_word Wrd671;
  machine_word Wrd660;
  machine_word Wrd668;
  machine_word Wrd667;
  machine_word Wrd666;
  machine_word Wrd670;
  machine_word Wrd669;
  machine_word Wrd659;
  machine_word Wrd655;
  machine_word Wrd646;
  machine_word Wrd645;
  machine_word Wrd642;
  machine_word Wrd652;
  machine_word Wrd651;
  machine_word Wrd650;
  machine_word Wrd648;
  machine_word Wrd647;
  machine_word Wrd654;
  machine_word Wrd653;
  machine_word Wrd641;
  machine_word Wrd638;
  machine_word Wrd637;
  machine_word Wrd626;
  machine_word Wrd634;
  machine_word Wrd633;
  machine_word Wrd632;
  machine_word Wrd636;
  machine_word Wrd635;
  machine_word Wrd625;
  machine_word Wrd624;
  machine_word Wrd623;
  machine_word Wrd622;
  machine_word Wrd621;
  machine_word Wrd620;
  machine_word Wrd616;
  machine_word Wrd603;
  machine_word Wrd607;
  machine_word Wrd604;
  machine_word Wrd613;
  machine_word Wrd612;
  machine_word Wrd611;
  machine_word Wrd609;
  machine_word Wrd608;
  machine_word Wrd615;
  machine_word Wrd614;
  machine_word Wrd602;
  machine_word Wrd599;
  machine_word Wrd598;
  machine_word Wrd587;
  machine_word Wrd595;
  machine_word Wrd594;
  machine_word Wrd593;
  machine_word Wrd597;
  machine_word Wrd596;
  machine_word Wrd586;
  machine_word Wrd582;
  machine_word Wrd573;
  machine_word Wrd572;
  machine_word Wrd569;
  machine_word Wrd579;
  machine_word Wrd578;
  machine_word Wrd577;
  machine_word Wrd575;
  machine_word Wrd574;
  machine_word Wrd581;
  machine_word Wrd580;
  machine_word Wrd568;
  machine_word Wrd565;
  machine_word Wrd564;
  machine_word Wrd553;
  machine_word Wrd561;
  machine_word Wrd560;
  machine_word Wrd559;
  machine_word Wrd563;
  machine_word Wrd562;
  machine_word Wrd552;
  machine_word Wrd549;
  machine_word Wrd548;
  machine_word Wrd539;
  machine_word Wrd545;
  machine_word Wrd544;
  machine_word Wrd543;
  machine_word Wrd547;
  machine_word Wrd546;
  machine_word Wrd536;
  machine_word Wrd531;
  machine_word Wrd530;
  machine_word Wrd529;
  machine_word Wrd532;
  machine_word Wrd527;
  machine_word Wrd524;
  machine_word Wrd523;
  machine_word Wrd512;
  machine_word Wrd520;
  machine_word Wrd519;
  machine_word Wrd518;
  machine_word Wrd522;
  machine_word Wrd521;
  machine_word Wrd511;
  machine_word Wrd510;
  machine_word Wrd507;
  machine_word Wrd506;
  machine_word Wrd497;
  machine_word Wrd503;
  machine_word Wrd502;
  machine_word Wrd501;
  machine_word Wrd505;
  machine_word Wrd504;
  machine_word Wrd1748;
  machine_word Wrd1750;
  machine_word Wrd1749;
  machine_word Wrd1744;
  machine_word Wrd1746;
  machine_word Wrd1747;
  machine_word Wrd1740;
  machine_word Wrd1742;
  machine_word Wrd1743;
  machine_word Wrd1736;
  machine_word Wrd1738;
  machine_word Wrd1739;
  machine_word Wrd1731;
  machine_word Wrd1733;
  machine_word Wrd1735;
  machine_word Wrd1734;
  machine_word Wrd1727;
  machine_word Wrd1711;
  machine_word Wrd1716;
  machine_word Wrd1713;
  machine_word Wrd1724;
  machine_word Wrd1723;
  machine_word Wrd1722;
  machine_word Wrd1720;
  machine_word Wrd1718;
  machine_word Wrd1717;
  machine_word Wrd1726;
  machine_word Wrd1725;
  machine_word Wrd1709;
  machine_word Wrd1706;
  machine_word Wrd1705;
  machine_word Wrd1694;
  machine_word Wrd1702;
  machine_word Wrd1701;
  machine_word Wrd1700;
  machine_word Wrd1704;
  machine_word Wrd1703;
  machine_word Wrd1690;
  machine_word Wrd1693;
  machine_word Wrd1692;
  machine_word Wrd1691;
  machine_word Wrd1689;
  machine_word Wrd1688;
  machine_word Wrd1687;
  machine_word Wrd1686;
  machine_word Wrd1684;
  machine_word Wrd1683;
  machine_word Wrd1682;
  machine_word Wrd1681;
  machine_word Wrd1679;
  machine_word Wrd1678;
  machine_word Wrd1674;
  machine_word Wrd1661;
  machine_word Wrd1665;
  machine_word Wrd1662;
  machine_word Wrd1671;
  machine_word Wrd1670;
  machine_word Wrd1669;
  machine_word Wrd1667;
  machine_word Wrd1666;
  machine_word Wrd1673;
  machine_word Wrd1672;
  machine_word Wrd1660;
  machine_word Wrd1657;
  machine_word Wrd1656;
  machine_word Wrd1645;
  machine_word Wrd1653;
  machine_word Wrd1652;
  machine_word Wrd1651;
  machine_word Wrd1655;
  machine_word Wrd1654;
  machine_word Wrd1644;
  machine_word Wrd1640;
  machine_word Wrd1631;
  machine_word Wrd1630;
  machine_word Wrd1627;
  machine_word Wrd1637;
  machine_word Wrd1636;
  machine_word Wrd1635;
  machine_word Wrd1633;
  machine_word Wrd1632;
  machine_word Wrd1639;
  machine_word Wrd1638;
  machine_word Wrd1626;
  machine_word Wrd1623;
  machine_word Wrd1622;
  machine_word Wrd1611;
  machine_word Wrd1619;
  machine_word Wrd1618;
  machine_word Wrd1617;
  machine_word Wrd1621;
  machine_word Wrd1620;
  machine_word Wrd1610;
  machine_word Wrd1609;
  machine_word Wrd1608;
  machine_word Wrd1607;
  machine_word Wrd1606;
  machine_word Wrd1605;
  machine_word Wrd1601;
  machine_word Wrd1588;
  machine_word Wrd1592;
  machine_word Wrd1589;
  machine_word Wrd1598;
  machine_word Wrd1597;
  machine_word Wrd1596;
  machine_word Wrd1594;
  machine_word Wrd1593;
  machine_word Wrd1600;
  machine_word Wrd1599;
  machine_word Wrd1587;
  machine_word Wrd1584;
  machine_word Wrd1583;
  machine_word Wrd1572;
  machine_word Wrd1580;
  machine_word Wrd1579;
  machine_word Wrd1578;
  machine_word Wrd1582;
  machine_word Wrd1581;
  machine_word Wrd1571;
  machine_word Wrd1567;
  machine_word Wrd1558;
  machine_word Wrd1557;
  machine_word Wrd1554;
  machine_word Wrd1564;
  machine_word Wrd1563;
  machine_word Wrd1562;
  machine_word Wrd1560;
  machine_word Wrd1559;
  machine_word Wrd1566;
  machine_word Wrd1565;
  machine_word Wrd1553;
  machine_word Wrd1550;
  machine_word Wrd1549;
  machine_word Wrd1538;
  machine_word Wrd1546;
  machine_word Wrd1545;
  machine_word Wrd1544;
  machine_word Wrd1548;
  machine_word Wrd1547;
  machine_word Wrd1537;
  machine_word Wrd1534;
  machine_word Wrd1533;
  machine_word Wrd1524;
  machine_word Wrd1530;
  machine_word Wrd1529;
  machine_word Wrd1528;
  machine_word Wrd1532;
  machine_word Wrd1531;
  machine_word Wrd1521;
  machine_word Wrd1519;
  machine_word Wrd1520;
  machine_word Wrd1517;
  machine_word Wrd1518;
  machine_word Wrd1515;
  machine_word Wrd1516;
  machine_word Wrd1513;
  machine_word Wrd1514;
  machine_word Wrd1512;
  machine_word Wrd1498;
  machine_word Wrd1501;
  machine_word Wrd1499;
  machine_word Wrd1506;
  machine_word Wrd1505;
  machine_word Wrd1504;
  machine_word Wrd1503;
  machine_word Wrd1502;
  machine_word Wrd1507;
  machine_word Wrd1497;
  machine_word Wrd1496;
  machine_word Wrd1493;
  machine_word Wrd1492;
  machine_word Wrd1481;
  machine_word Wrd1489;
  machine_word Wrd1488;
  machine_word Wrd1487;
  machine_word Wrd1491;
  machine_word Wrd1490;
  machine_word Wrd1480;
  machine_word Wrd1479;
  machine_word Wrd1478;
  machine_word Wrd1477;
  machine_word Wrd1476;
  machine_word Wrd1475;
  machine_word Wrd1474;
  machine_word Wrd1473;
  machine_word Wrd1471;
  machine_word Wrd1470;
  machine_word Wrd1469;
  machine_word Wrd1468;
  machine_word Wrd1466;
  machine_word Wrd1465;
  machine_word Wrd1461;
  machine_word Wrd1448;
  machine_word Wrd1452;
  machine_word Wrd1449;
  machine_word Wrd1458;
  machine_word Wrd1457;
  machine_word Wrd1456;
  machine_word Wrd1454;
  machine_word Wrd1453;
  machine_word Wrd1460;
  machine_word Wrd1459;
  machine_word Wrd1447;
  machine_word Wrd1444;
  machine_word Wrd1443;
  machine_word Wrd1432;
  machine_word Wrd1440;
  machine_word Wrd1439;
  machine_word Wrd1438;
  machine_word Wrd1442;
  machine_word Wrd1441;
  machine_word Wrd1431;
  machine_word Wrd1427;
  machine_word Wrd1418;
  machine_word Wrd1417;
  machine_word Wrd1414;
  machine_word Wrd1424;
  machine_word Wrd1423;
  machine_word Wrd1422;
  machine_word Wrd1420;
  machine_word Wrd1419;
  machine_word Wrd1426;
  machine_word Wrd1425;
  machine_word Wrd1413;
  machine_word Wrd1410;
  machine_word Wrd1409;
  machine_word Wrd1398;
  machine_word Wrd1406;
  machine_word Wrd1405;
  machine_word Wrd1404;
  machine_word Wrd1408;
  machine_word Wrd1407;
  machine_word Wrd1397;
  machine_word Wrd1396;
  machine_word Wrd1395;
  machine_word Wrd1394;
  machine_word Wrd1393;
  machine_word Wrd1392;
  machine_word Wrd1388;
  machine_word Wrd1375;
  machine_word Wrd1379;
  machine_word Wrd1376;
  machine_word Wrd1385;
  machine_word Wrd1384;
  machine_word Wrd1383;
  machine_word Wrd1381;
  machine_word Wrd1380;
  machine_word Wrd1387;
  machine_word Wrd1386;
  machine_word Wrd1374;
  machine_word Wrd1371;
  machine_word Wrd1370;
  machine_word Wrd1359;
  machine_word Wrd1367;
  machine_word Wrd1366;
  machine_word Wrd1365;
  machine_word Wrd1369;
  machine_word Wrd1368;
  machine_word Wrd1358;
  machine_word Wrd1354;
  machine_word Wrd1345;
  machine_word Wrd1344;
  machine_word Wrd1341;
  machine_word Wrd1351;
  machine_word Wrd1350;
  machine_word Wrd1349;
  machine_word Wrd1347;
  machine_word Wrd1346;
  machine_word Wrd1353;
  machine_word Wrd1352;
  machine_word Wrd1340;
  machine_word Wrd1337;
  machine_word Wrd1336;
  machine_word Wrd1325;
  machine_word Wrd1333;
  machine_word Wrd1332;
  machine_word Wrd1331;
  machine_word Wrd1335;
  machine_word Wrd1334;
  machine_word Wrd1324;
  machine_word Wrd1321;
  machine_word Wrd1320;
  machine_word Wrd1311;
  machine_word Wrd1317;
  machine_word Wrd1316;
  machine_word Wrd1315;
  machine_word Wrd1319;
  machine_word Wrd1318;
  machine_word Wrd1308;
  machine_word Wrd1306;
  machine_word Wrd1307;
  machine_word Wrd1304;
  machine_word Wrd1305;
  machine_word Wrd1302;
  machine_word Wrd1303;
  machine_word Wrd1301;
  machine_word Wrd1287;
  machine_word Wrd1290;
  machine_word Wrd1288;
  machine_word Wrd1295;
  machine_word Wrd1294;
  machine_word Wrd1293;
  machine_word Wrd1292;
  machine_word Wrd1291;
  machine_word Wrd1296;
  machine_word Wrd1286;
  machine_word Wrd1285;
  machine_word Wrd1282;
  machine_word Wrd1281;
  machine_word Wrd1270;
  machine_word Wrd1278;
  machine_word Wrd1277;
  machine_word Wrd1276;
  machine_word Wrd1280;
  machine_word Wrd1279;
  machine_word Wrd1269;
  machine_word Wrd1268;
  machine_word Wrd1267;
  machine_word Wrd1266;
  machine_word Wrd1265;
  machine_word Wrd1264;
  machine_word Wrd1263;
  machine_word Wrd1262;
  machine_word Wrd1260;
  machine_word Wrd1259;
  machine_word Wrd1258;
  machine_word Wrd1257;
  machine_word Wrd1255;
  machine_word Wrd1254;
  machine_word Wrd1250;
  machine_word Wrd1237;
  machine_word Wrd1241;
  machine_word Wrd1238;
  machine_word Wrd1247;
  machine_word Wrd1246;
  machine_word Wrd1245;
  machine_word Wrd1243;
  machine_word Wrd1242;
  machine_word Wrd1249;
  machine_word Wrd1248;
  machine_word Wrd1236;
  machine_word Wrd1233;
  machine_word Wrd1232;
  machine_word Wrd1221;
  machine_word Wrd1229;
  machine_word Wrd1228;
  machine_word Wrd1227;
  machine_word Wrd1231;
  machine_word Wrd1230;
  machine_word Wrd1220;
  machine_word Wrd1216;
  machine_word Wrd1207;
  machine_word Wrd1206;
  machine_word Wrd1203;
  machine_word Wrd1213;
  machine_word Wrd1212;
  machine_word Wrd1211;
  machine_word Wrd1209;
  machine_word Wrd1208;
  machine_word Wrd1215;
  machine_word Wrd1214;
  machine_word Wrd1202;
  machine_word Wrd1199;
  machine_word Wrd1198;
  machine_word Wrd1187;
  machine_word Wrd1195;
  machine_word Wrd1194;
  machine_word Wrd1193;
  machine_word Wrd1197;
  machine_word Wrd1196;
  machine_word Wrd1186;
  machine_word Wrd1185;
  machine_word Wrd1184;
  machine_word Wrd1183;
  machine_word Wrd1182;
  machine_word Wrd1181;
  machine_word Wrd1177;
  machine_word Wrd1164;
  machine_word Wrd1168;
  machine_word Wrd1165;
  machine_word Wrd1174;
  machine_word Wrd1173;
  machine_word Wrd1172;
  machine_word Wrd1170;
  machine_word Wrd1169;
  machine_word Wrd1176;
  machine_word Wrd1175;
  machine_word Wrd1163;
  machine_word Wrd1160;
  machine_word Wrd1159;
  machine_word Wrd1148;
  machine_word Wrd1156;
  machine_word Wrd1155;
  machine_word Wrd1154;
  machine_word Wrd1158;
  machine_word Wrd1157;
  machine_word Wrd1147;
  machine_word Wrd1143;
  machine_word Wrd1134;
  machine_word Wrd1133;
  machine_word Wrd1130;
  machine_word Wrd1140;
  machine_word Wrd1139;
  machine_word Wrd1138;
  machine_word Wrd1136;
  machine_word Wrd1135;
  machine_word Wrd1142;
  machine_word Wrd1141;
  machine_word Wrd1129;
  machine_word Wrd1126;
  machine_word Wrd1125;
  machine_word Wrd1114;
  machine_word Wrd1122;
  machine_word Wrd1121;
  machine_word Wrd1120;
  machine_word Wrd1124;
  machine_word Wrd1123;
  machine_word Wrd1113;
  machine_word Wrd1110;
  machine_word Wrd1109;
  machine_word Wrd1100;
  machine_word Wrd1106;
  machine_word Wrd1105;
  machine_word Wrd1104;
  machine_word Wrd1108;
  machine_word Wrd1107;
  machine_word Wrd1097;
  machine_word Wrd1095;
  machine_word Wrd1096;
  machine_word Wrd1093;
  machine_word Wrd1094;
  machine_word Wrd1092;
  machine_word Wrd1078;
  machine_word Wrd1081;
  machine_word Wrd1079;
  machine_word Wrd1086;
  machine_word Wrd1085;
  machine_word Wrd1084;
  machine_word Wrd1083;
  machine_word Wrd1082;
  machine_word Wrd1087;
  machine_word Wrd1077;
  machine_word Wrd1076;
  machine_word Wrd1073;
  machine_word Wrd1072;
  machine_word Wrd1061;
  machine_word Wrd1069;
  machine_word Wrd1068;
  machine_word Wrd1067;
  machine_word Wrd1071;
  machine_word Wrd1070;
  machine_word Wrd1060;
  machine_word Wrd1059;
  machine_word Wrd1058;
  machine_word Wrd1057;
  machine_word Wrd1056;
  machine_word Wrd1055;
  machine_word Wrd1054;
  machine_word Wrd1053;
  machine_word Wrd1051;
  machine_word Wrd1050;
  machine_word Wrd1049;
  machine_word Wrd1048;
  machine_word Wrd1046;
  machine_word Wrd1045;
  machine_word Wrd1041;
  machine_word Wrd1028;
  machine_word Wrd1032;
  machine_word Wrd1029;
  machine_word Wrd1038;
  machine_word Wrd1037;
  machine_word Wrd1036;
  machine_word Wrd1034;
  machine_word Wrd1033;
  machine_word Wrd1040;
  machine_word Wrd1039;
  machine_word Wrd1027;
  machine_word Wrd1024;
  machine_word Wrd1023;
  machine_word Wrd1012;
  machine_word Wrd1020;
  machine_word Wrd1019;
  machine_word Wrd1018;
  machine_word Wrd1022;
  machine_word Wrd1021;
  machine_word Wrd1011;
  machine_word Wrd1007;
  machine_word Wrd998;
  machine_word Wrd997;
  machine_word Wrd994;
  machine_word Wrd1004;
  machine_word Wrd1003;
  machine_word Wrd1002;
  machine_word Wrd1000;
  machine_word Wrd999;
  machine_word Wrd1006;
  machine_word Wrd1005;
  machine_word Wrd993;
  machine_word Wrd990;
  machine_word Wrd989;
  machine_word Wrd978;
  machine_word Wrd986;
  machine_word Wrd985;
  machine_word Wrd984;
  machine_word Wrd988;
  machine_word Wrd987;
  machine_word Wrd977;
  machine_word Wrd976;
  machine_word Wrd975;
  machine_word Wrd974;
  machine_word Wrd973;
  machine_word Wrd972;
  machine_word Wrd968;
  machine_word Wrd955;
  machine_word Wrd959;
  machine_word Wrd956;
  machine_word Wrd965;
  machine_word Wrd964;
  machine_word Wrd963;
  machine_word Wrd961;
  machine_word Wrd960;
  machine_word Wrd967;
  machine_word Wrd966;
  machine_word Wrd954;
  machine_word Wrd951;
  machine_word Wrd950;
  machine_word Wrd939;
  machine_word Wrd947;
  machine_word Wrd946;
  machine_word Wrd945;
  machine_word Wrd949;
  machine_word Wrd948;
  machine_word Wrd938;
  machine_word Wrd934;
  machine_word Wrd925;
  machine_word Wrd924;
  machine_word Wrd921;
  machine_word Wrd931;
  machine_word Wrd930;
  machine_word Wrd929;
  machine_word Wrd927;
  machine_word Wrd926;
  machine_word Wrd933;
  machine_word Wrd932;
  machine_word Wrd920;
  machine_word Wrd917;
  machine_word Wrd916;
  machine_word Wrd905;
  machine_word Wrd913;
  machine_word Wrd912;
  machine_word Wrd911;
  machine_word Wrd915;
  machine_word Wrd914;
  machine_word Wrd904;
  machine_word Wrd901;
  machine_word Wrd900;
  machine_word Wrd891;
  machine_word Wrd897;
  machine_word Wrd896;
  machine_word Wrd895;
  machine_word Wrd899;
  machine_word Wrd898;
  machine_word Wrd494;
  machine_word Wrd492;
  machine_word Wrd493;
  machine_word Wrd491;
  machine_word Wrd477;
  machine_word Wrd480;
  machine_word Wrd478;
  machine_word Wrd485;
  machine_word Wrd484;
  machine_word Wrd483;
  machine_word Wrd482;
  machine_word Wrd481;
  machine_word Wrd486;
  machine_word Wrd476;
  machine_word Wrd475;
  machine_word Wrd472;
  machine_word Wrd471;
  machine_word Wrd460;
  machine_word Wrd468;
  machine_word Wrd467;
  machine_word Wrd466;
  machine_word Wrd470;
  machine_word Wrd469;
  machine_word Wrd459;
  machine_word Wrd458;
  machine_word Wrd457;
  machine_word Wrd456;
  machine_word Wrd455;
  machine_word Wrd454;
  machine_word Wrd453;
  machine_word Wrd452;
  machine_word Wrd450;
  machine_word Wrd449;
  machine_word Wrd448;
  machine_word Wrd447;
  machine_word Wrd445;
  machine_word Wrd444;
  machine_word Wrd440;
  machine_word Wrd427;
  machine_word Wrd431;
  machine_word Wrd428;
  machine_word Wrd437;
  machine_word Wrd436;
  machine_word Wrd435;
  machine_word Wrd433;
  machine_word Wrd432;
  machine_word Wrd439;
  machine_word Wrd438;
  machine_word Wrd426;
  machine_word Wrd423;
  machine_word Wrd422;
  machine_word Wrd411;
  machine_word Wrd419;
  machine_word Wrd418;
  machine_word Wrd417;
  machine_word Wrd421;
  machine_word Wrd420;
  machine_word Wrd410;
  machine_word Wrd406;
  machine_word Wrd397;
  machine_word Wrd396;
  machine_word Wrd393;
  machine_word Wrd403;
  machine_word Wrd402;
  machine_word Wrd401;
  machine_word Wrd399;
  machine_word Wrd398;
  machine_word Wrd405;
  machine_word Wrd404;
  machine_word Wrd392;
  machine_word Wrd389;
  machine_word Wrd388;
  machine_word Wrd377;
  machine_word Wrd385;
  machine_word Wrd384;
  machine_word Wrd383;
  machine_word Wrd387;
  machine_word Wrd386;
  machine_word Wrd376;
  machine_word Wrd375;
  machine_word Wrd374;
  machine_word Wrd373;
  machine_word Wrd372;
  machine_word Wrd371;
  machine_word Wrd367;
  machine_word Wrd354;
  machine_word Wrd358;
  machine_word Wrd355;
  machine_word Wrd364;
  machine_word Wrd363;
  machine_word Wrd362;
  machine_word Wrd360;
  machine_word Wrd359;
  machine_word Wrd366;
  machine_word Wrd365;
  machine_word Wrd353;
  machine_word Wrd350;
  machine_word Wrd349;
  machine_word Wrd338;
  machine_word Wrd346;
  machine_word Wrd345;
  machine_word Wrd344;
  machine_word Wrd348;
  machine_word Wrd347;
  machine_word Wrd337;
  machine_word Wrd333;
  machine_word Wrd324;
  machine_word Wrd323;
  machine_word Wrd320;
  machine_word Wrd330;
  machine_word Wrd329;
  machine_word Wrd328;
  machine_word Wrd326;
  machine_word Wrd325;
  machine_word Wrd332;
  machine_word Wrd331;
  machine_word Wrd319;
  machine_word Wrd316;
  machine_word Wrd315;
  machine_word Wrd304;
  machine_word Wrd312;
  machine_word Wrd311;
  machine_word Wrd310;
  machine_word Wrd314;
  machine_word Wrd313;
  machine_word Wrd303;
  machine_word Wrd300;
  machine_word Wrd299;
  machine_word Wrd290;
  machine_word Wrd296;
  machine_word Wrd295;
  machine_word Wrd294;
  machine_word Wrd298;
  machine_word Wrd297;
  machine_word Wrd287;
  machine_word Wrd284;
  machine_word Wrd281;
  machine_word Wrd283;
  machine_word Wrd282;
  machine_word Wrd268;
  machine_word Wrd276;
  machine_word Wrd275;
  machine_word Wrd274;
  machine_word Wrd280;
  machine_word Wrd279;
  machine_word Wrd278;
  machine_word Wrd277;
  machine_word Wrd248;
  machine_word Wrd253;
  machine_word Wrd261;
  machine_word Wrd260;
  machine_word Wrd259;
  machine_word Wrd257;
  machine_word Wrd263;
  machine_word Wrd246;
  machine_word Wrd244;
  machine_word Wrd243;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd240;
  machine_word Wrd239;
  machine_word Wrd228;
  machine_word Wrd227;
  machine_word Wrd233;
  machine_word Wrd232;
  machine_word Wrd231;
  machine_word Wrd230;
  machine_word Wrd234;
  machine_word Wrd221;
  machine_word Wrd224;
  machine_word Wrd222;
  machine_word Wrd218;
  machine_word Wrd219;
  machine_word Wrd217;
  machine_word Wrd1763;
  machine_word Wrd215;
  machine_word Wrd214;
  machine_word Wrd1757;
  machine_word Wrd1756;
  machine_word Wrd1755;
  machine_word Wrd1754;
  machine_word Wrd1758;
  machine_word Wrd208;
  machine_word Wrd211;
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd205;
  machine_word Wrd206;
  machine_word Wrd1815;
  machine_word Wrd1823;
  machine_word Wrd1822;
  machine_word Wrd1821;
  machine_word Wrd1825;
  machine_word Wrd1813;
  machine_word Wrd1812;
  machine_word Wrd1810;
  machine_word Wrd1807;
  machine_word Wrd1798;
  machine_word Wrd1804;
  machine_word Wrd1803;
  machine_word Wrd1802;
  machine_word Wrd1805;
  machine_word Wrd1797;
  machine_word Wrd1794;
  machine_word Wrd1793;
  machine_word Wrd1782;
  machine_word Wrd1790;
  machine_word Wrd1789;
  machine_word Wrd1788;
  machine_word Wrd1792;
  machine_word Wrd1791;
  machine_word Wrd1781;
  machine_word Wrd1780;
  machine_word Wrd1777;
  machine_word Wrd1776;
  machine_word Wrd1765;
  machine_word Wrd1773;
  machine_word Wrd1772;
  machine_word Wrd1771;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd184;
  machine_word Wrd189;
  machine_word Wrd197;
  machine_word Wrd196;
  machine_word Wrd195;
  machine_word Wrd193;
  machine_word Wrd199;
  machine_word Wrd182;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd170;
  machine_word Wrd157;
  machine_word Wrd160;
  machine_word Wrd158;
  machine_word Wrd154;
  machine_word Wrd155;
  machine_word Wrd153;
  machine_word Wrd1836;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd1830;
  machine_word Wrd1829;
  machine_word Wrd1828;
  machine_word Wrd1827;
  machine_word Wrd1831;
  machine_word Wrd144;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd141;
  machine_word Wrd142;
  machine_word Wrd1888;
  machine_word Wrd1896;
  machine_word Wrd1895;
  machine_word Wrd1894;
  machine_word Wrd1898;
  machine_word Wrd1886;
  machine_word Wrd1885;
  machine_word Wrd1883;
  machine_word Wrd1880;
  machine_word Wrd1871;
  machine_word Wrd1877;
  machine_word Wrd1876;
  machine_word Wrd1875;
  machine_word Wrd1878;
  machine_word Wrd1870;
  machine_word Wrd1867;
  machine_word Wrd1866;
  machine_word Wrd1855;
  machine_word Wrd1863;
  machine_word Wrd1862;
  machine_word Wrd1861;
  machine_word Wrd1865;
  machine_word Wrd1864;
  machine_word Wrd1854;
  machine_word Wrd1853;
  machine_word Wrd1850;
  machine_word Wrd1849;
  machine_word Wrd1838;
  machine_word Wrd1846;
  machine_word Wrd1845;
  machine_word Wrd1844;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd120;
  machine_word Wrd125;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd129;
  machine_word Wrd135;
  machine_word Wrd118;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd106;
  machine_word Wrd93;
  machine_word Wrd96;
  machine_word Wrd94;
  machine_word Wrd90;
  machine_word Wrd91;
  machine_word Wrd89;
  machine_word Wrd1909;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd1903;
  machine_word Wrd1902;
  machine_word Wrd1901;
  machine_word Wrd1900;
  machine_word Wrd1904;
  machine_word Wrd80;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd1961;
  machine_word Wrd1969;
  machine_word Wrd1968;
  machine_word Wrd1967;
  machine_word Wrd1971;
  machine_word Wrd1959;
  machine_word Wrd1958;
  machine_word Wrd1956;
  machine_word Wrd1953;
  machine_word Wrd1944;
  machine_word Wrd1950;
  machine_word Wrd1949;
  machine_word Wrd1948;
  machine_word Wrd1951;
  machine_word Wrd1943;
  machine_word Wrd1940;
  machine_word Wrd1939;
  machine_word Wrd1928;
  machine_word Wrd1936;
  machine_word Wrd1935;
  machine_word Wrd1934;
  machine_word Wrd1938;
  machine_word Wrd1937;
  machine_word Wrd1927;
  machine_word Wrd1926;
  machine_word Wrd1923;
  machine_word Wrd1922;
  machine_word Wrd1911;
  machine_word Wrd1919;
  machine_word Wrd1918;
  machine_word Wrd1917;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd56;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd71;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd1982;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd1976;
  machine_word Wrd1975;
  machine_word Wrd1974;
  machine_word Wrd1973;
  machine_word Wrd1977;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd2034;
  machine_word Wrd2042;
  machine_word Wrd2041;
  machine_word Wrd2040;
  machine_word Wrd2044;
  machine_word Wrd2032;
  machine_word Wrd2031;
  machine_word Wrd2029;
  machine_word Wrd2026;
  machine_word Wrd2017;
  machine_word Wrd2023;
  machine_word Wrd2022;
  machine_word Wrd2021;
  machine_word Wrd2024;
  machine_word Wrd2016;
  machine_word Wrd2013;
  machine_word Wrd2012;
  machine_word Wrd2001;
  machine_word Wrd2009;
  machine_word Wrd2008;
  machine_word Wrd2007;
  machine_word Wrd2011;
  machine_word Wrd2010;
  machine_word Wrd2000;
  machine_word Wrd1999;
  machine_word Wrd1996;
  machine_word Wrd1995;
  machine_word Wrd1984;
  machine_word Wrd1992;
  machine_word Wrd1991;
  machine_word Wrd1990;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd2102;
  machine_word Wrd2105;
  machine_word Wrd2104;
  machine_word Wrd2103;
  machine_word Wrd2098;
  machine_word Wrd2094;
  machine_word Wrd2097;
  machine_word Wrd2096;
  machine_word Wrd2095;
  machine_word Wrd2093;
  machine_word Wrd2085;
  machine_word Wrd2088;
  machine_word Wrd2087;
  machine_word Wrd2089;
  machine_word Wrd2084;
  machine_word Wrd2081;
  machine_word Wrd2080;
  machine_word Wrd2069;
  machine_word Wrd2077;
  machine_word Wrd2076;
  machine_word Wrd2075;
  machine_word Wrd2079;
  machine_word Wrd2078;
  machine_word Wrd2284;
  machine_word Wrd2289;
  machine_word Wrd2286;
  machine_word Wrd2297;
  machine_word Wrd2296;
  machine_word Wrd2295;
  machine_word Wrd2293;
  machine_word Wrd2291;
  machine_word Wrd2290;
  machine_word Wrd2299;
  machine_word Wrd2298;
  machine_word Wrd2282;
  machine_word Wrd2281;
  machine_word Wrd2278;
  machine_word Wrd2277;
  machine_word Wrd2266;
  machine_word Wrd2274;
  machine_word Wrd2273;
  machine_word Wrd2272;
  machine_word Wrd2276;
  machine_word Wrd2275;
  machine_word Wrd2265;
  machine_word Wrd2263;
  machine_word Wrd2264;
  machine_word Wrd2261;
  machine_word Wrd2262;
  machine_word Wrd2259;
  machine_word Wrd2260;
  machine_word Wrd2257;
  machine_word Wrd2258;
  machine_word Wrd2256;
  machine_word Wrd2253;
  machine_word Wrd2239;
  machine_word Wrd2243;
  machine_word Wrd2241;
  machine_word Wrd2250;
  machine_word Wrd2249;
  machine_word Wrd2248;
  machine_word Wrd2247;
  machine_word Wrd2245;
  machine_word Wrd2244;
  machine_word Wrd2251;
  machine_word Wrd2238;
  machine_word Wrd2235;
  machine_word Wrd2234;
  machine_word Wrd2223;
  machine_word Wrd2231;
  machine_word Wrd2230;
  machine_word Wrd2229;
  machine_word Wrd2233;
  machine_word Wrd2232;
  machine_word Wrd2222;
  machine_word Wrd2220;
  machine_word Wrd2221;
  machine_word Wrd2218;
  machine_word Wrd2219;
  machine_word Wrd2216;
  machine_word Wrd2217;
  machine_word Wrd2215;
  machine_word Wrd2212;
  machine_word Wrd2198;
  machine_word Wrd2202;
  machine_word Wrd2200;
  machine_word Wrd2209;
  machine_word Wrd2208;
  machine_word Wrd2207;
  machine_word Wrd2206;
  machine_word Wrd2204;
  machine_word Wrd2203;
  machine_word Wrd2210;
  machine_word Wrd2197;
  machine_word Wrd2194;
  machine_word Wrd2193;
  machine_word Wrd2182;
  machine_word Wrd2190;
  machine_word Wrd2189;
  machine_word Wrd2188;
  machine_word Wrd2192;
  machine_word Wrd2191;
  machine_word Wrd2181;
  machine_word Wrd2179;
  machine_word Wrd2180;
  machine_word Wrd2177;
  machine_word Wrd2178;
  machine_word Wrd2176;
  machine_word Wrd2173;
  machine_word Wrd2159;
  machine_word Wrd2163;
  machine_word Wrd2161;
  machine_word Wrd2170;
  machine_word Wrd2169;
  machine_word Wrd2168;
  machine_word Wrd2167;
  machine_word Wrd2165;
  machine_word Wrd2164;
  machine_word Wrd2171;
  machine_word Wrd2158;
  machine_word Wrd2155;
  machine_word Wrd2154;
  machine_word Wrd2143;
  machine_word Wrd2151;
  machine_word Wrd2150;
  machine_word Wrd2149;
  machine_word Wrd2153;
  machine_word Wrd2152;
  machine_word Wrd2142;
  machine_word Wrd2140;
  machine_word Wrd2141;
  machine_word Wrd2139;
  machine_word Wrd2136;
  machine_word Wrd2122;
  machine_word Wrd2126;
  machine_word Wrd2124;
  machine_word Wrd2133;
  machine_word Wrd2132;
  machine_word Wrd2131;
  machine_word Wrd2130;
  machine_word Wrd2128;
  machine_word Wrd2127;
  machine_word Wrd2134;
  machine_word Wrd2121;
  machine_word Wrd2118;
  machine_word Wrd2117;
  machine_word Wrd2106;
  machine_word Wrd2114;
  machine_word Wrd2113;
  machine_word Wrd2112;
  machine_word Wrd2116;
  machine_word Wrd2115;
  machine_word Wrd2313;
  machine_word Wrd2310;
  machine_word Wrd2067;
  machine_word Wrd2066;
  machine_word Wrd2064;
  machine_word Wrd2307;
  machine_word Wrd2306;
  machine_word Wrd2305;
  machine_word Wrd2304;
  machine_word Wrd2302;
  machine_word Wrd2301;
  machine_word Wrd2308;
  machine_word Wrd2062;
  machine_word Wrd2059;
  machine_word Wrd2058;
  machine_word Wrd2047;
  machine_word Wrd2055;
  machine_word Wrd2054;
  machine_word Wrd2053;
  machine_word Wrd2057;
  machine_word Wrd2056;
  machine_word Wrd2330;
  machine_word Wrd2327;
  machine_word Wrd2326;
  machine_word Wrd2315;
  machine_word Wrd2323;
  machine_word Wrd2322;
  machine_word Wrd2321;
  machine_word Wrd2325;
  machine_word Wrd2324;
  machine_word Wrd2046;
  machine_word Wrd2045;
  machine_word Wrd2361;
  machine_word Wrd2353;
  machine_word Wrd2355;
  machine_word Wrd2357;
  machine_word Wrd2356;
  machine_word Wrd2441;
  machine_word Wrd2443;
  machine_word Wrd2445;
  machine_word Wrd2444;
  machine_word Wrd2439;
  machine_word Wrd2431;
  machine_word Wrd2433;
  machine_word Wrd2435;
  machine_word Wrd2434;
  machine_word Wrd2430;
  machine_word Wrd2428;
  machine_word Wrd2429;
  machine_word Wrd2426;
  machine_word Wrd2427;
  machine_word Wrd2424;
  machine_word Wrd2425;
  machine_word Wrd2422;
  machine_word Wrd2423;
  machine_word Wrd2421;
  machine_word Wrd2415;
  machine_word Wrd2416;
  machine_word Wrd2417;
  machine_word Wrd2414;
  machine_word Wrd2406;
  machine_word Wrd2408;
  machine_word Wrd2410;
  machine_word Wrd2409;
  machine_word Wrd2405;
  machine_word Wrd2403;
  machine_word Wrd2404;
  machine_word Wrd2401;
  machine_word Wrd2402;
  machine_word Wrd2399;
  machine_word Wrd2400;
  machine_word Wrd2398;
  machine_word Wrd2392;
  machine_word Wrd2393;
  machine_word Wrd2394;
  machine_word Wrd2391;
  machine_word Wrd2383;
  machine_word Wrd2385;
  machine_word Wrd2387;
  machine_word Wrd2386;
  machine_word Wrd2382;
  machine_word Wrd2380;
  machine_word Wrd2381;
  machine_word Wrd2378;
  machine_word Wrd2379;
  machine_word Wrd2377;
  machine_word Wrd2371;
  machine_word Wrd2372;
  machine_word Wrd2373;
  machine_word Wrd2370;
  machine_word Wrd2362;
  machine_word Wrd2364;
  machine_word Wrd2366;
  machine_word Wrd2365;
  machine_word Wrd2352;
  machine_word Wrd2350;
  machine_word Wrd2351;
  machine_word Wrd2349;
  machine_word Wrd2343;
  machine_word Wrd2344;
  machine_word Wrd2345;
  machine_word Wrd2342;
  machine_word Wrd2334;
  machine_word Wrd2336;
  machine_word Wrd2338;
  machine_word Wrd2332;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_32_4);
      goto apply_generic_4_246;

    case 1:
      current_block = (Rpc - LABEL_32_7);
      goto search_overflow_220;

    case 2:
      current_block = (Rpc - LABEL_32_8);
      goto label_358;

    case 3:
      current_block = (Rpc - LABEL_32_9);
      goto label_359;

    case 4:
      current_block = (Rpc - LABEL_32_10);
      goto label_361;

    case 5:
      current_block = (Rpc - LABEL_32_11);
      goto label_362;

    case 6:
      current_block = (Rpc - LABEL_32_12);
      goto label_363;

    case 7:
      current_block = (Rpc - LABEL_32_13);
      goto label_364;

    case 8:
      current_block = (Rpc - LABEL_32_14);
      goto label_365;

    case 9:
      current_block = (Rpc - LABEL_32_15);
      goto label_366;

    case 10:
      current_block = (Rpc - LABEL_32_16);
      goto label_367;

    case 11:
      current_block = (Rpc - LABEL_32_17);
      goto label_360;

    case 12:
      current_block = (Rpc - LABEL_32_18);
      goto search_lines_222;

    case 13:
      current_block = (Rpc - LABEL_32_19);
      goto label_357;

    case 14:
      current_block = (Rpc - LABEL_32_20);
      goto label_344;

    case 15:
      current_block = (Rpc - LABEL_32_21);
      goto label_356;

    case 16:
      current_block = (Rpc - LABEL_32_22);
      goto label_347;

    case 17:
      current_block = (Rpc - LABEL_32_23);
      goto label_348;

    case 18:
      current_block = (Rpc - LABEL_32_24);
      goto label_349;

    case 19:
      current_block = (Rpc - LABEL_32_25);
      goto label_350;

    case 20:
      current_block = (Rpc - LABEL_32_26);
      goto label_351;

    case 21:
      current_block = (Rpc - LABEL_32_27);
      goto label_352;

    case 22:
      current_block = (Rpc - LABEL_32_28);
      goto label_353;

    case 23:
      current_block = (Rpc - LABEL_32_29);
      goto label_354;

    case 24:
      current_block = (Rpc - LABEL_32_30);
      goto label_355;

    case 25:
      current_block = (Rpc - LABEL_32_31);
      goto label_345;

    case 26:
      current_block = (Rpc - LABEL_32_32);
      goto label_346;

    case 27:
      current_block = (Rpc - LABEL_32_33);
      goto continuation_1;

    case 28:
      current_block = (Rpc - LABEL_32_34);
      goto continuation_14;

    case 29:
      current_block = (Rpc - LABEL_32_35);
      goto continuation_27;

    case 30:
      current_block = (Rpc - LABEL_32_36);
      goto continuation_40;

    case 31:
      current_block = (Rpc - LABEL_32_37);
      goto continuation_53;

    case 32:
      current_block = (Rpc - LABEL_32_5);
      goto lambda_370;

    case 33:
      current_block = (Rpc - LABEL_32_38);
      goto label_341;

    case 34:
      current_block = (Rpc - LABEL_32_39);
      goto label_342;

    case 35:
      current_block = (Rpc - LABEL_32_40);
      goto label_343;

    case 36:
      current_block = (Rpc - LABEL_32_41);
      goto label_340;

    case 37:
      current_block = (Rpc - LABEL_32_42);
      goto label_248;

    case 38:
      current_block = (Rpc - LABEL_32_43);
      goto label_337;

    case 39:
      current_block = (Rpc - LABEL_32_44);
      goto label_338;

    case 40:
      current_block = (Rpc - LABEL_32_45);
      goto label_339;

    case 41:
      current_block = (Rpc - LABEL_32_46);
      goto label_336;

    case 42:
      current_block = (Rpc - LABEL_32_47);
      goto label_249;

    case 43:
      current_block = (Rpc - LABEL_32_48);
      goto label_333;

    case 44:
      current_block = (Rpc - LABEL_32_49);
      goto label_334;

    case 45:
      current_block = (Rpc - LABEL_32_50);
      goto label_335;

    case 46:
      current_block = (Rpc - LABEL_32_51);
      goto label_332;

    case 47:
      current_block = (Rpc - LABEL_32_52);
      goto label_250;

    case 48:
      current_block = (Rpc - LABEL_32_53);
      goto label_329;

    case 49:
      current_block = (Rpc - LABEL_32_54);
      goto label_330;

    case 50:
      current_block = (Rpc - LABEL_32_55);
      goto label_331;

    case 51:
      current_block = (Rpc - LABEL_32_56);
      goto label_328;

    case 52:
      current_block = (Rpc - LABEL_32_57);
      goto label_251;

    case 53:
      current_block = (Rpc - LABEL_32_58);
      goto label_252;

    case 54:
      current_block = (Rpc - LABEL_32_59);
      goto label_253;

    case 55:
      current_block = (Rpc - LABEL_32_60);
      goto label_254;

    case 56:
      current_block = (Rpc - LABEL_32_61);
      goto label_255;

    case 57:
      current_block = (Rpc - LABEL_32_62);
      goto label_256;

    case 58:
      current_block = (Rpc - LABEL_32_63);
      goto label_257;

    case 59:
      current_block = (Rpc - LABEL_32_64);
      goto label_258;

    case 60:
      current_block = (Rpc - LABEL_32_65);
      goto label_259;

    case 61:
      current_block = (Rpc - LABEL_32_66);
      goto label_260;

    case 62:
      current_block = (Rpc - LABEL_32_67);
      goto label_261;

    case 63:
      current_block = (Rpc - LABEL_32_68);
      goto label_262;

    case 64:
      current_block = (Rpc - LABEL_32_69);
      goto label_263;

    case 65:
      current_block = (Rpc - LABEL_32_70);
      goto label_285;

    case 66:
      current_block = (Rpc - LABEL_32_71);
      goto label_286;

    case 67:
      current_block = (Rpc - LABEL_32_72);
      goto label_287;

    case 68:
      current_block = (Rpc - LABEL_32_73);
      goto label_288;

    case 69:
      current_block = (Rpc - LABEL_32_74);
      goto label_289;

    case 70:
      current_block = (Rpc - LABEL_32_75);
      goto label_290;

    case 71:
      current_block = (Rpc - LABEL_32_76);
      goto label_291;

    case 72:
      current_block = (Rpc - LABEL_32_77);
      goto label_292;

    case 73:
      current_block = (Rpc - LABEL_32_78);
      goto label_293;

    case 74:
      current_block = (Rpc - LABEL_32_79);
      goto label_294;

    case 75:
      current_block = (Rpc - LABEL_32_80);
      goto label_295;

    case 76:
      current_block = (Rpc - LABEL_32_81);
      goto label_296;

    case 77:
      current_block = (Rpc - LABEL_32_82);
      goto label_297;

    case 78:
      current_block = (Rpc - LABEL_32_83);
      goto label_298;

    case 79:
      current_block = (Rpc - LABEL_32_84);
      goto label_299;

    case 80:
      current_block = (Rpc - LABEL_32_85);
      goto label_300;

    case 81:
      current_block = (Rpc - LABEL_32_86);
      goto label_301;

    case 82:
      current_block = (Rpc - LABEL_32_87);
      goto label_302;

    case 83:
      current_block = (Rpc - LABEL_32_88);
      goto label_303;

    case 84:
      current_block = (Rpc - LABEL_32_89);
      goto label_304;

    case 85:
      current_block = (Rpc - LABEL_32_90);
      goto label_305;

    case 86:
      current_block = (Rpc - LABEL_32_91);
      goto label_306;

    case 87:
      current_block = (Rpc - LABEL_32_92);
      goto label_307;

    case 88:
      current_block = (Rpc - LABEL_32_93);
      goto label_308;

    case 89:
      current_block = (Rpc - LABEL_32_94);
      goto label_309;

    case 90:
      current_block = (Rpc - LABEL_32_95);
      goto label_310;

    case 91:
      current_block = (Rpc - LABEL_32_96);
      goto label_311;

    case 92:
      current_block = (Rpc - LABEL_32_97);
      goto label_312;

    case 93:
      current_block = (Rpc - LABEL_32_98);
      goto label_313;

    case 94:
      current_block = (Rpc - LABEL_32_99);
      goto label_314;

    case 95:
      current_block = (Rpc - LABEL_32_100);
      goto label_315;

    case 96:
      current_block = (Rpc - LABEL_32_101);
      goto label_316;

    case 97:
      current_block = (Rpc - LABEL_32_102);
      goto label_317;

    case 98:
      current_block = (Rpc - LABEL_32_103);
      goto label_318;

    case 99:
      current_block = (Rpc - LABEL_32_104);
      goto label_319;

    case 100:
      current_block = (Rpc - LABEL_32_105);
      goto label_320;

    case 101:
      current_block = (Rpc - LABEL_32_106);
      goto label_321;

    case 102:
      current_block = (Rpc - LABEL_32_107);
      goto label_322;

    case 103:
      current_block = (Rpc - LABEL_32_108);
      goto label_323;

    case 104:
      current_block = (Rpc - LABEL_32_109);
      goto label_324;

    case 105:
      current_block = (Rpc - LABEL_32_110);
      goto label_325;

    case 106:
      current_block = (Rpc - LABEL_32_111);
      goto label_326;

    case 107:
      current_block = (Rpc - LABEL_32_112);
      goto label_327;

    case 108:
      current_block = (Rpc - LABEL_32_114);
      goto label_264;

    case 109:
      current_block = (Rpc - LABEL_32_115);
      goto label_265;

    case 110:
      current_block = (Rpc - LABEL_32_116);
      goto label_266;

    case 111:
      current_block = (Rpc - LABEL_32_117);
      goto label_267;

    case 112:
      current_block = (Rpc - LABEL_32_118);
      goto label_268;

    case 113:
      current_block = (Rpc - LABEL_32_119);
      goto label_269;

    case 114:
      current_block = (Rpc - LABEL_32_120);
      goto label_270;

    case 115:
      current_block = (Rpc - LABEL_32_121);
      goto label_271;

    case 116:
      current_block = (Rpc - LABEL_32_122);
      goto label_272;

    case 117:
      current_block = (Rpc - LABEL_32_123);
      goto label_273;

    case 118:
      current_block = (Rpc - LABEL_32_124);
      goto label_274;

    case 119:
      current_block = (Rpc - LABEL_32_125);
      goto label_275;

    case 120:
      current_block = (Rpc - LABEL_32_126);
      goto label_276;

    case 121:
      current_block = (Rpc - LABEL_32_127);
      goto label_277;

    case 122:
      current_block = (Rpc - LABEL_32_128);
      goto label_278;

    case 123:
      current_block = (Rpc - LABEL_32_129);
      goto label_279;

    case 124:
      current_block = (Rpc - LABEL_32_130);
      goto label_280;

    case 125:
      current_block = (Rpc - LABEL_32_131);
      goto label_281;

    case 126:
      current_block = (Rpc - LABEL_32_132);
      goto label_282;

    case 127:
      current_block = (Rpc - LABEL_32_133);
      goto label_283;

    case 128:
      current_block = (Rpc - LABEL_32_134);
      goto label_284;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_generic_4_369)
DEFLABEL (apply_generic_4_246)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_370)
  CLOSURE_HEADER (LABEL_32_5);

DEFLABEL (lambda_245)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 62)
    goto label_582;

DEFLABEL (label_581)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd13.Obj) = ((Wrd14.pObj) [0]);
  (Wrd17.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd18.Obj) = (Rsp [6]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  (Wrd16.Obj) = (MAKE_OBJECT (26, (Wrd19.uLng)));
  (Wrd1977.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd1977.uLng) == 10))
    goto label_580;
  if (! ((Wrd17.uLng) == 26))
    goto label_580;
  (Wrd1973.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd1974.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd1975.Obj) = ((Wrd1974.pObj) [0]);
  (Wrd1976.Lng) = (FIXNUM_TO_LONG (Wrd1975.Obj));
  if (! (((unsigned long) (Wrd1973.Lng)) < ((unsigned long) (Wrd1976.Lng))))
    goto label_580;
  (Wrd22.pObj) = (& ((Wrd1974.pObj) [(Wrd19.Lng)]));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_578;

DEFLABEL (label_577)
  (Wrd48.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd49.Obj) = (Rsp [6]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  (Wrd51.Obj) = (MAKE_OBJECT (26, (Wrd50.uLng)));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd54.Obj) = ((Wrd52.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd71.uLng) == 10)
    goto label_374;

DEFLABEL (label_373)
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_374)
  if (! ((Wrd48.uLng) == 26))
    goto label_373;
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) (Wrd65.Lng)) < ((unsigned long) (Wrd69.Lng))))
    goto label_373;
  (Wrd61.pObj) = (& ((Wrd67.pObj) [(Wrd50.Lng)]));
  (Wrd56.Obj) = ((Wrd61.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_576)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_35]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = (Rsp [6]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if ((Wrd76.uLng) == 62)
    goto label_569;

DEFLABEL (label_568)
  (Wrd78.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd77.Obj) = ((Wrd78.pObj) [0]);
  (Wrd81.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd82.Obj) = (Rsp [6]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  (Wrd80.Obj) = (MAKE_OBJECT (26, (Wrd83.uLng)));
  (Wrd1904.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd1904.uLng) == 10))
    goto label_567;
  if (! ((Wrd81.uLng) == 26))
    goto label_567;
  (Wrd1900.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  (Wrd1901.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd1902.Obj) = ((Wrd1901.pObj) [0]);
  (Wrd1903.Lng) = (FIXNUM_TO_LONG (Wrd1902.Obj));
  if (! (((unsigned long) (Wrd1900.Lng)) < ((unsigned long) (Wrd1903.Lng))))
    goto label_567;
  (Wrd86.pObj) = (& ((Wrd1901.pObj) [(Wrd83.Lng)]));
  (Wrd87.Obj) = ((Wrd86.pObj) [1]);
  if ((Wrd87.Obj) == ((SCHEME_OBJECT) 0))
    goto label_565;

DEFLABEL (label_564)
  (Wrd112.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd113.Obj) = (Rsp [6]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  (Wrd115.Obj) = (MAKE_OBJECT (26, (Wrd114.uLng)));
  (* (--Rsp)) = (Wrd115.Obj);
  (Wrd116.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd118.Obj) = ((Wrd116.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd135.uLng) == 10))
    goto label_373;
  if (! ((Wrd112.uLng) == 26))
    goto label_373;
  (Wrd129.Lng) = (FIXNUM_TO_LONG (Wrd115.Obj));
  (Wrd131.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd132.Obj) = ((Wrd131.pObj) [0]);
  (Wrd133.Lng) = (FIXNUM_TO_LONG (Wrd132.Obj));
  if (! (((unsigned long) (Wrd129.Lng)) < ((unsigned long) (Wrd133.Lng))))
    goto label_373;
  (Wrd125.pObj) = (& ((Wrd131.pObj) [(Wrd114.Lng)]));
  (Wrd120.Obj) = ((Wrd125.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd120.Obj);

DEFLABEL (label_563)
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_34]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (Wrd139.Obj) = (Rsp [6]);
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd139.Obj));
  if ((Wrd140.uLng) == 62)
    goto label_556;

DEFLABEL (label_555)
  (Wrd142.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd141.Obj) = ((Wrd142.pObj) [0]);
  (Wrd145.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd146.Obj) = (Rsp [6]);
  (Wrd147.uLng) = (OBJECT_TYPE (Wrd146.Obj));
  (Wrd144.Obj) = (MAKE_OBJECT (26, (Wrd147.uLng)));
  (Wrd1831.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if (! ((Wrd1831.uLng) == 10))
    goto label_554;
  if (! ((Wrd145.uLng) == 26))
    goto label_554;
  (Wrd1827.Lng) = (FIXNUM_TO_LONG (Wrd144.Obj));
  (Wrd1828.pObj) = (OBJECT_ADDRESS (Wrd141.Obj));
  (Wrd1829.Obj) = ((Wrd1828.pObj) [0]);
  (Wrd1830.Lng) = (FIXNUM_TO_LONG (Wrd1829.Obj));
  if (! (((unsigned long) (Wrd1827.Lng)) < ((unsigned long) (Wrd1830.Lng))))
    goto label_554;
  (Wrd150.pObj) = (& ((Wrd1828.pObj) [(Wrd147.Lng)]));
  (Wrd151.Obj) = ((Wrd150.pObj) [1]);
  if ((Wrd151.Obj) == ((SCHEME_OBJECT) 0))
    goto label_552;

DEFLABEL (label_551)
  (Wrd176.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd177.Obj) = (Rsp [6]);
  (Wrd178.uLng) = (OBJECT_TYPE (Wrd177.Obj));
  (Wrd179.Obj) = (MAKE_OBJECT (26, (Wrd178.uLng)));
  (* (--Rsp)) = (Wrd179.Obj);
  (Wrd180.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd182.Obj) = ((Wrd180.pObj) [0]);
  (* (--Rsp)) = (Wrd182.Obj);
  (Wrd199.uLng) = (OBJECT_TYPE (Wrd182.Obj));
  if (! ((Wrd199.uLng) == 10))
    goto label_373;
  if (! ((Wrd176.uLng) == 26))
    goto label_373;
  (Wrd193.Lng) = (FIXNUM_TO_LONG (Wrd179.Obj));
  (Wrd195.pObj) = (OBJECT_ADDRESS (Wrd182.Obj));
  (Wrd196.Obj) = ((Wrd195.pObj) [0]);
  (Wrd197.Lng) = (FIXNUM_TO_LONG (Wrd196.Obj));
  if (! (((unsigned long) (Wrd193.Lng)) < ((unsigned long) (Wrd197.Lng))))
    goto label_373;
  (Wrd189.pObj) = (& ((Wrd195.pObj) [(Wrd178.Lng)]));
  (Wrd184.Obj) = ((Wrd189.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd184.Obj);

DEFLABEL (label_550)
  (Wrd202.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_33]))));
  (* (--Rsp)) = (Wrd202.Obj);
  (Wrd203.Obj) = (Rsp [6]);
  (Wrd204.uLng) = (OBJECT_TYPE (Wrd203.Obj));
  if ((Wrd204.uLng) == 62)
    goto label_541;

DEFLABEL (label_540)
  (Wrd206.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd205.Obj) = ((Wrd206.pObj) [0]);
  (Wrd209.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd210.Obj) = (Rsp [6]);
  (Wrd211.uLng) = (OBJECT_TYPE (Wrd210.Obj));
  (Wrd208.Obj) = (MAKE_OBJECT (26, (Wrd211.uLng)));
  (Wrd1758.uLng) = (OBJECT_TYPE (Wrd205.Obj));
  if (! ((Wrd1758.uLng) == 10))
    goto label_539;
  if (! ((Wrd209.uLng) == 26))
    goto label_539;
  (Wrd1754.Lng) = (FIXNUM_TO_LONG (Wrd208.Obj));
  (Wrd1755.pObj) = (OBJECT_ADDRESS (Wrd205.Obj));
  (Wrd1756.Obj) = ((Wrd1755.pObj) [0]);
  (Wrd1757.Lng) = (FIXNUM_TO_LONG (Wrd1756.Obj));
  if (! (((unsigned long) (Wrd1754.Lng)) < ((unsigned long) (Wrd1757.Lng))))
    goto label_539;
  (Wrd214.pObj) = (& ((Wrd1755.pObj) [(Wrd211.Lng)]));
  (Wrd215.Obj) = ((Wrd214.pObj) [1]);
  if ((Wrd215.Obj) == ((SCHEME_OBJECT) 0))
    goto label_535;

DEFLABEL (label_534)
  (Wrd240.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd241.Obj) = (Rsp [6]);
  (Wrd242.uLng) = (OBJECT_TYPE (Wrd241.Obj));
  (Wrd243.Obj) = (MAKE_OBJECT (26, (Wrd242.uLng)));
  (* (--Rsp)) = (Wrd243.Obj);
  (Wrd244.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd246.Obj) = ((Wrd244.pObj) [0]);
  (* (--Rsp)) = (Wrd246.Obj);
  (Wrd263.uLng) = (OBJECT_TYPE (Wrd246.Obj));
  if (! ((Wrd263.uLng) == 10))
    goto label_373;
  if (! ((Wrd240.uLng) == 26))
    goto label_373;
  (Wrd257.Lng) = (FIXNUM_TO_LONG (Wrd243.Obj));
  (Wrd259.pObj) = (OBJECT_ADDRESS (Wrd246.Obj));
  (Wrd260.Obj) = ((Wrd259.pObj) [0]);
  (Wrd261.Lng) = (FIXNUM_TO_LONG (Wrd260.Obj));
  if (! (((unsigned long) (Wrd257.Lng)) < ((unsigned long) (Wrd261.Lng))))
    goto label_373;
  (Wrd253.pObj) = (& ((Wrd259.pObj) [(Wrd242.Lng)]));
  (Wrd248.Obj) = ((Wrd253.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd248.Obj);

DEFLABEL (label_533)
  (Wrd277.Obj) = (Rsp [5]);
  (Wrd278.pObj) = (OBJECT_ADDRESS (Wrd277.Obj));
  (Wrd279.Obj) = ((Wrd278.pObj) [2]);
  (Wrd280.uLng) = (OBJECT_TYPE (Wrd279.Obj));
  if (! ((Wrd280.uLng) == 62))
    goto label_532;
  (Wrd274.pObj) = (OBJECT_ADDRESS (Wrd279.Obj));
  (Wrd275.Obj) = ((Wrd274.pObj) [0]);
  (Wrd276.Lng) = (FIXNUM_TO_LONG (Wrd275.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd276.Lng))))
    goto label_532;
  (Wrd268.Obj) = ((Wrd274.pObj) [7]);
  (* (--Rsp)) = (Wrd268.Obj);

DEFLABEL (label_531)
  (Wrd297.Obj) = (Rsp [0]);
  (Wrd298.uLng) = (OBJECT_TYPE (Wrd297.Obj));
  if (! ((Wrd298.uLng) == 62))
    goto label_530;
  (Wrd294.pObj) = (OBJECT_ADDRESS (Wrd297.Obj));
  (Wrd295.Obj) = ((Wrd294.pObj) [0]);
  (Wrd296.Lng) = (FIXNUM_TO_LONG (Wrd295.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd296.Lng))))
    goto label_530;
  (Wrd290.Obj) = ((Wrd294.pObj) [3]);
  (* (--Rsp)) = (Wrd290.Obj);

DEFLABEL (label_529)
  (Wrd313.Obj) = (Rsp [1]);
  (Wrd314.uLng) = (OBJECT_TYPE (Wrd313.Obj));
  if (! ((Wrd314.uLng) == 62))
    goto label_528;
  (Wrd310.pObj) = (OBJECT_ADDRESS (Wrd313.Obj));
  (Wrd311.Obj) = ((Wrd310.pObj) [0]);
  (Wrd312.Lng) = (FIXNUM_TO_LONG (Wrd311.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd312.Lng))))
    goto label_528;
  (Wrd304.Obj) = ((Wrd310.pObj) [2]);

DEFLABEL (label_527)
  (Wrd331.Obj) = (Rsp [5]);
  (Wrd332.uLng) = (OBJECT_TYPE (Wrd331.Obj));
  if (! ((Wrd332.uLng) == 62))
    goto label_526;
  (Wrd325.uLng) = (OBJECT_TYPE (Wrd304.Obj));
  if (! ((Wrd325.uLng) == 26))
    goto label_526;
  (Wrd326.Lng) = (FIXNUM_TO_LONG (Wrd304.Obj));
  (Wrd328.pObj) = (OBJECT_ADDRESS (Wrd331.Obj));
  (Wrd329.Obj) = ((Wrd328.pObj) [0]);
  (Wrd330.Lng) = (FIXNUM_TO_LONG (Wrd329.Obj));
  if (! (((unsigned long) (Wrd326.Lng)) < ((unsigned long) (Wrd330.Lng))))
    goto label_526;
  (Wrd320.uLng) = (OBJECT_DATUM (Wrd304.Obj));
  (Wrd323.pObj) = (& ((Wrd328.pObj) [(Wrd320.Lng)]));
  (Wrd324.Obj) = ((Wrd323.pObj) [1]);
  (* (--Rsp)) = (Wrd324.Obj);

DEFLABEL (label_525)
  (Wrd347.Obj) = (Rsp [2]);
  (Wrd348.uLng) = (OBJECT_TYPE (Wrd347.Obj));
  if (! ((Wrd348.uLng) == 62))
    goto label_524;
  (Wrd344.pObj) = (OBJECT_ADDRESS (Wrd347.Obj));
  (Wrd345.Obj) = ((Wrd344.pObj) [0]);
  (Wrd346.Lng) = (FIXNUM_TO_LONG (Wrd345.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd346.Lng))))
    goto label_524;
  (Wrd338.Obj) = ((Wrd344.pObj) [2]);

DEFLABEL (label_523)
  (Wrd365.Obj) = (Rsp [5]);
  (Wrd366.uLng) = (OBJECT_TYPE (Wrd365.Obj));
  if (! ((Wrd366.uLng) == 62))
    goto label_522;
  (Wrd359.uLng) = (OBJECT_TYPE (Wrd338.Obj));
  if (! ((Wrd359.uLng) == 26))
    goto label_522;
  (Wrd360.Lng) = (FIXNUM_TO_LONG (Wrd338.Obj));
  (Wrd362.pObj) = (OBJECT_ADDRESS (Wrd365.Obj));
  (Wrd363.Obj) = ((Wrd362.pObj) [0]);
  (Wrd364.Lng) = (FIXNUM_TO_LONG (Wrd363.Obj));
  if (! (((unsigned long) (Wrd360.Lng)) < ((unsigned long) (Wrd364.Lng))))
    goto label_522;
  (Wrd355.uLng) = (OBJECT_DATUM (Wrd338.Obj));
  (Wrd358.pObj) = (& ((Wrd362.pObj) [(Wrd355.Lng)]));
  (Wrd354.Obj) = ((Wrd358.pObj) [1]);

DEFLABEL (label_521)
  (Wrd372.Obj) = (* (Rsp++));
  (Wrd373.Lng) = (FIXNUM_TO_LONG (Wrd354.Obj));
  (Wrd374.Lng) = (FIXNUM_TO_LONG (Wrd372.Obj));
  (Wrd375.Lng) = ((Wrd373.Lng) + (Wrd374.Lng));
  (Wrd376.Obj) = (LONG_TO_FIXNUM (Wrd375.Lng));
  (* (--Rsp)) = (Wrd376.Obj);
  (Wrd386.Obj) = (Rsp [2]);
  (Wrd387.uLng) = (OBJECT_TYPE (Wrd386.Obj));
  if (! ((Wrd387.uLng) == 62))
    goto label_520;
  (Wrd383.pObj) = (OBJECT_ADDRESS (Wrd386.Obj));
  (Wrd384.Obj) = ((Wrd383.pObj) [0]);
  (Wrd385.Lng) = (FIXNUM_TO_LONG (Wrd384.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd385.Lng))))
    goto label_520;
  (Wrd377.Obj) = ((Wrd383.pObj) [2]);

DEFLABEL (label_519)
  (Wrd404.Obj) = (Rsp [4]);
  (Wrd405.uLng) = (OBJECT_TYPE (Wrd404.Obj));
  if (! ((Wrd405.uLng) == 62))
    goto label_518;
  (Wrd398.uLng) = (OBJECT_TYPE (Wrd377.Obj));
  if (! ((Wrd398.uLng) == 26))
    goto label_518;
  (Wrd399.Lng) = (FIXNUM_TO_LONG (Wrd377.Obj));
  (Wrd401.pObj) = (OBJECT_ADDRESS (Wrd404.Obj));
  (Wrd402.Obj) = ((Wrd401.pObj) [0]);
  (Wrd403.Lng) = (FIXNUM_TO_LONG (Wrd402.Obj));
  if (! (((unsigned long) (Wrd399.Lng)) < ((unsigned long) (Wrd403.Lng))))
    goto label_518;
  (Wrd393.uLng) = (OBJECT_DATUM (Wrd377.Obj));
  (Wrd396.pObj) = (& ((Wrd401.pObj) [(Wrd393.Lng)]));
  (Wrd397.Obj) = ((Wrd396.pObj) [1]);
  (* (--Rsp)) = (Wrd397.Obj);

DEFLABEL (label_517)
  (Wrd420.Obj) = (Rsp [3]);
  (Wrd421.uLng) = (OBJECT_TYPE (Wrd420.Obj));
  if (! ((Wrd421.uLng) == 62))
    goto label_516;
  (Wrd417.pObj) = (OBJECT_ADDRESS (Wrd420.Obj));
  (Wrd418.Obj) = ((Wrd417.pObj) [0]);
  (Wrd419.Lng) = (FIXNUM_TO_LONG (Wrd418.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd419.Lng))))
    goto label_516;
  (Wrd411.Obj) = ((Wrd417.pObj) [2]);

DEFLABEL (label_515)
  (Wrd438.Obj) = (Rsp [4]);
  (Wrd439.uLng) = (OBJECT_TYPE (Wrd438.Obj));
  if (! ((Wrd439.uLng) == 62))
    goto label_514;
  (Wrd432.uLng) = (OBJECT_TYPE (Wrd411.Obj));
  if (! ((Wrd432.uLng) == 26))
    goto label_514;
  (Wrd433.Lng) = (FIXNUM_TO_LONG (Wrd411.Obj));
  (Wrd435.pObj) = (OBJECT_ADDRESS (Wrd438.Obj));
  (Wrd436.Obj) = ((Wrd435.pObj) [0]);
  (Wrd437.Lng) = (FIXNUM_TO_LONG (Wrd436.Obj));
  if (! (((unsigned long) (Wrd433.Lng)) < ((unsigned long) (Wrd437.Lng))))
    goto label_514;
  (Wrd428.uLng) = (OBJECT_DATUM (Wrd411.Obj));
  (Wrd431.pObj) = (& ((Wrd435.pObj) [(Wrd428.Lng)]));
  (Wrd427.Obj) = ((Wrd431.pObj) [1]);

DEFLABEL (label_513)
  (Wrd445.Obj) = (* (Rsp++));
  (Wrd447.Lng) = (FIXNUM_TO_LONG (Wrd427.Obj));
  (Wrd448.Lng) = (FIXNUM_TO_LONG (Wrd445.Obj));
  (Wrd449.Lng) = ((Wrd447.Lng) + (Wrd448.Lng));
  (Wrd450.Obj) = (* (Rsp++));
  Wrd452 = Wrd449;
  (Wrd453.Lng) = (FIXNUM_TO_LONG (Wrd450.Obj));
  (Wrd454.Lng) = ((Wrd452.Lng) + (Wrd453.Lng));
  (Wrd455.Obj) = (* (Rsp++));
  Wrd456 = Wrd454;
  (Wrd457.Lng) = (FIXNUM_TO_LONG (Wrd455.Obj));
  (Wrd458.Lng) = ((Wrd456.Lng) & (Wrd457.Lng));
  (Wrd459.Obj) = (LONG_TO_FIXNUM (Wrd458.Lng));
  (* (--Rsp)) = (Wrd459.Obj);
  (Wrd469.Obj) = (Rsp [1]);
  (Wrd470.uLng) = (OBJECT_TYPE (Wrd469.Obj));
  if (! ((Wrd470.uLng) == 62))
    goto label_512;
  (Wrd466.pObj) = (OBJECT_ADDRESS (Wrd469.Obj));
  (Wrd467.Obj) = ((Wrd466.pObj) [0]);
  (Wrd468.Lng) = (FIXNUM_TO_LONG (Wrd467.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd468.Lng))))
    goto label_512;
  (Wrd460.Obj) = ((Wrd466.pObj) [6]);

DEFLABEL (label_511)
  (Wrd476.Obj) = (* (Rsp++));
  (Wrd486.uLng) = (OBJECT_TYPE (Wrd460.Obj));
  if (! ((Wrd486.uLng) == 10))
    goto label_510;
  (Wrd481.uLng) = (OBJECT_TYPE (Wrd476.Obj));
  if (! ((Wrd481.uLng) == 26))
    goto label_510;
  (Wrd482.Lng) = (FIXNUM_TO_LONG (Wrd476.Obj));
  (Wrd483.pObj) = (OBJECT_ADDRESS (Wrd460.Obj));
  (Wrd484.Obj) = ((Wrd483.pObj) [0]);
  (Wrd485.Lng) = (FIXNUM_TO_LONG (Wrd484.Obj));
  if (! (((unsigned long) (Wrd482.Lng)) < ((unsigned long) (Wrd485.Lng))))
    goto label_510;
  (Wrd478.uLng) = (OBJECT_DATUM (Wrd476.Obj));
  (Wrd480.pObj) = (& ((Wrd483.pObj) [(Wrd478.Lng)]));
  (Wrd477.Obj) = ((Wrd480.pObj) [1]);

DEFLABEL (label_509)
  (Wrd493.pObj) = (OBJECT_ADDRESS (Wrd477.Obj));
  (Wrd492.Obj) = ((Wrd493.pObj) [0]);
  (Wrd494.Obj) = (Rsp [1]);
  if ((Wrd494.Obj) == (Wrd492.Obj))
    goto label_420;

DEFLABEL (label_419)
  (Wrd504.Obj) = (Rsp [0]);
  (Wrd505.uLng) = (OBJECT_TYPE (Wrd504.Obj));
  if (! ((Wrd505.uLng) == 62))
    goto label_418;
  (Wrd501.pObj) = (OBJECT_ADDRESS (Wrd504.Obj));
  (Wrd502.Obj) = ((Wrd501.pObj) [0]);
  (Wrd503.Lng) = (FIXNUM_TO_LONG (Wrd502.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd503.Lng))))
    goto label_418;
  (Wrd497.Obj) = ((Wrd501.pObj) [4]);
  (* (--Rsp)) = (Wrd497.Obj);

DEFLABEL (label_417)
  (Wrd511.Obj) = (current_block [OBJECT_32_9]);
  (* (--Rsp)) = (Wrd511.Obj);
  (Wrd521.Obj) = (Rsp [2]);
  (Wrd522.uLng) = (OBJECT_TYPE (Wrd521.Obj));
  if (! ((Wrd522.uLng) == 62))
    goto label_416;
  (Wrd518.pObj) = (OBJECT_ADDRESS (Wrd521.Obj));
  (Wrd519.Obj) = ((Wrd518.pObj) [0]);
  (Wrd520.Lng) = (FIXNUM_TO_LONG (Wrd519.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd520.Lng))))
    goto label_416;
  (Wrd512.Obj) = ((Wrd518.pObj) [6]);

DEFLABEL (label_415)
  (Wrd532.uLng) = (OBJECT_TYPE (Wrd512.Obj));
  if (! ((Wrd532.uLng) == 10))
    goto label_414;
  (Wrd529.pObj) = (OBJECT_ADDRESS (Wrd512.Obj));
  (Wrd530.Obj) = ((Wrd529.pObj) [0]);
  (Wrd531.Obj) = (MAKE_OBJECT (26, (Wrd530.uLng)));
  (* (--Rsp)) = (Wrd531.Obj);

DEFLABEL (label_413)
  (Wrd546.Obj) = (Rsp [3]);
  (Wrd547.uLng) = (OBJECT_TYPE (Wrd546.Obj));
  if (! ((Wrd547.uLng) == 62))
    goto label_412;
  (Wrd543.pObj) = (OBJECT_ADDRESS (Wrd546.Obj));
  (Wrd544.Obj) = ((Wrd543.pObj) [0]);
  (Wrd545.Lng) = (FIXNUM_TO_LONG (Wrd544.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd545.Lng))))
    goto label_412;
  (Wrd539.Obj) = ((Wrd543.pObj) [3]);
  (* (--Rsp)) = (Wrd539.Obj);

DEFLABEL (label_411)
  (Wrd562.Obj) = (Rsp [4]);
  (Wrd563.uLng) = (OBJECT_TYPE (Wrd562.Obj));
  if (! ((Wrd563.uLng) == 62))
    goto label_410;
  (Wrd559.pObj) = (OBJECT_ADDRESS (Wrd562.Obj));
  (Wrd560.Obj) = ((Wrd559.pObj) [0]);
  (Wrd561.Lng) = (FIXNUM_TO_LONG (Wrd560.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd561.Lng))))
    goto label_410;
  (Wrd553.Obj) = ((Wrd559.pObj) [2]);

DEFLABEL (label_409)
  (Wrd580.Obj) = (Rsp [8]);
  (Wrd581.uLng) = (OBJECT_TYPE (Wrd580.Obj));
  if (! ((Wrd581.uLng) == 62))
    goto label_408;
  (Wrd574.uLng) = (OBJECT_TYPE (Wrd553.Obj));
  if (! ((Wrd574.uLng) == 26))
    goto label_408;
  (Wrd575.Lng) = (FIXNUM_TO_LONG (Wrd553.Obj));
  (Wrd577.pObj) = (OBJECT_ADDRESS (Wrd580.Obj));
  (Wrd578.Obj) = ((Wrd577.pObj) [0]);
  (Wrd579.Lng) = (FIXNUM_TO_LONG (Wrd578.Obj));
  if (! (((unsigned long) (Wrd575.Lng)) < ((unsigned long) (Wrd579.Lng))))
    goto label_408;
  (Wrd569.uLng) = (OBJECT_DATUM (Wrd553.Obj));
  (Wrd572.pObj) = (& ((Wrd577.pObj) [(Wrd569.Lng)]));
  (Wrd573.Obj) = ((Wrd572.pObj) [1]);
  (* (--Rsp)) = (Wrd573.Obj);

DEFLABEL (label_407)
  (Wrd596.Obj) = (Rsp [5]);
  (Wrd597.uLng) = (OBJECT_TYPE (Wrd596.Obj));
  if (! ((Wrd597.uLng) == 62))
    goto label_406;
  (Wrd593.pObj) = (OBJECT_ADDRESS (Wrd596.Obj));
  (Wrd594.Obj) = ((Wrd593.pObj) [0]);
  (Wrd595.Lng) = (FIXNUM_TO_LONG (Wrd594.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd595.Lng))))
    goto label_406;
  (Wrd587.Obj) = ((Wrd593.pObj) [2]);

DEFLABEL (label_405)
  (Wrd614.Obj) = (Rsp [8]);
  (Wrd615.uLng) = (OBJECT_TYPE (Wrd614.Obj));
  if (! ((Wrd615.uLng) == 62))
    goto label_404;
  (Wrd608.uLng) = (OBJECT_TYPE (Wrd587.Obj));
  if (! ((Wrd608.uLng) == 26))
    goto label_404;
  (Wrd609.Lng) = (FIXNUM_TO_LONG (Wrd587.Obj));
  (Wrd611.pObj) = (OBJECT_ADDRESS (Wrd614.Obj));
  (Wrd612.Obj) = ((Wrd611.pObj) [0]);
  (Wrd613.Lng) = (FIXNUM_TO_LONG (Wrd612.Obj));
  if (! (((unsigned long) (Wrd609.Lng)) < ((unsigned long) (Wrd613.Lng))))
    goto label_404;
  (Wrd604.uLng) = (OBJECT_DATUM (Wrd587.Obj));
  (Wrd607.pObj) = (& ((Wrd611.pObj) [(Wrd604.Lng)]));
  (Wrd603.Obj) = ((Wrd607.pObj) [1]);

DEFLABEL (label_403)
  (Wrd621.Obj) = (* (Rsp++));
  (Wrd622.Lng) = (FIXNUM_TO_LONG (Wrd603.Obj));
  (Wrd623.Lng) = (FIXNUM_TO_LONG (Wrd621.Obj));
  (Wrd624.Lng) = ((Wrd622.Lng) + (Wrd623.Lng));
  (Wrd625.Obj) = (LONG_TO_FIXNUM (Wrd624.Lng));
  (* (--Rsp)) = (Wrd625.Obj);
  (Wrd635.Obj) = (Rsp [5]);
  (Wrd636.uLng) = (OBJECT_TYPE (Wrd635.Obj));
  if (! ((Wrd636.uLng) == 62))
    goto label_402;
  (Wrd632.pObj) = (OBJECT_ADDRESS (Wrd635.Obj));
  (Wrd633.Obj) = ((Wrd632.pObj) [0]);
  (Wrd634.Lng) = (FIXNUM_TO_LONG (Wrd633.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd634.Lng))))
    goto label_402;
  (Wrd626.Obj) = ((Wrd632.pObj) [2]);

DEFLABEL (label_401)
  (Wrd653.Obj) = (Rsp [7]);
  (Wrd654.uLng) = (OBJECT_TYPE (Wrd653.Obj));
  if (! ((Wrd654.uLng) == 62))
    goto label_400;
  (Wrd647.uLng) = (OBJECT_TYPE (Wrd626.Obj));
  if (! ((Wrd647.uLng) == 26))
    goto label_400;
  (Wrd648.Lng) = (FIXNUM_TO_LONG (Wrd626.Obj));
  (Wrd650.pObj) = (OBJECT_ADDRESS (Wrd653.Obj));
  (Wrd651.Obj) = ((Wrd650.pObj) [0]);
  (Wrd652.Lng) = (FIXNUM_TO_LONG (Wrd651.Obj));
  if (! (((unsigned long) (Wrd648.Lng)) < ((unsigned long) (Wrd652.Lng))))
    goto label_400;
  (Wrd642.uLng) = (OBJECT_DATUM (Wrd626.Obj));
  (Wrd645.pObj) = (& ((Wrd650.pObj) [(Wrd642.Lng)]));
  (Wrd646.Obj) = ((Wrd645.pObj) [1]);
  (* (--Rsp)) = (Wrd646.Obj);

DEFLABEL (label_399)
  (Wrd669.Obj) = (Rsp [6]);
  (Wrd670.uLng) = (OBJECT_TYPE (Wrd669.Obj));
  if (! ((Wrd670.uLng) == 62))
    goto label_398;
  (Wrd666.pObj) = (OBJECT_ADDRESS (Wrd669.Obj));
  (Wrd667.Obj) = ((Wrd666.pObj) [0]);
  (Wrd668.Lng) = (FIXNUM_TO_LONG (Wrd667.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd668.Lng))))
    goto label_398;
  (Wrd660.Obj) = ((Wrd666.pObj) [2]);

DEFLABEL (label_397)
  (Wrd687.Obj) = (Rsp [7]);
  (Wrd688.uLng) = (OBJECT_TYPE (Wrd687.Obj));
  if (! ((Wrd688.uLng) == 62))
    goto label_396;
  (Wrd681.uLng) = (OBJECT_TYPE (Wrd660.Obj));
  if (! ((Wrd681.uLng) == 26))
    goto label_396;
  (Wrd682.Lng) = (FIXNUM_TO_LONG (Wrd660.Obj));
  (Wrd684.pObj) = (OBJECT_ADDRESS (Wrd687.Obj));
  (Wrd685.Obj) = ((Wrd684.pObj) [0]);
  (Wrd686.Lng) = (FIXNUM_TO_LONG (Wrd685.Obj));
  if (! (((unsigned long) (Wrd682.Lng)) < ((unsigned long) (Wrd686.Lng))))
    goto label_396;
  (Wrd677.uLng) = (OBJECT_DATUM (Wrd660.Obj));
  (Wrd680.pObj) = (& ((Wrd684.pObj) [(Wrd677.Lng)]));
  (Wrd676.Obj) = ((Wrd680.pObj) [1]);

DEFLABEL (label_395)
  (Wrd694.Obj) = (* (Rsp++));
  (Wrd696.Lng) = (FIXNUM_TO_LONG (Wrd676.Obj));
  (Wrd697.Lng) = (FIXNUM_TO_LONG (Wrd694.Obj));
  (Wrd698.Lng) = ((Wrd696.Lng) + (Wrd697.Lng));
  (Wrd699.Obj) = (* (Rsp++));
  Wrd701 = Wrd698;
  (Wrd702.Lng) = (FIXNUM_TO_LONG (Wrd699.Obj));
  (Wrd703.Lng) = ((Wrd701.Lng) + (Wrd702.Lng));
  (Wrd704.Obj) = (* (Rsp++));
  Wrd706 = Wrd703;
  (Wrd707.Lng) = (FIXNUM_TO_LONG (Wrd704.Obj));
  (Wrd710.Lng) = ((Wrd706.Lng) & (Wrd707.Lng));
  (Wrd711.Lng) = ((Wrd710.Lng) + 1L);
  (Wrd709.Obj) = (LONG_TO_FIXNUM (Wrd711.Lng));
  (Wrd712.Obj) = (* (Rsp++));
  if ((Wrd709.Obj) == (Wrd712.Obj))
    goto label_394;
  (Wrd722.Obj) = (Rsp [2]);
  (Wrd723.uLng) = (OBJECT_TYPE (Wrd722.Obj));
  if (! ((Wrd723.uLng) == 62))
    goto label_393;
  (Wrd719.pObj) = (OBJECT_ADDRESS (Wrd722.Obj));
  (Wrd720.Obj) = ((Wrd719.pObj) [0]);
  (Wrd721.Lng) = (FIXNUM_TO_LONG (Wrd720.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd721.Lng))))
    goto label_393;
  (Wrd715.Obj) = ((Wrd719.pObj) [3]);
  (* (--Rsp)) = (Wrd715.Obj);

DEFLABEL (label_392)
  (Wrd738.Obj) = (Rsp [3]);
  (Wrd739.uLng) = (OBJECT_TYPE (Wrd738.Obj));
  if (! ((Wrd739.uLng) == 62))
    goto label_391;
  (Wrd735.pObj) = (OBJECT_ADDRESS (Wrd738.Obj));
  (Wrd736.Obj) = ((Wrd735.pObj) [0]);
  (Wrd737.Lng) = (FIXNUM_TO_LONG (Wrd736.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd737.Lng))))
    goto label_391;
  (Wrd729.Obj) = ((Wrd735.pObj) [2]);

DEFLABEL (label_390)
  (Wrd756.Obj) = (Rsp [7]);
  (Wrd757.uLng) = (OBJECT_TYPE (Wrd756.Obj));
  if (! ((Wrd757.uLng) == 62))
    goto label_389;
  (Wrd750.uLng) = (OBJECT_TYPE (Wrd729.Obj));
  if (! ((Wrd750.uLng) == 26))
    goto label_389;
  (Wrd751.Lng) = (FIXNUM_TO_LONG (Wrd729.Obj));
  (Wrd753.pObj) = (OBJECT_ADDRESS (Wrd756.Obj));
  (Wrd754.Obj) = ((Wrd753.pObj) [0]);
  (Wrd755.Lng) = (FIXNUM_TO_LONG (Wrd754.Obj));
  if (! (((unsigned long) (Wrd751.Lng)) < ((unsigned long) (Wrd755.Lng))))
    goto label_389;
  (Wrd745.uLng) = (OBJECT_DATUM (Wrd729.Obj));
  (Wrd748.pObj) = (& ((Wrd753.pObj) [(Wrd745.Lng)]));
  (Wrd749.Obj) = ((Wrd748.pObj) [1]);
  (* (--Rsp)) = (Wrd749.Obj);

DEFLABEL (label_388)
  (Wrd772.Obj) = (Rsp [4]);
  (Wrd773.uLng) = (OBJECT_TYPE (Wrd772.Obj));
  if (! ((Wrd773.uLng) == 62))
    goto label_387;
  (Wrd769.pObj) = (OBJECT_ADDRESS (Wrd772.Obj));
  (Wrd770.Obj) = ((Wrd769.pObj) [0]);
  (Wrd771.Lng) = (FIXNUM_TO_LONG (Wrd770.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd771.Lng))))
    goto label_387;
  (Wrd763.Obj) = ((Wrd769.pObj) [2]);

DEFLABEL (label_386)
  (Wrd790.Obj) = (Rsp [7]);
  (Wrd791.uLng) = (OBJECT_TYPE (Wrd790.Obj));
  if (! ((Wrd791.uLng) == 62))
    goto label_385;
  (Wrd784.uLng) = (OBJECT_TYPE (Wrd763.Obj));
  if (! ((Wrd784.uLng) == 26))
    goto label_385;
  (Wrd785.Lng) = (FIXNUM_TO_LONG (Wrd763.Obj));
  (Wrd787.pObj) = (OBJECT_ADDRESS (Wrd790.Obj));
  (Wrd788.Obj) = ((Wrd787.pObj) [0]);
  (Wrd789.Lng) = (FIXNUM_TO_LONG (Wrd788.Obj));
  if (! (((unsigned long) (Wrd785.Lng)) < ((unsigned long) (Wrd789.Lng))))
    goto label_385;
  (Wrd780.uLng) = (OBJECT_DATUM (Wrd763.Obj));
  (Wrd783.pObj) = (& ((Wrd787.pObj) [(Wrd780.Lng)]));
  (Wrd779.Obj) = ((Wrd783.pObj) [1]);

DEFLABEL (label_384)
  (Wrd797.Obj) = (* (Rsp++));
  (Wrd798.Lng) = (FIXNUM_TO_LONG (Wrd779.Obj));
  (Wrd799.Lng) = (FIXNUM_TO_LONG (Wrd797.Obj));
  (Wrd800.Lng) = ((Wrd798.Lng) + (Wrd799.Lng));
  (Wrd801.Obj) = (LONG_TO_FIXNUM (Wrd800.Lng));
  (* (--Rsp)) = (Wrd801.Obj);
  (Wrd811.Obj) = (Rsp [4]);
  (Wrd812.uLng) = (OBJECT_TYPE (Wrd811.Obj));
  if (! ((Wrd812.uLng) == 62))
    goto label_383;
  (Wrd808.pObj) = (OBJECT_ADDRESS (Wrd811.Obj));
  (Wrd809.Obj) = ((Wrd808.pObj) [0]);
  (Wrd810.Lng) = (FIXNUM_TO_LONG (Wrd809.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd810.Lng))))
    goto label_383;
  (Wrd802.Obj) = ((Wrd808.pObj) [2]);

DEFLABEL (label_382)
  (Wrd829.Obj) = (Rsp [6]);
  (Wrd830.uLng) = (OBJECT_TYPE (Wrd829.Obj));
  if (! ((Wrd830.uLng) == 62))
    goto label_381;
  (Wrd823.uLng) = (OBJECT_TYPE (Wrd802.Obj));
  if (! ((Wrd823.uLng) == 26))
    goto label_381;
  (Wrd824.Lng) = (FIXNUM_TO_LONG (Wrd802.Obj));
  (Wrd826.pObj) = (OBJECT_ADDRESS (Wrd829.Obj));
  (Wrd827.Obj) = ((Wrd826.pObj) [0]);
  (Wrd828.Lng) = (FIXNUM_TO_LONG (Wrd827.Obj));
  if (! (((unsigned long) (Wrd824.Lng)) < ((unsigned long) (Wrd828.Lng))))
    goto label_381;
  (Wrd818.uLng) = (OBJECT_DATUM (Wrd802.Obj));
  (Wrd821.pObj) = (& ((Wrd826.pObj) [(Wrd818.Lng)]));
  (Wrd822.Obj) = ((Wrd821.pObj) [1]);
  (* (--Rsp)) = (Wrd822.Obj);

DEFLABEL (label_380)
  (Wrd845.Obj) = (Rsp [5]);
  (Wrd846.uLng) = (OBJECT_TYPE (Wrd845.Obj));
  if (! ((Wrd846.uLng) == 62))
    goto label_379;
  (Wrd842.pObj) = (OBJECT_ADDRESS (Wrd845.Obj));
  (Wrd843.Obj) = ((Wrd842.pObj) [0]);
  (Wrd844.Lng) = (FIXNUM_TO_LONG (Wrd843.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd844.Lng))))
    goto label_379;
  (Wrd836.Obj) = ((Wrd842.pObj) [2]);

DEFLABEL (label_378)
  (Wrd863.Obj) = (Rsp [6]);
  (Wrd864.uLng) = (OBJECT_TYPE (Wrd863.Obj));
  if (! ((Wrd864.uLng) == 62))
    goto label_377;
  (Wrd857.uLng) = (OBJECT_TYPE (Wrd836.Obj));
  if (! ((Wrd857.uLng) == 26))
    goto label_377;
  (Wrd858.Lng) = (FIXNUM_TO_LONG (Wrd836.Obj));
  (Wrd860.pObj) = (OBJECT_ADDRESS (Wrd863.Obj));
  (Wrd861.Obj) = ((Wrd860.pObj) [0]);
  (Wrd862.Lng) = (FIXNUM_TO_LONG (Wrd861.Obj));
  if (! (((unsigned long) (Wrd858.Lng)) < ((unsigned long) (Wrd862.Lng))))
    goto label_377;
  (Wrd853.uLng) = (OBJECT_DATUM (Wrd836.Obj));
  (Wrd856.pObj) = (& ((Wrd860.pObj) [(Wrd853.Lng)]));
  (Wrd852.Obj) = ((Wrd856.pObj) [1]);

DEFLABEL (label_376)
  (Wrd870.Obj) = (* (Rsp++));
  (Wrd872.Lng) = (FIXNUM_TO_LONG (Wrd852.Obj));
  (Wrd873.Lng) = (FIXNUM_TO_LONG (Wrd870.Obj));
  (Wrd874.Lng) = ((Wrd872.Lng) + (Wrd873.Lng));
  (Wrd875.Obj) = (* (Rsp++));
  Wrd877 = Wrd874;
  (Wrd878.Lng) = (FIXNUM_TO_LONG (Wrd875.Obj));
  (Wrd879.Lng) = ((Wrd877.Lng) + (Wrd878.Lng));
  (Wrd880.Obj) = (* (Rsp++));
  Wrd882 = Wrd879;
  (Wrd883.Lng) = (FIXNUM_TO_LONG (Wrd880.Obj));
  (Wrd885.Lng) = ((Wrd882.Lng) & (Wrd883.Lng));
  (Wrd886.Lng) = ((Wrd885.Lng) + 1L);
  (Wrd887.Obj) = (LONG_TO_FIXNUM (Wrd886.Lng));
  (* (--Rsp)) = (Wrd887.Obj);

DEFLABEL (label_375)
  goto search_lines_222;

DEFLABEL (label_377)
  (Wrd865.Obj) = (Rsp [6]);
  (Wrd869.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_134]))));
  (* (--Rsp)) = (Wrd869.Obj);
  (* (--Rsp)) = (Wrd836.Obj);
  (* (--Rsp)) = (Wrd865.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_284)
  (Wrd852.Obj) = Rvl;
  goto label_376;

DEFLABEL (label_379)
  (Wrd847.Obj) = (Rsp [5]);
  (Wrd848.Obj) = (current_block [OBJECT_32_12]);
  (Wrd851.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_133]))));
  (* (--Rsp)) = (Wrd851.Obj);
  (* (--Rsp)) = (Wrd848.Obj);
  (* (--Rsp)) = (Wrd847.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_283)
  (Wrd836.Obj) = Rvl;
  goto label_378;

DEFLABEL (label_381)
  (Wrd831.Obj) = (Rsp [6]);
  (Wrd835.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_132]))));
  (* (--Rsp)) = (Wrd835.Obj);
  (* (--Rsp)) = (Wrd802.Obj);
  (* (--Rsp)) = (Wrd831.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_282)
  (* (--Rsp)) = Rvl;
  goto label_380;

DEFLABEL (label_383)
  (Wrd813.Obj) = (Rsp [4]);
  (Wrd814.Obj) = (current_block [OBJECT_32_12]);
  (Wrd817.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_131]))));
  (* (--Rsp)) = (Wrd817.Obj);
  (* (--Rsp)) = (Wrd814.Obj);
  (* (--Rsp)) = (Wrd813.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_281)
  (Wrd802.Obj) = Rvl;
  goto label_382;

DEFLABEL (label_385)
  (Wrd792.Obj) = (Rsp [7]);
  (Wrd796.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_130]))));
  (* (--Rsp)) = (Wrd796.Obj);
  (* (--Rsp)) = (Wrd763.Obj);
  (* (--Rsp)) = (Wrd792.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_280)
  (Wrd779.Obj) = Rvl;
  goto label_384;

DEFLABEL (label_387)
  (Wrd774.Obj) = (Rsp [4]);
  (Wrd775.Obj) = (current_block [OBJECT_32_12]);
  (Wrd778.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_129]))));
  (* (--Rsp)) = (Wrd778.Obj);
  (* (--Rsp)) = (Wrd775.Obj);
  (* (--Rsp)) = (Wrd774.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_279)
  (Wrd763.Obj) = Rvl;
  goto label_386;

DEFLABEL (label_389)
  (Wrd758.Obj) = (Rsp [7]);
  (Wrd762.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_128]))));
  (* (--Rsp)) = (Wrd762.Obj);
  (* (--Rsp)) = (Wrd729.Obj);
  (* (--Rsp)) = (Wrd758.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_278)
  (* (--Rsp)) = Rvl;
  goto label_388;

DEFLABEL (label_391)
  (Wrd740.Obj) = (Rsp [3]);
  (Wrd741.Obj) = (current_block [OBJECT_32_12]);
  (Wrd744.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_127]))));
  (* (--Rsp)) = (Wrd744.Obj);
  (* (--Rsp)) = (Wrd741.Obj);
  (* (--Rsp)) = (Wrd740.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_277)
  (Wrd729.Obj) = Rvl;
  goto label_390;

DEFLABEL (label_393)
  (Wrd724.Obj) = (Rsp [2]);
  (Wrd725.Obj) = (current_block [OBJECT_32_11]);
  (Wrd728.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_126]))));
  (* (--Rsp)) = (Wrd728.Obj);
  (* (--Rsp)) = (Wrd725.Obj);
  (* (--Rsp)) = (Wrd724.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_276)
  (* (--Rsp)) = Rvl;
  goto label_392;

DEFLABEL (label_394)
  (Wrd888.Obj) = (current_block [OBJECT_32_9]);
  (* (--Rsp)) = (Wrd888.Obj);
  goto label_375;

DEFLABEL (label_396)
  (Wrd689.Obj) = (Rsp [7]);
  (Wrd693.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_125]))));
  (* (--Rsp)) = (Wrd693.Obj);
  (* (--Rsp)) = (Wrd660.Obj);
  (* (--Rsp)) = (Wrd689.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_275)
  (Wrd676.Obj) = Rvl;
  goto label_395;

DEFLABEL (label_398)
  (Wrd671.Obj) = (Rsp [6]);
  (Wrd672.Obj) = (current_block [OBJECT_32_12]);
  (Wrd675.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_124]))));
  (* (--Rsp)) = (Wrd675.Obj);
  (* (--Rsp)) = (Wrd672.Obj);
  (* (--Rsp)) = (Wrd671.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_274)
  (Wrd660.Obj) = Rvl;
  goto label_397;

DEFLABEL (label_400)
  (Wrd655.Obj) = (Rsp [7]);
  (Wrd659.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_123]))));
  (* (--Rsp)) = (Wrd659.Obj);
  (* (--Rsp)) = (Wrd626.Obj);
  (* (--Rsp)) = (Wrd655.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_273)
  (* (--Rsp)) = Rvl;
  goto label_399;

DEFLABEL (label_402)
  (Wrd637.Obj) = (Rsp [5]);
  (Wrd638.Obj) = (current_block [OBJECT_32_12]);
  (Wrd641.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_122]))));
  (* (--Rsp)) = (Wrd641.Obj);
  (* (--Rsp)) = (Wrd638.Obj);
  (* (--Rsp)) = (Wrd637.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_272)
  (Wrd626.Obj) = Rvl;
  goto label_401;

DEFLABEL (label_404)
  (Wrd616.Obj) = (Rsp [8]);
  (Wrd620.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_121]))));
  (* (--Rsp)) = (Wrd620.Obj);
  (* (--Rsp)) = (Wrd587.Obj);
  (* (--Rsp)) = (Wrd616.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_271)
  (Wrd603.Obj) = Rvl;
  goto label_403;

DEFLABEL (label_406)
  (Wrd598.Obj) = (Rsp [5]);
  (Wrd599.Obj) = (current_block [OBJECT_32_12]);
  (Wrd602.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_120]))));
  (* (--Rsp)) = (Wrd602.Obj);
  (* (--Rsp)) = (Wrd599.Obj);
  (* (--Rsp)) = (Wrd598.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_270)
  (Wrd587.Obj) = Rvl;
  goto label_405;

DEFLABEL (label_408)
  (Wrd582.Obj) = (Rsp [8]);
  (Wrd586.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_119]))));
  (* (--Rsp)) = (Wrd586.Obj);
  (* (--Rsp)) = (Wrd553.Obj);
  (* (--Rsp)) = (Wrd582.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_269)
  (* (--Rsp)) = Rvl;
  goto label_407;

DEFLABEL (label_410)
  (Wrd564.Obj) = (Rsp [4]);
  (Wrd565.Obj) = (current_block [OBJECT_32_12]);
  (Wrd568.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_118]))));
  (* (--Rsp)) = (Wrd568.Obj);
  (* (--Rsp)) = (Wrd565.Obj);
  (* (--Rsp)) = (Wrd564.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_268)
  (Wrd553.Obj) = Rvl;
  goto label_409;

DEFLABEL (label_412)
  (Wrd548.Obj) = (Rsp [3]);
  (Wrd549.Obj) = (current_block [OBJECT_32_11]);
  (Wrd552.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_117]))));
  (* (--Rsp)) = (Wrd552.Obj);
  (* (--Rsp)) = (Wrd549.Obj);
  (* (--Rsp)) = (Wrd548.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_267)
  (* (--Rsp)) = Rvl;
  goto label_411;

DEFLABEL (label_414)
  (Wrd536.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_116]))));
  (* (--Rsp)) = (Wrd536.Obj);
  (* (--Rsp)) = (Wrd512.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_8]), 1);

DEFLABEL (label_266)
  (* (--Rsp)) = Rvl;
  goto label_413;

DEFLABEL (label_416)
  (Wrd523.Obj) = (Rsp [2]);
  (Wrd524.Obj) = (current_block [OBJECT_32_5]);
  (Wrd527.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_115]))));
  (* (--Rsp)) = (Wrd527.Obj);
  (* (--Rsp)) = (Wrd524.Obj);
  (* (--Rsp)) = (Wrd523.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_265)
  (Wrd512.Obj) = Rvl;
  goto label_415;

DEFLABEL (label_418)
  (Wrd506.Obj) = (Rsp [0]);
  (Wrd507.Obj) = (current_block [OBJECT_32_13]);
  (Wrd510.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_114]))));
  (* (--Rsp)) = (Wrd510.Obj);
  (* (--Rsp)) = (Wrd507.Obj);
  (* (--Rsp)) = (Wrd506.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_264)
  (* (--Rsp)) = Rvl;
  goto label_417;

DEFLABEL (label_420)
  (Wrd898.Obj) = (Rsp [0]);
  (Wrd899.uLng) = (OBJECT_TYPE (Wrd898.Obj));
  if (! ((Wrd899.uLng) == 62))
    goto label_508;
  (Wrd895.pObj) = (OBJECT_ADDRESS (Wrd898.Obj));
  (Wrd896.Obj) = ((Wrd895.pObj) [0]);
  (Wrd897.Lng) = (FIXNUM_TO_LONG (Wrd896.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd897.Lng))))
    goto label_508;
  (Wrd891.Obj) = ((Wrd895.pObj) [3]);
  (* (--Rsp)) = (Wrd891.Obj);

DEFLABEL (label_507)
  (Wrd914.Obj) = (Rsp [1]);
  (Wrd915.uLng) = (OBJECT_TYPE (Wrd914.Obj));
  if (! ((Wrd915.uLng) == 62))
    goto label_506;
  (Wrd911.pObj) = (OBJECT_ADDRESS (Wrd914.Obj));
  (Wrd912.Obj) = ((Wrd911.pObj) [0]);
  (Wrd913.Lng) = (FIXNUM_TO_LONG (Wrd912.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd913.Lng))))
    goto label_506;
  (Wrd905.Obj) = ((Wrd911.pObj) [2]);

DEFLABEL (label_505)
  (Wrd932.Obj) = (Rsp [5]);
  (Wrd933.uLng) = (OBJECT_TYPE (Wrd932.Obj));
  if (! ((Wrd933.uLng) == 62))
    goto label_504;
  (Wrd926.uLng) = (OBJECT_TYPE (Wrd905.Obj));
  if (! ((Wrd926.uLng) == 26))
    goto label_504;
  (Wrd927.Lng) = (FIXNUM_TO_LONG (Wrd905.Obj));
  (Wrd929.pObj) = (OBJECT_ADDRESS (Wrd932.Obj));
  (Wrd930.Obj) = ((Wrd929.pObj) [0]);
  (Wrd931.Lng) = (FIXNUM_TO_LONG (Wrd930.Obj));
  if (! (((unsigned long) (Wrd927.Lng)) < ((unsigned long) (Wrd931.Lng))))
    goto label_504;
  (Wrd921.uLng) = (OBJECT_DATUM (Wrd905.Obj));
  (Wrd924.pObj) = (& ((Wrd929.pObj) [(Wrd921.Lng)]));
  (Wrd925.Obj) = ((Wrd924.pObj) [1]);
  (* (--Rsp)) = (Wrd925.Obj);

DEFLABEL (label_503)
  (Wrd948.Obj) = (Rsp [2]);
  (Wrd949.uLng) = (OBJECT_TYPE (Wrd948.Obj));
  if (! ((Wrd949.uLng) == 62))
    goto label_502;
  (Wrd945.pObj) = (OBJECT_ADDRESS (Wrd948.Obj));
  (Wrd946.Obj) = ((Wrd945.pObj) [0]);
  (Wrd947.Lng) = (FIXNUM_TO_LONG (Wrd946.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd947.Lng))))
    goto label_502;
  (Wrd939.Obj) = ((Wrd945.pObj) [2]);

DEFLABEL (label_501)
  (Wrd966.Obj) = (Rsp [5]);
  (Wrd967.uLng) = (OBJECT_TYPE (Wrd966.Obj));
  if (! ((Wrd967.uLng) == 62))
    goto label_500;
  (Wrd960.uLng) = (OBJECT_TYPE (Wrd939.Obj));
  if (! ((Wrd960.uLng) == 26))
    goto label_500;
  (Wrd961.Lng) = (FIXNUM_TO_LONG (Wrd939.Obj));
  (Wrd963.pObj) = (OBJECT_ADDRESS (Wrd966.Obj));
  (Wrd964.Obj) = ((Wrd963.pObj) [0]);
  (Wrd965.Lng) = (FIXNUM_TO_LONG (Wrd964.Obj));
  if (! (((unsigned long) (Wrd961.Lng)) < ((unsigned long) (Wrd965.Lng))))
    goto label_500;
  (Wrd956.uLng) = (OBJECT_DATUM (Wrd939.Obj));
  (Wrd959.pObj) = (& ((Wrd963.pObj) [(Wrd956.Lng)]));
  (Wrd955.Obj) = ((Wrd959.pObj) [1]);

DEFLABEL (label_499)
  (Wrd973.Obj) = (* (Rsp++));
  (Wrd974.Lng) = (FIXNUM_TO_LONG (Wrd955.Obj));
  (Wrd975.Lng) = (FIXNUM_TO_LONG (Wrd973.Obj));
  (Wrd976.Lng) = ((Wrd974.Lng) + (Wrd975.Lng));
  (Wrd977.Obj) = (LONG_TO_FIXNUM (Wrd976.Lng));
  (* (--Rsp)) = (Wrd977.Obj);
  (Wrd987.Obj) = (Rsp [2]);
  (Wrd988.uLng) = (OBJECT_TYPE (Wrd987.Obj));
  if (! ((Wrd988.uLng) == 62))
    goto label_498;
  (Wrd984.pObj) = (OBJECT_ADDRESS (Wrd987.Obj));
  (Wrd985.Obj) = ((Wrd984.pObj) [0]);
  (Wrd986.Lng) = (FIXNUM_TO_LONG (Wrd985.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd986.Lng))))
    goto label_498;
  (Wrd978.Obj) = ((Wrd984.pObj) [2]);

DEFLABEL (label_497)
  (Wrd1005.Obj) = (Rsp [4]);
  (Wrd1006.uLng) = (OBJECT_TYPE (Wrd1005.Obj));
  if (! ((Wrd1006.uLng) == 62))
    goto label_496;
  (Wrd999.uLng) = (OBJECT_TYPE (Wrd978.Obj));
  if (! ((Wrd999.uLng) == 26))
    goto label_496;
  (Wrd1000.Lng) = (FIXNUM_TO_LONG (Wrd978.Obj));
  (Wrd1002.pObj) = (OBJECT_ADDRESS (Wrd1005.Obj));
  (Wrd1003.Obj) = ((Wrd1002.pObj) [0]);
  (Wrd1004.Lng) = (FIXNUM_TO_LONG (Wrd1003.Obj));
  if (! (((unsigned long) (Wrd1000.Lng)) < ((unsigned long) (Wrd1004.Lng))))
    goto label_496;
  (Wrd994.uLng) = (OBJECT_DATUM (Wrd978.Obj));
  (Wrd997.pObj) = (& ((Wrd1002.pObj) [(Wrd994.Lng)]));
  (Wrd998.Obj) = ((Wrd997.pObj) [1]);
  (* (--Rsp)) = (Wrd998.Obj);

DEFLABEL (label_495)
  (Wrd1021.Obj) = (Rsp [3]);
  (Wrd1022.uLng) = (OBJECT_TYPE (Wrd1021.Obj));
  if (! ((Wrd1022.uLng) == 62))
    goto label_494;
  (Wrd1018.pObj) = (OBJECT_ADDRESS (Wrd1021.Obj));
  (Wrd1019.Obj) = ((Wrd1018.pObj) [0]);
  (Wrd1020.Lng) = (FIXNUM_TO_LONG (Wrd1019.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd1020.Lng))))
    goto label_494;
  (Wrd1012.Obj) = ((Wrd1018.pObj) [2]);

DEFLABEL (label_493)
  (Wrd1039.Obj) = (Rsp [4]);
  (Wrd1040.uLng) = (OBJECT_TYPE (Wrd1039.Obj));
  if (! ((Wrd1040.uLng) == 62))
    goto label_492;
  (Wrd1033.uLng) = (OBJECT_TYPE (Wrd1012.Obj));
  if (! ((Wrd1033.uLng) == 26))
    goto label_492;
  (Wrd1034.Lng) = (FIXNUM_TO_LONG (Wrd1012.Obj));
  (Wrd1036.pObj) = (OBJECT_ADDRESS (Wrd1039.Obj));
  (Wrd1037.Obj) = ((Wrd1036.pObj) [0]);
  (Wrd1038.Lng) = (FIXNUM_TO_LONG (Wrd1037.Obj));
  if (! (((unsigned long) (Wrd1034.Lng)) < ((unsigned long) (Wrd1038.Lng))))
    goto label_492;
  (Wrd1029.uLng) = (OBJECT_DATUM (Wrd1012.Obj));
  (Wrd1032.pObj) = (& ((Wrd1036.pObj) [(Wrd1029.Lng)]));
  (Wrd1028.Obj) = ((Wrd1032.pObj) [1]);

DEFLABEL (label_491)
  (Wrd1046.Obj) = (* (Rsp++));
  (Wrd1048.Lng) = (FIXNUM_TO_LONG (Wrd1028.Obj));
  (Wrd1049.Lng) = (FIXNUM_TO_LONG (Wrd1046.Obj));
  (Wrd1050.Lng) = ((Wrd1048.Lng) + (Wrd1049.Lng));
  (Wrd1051.Obj) = (* (Rsp++));
  Wrd1053 = Wrd1050;
  (Wrd1054.Lng) = (FIXNUM_TO_LONG (Wrd1051.Obj));
  (Wrd1055.Lng) = ((Wrd1053.Lng) + (Wrd1054.Lng));
  (Wrd1056.Obj) = (* (Rsp++));
  Wrd1057 = Wrd1055;
  (Wrd1058.Lng) = (FIXNUM_TO_LONG (Wrd1056.Obj));
  (Wrd1059.Lng) = ((Wrd1057.Lng) & (Wrd1058.Lng));
  (Wrd1060.Obj) = (LONG_TO_FIXNUM (Wrd1059.Lng));
  (* (--Rsp)) = (Wrd1060.Obj);
  (Wrd1070.Obj) = (Rsp [1]);
  (Wrd1071.uLng) = (OBJECT_TYPE (Wrd1070.Obj));
  if (! ((Wrd1071.uLng) == 62))
    goto label_490;
  (Wrd1067.pObj) = (OBJECT_ADDRESS (Wrd1070.Obj));
  (Wrd1068.Obj) = ((Wrd1067.pObj) [0]);
  (Wrd1069.Lng) = (FIXNUM_TO_LONG (Wrd1068.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd1069.Lng))))
    goto label_490;
  (Wrd1061.Obj) = ((Wrd1067.pObj) [6]);

DEFLABEL (label_489)
  (Wrd1077.Obj) = (* (Rsp++));
  (Wrd1087.uLng) = (OBJECT_TYPE (Wrd1061.Obj));
  if (! ((Wrd1087.uLng) == 10))
    goto label_488;
  (Wrd1082.uLng) = (OBJECT_TYPE (Wrd1077.Obj));
  if (! ((Wrd1082.uLng) == 26))
    goto label_488;
  (Wrd1083.Lng) = (FIXNUM_TO_LONG (Wrd1077.Obj));
  (Wrd1084.pObj) = (OBJECT_ADDRESS (Wrd1061.Obj));
  (Wrd1085.Obj) = ((Wrd1084.pObj) [0]);
  (Wrd1086.Lng) = (FIXNUM_TO_LONG (Wrd1085.Obj));
  if (! (((unsigned long) (Wrd1083.Lng)) < ((unsigned long) (Wrd1086.Lng))))
    goto label_488;
  (Wrd1079.uLng) = (OBJECT_DATUM (Wrd1077.Obj));
  (Wrd1081.pObj) = (& ((Wrd1084.pObj) [(Wrd1079.Lng)]));
  (Wrd1078.Obj) = ((Wrd1081.pObj) [1]);

DEFLABEL (label_487)
  (Wrd1094.pObj) = (OBJECT_ADDRESS (Wrd1078.Obj));
  (Wrd1093.Obj) = ((Wrd1094.pObj) [1]);
  (Wrd1096.pObj) = (OBJECT_ADDRESS (Wrd1093.Obj));
  (Wrd1095.Obj) = ((Wrd1096.pObj) [0]);
  (Wrd1097.Obj) = (Rsp [2]);
  if (! ((Wrd1097.Obj) == (Wrd1095.Obj)))
    goto label_419;
  (Wrd1107.Obj) = (Rsp [0]);
  (Wrd1108.uLng) = (OBJECT_TYPE (Wrd1107.Obj));
  if (! ((Wrd1108.uLng) == 62))
    goto label_486;
  (Wrd1104.pObj) = (OBJECT_ADDRESS (Wrd1107.Obj));
  (Wrd1105.Obj) = ((Wrd1104.pObj) [0]);
  (Wrd1106.Lng) = (FIXNUM_TO_LONG (Wrd1105.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd1106.Lng))))
    goto label_486;
  (Wrd1100.Obj) = ((Wrd1104.pObj) [3]);
  (* (--Rsp)) = (Wrd1100.Obj);

DEFLABEL (label_485)
  (Wrd1123.Obj) = (Rsp [1]);
  (Wrd1124.uLng) = (OBJECT_TYPE (Wrd1123.Obj));
  if (! ((Wrd1124.uLng) == 62))
    goto label_484;
  (Wrd1120.pObj) = (OBJECT_ADDRESS (Wrd1123.Obj));
  (Wrd1121.Obj) = ((Wrd1120.pObj) [0]);
  (Wrd1122.Lng) = (FIXNUM_TO_LONG (Wrd1121.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd1122.Lng))))
    goto label_484;
  (Wrd1114.Obj) = ((Wrd1120.pObj) [2]);

DEFLABEL (label_483)
  (Wrd1141.Obj) = (Rsp [5]);
  (Wrd1142.uLng) = (OBJECT_TYPE (Wrd1141.Obj));
  if (! ((Wrd1142.uLng) == 62))
    goto label_482;
  (Wrd1135.uLng) = (OBJECT_TYPE (Wrd1114.Obj));
  if (! ((Wrd1135.uLng) == 26))
    goto label_482;
  (Wrd1136.Lng) = (FIXNUM_TO_LONG (Wrd1114.Obj));
  (Wrd1138.pObj) = (OBJECT_ADDRESS (Wrd1141.Obj));
  (Wrd1139.Obj) = ((Wrd1138.pObj) [0]);
  (Wrd1140.Lng) = (FIXNUM_TO_LONG (Wrd1139.Obj));
  if (! (((unsigned long) (Wrd1136.Lng)) < ((unsigned long) (Wrd1140.Lng))))
    goto label_482;
  (Wrd1130.uLng) = (OBJECT_DATUM (Wrd1114.Obj));
  (Wrd1133.pObj) = (& ((Wrd1138.pObj) [(Wrd1130.Lng)]));
  (Wrd1134.Obj) = ((Wrd1133.pObj) [1]);
  (* (--Rsp)) = (Wrd1134.Obj);

DEFLABEL (label_481)
  (Wrd1157.Obj) = (Rsp [2]);
  (Wrd1158.uLng) = (OBJECT_TYPE (Wrd1157.Obj));
  if (! ((Wrd1158.uLng) == 62))
    goto label_480;
  (Wrd1154.pObj) = (OBJECT_ADDRESS (Wrd1157.Obj));
  (Wrd1155.Obj) = ((Wrd1154.pObj) [0]);
  (Wrd1156.Lng) = (FIXNUM_TO_LONG (Wrd1155.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd1156.Lng))))
    goto label_480;
  (Wrd1148.Obj) = ((Wrd1154.pObj) [2]);

DEFLABEL (label_479)
  (Wrd1175.Obj) = (Rsp [5]);
  (Wrd1176.uLng) = (OBJECT_TYPE (Wrd1175.Obj));
  if (! ((Wrd1176.uLng) == 62))
    goto label_478;
  (Wrd1169.uLng) = (OBJECT_TYPE (Wrd1148.Obj));
  if (! ((Wrd1169.uLng) == 26))
    goto label_478;
  (Wrd1170.Lng) = (FIXNUM_TO_LONG (Wrd1148.Obj));
  (Wrd1172.pObj) = (OBJECT_ADDRESS (Wrd1175.Obj));
  (Wrd1173.Obj) = ((Wrd1172.pObj) [0]);
  (Wrd1174.Lng) = (FIXNUM_TO_LONG (Wrd1173.Obj));
  if (! (((unsigned long) (Wrd1170.Lng)) < ((unsigned long) (Wrd1174.Lng))))
    goto label_478;
  (Wrd1165.uLng) = (OBJECT_DATUM (Wrd1148.Obj));
  (Wrd1168.pObj) = (& ((Wrd1172.pObj) [(Wrd1165.Lng)]));
  (Wrd1164.Obj) = ((Wrd1168.pObj) [1]);

DEFLABEL (label_477)
  (Wrd1182.Obj) = (* (Rsp++));
  (Wrd1183.Lng) = (FIXNUM_TO_LONG (Wrd1164.Obj));
  (Wrd1184.Lng) = (FIXNUM_TO_LONG (Wrd1182.Obj));
  (Wrd1185.Lng) = ((Wrd1183.Lng) + (Wrd1184.Lng));
  (Wrd1186.Obj) = (LONG_TO_FIXNUM (Wrd1185.Lng));
  (* (--Rsp)) = (Wrd1186.Obj);
  (Wrd1196.Obj) = (Rsp [2]);
  (Wrd1197.uLng) = (OBJECT_TYPE (Wrd1196.Obj));
  if (! ((Wrd1197.uLng) == 62))
    goto label_476;
  (Wrd1193.pObj) = (OBJECT_ADDRESS (Wrd1196.Obj));
  (Wrd1194.Obj) = ((Wrd1193.pObj) [0]);
  (Wrd1195.Lng) = (FIXNUM_TO_LONG (Wrd1194.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd1195.Lng))))
    goto label_476;
  (Wrd1187.Obj) = ((Wrd1193.pObj) [2]);

DEFLABEL (label_475)
  (Wrd1214.Obj) = (Rsp [4]);
  (Wrd1215.uLng) = (OBJECT_TYPE (Wrd1214.Obj));
  if (! ((Wrd1215.uLng) == 62))
    goto label_474;
  (Wrd1208.uLng) = (OBJECT_TYPE (Wrd1187.Obj));
  if (! ((Wrd1208.uLng) == 26))
    goto label_474;
  (Wrd1209.Lng) = (FIXNUM_TO_LONG (Wrd1187.Obj));
  (Wrd1211.pObj) = (OBJECT_ADDRESS (Wrd1214.Obj));
  (Wrd1212.Obj) = ((Wrd1211.pObj) [0]);
  (Wrd1213.Lng) = (FIXNUM_TO_LONG (Wrd1212.Obj));
  if (! (((unsigned long) (Wrd1209.Lng)) < ((unsigned long) (Wrd1213.Lng))))
    goto label_474;
  (Wrd1203.uLng) = (OBJECT_DATUM (Wrd1187.Obj));
  (Wrd1206.pObj) = (& ((Wrd1211.pObj) [(Wrd1203.Lng)]));
  (Wrd1207.Obj) = ((Wrd1206.pObj) [1]);
  (* (--Rsp)) = (Wrd1207.Obj);

DEFLABEL (label_473)
  (Wrd1230.Obj) = (Rsp [3]);
  (Wrd1231.uLng) = (OBJECT_TYPE (Wrd1230.Obj));
  if (! ((Wrd1231.uLng) == 62))
    goto label_472;
  (Wrd1227.pObj) = (OBJECT_ADDRESS (Wrd1230.Obj));
  (Wrd1228.Obj) = ((Wrd1227.pObj) [0]);
  (Wrd1229.Lng) = (FIXNUM_TO_LONG (Wrd1228.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd1229.Lng))))
    goto label_472;
  (Wrd1221.Obj) = ((Wrd1227.pObj) [2]);

DEFLABEL (label_471)
  (Wrd1248.Obj) = (Rsp [4]);
  (Wrd1249.uLng) = (OBJECT_TYPE (Wrd1248.Obj));
  if (! ((Wrd1249.uLng) == 62))
    goto label_470;
  (Wrd1242.uLng) = (OBJECT_TYPE (Wrd1221.Obj));
  if (! ((Wrd1242.uLng) == 26))
    goto label_470;
  (Wrd1243.Lng) = (FIXNUM_TO_LONG (Wrd1221.Obj));
  (Wrd1245.pObj) = (OBJECT_ADDRESS (Wrd1248.Obj));
  (Wrd1246.Obj) = ((Wrd1245.pObj) [0]);
  (Wrd1247.Lng) = (FIXNUM_TO_LONG (Wrd1246.Obj));
  if (! (((unsigned long) (Wrd1243.Lng)) < ((unsigned long) (Wrd1247.Lng))))
    goto label_470;
  (Wrd1238.uLng) = (OBJECT_DATUM (Wrd1221.Obj));
  (Wrd1241.pObj) = (& ((Wrd1245.pObj) [(Wrd1238.Lng)]));
  (Wrd1237.Obj) = ((Wrd1241.pObj) [1]);

DEFLABEL (label_469)
  (Wrd1255.Obj) = (* (Rsp++));
  (Wrd1257.Lng) = (FIXNUM_TO_LONG (Wrd1237.Obj));
  (Wrd1258.Lng) = (FIXNUM_TO_LONG (Wrd1255.Obj));
  (Wrd1259.Lng) = ((Wrd1257.Lng) + (Wrd1258.Lng));
  (Wrd1260.Obj) = (* (Rsp++));
  Wrd1262 = Wrd1259;
  (Wrd1263.Lng) = (FIXNUM_TO_LONG (Wrd1260.Obj));
  (Wrd1264.Lng) = ((Wrd1262.Lng) + (Wrd1263.Lng));
  (Wrd1265.Obj) = (* (Rsp++));
  Wrd1266 = Wrd1264;
  (Wrd1267.Lng) = (FIXNUM_TO_LONG (Wrd1265.Obj));
  (Wrd1268.Lng) = ((Wrd1266.Lng) & (Wrd1267.Lng));
  (Wrd1269.Obj) = (LONG_TO_FIXNUM (Wrd1268.Lng));
  (* (--Rsp)) = (Wrd1269.Obj);
  (Wrd1279.Obj) = (Rsp [1]);
  (Wrd1280.uLng) = (OBJECT_TYPE (Wrd1279.Obj));
  if (! ((Wrd1280.uLng) == 62))
    goto label_468;
  (Wrd1276.pObj) = (OBJECT_ADDRESS (Wrd1279.Obj));
  (Wrd1277.Obj) = ((Wrd1276.pObj) [0]);
  (Wrd1278.Lng) = (FIXNUM_TO_LONG (Wrd1277.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd1278.Lng))))
    goto label_468;
  (Wrd1270.Obj) = ((Wrd1276.pObj) [6]);

DEFLABEL (label_467)
  (Wrd1286.Obj) = (* (Rsp++));
  (Wrd1296.uLng) = (OBJECT_TYPE (Wrd1270.Obj));
  if (! ((Wrd1296.uLng) == 10))
    goto label_466;
  (Wrd1291.uLng) = (OBJECT_TYPE (Wrd1286.Obj));
  if (! ((Wrd1291.uLng) == 26))
    goto label_466;
  (Wrd1292.Lng) = (FIXNUM_TO_LONG (Wrd1286.Obj));
  (Wrd1293.pObj) = (OBJECT_ADDRESS (Wrd1270.Obj));
  (Wrd1294.Obj) = ((Wrd1293.pObj) [0]);
  (Wrd1295.Lng) = (FIXNUM_TO_LONG (Wrd1294.Obj));
  if (! (((unsigned long) (Wrd1292.Lng)) < ((unsigned long) (Wrd1295.Lng))))
    goto label_466;
  (Wrd1288.uLng) = (OBJECT_DATUM (Wrd1286.Obj));
  (Wrd1290.pObj) = (& ((Wrd1293.pObj) [(Wrd1288.Lng)]));
  (Wrd1287.Obj) = ((Wrd1290.pObj) [1]);

DEFLABEL (label_465)
  (Wrd1303.pObj) = (OBJECT_ADDRESS (Wrd1287.Obj));
  (Wrd1302.Obj) = ((Wrd1303.pObj) [1]);
  (Wrd1305.pObj) = (OBJECT_ADDRESS (Wrd1302.Obj));
  (Wrd1304.Obj) = ((Wrd1305.pObj) [1]);
  (Wrd1307.pObj) = (OBJECT_ADDRESS (Wrd1304.Obj));
  (Wrd1306.Obj) = ((Wrd1307.pObj) [0]);
  (Wrd1308.Obj) = (Rsp [3]);
  if (! ((Wrd1308.Obj) == (Wrd1306.Obj)))
    goto label_419;
  (Wrd1318.Obj) = (Rsp [0]);
  (Wrd1319.uLng) = (OBJECT_TYPE (Wrd1318.Obj));
  if (! ((Wrd1319.uLng) == 62))
    goto label_464;
  (Wrd1315.pObj) = (OBJECT_ADDRESS (Wrd1318.Obj));
  (Wrd1316.Obj) = ((Wrd1315.pObj) [0]);
  (Wrd1317.Lng) = (FIXNUM_TO_LONG (Wrd1316.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd1317.Lng))))
    goto label_464;
  (Wrd1311.Obj) = ((Wrd1315.pObj) [3]);
  (* (--Rsp)) = (Wrd1311.Obj);

DEFLABEL (label_463)
  (Wrd1334.Obj) = (Rsp [1]);
  (Wrd1335.uLng) = (OBJECT_TYPE (Wrd1334.Obj));
  if (! ((Wrd1335.uLng) == 62))
    goto label_462;
  (Wrd1331.pObj) = (OBJECT_ADDRESS (Wrd1334.Obj));
  (Wrd1332.Obj) = ((Wrd1331.pObj) [0]);
  (Wrd1333.Lng) = (FIXNUM_TO_LONG (Wrd1332.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd1333.Lng))))
    goto label_462;
  (Wrd1325.Obj) = ((Wrd1331.pObj) [2]);

DEFLABEL (label_461)
  (Wrd1352.Obj) = (Rsp [5]);
  (Wrd1353.uLng) = (OBJECT_TYPE (Wrd1352.Obj));
  if (! ((Wrd1353.uLng) == 62))
    goto label_460;
  (Wrd1346.uLng) = (OBJECT_TYPE (Wrd1325.Obj));
  if (! ((Wrd1346.uLng) == 26))
    goto label_460;
  (Wrd1347.Lng) = (FIXNUM_TO_LONG (Wrd1325.Obj));
  (Wrd1349.pObj) = (OBJECT_ADDRESS (Wrd1352.Obj));
  (Wrd1350.Obj) = ((Wrd1349.pObj) [0]);
  (Wrd1351.Lng) = (FIXNUM_TO_LONG (Wrd1350.Obj));
  if (! (((unsigned long) (Wrd1347.Lng)) < ((unsigned long) (Wrd1351.Lng))))
    goto label_460;
  (Wrd1341.uLng) = (OBJECT_DATUM (Wrd1325.Obj));
  (Wrd1344.pObj) = (& ((Wrd1349.pObj) [(Wrd1341.Lng)]));
  (Wrd1345.Obj) = ((Wrd1344.pObj) [1]);
  (* (--Rsp)) = (Wrd1345.Obj);

DEFLABEL (label_459)
  (Wrd1368.Obj) = (Rsp [2]);
  (Wrd1369.uLng) = (OBJECT_TYPE (Wrd1368.Obj));
  if (! ((Wrd1369.uLng) == 62))
    goto label_458;
  (Wrd1365.pObj) = (OBJECT_ADDRESS (Wrd1368.Obj));
  (Wrd1366.Obj) = ((Wrd1365.pObj) [0]);
  (Wrd1367.Lng) = (FIXNUM_TO_LONG (Wrd1366.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd1367.Lng))))
    goto label_458;
  (Wrd1359.Obj) = ((Wrd1365.pObj) [2]);

DEFLABEL (label_457)
  (Wrd1386.Obj) = (Rsp [5]);
  (Wrd1387.uLng) = (OBJECT_TYPE (Wrd1386.Obj));
  if (! ((Wrd1387.uLng) == 62))
    goto label_456;
  (Wrd1380.uLng) = (OBJECT_TYPE (Wrd1359.Obj));
  if (! ((Wrd1380.uLng) == 26))
    goto label_456;
  (Wrd1381.Lng) = (FIXNUM_TO_LONG (Wrd1359.Obj));
  (Wrd1383.pObj) = (OBJECT_ADDRESS (Wrd1386.Obj));
  (Wrd1384.Obj) = ((Wrd1383.pObj) [0]);
  (Wrd1385.Lng) = (FIXNUM_TO_LONG (Wrd1384.Obj));
  if (! (((unsigned long) (Wrd1381.Lng)) < ((unsigned long) (Wrd1385.Lng))))
    goto label_456;
  (Wrd1376.uLng) = (OBJECT_DATUM (Wrd1359.Obj));
  (Wrd1379.pObj) = (& ((Wrd1383.pObj) [(Wrd1376.Lng)]));
  (Wrd1375.Obj) = ((Wrd1379.pObj) [1]);

DEFLABEL (label_455)
  (Wrd1393.Obj) = (* (Rsp++));
  (Wrd1394.Lng) = (FIXNUM_TO_LONG (Wrd1375.Obj));
  (Wrd1395.Lng) = (FIXNUM_TO_LONG (Wrd1393.Obj));
  (Wrd1396.Lng) = ((Wrd1394.Lng) + (Wrd1395.Lng));
  (Wrd1397.Obj) = (LONG_TO_FIXNUM (Wrd1396.Lng));
  (* (--Rsp)) = (Wrd1397.Obj);
  (Wrd1407.Obj) = (Rsp [2]);
  (Wrd1408.uLng) = (OBJECT_TYPE (Wrd1407.Obj));
  if (! ((Wrd1408.uLng) == 62))
    goto label_454;
  (Wrd1404.pObj) = (OBJECT_ADDRESS (Wrd1407.Obj));
  (Wrd1405.Obj) = ((Wrd1404.pObj) [0]);
  (Wrd1406.Lng) = (FIXNUM_TO_LONG (Wrd1405.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd1406.Lng))))
    goto label_454;
  (Wrd1398.Obj) = ((Wrd1404.pObj) [2]);

DEFLABEL (label_453)
  (Wrd1425.Obj) = (Rsp [4]);
  (Wrd1426.uLng) = (OBJECT_TYPE (Wrd1425.Obj));
  if (! ((Wrd1426.uLng) == 62))
    goto label_452;
  (Wrd1419.uLng) = (OBJECT_TYPE (Wrd1398.Obj));
  if (! ((Wrd1419.uLng) == 26))
    goto label_452;
  (Wrd1420.Lng) = (FIXNUM_TO_LONG (Wrd1398.Obj));
  (Wrd1422.pObj) = (OBJECT_ADDRESS (Wrd1425.Obj));
  (Wrd1423.Obj) = ((Wrd1422.pObj) [0]);
  (Wrd1424.Lng) = (FIXNUM_TO_LONG (Wrd1423.Obj));
  if (! (((unsigned long) (Wrd1420.Lng)) < ((unsigned long) (Wrd1424.Lng))))
    goto label_452;
  (Wrd1414.uLng) = (OBJECT_DATUM (Wrd1398.Obj));
  (Wrd1417.pObj) = (& ((Wrd1422.pObj) [(Wrd1414.Lng)]));
  (Wrd1418.Obj) = ((Wrd1417.pObj) [1]);
  (* (--Rsp)) = (Wrd1418.Obj);

DEFLABEL (label_451)
  (Wrd1441.Obj) = (Rsp [3]);
  (Wrd1442.uLng) = (OBJECT_TYPE (Wrd1441.Obj));
  if (! ((Wrd1442.uLng) == 62))
    goto label_450;
  (Wrd1438.pObj) = (OBJECT_ADDRESS (Wrd1441.Obj));
  (Wrd1439.Obj) = ((Wrd1438.pObj) [0]);
  (Wrd1440.Lng) = (FIXNUM_TO_LONG (Wrd1439.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd1440.Lng))))
    goto label_450;
  (Wrd1432.Obj) = ((Wrd1438.pObj) [2]);

DEFLABEL (label_449)
  (Wrd1459.Obj) = (Rsp [4]);
  (Wrd1460.uLng) = (OBJECT_TYPE (Wrd1459.Obj));
  if (! ((Wrd1460.uLng) == 62))
    goto label_448;
  (Wrd1453.uLng) = (OBJECT_TYPE (Wrd1432.Obj));
  if (! ((Wrd1453.uLng) == 26))
    goto label_448;
  (Wrd1454.Lng) = (FIXNUM_TO_LONG (Wrd1432.Obj));
  (Wrd1456.pObj) = (OBJECT_ADDRESS (Wrd1459.Obj));
  (Wrd1457.Obj) = ((Wrd1456.pObj) [0]);
  (Wrd1458.Lng) = (FIXNUM_TO_LONG (Wrd1457.Obj));
  if (! (((unsigned long) (Wrd1454.Lng)) < ((unsigned long) (Wrd1458.Lng))))
    goto label_448;
  (Wrd1449.uLng) = (OBJECT_DATUM (Wrd1432.Obj));
  (Wrd1452.pObj) = (& ((Wrd1456.pObj) [(Wrd1449.Lng)]));
  (Wrd1448.Obj) = ((Wrd1452.pObj) [1]);

DEFLABEL (label_447)
  (Wrd1466.Obj) = (* (Rsp++));
  (Wrd1468.Lng) = (FIXNUM_TO_LONG (Wrd1448.Obj));
  (Wrd1469.Lng) = (FIXNUM_TO_LONG (Wrd1466.Obj));
  (Wrd1470.Lng) = ((Wrd1468.Lng) + (Wrd1469.Lng));
  (Wrd1471.Obj) = (* (Rsp++));
  Wrd1473 = Wrd1470;
  (Wrd1474.Lng) = (FIXNUM_TO_LONG (Wrd1471.Obj));
  (Wrd1475.Lng) = ((Wrd1473.Lng) + (Wrd1474.Lng));
  (Wrd1476.Obj) = (* (Rsp++));
  Wrd1477 = Wrd1475;
  (Wrd1478.Lng) = (FIXNUM_TO_LONG (Wrd1476.Obj));
  (Wrd1479.Lng) = ((Wrd1477.Lng) & (Wrd1478.Lng));
  (Wrd1480.Obj) = (LONG_TO_FIXNUM (Wrd1479.Lng));
  (* (--Rsp)) = (Wrd1480.Obj);
  (Wrd1490.Obj) = (Rsp [1]);
  (Wrd1491.uLng) = (OBJECT_TYPE (Wrd1490.Obj));
  if (! ((Wrd1491.uLng) == 62))
    goto label_446;
  (Wrd1487.pObj) = (OBJECT_ADDRESS (Wrd1490.Obj));
  (Wrd1488.Obj) = ((Wrd1487.pObj) [0]);
  (Wrd1489.Lng) = (FIXNUM_TO_LONG (Wrd1488.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd1489.Lng))))
    goto label_446;
  (Wrd1481.Obj) = ((Wrd1487.pObj) [6]);

DEFLABEL (label_445)
  (Wrd1497.Obj) = (* (Rsp++));
  (Wrd1507.uLng) = (OBJECT_TYPE (Wrd1481.Obj));
  if (! ((Wrd1507.uLng) == 10))
    goto label_444;
  (Wrd1502.uLng) = (OBJECT_TYPE (Wrd1497.Obj));
  if (! ((Wrd1502.uLng) == 26))
    goto label_444;
  (Wrd1503.Lng) = (FIXNUM_TO_LONG (Wrd1497.Obj));
  (Wrd1504.pObj) = (OBJECT_ADDRESS (Wrd1481.Obj));
  (Wrd1505.Obj) = ((Wrd1504.pObj) [0]);
  (Wrd1506.Lng) = (FIXNUM_TO_LONG (Wrd1505.Obj));
  if (! (((unsigned long) (Wrd1503.Lng)) < ((unsigned long) (Wrd1506.Lng))))
    goto label_444;
  (Wrd1499.uLng) = (OBJECT_DATUM (Wrd1497.Obj));
  (Wrd1501.pObj) = (& ((Wrd1504.pObj) [(Wrd1499.Lng)]));
  (Wrd1498.Obj) = ((Wrd1501.pObj) [1]);

DEFLABEL (label_443)
  (Wrd1514.pObj) = (OBJECT_ADDRESS (Wrd1498.Obj));
  (Wrd1513.Obj) = ((Wrd1514.pObj) [1]);
  (Wrd1516.pObj) = (OBJECT_ADDRESS (Wrd1513.Obj));
  (Wrd1515.Obj) = ((Wrd1516.pObj) [1]);
  (Wrd1518.pObj) = (OBJECT_ADDRESS (Wrd1515.Obj));
  (Wrd1517.Obj) = ((Wrd1518.pObj) [1]);
  (Wrd1520.pObj) = (OBJECT_ADDRESS (Wrd1517.Obj));
  (Wrd1519.Obj) = ((Wrd1520.pObj) [0]);
  (Wrd1521.Obj) = (Rsp [4]);
  if (! ((Wrd1521.Obj) == (Wrd1519.Obj)))
    goto label_419;
  (Wrd1531.Obj) = (Rsp [0]);
  (Wrd1532.uLng) = (OBJECT_TYPE (Wrd1531.Obj));
  if (! ((Wrd1532.uLng) == 62))
    goto label_442;
  (Wrd1528.pObj) = (OBJECT_ADDRESS (Wrd1531.Obj));
  (Wrd1529.Obj) = ((Wrd1528.pObj) [0]);
  (Wrd1530.Lng) = (FIXNUM_TO_LONG (Wrd1529.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd1530.Lng))))
    goto label_442;
  (Wrd1524.Obj) = ((Wrd1528.pObj) [3]);
  (* (--Rsp)) = (Wrd1524.Obj);

DEFLABEL (label_441)
  (Wrd1547.Obj) = (Rsp [1]);
  (Wrd1548.uLng) = (OBJECT_TYPE (Wrd1547.Obj));
  if (! ((Wrd1548.uLng) == 62))
    goto label_440;
  (Wrd1544.pObj) = (OBJECT_ADDRESS (Wrd1547.Obj));
  (Wrd1545.Obj) = ((Wrd1544.pObj) [0]);
  (Wrd1546.Lng) = (FIXNUM_TO_LONG (Wrd1545.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd1546.Lng))))
    goto label_440;
  (Wrd1538.Obj) = ((Wrd1544.pObj) [2]);

DEFLABEL (label_439)
  (Wrd1565.Obj) = (Rsp [5]);
  (Wrd1566.uLng) = (OBJECT_TYPE (Wrd1565.Obj));
  if (! ((Wrd1566.uLng) == 62))
    goto label_438;
  (Wrd1559.uLng) = (OBJECT_TYPE (Wrd1538.Obj));
  if (! ((Wrd1559.uLng) == 26))
    goto label_438;
  (Wrd1560.Lng) = (FIXNUM_TO_LONG (Wrd1538.Obj));
  (Wrd1562.pObj) = (OBJECT_ADDRESS (Wrd1565.Obj));
  (Wrd1563.Obj) = ((Wrd1562.pObj) [0]);
  (Wrd1564.Lng) = (FIXNUM_TO_LONG (Wrd1563.Obj));
  if (! (((unsigned long) (Wrd1560.Lng)) < ((unsigned long) (Wrd1564.Lng))))
    goto label_438;
  (Wrd1554.uLng) = (OBJECT_DATUM (Wrd1538.Obj));
  (Wrd1557.pObj) = (& ((Wrd1562.pObj) [(Wrd1554.Lng)]));
  (Wrd1558.Obj) = ((Wrd1557.pObj) [1]);
  (* (--Rsp)) = (Wrd1558.Obj);

DEFLABEL (label_437)
  (Wrd1581.Obj) = (Rsp [2]);
  (Wrd1582.uLng) = (OBJECT_TYPE (Wrd1581.Obj));
  if (! ((Wrd1582.uLng) == 62))
    goto label_436;
  (Wrd1578.pObj) = (OBJECT_ADDRESS (Wrd1581.Obj));
  (Wrd1579.Obj) = ((Wrd1578.pObj) [0]);
  (Wrd1580.Lng) = (FIXNUM_TO_LONG (Wrd1579.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd1580.Lng))))
    goto label_436;
  (Wrd1572.Obj) = ((Wrd1578.pObj) [2]);

DEFLABEL (label_435)
  (Wrd1599.Obj) = (Rsp [5]);
  (Wrd1600.uLng) = (OBJECT_TYPE (Wrd1599.Obj));
  if (! ((Wrd1600.uLng) == 62))
    goto label_434;
  (Wrd1593.uLng) = (OBJECT_TYPE (Wrd1572.Obj));
  if (! ((Wrd1593.uLng) == 26))
    goto label_434;
  (Wrd1594.Lng) = (FIXNUM_TO_LONG (Wrd1572.Obj));
  (Wrd1596.pObj) = (OBJECT_ADDRESS (Wrd1599.Obj));
  (Wrd1597.Obj) = ((Wrd1596.pObj) [0]);
  (Wrd1598.Lng) = (FIXNUM_TO_LONG (Wrd1597.Obj));
  if (! (((unsigned long) (Wrd1594.Lng)) < ((unsigned long) (Wrd1598.Lng))))
    goto label_434;
  (Wrd1589.uLng) = (OBJECT_DATUM (Wrd1572.Obj));
  (Wrd1592.pObj) = (& ((Wrd1596.pObj) [(Wrd1589.Lng)]));
  (Wrd1588.Obj) = ((Wrd1592.pObj) [1]);

DEFLABEL (label_433)
  (Wrd1606.Obj) = (* (Rsp++));
  (Wrd1607.Lng) = (FIXNUM_TO_LONG (Wrd1588.Obj));
  (Wrd1608.Lng) = (FIXNUM_TO_LONG (Wrd1606.Obj));
  (Wrd1609.Lng) = ((Wrd1607.Lng) + (Wrd1608.Lng));
  (Wrd1610.Obj) = (LONG_TO_FIXNUM (Wrd1609.Lng));
  (* (--Rsp)) = (Wrd1610.Obj);
  (Wrd1620.Obj) = (Rsp [2]);
  (Wrd1621.uLng) = (OBJECT_TYPE (Wrd1620.Obj));
  if (! ((Wrd1621.uLng) == 62))
    goto label_432;
  (Wrd1617.pObj) = (OBJECT_ADDRESS (Wrd1620.Obj));
  (Wrd1618.Obj) = ((Wrd1617.pObj) [0]);
  (Wrd1619.Lng) = (FIXNUM_TO_LONG (Wrd1618.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd1619.Lng))))
    goto label_432;
  (Wrd1611.Obj) = ((Wrd1617.pObj) [2]);

DEFLABEL (label_431)
  (Wrd1638.Obj) = (Rsp [4]);
  (Wrd1639.uLng) = (OBJECT_TYPE (Wrd1638.Obj));
  if (! ((Wrd1639.uLng) == 62))
    goto label_430;
  (Wrd1632.uLng) = (OBJECT_TYPE (Wrd1611.Obj));
  if (! ((Wrd1632.uLng) == 26))
    goto label_430;
  (Wrd1633.Lng) = (FIXNUM_TO_LONG (Wrd1611.Obj));
  (Wrd1635.pObj) = (OBJECT_ADDRESS (Wrd1638.Obj));
  (Wrd1636.Obj) = ((Wrd1635.pObj) [0]);
  (Wrd1637.Lng) = (FIXNUM_TO_LONG (Wrd1636.Obj));
  if (! (((unsigned long) (Wrd1633.Lng)) < ((unsigned long) (Wrd1637.Lng))))
    goto label_430;
  (Wrd1627.uLng) = (OBJECT_DATUM (Wrd1611.Obj));
  (Wrd1630.pObj) = (& ((Wrd1635.pObj) [(Wrd1627.Lng)]));
  (Wrd1631.Obj) = ((Wrd1630.pObj) [1]);
  (* (--Rsp)) = (Wrd1631.Obj);

DEFLABEL (label_429)
  (Wrd1654.Obj) = (Rsp [3]);
  (Wrd1655.uLng) = (OBJECT_TYPE (Wrd1654.Obj));
  if (! ((Wrd1655.uLng) == 62))
    goto label_428;
  (Wrd1651.pObj) = (OBJECT_ADDRESS (Wrd1654.Obj));
  (Wrd1652.Obj) = ((Wrd1651.pObj) [0]);
  (Wrd1653.Lng) = (FIXNUM_TO_LONG (Wrd1652.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd1653.Lng))))
    goto label_428;
  (Wrd1645.Obj) = ((Wrd1651.pObj) [2]);

DEFLABEL (label_427)
  (Wrd1672.Obj) = (Rsp [4]);
  (Wrd1673.uLng) = (OBJECT_TYPE (Wrd1672.Obj));
  if (! ((Wrd1673.uLng) == 62))
    goto label_426;
  (Wrd1666.uLng) = (OBJECT_TYPE (Wrd1645.Obj));
  if (! ((Wrd1666.uLng) == 26))
    goto label_426;
  (Wrd1667.Lng) = (FIXNUM_TO_LONG (Wrd1645.Obj));
  (Wrd1669.pObj) = (OBJECT_ADDRESS (Wrd1672.Obj));
  (Wrd1670.Obj) = ((Wrd1669.pObj) [0]);
  (Wrd1671.Lng) = (FIXNUM_TO_LONG (Wrd1670.Obj));
  if (! (((unsigned long) (Wrd1667.Lng)) < ((unsigned long) (Wrd1671.Lng))))
    goto label_426;
  (Wrd1662.uLng) = (OBJECT_DATUM (Wrd1645.Obj));
  (Wrd1665.pObj) = (& ((Wrd1669.pObj) [(Wrd1662.Lng)]));
  (Wrd1661.Obj) = ((Wrd1665.pObj) [1]);

DEFLABEL (label_425)
  (Wrd1679.Obj) = (* (Rsp++));
  (Wrd1681.Lng) = (FIXNUM_TO_LONG (Wrd1661.Obj));
  (Wrd1682.Lng) = (FIXNUM_TO_LONG (Wrd1679.Obj));
  (Wrd1683.Lng) = ((Wrd1681.Lng) + (Wrd1682.Lng));
  (Wrd1684.Obj) = (* (Rsp++));
  Wrd1686 = Wrd1683;
  (Wrd1687.Lng) = (FIXNUM_TO_LONG (Wrd1684.Obj));
  (Wrd1688.Lng) = ((Wrd1686.Lng) + (Wrd1687.Lng));
  (Wrd1689.Obj) = (* (Rsp++));
  Wrd1691 = Wrd1688;
  (Wrd1692.Lng) = (FIXNUM_TO_LONG (Wrd1689.Obj));
  (Wrd1693.Lng) = ((Wrd1691.Lng) & (Wrd1692.Lng));
  (Wrd1690.Obj) = (LONG_TO_FIXNUM (Wrd1693.Lng));
  (Rsp [4]) = (Wrd1690.Obj);
  (Wrd1703.Obj) = (Rsp [0]);
  (Wrd1704.uLng) = (OBJECT_TYPE (Wrd1703.Obj));
  if (! ((Wrd1704.uLng) == 62))
    goto label_424;
  (Wrd1700.pObj) = (OBJECT_ADDRESS (Wrd1703.Obj));
  (Wrd1701.Obj) = ((Wrd1700.pObj) [0]);
  (Wrd1702.Lng) = (FIXNUM_TO_LONG (Wrd1701.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd1702.Lng))))
    goto label_424;
  (Wrd1694.Obj) = ((Wrd1700.pObj) [7]);

DEFLABEL (label_423)
  (Rsp [3]) = (Wrd1694.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd1725.Obj) = (Rsp [0]);
  (Wrd1726.uLng) = (OBJECT_TYPE (Wrd1725.Obj));
  if (! ((Wrd1726.uLng) == 10))
    goto label_373;
  (Wrd1717.Obj) = (Rsp [1]);
  (Wrd1718.uLng) = (OBJECT_TYPE (Wrd1717.Obj));
  if (! ((Wrd1718.uLng) == 26))
    goto label_373;
  (Wrd1720.Lng) = (FIXNUM_TO_LONG (Wrd1717.Obj));
  (Wrd1722.pObj) = (OBJECT_ADDRESS (Wrd1725.Obj));
  (Wrd1723.Obj) = ((Wrd1722.pObj) [0]);
  (Wrd1724.Lng) = (FIXNUM_TO_LONG (Wrd1723.Obj));
  if (! (((unsigned long) (Wrd1720.Lng)) < ((unsigned long) (Wrd1724.Lng))))
    goto label_373;
  (Wrd1713.uLng) = (OBJECT_DATUM (Wrd1717.Obj));
  (Wrd1716.pObj) = (& ((Wrd1722.pObj) [(Wrd1713.Lng)]));
  (Wrd1711.Obj) = ((Wrd1716.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd1711.Obj);

DEFLABEL (label_422)
  (Wrd1727.Obj) = (Rsp [0]);
  if ((Wrd1727.Obj) == ((SCHEME_OBJECT) 0))
    goto label_421;
  (Rsp [1]) = (Wrd1727.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_421)
  (Wrd1734.Obj) = (Rsp [5]);
  (Wrd1735.Obj) = (current_block [OBJECT_32_0]);
  (* (Rhp++)) = (Wrd1734.Obj);
  (* (Rhp++)) = (Wrd1735.Obj);
  (Wrd1733.pObj) = (& (Rhp [-2]));
  (Wrd1731.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd1733.pObj)));
  (Wrd1739.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd1739.Obj);
  (* (Rhp++)) = (Wrd1731.Obj);
  (Wrd1738.pObj) = (& (Rhp [-2]));
  (Wrd1736.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd1738.pObj)));
  (Wrd1743.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd1743.Obj);
  (* (Rhp++)) = (Wrd1736.Obj);
  (Wrd1742.pObj) = (& (Rhp [-2]));
  (Wrd1740.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd1742.pObj)));
  (Wrd1747.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd1747.Obj);
  (* (Rhp++)) = (Wrd1740.Obj);
  (Wrd1746.pObj) = (& (Rhp [-2]));
  (Wrd1744.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd1746.pObj)));
  (Rsp [5]) = (Wrd1744.Obj);
  (Wrd1749.Obj) = (Rsp [1]);
  (Wrd1750.pObj) = (OBJECT_ADDRESS (Wrd1749.Obj));
  (Wrd1748.Obj) = ((Wrd1750.pObj) [2]);
  (Rsp [4]) = (Wrd1748.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_113]));

DEFLABEL (label_424)
  (Wrd1705.Obj) = (Rsp [0]);
  (Wrd1706.Obj) = (current_block [OBJECT_32_7]);
  (Wrd1709.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_112]))));
  (* (--Rsp)) = (Wrd1709.Obj);
  (* (--Rsp)) = (Wrd1706.Obj);
  (* (--Rsp)) = (Wrd1705.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_327)
  (Wrd1694.Obj) = Rvl;
  goto label_423;

DEFLABEL (label_426)
  (Wrd1674.Obj) = (Rsp [4]);
  (Wrd1678.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_111]))));
  (* (--Rsp)) = (Wrd1678.Obj);
  (* (--Rsp)) = (Wrd1645.Obj);
  (* (--Rsp)) = (Wrd1674.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_326)
  (Wrd1661.Obj) = Rvl;
  goto label_425;

DEFLABEL (label_428)
  (Wrd1656.Obj) = (Rsp [3]);
  (Wrd1657.Obj) = (current_block [OBJECT_32_12]);
  (Wrd1660.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_110]))));
  (* (--Rsp)) = (Wrd1660.Obj);
  (* (--Rsp)) = (Wrd1657.Obj);
  (* (--Rsp)) = (Wrd1656.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_325)
  (Wrd1645.Obj) = Rvl;
  goto label_427;

DEFLABEL (label_430)
  (Wrd1640.Obj) = (Rsp [4]);
  (Wrd1644.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_109]))));
  (* (--Rsp)) = (Wrd1644.Obj);
  (* (--Rsp)) = (Wrd1611.Obj);
  (* (--Rsp)) = (Wrd1640.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_324)
  (* (--Rsp)) = Rvl;
  goto label_429;

DEFLABEL (label_432)
  (Wrd1622.Obj) = (Rsp [2]);
  (Wrd1623.Obj) = (current_block [OBJECT_32_12]);
  (Wrd1626.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_108]))));
  (* (--Rsp)) = (Wrd1626.Obj);
  (* (--Rsp)) = (Wrd1623.Obj);
  (* (--Rsp)) = (Wrd1622.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_323)
  (Wrd1611.Obj) = Rvl;
  goto label_431;

DEFLABEL (label_434)
  (Wrd1601.Obj) = (Rsp [5]);
  (Wrd1605.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_107]))));
  (* (--Rsp)) = (Wrd1605.Obj);
  (* (--Rsp)) = (Wrd1572.Obj);
  (* (--Rsp)) = (Wrd1601.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_322)
  (Wrd1588.Obj) = Rvl;
  goto label_433;

DEFLABEL (label_436)
  (Wrd1583.Obj) = (Rsp [2]);
  (Wrd1584.Obj) = (current_block [OBJECT_32_12]);
  (Wrd1587.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_106]))));
  (* (--Rsp)) = (Wrd1587.Obj);
  (* (--Rsp)) = (Wrd1584.Obj);
  (* (--Rsp)) = (Wrd1583.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_321)
  (Wrd1572.Obj) = Rvl;
  goto label_435;

DEFLABEL (label_438)
  (Wrd1567.Obj) = (Rsp [5]);
  (Wrd1571.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_105]))));
  (* (--Rsp)) = (Wrd1571.Obj);
  (* (--Rsp)) = (Wrd1538.Obj);
  (* (--Rsp)) = (Wrd1567.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_320)
  (* (--Rsp)) = Rvl;
  goto label_437;

DEFLABEL (label_440)
  (Wrd1549.Obj) = (Rsp [1]);
  (Wrd1550.Obj) = (current_block [OBJECT_32_12]);
  (Wrd1553.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_104]))));
  (* (--Rsp)) = (Wrd1553.Obj);
  (* (--Rsp)) = (Wrd1550.Obj);
  (* (--Rsp)) = (Wrd1549.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_319)
  (Wrd1538.Obj) = Rvl;
  goto label_439;

DEFLABEL (label_442)
  (Wrd1533.Obj) = (Rsp [0]);
  (Wrd1534.Obj) = (current_block [OBJECT_32_11]);
  (Wrd1537.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_103]))));
  (* (--Rsp)) = (Wrd1537.Obj);
  (* (--Rsp)) = (Wrd1534.Obj);
  (* (--Rsp)) = (Wrd1533.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_318)
  (* (--Rsp)) = Rvl;
  goto label_441;

DEFLABEL (label_444)
  (Wrd1512.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_102]))));
  (* (--Rsp)) = (Wrd1512.Obj);
  (* (--Rsp)) = (Wrd1497.Obj);
  (* (--Rsp)) = (Wrd1481.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_317)
  (Wrd1498.Obj) = Rvl;
  goto label_443;

DEFLABEL (label_446)
  (Wrd1492.Obj) = (Rsp [1]);
  (Wrd1493.Obj) = (current_block [OBJECT_32_5]);
  (Wrd1496.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_101]))));
  (* (--Rsp)) = (Wrd1496.Obj);
  (* (--Rsp)) = (Wrd1493.Obj);
  (* (--Rsp)) = (Wrd1492.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_316)
  (Wrd1481.Obj) = Rvl;
  goto label_445;

DEFLABEL (label_448)
  (Wrd1461.Obj) = (Rsp [4]);
  (Wrd1465.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_100]))));
  (* (--Rsp)) = (Wrd1465.Obj);
  (* (--Rsp)) = (Wrd1432.Obj);
  (* (--Rsp)) = (Wrd1461.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_315)
  (Wrd1448.Obj) = Rvl;
  goto label_447;

DEFLABEL (label_450)
  (Wrd1443.Obj) = (Rsp [3]);
  (Wrd1444.Obj) = (current_block [OBJECT_32_12]);
  (Wrd1447.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_99]))));
  (* (--Rsp)) = (Wrd1447.Obj);
  (* (--Rsp)) = (Wrd1444.Obj);
  (* (--Rsp)) = (Wrd1443.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_314)
  (Wrd1432.Obj) = Rvl;
  goto label_449;

DEFLABEL (label_452)
  (Wrd1427.Obj) = (Rsp [4]);
  (Wrd1431.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_98]))));
  (* (--Rsp)) = (Wrd1431.Obj);
  (* (--Rsp)) = (Wrd1398.Obj);
  (* (--Rsp)) = (Wrd1427.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_313)
  (* (--Rsp)) = Rvl;
  goto label_451;

DEFLABEL (label_454)
  (Wrd1409.Obj) = (Rsp [2]);
  (Wrd1410.Obj) = (current_block [OBJECT_32_12]);
  (Wrd1413.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_97]))));
  (* (--Rsp)) = (Wrd1413.Obj);
  (* (--Rsp)) = (Wrd1410.Obj);
  (* (--Rsp)) = (Wrd1409.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_312)
  (Wrd1398.Obj) = Rvl;
  goto label_453;

DEFLABEL (label_456)
  (Wrd1388.Obj) = (Rsp [5]);
  (Wrd1392.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_96]))));
  (* (--Rsp)) = (Wrd1392.Obj);
  (* (--Rsp)) = (Wrd1359.Obj);
  (* (--Rsp)) = (Wrd1388.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_311)
  (Wrd1375.Obj) = Rvl;
  goto label_455;

DEFLABEL (label_458)
  (Wrd1370.Obj) = (Rsp [2]);
  (Wrd1371.Obj) = (current_block [OBJECT_32_12]);
  (Wrd1374.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_95]))));
  (* (--Rsp)) = (Wrd1374.Obj);
  (* (--Rsp)) = (Wrd1371.Obj);
  (* (--Rsp)) = (Wrd1370.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_310)
  (Wrd1359.Obj) = Rvl;
  goto label_457;

DEFLABEL (label_460)
  (Wrd1354.Obj) = (Rsp [5]);
  (Wrd1358.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_94]))));
  (* (--Rsp)) = (Wrd1358.Obj);
  (* (--Rsp)) = (Wrd1325.Obj);
  (* (--Rsp)) = (Wrd1354.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_309)
  (* (--Rsp)) = Rvl;
  goto label_459;

DEFLABEL (label_462)
  (Wrd1336.Obj) = (Rsp [1]);
  (Wrd1337.Obj) = (current_block [OBJECT_32_12]);
  (Wrd1340.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_93]))));
  (* (--Rsp)) = (Wrd1340.Obj);
  (* (--Rsp)) = (Wrd1337.Obj);
  (* (--Rsp)) = (Wrd1336.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_308)
  (Wrd1325.Obj) = Rvl;
  goto label_461;

DEFLABEL (label_464)
  (Wrd1320.Obj) = (Rsp [0]);
  (Wrd1321.Obj) = (current_block [OBJECT_32_11]);
  (Wrd1324.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_92]))));
  (* (--Rsp)) = (Wrd1324.Obj);
  (* (--Rsp)) = (Wrd1321.Obj);
  (* (--Rsp)) = (Wrd1320.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_307)
  (* (--Rsp)) = Rvl;
  goto label_463;

DEFLABEL (label_466)
  (Wrd1301.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_91]))));
  (* (--Rsp)) = (Wrd1301.Obj);
  (* (--Rsp)) = (Wrd1286.Obj);
  (* (--Rsp)) = (Wrd1270.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_306)
  (Wrd1287.Obj) = Rvl;
  goto label_465;

DEFLABEL (label_468)
  (Wrd1281.Obj) = (Rsp [1]);
  (Wrd1282.Obj) = (current_block [OBJECT_32_5]);
  (Wrd1285.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_90]))));
  (* (--Rsp)) = (Wrd1285.Obj);
  (* (--Rsp)) = (Wrd1282.Obj);
  (* (--Rsp)) = (Wrd1281.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_305)
  (Wrd1270.Obj) = Rvl;
  goto label_467;

DEFLABEL (label_470)
  (Wrd1250.Obj) = (Rsp [4]);
  (Wrd1254.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_89]))));
  (* (--Rsp)) = (Wrd1254.Obj);
  (* (--Rsp)) = (Wrd1221.Obj);
  (* (--Rsp)) = (Wrd1250.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_304)
  (Wrd1237.Obj) = Rvl;
  goto label_469;

DEFLABEL (label_472)
  (Wrd1232.Obj) = (Rsp [3]);
  (Wrd1233.Obj) = (current_block [OBJECT_32_12]);
  (Wrd1236.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_88]))));
  (* (--Rsp)) = (Wrd1236.Obj);
  (* (--Rsp)) = (Wrd1233.Obj);
  (* (--Rsp)) = (Wrd1232.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_303)
  (Wrd1221.Obj) = Rvl;
  goto label_471;

DEFLABEL (label_474)
  (Wrd1216.Obj) = (Rsp [4]);
  (Wrd1220.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_87]))));
  (* (--Rsp)) = (Wrd1220.Obj);
  (* (--Rsp)) = (Wrd1187.Obj);
  (* (--Rsp)) = (Wrd1216.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_302)
  (* (--Rsp)) = Rvl;
  goto label_473;

DEFLABEL (label_476)
  (Wrd1198.Obj) = (Rsp [2]);
  (Wrd1199.Obj) = (current_block [OBJECT_32_12]);
  (Wrd1202.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_86]))));
  (* (--Rsp)) = (Wrd1202.Obj);
  (* (--Rsp)) = (Wrd1199.Obj);
  (* (--Rsp)) = (Wrd1198.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_301)
  (Wrd1187.Obj) = Rvl;
  goto label_475;

DEFLABEL (label_478)
  (Wrd1177.Obj) = (Rsp [5]);
  (Wrd1181.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_85]))));
  (* (--Rsp)) = (Wrd1181.Obj);
  (* (--Rsp)) = (Wrd1148.Obj);
  (* (--Rsp)) = (Wrd1177.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_300)
  (Wrd1164.Obj) = Rvl;
  goto label_477;

DEFLABEL (label_480)
  (Wrd1159.Obj) = (Rsp [2]);
  (Wrd1160.Obj) = (current_block [OBJECT_32_12]);
  (Wrd1163.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_84]))));
  (* (--Rsp)) = (Wrd1163.Obj);
  (* (--Rsp)) = (Wrd1160.Obj);
  (* (--Rsp)) = (Wrd1159.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_299)
  (Wrd1148.Obj) = Rvl;
  goto label_479;

DEFLABEL (label_482)
  (Wrd1143.Obj) = (Rsp [5]);
  (Wrd1147.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_83]))));
  (* (--Rsp)) = (Wrd1147.Obj);
  (* (--Rsp)) = (Wrd1114.Obj);
  (* (--Rsp)) = (Wrd1143.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_298)
  (* (--Rsp)) = Rvl;
  goto label_481;

DEFLABEL (label_484)
  (Wrd1125.Obj) = (Rsp [1]);
  (Wrd1126.Obj) = (current_block [OBJECT_32_12]);
  (Wrd1129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_82]))));
  (* (--Rsp)) = (Wrd1129.Obj);
  (* (--Rsp)) = (Wrd1126.Obj);
  (* (--Rsp)) = (Wrd1125.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_297)
  (Wrd1114.Obj) = Rvl;
  goto label_483;

DEFLABEL (label_486)
  (Wrd1109.Obj) = (Rsp [0]);
  (Wrd1110.Obj) = (current_block [OBJECT_32_11]);
  (Wrd1113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_81]))));
  (* (--Rsp)) = (Wrd1113.Obj);
  (* (--Rsp)) = (Wrd1110.Obj);
  (* (--Rsp)) = (Wrd1109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_296)
  (* (--Rsp)) = Rvl;
  goto label_485;

DEFLABEL (label_488)
  (Wrd1092.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_80]))));
  (* (--Rsp)) = (Wrd1092.Obj);
  (* (--Rsp)) = (Wrd1077.Obj);
  (* (--Rsp)) = (Wrd1061.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_295)
  (Wrd1078.Obj) = Rvl;
  goto label_487;

DEFLABEL (label_490)
  (Wrd1072.Obj) = (Rsp [1]);
  (Wrd1073.Obj) = (current_block [OBJECT_32_5]);
  (Wrd1076.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_79]))));
  (* (--Rsp)) = (Wrd1076.Obj);
  (* (--Rsp)) = (Wrd1073.Obj);
  (* (--Rsp)) = (Wrd1072.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_294)
  (Wrd1061.Obj) = Rvl;
  goto label_489;

DEFLABEL (label_492)
  (Wrd1041.Obj) = (Rsp [4]);
  (Wrd1045.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_78]))));
  (* (--Rsp)) = (Wrd1045.Obj);
  (* (--Rsp)) = (Wrd1012.Obj);
  (* (--Rsp)) = (Wrd1041.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_293)
  (Wrd1028.Obj) = Rvl;
  goto label_491;

DEFLABEL (label_494)
  (Wrd1023.Obj) = (Rsp [3]);
  (Wrd1024.Obj) = (current_block [OBJECT_32_12]);
  (Wrd1027.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_77]))));
  (* (--Rsp)) = (Wrd1027.Obj);
  (* (--Rsp)) = (Wrd1024.Obj);
  (* (--Rsp)) = (Wrd1023.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_292)
  (Wrd1012.Obj) = Rvl;
  goto label_493;

DEFLABEL (label_496)
  (Wrd1007.Obj) = (Rsp [4]);
  (Wrd1011.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_76]))));
  (* (--Rsp)) = (Wrd1011.Obj);
  (* (--Rsp)) = (Wrd978.Obj);
  (* (--Rsp)) = (Wrd1007.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_291)
  (* (--Rsp)) = Rvl;
  goto label_495;

DEFLABEL (label_498)
  (Wrd989.Obj) = (Rsp [2]);
  (Wrd990.Obj) = (current_block [OBJECT_32_12]);
  (Wrd993.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_75]))));
  (* (--Rsp)) = (Wrd993.Obj);
  (* (--Rsp)) = (Wrd990.Obj);
  (* (--Rsp)) = (Wrd989.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_290)
  (Wrd978.Obj) = Rvl;
  goto label_497;

DEFLABEL (label_500)
  (Wrd968.Obj) = (Rsp [5]);
  (Wrd972.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_74]))));
  (* (--Rsp)) = (Wrd972.Obj);
  (* (--Rsp)) = (Wrd939.Obj);
  (* (--Rsp)) = (Wrd968.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_289)
  (Wrd955.Obj) = Rvl;
  goto label_499;

DEFLABEL (label_502)
  (Wrd950.Obj) = (Rsp [2]);
  (Wrd951.Obj) = (current_block [OBJECT_32_12]);
  (Wrd954.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_73]))));
  (* (--Rsp)) = (Wrd954.Obj);
  (* (--Rsp)) = (Wrd951.Obj);
  (* (--Rsp)) = (Wrd950.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_288)
  (Wrd939.Obj) = Rvl;
  goto label_501;

DEFLABEL (label_504)
  (Wrd934.Obj) = (Rsp [5]);
  (Wrd938.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_72]))));
  (* (--Rsp)) = (Wrd938.Obj);
  (* (--Rsp)) = (Wrd905.Obj);
  (* (--Rsp)) = (Wrd934.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_287)
  (* (--Rsp)) = Rvl;
  goto label_503;

DEFLABEL (label_506)
  (Wrd916.Obj) = (Rsp [1]);
  (Wrd917.Obj) = (current_block [OBJECT_32_12]);
  (Wrd920.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_71]))));
  (* (--Rsp)) = (Wrd920.Obj);
  (* (--Rsp)) = (Wrd917.Obj);
  (* (--Rsp)) = (Wrd916.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_286)
  (Wrd905.Obj) = Rvl;
  goto label_505;

DEFLABEL (label_508)
  (Wrd900.Obj) = (Rsp [0]);
  (Wrd901.Obj) = (current_block [OBJECT_32_11]);
  (Wrd904.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_70]))));
  (* (--Rsp)) = (Wrd904.Obj);
  (* (--Rsp)) = (Wrd901.Obj);
  (* (--Rsp)) = (Wrd900.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_285)
  (* (--Rsp)) = Rvl;
  goto label_507;

DEFLABEL (label_510)
  (Wrd491.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_69]))));
  (* (--Rsp)) = (Wrd491.Obj);
  (* (--Rsp)) = (Wrd476.Obj);
  (* (--Rsp)) = (Wrd460.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_263)
  (Wrd477.Obj) = Rvl;
  goto label_509;

DEFLABEL (label_512)
  (Wrd471.Obj) = (Rsp [1]);
  (Wrd472.Obj) = (current_block [OBJECT_32_5]);
  (Wrd475.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_68]))));
  (* (--Rsp)) = (Wrd475.Obj);
  (* (--Rsp)) = (Wrd472.Obj);
  (* (--Rsp)) = (Wrd471.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_262)
  (Wrd460.Obj) = Rvl;
  goto label_511;

DEFLABEL (label_514)
  (Wrd440.Obj) = (Rsp [4]);
  (Wrd444.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_67]))));
  (* (--Rsp)) = (Wrd444.Obj);
  (* (--Rsp)) = (Wrd411.Obj);
  (* (--Rsp)) = (Wrd440.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_261)
  (Wrd427.Obj) = Rvl;
  goto label_513;

DEFLABEL (label_516)
  (Wrd422.Obj) = (Rsp [3]);
  (Wrd423.Obj) = (current_block [OBJECT_32_12]);
  (Wrd426.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_66]))));
  (* (--Rsp)) = (Wrd426.Obj);
  (* (--Rsp)) = (Wrd423.Obj);
  (* (--Rsp)) = (Wrd422.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_260)
  (Wrd411.Obj) = Rvl;
  goto label_515;

DEFLABEL (label_518)
  (Wrd406.Obj) = (Rsp [4]);
  (Wrd410.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_65]))));
  (* (--Rsp)) = (Wrd410.Obj);
  (* (--Rsp)) = (Wrd377.Obj);
  (* (--Rsp)) = (Wrd406.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_259)
  (* (--Rsp)) = Rvl;
  goto label_517;

DEFLABEL (label_520)
  (Wrd388.Obj) = (Rsp [2]);
  (Wrd389.Obj) = (current_block [OBJECT_32_12]);
  (Wrd392.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_64]))));
  (* (--Rsp)) = (Wrd392.Obj);
  (* (--Rsp)) = (Wrd389.Obj);
  (* (--Rsp)) = (Wrd388.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_258)
  (Wrd377.Obj) = Rvl;
  goto label_519;

DEFLABEL (label_522)
  (Wrd367.Obj) = (Rsp [5]);
  (Wrd371.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_63]))));
  (* (--Rsp)) = (Wrd371.Obj);
  (* (--Rsp)) = (Wrd338.Obj);
  (* (--Rsp)) = (Wrd367.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_257)
  (Wrd354.Obj) = Rvl;
  goto label_521;

DEFLABEL (label_524)
  (Wrd349.Obj) = (Rsp [2]);
  (Wrd350.Obj) = (current_block [OBJECT_32_12]);
  (Wrd353.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_62]))));
  (* (--Rsp)) = (Wrd353.Obj);
  (* (--Rsp)) = (Wrd350.Obj);
  (* (--Rsp)) = (Wrd349.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_256)
  (Wrd338.Obj) = Rvl;
  goto label_523;

DEFLABEL (label_526)
  (Wrd333.Obj) = (Rsp [5]);
  (Wrd337.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_61]))));
  (* (--Rsp)) = (Wrd337.Obj);
  (* (--Rsp)) = (Wrd304.Obj);
  (* (--Rsp)) = (Wrd333.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_255)
  (* (--Rsp)) = Rvl;
  goto label_525;

DEFLABEL (label_528)
  (Wrd315.Obj) = (Rsp [1]);
  (Wrd316.Obj) = (current_block [OBJECT_32_12]);
  (Wrd319.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_60]))));
  (* (--Rsp)) = (Wrd319.Obj);
  (* (--Rsp)) = (Wrd316.Obj);
  (* (--Rsp)) = (Wrd315.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_254)
  (Wrd304.Obj) = Rvl;
  goto label_527;

DEFLABEL (label_530)
  (Wrd299.Obj) = (Rsp [0]);
  (Wrd300.Obj) = (current_block [OBJECT_32_11]);
  (Wrd303.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_59]))));
  (* (--Rsp)) = (Wrd303.Obj);
  (* (--Rsp)) = (Wrd300.Obj);
  (* (--Rsp)) = (Wrd299.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_253)
  (* (--Rsp)) = Rvl;
  goto label_529;

DEFLABEL (label_532)
  (Wrd282.Obj) = (Rsp [5]);
  (Wrd283.pObj) = (OBJECT_ADDRESS (Wrd282.Obj));
  (Wrd281.Obj) = ((Wrd283.pObj) [2]);
  (Wrd284.Obj) = (current_block [OBJECT_32_7]);
  (Wrd287.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_58]))));
  (* (--Rsp)) = (Wrd287.Obj);
  (* (--Rsp)) = (Wrd284.Obj);
  (* (--Rsp)) = (Wrd281.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_252)
  (* (--Rsp)) = Rvl;
  goto label_531;

DEFLABEL (label_535)
  (Wrd217.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd217.Obj);
  (Wrd219.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd218.Obj) = ((Wrd219.pObj) [0]);
  (Wrd222.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd224.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  (Wrd221.Obj) = (MAKE_OBJECT (26, (Wrd224.uLng)));
  (Wrd234.uLng) = (OBJECT_TYPE (Wrd218.Obj));
  if (! ((Wrd234.uLng) == 10))
    goto label_537;
  if (! ((Wrd222.uLng) == 26))
    goto label_537;
  (Wrd230.Lng) = (FIXNUM_TO_LONG (Wrd221.Obj));
  (Wrd231.pObj) = (OBJECT_ADDRESS (Wrd218.Obj));
  (Wrd232.Obj) = ((Wrd231.pObj) [0]);
  (Wrd233.Lng) = (FIXNUM_TO_LONG (Wrd232.Obj));
  if (! (((unsigned long) (Wrd230.Lng)) < ((unsigned long) (Wrd233.Lng))))
    goto label_537;
  (Wrd227.pObj) = (& ((Wrd231.pObj) [(Wrd224.Lng)]));
  (Wrd228.Obj) = ((Wrd227.pObj) [1]);
  (* (--Rsp)) = (Wrd228.Obj);

DEFLABEL (label_536)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_537)
  (Wrd239.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_57]))));
  (* (--Rsp)) = (Wrd239.Obj);
  (* (--Rsp)) = (Wrd221.Obj);
  (* (--Rsp)) = (Wrd218.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_251)
DEFLABEL (label_538)
  (* (--Rsp)) = Rvl;
  goto label_536;

DEFLABEL (label_539)
  (Wrd1763.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_56]))));
  (* (--Rsp)) = (Wrd1763.Obj);
  (* (--Rsp)) = (Wrd208.Obj);
  (* (--Rsp)) = (Wrd205.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_328)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_535;
  goto label_534;

DEFLABEL (label_541)
  if (! ((Wrd204.uLng) == 62))
    goto label_549;
  (Wrd1771.pObj) = (OBJECT_ADDRESS (Wrd203.Obj));
  (Wrd1772.Obj) = ((Wrd1771.pObj) [0]);
  (Wrd1773.Lng) = (FIXNUM_TO_LONG (Wrd1772.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1773.Lng))))
    goto label_549;
  (Wrd1765.Obj) = ((Wrd1771.pObj) [1]);

DEFLABEL (label_548)
  (Wrd1781.uLng) = (OBJECT_TYPE (Wrd1765.Obj));
  if (! ((Wrd1781.uLng) == 62))
    goto label_540;
  (Wrd1791.Obj) = (Rsp [6]);
  (Wrd1792.uLng) = (OBJECT_TYPE (Wrd1791.Obj));
  if (! ((Wrd1792.uLng) == 62))
    goto label_547;
  (Wrd1788.pObj) = (OBJECT_ADDRESS (Wrd1791.Obj));
  (Wrd1789.Obj) = ((Wrd1788.pObj) [0]);
  (Wrd1790.Lng) = (FIXNUM_TO_LONG (Wrd1789.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1790.Lng))))
    goto label_547;
  (Wrd1782.Obj) = ((Wrd1788.pObj) [1]);

DEFLABEL (label_546)
  (Wrd1805.uLng) = (OBJECT_TYPE (Wrd1782.Obj));
  if (! ((Wrd1805.uLng) == 62))
    goto label_545;
  (Wrd1802.pObj) = (OBJECT_ADDRESS (Wrd1782.Obj));
  (Wrd1803.Obj) = ((Wrd1802.pObj) [0]);
  (Wrd1804.Lng) = (FIXNUM_TO_LONG (Wrd1803.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1804.Lng))))
    goto label_545;
  (Wrd1798.Obj) = ((Wrd1802.pObj) [1]);

DEFLABEL (label_544)
  if (! ((Wrd1798.Obj) == (current_block [OBJECT_32_10])))
    goto label_540;
  (Wrd1812.Obj) = (current_block [OBJECT_32_9]);
  (* (--Rsp)) = (Wrd1812.Obj);
  (Wrd1813.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd1813.Obj);
  (Wrd1825.uLng) = (OBJECT_TYPE (Wrd1813.Obj));
  if ((Wrd1825.uLng) == 62)
    goto label_543;

DEFLABEL (label_542)
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_543)
  (Wrd1821.pObj) = (OBJECT_ADDRESS (Wrd1813.Obj));
  (Wrd1822.Obj) = ((Wrd1821.pObj) [0]);
  (Wrd1823.Lng) = (FIXNUM_TO_LONG (Wrd1822.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1823.Lng))))
    goto label_542;
  (Wrd1815.Obj) = ((Wrd1821.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd1815.Obj);
  goto label_533;

DEFLABEL (label_545)
  (Wrd1807.Obj) = (current_block [OBJECT_32_9]);
  (Wrd1810.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_55]))));
  (* (--Rsp)) = (Wrd1810.Obj);
  (* (--Rsp)) = (Wrd1807.Obj);
  (* (--Rsp)) = (Wrd1782.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_331)
  (Wrd1798.Obj) = Rvl;
  goto label_544;

DEFLABEL (label_547)
  (Wrd1793.Obj) = (Rsp [6]);
  (Wrd1794.Obj) = (current_block [OBJECT_32_9]);
  (Wrd1797.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_54]))));
  (* (--Rsp)) = (Wrd1797.Obj);
  (* (--Rsp)) = (Wrd1794.Obj);
  (* (--Rsp)) = (Wrd1793.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_330)
  (Wrd1782.Obj) = Rvl;
  goto label_546;

DEFLABEL (label_549)
  (Wrd1776.Obj) = (Rsp [6]);
  (Wrd1777.Obj) = (current_block [OBJECT_32_9]);
  (Wrd1780.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_53]))));
  (* (--Rsp)) = (Wrd1780.Obj);
  (* (--Rsp)) = (Wrd1777.Obj);
  (* (--Rsp)) = (Wrd1776.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_329)
  (Wrd1765.Obj) = Rvl;
  goto label_548;

DEFLABEL (label_552)
  (Wrd153.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd153.Obj);
  (Wrd155.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd154.Obj) = ((Wrd155.pObj) [0]);
  (Wrd158.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd160.uLng) = (OBJECT_TYPE (Wrd153.Obj));
  (Wrd157.Obj) = (MAKE_OBJECT (26, (Wrd160.uLng)));
  (Wrd170.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if (! ((Wrd170.uLng) == 10))
    goto label_553;
  if (! ((Wrd158.uLng) == 26))
    goto label_553;
  (Wrd166.Lng) = (FIXNUM_TO_LONG (Wrd157.Obj));
  (Wrd167.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd168.Obj) = ((Wrd167.pObj) [0]);
  (Wrd169.Lng) = (FIXNUM_TO_LONG (Wrd168.Obj));
  if (! (((unsigned long) (Wrd166.Lng)) < ((unsigned long) (Wrd169.Lng))))
    goto label_553;
  (Wrd163.pObj) = (& ((Wrd167.pObj) [(Wrd160.Lng)]));
  (Wrd164.Obj) = ((Wrd163.pObj) [1]);
  (* (--Rsp)) = (Wrd164.Obj);
  goto label_536;

DEFLABEL (label_553)
  (Wrd175.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_52]))));
  (* (--Rsp)) = (Wrd175.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd154.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_250)
  goto label_538;

DEFLABEL (label_554)
  (Wrd1836.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_51]))));
  (* (--Rsp)) = (Wrd1836.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd141.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_332)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_552;
  goto label_551;

DEFLABEL (label_556)
  if (! ((Wrd140.uLng) == 62))
    goto label_562;
  (Wrd1844.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd1845.Obj) = ((Wrd1844.pObj) [0]);
  (Wrd1846.Lng) = (FIXNUM_TO_LONG (Wrd1845.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1846.Lng))))
    goto label_562;
  (Wrd1838.Obj) = ((Wrd1844.pObj) [1]);

DEFLABEL (label_561)
  (Wrd1854.uLng) = (OBJECT_TYPE (Wrd1838.Obj));
  if (! ((Wrd1854.uLng) == 62))
    goto label_555;
  (Wrd1864.Obj) = (Rsp [6]);
  (Wrd1865.uLng) = (OBJECT_TYPE (Wrd1864.Obj));
  if (! ((Wrd1865.uLng) == 62))
    goto label_560;
  (Wrd1861.pObj) = (OBJECT_ADDRESS (Wrd1864.Obj));
  (Wrd1862.Obj) = ((Wrd1861.pObj) [0]);
  (Wrd1863.Lng) = (FIXNUM_TO_LONG (Wrd1862.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1863.Lng))))
    goto label_560;
  (Wrd1855.Obj) = ((Wrd1861.pObj) [1]);

DEFLABEL (label_559)
  (Wrd1878.uLng) = (OBJECT_TYPE (Wrd1855.Obj));
  if (! ((Wrd1878.uLng) == 62))
    goto label_558;
  (Wrd1875.pObj) = (OBJECT_ADDRESS (Wrd1855.Obj));
  (Wrd1876.Obj) = ((Wrd1875.pObj) [0]);
  (Wrd1877.Lng) = (FIXNUM_TO_LONG (Wrd1876.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1877.Lng))))
    goto label_558;
  (Wrd1871.Obj) = ((Wrd1875.pObj) [1]);

DEFLABEL (label_557)
  if (! ((Wrd1871.Obj) == (current_block [OBJECT_32_10])))
    goto label_555;
  (Wrd1885.Obj) = (current_block [OBJECT_32_9]);
  (* (--Rsp)) = (Wrd1885.Obj);
  (Wrd1886.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd1886.Obj);
  (Wrd1898.uLng) = (OBJECT_TYPE (Wrd1886.Obj));
  if (! ((Wrd1898.uLng) == 62))
    goto label_542;
  (Wrd1894.pObj) = (OBJECT_ADDRESS (Wrd1886.Obj));
  (Wrd1895.Obj) = ((Wrd1894.pObj) [0]);
  (Wrd1896.Lng) = (FIXNUM_TO_LONG (Wrd1895.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1896.Lng))))
    goto label_542;
  (Wrd1888.Obj) = ((Wrd1894.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd1888.Obj);
  goto label_550;

DEFLABEL (label_558)
  (Wrd1880.Obj) = (current_block [OBJECT_32_9]);
  (Wrd1883.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_50]))));
  (* (--Rsp)) = (Wrd1883.Obj);
  (* (--Rsp)) = (Wrd1880.Obj);
  (* (--Rsp)) = (Wrd1855.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_335)
  (Wrd1871.Obj) = Rvl;
  goto label_557;

DEFLABEL (label_560)
  (Wrd1866.Obj) = (Rsp [6]);
  (Wrd1867.Obj) = (current_block [OBJECT_32_9]);
  (Wrd1870.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_49]))));
  (* (--Rsp)) = (Wrd1870.Obj);
  (* (--Rsp)) = (Wrd1867.Obj);
  (* (--Rsp)) = (Wrd1866.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_334)
  (Wrd1855.Obj) = Rvl;
  goto label_559;

DEFLABEL (label_562)
  (Wrd1849.Obj) = (Rsp [6]);
  (Wrd1850.Obj) = (current_block [OBJECT_32_9]);
  (Wrd1853.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_48]))));
  (* (--Rsp)) = (Wrd1853.Obj);
  (* (--Rsp)) = (Wrd1850.Obj);
  (* (--Rsp)) = (Wrd1849.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_333)
  (Wrd1838.Obj) = Rvl;
  goto label_561;

DEFLABEL (label_565)
  (Wrd89.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd91.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd90.Obj) = ((Wrd91.pObj) [0]);
  (Wrd94.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  (Wrd93.Obj) = (MAKE_OBJECT (26, (Wrd96.uLng)));
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd106.uLng) == 10))
    goto label_566;
  if (! ((Wrd94.uLng) == 26))
    goto label_566;
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd93.Obj));
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd104.Obj) = ((Wrd103.pObj) [0]);
  (Wrd105.Lng) = (FIXNUM_TO_LONG (Wrd104.Obj));
  if (! (((unsigned long) (Wrd102.Lng)) < ((unsigned long) (Wrd105.Lng))))
    goto label_566;
  (Wrd99.pObj) = (& ((Wrd103.pObj) [(Wrd96.Lng)]));
  (Wrd100.Obj) = ((Wrd99.pObj) [1]);
  (* (--Rsp)) = (Wrd100.Obj);
  goto label_536;

DEFLABEL (label_566)
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_47]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_249)
  goto label_538;

DEFLABEL (label_567)
  (Wrd1909.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_46]))));
  (* (--Rsp)) = (Wrd1909.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_336)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_565;
  goto label_564;

DEFLABEL (label_569)
  if (! ((Wrd76.uLng) == 62))
    goto label_575;
  (Wrd1917.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd1918.Obj) = ((Wrd1917.pObj) [0]);
  (Wrd1919.Lng) = (FIXNUM_TO_LONG (Wrd1918.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1919.Lng))))
    goto label_575;
  (Wrd1911.Obj) = ((Wrd1917.pObj) [1]);

DEFLABEL (label_574)
  (Wrd1927.uLng) = (OBJECT_TYPE (Wrd1911.Obj));
  if (! ((Wrd1927.uLng) == 62))
    goto label_568;
  (Wrd1937.Obj) = (Rsp [6]);
  (Wrd1938.uLng) = (OBJECT_TYPE (Wrd1937.Obj));
  if (! ((Wrd1938.uLng) == 62))
    goto label_573;
  (Wrd1934.pObj) = (OBJECT_ADDRESS (Wrd1937.Obj));
  (Wrd1935.Obj) = ((Wrd1934.pObj) [0]);
  (Wrd1936.Lng) = (FIXNUM_TO_LONG (Wrd1935.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1936.Lng))))
    goto label_573;
  (Wrd1928.Obj) = ((Wrd1934.pObj) [1]);

DEFLABEL (label_572)
  (Wrd1951.uLng) = (OBJECT_TYPE (Wrd1928.Obj));
  if (! ((Wrd1951.uLng) == 62))
    goto label_571;
  (Wrd1948.pObj) = (OBJECT_ADDRESS (Wrd1928.Obj));
  (Wrd1949.Obj) = ((Wrd1948.pObj) [0]);
  (Wrd1950.Lng) = (FIXNUM_TO_LONG (Wrd1949.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1950.Lng))))
    goto label_571;
  (Wrd1944.Obj) = ((Wrd1948.pObj) [1]);

DEFLABEL (label_570)
  if (! ((Wrd1944.Obj) == (current_block [OBJECT_32_10])))
    goto label_568;
  (Wrd1958.Obj) = (current_block [OBJECT_32_9]);
  (* (--Rsp)) = (Wrd1958.Obj);
  (Wrd1959.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd1959.Obj);
  (Wrd1971.uLng) = (OBJECT_TYPE (Wrd1959.Obj));
  if (! ((Wrd1971.uLng) == 62))
    goto label_542;
  (Wrd1967.pObj) = (OBJECT_ADDRESS (Wrd1959.Obj));
  (Wrd1968.Obj) = ((Wrd1967.pObj) [0]);
  (Wrd1969.Lng) = (FIXNUM_TO_LONG (Wrd1968.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1969.Lng))))
    goto label_542;
  (Wrd1961.Obj) = ((Wrd1967.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd1961.Obj);
  goto label_563;

DEFLABEL (label_571)
  (Wrd1953.Obj) = (current_block [OBJECT_32_9]);
  (Wrd1956.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_45]))));
  (* (--Rsp)) = (Wrd1956.Obj);
  (* (--Rsp)) = (Wrd1953.Obj);
  (* (--Rsp)) = (Wrd1928.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_339)
  (Wrd1944.Obj) = Rvl;
  goto label_570;

DEFLABEL (label_573)
  (Wrd1939.Obj) = (Rsp [6]);
  (Wrd1940.Obj) = (current_block [OBJECT_32_9]);
  (Wrd1943.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_44]))));
  (* (--Rsp)) = (Wrd1943.Obj);
  (* (--Rsp)) = (Wrd1940.Obj);
  (* (--Rsp)) = (Wrd1939.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_338)
  (Wrd1928.Obj) = Rvl;
  goto label_572;

DEFLABEL (label_575)
  (Wrd1922.Obj) = (Rsp [6]);
  (Wrd1923.Obj) = (current_block [OBJECT_32_9]);
  (Wrd1926.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_43]))));
  (* (--Rsp)) = (Wrd1926.Obj);
  (* (--Rsp)) = (Wrd1923.Obj);
  (* (--Rsp)) = (Wrd1922.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_337)
  (Wrd1911.Obj) = Rvl;
  goto label_574;

DEFLABEL (label_578)
  (Wrd25.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd26.Obj) = ((Wrd27.pObj) [0]);
  (Wrd30.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  (Wrd29.Obj) = (MAKE_OBJECT (26, (Wrd32.uLng)));
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_579;
  if (! ((Wrd30.uLng) == 26))
    goto label_579;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) (Wrd38.Lng)) < ((unsigned long) (Wrd41.Lng))))
    goto label_579;
  (Wrd35.pObj) = (& ((Wrd39.pObj) [(Wrd32.Lng)]));
  (Wrd36.Obj) = ((Wrd35.pObj) [1]);
  (* (--Rsp)) = (Wrd36.Obj);
  goto label_536;

DEFLABEL (label_579)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_42]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_248)
  goto label_538;

DEFLABEL (label_580)
  (Wrd1982.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_41]))));
  (* (--Rsp)) = (Wrd1982.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_340)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_578;
  goto label_577;

DEFLABEL (label_582)
  if (! ((Wrd12.uLng) == 62))
    goto label_588;
  (Wrd1990.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd1991.Obj) = ((Wrd1990.pObj) [0]);
  (Wrd1992.Lng) = (FIXNUM_TO_LONG (Wrd1991.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd1992.Lng))))
    goto label_588;
  (Wrd1984.Obj) = ((Wrd1990.pObj) [1]);

DEFLABEL (label_587)
  (Wrd2000.uLng) = (OBJECT_TYPE (Wrd1984.Obj));
  if (! ((Wrd2000.uLng) == 62))
    goto label_581;
  (Wrd2010.Obj) = (Rsp [6]);
  (Wrd2011.uLng) = (OBJECT_TYPE (Wrd2010.Obj));
  if (! ((Wrd2011.uLng) == 62))
    goto label_586;
  (Wrd2007.pObj) = (OBJECT_ADDRESS (Wrd2010.Obj));
  (Wrd2008.Obj) = ((Wrd2007.pObj) [0]);
  (Wrd2009.Lng) = (FIXNUM_TO_LONG (Wrd2008.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd2009.Lng))))
    goto label_586;
  (Wrd2001.Obj) = ((Wrd2007.pObj) [1]);

DEFLABEL (label_585)
  (Wrd2024.uLng) = (OBJECT_TYPE (Wrd2001.Obj));
  if (! ((Wrd2024.uLng) == 62))
    goto label_584;
  (Wrd2021.pObj) = (OBJECT_ADDRESS (Wrd2001.Obj));
  (Wrd2022.Obj) = ((Wrd2021.pObj) [0]);
  (Wrd2023.Lng) = (FIXNUM_TO_LONG (Wrd2022.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd2023.Lng))))
    goto label_584;
  (Wrd2017.Obj) = ((Wrd2021.pObj) [1]);

DEFLABEL (label_583)
  if (! ((Wrd2017.Obj) == (current_block [OBJECT_32_10])))
    goto label_581;
  (Wrd2031.Obj) = (current_block [OBJECT_32_9]);
  (* (--Rsp)) = (Wrd2031.Obj);
  (Wrd2032.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd2032.Obj);
  (Wrd2044.uLng) = (OBJECT_TYPE (Wrd2032.Obj));
  if (! ((Wrd2044.uLng) == 62))
    goto label_542;
  (Wrd2040.pObj) = (OBJECT_ADDRESS (Wrd2032.Obj));
  (Wrd2041.Obj) = ((Wrd2040.pObj) [0]);
  (Wrd2042.Lng) = (FIXNUM_TO_LONG (Wrd2041.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd2042.Lng))))
    goto label_542;
  (Wrd2034.Obj) = ((Wrd2040.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd2034.Obj);
  goto label_576;

DEFLABEL (label_584)
  (Wrd2026.Obj) = (current_block [OBJECT_32_9]);
  (Wrd2029.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_40]))));
  (* (--Rsp)) = (Wrd2029.Obj);
  (* (--Rsp)) = (Wrd2026.Obj);
  (* (--Rsp)) = (Wrd2001.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_343)
  (Wrd2017.Obj) = Rvl;
  goto label_583;

DEFLABEL (label_586)
  (Wrd2012.Obj) = (Rsp [6]);
  (Wrd2013.Obj) = (current_block [OBJECT_32_9]);
  (Wrd2016.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_39]))));
  (* (--Rsp)) = (Wrd2016.Obj);
  (* (--Rsp)) = (Wrd2013.Obj);
  (* (--Rsp)) = (Wrd2012.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_342)
  (Wrd2001.Obj) = Rvl;
  goto label_585;

DEFLABEL (label_588)
  (Wrd1995.Obj) = (Rsp [6]);
  (Wrd1996.Obj) = (current_block [OBJECT_32_9]);
  (Wrd1999.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_38]))));
  (* (--Rsp)) = (Wrd1999.Obj);
  (* (--Rsp)) = (Wrd1996.Obj);
  (* (--Rsp)) = (Wrd1995.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_341)
  (Wrd1984.Obj) = Rvl;
  goto label_587;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_33);
  (* (--Rsp)) = Rvl;
  goto label_533;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_32_34);
  (* (--Rsp)) = Rvl;
  goto label_550;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_32_35);
  (* (--Rsp)) = Rvl;
  goto label_563;

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_32_36);
  (* (--Rsp)) = Rvl;
  goto label_576;

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_32_37);
  (* (--Rsp)) = Rvl;
  goto label_422;

DEFLABEL (search_lines_372)
DEFLABEL (search_lines_222)
  INTERRUPT_CHECK (26, LABEL_32_18);
  (Wrd2045.Obj) = (Rsp [1]);
  (Wrd2046.Obj) = (Rsp [2]);
  if ((Wrd2045.Obj) == (Wrd2046.Obj))
    goto label_620;
  (Wrd2056.Obj) = (Rsp [3]);
  (Wrd2057.uLng) = (OBJECT_TYPE (Wrd2056.Obj));
  if (! ((Wrd2057.uLng) == 62))
    goto label_619;
  (Wrd2053.pObj) = (OBJECT_ADDRESS (Wrd2056.Obj));
  (Wrd2054.Obj) = ((Wrd2053.pObj) [0]);
  (Wrd2055.Lng) = (FIXNUM_TO_LONG (Wrd2054.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd2055.Lng))))
    goto label_619;
  (Wrd2047.Obj) = ((Wrd2053.pObj) [6]);

DEFLABEL (label_618)
  (Wrd2308.uLng) = (OBJECT_TYPE (Wrd2047.Obj));
  if (! ((Wrd2308.uLng) == 10))
    goto label_617;
  (Wrd2301.Obj) = (Rsp [0]);
  (Wrd2302.uLng) = (OBJECT_TYPE (Wrd2301.Obj));
  if (! ((Wrd2302.uLng) == 26))
    goto label_617;
  (Wrd2304.Lng) = (FIXNUM_TO_LONG (Wrd2301.Obj));
  (Wrd2305.pObj) = (OBJECT_ADDRESS (Wrd2047.Obj));
  (Wrd2306.Obj) = ((Wrd2305.pObj) [0]);
  (Wrd2307.Lng) = (FIXNUM_TO_LONG (Wrd2306.Obj));
  if (! (((unsigned long) (Wrd2304.Lng)) < ((unsigned long) (Wrd2307.Lng))))
    goto label_617;
  (Wrd2064.uLng) = (OBJECT_DATUM (Wrd2301.Obj));
  (Wrd2066.pObj) = (& ((Wrd2305.pObj) [(Wrd2064.Lng)]));
  (Wrd2067.Obj) = ((Wrd2066.pObj) [1]);
  if ((Wrd2067.Obj) == ((SCHEME_OBJECT) 0))
    goto label_596;

DEFLABEL (label_616)
  (Wrd2115.Obj) = (Rsp [3]);
  (Wrd2116.uLng) = (OBJECT_TYPE (Wrd2115.Obj));
  if (! ((Wrd2116.uLng) == 62))
    goto label_615;
  (Wrd2112.pObj) = (OBJECT_ADDRESS (Wrd2115.Obj));
  (Wrd2113.Obj) = ((Wrd2112.pObj) [0]);
  (Wrd2114.Lng) = (FIXNUM_TO_LONG (Wrd2113.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd2114.Lng))))
    goto label_615;
  (Wrd2106.Obj) = ((Wrd2112.pObj) [6]);

DEFLABEL (label_614)
  (Wrd2134.uLng) = (OBJECT_TYPE (Wrd2106.Obj));
  if (! ((Wrd2134.uLng) == 10))
    goto label_613;
  (Wrd2127.Obj) = (Rsp [0]);
  (Wrd2128.uLng) = (OBJECT_TYPE (Wrd2127.Obj));
  if (! ((Wrd2128.uLng) == 26))
    goto label_613;
  (Wrd2130.Lng) = (FIXNUM_TO_LONG (Wrd2127.Obj));
  (Wrd2131.pObj) = (OBJECT_ADDRESS (Wrd2106.Obj));
  (Wrd2132.Obj) = ((Wrd2131.pObj) [0]);
  (Wrd2133.Lng) = (FIXNUM_TO_LONG (Wrd2132.Obj));
  if (! (((unsigned long) (Wrd2130.Lng)) < ((unsigned long) (Wrd2133.Lng))))
    goto label_613;
  (Wrd2124.uLng) = (OBJECT_DATUM (Wrd2127.Obj));
  (Wrd2126.pObj) = (& ((Wrd2131.pObj) [(Wrd2124.Lng)]));
  (Wrd2122.Obj) = ((Wrd2126.pObj) [1]);

DEFLABEL (label_612)
  (Wrd2141.pObj) = (OBJECT_ADDRESS (Wrd2122.Obj));
  (Wrd2140.Obj) = ((Wrd2141.pObj) [0]);
  (Wrd2142.Obj) = (Rsp [4]);
  if ((Wrd2142.Obj) == (Wrd2140.Obj))
    goto label_597;

DEFLABEL (label_596)
  (Wrd2078.Obj) = (Rsp [3]);
  (Wrd2079.uLng) = (OBJECT_TYPE (Wrd2078.Obj));
  if (! ((Wrd2079.uLng) == 62))
    goto label_595;
  (Wrd2075.pObj) = (OBJECT_ADDRESS (Wrd2078.Obj));
  (Wrd2076.Obj) = ((Wrd2075.pObj) [0]);
  (Wrd2077.Lng) = (FIXNUM_TO_LONG (Wrd2076.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd2077.Lng))))
    goto label_595;
  (Wrd2069.Obj) = ((Wrd2075.pObj) [6]);

DEFLABEL (label_594)
  (Wrd2089.uLng) = (OBJECT_TYPE (Wrd2069.Obj));
  if (! ((Wrd2089.uLng) == 10))
    goto label_593;
  (Wrd2087.pObj) = (OBJECT_ADDRESS (Wrd2069.Obj));
  (Wrd2088.Obj) = ((Wrd2087.pObj) [0]);
  (Wrd2085.Obj) = (MAKE_OBJECT (26, (Wrd2088.uLng)));

DEFLABEL (label_592)
  (Wrd2095.Obj) = (Rsp [0]);
  (Wrd2096.Lng) = (FIXNUM_TO_LONG (Wrd2095.Obj));
  (Wrd2097.Lng) = ((Wrd2096.Lng) + 1L);
  (Wrd2094.Obj) = (LONG_TO_FIXNUM (Wrd2097.Lng));
  if ((Wrd2094.Obj) == (Wrd2085.Obj))
    goto label_590;
  Wrd2098 = Wrd2094;
  goto label_589;

DEFLABEL (label_590)
  (Wrd2098.Obj) = (current_block [OBJECT_32_9]);

DEFLABEL (label_589)
DEFLABEL (label_591)
  (Rsp [0]) = (Wrd2098.Obj);
  (Wrd2103.Obj) = (Rsp [1]);
  (Wrd2104.Lng) = (FIXNUM_TO_LONG (Wrd2103.Obj));
  (Wrd2105.Lng) = ((Wrd2104.Lng) + 1L);
  (Wrd2102.Obj) = (LONG_TO_FIXNUM (Wrd2105.Lng));
  (Rsp [1]) = (Wrd2102.Obj);
  goto label_375;

DEFLABEL (label_593)
  (Wrd2093.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_32]))));
  (* (--Rsp)) = (Wrd2093.Obj);
  (* (--Rsp)) = (Wrd2069.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_8]), 1);

DEFLABEL (label_346)
  (Wrd2085.Obj) = Rvl;
  goto label_592;

DEFLABEL (label_595)
  (Wrd2080.Obj) = (Rsp [3]);
  (Wrd2081.Obj) = (current_block [OBJECT_32_5]);
  (Wrd2084.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_31]))));
  (* (--Rsp)) = (Wrd2084.Obj);
  (* (--Rsp)) = (Wrd2081.Obj);
  (* (--Rsp)) = (Wrd2080.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_345)
  (Wrd2069.Obj) = Rvl;
  goto label_594;

DEFLABEL (label_597)
  (Wrd2152.Obj) = (Rsp [3]);
  (Wrd2153.uLng) = (OBJECT_TYPE (Wrd2152.Obj));
  if (! ((Wrd2153.uLng) == 62))
    goto label_611;
  (Wrd2149.pObj) = (OBJECT_ADDRESS (Wrd2152.Obj));
  (Wrd2150.Obj) = ((Wrd2149.pObj) [0]);
  (Wrd2151.Lng) = (FIXNUM_TO_LONG (Wrd2150.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd2151.Lng))))
    goto label_611;
  (Wrd2143.Obj) = ((Wrd2149.pObj) [6]);

DEFLABEL (label_610)
  (Wrd2171.uLng) = (OBJECT_TYPE (Wrd2143.Obj));
  if (! ((Wrd2171.uLng) == 10))
    goto label_609;
  (Wrd2164.Obj) = (Rsp [0]);
  (Wrd2165.uLng) = (OBJECT_TYPE (Wrd2164.Obj));
  if (! ((Wrd2165.uLng) == 26))
    goto label_609;
  (Wrd2167.Lng) = (FIXNUM_TO_LONG (Wrd2164.Obj));
  (Wrd2168.pObj) = (OBJECT_ADDRESS (Wrd2143.Obj));
  (Wrd2169.Obj) = ((Wrd2168.pObj) [0]);
  (Wrd2170.Lng) = (FIXNUM_TO_LONG (Wrd2169.Obj));
  if (! (((unsigned long) (Wrd2167.Lng)) < ((unsigned long) (Wrd2170.Lng))))
    goto label_609;
  (Wrd2161.uLng) = (OBJECT_DATUM (Wrd2164.Obj));
  (Wrd2163.pObj) = (& ((Wrd2168.pObj) [(Wrd2161.Lng)]));
  (Wrd2159.Obj) = ((Wrd2163.pObj) [1]);

DEFLABEL (label_608)
  (Wrd2178.pObj) = (OBJECT_ADDRESS (Wrd2159.Obj));
  (Wrd2177.Obj) = ((Wrd2178.pObj) [1]);
  (Wrd2180.pObj) = (OBJECT_ADDRESS (Wrd2177.Obj));
  (Wrd2179.Obj) = ((Wrd2180.pObj) [0]);
  (Wrd2181.Obj) = (Rsp [5]);
  if (! ((Wrd2181.Obj) == (Wrd2179.Obj)))
    goto label_596;
  (Wrd2191.Obj) = (Rsp [3]);
  (Wrd2192.uLng) = (OBJECT_TYPE (Wrd2191.Obj));
  if (! ((Wrd2192.uLng) == 62))
    goto label_607;
  (Wrd2188.pObj) = (OBJECT_ADDRESS (Wrd2191.Obj));
  (Wrd2189.Obj) = ((Wrd2188.pObj) [0]);
  (Wrd2190.Lng) = (FIXNUM_TO_LONG (Wrd2189.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd2190.Lng))))
    goto label_607;
  (Wrd2182.Obj) = ((Wrd2188.pObj) [6]);

DEFLABEL (label_606)
  (Wrd2210.uLng) = (OBJECT_TYPE (Wrd2182.Obj));
  if (! ((Wrd2210.uLng) == 10))
    goto label_605;
  (Wrd2203.Obj) = (Rsp [0]);
  (Wrd2204.uLng) = (OBJECT_TYPE (Wrd2203.Obj));
  if (! ((Wrd2204.uLng) == 26))
    goto label_605;
  (Wrd2206.Lng) = (FIXNUM_TO_LONG (Wrd2203.Obj));
  (Wrd2207.pObj) = (OBJECT_ADDRESS (Wrd2182.Obj));
  (Wrd2208.Obj) = ((Wrd2207.pObj) [0]);
  (Wrd2209.Lng) = (FIXNUM_TO_LONG (Wrd2208.Obj));
  if (! (((unsigned long) (Wrd2206.Lng)) < ((unsigned long) (Wrd2209.Lng))))
    goto label_605;
  (Wrd2200.uLng) = (OBJECT_DATUM (Wrd2203.Obj));
  (Wrd2202.pObj) = (& ((Wrd2207.pObj) [(Wrd2200.Lng)]));
  (Wrd2198.Obj) = ((Wrd2202.pObj) [1]);

DEFLABEL (label_604)
  (Wrd2217.pObj) = (OBJECT_ADDRESS (Wrd2198.Obj));
  (Wrd2216.Obj) = ((Wrd2217.pObj) [1]);
  (Wrd2219.pObj) = (OBJECT_ADDRESS (Wrd2216.Obj));
  (Wrd2218.Obj) = ((Wrd2219.pObj) [1]);
  (Wrd2221.pObj) = (OBJECT_ADDRESS (Wrd2218.Obj));
  (Wrd2220.Obj) = ((Wrd2221.pObj) [0]);
  (Wrd2222.Obj) = (Rsp [6]);
  if (! ((Wrd2222.Obj) == (Wrd2220.Obj)))
    goto label_596;
  (Wrd2232.Obj) = (Rsp [3]);
  (Wrd2233.uLng) = (OBJECT_TYPE (Wrd2232.Obj));
  if (! ((Wrd2233.uLng) == 62))
    goto label_603;
  (Wrd2229.pObj) = (OBJECT_ADDRESS (Wrd2232.Obj));
  (Wrd2230.Obj) = ((Wrd2229.pObj) [0]);
  (Wrd2231.Lng) = (FIXNUM_TO_LONG (Wrd2230.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd2231.Lng))))
    goto label_603;
  (Wrd2223.Obj) = ((Wrd2229.pObj) [6]);

DEFLABEL (label_602)
  (Wrd2251.uLng) = (OBJECT_TYPE (Wrd2223.Obj));
  if (! ((Wrd2251.uLng) == 10))
    goto label_601;
  (Wrd2244.Obj) = (Rsp [0]);
  (Wrd2245.uLng) = (OBJECT_TYPE (Wrd2244.Obj));
  if (! ((Wrd2245.uLng) == 26))
    goto label_601;
  (Wrd2247.Lng) = (FIXNUM_TO_LONG (Wrd2244.Obj));
  (Wrd2248.pObj) = (OBJECT_ADDRESS (Wrd2223.Obj));
  (Wrd2249.Obj) = ((Wrd2248.pObj) [0]);
  (Wrd2250.Lng) = (FIXNUM_TO_LONG (Wrd2249.Obj));
  if (! (((unsigned long) (Wrd2247.Lng)) < ((unsigned long) (Wrd2250.Lng))))
    goto label_601;
  (Wrd2241.uLng) = (OBJECT_DATUM (Wrd2244.Obj));
  (Wrd2243.pObj) = (& ((Wrd2248.pObj) [(Wrd2241.Lng)]));
  (Wrd2239.Obj) = ((Wrd2243.pObj) [1]);

DEFLABEL (label_600)
  (Wrd2258.pObj) = (OBJECT_ADDRESS (Wrd2239.Obj));
  (Wrd2257.Obj) = ((Wrd2258.pObj) [1]);
  (Wrd2260.pObj) = (OBJECT_ADDRESS (Wrd2257.Obj));
  (Wrd2259.Obj) = ((Wrd2260.pObj) [1]);
  (Wrd2262.pObj) = (OBJECT_ADDRESS (Wrd2259.Obj));
  (Wrd2261.Obj) = ((Wrd2262.pObj) [1]);
  (Wrd2264.pObj) = (OBJECT_ADDRESS (Wrd2261.Obj));
  (Wrd2263.Obj) = ((Wrd2264.pObj) [0]);
  (Wrd2265.Obj) = (Rsp [7]);
  if (! ((Wrd2265.Obj) == (Wrd2263.Obj)))
    goto label_596;
  (Wrd2275.Obj) = (Rsp [3]);
  (Wrd2276.uLng) = (OBJECT_TYPE (Wrd2275.Obj));
  if (! ((Wrd2276.uLng) == 62))
    goto label_599;
  (Wrd2272.pObj) = (OBJECT_ADDRESS (Wrd2275.Obj));
  (Wrd2273.Obj) = ((Wrd2272.pObj) [0]);
  (Wrd2274.Lng) = (FIXNUM_TO_LONG (Wrd2273.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd2274.Lng))))
    goto label_599;
  (Wrd2266.Obj) = ((Wrd2272.pObj) [7]);

DEFLABEL (label_598)
  (Rsp [6]) = (Wrd2266.Obj);
  (Wrd2282.Obj) = (Rsp [0]);
  (Rsp [7]) = (Wrd2282.Obj);
  Rsp = (& (Rsp [6]));
  (Wrd2298.Obj) = (Rsp [0]);
  (Wrd2299.uLng) = (OBJECT_TYPE (Wrd2298.Obj));
  if (! ((Wrd2299.uLng) == 10))
    goto label_373;
  (Wrd2290.Obj) = (Rsp [1]);
  (Wrd2291.uLng) = (OBJECT_TYPE (Wrd2290.Obj));
  if (! ((Wrd2291.uLng) == 26))
    goto label_373;
  (Wrd2293.Lng) = (FIXNUM_TO_LONG (Wrd2290.Obj));
  (Wrd2295.pObj) = (OBJECT_ADDRESS (Wrd2298.Obj));
  (Wrd2296.Obj) = ((Wrd2295.pObj) [0]);
  (Wrd2297.Lng) = (FIXNUM_TO_LONG (Wrd2296.Obj));
  if (! (((unsigned long) (Wrd2293.Lng)) < ((unsigned long) (Wrd2297.Lng))))
    goto label_373;
  (Wrd2286.uLng) = (OBJECT_DATUM (Wrd2290.Obj));
  (Wrd2289.pObj) = (& ((Wrd2295.pObj) [(Wrd2286.Lng)]));
  (Wrd2284.Obj) = ((Wrd2289.pObj) [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd2284.Obj);
  goto label_422;

DEFLABEL (label_599)
  (Wrd2277.Obj) = (Rsp [3]);
  (Wrd2278.Obj) = (current_block [OBJECT_32_7]);
  (Wrd2281.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_30]))));
  (* (--Rsp)) = (Wrd2281.Obj);
  (* (--Rsp)) = (Wrd2278.Obj);
  (* (--Rsp)) = (Wrd2277.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_355)
  (Wrd2266.Obj) = Rvl;
  goto label_598;

DEFLABEL (label_601)
  (Wrd2253.Obj) = (Rsp [0]);
  (Wrd2256.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_29]))));
  (* (--Rsp)) = (Wrd2256.Obj);
  (* (--Rsp)) = (Wrd2253.Obj);
  (* (--Rsp)) = (Wrd2223.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_354)
  (Wrd2239.Obj) = Rvl;
  goto label_600;

DEFLABEL (label_603)
  (Wrd2234.Obj) = (Rsp [3]);
  (Wrd2235.Obj) = (current_block [OBJECT_32_5]);
  (Wrd2238.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_28]))));
  (* (--Rsp)) = (Wrd2238.Obj);
  (* (--Rsp)) = (Wrd2235.Obj);
  (* (--Rsp)) = (Wrd2234.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_353)
  (Wrd2223.Obj) = Rvl;
  goto label_602;

DEFLABEL (label_605)
  (Wrd2212.Obj) = (Rsp [0]);
  (Wrd2215.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_27]))));
  (* (--Rsp)) = (Wrd2215.Obj);
  (* (--Rsp)) = (Wrd2212.Obj);
  (* (--Rsp)) = (Wrd2182.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_352)
  (Wrd2198.Obj) = Rvl;
  goto label_604;

DEFLABEL (label_607)
  (Wrd2193.Obj) = (Rsp [3]);
  (Wrd2194.Obj) = (current_block [OBJECT_32_5]);
  (Wrd2197.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_26]))));
  (* (--Rsp)) = (Wrd2197.Obj);
  (* (--Rsp)) = (Wrd2194.Obj);
  (* (--Rsp)) = (Wrd2193.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_351)
  (Wrd2182.Obj) = Rvl;
  goto label_606;

DEFLABEL (label_609)
  (Wrd2173.Obj) = (Rsp [0]);
  (Wrd2176.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_25]))));
  (* (--Rsp)) = (Wrd2176.Obj);
  (* (--Rsp)) = (Wrd2173.Obj);
  (* (--Rsp)) = (Wrd2143.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_350)
  (Wrd2159.Obj) = Rvl;
  goto label_608;

DEFLABEL (label_611)
  (Wrd2154.Obj) = (Rsp [3]);
  (Wrd2155.Obj) = (current_block [OBJECT_32_5]);
  (Wrd2158.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_24]))));
  (* (--Rsp)) = (Wrd2158.Obj);
  (* (--Rsp)) = (Wrd2155.Obj);
  (* (--Rsp)) = (Wrd2154.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_349)
  (Wrd2143.Obj) = Rvl;
  goto label_610;

DEFLABEL (label_613)
  (Wrd2136.Obj) = (Rsp [0]);
  (Wrd2139.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_23]))));
  (* (--Rsp)) = (Wrd2139.Obj);
  (* (--Rsp)) = (Wrd2136.Obj);
  (* (--Rsp)) = (Wrd2106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_348)
  (Wrd2122.Obj) = Rvl;
  goto label_612;

DEFLABEL (label_615)
  (Wrd2117.Obj) = (Rsp [3]);
  (Wrd2118.Obj) = (current_block [OBJECT_32_5]);
  (Wrd2121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_22]))));
  (* (--Rsp)) = (Wrd2121.Obj);
  (* (--Rsp)) = (Wrd2118.Obj);
  (* (--Rsp)) = (Wrd2117.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_347)
  (Wrd2106.Obj) = Rvl;
  goto label_614;

DEFLABEL (label_617)
  (Wrd2310.Obj) = (Rsp [0]);
  (Wrd2313.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_21]))));
  (* (--Rsp)) = (Wrd2313.Obj);
  (* (--Rsp)) = (Wrd2310.Obj);
  (* (--Rsp)) = (Wrd2047.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_356)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_596;
  goto label_616;

DEFLABEL (label_619)
  (Wrd2058.Obj) = (Rsp [3]);
  (Wrd2059.Obj) = (current_block [OBJECT_32_5]);
  (Wrd2062.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_20]))));
  (* (--Rsp)) = (Wrd2062.Obj);
  (* (--Rsp)) = (Wrd2059.Obj);
  (* (--Rsp)) = (Wrd2058.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_344)
  (Wrd2047.Obj) = Rvl;
  goto label_618;

DEFLABEL (label_620)
  (Wrd2324.Obj) = (Rsp [3]);
  (Wrd2325.uLng) = (OBJECT_TYPE (Wrd2324.Obj));
  if (! ((Wrd2325.uLng) == 62))
    goto label_622;
  (Wrd2321.pObj) = (OBJECT_ADDRESS (Wrd2324.Obj));
  (Wrd2322.Obj) = ((Wrd2321.pObj) [0]);
  (Wrd2323.Lng) = (FIXNUM_TO_LONG (Wrd2322.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd2323.Lng))))
    goto label_622;
  (Wrd2315.Obj) = ((Wrd2321.pObj) [8]);

DEFLABEL (label_621)
  (Rsp [2]) = (Wrd2315.Obj);
  Rsp = (& (Rsp [2]));
  goto search_overflow_220;

DEFLABEL (label_622)
  (Wrd2326.Obj) = (Rsp [3]);
  (Wrd2327.Obj) = (current_block [OBJECT_32_3]);
  (Wrd2330.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_19]))));
  (* (--Rsp)) = (Wrd2330.Obj);
  (* (--Rsp)) = (Wrd2327.Obj);
  (* (--Rsp)) = (Wrd2326.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_357)
  (Wrd2315.Obj) = Rvl;
  goto label_621;

DEFLABEL (search_overflow_371)
DEFLABEL (search_overflow_220)
  INTERRUPT_CHECK (26, LABEL_32_7);
  (Wrd2332.Obj) = (Rsp [0]);
  if ((Wrd2332.Obj) == (current_block [OBJECT_32_0]))
    goto label_646;
  (Wrd2338.uLng) = (OBJECT_TYPE (Wrd2332.Obj));
  if (! ((Wrd2338.uLng) == 1))
    goto label_645;
  (Wrd2336.pObj) = (OBJECT_ADDRESS (Wrd2332.Obj));
  (Wrd2334.Obj) = ((Wrd2336.pObj) [0]);

DEFLABEL (label_644)
  (Wrd2345.uLng) = (OBJECT_TYPE (Wrd2334.Obj));
  if (! ((Wrd2345.uLng) == 1))
    goto label_643;
  (Wrd2344.pObj) = (OBJECT_ADDRESS (Wrd2334.Obj));
  (Wrd2343.Obj) = ((Wrd2344.pObj) [0]);

DEFLABEL (label_642)
  (Wrd2351.pObj) = (OBJECT_ADDRESS (Wrd2343.Obj));
  (Wrd2350.Obj) = ((Wrd2351.pObj) [0]);
  (Wrd2352.Obj) = (Rsp [2]);
  if ((Wrd2352.Obj) == (Wrd2350.Obj))
    goto label_626;

DEFLABEL (label_625)
  (Wrd2356.Obj) = (Rsp [0]);
  (Wrd2357.uLng) = (OBJECT_TYPE (Wrd2356.Obj));
  if (! ((Wrd2357.uLng) == 1))
    goto label_624;
  (Wrd2355.pObj) = (OBJECT_ADDRESS (Wrd2356.Obj));
  (Wrd2353.Obj) = ((Wrd2355.pObj) [1]);

DEFLABEL (label_623)
  (Rsp [0]) = (Wrd2353.Obj);
  goto search_overflow_220;

DEFLABEL (label_624)
  (Wrd2361.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_17]))));
  (* (--Rsp)) = (Wrd2361.Obj);
  (* (--Rsp)) = (Wrd2356.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_360)
  (Wrd2353.Obj) = Rvl;
  goto label_623;

DEFLABEL (label_626)
  (Wrd2365.Obj) = (Rsp [0]);
  (Wrd2366.uLng) = (OBJECT_TYPE (Wrd2365.Obj));
  if (! ((Wrd2366.uLng) == 1))
    goto label_641;
  (Wrd2364.pObj) = (OBJECT_ADDRESS (Wrd2365.Obj));
  (Wrd2362.Obj) = ((Wrd2364.pObj) [0]);

DEFLABEL (label_640)
  (Wrd2373.uLng) = (OBJECT_TYPE (Wrd2362.Obj));
  if (! ((Wrd2373.uLng) == 1))
    goto label_639;
  (Wrd2372.pObj) = (OBJECT_ADDRESS (Wrd2362.Obj));
  (Wrd2371.Obj) = ((Wrd2372.pObj) [0]);

DEFLABEL (label_638)
  (Wrd2379.pObj) = (OBJECT_ADDRESS (Wrd2371.Obj));
  (Wrd2378.Obj) = ((Wrd2379.pObj) [1]);
  (Wrd2381.pObj) = (OBJECT_ADDRESS (Wrd2378.Obj));
  (Wrd2380.Obj) = ((Wrd2381.pObj) [0]);
  (Wrd2382.Obj) = (Rsp [3]);
  if (! ((Wrd2382.Obj) == (Wrd2380.Obj)))
    goto label_625;
  (Wrd2386.Obj) = (Rsp [0]);
  (Wrd2387.uLng) = (OBJECT_TYPE (Wrd2386.Obj));
  if (! ((Wrd2387.uLng) == 1))
    goto label_637;
  (Wrd2385.pObj) = (OBJECT_ADDRESS (Wrd2386.Obj));
  (Wrd2383.Obj) = ((Wrd2385.pObj) [0]);

DEFLABEL (label_636)
  (Wrd2394.uLng) = (OBJECT_TYPE (Wrd2383.Obj));
  if (! ((Wrd2394.uLng) == 1))
    goto label_635;
  (Wrd2393.pObj) = (OBJECT_ADDRESS (Wrd2383.Obj));
  (Wrd2392.Obj) = ((Wrd2393.pObj) [0]);

DEFLABEL (label_634)
  (Wrd2400.pObj) = (OBJECT_ADDRESS (Wrd2392.Obj));
  (Wrd2399.Obj) = ((Wrd2400.pObj) [1]);
  (Wrd2402.pObj) = (OBJECT_ADDRESS (Wrd2399.Obj));
  (Wrd2401.Obj) = ((Wrd2402.pObj) [1]);
  (Wrd2404.pObj) = (OBJECT_ADDRESS (Wrd2401.Obj));
  (Wrd2403.Obj) = ((Wrd2404.pObj) [0]);
  (Wrd2405.Obj) = (Rsp [4]);
  if (! ((Wrd2405.Obj) == (Wrd2403.Obj)))
    goto label_625;
  (Wrd2409.Obj) = (Rsp [0]);
  (Wrd2410.uLng) = (OBJECT_TYPE (Wrd2409.Obj));
  if (! ((Wrd2410.uLng) == 1))
    goto label_633;
  (Wrd2408.pObj) = (OBJECT_ADDRESS (Wrd2409.Obj));
  (Wrd2406.Obj) = ((Wrd2408.pObj) [0]);

DEFLABEL (label_632)
  (Wrd2417.uLng) = (OBJECT_TYPE (Wrd2406.Obj));
  if (! ((Wrd2417.uLng) == 1))
    goto label_631;
  (Wrd2416.pObj) = (OBJECT_ADDRESS (Wrd2406.Obj));
  (Wrd2415.Obj) = ((Wrd2416.pObj) [0]);

DEFLABEL (label_630)
  (Wrd2423.pObj) = (OBJECT_ADDRESS (Wrd2415.Obj));
  (Wrd2422.Obj) = ((Wrd2423.pObj) [1]);
  (Wrd2425.pObj) = (OBJECT_ADDRESS (Wrd2422.Obj));
  (Wrd2424.Obj) = ((Wrd2425.pObj) [1]);
  (Wrd2427.pObj) = (OBJECT_ADDRESS (Wrd2424.Obj));
  (Wrd2426.Obj) = ((Wrd2427.pObj) [1]);
  (Wrd2429.pObj) = (OBJECT_ADDRESS (Wrd2426.Obj));
  (Wrd2428.Obj) = ((Wrd2429.pObj) [0]);
  (Wrd2430.Obj) = (Rsp [5]);
  if (! ((Wrd2430.Obj) == (Wrd2428.Obj)))
    goto label_625;
  (Wrd2434.Obj) = (Rsp [0]);
  (Wrd2435.uLng) = (OBJECT_TYPE (Wrd2434.Obj));
  if (! ((Wrd2435.uLng) == 1))
    goto label_629;
  (Wrd2433.pObj) = (OBJECT_ADDRESS (Wrd2434.Obj));
  (Wrd2431.Obj) = ((Wrd2433.pObj) [0]);

DEFLABEL (label_628)
  (Rsp [5]) = (Wrd2431.Obj);
  Rsp = (& (Rsp [5]));
  (Wrd2444.Obj) = (Rsp [0]);
  (Wrd2445.uLng) = (OBJECT_TYPE (Wrd2444.Obj));
  if ((Wrd2445.uLng) == 1)
    goto label_627;
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_627)
  (Wrd2443.pObj) = (OBJECT_ADDRESS (Wrd2444.Obj));
  (Wrd2441.Obj) = ((Wrd2443.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd2441.Obj);
  goto label_422;

DEFLABEL (label_629)
  (Wrd2439.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_16]))));
  (* (--Rsp)) = (Wrd2439.Obj);
  (* (--Rsp)) = (Wrd2434.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_367)
  (Wrd2431.Obj) = Rvl;
  goto label_628;

DEFLABEL (label_631)
  (Wrd2421.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_15]))));
  (* (--Rsp)) = (Wrd2421.Obj);
  (* (--Rsp)) = (Wrd2406.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_366)
  (Wrd2415.Obj) = Rvl;
  goto label_630;

DEFLABEL (label_633)
  (Wrd2414.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_14]))));
  (* (--Rsp)) = (Wrd2414.Obj);
  (* (--Rsp)) = (Wrd2409.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_365)
  (Wrd2406.Obj) = Rvl;
  goto label_632;

DEFLABEL (label_635)
  (Wrd2398.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_13]))));
  (* (--Rsp)) = (Wrd2398.Obj);
  (* (--Rsp)) = (Wrd2383.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_364)
  (Wrd2392.Obj) = Rvl;
  goto label_634;

DEFLABEL (label_637)
  (Wrd2391.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_12]))));
  (* (--Rsp)) = (Wrd2391.Obj);
  (* (--Rsp)) = (Wrd2386.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_363)
  (Wrd2383.Obj) = Rvl;
  goto label_636;

DEFLABEL (label_639)
  (Wrd2377.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_11]))));
  (* (--Rsp)) = (Wrd2377.Obj);
  (* (--Rsp)) = (Wrd2362.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_362)
  (Wrd2371.Obj) = Rvl;
  goto label_638;

DEFLABEL (label_641)
  (Wrd2370.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd2370.Obj);
  (* (--Rsp)) = (Wrd2365.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_361)
  (Wrd2362.Obj) = Rvl;
  goto label_640;

DEFLABEL (label_643)
  (Wrd2349.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_9]))));
  (* (--Rsp)) = (Wrd2349.Obj);
  (* (--Rsp)) = (Wrd2334.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_359)
  (Wrd2343.Obj) = Rvl;
  goto label_642;

DEFLABEL (label_645)
  (Wrd2342.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd2342.Obj);
  (* (--Rsp)) = (Wrd2332.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_358)
  (Wrd2334.Obj) = Rvl;
  goto label_644;

DEFLABEL (label_646)
  Rsp = (& (Rsp [7]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_422;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_6 5
#define LABEL_33_7 7
#define LABEL_33_8 9
#define LABEL_33_9 11
#define LABEL_33_11 13
#define LABEL_33_5 15
#define LABEL_33_13 17
#define LABEL_33_14 19
#define LABEL_33_16 21
#define LABEL_33_17 23
#define TAG_33_18 10
#define LABEL_33_21 25
#define LABEL_33_10 27
#define LABEL_33_23 29
#define LABEL_33_24 31
#define LABEL_33_25 33
#define LABEL_33_20 35
#define ENVIRONMENT_LABEL_33_3 60
#define DEBUGGING_LABEL_33_2 59
#define OBJECT_33_13 58
#define OBJECT_33_12 57
#define OBJECT_33_11 56
#define OBJECT_33_10 55
#define OBJECT_33_9 54
#define OBJECT_33_8 53
#define OBJECT_33_7 52
#define OBJECT_33_6 51
#define OBJECT_33_5 50
#define OBJECT_33_4 49
#define OBJECT_33_3 48
#define OBJECT_33_2 47
#define OBJECT_33_1 46
#define OBJECT_33_0 45
#define EXECUTE_CACHE_33_22 37
#define EXECUTE_CACHE_33_19 39
#define EXECUTE_CACHE_33_15 41
#define EXECUTE_CACHE_33_12 43
#define FREE_REFERENCES_LABEL_33_0 36
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd13;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd56;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd50;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd91;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd82;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_33_4);
      goto compute_method_and_store_30;

    case 1:
      current_block = (Rpc - LABEL_33_6);
      goto label_32;

    case 2:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_21;

    case 3:
      current_block = (Rpc - LABEL_33_8);
      goto continuation_20;

    case 4:
      current_block = (Rpc - LABEL_33_9);
      goto do_loop_15;

    case 5:
      current_block = (Rpc - LABEL_33_11);
      goto label_35;

    case 6:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_33_13);
      goto label_33;

    case 8:
      current_block = (Rpc - LABEL_33_14);
      goto label_34;

    case 9:
      current_block = (Rpc - LABEL_33_16);
      goto continuation_27;

    case 10:
      current_block = (Rpc - LABEL_33_17);
      goto lambda_43;

    case 11:
      current_block = (Rpc - LABEL_33_21);
      goto label_36;

    case 12:
      current_block = (Rpc - LABEL_33_10);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_33_23);
      goto label_39;

    case 14:
      current_block = (Rpc - LABEL_33_24);
      goto label_37;

    case 15:
      current_block = (Rpc - LABEL_33_25);
      goto label_38;

    case 16:
      current_block = (Rpc - LABEL_33_20);
      goto continuation_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_method_and_store_41)
DEFLABEL (compute_method_and_store_30)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_33_0]);
  (Wrd12.Obj) = (current_block [OBJECT_33_1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_45;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_45;
  (Wrd15.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_44)
  (Wrd29.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd30.Obj);
  goto do_loop_15;

DEFLABEL (label_45)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_33_2]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_54)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_53;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_53;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_52)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_51;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd32.Lng))))
    goto label_51;
  (Wrd26.Obj) = ((Wrd30.pObj) [5]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_50)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_49;
  (Wrd45.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_33_7);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_48)
  (Wrd50.Obj) = (Rsp [0]);
  if (! ((Wrd50.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_46;
  (Wrd65.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd65.Obj);
  (Wrd66.Obj) = (Rsp [6]);
  (Rsp [2]) = (Wrd66.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_15]));

DEFLABEL (label_46)
  Rsp = (& (Rsp [4]));
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_47)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_16]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd58.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_17])));
  Rhp += 3;
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd58.pObj)));
  Wrd63 = Wrd58;
  (Wrd64.Obj) = (Rsp [3]);
  ((Wrd63.pObj) [2]) = (Wrd64.Obj);
  (Wrd62.Obj) = (Rsp [2]);
  ((Wrd63.pObj) [3]) = (Wrd62.Obj);
  (Wrd60.Obj) = (Rsp [1]);
  ((Wrd63.pObj) [4]) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_19]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_33_16);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_9]), 2);

DEFLABEL (label_49)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_48;

DEFLABEL (label_51)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_33_8]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_33_7]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_33_8);
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (do_loop_42)
DEFLABEL (do_loop_15)
  INTERRUPT_CHECK (26, LABEL_33_9);
  (Wrd68.Obj) = (Rsp [2]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if ((Wrd69.Lng) > 0)
    goto label_56;
  (Wrd70.Obj) = (current_block [OBJECT_33_4]);
  (* (--Rsp)) = (Wrd70.Obj);
  goto label_55;

DEFLABEL (label_56)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_55)
DEFLABEL (label_67)
  (Wrd71.Obj) = (Rsp [0]);
  if ((Wrd71.Obj) == ((SCHEME_OBJECT) 0))
    goto label_58;
  Rsp = (& (Rsp [4]));
  (Wrd78.Obj) = (Rsp [0]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if ((Wrd79.uLng) == 1)
    goto label_57;
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_6]), 1);

DEFLABEL (label_57)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd75.Obj);
  goto label_54;

DEFLABEL (label_58)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd86.Obj) = (Rsp [2]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 1))
    goto label_66;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [0]);
  (* (--Rsp)) = (Wrd85.Obj);

DEFLABEL (label_65)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_33_10);
  (Wrd9.Obj) = (current_block [OBJECT_33_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_64;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  ((Wrd34.pObj) [1]) = (Wrd6.Obj);

DEFLABEL (label_63)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_62;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_61)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_60;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_59)
  (Rsp [2]) = (Wrd19.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd31.Lng) = ((Wrd30.Lng) - 1L);
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));
  (Rsp [3]) = (Wrd28.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_15;

DEFLABEL (label_60)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_25]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_6]), 1);

DEFLABEL (label_38)
  (Wrd19.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_24]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_6]), 1);

DEFLABEL (label_37)
  (Wrd10.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_23]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_11]), 2);

DEFLABEL (label_39)
  goto label_63;

DEFLABEL (label_66)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_5]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_33_17);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_33_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_71;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd30.Lng))))
    goto label_71;
  (Wrd22.Obj) = ((Wrd28.pObj) [7]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_70)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_22]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_33_20);
  (Rsp [2]) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_69;

DEFLABEL (label_68)
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_13]), 3);

DEFLABEL (label_69)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_68;
  ((Wrd14.pObj) [7]) = Rvl;
  Rvl = (current_block [OBJECT_33_12]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd36.Obj) = (Rsp [5]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [2]);
  (Wrd38.Obj) = (current_block [OBJECT_33_10]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_21]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_70;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_6 7
#define LABEL_34_7 9
#define LABEL_34_8 11
#define LABEL_34_9 13
#define ENVIRONMENT_LABEL_34_3 22
#define DEBUGGING_LABEL_34_2 21
#define OBJECT_34_3 20
#define OBJECT_34_2 19
#define OBJECT_34_1 18
#define OBJECT_34_0 17
#define FREE_REFERENCE_34_1 15
#define FREE_REFERENCE_34_0 16
#define FREE_REFERENCES_LABEL_34_0 14
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd53;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd58;
  machine_word Wrd64;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd75;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd137;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd110;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd117;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd94;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd77;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
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
      current_block = (Rpc - LABEL_34_4);
      goto dispatch_tag_11;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_34_7);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_34_8);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_34_9);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dispatch_tag_19)
DEFLABEL (dispatch_tag_11)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_29;

DEFLABEL (label_28)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd7.Obj) = ((Wrd8.pObj) [0]);
  (Wrd11.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd70.uLng) == 10))
    goto label_27;
  if (! ((Wrd11.uLng) == 26))
    goto label_27;
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) (Wrd66.Lng)) < ((unsigned long) (Wrd69.Lng))))
    goto label_27;
  (Wrd16.pObj) = (& ((Wrd67.pObj) [(Wrd13.Lng)]));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;

DEFLABEL (label_23)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd43.Obj) = ((Wrd41.pObj) [0]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  (Wrd44.Obj) = (MAKE_OBJECT (26, (Wrd47.uLng)));
  (Rsp [1]) = (Wrd44.Obj);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd64.uLng) == 10)
    goto label_21;

DEFLABEL (label_20)
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_3]), 2);

DEFLABEL (label_21)
  if (! ((Wrd45.uLng) == 26))
    goto label_20;
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) (Wrd58.Lng)) < ((unsigned long) (Wrd62.Lng))))
    goto label_20;
  (Wrd53.pObj) = (& ((Wrd60.pObj) [(Wrd47.Lng)]));
  Rvl = ((Wrd53.pObj) [1]);

DEFLABEL (label_22)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_1]));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);
  (Wrd23.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  (Wrd22.Obj) = (MAKE_OBJECT (26, (Wrd25.uLng)));
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_26;
  if (! ((Wrd23.uLng) == 26))
    goto label_26;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) (Wrd31.Lng)) < ((unsigned long) (Wrd34.Lng))))
    goto label_26;
  (Wrd28.pObj) = (& ((Wrd32.pObj) [(Wrd25.Lng)]));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_25)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_26)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_3]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_27)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_3]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_23;

DEFLABEL (label_29)
  if (! ((Wrd6.uLng) == 62))
    goto label_37;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd85.Lng))))
    goto label_37;
  (Wrd77.Obj) = ((Wrd83.pObj) [1]);

DEFLABEL (label_36)
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd93.uLng) == 62))
    goto label_28;
  (Wrd103.Obj) = (Rsp [0]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 62))
    goto label_35;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd101.Obj) = ((Wrd100.pObj) [0]);
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd101.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd102.Lng))))
    goto label_35;
  (Wrd94.Obj) = ((Wrd100.pObj) [1]);

DEFLABEL (label_34)
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd117.uLng) == 62))
    goto label_33;
  (Wrd114.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd115.Obj) = ((Wrd114.pObj) [0]);
  (Wrd116.Lng) = (FIXNUM_TO_LONG (Wrd115.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd116.Lng))))
    goto label_33;
  (Wrd110.Obj) = ((Wrd114.pObj) [1]);

DEFLABEL (label_32)
  if (! ((Wrd110.Obj) == (current_block [OBJECT_34_2])))
    goto label_28;
  (Wrd124.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd124.Obj);
  (Wrd125.Obj) = (current_block [OBJECT_34_0]);
  (Rsp [1]) = (Wrd125.Obj);
  (Wrd137.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if ((Wrd137.uLng) == 62)
    goto label_31;

DEFLABEL (label_30)
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_31)
  (Wrd133.pObj) = (OBJECT_ADDRESS (Wrd124.Obj));
  (Wrd134.Obj) = ((Wrd133.pObj) [0]);
  (Wrd135.Lng) = (FIXNUM_TO_LONG (Wrd134.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd135.Lng))))
    goto label_30;
  Rvl = ((Wrd133.pObj) [1]);
  goto label_22;

DEFLABEL (label_33)
  (Wrd119.Obj) = (current_block [OBJECT_34_0]);
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_17)
  (Wrd110.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd105.Obj) = (Rsp [0]);
  (Wrd106.Obj) = (current_block [OBJECT_34_0]);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_16)
  (Wrd94.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd89.Obj) = (current_block [OBJECT_34_0]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_15)
  (Wrd77.Obj) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_6 5
#define LABEL_35_5 7
#define LABEL_35_8 9
#define LABEL_35_14 11
#define LABEL_35_18 13
#define LABEL_35_9 15
#define LABEL_35_20 17
#define LABEL_35_23 19
#define LABEL_35_24 21
#define LABEL_35_15 23
#define LABEL_35_16 25
#define TAG_35_17 11
#define LABEL_35_11 27
#define LABEL_35_28 29
#define LABEL_35_29 31
#define LABEL_35_12 33
#define LABEL_35_26 35
#define LABEL_35_31 37
#define TAG_35_32 17
#define LABEL_35_21 39
#define TAG_35_22 18
#define ENVIRONMENT_LABEL_35_3 67
#define DEBUGGING_LABEL_35_2 66
#define OBJECT_35_3 65
#define OBJECT_35_2 64
#define OBJECT_35_1 63
#define OBJECT_35_0 62
#define EXECUTE_CACHE_35_33 41
#define EXECUTE_CACHE_35_30 43
#define EXECUTE_CACHE_35_27 45
#define EXECUTE_CACHE_35_25 47
#define EXECUTE_CACHE_35_19 49
#define EXECUTE_CACHE_35_13 51
#define EXECUTE_CACHE_35_10 53
#define EXECUTE_CACHE_35_7 55
#define FREE_REFERENCE_35_1 58
#define FREE_REFERENCE_35_0 59
#define FREE_ASSIGNMENT_35_0 61
#define FREE_REFERENCES_LABEL_35_0 40
#define NUMBER_OF_LINKER_SECTIONS_35_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_35_4);
      goto make_built_in_tag_20;

    case 1:
      current_block = (Rpc - LABEL_35_6);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_35_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_35_14);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_35_18);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_35_9);
      goto lambda_1;

    case 7:
      current_block = (Rpc - LABEL_35_20);
      goto continuation_14;

    case 8:
      current_block = (Rpc - LABEL_35_23);
      goto continuation_17;

    case 9:
      current_block = (Rpc - LABEL_35_24);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_35_15);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_35_16);
      goto lambda_29;

    case 12:
      current_block = (Rpc - LABEL_35_11);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_35_28);
      goto label_25;

    case 14:
      current_block = (Rpc - LABEL_35_29);
      goto label_26;

    case 15:
      current_block = (Rpc - LABEL_35_12);
      goto continuation_3;

    case 16:
      current_block = (Rpc - LABEL_35_26);
      goto continuation_11;

    case 17:
      current_block = (Rpc - LABEL_35_31);
      goto lambda_32;

    case 18:
      current_block = (Rpc - LABEL_35_21);
      goto lambda_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_built_in_tag_28)
DEFLABEL (make_built_in_tag_20)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_47;
  Wrd9 = Wrd13;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_35_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_38;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_11]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_12]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_35_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_30]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_35_11);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_37;
  Wrd7 = Wrd11;

DEFLABEL (label_36)
  (Wrd16.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_35_0]));
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  ((Wrd17.pObj) [0]) = (Wrd13.Obj);

DEFLABEL (label_33)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_35)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_34;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_35_29])), (Wrd17.pObj), (Wrd13.Obj));

DEFLABEL (label_26)
  goto label_33;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_28])), (Wrd8.pObj));

DEFLABEL (label_25)
  (Wrd7.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_45;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_44)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_16])));
  Rhp += 1;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd21 = Wrd20;
  (Wrd22.Obj) = (Rsp [1]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_43;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_35_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_26]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_27]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_35_26);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_31])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_19]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_35_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd25.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_21])));
  Rhp += 1;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd29 = Wrd28;
  (Wrd30.Obj) = (Rsp [5]);
  ((Wrd29.pObj) [2]) = (Wrd30.Obj);
  (Rsp [1]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_19]));

DEFLABEL (label_39)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_41)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_23]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_35_2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_25]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_35_23);

DEFLABEL (label_40)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_18]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_6])), (Wrd10.pObj));

DEFLABEL (label_22)
  (Wrd9.Obj) = Rvl;
  goto label_46;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_35_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  goto label_40;

DEFLABEL (lambda_30)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_35_9);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_35_16);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  if ((Wrd6.Obj) == (Wrd9.Obj))
    goto label_49;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_48;

DEFLABEL (label_49)
  Rvl = (current_block [OBJECT_35_3]);

DEFLABEL (label_48)
DEFLABEL (label_50)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_35_31);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_33]));

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_35_21);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_33]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define ENVIRONMENT_LABEL_36_3 12
#define DEBUGGING_LABEL_36_2 11
#define EXECUTE_CACHE_36_6 7
#define FREE_REFERENCE_36_0 10
#define FREE_REFERENCES_LABEL_36_0 6
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_36_4);
      goto built_in_dispatch_tags_0;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (built_in_dispatch_tags_4)
DEFLABEL (built_in_dispatch_tags_0)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_6 7
#define TAG_37_7 2
#define LABEL_37_9 9
#define ENVIRONMENT_LABEL_37_3 20
#define DEBUGGING_LABEL_37_2 19
#define EXECUTE_CACHE_37_11 11
#define EXECUTE_CACHE_37_10 13
#define EXECUTE_CACHE_37_8 15
#define FREE_REFERENCE_37_0 18
#define FREE_REFERENCES_LABEL_37_0 10
#define NUMBER_OF_LINKER_SECTIONS_37_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_37_4);
      goto built_in_dispatch_tag_2;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_37_6);
      goto lambda_7;

    case 3:
      current_block = (Rpc - LABEL_37_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (built_in_dispatch_tag_6)
DEFLABEL (built_in_dispatch_tag_2)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_6])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_8;

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_37_6);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_9);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_7 5
#define LABEL_38_5 7
#define LABEL_38_9 9
#define LABEL_38_11 11
#define LABEL_38_12 13
#define LABEL_38_6 15
#define LABEL_38_10 17
#define LABEL_38_16 19
#define LABEL_38_14 21
#define LABEL_38_17 23
#define LABEL_38_18 25
#define LABEL_38_20 27
#define LABEL_38_22 29
#define LABEL_38_23 31
#define ENVIRONMENT_LABEL_38_3 59
#define DEBUGGING_LABEL_38_2 58
#define OBJECT_38_7 57
#define OBJECT_38_6 56
#define OBJECT_38_5 55
#define OBJECT_38_4 54
#define OBJECT_38_3 53
#define OBJECT_38_2 52
#define OBJECT_38_1 51
#define OBJECT_38_0 50
#define EXECUTE_CACHE_38_21 33
#define EXECUTE_CACHE_38_19 35
#define EXECUTE_CACHE_38_15 37
#define EXECUTE_CACHE_38_13 39
#define EXECUTE_CACHE_38_8 41
#define FREE_REFERENCE_38_2 44
#define FREE_REFERENCE_38_1 45
#define FREE_REFERENCE_38_0 46
#define FREE_ASSIGNMENT_38_1 48
#define FREE_ASSIGNMENT_38_0 49
#define FREE_REFERENCES_LABEL_38_0 32
#define NUMBER_OF_LINKER_SECTIONS_38_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_38_4);
      goto initialize_conditionsB_9;

    case 1:
      current_block = (Rpc - LABEL_38_7);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_38_9);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_38_11);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_38_12);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_38_6);
      goto lambda_6;

    case 7:
      current_block = (Rpc - LABEL_38_10);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_38_16);
      goto label_15;

    case 9:
      current_block = (Rpc - LABEL_38_14);
      goto continuation_0;

    case 10:
      current_block = (Rpc - LABEL_38_17);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_38_18);
      goto continuation_1;

    case 12:
      current_block = (Rpc - LABEL_38_20);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_38_22);
      goto continuation_5;

    case 14:
      current_block = (Rpc - LABEL_38_23);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_conditionsB_17)
DEFLABEL (initialize_conditionsB_9)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_30;
  Wrd11 = Wrd15;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_38_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_38_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_28;

DEFLABEL (label_27)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_26)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_25;
  Wrd21 = Wrd25;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_2]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_23;
  Wrd28 = Wrd32;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_38_10);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_38_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_38_3]);
  goto pop_return;

DEFLABEL (label_21)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_38_16])), (Wrd6.pObj), Rvl);

DEFLABEL (label_15)
  goto label_19;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_12])), (Wrd29.pObj));

DEFLABEL (label_14)
  (Wrd28.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_11])), (Wrd22.pObj));

DEFLABEL (label_13)
  (Wrd21.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_28)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_27;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_38_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_12)
  goto label_26;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_7])), (Wrd12.pObj));

DEFLABEL (label_11)
  (Wrd11.Obj) = Rvl;
  goto label_29;

DEFLABEL (lambda_18)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_38_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_15]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_38_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_19]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_21]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_38_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_38_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_23]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_38_6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_38_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_21]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_38_22);
  (Wrd5.Obj) = (current_block [OBJECT_38_7]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_15]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_7 7
#define LABEL_39_8 9
#define LABEL_39_10 11
#define LABEL_39_11 13
#define LABEL_39_12 15
#define LABEL_39_16 17
#define LABEL_39_13 19
#define LABEL_39_14 21
#define LABEL_39_17 23
#define LABEL_39_22 25
#define LABEL_39_18 27
#define LABEL_39_19 29
#define LABEL_39_23 31
#define LABEL_39_24 33
#define LABEL_39_30 35
#define TAG_39_79 16
#define LABEL_39_33 37
#define TAG_39_71 17
#define LABEL_39_36 39
#define TAG_39_70 18
#define LABEL_39_39 41
#define TAG_39_68 19
#define LABEL_39_42 43
#define TAG_39_65 20
#define LABEL_39_25 45
#define LABEL_39_47 47
#define LABEL_39_48 49
#define LABEL_39_49 51
#define LABEL_39_50 53
#define LABEL_39_28 55
#define LABEL_39_29 57
#define LABEL_39_45 59
#define TAG_39_46 28
#define LABEL_39_57 61
#define LABEL_39_51 63
#define LABEL_39_59 65
#define LABEL_39_60 67
#define LABEL_39_53 69
#define LABEL_39_62 71
#define LABEL_39_54 73
#define LABEL_39_55 75
#define LABEL_39_56 77
#define LABEL_39_61 79
#define LABEL_39_63 81
#define LABEL_39_64 83
#define LABEL_39_66 85
#define LABEL_39_67 87
#define LABEL_39_69 89
#define LABEL_39_43 91
#define TAG_39_44 44
#define LABEL_39_40 93
#define TAG_39_41 45
#define LABEL_39_72 95
#define LABEL_39_37 97
#define TAG_39_38 47
#define LABEL_39_34 99
#define TAG_39_35 48
#define LABEL_39_75 101
#define LABEL_39_73 103
#define LABEL_39_74 105
#define LABEL_39_78 107
#define LABEL_39_76 109
#define LABEL_39_77 111
#define LABEL_39_31 113
#define TAG_39_32 55
#define LABEL_39_80 115
#define LABEL_39_82 117
#define ENVIRONMENT_LABEL_39_3 185
#define DEBUGGING_LABEL_39_2 184
#define OBJECT_39_31 183
#define OBJECT_39_30 182
#define OBJECT_39_29 181
#define OBJECT_39_28 180
#define OBJECT_39_27 179
#define OBJECT_39_26 178
#define OBJECT_39_25 177
#define OBJECT_39_24 176
#define OBJECT_39_23 175
#define OBJECT_39_22 174
#define OBJECT_39_21 173
#define OBJECT_39_20 172
#define OBJECT_39_19 171
#define OBJECT_39_18 170
#define OBJECT_39_17 169
#define OBJECT_39_16 168
#define OBJECT_39_15 167
#define OBJECT_39_14 166
#define OBJECT_39_13 165
#define OBJECT_39_12 164
#define OBJECT_39_11 163
#define OBJECT_39_10 162
#define OBJECT_39_9 161
#define OBJECT_39_8 160
#define OBJECT_39_7 159
#define OBJECT_39_6 158
#define OBJECT_39_5 157
#define OBJECT_39_4 156
#define OBJECT_39_3 155
#define OBJECT_39_2 154
#define OBJECT_39_1 153
#define OBJECT_39_0 152
#define EXECUTE_CACHE_39_83 119
#define EXECUTE_CACHE_39_81 121
#define EXECUTE_CACHE_39_58 123
#define EXECUTE_CACHE_39_52 125
#define EXECUTE_CACHE_39_27 127
#define EXECUTE_CACHE_39_26 129
#define EXECUTE_CACHE_39_21 131
#define EXECUTE_CACHE_39_20 133
#define EXECUTE_CACHE_39_15 135
#define EXECUTE_CACHE_39_9 137
#define EXECUTE_CACHE_39_6 139
#define FREE_REFERENCE_39_3 142
#define FREE_REFERENCE_39_2 143
#define FREE_REFERENCE_39_1 144
#define FREE_REFERENCE_39_0 145
#define FREE_ASSIGNMENT_39_4 147
#define FREE_ASSIGNMENT_39_3 148
#define FREE_ASSIGNMENT_39_2 149
#define FREE_ASSIGNMENT_39_1 150
#define FREE_ASSIGNMENT_39_0 151
#define FREE_REFERENCES_LABEL_39_0 118
#define NUMBER_OF_LINKER_SECTIONS_39_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
generic_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd45;
  machine_word Wrd22;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd57;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd79;
  machine_word Wrd83;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd76;
  machine_word Wrd77;
  machine_word Wrd93;
  machine_word Wrd97;
  machine_word Wrd101;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd90;
  machine_word Wrd91;
  machine_word Wrd111;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd108;
  machine_word Wrd109;
  machine_word Wrd121;
  machine_word Wrd125;
  machine_word Wrd129;
  machine_word Wrd133;
  machine_word Wrd137;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd118;
  machine_word Wrd119;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_39_4);
      goto initialize_generic_proceduresB_80;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto label_82;

    case 3:
      current_block = (Rpc - LABEL_39_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_39_10);
      goto label_83;

    case 5:
      current_block = (Rpc - LABEL_39_11);
      goto label_84;

    case 6:
      current_block = (Rpc - LABEL_39_12);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_39_16);
      goto label_85;

    case 8:
      current_block = (Rpc - LABEL_39_13);
      goto lambda_7;

    case 9:
      current_block = (Rpc - LABEL_39_14);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_39_17);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_39_22);
      goto label_86;

    case 12:
      current_block = (Rpc - LABEL_39_18);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_39_19);
      goto continuation_3;

    case 14:
      current_block = (Rpc - LABEL_39_23);
      goto continuation_21;

    case 15:
      current_block = (Rpc - LABEL_39_24);
      goto continuation_22;

    case 16:
      current_block = (Rpc - LABEL_39_30);
      goto lambda_99;

    case 17:
      current_block = (Rpc - LABEL_39_33);
      goto lambda_101;

    case 18:
      current_block = (Rpc - LABEL_39_36);
      goto lambda_103;

    case 19:
      current_block = (Rpc - LABEL_39_39);
      goto lambda_105;

    case 20:
      current_block = (Rpc - LABEL_39_42);
      goto lambda_107;

    case 21:
      current_block = (Rpc - LABEL_39_25);
      goto lambda_20;

    case 22:
      current_block = (Rpc - LABEL_39_47);
      goto label_87;

    case 23:
      current_block = (Rpc - LABEL_39_48);
      goto label_89;

    case 24:
      current_block = (Rpc - LABEL_39_49);
      goto label_88;

    case 25:
      current_block = (Rpc - LABEL_39_50);
      goto lambda_16;

    case 26:
      current_block = (Rpc - LABEL_39_28);
      goto continuation_39;

    case 27:
      current_block = (Rpc - LABEL_39_29);
      goto continuation_26;

    case 28:
      current_block = (Rpc - LABEL_39_45);
      goto lambda_110;

    case 29:
      current_block = (Rpc - LABEL_39_57);
      goto label_90;

    case 30:
      current_block = (Rpc - LABEL_39_51);
      goto continuation_11;

    case 31:
      current_block = (Rpc - LABEL_39_59);
      goto label_91;

    case 32:
      current_block = (Rpc - LABEL_39_60);
      goto label_92;

    case 33:
      current_block = (Rpc - LABEL_39_53);
      goto continuation_41;

    case 34:
      current_block = (Rpc - LABEL_39_62);
      goto label_93;

    case 35:
      current_block = (Rpc - LABEL_39_54);
      goto continuation_40;

    case 36:
      current_block = (Rpc - LABEL_39_55);
      goto continuation_25;

    case 37:
      current_block = (Rpc - LABEL_39_56);
      goto continuation_17;

    case 38:
      current_block = (Rpc - LABEL_39_61);
      goto continuation_60;

    case 39:
      current_block = (Rpc - LABEL_39_63);
      goto continuation_61;

    case 40:
      current_block = (Rpc - LABEL_39_64);
      goto continuation_44;

    case 41:
      current_block = (Rpc - LABEL_39_66);
      goto continuation_24;

    case 42:
      current_block = (Rpc - LABEL_39_67);
      goto continuation_69;

    case 43:
      current_block = (Rpc - LABEL_39_69);
      goto continuation_48;

    case 44:
      current_block = (Rpc - LABEL_39_43);
      goto lambda_108;

    case 45:
      current_block = (Rpc - LABEL_39_40);
      goto lambda_106;

    case 46:
      current_block = (Rpc - LABEL_39_72);
      goto continuation_47;

    case 47:
      current_block = (Rpc - LABEL_39_37);
      goto lambda_104;

    case 48:
      current_block = (Rpc - LABEL_39_34);
      goto lambda_102;

    case 49:
      current_block = (Rpc - LABEL_39_75);
      goto label_94;

    case 50:
      current_block = (Rpc - LABEL_39_73);
      goto continuation_46;

    case 51:
      current_block = (Rpc - LABEL_39_74);
      goto continuation_28;

    case 52:
      current_block = (Rpc - LABEL_39_78);
      goto label_95;

    case 53:
      current_block = (Rpc - LABEL_39_76);
      goto continuation_45;

    case 54:
      current_block = (Rpc - LABEL_39_77);
      goto continuation_33;

    case 55:
      current_block = (Rpc - LABEL_39_31);
      goto lambda_100;

    case 56:
      current_block = (Rpc - LABEL_39_80);
      goto continuation_52;

    case 57:
      current_block = (Rpc - LABEL_39_82);
      goto continuation_54;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_generic_proceduresB_97)
DEFLABEL (initialize_generic_proceduresB_80)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_39_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_126;

DEFLABEL (label_125)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_124)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_39_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_123;

DEFLABEL (label_122)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_121)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_39_2]));
  (Wrd19.Obj) = (current_block [OBJECT_39_1]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_120;

DEFLABEL (label_119)
  ((Wrd18.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_118)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_12]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_13]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_14]))));
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_39_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_39_12);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_39_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_117;

DEFLABEL (label_116)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_115)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_18]))));
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_39_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_26]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_39_17);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_39_4]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_114;

DEFLABEL (label_113)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_112)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_24]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_25]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_39_2]);
  (* (--Rsp)) = (Wrd26.Obj);
  goto lambda_16;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_39_24);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_25]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_39_5]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto lambda_16;

DEFLABEL (label_114)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_113;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_39_22])), (Wrd6.pObj), Rvl);

DEFLABEL (label_86)
  goto label_112;

DEFLABEL (label_117)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_116;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_39_16])), (Wrd6.pObj), Rvl);

DEFLABEL (label_85)
  goto label_115;

DEFLABEL (label_120)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_119;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_39_11])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_84)
  goto label_118;

DEFLABEL (label_123)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_122;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_39_10])), (Wrd6.pObj), Rvl);

DEFLABEL (label_83)
  goto label_121;

DEFLABEL (label_126)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_125;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_39_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_82)
  goto label_124;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_39_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_39_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_27]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_39_29);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_27]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_39_55);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_27]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_39_66);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_70);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_36])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  ((Wrd13.pObj) [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_39_20]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_16;

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_39_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_54]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_39_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_27]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_39_54);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_65);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_42])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_39_13]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_16;

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_39_64);
  (Wrd5.Obj) = (current_block [OBJECT_39_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_69]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_27]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_39_69);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_27]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_39_72);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_27]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_39_73);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_27]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_39_76);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_79);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_30])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [5]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  ((Wrd16.pObj) [6]) = Rvl;
  Rsp = (& (Rsp [4]));
  (Rsp [1]) = (Wrd6.Obj);
  goto lambda_16;

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_39_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_3]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_128;
  Wrd9 = Wrd13;

DEFLABEL (label_127)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd19.Obj) = (MAKE_OBJECT (26, (Wrd18.uLng)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_39_11]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_63]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_39_12]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_27]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_39_63);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_68);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_39])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd6.Obj);
  goto lambda_16;

DEFLABEL (label_128)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_62])), (Wrd10.pObj));

DEFLABEL (label_93)
  (Wrd9.Obj) = Rvl;
  goto label_127;

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_39_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_27]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_39_67);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_71);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_33])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_39_21]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_16;

DEFLABEL (lambda_98)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_39_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_20]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_39_19);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_130;
  (Wrd8.Obj) = (current_block [OBJECT_39_3]);
  goto label_129;

DEFLABEL (label_130)
  (Wrd8.Obj) = Rvl;

DEFLABEL (label_129)
DEFLABEL (label_131)
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_27]));

DEFLABEL (lambda_109)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_39_25);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_46);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_45])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_140)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_139;
  Wrd12 = Wrd16;

DEFLABEL (label_138)
  Wrd11 = Wrd12;
  (Wrd18.Obj) = (* (Rsp++));
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_137;
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_137;
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) (Wrd53.Lng)) < ((unsigned long) (Wrd56.Lng))))
    goto label_137;
  (Wrd47.uLng) = (OBJECT_DATUM (Wrd50.Obj));
  (Wrd49.pObj) = (& ((Wrd54.pObj) [(Wrd47.Lng)]));
  ((Wrd49.pObj) [1]) = (Wrd18.Obj);

DEFLABEL (label_136)
  (Wrd19.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd19.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_135;
  Wrd22 = Wrd26;

DEFLABEL (label_134)
  (Rsp [0]) = (Wrd22.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd45.uLng) == 10)
    goto label_133;

DEFLABEL (label_132)
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_6]), 3);

DEFLABEL (label_133)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_132;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) (Wrd39.Lng)) < ((unsigned long) (Wrd43.Lng))))
    goto label_132;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd36.Obj));
  (Wrd33.pObj) = (& ((Wrd41.pObj) [(Wrd30.Lng)]));
  ((Wrd33.pObj) [1]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_39_7]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_135)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_49])), (Wrd23.pObj));

DEFLABEL (label_88)
  (Wrd22.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_48]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_6]), 3);

DEFLABEL (label_89)
  goto label_136;

DEFLABEL (label_139)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_47])), (Wrd13.pObj));

DEFLABEL (label_87)
  (Wrd12.Obj) = Rvl;
  goto label_138;

DEFLABEL (lambda_111)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_39_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_52]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_39_51);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_144;
  Wrd6 = Wrd10;

DEFLABEL (label_143)
  Wrd5 = Wrd6;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_142;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_142;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd20.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_142;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd15.pObj) = (& ((Wrd21.pObj) [(Wrd13.Lng)]));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_141)
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  goto pop_return;

DEFLABEL (label_142)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_60]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_10]), 2);

DEFLABEL (label_92)
  (* (--Rsp)) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_59])), (Wrd7.pObj));

DEFLABEL (label_91)
  (Wrd6.Obj) = Rvl;
  goto label_143;

DEFLABEL (lambda_110)
  CLOSURE_HEADER (LABEL_39_45);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_2]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_149;
  Wrd10 = Wrd14;

DEFLABEL (label_148)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_58]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_39_56);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_145;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  Rvl = ((Wrd24.pObj) [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_145)
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_39_15]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_147;

DEFLABEL (label_146)
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_16]), 2);

DEFLABEL (label_147)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_146;
  Rvl = ((Wrd16.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_149)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_57])), (Wrd11.pObj));

DEFLABEL (label_90)
  (Wrd10.Obj) = Rvl;
  goto label_148;

DEFLABEL (lambda_107)
  CLOSURE_HEADER (LABEL_39_42);

DEFLABEL (lambda_43)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd67.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_44);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_43])));
  Rhp += 2;
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd67.pObj)));
  Wrd70 = Wrd67;
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [2]);
  ((Wrd70.pObj) [2]) = (Wrd73.Obj);
  (Wrd69.Obj) = (Rsp [1]);
  ((Wrd70.pObj) [3]) = (Wrd69.Obj);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd66.Obj);
  goto label_140;

DEFLABEL (lambda_105)
  CLOSURE_HEADER (LABEL_39_39);

DEFLABEL (lambda_66)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd77.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_41);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_40])));
  Rhp += 3;
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd77.pObj)));
  Wrd84 = Wrd77;
  (Wrd85.Obj) = (Rsp [0]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [2]);
  ((Wrd84.pObj) [2]) = (Wrd87.Obj);
  (Wrd83.Obj) = ((Wrd86.pObj) [3]);
  ((Wrd84.pObj) [3]) = (Wrd83.Obj);
  (Wrd79.Obj) = (Rsp [1]);
  ((Wrd84.pObj) [4]) = (Wrd79.Obj);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd76.Obj);
  goto label_140;

DEFLABEL (lambda_108)
  CLOSURE_HEADER (LABEL_39_43);

DEFLABEL (lambda_42)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_151;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd9.pObj) [3]);
  goto label_150;

DEFLABEL (label_151)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd13.pObj) [2]);

DEFLABEL (label_150)
DEFLABEL (label_152)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_103)
  CLOSURE_HEADER (LABEL_39_36);

DEFLABEL (lambda_37)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd91.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_37])));
  Rhp += 4;
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd91.pObj)));
  Wrd102 = Wrd91;
  (Wrd103.Obj) = (Rsp [0]);
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd105.Obj) = ((Wrd104.pObj) [2]);
  ((Wrd102.pObj) [2]) = (Wrd105.Obj);
  (Wrd101.Obj) = ((Wrd104.pObj) [3]);
  ((Wrd102.pObj) [3]) = (Wrd101.Obj);
  (Wrd97.Obj) = ((Wrd104.pObj) [4]);
  ((Wrd102.pObj) [4]) = (Wrd97.Obj);
  (Wrd93.Obj) = (Rsp [1]);
  ((Wrd102.pObj) [5]) = (Wrd93.Obj);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd90.Obj);
  goto label_140;

DEFLABEL (lambda_101)
  CLOSURE_HEADER (LABEL_39_33);

DEFLABEL (lambda_74)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd109.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_35);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_34])));
  Rhp += 2;
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd109.pObj)));
  Wrd112 = Wrd109;
  (Wrd113.Obj) = (Rsp [0]);
  (Wrd114.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd115.Obj) = ((Wrd114.pObj) [2]);
  ((Wrd112.pObj) [2]) = (Wrd115.Obj);
  (Wrd111.Obj) = (Rsp [1]);
  ((Wrd112.pObj) [3]) = (Wrd111.Obj);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd108.Obj);
  goto label_140;

DEFLABEL (lambda_106)
  CLOSURE_HEADER (LABEL_39_40);

DEFLABEL (lambda_65)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  if ((Wrd13.Obj) == (Wrd5.Obj))
    goto label_154;
  Rvl = ((Wrd12.pObj) [3]);
  goto label_153;

DEFLABEL (label_154)
  Rvl = ((Wrd12.pObj) [4]);

DEFLABEL (label_153)
DEFLABEL (label_155)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_104)
  CLOSURE_HEADER (LABEL_39_37);

DEFLABEL (lambda_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_24]), 1);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_39_74);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  if ((Wrd7.Obj) == (current_block [OBJECT_39_25]))
    goto label_160;
  if ((Wrd7.Obj) == (current_block [OBJECT_39_15]))
    goto label_159;
  if ((Wrd7.Obj) == (current_block [OBJECT_39_28]))
    goto label_157;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  Rvl = ((Wrd16.pObj) [5]);
  goto label_156;

DEFLABEL (label_157)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  Rvl = ((Wrd20.pObj) [2]);

DEFLABEL (label_156)
DEFLABEL (label_158)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_159)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  Rvl = ((Wrd24.pObj) [3]);
  goto label_158;

DEFLABEL (label_160)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_77]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd30.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_2]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_165;
  Wrd31 = Wrd35;

DEFLABEL (label_164)
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_58]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_39_77);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_161;
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  Rvl = ((Wrd25.pObj) [4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_161)
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_39_15]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 62)
    goto label_163;

DEFLABEL (label_162)
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_16]), 2);

DEFLABEL (label_163)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_162;
  Rvl = ((Wrd17.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_165)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_78])), (Wrd32.pObj));

DEFLABEL (label_95)
  (Wrd31.Obj) = Rvl;
  goto label_164;

DEFLABEL (lambda_102)
  CLOSURE_HEADER (LABEL_39_34);

DEFLABEL (lambda_73)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_170;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_170;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_169)
  if ((Wrd5.Obj) == (current_block [OBJECT_39_26]))
    goto label_167;
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  Rvl = ((Wrd24.pObj) [3]);
  goto label_166;

DEFLABEL (label_167)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  Rvl = ((Wrd28.pObj) [2]);

DEFLABEL (label_166)
DEFLABEL (label_168)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_170)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_39_25]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_75]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_16]), 2);

DEFLABEL (label_94)
  (Wrd5.Obj) = Rvl;
  goto label_169;

DEFLABEL (lambda_99)
  CLOSURE_HEADER (LABEL_39_30);

DEFLABEL (lambda_56)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd119.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_31])));
  Rhp += 6;
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd119.pObj)));
  Wrd138 = Wrd119;
  (Wrd139.Obj) = (Rsp [0]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [2]);
  ((Wrd138.pObj) [2]) = (Wrd141.Obj);
  (Wrd137.Obj) = ((Wrd140.pObj) [3]);
  ((Wrd138.pObj) [3]) = (Wrd137.Obj);
  (Wrd133.Obj) = ((Wrd140.pObj) [4]);
  ((Wrd138.pObj) [4]) = (Wrd133.Obj);
  (Wrd129.Obj) = ((Wrd140.pObj) [5]);
  ((Wrd138.pObj) [5]) = (Wrd129.Obj);
  (Wrd125.Obj) = ((Wrd140.pObj) [6]);
  ((Wrd138.pObj) [6]) = (Wrd125.Obj);
  (Wrd121.Obj) = (Rsp [1]);
  ((Wrd138.pObj) [7]) = (Wrd121.Obj);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd118.Obj);
  goto label_140;

DEFLABEL (lambda_100)
  CLOSURE_HEADER (LABEL_39_31);

DEFLABEL (lambda_55)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_39_29]))
    goto label_179;
  if ((Wrd5.Obj) == (current_block [OBJECT_39_1]))
    goto label_177;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_80]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_81]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_39_80);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_172;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd9.pObj) [5]);

DEFLABEL (label_171)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_172)
  (Wrd11.Obj) = (Rsp [1]);
  if ((Wrd11.Obj) == (current_block [OBJECT_39_30]))
    goto label_176;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_82]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_39_31]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_83]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_39_82);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_174;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd9.pObj) [3]);
  goto label_173;

DEFLABEL (label_174)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd13.pObj) [7]);

DEFLABEL (label_173)
DEFLABEL (label_175)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_176)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  Rvl = ((Wrd20.pObj) [4]);
  goto label_171;

DEFLABEL (label_177)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  Rvl = ((Wrd15.pObj) [6]);

DEFLABEL (label_178)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_179)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  Rvl = ((Wrd19.pObj) [2]);
  goto label_178;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_9 5
#define LABEL_5 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_12 13
#define LABEL_17 15
#define LABEL_13 17
#define TAG_14 7
#define LABEL_15 19
#define LABEL_16 21
#define LABEL_18 23
#define LABEL_19 25
#define LABEL_20 27
#define ENVIRONMENT_LABEL_3 52
#define DEBUGGING_LABEL_2 51
#define PURIFICATION_ROOT 50
#define OBJECT_12 49
#define OBJECT_11 48
#define OBJECT_10 47
#define OBJECT_9 46
#define OBJECT_8 45
#define OBJECT_7 44
#define OBJECT_6 43
#define OBJECT_5 42
#define OBJECT_4 41
#define OBJECT_3 40
#define OBJECT_2 39
#define OBJECT_1 38
#define OBJECT_0 37
#define FREE_REFERENCE_0 29
#define GLOBAL_EXECUTE_CACHE_11 31
#define GLOBAL_EXECUTE_CACHE_10 33
#define GLOBAL_EXECUTE_CACHE_6 35
#define FREE_REFERENCES_LABEL_0 28
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
generic_so_6ba1b4b5208010a9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
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
      goto continuation_9;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_14;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_12);
      goto continuation_15;

    case 6:
      current_block = (Rpc - LABEL_17);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto make_generic_record_23;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_17;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto label_26;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto expression_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_19)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_19])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_26)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_25)
  {
    static const short sections [] =
      {
	0,
	3,
	3,
	2,
	2,
	3,
	1,
	1,
	2,
	2,
	2,
	2,
	2,
	1,
	1,
	1,
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
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 39)
      goto label_24;
    blocks = (current_block [OBJECT_12]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_18])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_24)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (current_block [OBJECT_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_30;
  Wrd11 = Wrd15;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x707, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_28;
  Wrd11 = Wrd15;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_10]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_21)
  (Wrd11.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_20)
  (Wrd11.Obj) = Rvl;
  goto label_29;

DEFLABEL (make_generic_record_23)
  CLOSURE_HEADER (LABEL_13);

DEFLABEL (make_generic_record_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd16.Obj) = (MAKE_OBJECT (0, 8));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = (& (Rhp [-9]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_generic_so_6ba1b4b5208010a9 [39] =
  {
    { "generic_so_code_1", 20, generic_so_code_1 },
    { "generic_so_code_2", 1, generic_so_code_2 },
    { "generic_so_code_3", 1, generic_so_code_3 },
    { "generic_so_code_4", 1, generic_so_code_4 },
    { "generic_so_code_5", 1, generic_so_code_5 },
    { "generic_so_code_6", 1, generic_so_code_6 },
    { "generic_so_code_7", 1, generic_so_code_7 },
    { "generic_so_code_8", 1, generic_so_code_8 },
    { "generic_so_code_9", 1, generic_so_code_9 },
    { "generic_so_code_10", 1, generic_so_code_10 },
    { "generic_so_code_11", 1, generic_so_code_11 },
    { "generic_so_code_12", 4, generic_so_code_12 },
    { "generic_so_code_13", 3, generic_so_code_13 },
    { "generic_so_code_14", 3, generic_so_code_14 },
    { "generic_so_code_15", 2, generic_so_code_15 },
    { "generic_so_code_16", 2, generic_so_code_16 },
    { "generic_so_code_17", 2, generic_so_code_17 },
    { "generic_so_code_18", 2, generic_so_code_18 },
    { "generic_so_code_19", 2, generic_so_code_19 },
    { "generic_so_code_20", 5, generic_so_code_20 },
    { "generic_so_code_21", 5, generic_so_code_21 },
    { "generic_so_code_22", 3, generic_so_code_22 },
    { "generic_so_code_23", 5, generic_so_code_23 },
    { "generic_so_code_24", 3, generic_so_code_24 },
    { "generic_so_code_25", 3, generic_so_code_25 },
    { "generic_so_code_26", 4, generic_so_code_26 },
    { "generic_so_code_27", 16, generic_so_code_27 },
    { "generic_so_code_28", 9, generic_so_code_28 },
    { "generic_so_code_29", 42, generic_so_code_29 },
    { "generic_so_code_30", 74, generic_so_code_30 },
    { "generic_so_code_31", 96, generic_so_code_31 },
    { "generic_so_code_32", 129, generic_so_code_32 },
    { "generic_so_code_33", 17, generic_so_code_33 },
    { "generic_so_code_34", 6, generic_so_code_34 },
    { "generic_so_code_35", 19, generic_so_code_35 },
    { "generic_so_code_36", 2, generic_so_code_36 },
    { "generic_so_code_37", 4, generic_so_code_37 },
    { "generic_so_code_38", 15, generic_so_code_38 },
    { "generic_so_code_39", 58, generic_so_code_39 }
  };

int
decl_generic_so_6ba1b4b5208010a9 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_generic_so_6ba1b4b5208010a9);
  return (0);
}

DECLARE_COMPILED_CODE ("generic.so", 13, decl_generic_so_6ba1b4b5208010a9, generic_so_6ba1b4b5208010a9)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_generic_so_data_6ba1b4b5208010a9 [8900] =
  "\xbc\x02\x4e\x8e\x11\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc3\xb9\x02"
  "\x0c\x0d\xba\xc2\xbb\x80\x0c\x0d\xbc\x06\x07\x85\xc2\x02\x1d\x0d"
  "\xbd\x0d\xbe\x24\x28\x0d\xbf\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\xb3\x81"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x83\x88\xb3\x82\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x84\x88\xb3\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x85\x88\xb3\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x86\x88\xb3\x85"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x86\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\xb3\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb1\x1d\x84\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1"
  "\x1d\x86\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1\x1d\x02\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\xb3\x80\xc1\x0e\x1c\x24"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\xb5\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x82\xb3\x83\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3"
  "\x82\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x83\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb3\x85\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x84\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x84\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x0d"
  "\x1d\xb5\x24\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1"
  "\x1d\xb3\x82\x86\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb1\x1d\xb3\x86\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\xb5\x24\x28\x1b\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x82\x0c\x28\xb7\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x02\x88\x81\x83"
  "\xb3\x82\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xc2\x1c\xc1\x1c\x86\xc1\x1c\x80\x08\x82\xb3\x83"
  "\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x84\x82\xb3\x83\x0d\x1c\x1b\x24\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x83\x81\x82\xb2\x80\xc1\x1c\x86\xc2\x1c\x85\xb3\x02\x1b\x1b"
  "\x08\x0d\x1c\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x83\x81\x82\xb2\x80\x1b\x86\x1b\x85\xb3\x02"
  "\x1b\x1b\x08\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x83\x81\x82\xb2\x80\x1b\x86\x1b\x85\xb3\x02"
  "\x1b\x1b\x08\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x83\x81\x82\xb2\x80\x1b\x86\x1b\x85\xb3\x02\x1b\x1b\x08\x1b"
  "\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1"
  "\x1d\xc2\x86\x1b\x84\x02\x1b\x1b\x07\xb3\x82\x08\x0d\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\xb2\xb3\x80\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x02\x88\x07\x0c\x1b\x1b"
  "\x0d\x1c\x25\x0d\x1c\x1b\x24\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x0d\x1c\x0c\x0d\x1c\x1d\x0c\x0d\x1b\x1b\x08"
  "\x89\x0d\x1c\x1b\x25\x0d\x0d\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1d\x1d\x1d\x08\x8b"
  "\x1d\x07\x82\x0d\x08\x88\xb2\x80\xc1\x0d\x08\x88\x0d\x08\x88\x0d"
  "\x0d\x0d\x08\x88\x0d\x1b\x08\x88\xb3\x81\x0d\x08\x88\x0d\x0d\x08"
  "\x88\x0d\x1b\x0d\x08\x88\x0d\x08\x88\x1d\xc3\x0d\x1c\x0d\x08\x88"
  "\x0d\x08\x88\x0d\x08\x0d\xb6\xb5\x1b\x1b\x1b\x25\x1b\x1b\xb5\x0d"
  "\x24\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x17\x1c\x88\x1b\x1b\x1b\x2a\x1e\x1e\x1e\x1e\x1e\x1b\x2a\x1e"
  "\x1e\x1b\x2a\x1b\x2a\x1b\x2a\xb1\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x17\x0d\x1b\x1b\x1b\xb5\xb6\x0d\x1b\x1b\x1b"
  "\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x17\xc3\x1b\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x1c\xb4\x99"
  "\x1b\x2a\x0c\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x08\x8e\x08\x28\x0d\x28"
  "\x0d\x28\x0d\x26\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x02\x56\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53"
  "\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f"
  "\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x67\x65"
  "\x6e\x65\x72\x69\x63\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0d"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x08\x0d\x64\x69"
  "\x73\x70\x61\x74\x63\x68\x20\x74\x61\x67\x10\x23\x5b\x64\x69\x73"
  "\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x5d\x0c\x25\x72\x65\x63\x6f"
  "\x72\x64\x2d\x72\x65\x66\x07\x73\x79\x6d\x62\x6f\x6c\x17\x6d\x61"
  "\x6b\x65\x2d\x67\x65\x6e\x65\x72\x69\x63\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65"
  "\x3f\x1e\x08\x1a\x67\x65\x6e\x65\x72\x69\x63\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2d\x72\x65\x63\x6f\x72\x64\x73\x1f\x73\x74"
  "\x61\x6e\x64\x61\x72\x64\x2d\x67\x65\x6e\x65\x72\x69\x63\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x74\x61\x67\x03\x05\x1a\x65"
  "\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d"
  "\x61\x72\x67\x75\x6d\x65\x6e\x74\x04\x1a\x67\x75\x61\x72\x61\x6e"
  "\x74\x65\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72"
  "\x69\x74\x79\x03\x14\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61"
  "\x72\x69\x74\x79\x2d\x6d\x69\x6e\x04\x14\x67\x75\x61\x72\x61\x6e"
  "\x74\x65\x65\x2d\x67\x65\x6e\x65\x72\x61\x74\x6f\x72\x09\x04\x19"
  "\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d"
  "\x61\x72\x67\x75\x6d\x65\x6e\x74\x03\x16\x63\x6f\x6d\x70\x75\x74"
  "\x65\x2d\x61\x70\x70\x6c\x79\x2d\x67\x65\x6e\x65\x72\x69\x63\x0a"
  "\x03\x14\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74"
  "\x79\x2d\x6d\x61\x78\x03\x0a\x6e\x65\x77\x2d\x63\x61\x63\x68\x65"
  "\x0b\x05\x0a\x65\x71\x68\x74\x2f\x70\x75\x74\x21\x08\x14\x6d\x61"
  "\x6b\x65\x2d\x67\x65\x6e\x65\x72\x69\x63\x2d\x72\x65\x63\x6f\x72"
  "\x64\x0c\x0b\x21\x2a\x81\x9d\x02\x20\x28\x81\x99\x02\x1f\x26\x81"
  "\x85\x02\x1e\x24\x81\x97\x02\x1d\x22\x81\x8b\x02\x1c\x20\x81\x85"
  "\x02\x1b\x1e\x81\x83\x02\x1a\x1c\x81\x93\x02\x19\x1a\x81\x91\x02"
  "\x18\x18\x81\x8f\x02\x17\x16\x81\x8f\x02\x16\x14\x81\x8f\x02\x15"
  "\x12\x81\x8f\x02\x14\x10\x81\x8f\x02\x13\x0e\x81\x8f\x02\x12\x0c"
  "\x81\x83\x02\x11\x0a\x86\x04\x10\x08\x81\x8f\x02\x0f\x06\x81\x8f"
  "\x02\x0e\x04\x81\x8f\x02\x29\x52\x0d\x02\x22\x04\x83\x04\x03\x0e"
  "\x02\x23\x04\x83\x04\x03\x0f\x02\x24\x04\x83\x04\x03\x10\x02\x25"
  "\x04\x83\x04\x03\x11\x02\x26\x04\x83\x04\x03\x12\x02\x08\x27\x04"
  "\x83\x04\x03\x13\x02\x09\x08\x28\x04\x83\x04\x03\x14\x02\x0a\x02"
  "\x29\x04\x84\x06\x03\x15\x02\x0b\x02\x2a\x04\x84\x06\x03\x16\x02"
  "\x0c\x02\x08\x2b\x04\x84\x06\x03\x17\x02\x0d\x0f\x25\x72\x65\x63"
  "\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e"
  "\x31\x18\x02\x2f\x0a\x81\x85\x02\x2e\x08\x81\x83\x02\x2d\x06\x81"
  "\x83\x02\x2c\x04\x83\x04\x09\x12\x19\x02\x0e\x02\x05\x09\x65\x71"
  "\x68\x74\x2f\x67\x65\x74\x1a\x02\x32\x08\x81\x83\x02\x31\x06\x81"
  "\x89\x02\x30\x04\x83\x04\x07\x10\x1b\x02\x0f\x05\x15\x6d\x61\x6b"
  "\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74"
  "\x79\x02\x35\x08\x81\x85\x02\x34\x06\x81\x83\x02\x33\x04\x83\x04"
  "\x07\x11\x1c\x02\x10\x18\x67\x65\x6e\x65\x72\x69\x63\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x1d\x04\x1c"
  "\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x67\x65\x6e\x65\x72\x69"
  "\x63\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x1e\x03\x15\x67\x65"
  "\x6e\x65\x72\x69\x63\x2d\x72\x65\x63\x6f\x72\x64\x2f\x61\x72\x69"
  "\x74\x79\x1f\x03\x37\x06\x81\x83\x02\x36\x04\x83\x04\x05\x0e\x20"
  "\x02\x11\x1c\x67\x65\x6e\x65\x72\x69\x63\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x2d\x6d\x69\x6e\x21\x04"
  "\x1e\x02\x39\x06\x81\x83\x02\x38\x04\x83\x04\x05\x0e\x22\x02\x12"
  "\x1c\x67\x65\x6e\x65\x72\x69\x63\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x61\x72\x69\x74\x79\x2d\x6d\x61\x78\x23\x04\x1e\x02"
  "\x3b\x06\x81\x83\x02\x3a\x04\x83\x04\x05\x0e\x24\x02\x13\x17\x67"
  "\x65\x6e\x65\x72\x69\x63\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x6e\x61\x6d\x65\x25\x04\x1e\x02\x3d\x06\x81\x83\x02\x3c\x04"
  "\x83\x04\x05\x0e\x26\x02\x14\x1c\x67\x65\x6e\x65\x72\x69\x63\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x67\x65\x6e\x65\x72\x61"
  "\x74\x6f\x72\x27\x04\x1e\x02\x3f\x06\x81\x83\x02\x3e\x04\x83\x04"
  "\x05\x0e\x28\x02\x15\x21\x73\x65\x74\x2d\x67\x65\x6e\x65\x72\x69"
  "\x63\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x67\x65\x6e\x65"
  "\x72\x61\x74\x6f\x72\x21\x29\x04\x1e\x04\x09\x03\x13\x77\x69\x74"
  "\x68\x6f\x75\x74\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x73\x2a"
  "\x03\x20\x25\x72\x65\x73\x65\x74\x2d\x67\x65\x6e\x65\x72\x69\x63"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x63\x61\x63\x68\x65"
  "\x21\x2b\x05\x44\x0c\x81\x83\x02\x43\x0a\x81\x83\x02\x42\x08\x81"
  "\x87\x02\x41\x06\x81\x85\x02\x40\x04\x84\x06\x0b\x1a\x2c\x02\x16"
  "\x1e\x70\x75\x72\x67\x65\x2d\x67\x65\x6e\x65\x72\x69\x63\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x63\x61\x63\x68\x65\x2d\x0f"
  "\x61\x6c\x6c\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x73\x0c\x61"
  "\x6c\x6c\x2d\x65\x6e\x74\x72\x69\x65\x73\x08\x02\x04\x0e\x65\x71"
  "\x68\x74\x2f\x66\x6f\x72\x2d\x65\x61\x63\x68\x04\x1e\x05\x20\x25"
  "\x70\x75\x72\x67\x65\x2d\x67\x65\x6e\x65\x72\x69\x63\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x63\x61\x63\x68\x65\x21\x2e\x03"
  "\x2b\x05\x49\x0c\x84\x06\x48\x0a\x81\x87\x02\x47\x08\x81\x87\x02"
  "\x46\x06\x81\x87\x02\x45\x04\x84\x04\x0b\x1d\x2f\x02\x17\x02\x03"
  "\x0b\x02\x4c\x08\x81\x87\x02\x4b\x06\x81\x89\x02\x4a\x04\x83\x04"
  "\x07\x12\x0b\x02\x18\x02\x03\x2a\x04\x14\x70\x75\x72\x67\x65\x2d"
  "\x63\x61\x63\x68\x65\x2d\x65\x6e\x74\x72\x69\x65\x73\x03\x51\x0c"
  "\x81\x85\x02\x50\x0a\x81\x87\x02\x4f\x08\x81\x8b\x02\x4e\x06\x81"
  "\x83\x02\x4d\x04\x85\x08\x0b\x17\x30\x02\x19\x12\x67\x65\x6e\x65"
  "\x72\x69\x63\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x02\x05\x1a"
  "\x05\x03\x54\x08\x81\x85\x02\x53\x06\x81\x8b\x02\x52\x04\x84\x06"
  "\x07\x12\x31\x02\x1a\x02\x1c\x67\x65\x6e\x65\x72\x69\x63\x20\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x20\x67\x65\x6e\x65\x72\x61\x74"
  "\x6f\x72\x05\x04\x17\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61"
  "\x72\x69\x74\x79\x2d\x76\x61\x6c\x69\x64\x3f\x03\x0b\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x3f\x04\x57\x08\x84\x06\x56\x06\x81\x85"
  "\x02\x55\x04\x81\x85\x02\x07\x14\x02\x1b\x04\x05\x65\x71\x76\x3f"
  "\x03\x0e\x61\x70\x70\x6c\x79\x2d\x67\x65\x6e\x65\x72\x69\x63\x32"
  "\x03\x10\x61\x70\x70\x6c\x79\x2d\x67\x65\x6e\x65\x72\x69\x63\x2d"
  "\x31\x33\x03\x10\x61\x70\x70\x6c\x79\x2d\x67\x65\x6e\x65\x72\x69"
  "\x63\x2d\x32\x34\x03\x10\x61\x70\x70\x6c\x79\x2d\x67\x65\x6e\x65"
  "\x72\x69\x63\x2d\x33\x35\x03\x10\x61\x70\x70\x6c\x79\x2d\x67\x65"
  "\x6e\x65\x72\x69\x63\x2d\x34\x36\x07\x5b\x0a\x81\x85\x02\x5a\x08"
  "\x81\x87\x02\x59\x06\x81\x83\x02\x58\x04\x83\x04\x09\x1d\x37\x02"
  "\x1c\x06\x61\x70\x70\x6c\x79\x38\x04\x63\x61\x72\x39\x04\x63\x64"
  "\x72\x3a\x03\x1f\x05\x20\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e"
  "\x67\x2d\x6e\x75\x6d\x62\x65\x72\x2d\x6f\x66\x2d\x61\x72\x67\x75"
  "\x6d\x65\x6e\x74\x73\x04\x0c\x70\x72\x6f\x62\x65\x2d\x63\x61\x63"
  "\x68\x65\x03\x0d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67"
  "\x3b\x04\x19\x63\x6f\x6d\x70\x75\x74\x65\x2d\x6d\x65\x74\x68\x6f"
  "\x64\x2d\x61\x6e\x64\x2d\x73\x74\x6f\x72\x65\x3c\x06\x6b\x22\x81"
  "\x8b\x02\x6a\x20\x81\x8b\x02\x69\x1e\x81\x8b\x02\x68\x1c\x81\x8d"
  "\x02\x67\x1a\x81\x8f\x02\x66\x18\x81\x8b\x02\x65\x16\x81\x8b\x02"
  "\x64\x14\x81\x8f\x02\x63\x12\x81\x8f\x02\x62\x10\x81\x8b\x02\x61"
  "\x0e\x81\x87\x02\x60\x0c\x81\x85\x02\x5f\x0a\x81\x85\x02\x5e\x08"
  "\x81\x85\x02\x5d\x06\x81\x83\x02\x5c\x04\x83\x04\x21\x38\x3d\x02"
  "\x1d\x1e\x67\x65\x6e\x65\x72\x69\x63\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x61\x70\x70\x6c\x69\x63\x61\x62\x6c\x65\x3f\x3e"
  "\x3b\x02\x04\x04\x6d\x61\x70\x3f\x04\x1e\x03\x07\x6c\x65\x6e\x67"
  "\x74\x68\x04\x0a\x6c\x69\x73\x74\x2d\x68\x65\x61\x64\x05\x74\x14"
  "\x81\x91\x02\x73\x12\x81\x8f\x02\x72\x10\x81\x8d\x02\x71\x0e\x81"
  "\x8b\x02\x70\x0c\x81\x89\x02\x6f\x0a\x81\x87\x02\x6e\x08\x81\x85"
  "\x02\x6d\x06\x81\x89\x02\x6c\x04\x84\x06\x13\x26\x40\x02\x1e\x0e"
  "\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x41\x0b\x76"
  "\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x42\x08\x3a\x39\x19\x6d\x69"
  "\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74\x79\x70\x65\x2d\x74\x61\x67"
  "\x2d\x74\x61\x62\x6c\x65\x43\x1c\x6d\x69\x63\x72\x6f\x63\x6f\x64"
  "\x65\x2d\x74\x79\x70\x65\x2d\x6d\x65\x74\x68\x6f\x64\x2d\x74\x61"
  "\x62\x6c\x65\x44\x03\x04\x3c\x02\x9e\x01\x56\x81\x8b\x02\x9d\x01"
  "\x54\x81\x8b\x02\x9c\x01\x52\x81\x89\x02\x9b\x01\x50\x81\x8d\x02"
  "\x9a\x01\x4e\x81\x8d\x02\x99\x01\x4c\x81\x8b\x02\x98\x01\x4a\x81"
  "\x89\x02\x97\x01\x48\x81\x89\x02\x96\x01\x46\x81\x85\x02\x95\x01"
  "\x44\x81\x85\x02\x94\x01\x42\x81\x87\x02\x93\x01\x40\x81\x87\x02"
  "\x92\x01\x3e\x81\x85\x02\x91\x01\x3c\x81\x85\x02\x90\x01\x3a\x81"
  "\x87\x02\x8f\x01\x38\x81\x87\x02\x8e\x01\x36\x81\x87\x02\x8d\x01"
  "\x34\x81\x85\x02\x8c\x01\x32\x81\x89\x02\x8b\x01\x30\x81\x83\x02"
  "\x8a\x01\x2e\x81\x81\x02\x89\x01\x2c\x81\x81\x02\x88\x01\x2a\x81"
  "\x81\x02\x87\x01\x28\x81\x81\x02\x86\x01\x26\x81\x85\x02\x85\x01"
  "\x24\x81\x85\x02\x84\x01\x22\x81\x87\x02\x83\x01\x20\x81\x8b\x02"
  "\x82\x01\x1e\x81\x8b\x02\x81\x01\x1c\x81\x8b\x02\x80\x01\x1a\x81"
  "\x8b\x02\x7f\x18\x81\x8b\x02\x7e\x16\x81\x8b\x02\x7d\x14\x81\x8b"
  "\x02\x7c\x12\x81\x8b\x02\x7b\x10\x81\x8b\x02\x7a\x0e\x81\x87\x02"
  "\x79\x0c\x81\x87\x02\x78\x0a\x81\x87\x02\x77\x08\x81\x87\x02\x76"
  "\x06\x81\x87\x02\x75\x04\x83\x04\x55\x6c\x45\x02\x1f\x41\x42\x08"
  "\x3a\x39\x43\x44\x03\x04\x3c\x02\xe8\x01\x96\x01\x81\x8f\x02\xe7"
  "\x01\x94\x01\x81\x8f\x02\xe6\x01\x92\x01\x81\x8d\x02\xe5\x01\x90"
  "\x01\x81\x8d\x02\xe4\x01\x8e\x01\x81\x8b\x02\xe3\x01\x8c\x01\x81"
  "\x91\x02\xe2\x01\x8a\x01\x81\x91\x02\xe1\x01\x88\x01\x81\x8f\x02"
  "\xe0\x01\x86\x01\x81\x8f\x02\xdf\x01\x84\x01\x81\x8d\x02\xde\x01"
  "\x82\x01\x81\x8b\x02\xdd\x01\x80\x01\x81\x8b\x02\xdc\x01\x7e\x81"
  "\x87\x02\xdb\x01\x7c\x81\x87\x02\xda\x01\x7a\x81\x8b\x02\xd9\x01"
  "\x78\x81\x8b\x02\xd8\x01\x76\x81\x89\x02\xd7\x01\x74\x81\x89\x02"
  "\xd6\x01\x72\x81\x87\x02\xd5\x01\x70\x81\x87\x02\xd4\x01\x6e\x81"
  "\x89\x02\xd3\x01\x6c\x81\x8b\x02\xd2\x01\x6a\x81\x8b\x02\xd1\x01"
  "\x68\x81\x89\x02\xd0\x01\x66\x81\x89\x02\xcf\x01\x64\x81\x87\x02"
  "\xce\x01\x62\x81\x87\x02\xcd\x01\x60\x81\x89\x02\xcc\x01\x5e\x81"
  "\x8b\x02\xcb\x01\x5c\x81\x8b\x02\xca\x01\x5a\x81\x89\x02\xc9\x01"
  "\x58\x81\x89\x02\xc8\x01\x56\x81\x87\x02\xc7\x01\x54\x81\x87\x02"
  "\xc6\x01\x52\x81\x89\x02\xc5\x01\x50\x81\x8b\x02\xc4\x01\x4e\x81"
  "\x8b\x02\xc3\x01\x4c\x81\x89\x02\xc2\x01\x4a\x81\x89\x02\xc1\x01"
  "\x48\x81\x87\x02\xc0\x01\x46\x81\x8d\x02\xbf\x01\x44\x81\x83\x02"
  "\xbe\x01\x42\x81\x81\x02\xbd\x01\x40\x81\x81\x02\xbc\x01\x3e\x81"
  "\x81\x02\xbb\x01\x3c\x81\x81\x02\xba\x01\x3a\x81\x83\x02\xb9\x01"
  "\x38\x81\x81\x02\xb8\x01\x36\x81\x81\x02\xb7\x01\x34\x81\x81\x02"
  "\xb6\x01\x32\x81\x81\x02\xb5\x01\x30\x81\x87\x02\xb4\x01\x2e\x81"
  "\x87\x02\xb3\x01\x2c\x81\x89\x02\xb2\x01\x2a\x81\x8b\x02\xb1\x01"
  "\x28\x81\x8d\x02\xb0\x01\x26\x81\x8d\x02\xaf\x01\x24\x81\x8d\x02"
  "\xae\x01\x22\x81\x8d\x02\xad\x01\x20\x81\x8d\x02\xac\x01\x1e\x81"
  "\x8d\x02\xab\x01\x1c\x81\x8d\x02\xaa\x01\x1a\x81\x8d\x02\xa9\x01"
  "\x18\x81\x8d\x02\xa8\x01\x16\x81\x8d\x02\xa7\x01\x14\x81\x8d\x02"
  "\xa6\x01\x12\x81\x89\x02\xa5\x01\x10\x81\x89\x02\xa4\x01\x0e\x81"
  "\x89\x02\xa3\x01\x0c\x81\x89\x02\xa2\x01\x0a\x81\x89\x02\xa1\x01"
  "\x08\x81\x89\x02\xa0\x01\x06\x81\x89\x02\x9f\x01\x04\x83\x04\x95"
  "\x01\xac\x01\x46\x02\x20\x41\x42\x08\x3a\x39\x43\x44\x03\x04\x3c"
  "\x02\xc8\x02\xc2\x01\x81\x91\x02\xc7\x02\xc0\x01\x81\x91\x02\xc6"
  "\x02\xbe\x01\x81\x91\x02\xc5\x02\xbc\x01\x81\x91\x02\xc4\x02\xba"
  "\x01\x81\x8f\x02\xc3\x02\xb8\x01\x81\x8f\x02\xc2\x02\xb6\x01\x81"
  "\x8d\x02\xc1\x02\xb4\x01\x81\x93\x02\xc0\x02\xb2\x01\x81\x93\x02"
  "\xbf\x02\xb0\x01\x81\x93\x02\xbe\x02\xae\x01\x81\x93\x02\xbd\x02"
  "\xac\x01\x81\x91\x02\xbc\x02\xaa\x01\x81\x91\x02\xbb\x02\xa8\x01"
  "\x81\x8f\x02\xba\x02\xa6\x01\x81\x8d\x02\xb9\x02\xa4\x01\x81\x8d"
  "\x02\xb8\x02\xa2\x01\x81\x89\x02\xb7\x02\xa0\x01\x81\x89\x02\xb6"
  "\x02\x9e\x01\x81\x8d\x02\xb5\x02\x9c\x01\x81\x8d\x02\xb4\x02\x9a"
  "\x01\x81\x8d\x02\xb3\x02\x98\x01\x81\x8d\x02\xb2\x02\x96\x01\x81"
  "\x8b\x02\xb1\x02\x94\x01\x81\x8b\x02\xb0\x02\x92\x01\x81\x89\x02"
  "\xaf\x02\x90\x01\x81\x89\x02\xae\x02\x8e\x01\x81\x8b\x02\xad\x02"
  "\x8c\x01\x81\x8d\x02\xac\x02\x8a\x01\x81\x8d\x02\xab\x02\x88\x01"
  "\x81\x8d\x02\xaa\x02\x86\x01\x81\x8d\x02\xa9\x02\x84\x01\x81\x8b"
  "\x02\xa8\x02\x82\x01\x81\x8b\x02\xa7\x02\x80\x01\x81\x89\x02\xa6"
  "\x02\x7e\x81\x89\x02\xa5\x02\x7c\x81\x8b\x02\xa4\x02\x7a\x81\x8d"
  "\x02\xa3\x02\x78\x81\x8d\x02\xa2\x02\x76\x81\x8d\x02\xa1\x02\x74"
  "\x81\x8d\x02\xa0\x02\x72\x81\x8b\x02\x9f\x02\x70\x81\x8b\x02\x9e"
  "\x02\x6e\x81\x89\x02\x9d\x02\x6c\x81\x89\x02\x9c\x02\x6a\x81\x8b"
  "\x02\x9b\x02\x68\x81\x8d\x02\x9a\x02\x66\x81\x8d\x02\x99\x02\x64"
  "\x81\x8d\x02\x98\x02\x62\x81\x8d\x02\x97\x02\x60\x81\x8b\x02\x96"
  "\x02\x5e\x81\x8b\x02\x95\x02\x5c\x81\x89\x02\x94\x02\x5a\x81\x91"
  "\x02\x93\x02\x58\x81\x83\x02\x92\x02\x56\x81\x81\x02\x91\x02\x54"
  "\x81\x81\x02\x90\x02\x52\x81\x81\x02\x8f\x02\x50\x81\x81\x02\x8e"
  "\x02\x4e\x81\x83\x02\x8d\x02\x4c\x81\x81\x02\x8c\x02\x4a\x81\x81"
  "\x02\x8b\x02\x48\x81\x81\x02\x8a\x02\x46\x81\x81\x02\x89\x02\x44"
  "\x81\x83\x02\x88\x02\x42\x81\x81\x02\x87\x02\x40\x81\x81\x02\x86"
  "\x02\x3e\x81\x81\x02\x85\x02\x3c\x81\x81\x02\x84\x02\x3a\x81\x89"
  "\x02\x83\x02\x38\x81\x89\x02\x82\x02\x36\x81\x8b\x02\x81\x02\x34"
  "\x81\x8d\x02\x80\x02\x32\x81\x8f\x02\xff\x01\x30\x81\x8f\x02\xfe"
  "\x01\x2e\x81\x8f\x02\xfd\x01\x2c\x81\x8f\x02\xfc\x01\x2a\x81\x8f"
  "\x02\xfb\x01\x28\x81\x8f\x02\xfa\x01\x26\x81\x8f\x02\xf9\x01\x24"
  "\x81\x8f\x02\xf8\x01\x22\x81\x8f\x02\xf7\x01\x20\x81\x8f\x02\xf6"
  "\x01\x1e\x81\x8f\x02\xf5\x01\x1c\x81\x8f\x02\xf4\x01\x1a\x81\x8f"
  "\x02\xf3\x01\x18\x81\x8f\x02\xf2\x01\x16\x81\x8b\x02\xf1\x01\x14"
  "\x81\x8b\x02\xf0\x01\x12\x81\x8b\x02\xef\x01\x10\x81\x8b\x02\xee"
  "\x01\x0e\x81\x8b\x02\xed\x01\x0c\x81\x8b\x02\xec\x01\x0a\x81\x8b"
  "\x02\xeb\x01\x08\x81\x8b\x02\xea\x01\x06\x81\x8b\x02\xe9\x01\x04"
  "\x83\x04\xc1\x01\xd8\x01\x47\x02\x21\x41\x42\x08\x3a\x39\x43\x44"
  "\x03\x04\x3c\x02\xc9\x03\x84\x02\x81\x95\x02\xc8\x03\x82\x02\x81"
  "\x95\x02\xc7\x03\x80\x02\x81\x93\x02\xc6\x03\xfe\x01\x81\x93\x02"
  "\xc5\x03\xfc\x01\x81\x93\x02\xc4\x03\xfa\x01\x81\x93\x02\xc3\x03"
  "\xf8\x01\x81\x91\x02\xc2\x03\xf6\x01\x81\x91\x02\xc1\x03\xf4\x01"
  "\x81\x8f\x02\xc0\x03\xf2\x01\x81\x97\x02\xbf\x03\xf0\x01\x81\x97"
  "\x02\xbe\x03\xee\x01\x81\x95\x02\xbd\x03\xec\x01\x81\x95\x02\xbc"
  "\x03\xea\x01\x81\x95\x02\xbb\x03\xe8\x01\x81\x95\x02\xba\x03\xe6"
  "\x01\x81\x93\x02\xb9\x03\xe4\x01\x81\x93\x02\xb8\x03\xe2\x01\x81"
  "\x91\x02\xb7\x03\xe0\x01\x81\x8f\x02\xb6\x03\xde\x01\x81\x8f\x02"
  "\xb5\x03\xdc\x01\x81\x8b\x02\xb4\x03\xda\x01\x81\x8b\x02\xb3\x03"
  "\xd8\x01\x81\x91\x02\xb2\x03\xd6\x01\x81\x91\x02\xb1\x03\xd4\x01"
  "\x81\x8f\x02\xb0\x03\xd2\x01\x81\x8f\x02\xaf\x03\xd0\x01\x81\x8f"
  "\x02\xae\x03\xce\x01\x81\x8f\x02\xad\x03\xcc\x01\x81\x8d\x02\xac"
  "\x03\xca\x01\x81\x8d\x02\xab\x03\xc8\x01\x81\x8b\x02\xaa\x03\xc6"
  "\x01\x81\x8b\x02\xa9\x03\xc4\x01\x81\x8d\x02\xa8\x03\xc2\x01\x81"
  "\x91\x02\xa7\x03\xc0\x01\x81\x91\x02\xa6\x03\xbe\x01\x81\x8f\x02"
  "\xa5\x03\xbc\x01\x81\x8f\x02\xa4\x03\xba\x01\x81\x8f\x02\xa3\x03"
  "\xb8\x01\x81\x8f\x02\xa2\x03\xb6\x01\x81\x8d\x02\xa1\x03\xb4\x01"
  "\x81\x8d\x02\xa0\x03\xb2\x01\x81\x8b\x02\x9f\x03\xb0\x01\x81\x8b"
  "\x02\x9e\x03\xae\x01\x81\x8d\x02\x9d\x03\xac\x01\x81\x91\x02\x9c"
  "\x03\xaa\x01\x81\x91\x02\x9b\x03\xa8\x01\x81\x8f\x02\x9a\x03\xa6"
  "\x01\x81\x8f\x02\x99\x03\xa4\x01\x81\x8f\x02\x98\x03\xa2\x01\x81"
  "\x8f\x02\x97\x03\xa0\x01\x81\x8d\x02\x96\x03\x9e\x01\x81\x8d\x02"
  "\x95\x03\x9c\x01\x81\x8b\x02\x94\x03\x9a\x01\x81\x8b\x02\x93\x03"
  "\x98\x01\x81\x8d\x02\x92\x03\x96\x01\x81\x91\x02\x91\x03\x94\x01"
  "\x81\x91\x02\x90\x03\x92\x01\x81\x8f\x02\x8f\x03\x90\x01\x81\x8f"
  "\x02\x8e\x03\x8e\x01\x81\x8f\x02\x8d\x03\x8c\x01\x81\x8f\x02\x8c"
  "\x03\x8a\x01\x81\x8d\x02\x8b\x03\x88\x01\x81\x8d\x02\x8a\x03\x86"
  "\x01\x81\x8b\x02\x89\x03\x84\x01\x81\x8b\x02\x88\x03\x82\x01\x81"
  "\x8d\x02\x87\x03\x80\x01\x81\x91\x02\x86\x03\x7e\x81\x91\x02\x85"
  "\x03\x7c\x81\x8f\x02\x84\x03\x7a\x81\x8f\x02\x83\x03\x78\x81\x8f"
  "\x02\x82\x03\x76\x81\x8f\x02\x81\x03\x74\x81\x8d\x02\x80\x03\x72"
  "\x81\x8d\x02\xff\x02\x70\x81\x8b\x02\xfe\x02\x6e\x81\x95\x02\xfd"
  "\x02\x6c\x81\x83\x02\xfc\x02\x6a\x81\x81\x02\xfb\x02\x68\x81\x81"
  "\x02\xfa\x02\x66\x81\x81\x02\xf9\x02\x64\x81\x81\x02\xf8\x02\x62"
  "\x81\x83\x02\xf7\x02\x60\x81\x81\x02\xf6\x02\x5e\x81\x81\x02\xf5"
  "\x02\x5c\x81\x81\x02\xf4\x02\x5a\x81\x81\x02\xf3\x02\x58\x81\x83"
  "\x02\xf2\x02\x56\x81\x81\x02\xf1\x02\x54\x81\x81\x02\xf0\x02\x52"
  "\x81\x81\x02\xef\x02\x50\x81\x81\x02\xee\x02\x4e\x81\x83\x02\xed"
  "\x02\x4c\x81\x81\x02\xec\x02\x4a\x81\x81\x02\xeb\x02\x48\x81\x81"
  "\x02\xea\x02\x46\x81\x81\x02\xe9\x02\x44\x81\x8b\x02\xe8\x02\x42"
  "\x81\x8b\x02\xe7\x02\x40\x81\x8d\x02\xe6\x02\x3e\x81\x8f\x02\xe5"
  "\x02\x3c\x81\x91\x02\xe4\x02\x3a\x81\x93\x02\xe3\x02\x38\x81\x91"
  "\x02\xe2\x02\x36\x81\x91\x02\xe1\x02\x34\x81\x91\x02\xe0\x02\x32"
  "\x81\x91\x02\xdf\x02\x30\x81\x91\x02\xde\x02\x2e\x81\x91\x02\xdd"
  "\x02\x2c\x81\x91\x02\xdc\x02\x2a\x81\x91\x02\xdb\x02\x28\x81\x91"
  "\x02\xda\x02\x26\x81\x91\x02\xd9\x02\x24\x81\x91\x02\xd8\x02\x22"
  "\x81\x91\x02\xd7\x02\x20\x81\x91\x02\xd6\x02\x1e\x81\x91\x02\xd5"
  "\x02\x1c\x81\x91\x02\xd4\x02\x1a\x81\x8d\x02\xd3\x02\x18\x81\x8d"
  "\x02\xd2\x02\x16\x81\x8d\x02\xd1\x02\x14\x81\x8d\x02\xd0\x02\x12"
  "\x81\x8d\x02\xcf\x02\x10\x81\x8d\x02\xce\x02\x0e\x81\x8d\x02\xcd"
  "\x02\x0c\x81\x8d\x02\xcc\x02\x0a\x81\x8d\x02\xcb\x02\x08\x81\x8d"
  "\x02\xca\x02\x06\x81\x8d\x02\xc9\x02\x04\x83\x04\x83\x02\x9a\x02"
  "\x41\x02\x22\x02\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x38\x08\x3a"
  "\x39\x05\x74\x61\x67\x73\x03\x3b\x04\x1c\x65\x72\x72\x6f\x72\x3a"
  "\x6e\x6f\x2d\x61\x70\x70\x6c\x69\x63\x61\x62\x6c\x65\x2d\x6d\x65"
  "\x74\x68\x6f\x64\x73\x38\x03\x2a\x05\x0b\x66\x69\x6c\x6c\x2d\x63"
  "\x61\x63\x68\x65\x05\xda\x03\x24\x81\x87\x02\xd9\x03\x22\x81\x8b"
  "\x02\xd8\x03\x20\x81\x8b\x02\xd7\x03\x1e\x81\x8b\x02\xd6\x03\x1c"
  "\x81\x8b\x02\xd5\x03\x1a\x81\x8d\x02\xd4\x03\x18\x81\x83\x02\xd3"
  "\x03\x16\x81\x89\x02\xd2\x03\x14\x81\x8b\x02\xd1\x03\x12\x81\x89"
  "\x02\xd0\x03\x10\x81\x85\x02\xcf\x03\x0e\x81\x8d\x02\xce\x03\x0c"
  "\x81\x89\x02\xcd\x03\x0a\x81\x87\x02\xcc\x03\x08\x81\x85\x02\xcb"
  "\x03\x06\x81\x83\x02\xca\x03\x04\x84\x06\x23\x3d\x2a\x02\x23\x42"
  "\x43\x44\x03\xe0\x03\x0e\x81\x83\x02\xdf\x03\x0c\x81\x83\x02\xde"
  "\x03\x0a\x81\x83\x02\xdd\x03\x08\x81\x83\x02\xdc\x03\x06\x81\x83"
  "\x02\xdb\x03\x04\x83\x04\x0d\x17\x02\x24\x23\x49\x6c\x6c\x65\x67"
  "\x61\x6c\x20\x62\x75\x69\x6c\x74\x2d\x69\x6e\x20\x74\x61\x67\x20"
  "\x72\x65\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3a\x3a\x39\x0e"
  "\x62\x75\x69\x6c\x74\x2d\x69\x6e\x2d\x74\x61\x67\x73\x3a\x02\x16"
  "\x62\x75\x69\x6c\x74\x2d\x69\x6e\x2d\x64\x69\x73\x70\x61\x74\x63"
  "\x68\x2d\x74\x61\x67\x39\x3a\x03\x04\x3f\x04\x0e\x74\x68\x65\x72"
  "\x65\x2d\x65\x78\x69\x73\x74\x73\x3f\x03\x0a\x6c\x69\x73\x74\x2d"
  "\x63\x6f\x70\x79\x3f\x04\x09\x66\x6f\x72\x2d\x61\x6c\x6c\x3f\x04"
  "\x06\x65\x72\x72\x6f\x72\x03\x16\x64\x69\x73\x70\x61\x74\x63\x68"
  "\x2d\x74\x61\x67\x2d\x63\x6f\x6e\x74\x65\x6e\x74\x73\x48\x03\x12"
  "\x6d\x61\x6b\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61"
  "\x67\x49\x04\x05\x6d\x65\x6d\x71\x4a\x09\xf3\x03\x28\x81\x85\x02"
  "\xf2\x03\x26\x81\x85\x02\xf1\x03\x24\x81\x89\x02\xf0\x03\x22\x81"
  "\x87\x02\xef\x03\x20\x81\x83\x02\xee\x03\x1e\x81\x83\x02\xed\x03"
  "\x1c\x81\x85\x02\xec\x03\x1a\x81\x85\x02\xeb\x03\x18\x81\x87\x02"
  "\xea\x03\x16\x81\x87\x02\xe9\x03\x14\x81\x87\x02\xe8\x03\x12\x81"
  "\x83\x02\xe7\x03\x10\x83\x04\xe6\x03\x0e\x81\x8b\x02\xe5\x03\x0c"
  "\x81\x85\x02\xe4\x03\x0a\x81\x85\x02\xe3\x03\x08\x81\x83\x02\xe2"
  "\x03\x06\x81\x87\x02\xe1\x03\x04\x83\x04\x27\x44\x4b\x02\x25\x3a"
  "\x02\x03\x3f\x02\xf5\x03\x06\x81\x81\x02\xf4\x03\x04\x82\x02\x05"
  "\x0d\x3f\x02\x26\x3a\x02\x04\x13\x66\x69\x6e\x64\x2d\x6d\x61\x74"
  "\x63\x68\x69\x6e\x67\x2d\x69\x74\x65\x6d\x03\x48\x04\x4a\x04\xf9"
  "\x03\x0a\x81\x85\x02\xf8\x03\x08\x81\x85\x02\xf7\x03\x06\x81\x83"
  "\x02\xf6\x03\x04\x83\x04\x09\x15\x48\x02\x27\x02\x2e\x09\x6f\x70"
  "\x65\x72\x61\x6e\x64\x73\x4c\x18\x20\x77\x69\x74\x68\x20\x74\x68"
  "\x65\x73\x65\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x3a\x20\x09"
  "\x6f\x70\x65\x72\x61\x74\x6f\x72\x4d\x02\x1b\x4e\x6f\x20\x61\x70"
  "\x70\x6c\x69\x63\x61\x62\x6c\x65\x20\x6d\x65\x74\x68\x6f\x64\x73"
  "\x20\x66\x6f\x72\x20\x16\x6e\x6f\x2d\x61\x70\x70\x6c\x69\x63\x61"
  "\x62\x6c\x65\x2d\x6d\x65\x74\x68\x6f\x64\x73\x4d\x4c\x25\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x6e\x6f\x2d"
  "\x61\x70\x70\x6c\x69\x63\x61\x62\x6c\x65\x2d\x6d\x65\x74\x68\x6f"
  "\x64\x73\x4d\x38\x03\x15\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d"
  "\x74\x79\x70\x65\x3a\x65\x72\x72\x6f\x72\x17\x73\x74\x61\x6e\x64"
  "\x61\x72\x64\x2d\x65\x72\x72\x6f\x72\x2d\x68\x61\x6e\x64\x6c\x65"
  "\x72\x4d\x04\x06\x14\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x74\x79\x70\x65\x05\x14\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x73\x69\x67\x6e\x61\x6c\x6c\x65\x72\x04\x0d\x77"
  "\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x04\x11\x61\x63\x63"
  "\x65\x73\x73\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x04\x06\x77"
  "\x72\x69\x74\x65\x06\x88\x04\x20\x81\x89\x02\x87\x04\x1e\x81\x85"
  "\x02\x86\x04\x1c\x81\x85\x02\x85\x04\x1a\x81\x89\x02\x84\x04\x18"
  "\x81\x85\x02\x83\x04\x16\x81\x85\x02\x82\x04\x14\x81\x81\x02\x81"
  "\x04\x12\x81\x81\x02\x80\x04\x10\x84\x06\xff\x03\x0e\x81\x87\x02"
  "\xfe\x03\x0c\x81\x83\x02\xfd\x03\x0a\x81\x81\x02\xfc\x03\x08\x81"
  "\x81\x02\xfb\x03\x06\x81\x87\x02\xfa\x03\x04\x82\x02\x1f\x3c\x4c"
  "\x02\x28\x04\x05\x06\x09\x08\x05\x6e\x75\x6c\x6c\x14\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x64\x2d\x65\x6e\x74\x72\x79\x2d\x6b\x69\x6e\x64"
  "\x04\x65\x6f\x66\x08\x64\x65\x66\x61\x75\x6c\x74\x07\x72\x65\x63"
  "\x6f\x72\x64\x0f\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x6e\x74"
  "\x72\x79\x0f\x6c\x61\x6d\x62\x64\x61\x2d\x6b\x65\x79\x77\x6f\x72"
  "\x64\x09\x63\x6f\x6e\x73\x74\x61\x6e\x74\x3b\x13\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x06\x66"
  "\x61\x6c\x73\x65\x0e\x66\x6c\x6f\x6e\x75\x6d\x2d\x76\x65\x63\x74"
  "\x6f\x72\x07\x66\x6c\x6f\x6e\x75\x6d\x42\x18\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x64\x2d\x72\x65\x74\x75\x72\x6e\x2d\x61\x64\x64\x72\x65"
  "\x73\x73\x08\x62\x6f\x6f\x6c\x65\x61\x6e\x02\x0c\x76\x65\x63\x74"
  "\x6f\x72\x2d\x73\x65\x74\x21\x0a\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x42\x14\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x07\x6f\x62\x6a\x65\x63\x74\x13\x65\x78"
  "\x74\x65\x6e\x64\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x1b\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x67\x65\x6e\x65\x72\x69"
  "\x63\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3a\x43\x44\x06\x44"
  "\x43\x1e\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x69\x64\x2f\x66"
  "\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x65\x70\x73\x69\x6c\x6f\x6e\x05"
  "\x03\x49\x02\x0a\x6d\x61\x6b\x65\x2d\x65\x71\x68\x74\x02\x1a\x6d"
  "\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74\x79\x70\x65\x2f\x63\x6f"
  "\x64\x65\x2d\x6c\x69\x6d\x69\x74\x03\x1b\x6d\x69\x63\x72\x6f\x63"
  "\x6f\x64\x65\x2d\x74\x79\x70\x65\x2f\x63\x6f\x64\x65\x2d\x3e\x6e"
  "\x61\x6d\x65\x73\x04\x18\x6d\x61\x6b\x65\x2d\x69\x6e\x69\x74\x69"
  "\x61\x6c\x69\x7a\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x04\x0c\x6d"
  "\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x03\x12\x6d\x61\x6b\x65"
  "\x2d\x62\x75\x69\x6c\x74\x2d\x69\x6e\x2d\x74\x61\x67\x49\x03\x1a"
  "\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74\x79\x70\x65\x2f\x6e"
  "\x61\x6d\x65\x2d\x3e\x63\x6f\x64\x65\x05\x1a\x03\x0c\x65\x6f\x66"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x3f\x04\x4a\x0c\xc2\x04\x76\x81\x85"
  "\x02\xc1\x04\x74\x81\x85\x02\xc0\x04\x72\x81\x85\x02\xbf\x04\x70"
  "\x81\x87\x02\xbe\x04\x6e\x81\x8b\x02\xbd\x04\x6c\x81\x8d\x02\xbc"
  "\x04\x6a\x81\x85\x02\xbb\x04\x68\x81\x89\x02\xba\x04\x66\x81\x85"
  "\x02\xb9\x04\x64\x81\x85\x02\xb8\x04\x62\x81\x85\x02\xb7\x04\x60"
  "\x81\x87\x02\xb6\x04\x5e\x81\x85\x02\xb5\x04\x5c\x81\x85\x02\xb4"
  "\x04\x5a\x81\x85\x02\xb3\x04\x58\x81\x81\x02\xb2\x04\x56\x81\x87"
  "\x02\xb1\x04\x54\x81\x83\x02\xb0\x04\x52\x81\x85\x02\xaf\x04\x50"
  "\x81\x81\x02\xae\x04\x4e\x81\x85\x02\xad\x04\x4c\x81\x85\x02\xac"
  "\x04\x4a\x81\x83\x02\xab\x04\x48\x81\x83\x02\xaa\x04\x46\x81\x81"
  "\x02\xa9\x04\x44\x81\x87\x02\xa8\x04\x42\x81\x87\x02\xa7\x04\x40"
  "\x81\x85\x02\xa6\x04\x3e\x81\x8b\x02\xa5\x04\x3c\x81\x85\x02\xa4"
  "\x04\x3a\x81\x83\x02\xa3\x04\x38\x81\x81\x02\xa2\x04\x36\x81\x85"
  "\x02\xa1\x04\x34\x81\x87\x02\xa0\x04\x32\x81\x87\x02\x9f\x04\x30"
  "\x81\x89\x02\x9e\x04\x2e\x83\x04\x9d\x04\x2c\x81\x8b\x02\x9c\x04"
  "\x2a\x81\x8b\x02\x9b\x04\x28\x81\x8b\x02\x9a\x04\x26\x81\x8b\x02"
  "\x99\x04\x24\x81\x8b\x02\x98\x04\x22\x81\x81\x02\x97\x04\x20\x81"
  "\x81\x02\x96\x04\x1e\x81\x83\x02\x95\x04\x1c\x81\x85\x02\x94\x04"
  "\x1a\x81\x81\x02\x93\x04\x18\x81\x81\x02\x92\x04\x16\x81\x85\x02"
  "\x91\x04\x14\x83\x04\x90\x04\x12\x81\x81\x02\x8f\x04\x10\x81\x81"
  "\x02\x8e\x04\x0e\x81\x81\x02\x8d\x04\x0c\x81\x81\x02\x8c\x04\x0a"
  "\x81\x81\x02\x8b\x04\x08\x81\x81\x02\x8a\x04\x06\x81\x81\x02\x89"
  "\x04\x04\x82\x02\x75\xba\x01\x4a\x28\x1a\x1a\x18\x4a\x04\x4c\x04"
  "\x48\x04\x3f\x04\x4b\x04\x04\x2a\x04\x41\x04\x47\x04\x46\x04\x45"
  "\x04\x40\x04\x3d\x04\x37\x04\x08\x31\x04\x30\x04\x0b\x04\x2f\x04"
  "\x2c\x04\x28\x04\x26\x04\x24\x04\x22\x04\x20\x04\x1c\x04\x1b\x04"
  "\x19\x04\x24\x1f\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x67"
  "\x65\x6e\x65\x72\x69\x63\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x73\x21\x44\x43\x3a\x17\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65"
  "\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x73\x21\x38\x4d\x39\x17"
  "\x62\x75\x69\x6c\x74\x2d\x69\x6e\x2d\x64\x69\x73\x70\x61\x74\x63"
  "\x68\x2d\x74\x61\x67\x73\x49\x3b\x3c\x36\x35\x34\x33\x3e\x32\x0a"
  "\x09\x1e\x2e\x2b\x2d\x29\x27\x25\x23\x21\x1d\x1f\x13\x67\x65\x6e"
  "\x65\x72\x69\x63\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x10"
  "\x67\x65\x6e\x65\x72\x69\x63\x2d\x72\x65\x63\x6f\x72\x64\x3f\x24"
  "\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x0c\x1e\x73\x65\x74\x2d\x67\x65\x6e\x65\x72\x69\x63\x2d\x72"
  "\x65\x63\x6f\x72\x64\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x21"
  "\x1a\x73\x65\x74\x2d\x67\x65\x6e\x65\x72\x69\x63\x2d\x72\x65\x63"
  "\x6f\x72\x64\x2f\x63\x61\x63\x68\x65\x21\x1e\x73\x65\x74\x2d\x67"
  "\x65\x6e\x65\x72\x69\x63\x2d\x72\x65\x63\x6f\x72\x64\x2f\x67\x65"
  "\x6e\x65\x72\x61\x74\x6f\x72\x21\x19\x67\x65\x6e\x65\x72\x69\x63"
  "\x2d\x72\x65\x63\x6f\x72\x64\x2f\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x15\x67\x65\x6e\x65\x72\x69\x63\x2d\x72\x65\x63\x6f\x72\x64"
  "\x2f\x63\x61\x63\x68\x65\x14\x67\x65\x6e\x65\x72\x69\x63\x2d\x72"
  "\x65\x63\x6f\x72\x64\x2f\x6e\x61\x6d\x65\x19\x67\x65\x6e\x65\x72"
  "\x69\x63\x2d\x72\x65\x63\x6f\x72\x64\x2f\x67\x65\x6e\x65\x72\x61"
  "\x74\x6f\x72\x19\x67\x65\x6e\x65\x72\x69\x63\x2d\x72\x65\x63\x6f"
  "\x72\x64\x2f\x61\x72\x69\x74\x79\x2d\x6d\x61\x78\x19\x67\x65\x6e"
  "\x65\x72\x69\x63\x2d\x72\x65\x63\x6f\x72\x64\x2f\x61\x72\x69\x74"
  "\x79\x2d\x6d\x69\x6e\x13\x67\x65\x6e\x65\x72\x69\x63\x2d\x72\x65"
  "\x63\x6f\x72\x64\x2f\x74\x61\x67\x0b\x17\x04\x16\x04\x15\x04\x14"
  "\x04\x13\x04\x12\x04\x11\x04\x10\x04\x0f\x04\x0e\x04\x0b\x13\x72"
  "\x74\x64\x3a\x67\x65\x6e\x65\x72\x69\x63\x2d\x72\x65\x63\x6f\x72"
  "\x64\x4d\x0d\x0a\x0f\x67\x65\x6e\x65\x72\x69\x63\x2d\x72\x65\x63"
  "\x6f\x72\x64\x04\x74\x61\x67\x0a\x61\x72\x69\x74\x79\x2d\x6d\x69"
  "\x6e\x0a\x61\x72\x69\x74\x79\x2d\x6d\x61\x78\x0a\x67\x65\x6e\x65"
  "\x72\x61\x74\x6f\x72\x05\x6e\x61\x6d\x65\x06\x63\x61\x63\x68\x65"
  "\x42\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74"
  "\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65"
  "\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x04\x4d"
  "\x02\x0d\x1c\x80\x80\x04\x0c\x1a\x81\x81\x02\x0b\x18\x81\x81\x02"
  "\x0a\x16\x81\x85\x02\x09\x14\x81\x83\x02\x08\x12\x81\x8f\x02\x07"
  "\x10\x81\x87\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a"
  "\x81\x83\x02\x03\x08\x81\x85\x02\x02\x06\x81\x87\x02\x01\x04\x81"
  "\x83\x02\x1b\x35";

SCHEME_OBJECT *
generic_so_data_6ba1b4b5208010a9 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_generic_so_data_6ba1b4b5208010a9 [0]))), (sizeof (prog_generic_so_data_6ba1b4b5208010a9)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_20]));
}

DECLARE_COMPILED_DATA_NS ("generic.so", generic_so_data_6ba1b4b5208010a9)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("generic.so", "0cdac020825f3736")
