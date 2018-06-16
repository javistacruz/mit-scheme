/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:59-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define ENVIRONMENT_LABEL_1_3 15
#define DEBUGGING_LABEL_1_2 14
#define OBJECT_1_0 13
#define EXECUTE_CACHE_1_8 9
#define EXECUTE_CACHE_1_7 11
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_1_4);
      goto file_modes_2;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_modes_5)
DEFLABEL (file_modes_2)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define ENVIRONMENT_LABEL_2_3 15
#define DEBUGGING_LABEL_2_2 14
#define OBJECT_2_0 13
#define EXECUTE_CACHE_2_8 9
#define EXECUTE_CACHE_2_7 11
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_2_4);
      goto set_file_modesB_2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_file_modesB_5)
DEFLABEL (set_file_modesB_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_7 9
#define LABEL_3_8 11
#define LABEL_3_15 13
#define LABEL_3_9 15
#define LABEL_3_16 17
#define LABEL_3_18 19
#define LABEL_3_19 21
#define LABEL_3_20 23
#define LABEL_3_21 25
#define LABEL_3_22 27
#define LABEL_3_27 29
#define LABEL_3_23 31
#define LABEL_3_28 33
#define LABEL_3_29 35
#define LABEL_3_31 37
#define LABEL_3_32 39
#define LABEL_3_30 41
#define LABEL_3_34 43
#define LABEL_3_35 45
#define ENVIRONMENT_LABEL_3_3 88
#define DEBUGGING_LABEL_3_2 87
#define OBJECT_3_11 86
#define OBJECT_3_10 85
#define OBJECT_3_9 84
#define OBJECT_3_8 83
#define OBJECT_3_7 82
#define OBJECT_3_6 81
#define OBJECT_3_5 80
#define OBJECT_3_4 79
#define OBJECT_3_3 78
#define OBJECT_3_2 77
#define OBJECT_3_1 76
#define OBJECT_3_0 75
#define EXECUTE_CACHE_3_38 47
#define EXECUTE_CACHE_3_37 49
#define EXECUTE_CACHE_3_33 51
#define EXECUTE_CACHE_3_36 53
#define EXECUTE_CACHE_3_25 55
#define EXECUTE_CACHE_3_24 57
#define EXECUTE_CACHE_3_17 59
#define EXECUTE_CACHE_3_14 61
#define EXECUTE_CACHE_3_13 63
#define EXECUTE_CACHE_3_26 65
#define EXECUTE_CACHE_3_12 67
#define EXECUTE_CACHE_3_11 69
#define EXECUTE_CACHE_3_10 71
#define FREE_REFERENCE_3_0 74
#define FREE_REFERENCES_LABEL_3_0 46
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_3_4);
      goto temporary_file_pathname_28;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_3_16);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_3_18);
      goto loop_25;

    case 9:
      current_block = (Rpc - LABEL_3_19);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_3_20);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_3_21);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_3_22);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_3_27);
      goto continuation_17;

    case 14:
      current_block = (Rpc - LABEL_3_23);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_3_28);
      goto label_32;

    case 16:
      current_block = (Rpc - LABEL_3_29);
      goto label_31;

    case 17:
      current_block = (Rpc - LABEL_3_31);
      goto continuation_23;

    case 18:
      current_block = (Rpc - LABEL_3_32);
      goto continuation_21;

    case 19:
      current_block = (Rpc - LABEL_3_30);
      goto continuation_16;

    case 20:
      current_block = (Rpc - LABEL_3_34);
      goto continuation_20;

    case 21:
      current_block = (Rpc - LABEL_3_35);
      goto continuation_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (temporary_file_pathname_34)
DEFLABEL (temporary_file_pathname_28)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if (! ((Wrd8.Obj) == (current_block [OBJECT_3_4])))
    goto label_41;

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  if ((Wrd6.Obj) == (current_block [OBJECT_3_4]))
    goto label_37;
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_3_7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_3_8]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_15);
  (Wrd22.Obj) = (Rsp [2]);

DEFLABEL (label_36)
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_3_6]);
  (* (--Rsp)) = (Wrd23.Obj);
  goto loop_25;

DEFLABEL (label_37)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_39;
  Wrd16 = Wrd20;

DEFLABEL (label_38)
  Wrd22 = Wrd16;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_16])), (Wrd17.pObj));

DEFLABEL (label_30)
  (Wrd16.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_40;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (loop_35)
DEFLABEL (loop_25)
  INTERRUPT_CHECK (26, LABEL_3_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_26]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_25]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_3_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_3_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_24]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_3_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_31]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_32]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_33]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_3_32);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd9.Lng) = ((Wrd6.Lng) & 448L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_34]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_35]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_36]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_3_35);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_38]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_3_34);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_11]), 2);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_3_31);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_47;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! ((Wrd17.Lng) > 999L))
    goto label_45;

DEFLABEL (label_46)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_27]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_30]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_25]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_3_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_37]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_3_27);

DEFLABEL (label_45)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_44;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd27.Lng) = ((Wrd29.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd27.Lng)))
    goto label_44;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));

DEFLABEL (label_43)
  (Rsp [1]) = (Wrd24.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_25;

DEFLABEL (label_44)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_29]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_31)
  (Wrd24.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_47)
  (Wrd40.Obj) = (current_block [OBJECT_3_9]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_46;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_6 9
#define LABEL_4_8 11
#define LABEL_4_10 13
#define LABEL_4_12 15
#define LABEL_4_11 17
#define LABEL_4_13 19
#define LABEL_4_14 21
#define LABEL_4_16 23
#define LABEL_4_17 25
#define LABEL_4_20 27
#define LABEL_4_21 29
#define ENVIRONMENT_LABEL_4_3 51
#define DEBUGGING_LABEL_4_2 50
#define OBJECT_4_6 49
#define OBJECT_4_5 48
#define OBJECT_4_4 47
#define OBJECT_4_3 46
#define OBJECT_4_2 45
#define OBJECT_4_1 44
#define OBJECT_4_0 43
#define EXECUTE_CACHE_4_23 31
#define EXECUTE_CACHE_4_22 33
#define EXECUTE_CACHE_4_19 35
#define EXECUTE_CACHE_4_18 37
#define EXECUTE_CACHE_4_15 39
#define EXECUTE_CACHE_4_9 41
#define FREE_REFERENCES_LABEL_4_0 30
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_4_4);
      goto temporary_directory_pathname_23;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_9;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_11;

    case 6:
      current_block = (Rpc - LABEL_4_12);
      goto lambda_5;

    case 7:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_4_13);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_4_14);
      goto continuation_0;

    case 10:
      current_block = (Rpc - LABEL_4_16);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_4_17);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_4_21);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (temporary_directory_pathname_26)
DEFLABEL (temporary_directory_pathname_23)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_8;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_8;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_4_6);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_8;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_5;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_4_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_5;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_4_16);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_4_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_5;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_4_20);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd10.Obj) = (current_block [OBJECT_4_6]);
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_23]));

DEFLABEL (lambda_27)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_4_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_8);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto lambda_5;

DEFLABEL (label_35)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_28)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_4_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_13);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_36;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_22]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  Rvl = (Rsp [0]);
  goto label_37;

DEFLABEL (label_38)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_37)
DEFLABEL (label_39)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define ENVIRONMENT_LABEL_5_3 15
#define DEBUGGING_LABEL_5_2 14
#define OBJECT_5_0 13
#define EXECUTE_CACHE_5_8 9
#define EXECUTE_CACHE_5_7 11
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto file_attributes_direct_2;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_direct_5)
DEFLABEL (file_attributes_direct_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define ENVIRONMENT_LABEL_6_3 15
#define DEBUGGING_LABEL_6_2 14
#define OBJECT_6_0 13
#define EXECUTE_CACHE_6_8 9
#define EXECUTE_CACHE_6_7 11
#define FREE_REFERENCES_LABEL_6_0 8
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_6_4);
      goto file_attributes_indirect_2;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_indirect_5)
DEFLABEL (file_attributes_indirect_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

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
unxprm_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_type_3)
DEFLABEL (file_attributes_type_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [1]);
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
unxprm_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_n_links_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_n_links_3)
DEFLABEL (file_attributes_n_links_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

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

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 7
#define DEBUGGING_LABEL_9_2 6
#define OBJECT_9_1 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_uid_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_uid_3)
DEFLABEL (file_attributes_uid_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

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

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 7
#define DEBUGGING_LABEL_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_gid_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_gid_3)
DEFLABEL (file_attributes_gid_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

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

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 7
#define DEBUGGING_LABEL_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_access_time_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_access_time_3)
DEFLABEL (file_attributes_access_time_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

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

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 7
#define DEBUGGING_LABEL_12_2 6
#define OBJECT_12_1 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_modification_time_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_modification_time_3)
DEFLABEL (file_attributes_modification_time_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

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

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 7
#define DEBUGGING_LABEL_13_2 6
#define OBJECT_13_1 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_change_time_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_change_time_3)
DEFLABEL (file_attributes_change_time_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

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

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 7
#define DEBUGGING_LABEL_14_2 6
#define OBJECT_14_1 5
#define OBJECT_14_0 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_length_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_length_3)
DEFLABEL (file_attributes_length_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

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

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 7
#define DEBUGGING_LABEL_15_2 6
#define OBJECT_15_1 5
#define OBJECT_15_0 4
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_mode_string_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_mode_string_3)
DEFLABEL (file_attributes_mode_string_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

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

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 7
#define DEBUGGING_LABEL_16_2 6
#define OBJECT_16_1 5
#define OBJECT_16_0 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto file_attributes_inode_number_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_inode_number_3)
DEFLABEL (file_attributes_inode_number_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

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

#define LABEL_17_4 3
#define LABEL_17_7 5
#define LABEL_17_5 7
#define ENVIRONMENT_LABEL_17_3 17
#define DEBUGGING_LABEL_17_2 16
#define OBJECT_17_2 15
#define OBJECT_17_1 14
#define OBJECT_17_0 13
#define EXECUTE_CACHE_17_8 9
#define EXECUTE_CACHE_17_6 11
#define FREE_REFERENCES_LABEL_17_0 8
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
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
      goto file_length_3;

    case 1:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_length_6)
DEFLABEL (file_length_3)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_7);

DEFLABEL (label_9)
  (Wrd7.Obj) = (current_block [OBJECT_17_1]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 2);

DEFLABEL (label_8)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_7;
  Rvl = ((Wrd15.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define ENVIRONMENT_LABEL_18_3 15
#define DEBUGGING_LABEL_18_2 14
#define OBJECT_18_0 13
#define EXECUTE_CACHE_18_8 9
#define EXECUTE_CACHE_18_7 11
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_18_4);
      goto file_modification_time_direct_2;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_modification_time_direct_5)
DEFLABEL (file_modification_time_direct_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define ENVIRONMENT_LABEL_19_3 15
#define DEBUGGING_LABEL_19_2 14
#define OBJECT_19_0 13
#define EXECUTE_CACHE_19_8 9
#define EXECUTE_CACHE_19_7 11
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_19_4);
      goto file_modification_time_indirect_2;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_modification_time_indirect_5)
DEFLABEL (file_modification_time_indirect_2)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define ENVIRONMENT_LABEL_20_3 15
#define DEBUGGING_LABEL_20_2 14
#define OBJECT_20_0 13
#define EXECUTE_CACHE_20_8 9
#define EXECUTE_CACHE_20_7 11
#define FREE_REFERENCES_LABEL_20_0 8
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_20_4);
      goto file_access_time_direct_2;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_access_time_direct_5)
DEFLABEL (file_access_time_direct_2)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define ENVIRONMENT_LABEL_21_3 15
#define DEBUGGING_LABEL_21_2 14
#define OBJECT_21_0 13
#define EXECUTE_CACHE_21_8 9
#define EXECUTE_CACHE_21_7 11
#define FREE_REFERENCES_LABEL_21_0 8
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_21_4);
      goto file_access_time_indirect_2;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_access_time_indirect_5)
DEFLABEL (file_access_time_indirect_2)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_8 5
#define LABEL_22_9 7
#define LABEL_22_5 9
#define LABEL_22_6 11
#define ENVIRONMENT_LABEL_22_3 23
#define DEBUGGING_LABEL_22_2 22
#define OBJECT_22_0 21
#define EXECUTE_CACHE_22_12 13
#define EXECUTE_CACHE_22_11 15
#define EXECUTE_CACHE_22_10 17
#define EXECUTE_CACHE_22_7 19
#define FREE_REFERENCES_LABEL_22_0 12
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_22_4);
      goto set_file_timesB_7;

    case 1:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_22_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_file_timesB_10)
DEFLABEL (set_file_timesB_7)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_10]));

DEFLABEL (label_11)
  Wrd12 = Wrd9;
  Rsp = (& (Rsp [1]));

DEFLABEL (label_14)
  (Rsp [2]) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  if (! ((Wrd16.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_12;
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (label_12)
  Wrd19 = Wrd16;
  Rsp = (& (Rsp [1]));

DEFLABEL (label_13)
  (Rsp [3]) = (Wrd19.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_8);
  (Wrd19.Obj) = Rvl;
  goto label_13;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_9);
  (Wrd12.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_8 7
#define LABEL_23_7 9
#define LABEL_23_10 11
#define LABEL_23_12 13
#define LABEL_23_11 15
#define ENVIRONMENT_LABEL_23_3 29
#define DEBUGGING_LABEL_23_2 28
#define OBJECT_23_2 27
#define OBJECT_23_1 26
#define OBJECT_23_0 25
#define EXECUTE_CACHE_23_13 17
#define EXECUTE_CACHE_23_9 19
#define EXECUTE_CACHE_23_6 21
#define FREE_REFERENCE_23_0 24
#define FREE_REFERENCES_LABEL_23_0 16
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_23_4);
      goto get_environment_variable_7;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_23_8);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_23_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_23_12);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_23_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_environment_variable_12)
DEFLABEL (get_environment_variable_7)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_17;
  Wrd10 = Wrd14;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_23_1]))
    goto label_13;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_23_10);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_15;
  Wrd11 = Wrd15;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_23_11);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_12])), (Wrd12.pObj));

DEFLABEL (label_10)
  (Wrd11.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_8])), (Wrd11.pObj));

DEFLABEL (label_9)
  (Wrd10.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_7 5
#define LABEL_24_5 7
#define LABEL_24_8 9
#define ENVIRONMENT_LABEL_24_3 19
#define DEBUGGING_LABEL_24_2 18
#define OBJECT_24_0 17
#define EXECUTE_CACHE_24_9 11
#define EXECUTE_CACHE_24_6 13
#define FREE_REFERENCE_24_0 16
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_24_4);
      goto set_environment_variableB_2;

    case 1:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_environment_variableB_6)
DEFLABEL (set_environment_variableB_2)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_7);

DEFLABEL (label_9)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_8;
  Wrd12 = Wrd16;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_8])), (Wrd13.pObj));

DEFLABEL (label_4)
  (Wrd12.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define ENVIRONMENT_LABEL_25_3 17
#define DEBUGGING_LABEL_25_2 16
#define OBJECT_25_0 15
#define EXECUTE_CACHE_25_8 9
#define EXECUTE_CACHE_25_6 11
#define FREE_REFERENCE_25_0 14
#define FREE_REFERENCES_LABEL_25_0 8
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_25_4);
      goto delete_environment_variableB_1;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_environment_variableB_5)
DEFLABEL (delete_environment_variableB_1)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 12
#define DEBUGGING_LABEL_26_2 11
#define EXECUTE_CACHE_26_6 7
#define FREE_REFERENCE_26_0 10
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto reset_environment_variablesB_0;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_environment_variablesB_4)
DEFLABEL (reset_environment_variablesB_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_7 7
#define LABEL_27_8 9
#define LABEL_27_9 11
#define ENVIRONMENT_LABEL_27_3 23
#define DEBUGGING_LABEL_27_2 22
#define EXECUTE_CACHE_27_10 13
#define EXECUTE_CACHE_27_6 15
#define FREE_REFERENCE_27_1 18
#define FREE_REFERENCE_27_0 19
#define FREE_ASSIGNMENT_27_0 21
#define FREE_REFERENCES_LABEL_27_0 12
#define NUMBER_OF_LINKER_SECTIONS_27_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_27_4);
      goto initialize_system_primitivesB_1;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_27_8);
      goto label_4;

    case 4:
      current_block = (Rpc - LABEL_27_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_system_primitivesB_7)
DEFLABEL (initialize_system_primitivesB_1)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_27_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_14;

DEFLABEL (label_13)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_12)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_11;
  Wrd18 = Wrd22;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_9;
  Wrd24 = Wrd28;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_9])), (Wrd25.pObj));

DEFLABEL (label_5)
  (Wrd24.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_8])), (Wrd19.pObj));

DEFLABEL (label_4)
  (Wrd18.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_14)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_13;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_27_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_3)
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_7 7
#define ENVIRONMENT_LABEL_28_3 16
#define DEBUGGING_LABEL_28_2 15
#define EXECUTE_CACHE_28_8 9
#define EXECUTE_CACHE_28_6 11
#define FREE_REFERENCE_28_0 14
#define FREE_REFERENCES_LABEL_28_0 8
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_28_4);
      goto os_suffix_mime_type_1;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_suffix_mime_type_5)
DEFLABEL (os_suffix_mime_type_1)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_7;
  Wrd6 = Wrd10;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_7])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_7 7
#define LABEL_29_10 9
#define LABEL_29_8 11
#define LABEL_29_12 13
#define LABEL_29_9 15
#define ENVIRONMENT_LABEL_29_3 31
#define DEBUGGING_LABEL_29_2 30
#define OBJECT_29_1 29
#define OBJECT_29_0 28
#define EXECUTE_CACHE_29_13 17
#define EXECUTE_CACHE_29_11 19
#define EXECUTE_CACHE_29_6 21
#define FREE_REFERENCE_29_0 24
#define FREE_ASSIGNMENT_29_1 26
#define FREE_ASSIGNMENT_29_0 27
#define FREE_REFERENCES_LABEL_29_0 16
#define NUMBER_OF_LINKER_SECTIONS_29_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_29_4);
      goto initialize_mime_typesB_4;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_29_10);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_29_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_29_12);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_29_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_mime_typesB_10)
DEFLABEL (initialize_mime_typesB_4)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_18;

DEFLABEL (label_17)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_16)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_29_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_15;
  Wrd29 = Wrd33;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_29_1]);
  goto pop_return;

DEFLABEL (label_13)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_12])), (Wrd6.pObj), Rvl);

DEFLABEL (label_8)
  goto label_11;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_10])), (Wrd30.pObj));

DEFLABEL (label_7)
  (Wrd29.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_18)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_17;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_6)
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define LABEL_30_9 9
#define LABEL_30_11 11
#define LABEL_30_14 13
#define LABEL_30_7 15
#define LABEL_30_16 17
#define LABEL_30_8 19
#define LABEL_30_13 21
#define LABEL_30_19 23
#define LABEL_30_18 25
#define LABEL_30_22 27
#define LABEL_30_21 29
#define LABEL_30_24 31
#define LABEL_30_27 33
#define LABEL_30_25 35
#define TAG_30_26 16
#define LABEL_30_28 37
#define ENVIRONMENT_LABEL_30_3 62
#define DEBUGGING_LABEL_30_2 61
#define OBJECT_30_3 60
#define OBJECT_30_2 59
#define OBJECT_30_1 58
#define OBJECT_30_0 57
#define EXECUTE_CACHE_30_29 39
#define EXECUTE_CACHE_30_23 41
#define EXECUTE_CACHE_30_20 43
#define EXECUTE_CACHE_30_17 45
#define EXECUTE_CACHE_30_15 47
#define EXECUTE_CACHE_30_12 49
#define EXECUTE_CACHE_30_10 51
#define FREE_REFERENCE_30_2 54
#define FREE_REFERENCE_30_1 55
#define FREE_REFERENCE_30_0 56
#define FREE_REFERENCES_LABEL_30_0 38
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_30_4);
      goto import_mime_types_19;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto loop_8;

    case 3:
      current_block = (Rpc - LABEL_30_9);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_30_11);
      goto lambda_18;

    case 5:
      current_block = (Rpc - LABEL_30_14);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_30_16);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_30_8);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_30_13);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_30_19);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_30_18);
      goto lambda_17;

    case 12:
      current_block = (Rpc - LABEL_30_22);
      goto label_26;

    case 13:
      current_block = (Rpc - LABEL_30_21);
      goto lambda_15;

    case 14:
      current_block = (Rpc - LABEL_30_24);
      goto label_27;

    case 15:
      current_block = (Rpc - LABEL_30_27);
      goto label_28;

    case 16:
      current_block = (Rpc - LABEL_30_25);
      goto lambda_36;

    case 17:
      current_block = (Rpc - LABEL_30_28);
      goto label_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (import_mime_types_31)
DEFLABEL (import_mime_types_19)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_38;
  Wrd7 = Wrd11;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd7.Obj);
  goto loop_8;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_5])), (Wrd8.pObj));

DEFLABEL (label_21)
  (Wrd7.Obj) = Rvl;
  goto label_37;

DEFLABEL (loop_32)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_30_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_40;
  (Wrd8.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (label_39)
  Rvl = (current_block [OBJECT_30_2]);
  goto pop_return;

DEFLABEL (label_40)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_44;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_43)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_30_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_30_7);
  (Rsp [2]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_42;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_41)
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd17.Lng) + 1L);
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (Rsp [1]) = (Wrd15.Obj);
  goto loop_8;

DEFLABEL (label_42)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 1);

DEFLABEL (label_24)
  (Wrd6.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (lambda_33)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_30_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_48;
  Wrd8 = Wrd12;

DEFLABEL (label_47)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_30_13);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_18]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_2]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_46;
  Wrd7 = Wrd11;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_20]));

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_19])), (Wrd8.pObj));

DEFLABEL (label_25)
  (Wrd7.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_14])), (Wrd9.pObj));

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_47;

DEFLABEL (lambda_34)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_30_18);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_21]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_50;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_49)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_23]));

DEFLABEL (label_50)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_22]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 1);

DEFLABEL (label_26)
  (Wrd7.Obj) = Rvl;
  goto label_49;

DEFLABEL (lambda_35)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_30_21);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_54;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_53)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_25])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd17 = Wrd16;
  (Wrd18.Obj) = (Rsp [0]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Rsp [0]) = (Wrd15.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_52;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_51)
  (Rsp [1]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_23]));

DEFLABEL (label_52)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_27]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 1);

DEFLABEL (label_28)
  (Wrd19.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_30_25);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_56;
  Wrd5 = Wrd9;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Wrd14.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd14.Obj);
  (Rsp [2]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_29]));

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_28])), (Wrd6.pObj));

DEFLABEL (label_29)
  (Wrd5.Obj) = Rvl;
  goto label_55;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_7 7
#define LABEL_31_8 9
#define LABEL_31_9 11
#define TAG_31_10 4
#define LABEL_31_13 13
#define LABEL_31_14 15
#define LABEL_31_15 17
#define LABEL_31_12 19
#define LABEL_31_16 21
#define LABEL_31_19 23
#define LABEL_31_20 25
#define LABEL_31_18 27
#define LABEL_31_21 29
#define LABEL_31_23 31
#define LABEL_31_24 33
#define ENVIRONMENT_LABEL_31_3 52
#define DEBUGGING_LABEL_31_2 51
#define OBJECT_31_5 50
#define OBJECT_31_4 49
#define OBJECT_31_3 48
#define OBJECT_31_2 47
#define OBJECT_31_1 46
#define OBJECT_31_0 45
#define EXECUTE_CACHE_31_22 35
#define EXECUTE_CACHE_31_17 37
#define EXECUTE_CACHE_31_11 39
#define EXECUTE_CACHE_31_6 41
#define FREE_REFERENCE_31_0 44
#define FREE_REFERENCES_LABEL_31_0 34
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd58;
  machine_word Wrd46;
  machine_word Wrd41;
  machine_word Wrd14;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd63;
  machine_word Wrd23;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd18;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd30;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_31_4);
      goto import_mime_types_file_24;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto loop_21;

    case 3:
      current_block = (Rpc - LABEL_31_8);
      goto continuation_17;

    case 4:
      current_block = (Rpc - LABEL_31_9);
      goto lambda_36;

    case 5:
      current_block = (Rpc - LABEL_31_13);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_31_14);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_31_15);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_31_12);
      goto continuation_18;

    case 9:
      current_block = (Rpc - LABEL_31_16);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_31_19);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_31_20);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_31_18);
      goto continuation_19;

    case 13:
      current_block = (Rpc - LABEL_31_21);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_31_23);
      goto label_31;

    case 15:
      current_block = (Rpc - LABEL_31_24);
      goto label_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (import_mime_types_file_34)
DEFLABEL (import_mime_types_file_24)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (* (--Rsp)) = Rvl;
  goto loop_21;

DEFLABEL (loop_35)
DEFLABEL (loop_21)
  INTERRUPT_CHECK (26, LABEL_31_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_9])));
  Rhp += 4;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd16 = Wrd9;
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_11]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_31_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_31_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_17]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_31_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  Rsp = (& (Rsp [2]));
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  Rvl = ((Wrd10.pObj) [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_21;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_31_9);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_55;
  Wrd6 = Wrd10;

DEFLABEL (label_54)
  Wrd5 = Wrd6;
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_53;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_53;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) (Wrd26.Lng)) < ((unsigned long) (Wrd29.Lng))))
    goto label_53;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  (Wrd18.pObj) = (& ((Wrd27.pObj) [(Wrd16.Lng)]));
  (Wrd12.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_52)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_51;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_50)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_16]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [5]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_31_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;

DEFLABEL (label_39)
  Rvl = (current_block [OBJECT_31_5]);

DEFLABEL (label_38)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [5]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_21]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_22]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_31_21);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [5]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_44;
  Wrd13 = Wrd17;

DEFLABEL (label_43)
  Wrd12 = Wrd13;
  (Wrd19.Obj) = (* (Rsp++));
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_42;
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_42;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) (Wrd46.Lng)) < ((unsigned long) (Wrd49.Lng))))
    goto label_42;
  (Wrd36.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd38.pObj) = (& ((Wrd47.pObj) [(Wrd36.Lng)]));
  ((Wrd38.pObj) [1]) = (Wrd19.Obj);

DEFLABEL (label_41)
  Rsp = (& (Rsp [1]));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [4]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_31_4]);
  ((Wrd23.pObj) [0]) = (Wrd29.Obj);
  Rvl = (Wrd24.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd52.Obj) = ((Wrd54.pObj) [2]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_24]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_3]), 3);

DEFLABEL (label_32)
  goto label_41;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_23])), (Wrd14.pObj));

DEFLABEL (label_31)
  (Wrd13.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_45)
  (Wrd19.Obj) = (Rsp [0]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_49;
  Wrd22 = Wrd26;

DEFLABEL (label_48)
  Wrd21 = Wrd22;
  (Wrd32.Obj) = (current_block [OBJECT_31_2]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd63.uLng) == 10))
    goto label_47;
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [2]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_47;
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) (Wrd59.Lng)) < ((unsigned long) (Wrd62.Lng))))
    goto label_47;
  (Wrd49.uLng) = (OBJECT_DATUM (Wrd54.Obj));
  (Wrd51.pObj) = (& ((Wrd60.pObj) [(Wrd49.Lng)]));
  ((Wrd51.pObj) [1]) = (Wrd28.Obj);

DEFLABEL (label_46)
  Rsp = (& (Rsp [1]));
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [4]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_31_4]);
  ((Wrd36.pObj) [0]) = (Wrd42.Obj);
  Rvl = (Wrd37.Obj);
  goto label_38;

DEFLABEL (label_47)
  (Wrd66.Obj) = (Rsp [1]);
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd65.Obj) = ((Wrd67.pObj) [2]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_20]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_3]), 3);

DEFLABEL (label_30)
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_19])), (Wrd23.pObj));

DEFLABEL (label_29)
  (Wrd22.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_15]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_14]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_0]), 2);

DEFLABEL (label_27)
  (Wrd12.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_13])), (Wrd7.pObj));

DEFLABEL (label_26)
  (Wrd6.Obj) = Rvl;
  goto label_54;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_7 7
#define LABEL_32_8 9
#define LABEL_32_10 11
#define LABEL_32_12 13
#define ENVIRONMENT_LABEL_32_3 27
#define DEBUGGING_LABEL_32_2 26
#define OBJECT_32_0 25
#define EXECUTE_CACHE_32_14 15
#define EXECUTE_CACHE_32_13 17
#define EXECUTE_CACHE_32_11 19
#define EXECUTE_CACHE_32_9 21
#define EXECUTE_CACHE_32_6 23
#define FREE_REFERENCES_LABEL_32_0 14
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_32_4);
      goto read_mime_types_file_10;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_32_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_32_12);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_mime_types_file_13)
DEFLABEL (read_mime_types_file_10)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (lambda_14)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_32_5);
  (Wrd5.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_7;

DEFLABEL (loop_15)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_32_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_14]));

DEFLABEL (label_16)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_32_12);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd12.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  goto label_17;

DEFLABEL (label_18)
  (Wrd8.Obj) = (Rsp [2]);

DEFLABEL (label_17)
DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_6 7
#define LABEL_33_8 9
#define LABEL_33_7 11
#define LABEL_33_11 13
#define LABEL_33_10 15
#define ENVIRONMENT_LABEL_33_3 30
#define DEBUGGING_LABEL_33_2 29
#define OBJECT_33_5 28
#define OBJECT_33_4 27
#define OBJECT_33_3 26
#define OBJECT_33_2 25
#define OBJECT_33_1 24
#define OBJECT_33_0 23
#define EXECUTE_CACHE_33_12 17
#define EXECUTE_CACHE_33_9 19
#define FREE_REFERENCE_33_0 22
#define FREE_REFERENCES_LABEL_33_0 16
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_33_4);
      goto parse_mime_types_line_9;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_33_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_33_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_33_10);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_mime_types_line_16)
DEFLABEL (parse_mime_types_line_9)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_30;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_29)
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd16.Lng) > 0)
    goto label_26;

DEFLABEL (label_25)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_33_4]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_24;
  Wrd21 = Wrd25;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_33_7);
  (Rsp [0]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.uLng) == 1)
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  if (! ((Wrd7.uLng) == 1))
    goto label_22;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_33_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = (Rsp [0]);
  goto label_18;

DEFLABEL (label_19)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_18)
DEFLABEL (label_20)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_5]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_8])), (Wrd22.pObj));

DEFLABEL (label_12)
  (Wrd21.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 30))
    goto label_28;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [1]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_28;
  (Wrd32.uLng) = ((unsigned long) (((unsigned char *) (Wrd36.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd28.Obj) = (MAKE_OBJECT (2, (Wrd32.uLng)));

DEFLABEL (label_27)
  if (! ((Wrd28.Obj) == (current_block [OBJECT_33_3])))
    goto label_25;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (current_block [OBJECT_33_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 2);

DEFLABEL (label_13)
  (Wrd28.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 1);

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_6 5
#define LABEL_34_5 7
#define ENVIRONMENT_LABEL_34_3 16
#define DEBUGGING_LABEL_34_2 15
#define OBJECT_34_1 14
#define OBJECT_34_0 13
#define EXECUTE_CACHE_34_8 9
#define EXECUTE_CACHE_34_7 11
#define FREE_REFERENCES_LABEL_34_0 8
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_34_4);
      goto user_home_directory_3;

    case 1:
      current_block = (Rpc - LABEL_34_6);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (user_home_directory_6)
DEFLABEL (user_home_directory_3)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;

DEFLABEL (label_7)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (label_8)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_34_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_6);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_7 7
#define ENVIRONMENT_LABEL_35_3 19
#define DEBUGGING_LABEL_35_2 18
#define OBJECT_35_0 17
#define EXECUTE_CACHE_35_10 9
#define EXECUTE_CACHE_35_9 11
#define EXECUTE_CACHE_35_8 13
#define EXECUTE_CACHE_35_6 15
#define FREE_REFERENCES_LABEL_35_0 8
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto current_home_directory_3;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (current_home_directory_6)
DEFLABEL (current_home_directory_3)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_9]));

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define ENVIRONMENT_LABEL_36_3 12
#define DEBUGGING_LABEL_36_2 11
#define OBJECT_36_1 10
#define OBJECT_36_0 9
#define EXECUTE_CACHE_36_6 7
#define FREE_REFERENCES_LABEL_36_0 6
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto current_user_name_2;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (current_user_name_5)
DEFLABEL (current_user_name_2)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 0);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define ENVIRONMENT_LABEL_37_3 12
#define DEBUGGING_LABEL_37_2 11
#define EXECUTE_CACHE_37_7 7
#define EXECUTE_CACHE_37_6 9
#define FREE_REFERENCES_LABEL_37_0 6
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto file_time__local_decoded_time_1;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_time__local_decoded_time_4)
DEFLABEL (file_time__local_decoded_time_1)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define ENVIRONMENT_LABEL_38_3 12
#define DEBUGGING_LABEL_38_2 11
#define EXECUTE_CACHE_38_7 7
#define EXECUTE_CACHE_38_6 9
#define FREE_REFERENCES_LABEL_38_0 6
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_38_4);
      goto file_time__global_decoded_time_1;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_time__global_decoded_time_4)
DEFLABEL (file_time__global_decoded_time_1)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define ENVIRONMENT_LABEL_39_3 12
#define DEBUGGING_LABEL_39_2 11
#define EXECUTE_CACHE_39_7 7
#define EXECUTE_CACHE_39_6 9
#define FREE_REFERENCES_LABEL_39_0 6
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_39_4);
      goto decoded_time__file_time_1;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time__file_time_4)
DEFLABEL (decoded_time__file_time_1)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define ENVIRONMENT_LABEL_40_3 9
#define DEBUGGING_LABEL_40_2 8
#define FREE_REFERENCE_40_0 7
#define FREE_REFERENCES_LABEL_40_0 6
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_40_4);
      goto file_time__universal_time_0;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_time__universal_time_4)
DEFLABEL (file_time__universal_time_0)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_8;
  Wrd7 = Wrd11;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 26)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_6)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_5;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) + (Wrd22.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_5;
  Rvl = (LONG_TO_FIXNUM (Wrd18.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define ENVIRONMENT_LABEL_41_3 9
#define DEBUGGING_LABEL_41_2 8
#define FREE_REFERENCE_41_0 7
#define FREE_REFERENCES_LABEL_41_0 6
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_41_4);
      goto universal_time__file_time_0;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (universal_time__file_time_4)
DEFLABEL (universal_time__file_time_0)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_8;
  Wrd7 = Wrd11;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 26)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_6)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_5;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) - (Wrd22.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_5;
  Rvl = (LONG_TO_FIXNUM (Wrd18.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define ENVIRONMENT_LABEL_42_3 12
#define DEBUGGING_LABEL_42_2 11
#define OBJECT_42_1 10
#define OBJECT_42_0 9
#define EXECUTE_CACHE_42_6 7
#define FREE_REFERENCES_LABEL_42_0 6
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_42_4);
      goto unix_uid__string_2;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unix_uid__string_5)
DEFLABEL (unix_uid__string_2)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_42_1]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define ENVIRONMENT_LABEL_43_3 12
#define DEBUGGING_LABEL_43_2 11
#define OBJECT_43_1 10
#define OBJECT_43_0 9
#define EXECUTE_CACHE_43_6 7
#define FREE_REFERENCES_LABEL_43_0 6
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_43_4);
      goto unix_gid__string_2;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unix_gid__string_5)
DEFLABEL (unix_gid__string_2)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_43_1]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_6 7
#define LABEL_44_8 9
#define TAG_44_9 3
#define LABEL_44_10 11
#define TAG_44_11 4
#define LABEL_44_12 13
#define TAG_44_13 5
#define LABEL_44_16 15
#define LABEL_44_17 17
#define LABEL_44_18 19
#define LABEL_44_19 21
#define LABEL_44_21 23
#define ENVIRONMENT_LABEL_44_3 40
#define DEBUGGING_LABEL_44_2 39
#define OBJECT_44_3 38
#define OBJECT_44_2 37
#define OBJECT_44_1 36
#define OBJECT_44_0 35
#define EXECUTE_CACHE_44_22 25
#define EXECUTE_CACHE_44_20 27
#define EXECUTE_CACHE_44_15 29
#define EXECUTE_CACHE_44_14 31
#define EXECUTE_CACHE_44_7 33
#define FREE_REFERENCES_LABEL_44_0 24
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_44_4);
      goto unix_system_11;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_44_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_44_8);
      goto lambda_15;

    case 4:
      current_block = (Rpc - LABEL_44_10);
      goto lambda_16;

    case 5:
      current_block = (Rpc - LABEL_44_12);
      goto lambda_17;

    case 6:
      current_block = (Rpc - LABEL_44_16);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_44_17);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_44_18);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_44_19);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_44_21);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unix_system_14)
DEFLABEL (unix_system_11)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_8])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  ((Wrd12.pObj) [4]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_10])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd17 = Wrd16;
  (Wrd18.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_12])));
  Rhp += 2;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd24 = Wrd21;
  ((Wrd24.pObj) [2]) = (Wrd13.Obj);
  ((Wrd24.pObj) [3]) = (Wrd11.Obj);
  (Rsp [3]) = (Wrd20.Obj);
  (Rsp [2]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_14]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_44_8);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_0]), 0);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_44_16);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_18]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_44_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_22]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_44_21);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  (Rsp [0]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_20]));

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_44_10);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_44_12);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_44_17);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd11.Obj) = (MAKE_OBJECT (50, 0));
  ((Wrd8.pObj) [0]) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_19]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_44_19);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd11.Obj) = (MAKE_OBJECT (50, 0));
  ((Wrd8.pObj) [0]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_44_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_6 7
#define LABEL_45_7 9
#define LABEL_45_11 11
#define LABEL_45_12 13
#define LABEL_45_13 15
#define LABEL_45_14 17
#define LABEL_45_9 19
#define LABEL_45_15 21
#define LABEL_45_16 23
#define LABEL_45_18 25
#define LABEL_45_19 27
#define ENVIRONMENT_LABEL_45_3 50
#define DEBUGGING_LABEL_45_2 49
#define OBJECT_45_7 48
#define OBJECT_45_6 47
#define OBJECT_45_5 46
#define OBJECT_45_4 45
#define OBJECT_45_3 44
#define OBJECT_45_2 43
#define OBJECT_45_1 42
#define OBJECT_45_0 41
#define EXECUTE_CACHE_45_22 29
#define EXECUTE_CACHE_45_21 31
#define EXECUTE_CACHE_45_20 33
#define EXECUTE_CACHE_45_17 35
#define EXECUTE_CACHE_45_10 37
#define EXECUTE_CACHE_45_8 39
#define FREE_REFERENCES_LABEL_45_0 28
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_45_4);
      goto file_line_ending_16;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_9;

    case 2:
      current_block = (Rpc - LABEL_45_6);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_45_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_45_11);
      goto continuation_14;

    case 5:
      current_block = (Rpc - LABEL_45_12);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_45_13);
      goto continuation_12;

    case 7:
      current_block = (Rpc - LABEL_45_14);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_45_9);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_45_15);
      goto loop_6;

    case 10:
      current_block = (Rpc - LABEL_45_16);
      goto continuation_3;

    case 11:
      current_block = (Rpc - LABEL_45_18);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_45_19);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_line_ending_19)
DEFLABEL (file_line_ending_16)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_7);
  (* (--Rsp)) = Rvl;
  goto loop_6;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_45_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_45_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_45_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_23;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_45_6]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_45_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_23;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_45_5]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_45_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_23;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_12]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_45_4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_45_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_23;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_45_3]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_45_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;

DEFLABEL (label_23)
  Rvl = (current_block [OBJECT_45_7]);
  goto label_21;

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_45_2]);

DEFLABEL (label_21)
DEFLABEL (label_24)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (loop_20)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_45_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_45_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd8.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_21]));

DEFLABEL (label_25)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_19]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_45_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_22]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_45_18);
  (Rsp [0]) = Rvl;
  goto loop_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define ENVIRONMENT_LABEL_46_3 6
#define DEBUGGING_LABEL_46_2 5
#define OBJECT_46_0 4
#define FREE_REFERENCES_LABEL_46_0 4
#define NUMBER_OF_LINKER_SECTIONS_46_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_46_4);
      goto default_line_ending_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_line_ending_3)
DEFLABEL (default_line_ending_0)
  INTERRUPT_CHECK (26, LABEL_46_4);
  Rvl = (current_block [OBJECT_46_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_6 7
#define LABEL_47_8 9
#define LABEL_47_9 11
#define LABEL_47_11 13
#define LABEL_47_12 15
#define TAG_47_13 6
#define LABEL_47_24 17
#define LABEL_47_14 19
#define TAG_47_15 8
#define LABEL_47_16 21
#define TAG_47_17 9
#define LABEL_47_19 23
#define LABEL_47_20 25
#define LABEL_47_22 27
#define LABEL_47_26 29
#define LABEL_47_33 31
#define LABEL_47_28 33
#define LABEL_47_31 35
#define LABEL_47_34 37
#define LABEL_47_35 39
#define LABEL_47_36 41
#define LABEL_47_37 43
#define TAG_47_38 20
#define LABEL_47_39 45
#define TAG_47_40 21
#define LABEL_47_43 47
#define LABEL_47_45 49
#define LABEL_47_41 51
#define LABEL_47_46 53
#define LABEL_47_44 55
#define LABEL_47_48 57
#define LABEL_47_50 59
#define LABEL_47_49 61
#define ENVIRONMENT_LABEL_47_3 93
#define DEBUGGING_LABEL_47_2 92
#define OBJECT_47_4 91
#define OBJECT_47_3 90
#define OBJECT_47_2 89
#define OBJECT_47_1 88
#define OBJECT_47_0 87
#define EXECUTE_CACHE_47_47 63
#define EXECUTE_CACHE_47_42 65
#define EXECUTE_CACHE_47_32 67
#define EXECUTE_CACHE_47_30 69
#define EXECUTE_CACHE_47_29 71
#define EXECUTE_CACHE_47_27 73
#define EXECUTE_CACHE_47_25 75
#define EXECUTE_CACHE_47_23 77
#define EXECUTE_CACHE_47_21 79
#define EXECUTE_CACHE_47_18 81
#define EXECUTE_CACHE_47_10 83
#define EXECUTE_CACHE_47_7 85
#define FREE_REFERENCES_LABEL_47_0 62
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd34;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_47_4);
      goto copy_file_38;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_47_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_47_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_47_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_47_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_47_12);
      goto lambda_47;

    case 7:
      current_block = (Rpc - LABEL_47_24);
      goto continuation_29;

    case 8:
      current_block = (Rpc - LABEL_47_14);
      goto lambda_48;

    case 9:
      current_block = (Rpc - LABEL_47_16);
      goto lambda_49;

    case 10:
      current_block = (Rpc - LABEL_47_19);
      goto continuation_33;

    case 11:
      current_block = (Rpc - LABEL_47_20);
      goto continuation_32;

    case 12:
      current_block = (Rpc - LABEL_47_22);
      goto continuation_5;

    case 13:
      current_block = (Rpc - LABEL_47_26);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_47_33);
      goto label_40;

    case 15:
      current_block = (Rpc - LABEL_47_28);
      goto continuation_36;

    case 16:
      current_block = (Rpc - LABEL_47_31);
      goto continuation_6;

    case 17:
      current_block = (Rpc - LABEL_47_34);
      goto continuation_10;

    case 18:
      current_block = (Rpc - LABEL_47_35);
      goto continuation_35;

    case 19:
      current_block = (Rpc - LABEL_47_36);
      goto continuation_34;

    case 20:
      current_block = (Rpc - LABEL_47_37);
      goto lambda_15;

    case 21:
      current_block = (Rpc - LABEL_47_39);
      goto loop_23;

    case 22:
      current_block = (Rpc - LABEL_47_43);
      goto label_41;

    case 23:
      current_block = (Rpc - LABEL_47_45);
      goto continuation_13;

    case 24:
      current_block = (Rpc - LABEL_47_41);
      goto continuation_11;

    case 25:
      current_block = (Rpc - LABEL_47_46);
      goto label_42;

    case 26:
      current_block = (Rpc - LABEL_47_44);
      goto continuation_18;

    case 27:
      current_block = (Rpc - LABEL_47_48);
      goto label_44;

    case 28:
      current_block = (Rpc - LABEL_47_50);
      goto label_43;

    case 29:
      current_block = (Rpc - LABEL_47_49);
      goto continuation_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_file_46)
DEFLABEL (copy_file_38)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_47_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_47_8);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_12])));
  Rhp += 4;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd25 = Wrd18;
  ((Wrd25.pObj) [2]) = Rvl;
  (Wrd24.Obj) = (Rsp [3]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  ((Wrd25.pObj) [4]) = (Wrd11.Obj);
  ((Wrd25.pObj) [5]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_14])));
  Rhp += 2;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd32 = Wrd29;
  ((Wrd32.pObj) [2]) = (Wrd11.Obj);
  ((Wrd32.pObj) [3]) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_16])));
  Rhp += 2;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  Wrd39 = Wrd36;
  ((Wrd39.pObj) [2]) = (Wrd11.Obj);
  ((Wrd39.pObj) [3]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd35.Obj);
  (Rsp [2]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_47_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_21]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_47_20);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_30]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_47_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_29]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_47_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_7]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_47_36);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_10]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_47_35);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_4]), 2);

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_47_12);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_23]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_47_22);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_31]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_32]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_47_31);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  Rvl = (current_block [OBJECT_47_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_47_14);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_25]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_47_24);

DEFLABEL (label_53)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [3]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Rsp [0]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_25]));

DEFLABEL (label_52)
  Rvl = (current_block [OBJECT_47_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_47_16);

DEFLABEL (lambda_28)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_27]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_47_26);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_56;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd19.Lng) == 0))
    goto label_55;

DEFLABEL (label_54)
  Rvl = (current_block [OBJECT_47_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_34]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_47_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 1);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_47_34);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_37])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd16.pObj) [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  ((Wrd14.pObj) [4]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_39])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  ((Wrd25.pObj) [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd26.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_23;

DEFLABEL (label_56)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_40)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_54;

DEFLABEL (lambda_50)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_47_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_47_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_42]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_47_41);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_59;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd28.Lng) > 0)
    goto label_58;

DEFLABEL (label_57)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_45]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_47_3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = ((Wrd20.pObj) [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_47]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_47_45);
  goto label_57;

DEFLABEL (label_59)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_46]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_42)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  goto label_58;

DEFLABEL (loop_51)
DEFLABEL (loop_23)
  INTERRUPT_CHECK (26, LABEL_47_39);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_69;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd8.Lng) < 8192L))
    goto label_61;

DEFLABEL (label_60)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [2]);
  (Rsp [0]) = (Wrd18.Obj);
  goto lambda_15;

DEFLABEL (label_61)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_44]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_47_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto lambda_15;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_47_44);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [3]));
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_68;
  if (Rvl == (current_block [OBJECT_47_1]))
    goto label_63;

DEFLABEL (label_62)
  Rvl = (Rsp [0]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_63)
  (Wrd10.Obj) = (current_block [OBJECT_47_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_49]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_67;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd27.Lng) = ((Wrd29.Lng) - 8192L);
  if (! (LONG_TO_FIXNUM_P (Wrd27.Lng)))
    goto label_67;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_66)
  (Wrd33.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd33.Obj);
  goto loop_23;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_47_49);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd9.uLng) == 26)
    goto label_65;

DEFLABEL (label_64)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_65)
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd12.Lng) + 8192L);
  if (! (LONG_TO_FIXNUM_P (Wrd10.Lng)))
    goto label_64;
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd21.Obj) = (current_block [OBJECT_47_1]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_50]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_43)
  (Wrd16.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd16.Obj));
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_68)
  (Wrd39.Obj) = (current_block [OBJECT_47_1]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_48]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_44)
  (Wrd34.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd34.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  goto label_63;

DEFLABEL (label_69)
  (Wrd22.Obj) = (current_block [OBJECT_47_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_43]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  goto label_60;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_7 7
#define LABEL_48_8 9
#define LABEL_48_13 11
#define LABEL_48_9 13
#define LABEL_48_11 15
#define ENVIRONMENT_LABEL_48_3 33
#define DEBUGGING_LABEL_48_2 32
#define OBJECT_48_4 31
#define OBJECT_48_3 30
#define OBJECT_48_2 29
#define OBJECT_48_1 28
#define OBJECT_48_0 27
#define EXECUTE_CACHE_48_14 17
#define EXECUTE_CACHE_48_12 19
#define EXECUTE_CACHE_48_10 21
#define EXECUTE_CACHE_48_6 23
#define FREE_REFERENCE_48_0 26
#define FREE_REFERENCES_LABEL_48_0 16
#define NUMBER_OF_LINKER_SECTIONS_48_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_48_4);
      goto init_file_specifier__pathname_7;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_48_7);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_48_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_48_13);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_48_9);
      goto lambda_2;

    case 6:
      current_block = (Rpc - LABEL_48_11);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (init_file_specifier__pathname_11)
DEFLABEL (init_file_specifier__pathname_7)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_48_8);
  (Wrd9.Obj) = (current_block [OBJECT_48_1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_14;
  Wrd10 = Wrd14;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_48_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_48_11);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_14]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_13])), (Wrd11.pObj));

DEFLABEL (label_9)
  (Wrd10.Obj) = Rvl;
  goto label_13;

DEFLABEL (lambda_12)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_48_9);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_48_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_48_4]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define ENVIRONMENT_LABEL_49_3 6
#define DEBUGGING_LABEL_49_2 5
#define OBJECT_49_0 4
#define FREE_REFERENCES_LABEL_49_0 4
#define NUMBER_OF_LINKER_SECTIONS_49_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto os_make_subprocess_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_make_subprocess_3)
DEFLABEL (os_make_subprocess_0)
  INTERRUPT_CHECK (26, LABEL_49_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_0]), 8);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_5 3
#define LABEL_50_4 5
#define LABEL_50_10 7
#define LABEL_50_11 9
#define LABEL_50_12 11
#define LABEL_50_13 13
#define LABEL_50_15 15
#define LABEL_50_16 17
#define LABEL_50_17 19
#define LABEL_50_19 21
#define LABEL_50_20 23
#define LABEL_50_22 25
#define LABEL_50_23 27
#define LABEL_50_24 29
#define LABEL_50_25 31
#define LABEL_50_26 33
#define LABEL_50_6 35
#define LABEL_50_27 37
#define LABEL_50_8 39
#define LABEL_50_28 41
#define LABEL_50_33 43
#define LABEL_50_30 45
#define LABEL_50_34 47
#define LABEL_50_18 49
#define LABEL_50_14 51
#define ENVIRONMENT_LABEL_50_3 75
#define DEBUGGING_LABEL_50_2 74
#define OBJECT_50_4 73
#define OBJECT_50_3 72
#define OBJECT_50_2 71
#define OBJECT_50_1 70
#define OBJECT_50_0 69
#define EXECUTE_CACHE_50_35 53
#define EXECUTE_CACHE_50_32 55
#define EXECUTE_CACHE_50_29 57
#define EXECUTE_CACHE_50_31 59
#define EXECUTE_CACHE_50_21 61
#define EXECUTE_CACHE_50_9 63
#define EXECUTE_CACHE_50_7 65
#define FREE_REFERENCE_50_0 68
#define FREE_REFERENCES_LABEL_50_0 52
#define NUMBER_OF_LINKER_SECTIONS_50_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd64;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd70;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd101;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd107;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd113;
  machine_word Wrd138;
  machine_word Wrd130;
  machine_word Wrd132;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_50_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_50_4);
      goto os_find_program_37;

    case 2:
      current_block = (Rpc - LABEL_50_10);
      goto continuation_10;

    case 3:
      current_block = (Rpc - LABEL_50_11);
      goto continuation_13;

    case 4:
      current_block = (Rpc - LABEL_50_12);
      goto label_46;

    case 5:
      current_block = (Rpc - LABEL_50_13);
      goto continuation_24;

    case 6:
      current_block = (Rpc - LABEL_50_15);
      goto label_45;

    case 7:
      current_block = (Rpc - LABEL_50_16);
      goto continuation_22;

    case 8:
      current_block = (Rpc - LABEL_50_17);
      goto loop_16;

    case 9:
      current_block = (Rpc - LABEL_50_19);
      goto label_44;

    case 10:
      current_block = (Rpc - LABEL_50_20);
      goto label_43;

    case 11:
      current_block = (Rpc - LABEL_50_22);
      goto loop_29;

    case 12:
      current_block = (Rpc - LABEL_50_23);
      goto label_42;

    case 13:
      current_block = (Rpc - LABEL_50_24);
      goto label_40;

    case 14:
      current_block = (Rpc - LABEL_50_25);
      goto label_41;

    case 15:
      current_block = (Rpc - LABEL_50_26);
      goto continuation_35;

    case 16:
      current_block = (Rpc - LABEL_50_6);
      goto continuation_2;

    case 17:
      current_block = (Rpc - LABEL_50_27);
      goto label_39;

    case 18:
      current_block = (Rpc - LABEL_50_8);
      goto continuation_5;

    case 19:
      current_block = (Rpc - LABEL_50_28);
      goto continuation_34;

    case 20:
      current_block = (Rpc - LABEL_50_33);
      goto lambda_4;

    case 21:
      current_block = (Rpc - LABEL_50_30);
      goto continuation_6;

    case 22:
      current_block = (Rpc - LABEL_50_34);
      goto continuation_3;

    case 23:
      current_block = (Rpc - LABEL_50_18);
      goto continuation_12;

    case 24:
      current_block = (Rpc - LABEL_50_14);
      goto continuation_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_find_program_48)
DEFLABEL (os_find_program_37)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  if (! ((Wrd11.Obj) == (current_block [OBJECT_50_0])))
    goto label_55;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_54)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_50_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd7.Obj);
  goto lambda_4;

DEFLABEL (label_52)
  (Wrd8.Obj) = (Rsp [3]);
  if (! ((Wrd8.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_53;
  goto loop_29;

DEFLABEL (label_53)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_30]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_31]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_50_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_16;

DEFLABEL (label_55)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_54;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_50_6);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;

DEFLABEL (label_62)
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_57;

DEFLABEL (label_56)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_61;
  Wrd10 = Wrd14;

DEFLABEL (label_60)
  if (! ((Wrd10.Obj) == (current_block [OBJECT_50_0])))
    goto label_59;

DEFLABEL (label_58)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_26]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_28]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_29]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_50_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_50_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_32]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_50_26);
  goto label_56;

DEFLABEL (label_59)
  (Wrd17.Obj) = (Rsp [4]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_27])), (Wrd11.pObj));

DEFLABEL (label_39)
  (Wrd10.Obj) = Rvl;
  goto label_60;

DEFLABEL (lambda_51)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_50_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_35]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_50_34);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_29]));

DEFLABEL (label_64)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (loop_50)
DEFLABEL (loop_29)
  INTERRUPT_CHECK (26, LABEL_50_22);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_66;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_65)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_62;

DEFLABEL (label_66)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_16]))));
  (* (--Rsp)) = (Wrd32.Obj);
  if (! ((Wrd27.uLng) == 1))
    goto label_78;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  if ((Wrd35.Obj) == ((SCHEME_OBJECT) 0))
    goto label_70;

DEFLABEL (label_77)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_13]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd59.Obj) = (Rsp [2]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_76;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_75)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_9]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_50_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_14]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (Wrd117.Obj) = (Rsp [2]);
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd117.Obj));
  if (! ((Wrd118.uLng) == 1))
    goto label_69;
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd117.Obj));
  (Wrd116.Obj) = ((Wrd115.pObj) [0]);
  (* (--Rsp)) = (Wrd116.Obj);

DEFLABEL (label_68)
  (Wrd123.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd123.Obj);

DEFLABEL (label_67)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_21]));

DEFLABEL (label_69)
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_15]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_70)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_74)
  (Wrd39.Obj) = (Rsp [0]);
  if ((Wrd39.Obj) == ((SCHEME_OBJECT) 0))
    goto label_71;
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd39.Obj);
  goto label_62;

DEFLABEL (label_71)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_73;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [1]);

DEFLABEL (label_72)
  (Rsp [1]) = (Wrd43.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_29;

DEFLABEL (label_73)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_24]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 1);

DEFLABEL (label_40)
  (Wrd43.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_76)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_25]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 1);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_23]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 1);

DEFLABEL (label_42)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  goto label_77;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_50_14);
  (* (--Rsp)) = Rvl;
  goto lambda_4;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_50_16);
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (loop_49)
DEFLABEL (loop_16)
  INTERRUPT_CHECK (26, LABEL_50_17);
  (Wrd72.Obj) = (Rsp [0]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if ((Wrd73.uLng) == 1)
    goto label_79;
  Rsp = (& (Rsp [4]));
  goto label_65;

DEFLABEL (label_79)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_18]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_10]))));
  (* (--Rsp)) = (Wrd84.Obj);
  if (! ((Wrd73.uLng) == 1))
    goto label_84;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [0]);
  if ((Wrd87.Obj) == ((SCHEME_OBJECT) 0))
    goto label_82;

DEFLABEL (label_81)
  (Wrd92.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd92.Obj);
  (Wrd96.Obj) = (Rsp [4]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd97.uLng) == 1))
    goto label_80;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [0]);
  (* (--Rsp)) = (Wrd95.Obj);
  goto label_67;

DEFLABEL (label_80)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_20]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_82)
  (Wrd90.Obj) = (Rsp [4]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd90.Obj);

DEFLABEL (label_83)
  (Wrd91.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd91.Obj);
  goto label_67;

DEFLABEL (label_84)
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_19]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 1);

DEFLABEL (label_44)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  goto label_81;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_50_10);
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_50_18);
  (* (--Rsp)) = Rvl;
  goto lambda_4;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_50_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_85;
  Rsp = (& (Rsp [5]));
  goto label_63;

DEFLABEL (label_85)
  (Wrd133.Obj) = (Rsp [1]);
  (Wrd134.uLng) = (OBJECT_TYPE (Wrd133.Obj));
  if (! ((Wrd134.uLng) == 1))
    goto label_87;
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd133.Obj));
  (Wrd130.Obj) = ((Wrd132.pObj) [1]);

DEFLABEL (label_86)
  (Rsp [1]) = (Wrd130.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_16;

DEFLABEL (label_87)
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_12]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd133.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 1);

DEFLABEL (label_46)
  (Wrd130.Obj) = Rvl;
  goto label_86;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_7 5
#define LABEL_51_5 7
#define ENVIRONMENT_LABEL_51_3 18
#define DEBUGGING_LABEL_51_2 17
#define OBJECT_51_1 16
#define OBJECT_51_0 15
#define EXECUTE_CACHE_51_9 9
#define EXECUTE_CACHE_51_8 11
#define EXECUTE_CACHE_51_6 13
#define FREE_REFERENCES_LABEL_51_0 8
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_51_4);
      goto os_exec_path_4;

    case 1:
      current_block = (Rpc - LABEL_51_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_exec_path_7)
DEFLABEL (os_exec_path_4)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  (Wrd8.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_9]));

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_51_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_51_7);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_6 7
#define LABEL_52_7 9
#define LABEL_52_8 11
#define LABEL_52_12 13
#define LABEL_52_13 15
#define LABEL_52_11 17
#define LABEL_52_14 19
#define LABEL_52_10 21
#define LABEL_52_15 23
#define LABEL_52_16 25
#define ENVIRONMENT_LABEL_52_3 39
#define DEBUGGING_LABEL_52_2 38
#define OBJECT_52_4 37
#define OBJECT_52_3 36
#define OBJECT_52_2 35
#define OBJECT_52_1 34
#define OBJECT_52_0 33
#define EXECUTE_CACHE_52_18 27
#define EXECUTE_CACHE_52_17 29
#define EXECUTE_CACHE_52_9 31
#define FREE_REFERENCES_LABEL_52_0 26
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd13;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_52_4);
      goto os_parse_path_string_15;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_52_6);
      goto loop_12;

    case 3:
      current_block = (Rpc - LABEL_52_7);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_52_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_52_12);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_52_13);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_52_11);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_52_14);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_52_10);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_52_15);
      goto lambda_2;

    case 11:
      current_block = (Rpc - LABEL_52_16);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_parse_path_string_22)
DEFLABEL (os_parse_path_string_15)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_26;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_25)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_52_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_12;

DEFLABEL (label_26)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (loop_23)
DEFLABEL (loop_12)
  DLINK_INTERRUPT_CHECK (25, LABEL_52_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_36;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_36;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd38.Lng) < (Wrd42.Lng))
    goto label_28;

DEFLABEL (label_27)
  Rvl = (current_block [OBJECT_52_2]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_28)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_52_3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_52_8);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_10]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = ((Wrd39.pObj) [1]);
  (* (--Rsp)) = (Wrd44.Obj);
  goto lambda_2;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_52_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_52_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_29)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd27.uLng) == 26))
    goto label_35;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd28.Lng) = ((Wrd30.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_35;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_34)
  Rdl = (& (Rsp [2]));
  goto loop_12;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_52_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_33;
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_33;
  if ((Wrd12.Obj) == (Wrd14.Obj))
    goto label_32;

DEFLABEL (label_31)
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [7]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (* (--Rsp)) = (Wrd30.Obj);
  goto lambda_2;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_52_13);
  (Wrd41.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd34.Obj) = Rvl;

DEFLABEL (label_30)
  (Wrd35.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_32)
  (Wrd34.Obj) = (current_block [OBJECT_52_4]);
  Rsp = (& (Rsp [1]));
  (Wrd31.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd31.Obj));
  goto label_30;

DEFLABEL (label_33)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_14]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_20)
  (Wrd16.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd16.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_32;

DEFLABEL (label_35)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_12]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_19)
  (Wrd18.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd18.Obj));
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_36)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_18)
  (Wrd11.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd11.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_28;

DEFLABEL (lambda_24)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_52_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_52_16);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_18]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define ENVIRONMENT_LABEL_53_3 12
#define DEBUGGING_LABEL_53_2 11
#define OBJECT_53_1 10
#define OBJECT_53_0 9
#define EXECUTE_CACHE_53_6 7
#define FREE_REFERENCES_LABEL_53_0 6
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_53_4);
      goto os_shell_file_name_2;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_shell_file_name_5)
DEFLABEL (os_shell_file_name_2)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = Rvl;
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_53_1]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define ENVIRONMENT_LABEL_54_3 7
#define DEBUGGING_LABEL_54_2 6
#define OBJECT_54_1 5
#define OBJECT_54_0 4
#define FREE_REFERENCES_LABEL_54_0 4
#define NUMBER_OF_LINKER_SECTIONS_54_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_54_4);
      goto os_form_shell_command_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_form_shell_command_4)
DEFLABEL (os_form_shell_command_1)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_54_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_54_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define ENVIRONMENT_LABEL_55_3 6
#define DEBUGGING_LABEL_55_2 5
#define OBJECT_55_0 4
#define FREE_REFERENCES_LABEL_55_0 4
#define NUMBER_OF_LINKER_SECTIONS_55_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxprm_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_55_4);
      goto os_executable_pathname_types_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_executable_pathname_types_3)
DEFLABEL (os_executable_pathname_types_0)
  INTERRUPT_CHECK (26, LABEL_55_4);
  Rvl = (current_block [OBJECT_55_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_10 11
#define LABEL_9 13
#define LABEL_11 15
#define LABEL_12 17
#define LABEL_14 19
#define LABEL_16 21
#define LABEL_15 23
#define LABEL_17 25
#define LABEL_19 27
#define LABEL_18 29
#define LABEL_20 31
#define LABEL_22 33
#define LABEL_21 35
#define LABEL_24 37
#define LABEL_23 39
#define LABEL_26 41
#define LABEL_25 43
#define LABEL_28 45
#define LABEL_27 47
#define LABEL_30 49
#define LABEL_29 51
#define LABEL_31 53
#define LABEL_32 55
#define LABEL_33 57
#define ENVIRONMENT_LABEL_3 104
#define DEBUGGING_LABEL_2 103
#define PURIFICATION_ROOT 102
#define OBJECT_28 101
#define OBJECT_27 100
#define OBJECT_26 99
#define OBJECT_25 98
#define OBJECT_24 97
#define OBJECT_23 96
#define OBJECT_22 95
#define OBJECT_21 94
#define OBJECT_20 93
#define OBJECT_19 92
#define OBJECT_18 91
#define OBJECT_17 90
#define OBJECT_16 89
#define OBJECT_15 88
#define OBJECT_14 87
#define OBJECT_13 86
#define OBJECT_12 85
#define OBJECT_11 84
#define OBJECT_10 83
#define OBJECT_9 82
#define OBJECT_8 81
#define OBJECT_7 80
#define OBJECT_6 79
#define OBJECT_5 78
#define OBJECT_4 77
#define OBJECT_3 76
#define OBJECT_2 75
#define OBJECT_1 74
#define OBJECT_0 73
#define FREE_REFERENCE_8 59
#define FREE_REFERENCE_7 60
#define FREE_REFERENCE_6 61
#define FREE_REFERENCE_5 62
#define FREE_REFERENCE_4 63
#define FREE_REFERENCE_3 64
#define FREE_REFERENCE_2 65
#define FREE_REFERENCE_1 66
#define FREE_REFERENCE_0 67
#define GLOBAL_EXECUTE_CACHE_13 69
#define GLOBAL_EXECUTE_CACHE_5 71
#define FREE_REFERENCES_LABEL_0 58
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
unxprm_so_2d4e5d268f7b5926 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd16;
  machine_word Wrd26;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_7);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto label_22;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto label_23;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_24);
      goto label_24;

    case 18:
      current_block = (Rpc - LABEL_23);
      goto continuation_13;

    case 19:
      current_block = (Rpc - LABEL_26);
      goto label_25;

    case 20:
      current_block = (Rpc - LABEL_25);
      goto continuation_14;

    case 21:
      current_block = (Rpc - LABEL_28);
      goto label_26;

    case 22:
      current_block = (Rpc - LABEL_27);
      goto continuation_15;

    case 23:
      current_block = (Rpc - LABEL_30);
      goto label_27;

    case 24:
      current_block = (Rpc - LABEL_29);
      goto continuation_16;

    case 25:
      current_block = (Rpc - LABEL_31);
      goto label_30;

    case 26:
      current_block = (Rpc - LABEL_32);
      goto label_31;

    case 27:
      current_block = (Rpc - LABEL_33);
      goto expression_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_18)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_32])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_31)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_30)
  {
    static const short sections [] =
      {
	0,
	0,
	0,
	1,
	1,
	1,
	2,
	0,
	2,
	1,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	2,
	2,
	3,
	2,
	3,
	2,
	2,
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
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	1,
	2,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 55)
      goto label_29;
    blocks = (current_block [OBJECT_28]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_31])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_29)
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
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_49;
  Wrd8 = Wrd12;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_47;
  Wrd8 = Wrd12;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd26.Obj) = (MAKE_OBJECT (0, 10));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd15.pObj) = (& (Rhp [-11]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_45;
  Wrd8 = Wrd12;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_43;
  Wrd8 = Wrd12;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_41;
  Wrd8 = Wrd12;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_39;
  Wrd8 = Wrd12;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_37;
  Wrd8 = Wrd12;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_35;
  Wrd8 = Wrd12;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_33;
  Wrd8 = Wrd12;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd5.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_27]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd9.pObj));

DEFLABEL (label_27)
  (Wrd8.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28])), (Wrd9.pObj));

DEFLABEL (label_26)
  (Wrd8.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26])), (Wrd9.pObj));

DEFLABEL (label_25)
  (Wrd8.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd9.pObj));

DEFLABEL (label_24)
  (Wrd8.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd9.pObj));

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd9.pObj));

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16])), (Wrd9.pObj));

DEFLABEL (label_21)
  (Wrd8.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10])), (Wrd9.pObj));

DEFLABEL (label_20)
  (Wrd8.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_19)
  (Wrd8.Obj) = Rvl;
  goto label_48;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_unxprm_so_2d4e5d268f7b5926 [55] =
  {
    { "unxprm_so_code_1", 3, unxprm_so_code_1 },
    { "unxprm_so_code_2", 3, unxprm_so_code_2 },
    { "unxprm_so_code_3", 22, unxprm_so_code_3 },
    { "unxprm_so_code_4", 14, unxprm_so_code_4 },
    { "unxprm_so_code_5", 3, unxprm_so_code_5 },
    { "unxprm_so_code_6", 3, unxprm_so_code_6 },
    { "unxprm_so_code_7", 1, unxprm_so_code_7 },
    { "unxprm_so_code_8", 1, unxprm_so_code_8 },
    { "unxprm_so_code_9", 1, unxprm_so_code_9 },
    { "unxprm_so_code_10", 1, unxprm_so_code_10 },
    { "unxprm_so_code_11", 1, unxprm_so_code_11 },
    { "unxprm_so_code_12", 1, unxprm_so_code_12 },
    { "unxprm_so_code_13", 1, unxprm_so_code_13 },
    { "unxprm_so_code_14", 1, unxprm_so_code_14 },
    { "unxprm_so_code_15", 1, unxprm_so_code_15 },
    { "unxprm_so_code_16", 1, unxprm_so_code_16 },
    { "unxprm_so_code_17", 3, unxprm_so_code_17 },
    { "unxprm_so_code_18", 3, unxprm_so_code_18 },
    { "unxprm_so_code_19", 3, unxprm_so_code_19 },
    { "unxprm_so_code_20", 3, unxprm_so_code_20 },
    { "unxprm_so_code_21", 3, unxprm_so_code_21 },
    { "unxprm_so_code_22", 5, unxprm_so_code_22 },
    { "unxprm_so_code_23", 7, unxprm_so_code_23 },
    { "unxprm_so_code_24", 4, unxprm_so_code_24 },
    { "unxprm_so_code_25", 3, unxprm_so_code_25 },
    { "unxprm_so_code_26", 2, unxprm_so_code_26 },
    { "unxprm_so_code_27", 5, unxprm_so_code_27 },
    { "unxprm_so_code_28", 3, unxprm_so_code_28 },
    { "unxprm_so_code_29", 7, unxprm_so_code_29 },
    { "unxprm_so_code_30", 18, unxprm_so_code_30 },
    { "unxprm_so_code_31", 16, unxprm_so_code_31 },
    { "unxprm_so_code_32", 6, unxprm_so_code_32 },
    { "unxprm_so_code_33", 7, unxprm_so_code_33 },
    { "unxprm_so_code_34", 3, unxprm_so_code_34 },
    { "unxprm_so_code_35", 3, unxprm_so_code_35 },
    { "unxprm_so_code_36", 2, unxprm_so_code_36 },
    { "unxprm_so_code_37", 2, unxprm_so_code_37 },
    { "unxprm_so_code_38", 2, unxprm_so_code_38 },
    { "unxprm_so_code_39", 2, unxprm_so_code_39 },
    { "unxprm_so_code_40", 2, unxprm_so_code_40 },
    { "unxprm_so_code_41", 2, unxprm_so_code_41 },
    { "unxprm_so_code_42", 2, unxprm_so_code_42 },
    { "unxprm_so_code_43", 2, unxprm_so_code_43 },
    { "unxprm_so_code_44", 11, unxprm_so_code_44 },
    { "unxprm_so_code_45", 13, unxprm_so_code_45 },
    { "unxprm_so_code_46", 1, unxprm_so_code_46 },
    { "unxprm_so_code_47", 30, unxprm_so_code_47 },
    { "unxprm_so_code_48", 7, unxprm_so_code_48 },
    { "unxprm_so_code_49", 1, unxprm_so_code_49 },
    { "unxprm_so_code_50", 25, unxprm_so_code_50 },
    { "unxprm_so_code_51", 3, unxprm_so_code_51 },
    { "unxprm_so_code_52", 12, unxprm_so_code_52 },
    { "unxprm_so_code_53", 2, unxprm_so_code_53 },
    { "unxprm_so_code_54", 1, unxprm_so_code_54 },
    { "unxprm_so_code_55", 1, unxprm_so_code_55 }
  };

int
decl_unxprm_so_2d4e5d268f7b5926 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_unxprm_so_2d4e5d268f7b5926);
  return (0);
}

DECLARE_COMPILED_CODE ("unxprm.so", 28, decl_unxprm_so_2d4e5d268f7b5926, unxprm_so_2d4e5d268f7b5926)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_unxprm_so_data_2d4e5d268f7b5926 [8003] =
  "\x8f\x01\x58\xb0\x0e\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\x28\x0d"
  "\xb9\x28\x0d\xba\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d"
  "\xb0\x82\x88\xc2\xbc\x28\xb1\x28\xb2\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbd\x1d\xb0\x83\x88\xb4\x0c\x02\x81\x0d\xbe\x80\x0c"
  "\x1d\xc0\xbf\x86\x0f\x0c\x0d\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\xb1\x28\xb1"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0c\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x28\x0d\x1c\x28\xb1\x28\x0d\x28\x1b\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x85\x88\xc1\x28\xb1\x28\xb2\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\xc1\x28\xb1\x28\xb2\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c"
  "\x80\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x86\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x28\xb1\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xc1\x28\xb1\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x28\xb1\x28\xb2\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x28\xb1\x28\xb2"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3"
  "\x28\xb1\x28\x0d\x1c\x28\x0d\x1c\x28\xb2\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x0d\x1b"
  "\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x24"
  "\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x25\x0d\x1c\x0d\x24\x28\x0d\x1c\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x08\x1b\x0d\x1c\x25"
  "\x0d\x1c\x24\x28\x1b\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xc1\x1c\x1d\xc1\x1c\x80\x1b\x1b\x1b\x24\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x07\xc3\x08\x1b\x1b\x1b\x24"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x08\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x07\x0f\xc2\x80\xc1\x1c\x0d\x24\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\xc1\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xc0\x0c\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xc1\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xc1\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xc1\xc1\xc0"
  "\x28\x0d\x28\x0d\x1c\x28\xb2\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0c\x0c\x0c\x0c\x0d"
  "\x1c\xc1\x0c\x28\xb1\x28\x0d\x28\x0d\x28\x0d\x28\xb2\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xb4\x80\xc1"
  "\x02\x1d\x28\xb1\x28\xb2\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x02\x88"
  "\x0c\x08\xc2\x0c\x0d\x1c\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x28\xb1"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1f\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\x81\x0c\x1b\x1b\x1d\x1b\x24\x28\x0d\x1c\x28\x0d\x28\xb1"
  "\x28\xb1\x28\xb2\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba"
  "\x1d\xb0\x02\x88\x0c\x0c\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x02\x88\x06\x0f\x08\x80"
  "\x1b\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x08\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x08\x22\x29\x21\x9d\x2b\xb8\x17\x1c\x88\x1b"
  "\xb0\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb1\x2a\xb2\x2a\x1b\x2a\x1b\x2a"
  "\xb4\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\xc0\xc0\x17"
  "\x0d\x0d\x0d\x1b\x1b\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x17\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x0d\x1c\x0d\x0d\x1c\x1b\x0d"
  "\x1c\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x0c\x0c\x08\x89\x1e"
  "\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e"
  "\x1b\x2a\x17\x0d\x0d\x1c\x1b\x99\x1b\x2a\x1b\x2a\x99\x1b\x0d\x0d"
  "\x1c\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x0c\x0d\x0d\x1b\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x17\x02\x02\x02\x86\x85\x84\x83\x82\x81\x80"
  "\x17\x02\x0d\x0d\x1b\x1b\xb6\x9b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x9b\xc3\x0d\x0d\x1b\x99\xb5\x2a\xb3\x2a\x99\x28\x0d\x28\x0d\x26"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x24\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68"
  "\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e"
  "\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f"
  "\x75\x6e\x78\x70\x72\x6d\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x0b\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x65\x73\x03\x10\x6d\x65\x72"
  "\x67\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x73\x03\x0d\x2d\x3e"
  "\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x03\x1f\x08\x81\x85\x02"
  "\x1e\x06\x81\x83\x02\x1d\x04\x83\x04\x07\x10\x02\x10\x73\x65\x74"
  "\x2d\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x65\x73\x21\x03\x03\x03\x22"
  "\x08\x81\x87\x02\x21\x06\x81\x85\x02\x20\x04\x84\x06\x07\x10\x02"
  "\x26\x43\x61\x6e\x27\x74\x20\x66\x69\x6e\x64\x20\x75\x6e\x69\x71"
  "\x75\x65\x20\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x20\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x3a\xe8\x07\x18\x74\x65\x6d\x70\x6f\x72\x61"
  "\x72\x79\x2d\x66\x69\x6c\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x04\x73\x63\x68\x08\x0c\x63\x75\x72\x72\x65\x6e\x74\x2d\x70\x69"
  "\x64\x01\x31\x02\x5f\x13\x69\x64\x65\x6e\x74\x69\x74\x79\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x02\x02\x1d\x74\x65\x6d\x70\x6f"
  "\x72\x61\x72\x79\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x09\x03\x16\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x2d\x61\x73\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x0a"
  "\x05\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x0b"
  "\x04\x0b\x05\x10\x73\x74\x72\x69\x6e\x67\x2d\x70\x61\x64\x2d\x6c"
  "\x65\x66\x74\x03\x0f\x6e\x75\x6d\x62\x65\x72\x2d\x3e\x73\x74\x72"
  "\x69\x6e\x67\x0c\x05\x1d\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6f\x66\x2d\x61\x72\x69"
  "\x74\x79\x03\x18\x61\x6c\x6c\x6f\x63\x61\x74\x65\x2d\x74\x65\x6d"
  "\x70\x6f\x72\x61\x72\x79\x2d\x66\x69\x6c\x65\x04\x03\x03\x0b\x66"
  "\x69\x6c\x65\x2d\x6d\x6f\x64\x65\x73\x0d\x04\x06\x65\x72\x72\x6f"
  "\x72\x0e\x03\x0e\x38\x2e\x81\x91\x02\x37\x2c\x81\x8f\x02\x36\x2a"
  "\x81\x8d\x02\x35\x28\x81\x8d\x02\x34\x26\x81\x8b\x02\x33\x24\x81"
  "\x8b\x02\x32\x22\x81\x8b\x02\x31\x20\x81\x8b\x02\x30\x1e\x81\x8b"
  "\x02\x2f\x1c\x81\x91\x02\x2e\x1a\x81\x8f\x02\x2d\x18\x81\x8b\x02"
  "\x2c\x16\x81\x89\x02\x2b\x14\x81\x89\x02\x2a\x12\x81\x87\x02\x29"
  "\x10\x81\x87\x02\x28\x0e\x81\x87\x02\x27\x0c\x81\x91\x02\x26\x0a"
  "\x81\x8f\x02\x25\x08\x81\x89\x02\x24\x06\x81\x85\x02\x23\x04\x84"
  "\x02\x2d\x59\x0f\x02\x20\x43\x61\x6e\x27\x74\x20\x66\x69\x6e\x64"
  "\x20\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x20\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x2e\x05\x2f\x74\x6d\x70\x09\x2f\x75\x73\x72\x2f"
  "\x74\x6d\x70\x09\x2f\x76\x61\x72\x2f\x74\x6d\x70\x04\x54\x4d\x50"
  "\x05\x54\x45\x4d\x50\x07\x54\x4d\x50\x44\x49\x52\x03\x19\x67\x65"
  "\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x10\x03\x03\x10\x66\x69\x6c\x65\x2d\x64"
  "\x69\x72\x65\x63\x74\x6f\x72\x79\x3f\x03\x0a\x03\x10\x66\x69\x6c"
  "\x65\x2d\x77\x72\x69\x74\x65\x61\x62\x6c\x65\x3f\x03\x0e\x07\x46"
  "\x1e\x81\x83\x02\x45\x1c\x81\x83\x02\x44\x1a\x81\x83\x02\x43\x18"
  "\x81\x83\x02\x42\x16\x81\x85\x02\x41\x14\x81\x83\x02\x40\x12\x81"
  "\x83\x02\x3f\x10\x81\x83\x02\x3e\x0e\x81\x83\x02\x3d\x0c\x81\x83"
  "\x02\x3c\x0a\x81\x83\x02\x3b\x08\x81\x83\x02\x3a\x06\x81\x81\x02"
  "\x39\x04\x82\x02\x1d\x34\x11\x02\x10\x66\x69\x6c\x65\x2d\x61\x74"
  "\x74\x72\x69\x62\x75\x74\x65\x73\x03\x03\x03\x49\x08\x81\x85\x02"
  "\x48\x06\x81\x83\x02\x47\x04\x83\x04\x07\x10\x12\x02\x19\x66\x69"
  "\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2d\x69\x6e"
  "\x64\x69\x72\x65\x63\x74\x03\x03\x03\x4c\x08\x81\x85\x02\x4b\x06"
  "\x81\x83\x02\x4a\x04\x83\x04\x07\x10\x13\x02\x08\x0b\x76\x65\x63"
  "\x74\x6f\x72\x2d\x72\x65\x66\x14\x4d\x04\x83\x04\x03\x15\x02\x09"
  "\x14\x4e\x04\x83\x04\x03\x16\x02\x0a\x14\x4f\x04\x83\x04\x03\x17"
  "\x02\x0b\x14\x50\x04\x83\x04\x03\x18\x02\x0c\x14\x51\x04\x83\x04"
  "\x03\x19\x02\x0d\x14\x52\x04\x83\x04\x03\x1a\x02\x0e\x14\x53\x04"
  "\x83\x04\x03\x1b\x02\x0f\x14\x08\x54\x04\x83\x04\x03\x1c\x02\x10"
  "\x14\x09\x55\x04\x83\x04\x03\x1d\x02\x11\x14\x0a\x56\x04\x83\x04"
  "\x03\x1e\x02\x12\x14\x08\x0c\x66\x69\x6c\x65\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x1f\x03\x17\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62"
  "\x75\x74\x65\x73\x2d\x64\x69\x72\x65\x63\x74\x20\x04\x19\x65\x72"
  "\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72"
  "\x67\x75\x6d\x65\x6e\x74\x03\x59\x08\x81\x83\x02\x58\x06\x81\x85"
  "\x02\x57\x04\x83\x04\x07\x12\x21\x02\x13\x0e\x66\x69\x6c\x65\x2d"
  "\x6d\x6f\x64\x2d\x74\x69\x6d\x65\x03\x03\x03\x5c\x08\x81\x85\x02"
  "\x5b\x06\x81\x83\x02\x5a\x04\x83\x04\x07\x10\x22\x02\x14\x17\x66"
  "\x69\x6c\x65\x2d\x6d\x6f\x64\x2d\x74\x69\x6d\x65\x2d\x69\x6e\x64"
  "\x69\x72\x65\x63\x74\x03\x03\x03\x5f\x08\x81\x85\x02\x5e\x06\x81"
  "\x83\x02\x5d\x04\x83\x04\x07\x10\x23\x02\x15\x11\x66\x69\x6c\x65"
  "\x2d\x61\x63\x63\x65\x73\x73\x2d\x74\x69\x6d\x65\x03\x03\x03\x62"
  "\x08\x81\x85\x02\x61\x06\x81\x83\x02\x60\x04\x83\x04\x07\x10\x24"
  "\x02\x16\x1a\x66\x69\x6c\x65\x2d\x61\x63\x63\x65\x73\x73\x2d\x74"
  "\x69\x6d\x65\x2d\x69\x6e\x64\x69\x72\x65\x63\x74\x03\x03\x03\x65"
  "\x08\x81\x85\x02\x64\x06\x81\x83\x02\x63\x04\x83\x04\x07\x10\x25"
  "\x02\x17\x10\x73\x65\x74\x2d\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65"
  "\x73\x21\x03\x03\x18\x66\x69\x6c\x65\x2d\x61\x63\x63\x65\x73\x73"
  "\x2d\x74\x69\x6d\x65\x2d\x64\x69\x72\x65\x63\x74\x26\x03\x1e\x66"
  "\x69\x6c\x65\x2d\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x74\x69\x6d\x65\x2d\x64\x69\x72\x65\x63\x74\x27\x03\x05\x6a"
  "\x0c\x81\x89\x02\x69\x0a\x81\x87\x02\x68\x08\x81\x89\x02\x67\x06"
  "\x81\x89\x02\x66\x04\x85\x08\x0b\x18\x28\x02\x18\x19\x67\x65\x74"
  "\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x05\x6e\x6f\x6e\x65\x10\x16\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x73\x29\x02\x04\x11\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x73"
  "\x74\x72\x69\x6e\x67\x2a\x05\x0f\x68\x61\x73\x68\x2d\x74\x61\x62"
  "\x6c\x65\x2f\x67\x65\x74\x2b\x05\x10\x68\x61\x73\x68\x2d\x74\x61"
  "\x62\x6c\x65\x2f\x70\x75\x74\x21\x2c\x04\x71\x10\x81\x85\x02\x70"
  "\x0e\x81\x8b\x02\x6f\x0c\x81\x85\x02\x6e\x0a\x81\x83\x02\x6d\x08"
  "\x81\x89\x02\x6c\x06\x81\x83\x02\x6b\x04\x83\x04\x0f\x1e\x2d\x02"
  "\x19\x1a\x73\x65\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x21\x2e\x29\x02\x04\x2a"
  "\x05\x2c\x03\x75\x0a\x81\x85\x02\x74\x08\x81\x85\x02\x73\x06\x81"
  "\x85\x02\x72\x04\x84\x06\x09\x14\x2f\x02\x1a\x1d\x64\x65\x6c\x65"
  "\x74\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x21\x30\x29\x02\x04\x2a\x04\x13\x68"
  "\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f\x72\x65\x6d\x6f\x76\x65"
  "\x21\x03\x78\x08\x81\x83\x02\x77\x06\x81\x83\x02\x76\x04\x83\x04"
  "\x07\x12\x2a\x02\x1b\x29\x02\x03\x12\x68\x61\x73\x68\x2d\x74\x61"
  "\x62\x6c\x65\x2f\x63\x6c\x65\x61\x72\x21\x31\x02\x7a\x06\x81\x81"
  "\x02\x79\x04\x82\x02\x05\x0d\x32\x02\x1c\x29\x02\x1d\x72\x65\x73"
  "\x65\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x73\x21\x33\x14\x65\x76\x65\x6e\x74"
  "\x3a\x61\x66\x74\x65\x72\x2d\x72\x65\x73\x74\x61\x72\x74\x03\x02"
  "\x17\x6d\x61\x6b\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x68\x61\x73"
  "\x68\x2d\x74\x61\x62\x6c\x65\x34\x04\x14\x61\x64\x64\x2d\x65\x76"
  "\x65\x6e\x74\x2d\x72\x65\x63\x65\x69\x76\x65\x72\x21\x03\x7f\x0c"
  "\x81\x83\x02\x7e\x0a\x81\x81\x02\x7d\x08\x81\x81\x02\x7c\x06\x81"
  "\x81\x02\x7b\x04\x82\x02\x0b\x18\x35\x02\x1d\x0b\x6d\x69\x6d\x65"
  "\x2d\x74\x79\x70\x65\x73\x36\x02\x02\x12\x69\x6d\x70\x6f\x72\x74"
  "\x2d\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65\x73\x37\x05\x2b\x03\x82"
  "\x01\x08\x81\x85\x02\x81\x01\x06\x81\x83\x02\x80\x01\x04\x83\x04"
  "\x07\x11\x2b\x02\x1e\x02\x36\x11\x6d\x69\x6d\x65\x2e\x74\x79\x70"
  "\x65\x73\x2d\x66\x69\x6c\x65\x73\x38\x03\x15\x6d\x69\x6d\x65\x2e"
  "\x74\x79\x70\x65\x73\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x73\x39"
  "\x02\x02\x34\x03\x07\x6c\x65\x6e\x67\x74\x68\x34\x04\x0c\x6d\x61"
  "\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x04\x89\x01\x10\x81\x85\x02"
  "\x88\x01\x0e\x81\x81\x02\x87\x01\x0c\x81\x81\x02\x86\x01\x0a\x81"
  "\x87\x02\x85\x01\x08\x81\x81\x02\x84\x01\x06\x81\x81\x02\x83\x01"
  "\x04\x82\x02\x0f\x20\x3a\x02\x1f\x04\x63\x64\x72\x3b\x02\x04\x63"
  "\x61\x72\x3c\x39\x36\x38\x04\x04\x17\x69\x6d\x70\x6f\x72\x74\x2d"
  "\x6d\x69\x6d\x65\x2e\x74\x79\x70\x65\x73\x2d\x66\x69\x6c\x65\x3d"
  "\x03\x1b\x77\x69\x74\x68\x2d\x74\x68\x72\x65\x61\x64\x2d\x65\x76"
  "\x65\x6e\x74\x73\x2d\x62\x6c\x6f\x63\x6b\x65\x64\x3e\x03\x31\x04"
  "\x0b\x62\x6f\x6f\x6c\x65\x61\x6e\x2f\x6f\x72\x04\x18\x66\x6f\x72"
  "\x2d\x65\x61\x63\x68\x2d\x76\x65\x63\x74\x6f\x72\x2d\x65\x6c\x65"
  "\x6d\x65\x6e\x74\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x05\x2c"
  "\x08\x9b\x01\x26\x81\x85\x02\x9a\x01\x24\x81\x85\x02\x99\x01\x22"
  "\x81\x85\x02\x98\x01\x20\x81\x83\x02\x97\x01\x1e\x83\x04\x96\x01"
  "\x1c\x81\x85\x02\x95\x01\x1a\x83\x04\x94\x01\x18\x81\x83\x02\x93"
  "\x01\x16\x81\x81\x02\x92\x01\x14\x81\x8b\x02\x91\x01\x12\x81\x87"
  "\x02\x90\x01\x10\x81\x87\x02\x8f\x01\x0e\x81\x83\x02\x8e\x01\x0c"
  "\x82\x02\x8d\x01\x0a\x81\x8f\x02\x8c\x01\x08\x81\x87\x02\x8b\x01"
  "\x06\x81\x85\x02\x8a\x01\x04\x82\x02\x25\x3f\x31\x02\x20\x02\x0c"
  "\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x3c\x14\x38\x02\x03"
  "\x17\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x74\x69\x6d\x65\x2c\x03\x3e\x04\x05\x65\x71\x76\x3f"
  "\x03\x15\x72\x65\x61\x64\x2d\x6d\x69\x6d\x65\x2e\x74\x79\x70\x65"
  "\x73\x2d\x66\x69\x6c\x65\x3e\x05\xab\x01\x22\x81\x85\x02\xaa\x01"
  "\x20\x81\x87\x02\xa9\x01\x1e\x81\x85\x02\xa8\x01\x1c\x81\x8b\x02"
  "\xa7\x01\x1a\x81\x85\x02\xa6\x01\x18\x81\x85\x02\xa5\x01\x16\x81"
  "\x85\x02\xa4\x01\x14\x81\x89\x02\xa3\x01\x12\x81\x83\x02\xa2\x01"
  "\x10\x81\x83\x02\xa1\x01\x0e\x81\x83\x02\xa0\x01\x0c\x81\x83\x02"
  "\x9f\x01\x0a\x81\x89\x02\x9e\x01\x08\x81\x89\x02\x9d\x01\x06\x81"
  "\x87\x02\x9c\x01\x04\x84\x06\x21\x35\x14\x02\x21\x04\x15\x63\x61"
  "\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x69\x6e\x70\x75\x74\x2d\x66\x69"
  "\x6c\x65\x03\x0a\x72\x65\x61\x64\x2d\x6c\x69\x6e\x65\x03\x0c\x65"
  "\x6f\x66\x2d\x6f\x62\x6a\x65\x63\x74\x3f\x03\x16\x70\x61\x72\x73"
  "\x65\x2d\x6d\x69\x6d\x65\x2e\x74\x79\x70\x65\x73\x2d\x6c\x69\x6e"
  "\x65\x3f\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x06\xb1\x01\x0e"
  "\x81\x87\x02\xb0\x01\x0c\x81\x87\x02\xaf\x01\x0a\x81\x85\x02\xae"
  "\x01\x08\x81\x85\x02\xad\x01\x06\x83\x04\xac\x01\x04\x83\x04\x0d"
  "\x1c\x40\x02\x22\x3c\x01\x24\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72"
  "\x65\x66\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x41\x14\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x77\x68\x69\x74\x65"
  "\x73\x70\x61\x63\x65\x02\x05\x0d\x62\x75\x72\x73\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x03\x12\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65\x2d"
  "\x73\x74\x72\x69\x6e\x67\x3f\x03\xb8\x01\x10\x81\x83\x02\xb7\x01"
  "\x0e\x81\x85\x02\xb6\x01\x0c\x81\x83\x02\xb5\x01\x0a\x81\x87\x02"
  "\xb4\x01\x08\x81\x83\x02\xb3\x01\x06\x81\x83\x02\xb2\x01\x04\x83"
  "\x04\x0f\x1f\x42\x02\x23\x22\x43\x61\x6e\x27\x74\x20\x66\x69\x6e"
  "\x64\x20\x75\x73\x65\x72\x27\x73\x20\x68\x6f\x6d\x65\x20\x64\x69"
  "\x72\x65\x63\x74\x6f\x72\x79\x3a\x18\x67\x65\x74\x2d\x75\x73\x65"
  "\x72\x2d\x68\x6f\x6d\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79"
  "\x04\x0e\x03\x0a\x03\xbb\x01\x08\x81\x83\x02\xba\x01\x06\x81\x85"
  "\x02\xb9\x01\x04\x83\x04\x07\x11\x43\x02\x24\x05\x48\x4f\x4d\x45"
  "\x03\x10\x02\x12\x63\x75\x72\x72\x65\x6e\x74\x2d\x75\x73\x65\x72"
  "\x2d\x6e\x61\x6d\x65\x44\x03\x0a\x03\x14\x75\x73\x65\x72\x2d\x68"
  "\x6f\x6d\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x45\x05\xbe"
  "\x01\x08\x81\x83\x02\xbd\x01\x06\x81\x81\x02\xbc\x01\x04\x82\x02"
  "\x07\x14\x46\x02\x25\x12\x63\x75\x72\x72\x65\x6e\x74\x2d\x75\x73"
  "\x65\x72\x2d\x6e\x61\x6d\x65\x05\x55\x53\x45\x52\x03\x10\x02\xc0"
  "\x01\x06\x81\x81\x02\xbf\x01\x04\x82\x02\x05\x0d\x47\x02\x26\x03"
  "\x1a\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x2d\x3e\x75\x6e\x69\x76"
  "\x65\x72\x73\x61\x6c\x2d\x74\x69\x6d\x65\x48\x03\x23\x75\x6e\x69"
  "\x76\x65\x72\x73\x61\x6c\x2d\x74\x69\x6d\x65\x2d\x3e\x6c\x6f\x63"
  "\x61\x6c\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x03"
  "\xc2\x01\x06\x81\x83\x02\xc1\x01\x04\x83\x04\x05\x0d\x49\x02\x27"
  "\x03\x48\x03\x24\x75\x6e\x69\x76\x65\x72\x73\x61\x6c\x2d\x74\x69"
  "\x6d\x65\x2d\x3e\x67\x6c\x6f\x62\x61\x6c\x2d\x64\x65\x63\x6f\x64"
  "\x65\x64\x2d\x74\x69\x6d\x65\x03\xc4\x01\x06\x81\x83\x02\xc3\x01"
  "\x04\x83\x04\x05\x0d\x4a\x02\x28\x03\x1d\x64\x65\x63\x6f\x64\x65"
  "\x64\x2d\x74\x69\x6d\x65\x2d\x3e\x75\x6e\x69\x76\x65\x72\x73\x61"
  "\x6c\x2d\x74\x69\x6d\x65\x03\x1a\x75\x6e\x69\x76\x65\x72\x73\x61"
  "\x6c\x2d\x74\x69\x6d\x65\x2d\x3e\x66\x69\x6c\x65\x2d\x74\x69\x6d"
  "\x65\x4b\x03\xc6\x01\x06\x81\x83\x02\xc5\x01\x04\x83\x04\x05\x0d"
  "\x4c\x02\x29\x06\x65\x70\x6f\x63\x68\x4d\x02\xc8\x01\x06\x81\x85"
  "\x02\xc7\x01\x04\x83\x04\x05\x0a\x4e\x02\x2a\x4d\x02\xca\x01\x06"
  "\x81\x85\x02\xc9\x01\x04\x83\x04\x05\x0a\x4d\x02\x2b\x0b\x0c\x75"
  "\x69\x64\x2d\x3e\x73\x74\x72\x69\x6e\x67\x04\x0c\x02\xcc\x01\x06"
  "\x81\x83\x02\xcb\x01\x04\x83\x04\x05\x0d\x4f\x02\x2c\x0b\x0c\x67"
  "\x69\x64\x2d\x3e\x73\x74\x72\x69\x6e\x67\x04\x0c\x02\xce\x01\x06"
  "\x81\x83\x02\xcd\x01\x04\x83\x04\x05\x0d\x0c\x02\x2d\x02\x20\x73"
  "\x65\x74\x2d\x77\x6f\x72\x6b\x69\x6e\x67\x2d\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x21\x07\x73"
  "\x79\x73\x74\x65\x6d\x1b\x77\x6f\x72\x6b\x69\x6e\x67\x2d\x64\x69"
  "\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x02\x1b\x77\x6f\x72\x6b\x69\x6e\x67\x2d\x64\x69\x72\x65\x63\x74"
  "\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x05\x0d\x64\x79"
  "\x6e\x61\x6d\x69\x63\x2d\x77\x69\x6e\x64\x50\x03\x03\x1b\x73\x65"
  "\x74\x2d\x74\x68\x72\x65\x61\x64\x2d\x74\x69\x6d\x65\x72\x2d\x69"
  "\x6e\x74\x65\x72\x76\x61\x6c\x21\x02\x16\x74\x68\x72\x65\x61\x64"
  "\x2d\x74\x69\x6d\x65\x72\x2d\x69\x6e\x74\x65\x72\x76\x61\x6c\x06"
  "\xd9\x01\x18\x81\x83\x02\xd8\x01\x16\x81\x83\x02\xd7\x01\x14\x81"
  "\x83\x02\xd6\x01\x12\x81\x83\x02\xd5\x01\x10\x81\x83\x02\xd4\x01"
  "\x0e\x81\x83\x02\xd3\x01\x0c\x81\x83\x02\xd2\x01\x0a\x81\x83\x02"
  "\xd1\x01\x08\x81\x89\x02\xd0\x01\x06\x81\x87\x02\xcf\x01\x04\x83"
  "\x04\x17\x29\x51\x02\x2e\x05\x63\x72\x6c\x66\x05\x68\x70\x66\x73"
  "\x08\x69\x73\x6f\x39\x36\x36\x30\x05\x6e\x74\x66\x73\x04\x73\x6d"
  "\x62\x03\x6c\x66\x52\x11\x66\x69\x6c\x65\x2d\x73\x79\x73\x74\x65"
  "\x6d\x2d\x74\x79\x70\x65\x04\x66\x61\x74\x03\x04\x0c\x73\x74\x72"
  "\x69\x6e\x67\x2d\x63\x69\x3d\x3f\x03\x0d\x66\x69\x6c\x65\x2d\x65"
  "\x78\x69\x73\x74\x73\x3f\x03\x13\x64\x69\x72\x65\x63\x74\x6f\x72"
  "\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x03\x03\x1b\x64\x69\x72"
  "\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d"
  "\x61\x73\x2d\x66\x69\x6c\x65\x07\xe6\x01\x1c\x81\x8b\x02\xe5\x01"
  "\x1a\x81\x89\x02\xe4\x01\x18\x81\x89\x02\xe3\x01\x16\x81\x89\x02"
  "\xe2\x01\x14\x81\x83\x02\xe1\x01\x12\x81\x83\x02\xe0\x01\x10\x81"
  "\x83\x02\xdf\x01\x0e\x81\x83\x02\xde\x01\x0c\x81\x83\x02\xdd\x01"
  "\x0a\x81\x87\x02\xdc\x01\x08\x81\x85\x02\xdb\x01\x06\x81\x83\x02"
  "\xda\x01\x04\x83\x04\x1b\x33\x53\x02\x2f\x52\xe7\x01\x04\x82\x02"
  "\x03\x52\x02\x30\x10\x73\x74\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f"
  "\x63\x61\x74\x65\x81\x40\x02\x03\x03\x05\x50\x03\x2c\x03\x18\x66"
  "\x69\x6c\x65\x2d\x6f\x70\x65\x6e\x2d\x69\x6e\x70\x75\x74\x2d\x63"
  "\x68\x61\x6e\x6e\x65\x6c\x03\x0e\x63\x68\x61\x6e\x6e\x65\x6c\x2d"
  "\x63\x6c\x6f\x73\x65\x03\x14\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x66"
  "\x69\x6c\x65\x2d\x6c\x65\x6e\x67\x74\x68\x03\x0d\x05\x10\x73\x65"
  "\x74\x2d\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x73\x21\x50\x03\x19"
  "\x66\x69\x6c\x65\x2d\x6f\x70\x65\x6e\x2d\x6f\x75\x74\x70\x75\x74"
  "\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x06\x13\x63\x68\x61\x6e\x6e\x65"
  "\x6c\x2d\x72\x65\x61\x64\x2d\x62\x6c\x6f\x63\x6b\x06\x14\x63\x68"
  "\x61\x6e\x6e\x65\x6c\x2d\x77\x72\x69\x74\x65\x2d\x62\x6c\x6f\x63"
  "\x6b\x0d\x85\x02\x3e\xfd\xff\x03\x84\x02\x3c\xfd\xff\x03\x83\x02"
  "\x3a\xfd\xff\x03\x82\x02\x38\x81\x85\x02\x81\x02\x36\x81\x87\x02"
  "\x80\x02\x34\x81\x85\x02\xff\x01\x32\x81\x87\x02\xfe\x01\x30\x81"
  "\x85\x02\xfd\x01\x2e\x81\x85\x02\xfc\x01\x2c\x81\x85\x02\xfb\x01"
  "\x2a\x81\x89\x02\xfa\x01\x28\x81\x87\x02\xf9\x01\x26\x81\x85\x02"
  "\xf8\x01\x24\x81\x83\x02\xf7\x01\x22\x81\x85\x02\xf6\x01\x20\x81"
  "\x85\x02\xf5\x01\x1e\x81\x83\x02\xf4\x01\x1c\x81\x83\x02\xf3\x01"
  "\x1a\x81\x87\x02\xf2\x01\x18\x81\x85\x02\xf1\x01\x16\x81\x83\x02"
  "\xf0\x01\x14\x81\x83\x02\xef\x01\x12\x81\x83\x02\xee\x01\x10\x81"
  "\x83\x02\xed\x01\x0e\x81\x85\x02\xec\x01\x0c\x81\x87\x02\xeb\x01"
  "\x0a\x81\x85\x02\xea\x01\x08\x81\x87\x02\xe9\x01\x06\x81\x85\x02"
  "\xe8\x01\x04\x84\x06\x3d\x5e\x02\x31\x02\x2f\x06\x61\x70\x70\x6c"
  "\x79\x0c\x2e\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x1e\x69\x6e"
  "\x69\x74\x2d\x66\x69\x6c\x65\x2d\x73\x70\x65\x63\x69\x66\x69\x65"
  "\x72\x2d\x3e\x70\x61\x74\x68\x6e\x61\x6d\x65\x54\x0b\x02\x04\x1e"
  "\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x69\x6e\x69\x74\x2d\x66"
  "\x69\x6c\x65\x2d\x73\x70\x65\x63\x69\x66\x69\x65\x72\x04\x0b\x61"
  "\x70\x70\x65\x6e\x64\x2d\x6d\x61\x70\x02\x16\x75\x73\x65\x72\x2d"
  "\x68\x6f\x6d\x65\x64\x69\x72\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x04\x05\x8c\x02\x10\x81\x85\x02\x8b\x02\x0e\x83\x04\x8a\x02\x0c"
  "\x81\x87\x02\x89\x02\x0a\x81\x85\x02\x88\x02\x08\x81\x83\x02\x87"
  "\x02\x06\x81\x83\x02\x86\x02\x04\x83\x04\x0f\x22\x0b\x02\x32\x09"
  "\x13\x75\x78\x2d\x6d\x61\x6b\x65\x2d\x73\x75\x62\x70\x72\x6f\x63"
  "\x65\x73\x73\x8d\x02\x04\x8a\x12\x03\x55\x02\x33\x14\x43\x61\x6e"
  "\x27\x74\x20\x66\x69\x6e\x64\x20\x70\x72\x6f\x67\x72\x61\x6d\x3a"
  "\x3c\x3b\x08\x0e\x02\x02\x0d\x6f\x73\x2f\x65\x78\x65\x63\x2d\x70"
  "\x61\x74\x68\x3c\x03\x13\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61"
  "\x62\x73\x6f\x6c\x75\x74\x65\x3f\x04\x03\x03\x04\x0e\x04\x0c\x66"
  "\x69\x6c\x65\x2d\x61\x63\x63\x65\x73\x73\x3b\x08\xa6\x02\x34\x81"
  "\x85\x02\xa5\x02\x32\x81\x89\x02\xa4\x02\x30\x81\x83\x02\xa3\x02"
  "\x2e\x81\x83\x02\xa2\x02\x2c\x81\x83\x02\xa1\x02\x2a\x81\x8d\x02"
  "\xa0\x02\x28\x81\x83\x02\x9f\x02\x26\x81\x8b\x02\x9e\x02\x24\x81"
  "\x89\x02\x9d\x02\x22\x81\x8b\x02\x9c\x02\x20\x81\x87\x02\x9b\x02"
  "\x1e\x81\x85\x02\x9a\x02\x1c\x81\x85\x02\x99\x02\x1a\x81\x83\x02"
  "\x98\x02\x18\x81\x8f\x02\x97\x02\x16\x81\x8d\x02\x96\x02\x14\x81"
  "\x87\x02\x95\x02\x12\x81\x83\x02\x94\x02\x10\x81\x87\x02\x93\x02"
  "\x0e\x81\x85\x02\x92\x02\x0c\x81\x89\x02\x91\x02\x0a\x81\x87\x02"
  "\x90\x02\x08\x81\x8b\x02\x8f\x02\x06\x86\x06\x8e\x02\x04\x81\x8b"
  "\x02\x33\x4c\x02\x34\x26\x43\x61\x6e\x27\x74\x20\x66\x69\x6e\x64"
  "\x20\x50\x41\x54\x48\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x2e\x05\x50\x41\x54\x48"
  "\x03\x10\x03\x0e\x03\x15\x6f\x73\x2f\x70\x61\x72\x73\x65\x2d\x70"
  "\x61\x74\x68\x2d\x73\x74\x72\x69\x6e\x67\x0e\x04\xa9\x02\x08\x81"
  "\x81\x02\xa8\x02\x06\x81\x83\x02\xa7\x02\x04\x82\x02\x07\x13\x02"
  "\x35\x01\x3b\x41\x06\x19\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d"
  "\x66\x69\x6e\x64\x2d\x6e\x65\x78\x74\x2d\x63\x68\x61\x72\x05\x0a"
  "\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x03\x0a\x04\xb5\x02\x1a\x81"
  "\x87\x02\xb4\x02\x18\x81\x87\x02\xb3\x02\x16\xfd\xff\x03\xb2\x02"
  "\x14\xfd\xff\x03\xb1\x02\x12\xfd\xff\x03\xb0\x02\x10\xfd\xff\x03"
  "\xaf\x02\x0e\xfd\xff\x03\xae\x02\x0c\xfd\xff\x03\xad\x02\x0a\xfd"
  "\xff\x03\xac\x02\x08\xff\xff\x03\xab\x02\x06\x81\x83\x02\xaa\x02"
  "\x04\x83\x04\x19\x28\x41\x02\x36\x08\x2f\x62\x69\x6e\x2f\x73\x68"
  "\x06\x53\x48\x45\x4c\x4c\x03\x10\x02\xb7\x02\x06\x81\x81\x02\xb6"
  "\x02\x04\x82\x02\x05\x0d\x0a\x02\x37\x03\x2d\x63\xb8\x02\x04\x83"
  "\x04\x03\x56\x02\x38\xb9\x02\x04\x82\x02\x03\x38\x57\x57\x04\x56"
  "\x04\x0a\x04\x41\x04\x04\x06\x55\x04\x0b\x04\x04\x52\x04\x53\x04"
  "\x51\x04\x0c\x04\x4f\x04\x0c\x63\x75\x72\x72\x65\x6e\x74\x2d\x67"
  "\x69\x64\x0c\x63\x75\x72\x72\x65\x6e\x74\x2d\x75\x69\x64\x12\x1d"
  "\x6f\x73\x2f\x65\x78\x65\x63\x75\x74\x61\x62\x6c\x65\x2d\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x2d\x74\x79\x70\x65\x73\x16\x6f\x73\x2f"
  "\x66\x6f\x72\x6d\x2d\x73\x68\x65\x6c\x6c\x2d\x63\x6f\x6d\x6d\x61"
  "\x6e\x64\x13\x6f\x73\x2f\x73\x68\x65\x6c\x6c\x2d\x66\x69\x6c\x65"
  "\x2d\x6e\x61\x6d\x65\x0e\x3c\x10\x6f\x73\x2f\x66\x69\x6e\x64\x2d"
  "\x70\x72\x6f\x67\x72\x61\x6d\x13\x6f\x73\x2f\x6d\x61\x6b\x65\x2d"
  "\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x54\x0a\x63\x6f\x70\x79"
  "\x2d\x66\x69\x6c\x65\x14\x64\x65\x66\x61\x75\x6c\x74\x2d\x6c\x69"
  "\x6e\x65\x2d\x65\x6e\x64\x69\x6e\x67\x11\x66\x69\x6c\x65\x2d\x6c"
  "\x69\x6e\x65\x2d\x65\x6e\x64\x69\x6e\x67\x0c\x75\x6e\x69\x78\x2f"
  "\x73\x79\x73\x74\x65\x6d\x11\x75\x6e\x69\x78\x2f\x67\x69\x64\x2d"
  "\x3e\x73\x74\x72\x69\x6e\x67\x11\x75\x6e\x69\x78\x2f\x75\x69\x64"
  "\x2d\x3e\x73\x74\x72\x69\x6e\x67\x11\x75\x6e\x69\x78\x2f\x63\x75"
  "\x72\x72\x65\x6e\x74\x2d\x70\x69\x64\x11\x75\x6e\x69\x78\x2f\x63"
  "\x75\x72\x72\x65\x6e\x74\x2d\x67\x69\x64\x11\x75\x6e\x69\x78\x2f"
  "\x63\x75\x72\x72\x65\x6e\x74\x2d\x75\x69\x64\x12\x17\x75\x6e\x69"
  "\x78\x2f\x63\x75\x72\x72\x65\x6e\x74\x2d\x75\x73\x65\x72\x2d\x6e"
  "\x61\x6d\x65\x1c\x75\x6e\x69\x78\x2f\x63\x75\x72\x72\x65\x6e\x74"
  "\x2d\x68\x6f\x6d\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x19"
  "\x75\x6e\x69\x78\x2f\x75\x73\x65\x72\x2d\x68\x6f\x6d\x65\x2d\x64"
  "\x69\x72\x65\x63\x74\x6f\x72\x79\x11\x65\x6e\x63\x6f\x64\x65\x2d"
  "\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x11\x64\x65\x63\x6f\x64\x65"
  "\x2d\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x4b\x48\x18\x64\x65\x63"
  "\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2d\x3e\x66\x69\x6c\x65\x2d"
  "\x74\x69\x6d\x65\x57\x1f\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x2d"
  "\x3e\x67\x6c\x6f\x62\x61\x6c\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d"
  "\x74\x69\x6d\x65\x1e\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x2d\x3e"
  "\x6c\x6f\x63\x61\x6c\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69"
  "\x6d\x65\x56\x44\x17\x63\x75\x72\x72\x65\x6e\x74\x2d\x68\x6f\x6d"
  "\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x55\x45\x3f\x3e\x3d"
  "\x37\x39\x38\x36\x17\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d"
  "\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65\x73\x21\x14\x6f\x73\x2f\x73"
  "\x75\x66\x66\x69\x78\x2d\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65\x1e"
  "\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x73\x79\x73\x74\x65"
  "\x6d\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x73\x21\x33\x30\x2e"
  "\x10\x29\x50\x19\x4d\x04\x4e\x04\x4c\x04\x4a\x04\x49\x04\x47\x04"
  "\x46\x04\x43\x04\x42\x04\x40\x04\x14\x04\x31\x04\x10\x2f\x65\x74"
  "\x63\x2f\x6d\x69\x6d\x65\x2e\x74\x79\x70\x65\x73\x0e\x7e\x2f\x2e"
  "\x6d\x69\x6d\x65\x2e\x74\x79\x70\x65\x73\x3a\x04\x2b\x04\x35\x04"
  "\x32\x04\x2a\x04\x2f\x04\x2d\x04\x28\x04\x19\x11\x66\x69\x6c\x65"
  "\x2d\x61\x63\x63\x65\x73\x73\x2d\x74\x69\x6d\x65\x1a\x66\x69\x6c"
  "\x65\x2d\x61\x63\x63\x65\x73\x73\x2d\x74\x69\x6d\x65\x2d\x69\x6e"
  "\x64\x69\x72\x65\x63\x74\x54\x26\x25\x04\x24\x04\x2c\x14\x72\x74"
  "\x64\x3a\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65"
  "\x73\x20\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x74\x69\x6d\x65\x2d\x69\x6e\x64\x69\x72\x65\x63"
  "\x74\x53\x27\x1f\x1d\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62"
  "\x75\x74\x65\x73\x2f\x69\x6e\x6f\x64\x65\x2d\x6e\x75\x6d\x62\x65"
  "\x72\x1c\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65"
  "\x73\x2f\x6d\x6f\x64\x65\x2d\x73\x74\x72\x69\x6e\x67\x17\x66\x69"
  "\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2f\x6c\x65"
  "\x6e\x67\x74\x68\x1c\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62"
  "\x75\x74\x65\x73\x2f\x63\x68\x61\x6e\x67\x65\x2d\x74\x69\x6d\x65"
  "\x22\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73"
  "\x2f\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74\x69"
  "\x6d\x65\x1c\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74"
  "\x65\x73\x2f\x61\x63\x63\x65\x73\x73\x2d\x74\x69\x6d\x65\x14\x66"
  "\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2f\x67"
  "\x69\x64\x14\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74"
  "\x65\x73\x2f\x75\x69\x64\x18\x66\x69\x6c\x65\x2d\x61\x74\x74\x72"
  "\x69\x62\x75\x74\x65\x73\x2f\x6e\x2d\x6c\x69\x6e\x6b\x73\x15\x66"
  "\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2f\x74"
  "\x79\x70\x65\x0e\x23\x04\x22\x04\x21\x04\x1e\x04\x1d\x04\x1c\x04"
  "\x1b\x04\x1a\x04\x19\x04\x18\x04\x17\x04\x16\x04\x15\x04\x0e\x07"
  "\x76\x65\x63\x74\x6f\x72\x10\x66\x69\x6c\x65\x2d\x61\x74\x74\x72"
  "\x69\x62\x75\x74\x65\x73\x0d\x69\x6e\x6f\x64\x65\x2d\x6e\x75\x6d"
  "\x62\x65\x72\x0c\x6d\x6f\x64\x65\x2d\x73\x74\x72\x69\x6e\x67\x34"
  "\x0c\x63\x68\x61\x6e\x67\x65\x2d\x74\x69\x6d\x65\x12\x6d\x6f\x64"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74\x69\x6d\x65\x0c\x61"
  "\x63\x63\x65\x73\x73\x2d\x74\x69\x6d\x65\x04\x67\x69\x64\x04\x75"
  "\x69\x64\x08\x6e\x2d\x6c\x69\x6e\x6b\x73\x05\x74\x79\x70\x65\x0b"
  "\x0a\x09\x08\x0b\x0b\x10\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69"
  "\x62\x75\x74\x65\x73\x19\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69"
  "\x62\x75\x74\x65\x73\x2d\x69\x6e\x64\x69\x72\x65\x63\x74\x20\x09"
  "\x13\x04\x12\x04\x11\x04\x0f\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x11\x75\x6e\x69\x78\x2f\x66"
  "\x69\x6c\x65\x2d\x61\x63\x63\x65\x73\x73\x10\x73\x65\x74\x2d\x66"
  "\x69\x6c\x65\x2d\x6d\x6f\x64\x65\x73\x21\x0d\x04\x04\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x0a\x1b"
  "\x6d\x61\x6b\x65\x2d\x64\x65\x66\x69\x6e\x65\x2d\x73\x74\x72\x75"
  "\x63\x74\x75\x72\x65\x2d\x74\x79\x70\x65\x03\x3b\x20\x53\x54\x56"
  "\x57\x45\x55\x44\x0a\x1c\x3a\x80\x80\x04\x1b\x38\x81\x81\x02\x1a"
  "\x36\x81\x81\x02\x19\x34\x81\x83\x02\x18\x32\x81\x85\x02\x17\x30"
  "\x81\x83\x02\x16\x2e\x81\x85\x02\x15\x2c\x81\x83\x02\x14\x2a\x81"
  "\x85\x02\x13\x28\x81\x83\x02\x12\x26\x81\x85\x02\x11\x24\x81\x83"
  "\x02\x10\x22\x81\x85\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x83\x02"
  "\x0d\x1c\x81\x85\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x83\x02\x0a"
  "\x16\x81\x85\x02\x09\x14\x81\x83\x02\x08\x12\x81\x85\x02\x07\x10"
  "\x81\x83\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81"
  "\x83\x02\x03\x08\x81\x83\x02\x02\x06\x81\x85\x02\x01\x04\x81\x83"
  "\x02\x39\x69";

SCHEME_OBJECT *
unxprm_so_data_2d4e5d268f7b5926 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_unxprm_so_data_2d4e5d268f7b5926 [0]))), (sizeof (prog_unxprm_so_data_2d4e5d268f7b5926)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_33]));
}

DECLARE_COMPILED_DATA_NS ("unxprm.so", unxprm_so_data_2d4e5d268f7b5926)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("unxprm.so", "8b9061a7f2b3e319")
