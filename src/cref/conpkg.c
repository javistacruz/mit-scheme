/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:23-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_9 5
#define LABEL_1_5 7
#define LABEL_1_6 9
#define LABEL_1_7 11
#define LABEL_1_20 13
#define LABEL_1_8 15
#define LABEL_1_22 17
#define LABEL_1_23 19
#define LABEL_1_24 21
#define LABEL_1_11 23
#define LABEL_1_12 25
#define LABEL_1_13 27
#define LABEL_1_25 29
#define LABEL_1_14 31
#define LABEL_1_26 33
#define LABEL_1_27 35
#define LABEL_1_15 37
#define LABEL_1_16 39
#define LABEL_1_31 41
#define LABEL_1_17 43
#define LABEL_1_30 45
#define LABEL_1_32 47
#define LABEL_1_33 49
#define LABEL_1_35 51
#define LABEL_1_37 53
#define LABEL_1_38 55
#define LABEL_1_40 57
#define ENVIRONMENT_LABEL_1_3 89
#define DEBUGGING_LABEL_1_2 88
#define OBJECT_1_7 87
#define OBJECT_1_6 86
#define OBJECT_1_5 85
#define OBJECT_1_4 84
#define OBJECT_1_3 83
#define OBJECT_1_2 82
#define OBJECT_1_1 81
#define OBJECT_1_0 80
#define EXECUTE_CACHE_1_39 59
#define EXECUTE_CACHE_1_36 61
#define EXECUTE_CACHE_1_34 63
#define EXECUTE_CACHE_1_29 65
#define EXECUTE_CACHE_1_28 67
#define EXECUTE_CACHE_1_21 69
#define EXECUTE_CACHE_1_19 71
#define EXECUTE_CACHE_1_18 73
#define EXECUTE_CACHE_1_10 75
#define FREE_REFERENCE_1_1 78
#define FREE_REFERENCE_1_0 79
#define FREE_REFERENCES_LABEL_1_0 58
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpkg_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_1_4);
      goto construct_external_descriptions_27;

    case 1:
      current_block = (Rpc - LABEL_1_9);
      goto label_29;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_26;

    case 3:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_25;

    case 4:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_24;

    case 5:
      current_block = (Rpc - LABEL_1_20);
      goto label_30;

    case 6:
      current_block = (Rpc - LABEL_1_8);
      goto lambda_23;

    case 7:
      current_block = (Rpc - LABEL_1_22);
      goto label_31;

    case 8:
      current_block = (Rpc - LABEL_1_23);
      goto label_32;

    case 9:
      current_block = (Rpc - LABEL_1_24);
      goto label_33;

    case 10:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_16;

    case 11:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_1_25);
      goto label_34;

    case 14:
      current_block = (Rpc - LABEL_1_14);
      goto lambda_13;

    case 15:
      current_block = (Rpc - LABEL_1_26);
      goto label_35;

    case 16:
      current_block = (Rpc - LABEL_1_27);
      goto label_36;

    case 17:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_10;

    case 18:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_9;

    case 19:
      current_block = (Rpc - LABEL_1_31);
      goto label_37;

    case 20:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_8;

    case 21:
      current_block = (Rpc - LABEL_1_30);
      goto continuation_4;

    case 22:
      current_block = (Rpc - LABEL_1_32);
      goto lambda_2;

    case 23:
      current_block = (Rpc - LABEL_1_33);
      goto lambda_7;

    case 24:
      current_block = (Rpc - LABEL_1_35);
      goto continuation_1;

    case 25:
      current_block = (Rpc - LABEL_1_37);
      goto continuation_6;

    case 26:
      current_block = (Rpc - LABEL_1_38);
      goto continuation_0;

    case 27:
      current_block = (Rpc - LABEL_1_40);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (construct_external_descriptions_39)
DEFLABEL (construct_external_descriptions_27)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_51;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd24.Lng))))
    goto label_51;
  (Wrd18.Obj) = ((Wrd22.pObj) [6]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_50)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_49;
  Wrd5 = Wrd9;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_33]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [8]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_47;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_47;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_46)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_32]))));
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_30);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_34]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_45;
  Wrd5 = Wrd9;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd14.Obj) = (current_block [OBJECT_1_6]);
  (Wrd15.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_25])), (Wrd6.pObj));

DEFLABEL (label_34)
  (Wrd5.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd19.Obj) = (Rsp [8]);
  (Wrd20.Obj) = (current_block [OBJECT_1_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_31]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_20])), (Wrd6.pObj));

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.Obj) = (current_block [OBJECT_1_0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (lambda_40)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_1_8);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_60;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_60;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_59)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_53;
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_58;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd30.Lng))))
    goto label_58;
  (Wrd22.Obj) = ((Wrd28.pObj) [4]);

DEFLABEL (label_57)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd38.uLng) == 1)
    goto label_53;
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 62))
    goto label_56;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd47.Lng))))
    goto label_56;
  (Wrd39.Obj) = ((Wrd45.pObj) [5]);

DEFLABEL (label_55)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_53;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_52;

DEFLABEL (label_53)
  Rvl = (current_block [OBJECT_1_5]);

DEFLABEL (label_52)
DEFLABEL (label_54)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.Obj) = (current_block [OBJECT_1_4]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_33)
  (Wrd39.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (current_block [OBJECT_1_3]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_32)
  (Wrd22.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_1_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_31)
  (Wrd5.Obj) = Rvl;
  goto label_59;

DEFLABEL (lambda_41)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_1_14);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_64;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_63)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_62;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_61)
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

DEFLABEL (label_62)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_7]), 1);

DEFLABEL (label_36)
  (Wrd14.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_7]), 1);

DEFLABEL (label_35)
  (Wrd5.Obj) = Rvl;
  goto label_63;

DEFLABEL (lambda_42)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_1_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_36]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_35);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_39]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_38);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_43)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_1_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_36]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_37);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_39]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_40);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_9 9
#define LABEL_2_10 11
#define LABEL_2_8 13
#define LABEL_2_12 15
#define LABEL_2_13 17
#define ENVIRONMENT_LABEL_2_3 31
#define DEBUGGING_LABEL_2_2 30
#define OBJECT_2_3 29
#define OBJECT_2_2 28
#define OBJECT_2_1 27
#define OBJECT_2_0 26
#define EXECUTE_CACHE_2_11 19
#define EXECUTE_CACHE_2_7 21
#define FREE_REFERENCE_2_1 24
#define FREE_REFERENCE_2_0 25
#define FREE_REFERENCES_LABEL_2_0 18
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpkg_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_2_4);
      goto new_extension_packages_6;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto lambda_5;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (new_extension_packages_14)
DEFLABEL (new_extension_packages_6)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_17;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_17;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_16)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (label_17)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (lambda_15)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_2_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_26;
  Wrd8 = Wrd12;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_24;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd22.Lng))))
    goto label_24;
  (Wrd16.Obj) = ((Wrd20.pObj) [8]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_23)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_22;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_22;
  (Wrd9.Obj) = ((Wrd15.pObj) [6]);

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_20;
  Wrd26 = Wrd30;

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_13])), (Wrd27.pObj));

DEFLABEL (label_12)
  (Wrd26.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_2_3]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_11)
  (Wrd9.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (current_block [OBJECT_2_2]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_9])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_9 9
#define LABEL_3_12 11
#define LABEL_3_8 13
#define LABEL_3_10 15
#define TAG_3_11 6
#define LABEL_3_14 17
#define ENVIRONMENT_LABEL_3_3 30
#define DEBUGGING_LABEL_3_2 29
#define OBJECT_3_5 28
#define OBJECT_3_4 27
#define OBJECT_3_3 26
#define OBJECT_3_2 25
#define OBJECT_3_1 24
#define OBJECT_3_0 23
#define EXECUTE_CACHE_3_13 19
#define EXECUTE_CACHE_3_7 21
#define FREE_REFERENCES_LABEL_3_0 18
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpkg_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd7;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
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
      goto new_internal_bindingP_9;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_3_12);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_3_10);
      goto lambda_17;

    case 7:
      current_block = (Rpc - LABEL_3_14);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (new_internal_bindingP_16)
DEFLABEL (new_internal_bindingP_9)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_28;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd20.Lng))))
    goto label_28;
  (Wrd7.Obj) = ((Wrd18.pObj) [5]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_19;

DEFLABEL (label_18)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_20;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_27;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_27;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_26)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_10])));
  Rhp += 1;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd30 = Wrd29;
  (Wrd31.Obj) = (Rsp [0]);
  ((Wrd30.pObj) [2]) = (Wrd31.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_25;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd40.Lng))))
    goto label_25;
  (Wrd34.Obj) = ((Wrd38.pObj) [7]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_21;

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_3_4]);

DEFLABEL (label_21)
DEFLABEL (label_23)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.Obj) = (current_block [OBJECT_3_3]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_3_2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_3_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_3_10);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_33;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_33;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_32)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  if ((Wrd5.Obj) == (Wrd24.Obj))
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_29;

DEFLABEL (label_30)
  Rvl = (current_block [OBJECT_3_4]);

DEFLABEL (label_29)
DEFLABEL (label_31)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_3_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define LABEL_4_8 11
#define LABEL_4_9 13
#define ENVIRONMENT_LABEL_4_3 19
#define DEBUGGING_LABEL_4_2 18
#define OBJECT_4_3 17
#define OBJECT_4_2 16
#define OBJECT_4_1 15
#define OBJECT_4_0 14
#define FREE_REFERENCES_LABEL_4_0 14
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpkg_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_4_4);
      goto package_ancestry_9;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto loop_7;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_4_9);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_ancestry_16)
DEFLABEL (package_ancestry_9)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_21;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_20)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_19;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_19;
  (Wrd21.Obj) = ((Wrd27.pObj) [2]);

DEFLABEL (label_18)
  (Wrd40.Obj) = (current_block [OBJECT_4_3]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Rsp [1]) = (Wrd37.Obj);
  goto loop_7;

DEFLABEL (label_19)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_4_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_12)
  (Wrd21.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_4_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (loop_17)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_4_7);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_22;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_26;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_26;
  (Wrd7.Obj) = ((Wrd13.pObj) [2]);

DEFLABEL (label_25)
  (Wrd26.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Rsp [1]) = (Wrd23.Obj);
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_24;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd35.Lng))))
    goto label_24;
  (Wrd27.Obj) = ((Wrd33.pObj) [4]);

DEFLABEL (label_23)
  (Rsp [0]) = (Wrd27.Obj);
  goto loop_7;

DEFLABEL (label_24)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.Obj) = (current_block [OBJECT_4_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_14)
  (Wrd27.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_4_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_13)
  (Wrd7.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_6 5
#define LABEL_5_7 7
#define LABEL_5_5 9
#define LABEL_5_10 11
#define LABEL_5_11 13
#define LABEL_5_9 15
#define LABEL_5_12 17
#define LABEL_5_13 19
#define LABEL_5_14 21
#define LABEL_5_15 23
#define LABEL_5_16 25
#define ENVIRONMENT_LABEL_5_3 36
#define DEBUGGING_LABEL_5_2 35
#define OBJECT_5_3 34
#define OBJECT_5_2 33
#define OBJECT_5_1 32
#define OBJECT_5_0 31
#define EXECUTE_CACHE_5_17 27
#define EXECUTE_CACHE_5_8 29
#define FREE_REFERENCES_LABEL_5_0 26
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpkg_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd17;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_5_4);
      goto package_ancestry_P_14;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_5_10);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_5_11);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_5_12);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_5_13);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_5_14);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_5_15);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_5_16);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_ancestry_P_26)
DEFLABEL (package_ancestry_P_14)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_49;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_48)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_47;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_46)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  Rvl = (current_block [OBJECT_5_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_45;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_44)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_43;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;

DEFLABEL (label_29)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_28)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_41;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_40)
  if ((Wrd9.Obj) == (current_block [OBJECT_5_3]))
    goto label_37;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_36;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_35)
  if ((Wrd19.Obj) == (current_block [OBJECT_5_3]))
    goto label_29;
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_34;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_33)
  (Rsp [0]) = (Wrd29.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_32;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_31)
  (Rsp [1]) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_17]));

DEFLABEL (label_32)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_23)
  (Wrd38.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_22)
  (Wrd29.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_21)
  (Wrd19.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_39;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_38)
  if ((Wrd47.Obj) == (current_block [OBJECT_5_3]))
    goto label_29;
  Rvl = (current_block [OBJECT_5_1]);
  goto label_28;

DEFLABEL (label_39)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_24)
  (Wrd47.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_20)
  (Wrd9.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_48;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define LABEL_6_7 7
#define LABEL_6_9 9
#define LABEL_6_13 11
#define LABEL_6_14 13
#define LABEL_6_16 15
#define LABEL_6_17 17
#define LABEL_6_10 19
#define LABEL_6_11 21
#define LABEL_6_12 23
#define LABEL_6_25 25
#define LABEL_6_18 27
#define LABEL_6_20 29
#define LABEL_6_21 31
#define LABEL_6_22 33
#define LABEL_6_30 35
#define LABEL_6_31 37
#define LABEL_6_32 39
#define LABEL_6_33 41
#define LABEL_6_34 43
#define LABEL_6_35 45
#define LABEL_6_26 47
#define LABEL_6_36 49
#define LABEL_6_27 51
#define LABEL_6_37 53
#define LABEL_6_28 55
#define LABEL_6_29 57
#define LABEL_6_38 59
#define LABEL_6_39 61
#define LABEL_6_40 63
#define LABEL_6_41 65
#define LABEL_6_42 67
#define LABEL_6_43 69
#define ENVIRONMENT_LABEL_6_3 91
#define DEBUGGING_LABEL_6_2 90
#define OBJECT_6_5 89
#define OBJECT_6_4 88
#define OBJECT_6_3 87
#define OBJECT_6_2 86
#define OBJECT_6_1 85
#define OBJECT_6_0 84
#define EXECUTE_CACHE_6_24 71
#define EXECUTE_CACHE_6_23 73
#define EXECUTE_CACHE_6_19 75
#define EXECUTE_CACHE_6_15 77
#define EXECUTE_CACHE_6_8 79
#define FREE_REFERENCE_6_1 82
#define FREE_REFERENCE_6_0 83
#define FREE_REFERENCES_LABEL_6_0 70
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpkg_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd99;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd42;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd102;
  machine_word Wrd108;
  machine_word Wrd106;
  machine_word Wrd112;
  machine_word Wrd118;
  machine_word Wrd116;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd82;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd69;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd76;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd53;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_6_4);
      goto package__external_40;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_62;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_39;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_6_13);
      goto label_42;

    case 5:
      current_block = (Rpc - LABEL_6_14);
      goto label_43;

    case 6:
      current_block = (Rpc - LABEL_6_16);
      goto loop_8;

    case 7:
      current_block = (Rpc - LABEL_6_17);
      goto label_44;

    case 8:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_6_25);
      goto label_45;

    case 12:
      current_block = (Rpc - LABEL_6_18);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_6_20);
      goto continuation_25;

    case 14:
      current_block = (Rpc - LABEL_6_21);
      goto continuation_24;

    case 15:
      current_block = (Rpc - LABEL_6_22);
      goto lambda_23;

    case 16:
      current_block = (Rpc - LABEL_6_30);
      goto label_46;

    case 17:
      current_block = (Rpc - LABEL_6_31);
      goto label_47;

    case 18:
      current_block = (Rpc - LABEL_6_32);
      goto label_48;

    case 19:
      current_block = (Rpc - LABEL_6_33);
      goto label_49;

    case 20:
      current_block = (Rpc - LABEL_6_34);
      goto label_50;

    case 21:
      current_block = (Rpc - LABEL_6_35);
      goto label_51;

    case 22:
      current_block = (Rpc - LABEL_6_26);
      goto continuation_6;

    case 23:
      current_block = (Rpc - LABEL_6_36);
      goto label_52;

    case 24:
      current_block = (Rpc - LABEL_6_27);
      goto continuation_37;

    case 25:
      current_block = (Rpc - LABEL_6_37);
      goto label_53;

    case 26:
      current_block = (Rpc - LABEL_6_28);
      goto continuation_36;

    case 27:
      current_block = (Rpc - LABEL_6_29);
      goto lambda_35;

    case 28:
      current_block = (Rpc - LABEL_6_38);
      goto label_54;

    case 29:
      current_block = (Rpc - LABEL_6_39);
      goto label_55;

    case 30:
      current_block = (Rpc - LABEL_6_40);
      goto label_56;

    case 31:
      current_block = (Rpc - LABEL_6_41);
      goto label_57;

    case 32:
      current_block = (Rpc - LABEL_6_42);
      goto label_58;

    case 33:
      current_block = (Rpc - LABEL_6_43);
      goto label_59;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package__external_61)
DEFLABEL (package__external_40)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
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
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (Rsp [0]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_62)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto loop_8;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_73;
  Wrd14 = Wrd18;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd33.Obj) = (Rsp [5]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [3]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_71;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd32.Lng))))
    goto label_71;
  (Wrd24.Obj) = ((Wrd30.pObj) [6]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_70)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_6_12);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_69;
  Wrd5 = Wrd9;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_23]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_6_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_24]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_23]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_6_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_24]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_6_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_29]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_23]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_6_28);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_24]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_6_27);
  (* (--Rsp)) = Rvl;
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_67;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_67;
  (Wrd5.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_66)
  (Wrd29.Obj) = (* (Rsp++));
  (Wrd30.Obj) = (* (Rsp++));
  (Wrd31.Obj) = (* (Rsp++));
  (Wrd32.Obj) = (* (Rsp++));
  (Wrd42.Obj) = (MAKE_OBJECT (0, 6));
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [2]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd35.pObj) = (& (Rhp [-7]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd35.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [3]);
  (Wrd25.Obj) = (current_block [OBJECT_6_4]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_37]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_53)
  (Wrd5.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_25])), (Wrd6.pObj));

DEFLABEL (label_45)
  (Wrd5.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd38.Obj) = (Rsp [5]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [3]);
  (Wrd40.Obj) = (current_block [OBJECT_6_0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_13])), (Wrd15.pObj));

DEFLABEL (label_42)
  (Wrd14.Obj) = Rvl;
  goto label_72;

DEFLABEL (loop_63)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_6_16);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_78;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_78;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_77)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_18);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_74;
  Rvl = (current_block [OBJECT_6_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto loop_8;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_26);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_76;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_76;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_75)
  (Wrd21.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_6_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_36]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_52)
  (Wrd5.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_6_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_44)
  (Wrd5.Obj) = Rvl;
  goto label_77;

DEFLABEL (lambda_64)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_6_22);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_93;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_93;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_92)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_91;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_91;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_90)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_89;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd45.Lng))))
    goto label_89;
  (Wrd39.Obj) = ((Wrd43.pObj) [3]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_88)
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 62))
    goto label_87;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd61.Lng))))
    goto label_87;
  (Wrd53.Obj) = ((Wrd59.pObj) [2]);

DEFLABEL (label_86)
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd76.uLng) == 62))
    goto label_85;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd75.Lng))))
    goto label_85;
  (Wrd69.Obj) = ((Wrd73.pObj) [2]);

DEFLABEL (label_84)
  (Rsp [1]) = (Wrd69.Obj);
  (Wrd91.Obj) = (Rsp [2]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd92.uLng) == 62))
    goto label_83;
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (Wrd90.Lng) = (FIXNUM_TO_LONG (Wrd89.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd90.Lng))))
    goto label_83;
  (Wrd82.Obj) = ((Wrd88.pObj) [3]);

DEFLABEL (label_82)
  (Rsp [2]) = (Wrd82.Obj);
  (Wrd98.Obj) = (Rsp [0]);
  if ((Wrd98.Obj) == (Wrd82.Obj))
    goto label_80;
  (Wrd106.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd108.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd106.Obj);
  (* (Rhp++)) = (Wrd98.Obj);
  (* (Rhp++)) = (Wrd108.Obj);
  (* (Rhp++)) = (Wrd82.Obj);
  (Wrd102.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd102.pObj)));
  goto label_79;

DEFLABEL (label_80)
  (Wrd116.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd118.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd116.Obj);
  (* (Rhp++)) = (Wrd98.Obj);
  (* (Rhp++)) = (Wrd118.Obj);
  (Wrd112.pObj) = (& (Rhp [-3]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd112.pObj)));

DEFLABEL (label_79)
DEFLABEL (label_81)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_83)
  (Wrd93.Obj) = (Rsp [2]);
  (Wrd94.Obj) = (current_block [OBJECT_6_5]);
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_35]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_51)
  (Wrd82.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd78.Obj) = (current_block [OBJECT_6_4]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_34]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_50)
  (Wrd69.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd64.Obj) = (Rsp [2]);
  (Wrd65.Obj) = (current_block [OBJECT_6_4]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_33]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_49)
  (Wrd53.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.Obj) = (current_block [OBJECT_6_5]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_32]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_6_5]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_31]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_47)
  (Wrd21.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_6_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_30]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (lambda_65)
DEFLABEL (lambda_35)
  INTERRUPT_CHECK (26, LABEL_6_29);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_108;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_108;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_107)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_106;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_106;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_105)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_104;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd45.Lng))))
    goto label_104;
  (Wrd39.Obj) = ((Wrd43.pObj) [3]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_103)
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 62))
    goto label_102;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd61.Lng))))
    goto label_102;
  (Wrd53.Obj) = ((Wrd59.pObj) [3]);

DEFLABEL (label_101)
  (Rsp [2]) = (Wrd53.Obj);
  (Wrd78.Obj) = (Rsp [1]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 62))
    goto label_100;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd77.Lng))))
    goto label_100;
  (Wrd69.Obj) = ((Wrd75.pObj) [2]);

DEFLABEL (label_99)
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd92.uLng) == 62))
    goto label_98;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [0]);
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd91.Lng))))
    goto label_98;
  (Wrd85.Obj) = ((Wrd89.pObj) [2]);

DEFLABEL (label_97)
  (Rsp [1]) = (Wrd85.Obj);
  (Wrd98.Obj) = (Rsp [0]);
  (Wrd99.Obj) = (Rsp [2]);
  if ((Wrd98.Obj) == (Wrd99.Obj))
    goto label_95;
  (Wrd106.Obj) = (MAKE_OBJECT (0, 3));
  (* (Rhp++)) = (Wrd106.Obj);
  (* (Rhp++)) = (Wrd98.Obj);
  (* (Rhp++)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd99.Obj);
  (Wrd102.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd102.pObj)));
  goto label_94;

DEFLABEL (label_95)
  (Wrd116.Obj) = (MAKE_OBJECT (0, 2));
  (* (Rhp++)) = (Wrd116.Obj);
  (* (Rhp++)) = (Wrd98.Obj);
  (* (Rhp++)) = (Wrd85.Obj);
  (Wrd112.pObj) = (& (Rhp [-3]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd112.pObj)));

DEFLABEL (label_94)
DEFLABEL (label_96)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_98)
  (Wrd94.Obj) = (current_block [OBJECT_6_4]);
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_43]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_59)
  (Wrd85.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd80.Obj) = (Rsp [1]);
  (Wrd81.Obj) = (current_block [OBJECT_6_4]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_42]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_58)
  (Wrd69.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd65.Obj) = (current_block [OBJECT_6_5]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_41]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_57)
  (Wrd53.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.Obj) = (current_block [OBJECT_6_5]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_40]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_6_5]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_39]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_55)
  (Wrd21.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_6_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_38]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_107;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_7 9
#define LABEL_7_8 11
#define LABEL_7_9 13
#define LABEL_7_10 15
#define LABEL_7_11 17
#define LABEL_7_12 19
#define TAG_7_13 8
#define ENVIRONMENT_LABEL_7_3 28
#define DEBUGGING_LABEL_7_2 27
#define OBJECT_7_6 26
#define OBJECT_7_5 25
#define OBJECT_7_4 24
#define OBJECT_7_3 23
#define OBJECT_7_2 22
#define OBJECT_7_1 21
#define OBJECT_7_0 20
#define FREE_REFERENCES_LABEL_7_0 20
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpkg_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd71;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd78;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd57;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd41;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd39;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd37;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      goto split_links_16;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto loop_14;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_7_8);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_7_9);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_7_10);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_7_11);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_7_12);
      goto lambda_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (split_links_25)
DEFLABEL (split_links_16)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_29;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd15.Lng))))
    goto label_29;
  (Wrd9.Obj) = ((Wrd13.pObj) [8]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_28)
  goto loop_14;

DEFLABEL (label_29)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_7_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (loop_26)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_7_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_30;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_12])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  Rvl = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  if (! ((Wrd6.uLng) == 1))
    goto label_44;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_43)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_42;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_41)
  (Wrd91.Obj) = (Rsp [0]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd92.uLng) == 62))
    goto label_40;
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (Wrd90.Lng) = (FIXNUM_TO_LONG (Wrd89.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd90.Lng))))
    goto label_40;
  (Wrd37.Obj) = ((Wrd88.pObj) [5]);
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;

DEFLABEL (label_38)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 62))
    goto label_37;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd49.Lng))))
    goto label_37;
  (Wrd41.Obj) = ((Wrd47.pObj) [2]);

DEFLABEL (label_36)
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd64.uLng) == 62))
    goto label_35;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd63.Lng))))
    goto label_35;
  (Wrd57.Obj) = ((Wrd61.pObj) [2]);

DEFLABEL (label_34)
  (Wrd70.Obj) = (Rsp [5]);
  if ((Wrd57.Obj) == (Wrd70.Obj))
    goto label_32;
  (Wrd71.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd71.Obj);
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd76.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd75.Obj);
  (* (Rhp++)) = (Wrd76.Obj);
  (Wrd74.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd74.pObj)));
  (Rsp [4]) = (Wrd72.Obj);
  goto label_31;

DEFLABEL (label_32)
  (Wrd78.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd78.Obj);
  (Wrd82.Obj) = (Rsp [0]);
  (Wrd83.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd82.Obj);
  (* (Rhp++)) = (Wrd83.Obj);
  (Wrd81.pObj) = (& (Rhp [-2]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd81.pObj)));
  (Rsp [3]) = (Wrd79.Obj);

DEFLABEL (label_31)
DEFLABEL (label_33)
  Rsp = (& (Rsp [2]));
  goto loop_14;

DEFLABEL (label_35)
  (Wrd66.Obj) = (current_block [OBJECT_7_6]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_22)
  (Wrd57.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.Obj) = (current_block [OBJECT_7_6]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_21)
  (Wrd41.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd39.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd39.Obj);
  goto label_33;

DEFLABEL (label_40)
  (Wrd93.Obj) = (Rsp [0]);
  (Wrd94.Obj) = (current_block [OBJECT_7_5]);
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_38;

DEFLABEL (label_42)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_7_12);

DEFLABEL (lambda_3)
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

#define LABEL_8_4 3
#define LABEL_8_7 5
#define LABEL_8_5 7
#define LABEL_8_11 9
#define LABEL_8_6 11
#define LABEL_8_8 13
#define LABEL_8_13 15
#define LABEL_8_14 17
#define LABEL_8_15 19
#define LABEL_8_10 21
#define LABEL_8_20 23
#define LABEL_8_17 25
#define LABEL_8_21 27
#define LABEL_8_19 29
#define LABEL_8_22 31
#define LABEL_8_23 33
#define ENVIRONMENT_LABEL_8_3 51
#define DEBUGGING_LABEL_8_2 50
#define OBJECT_8_6 49
#define OBJECT_8_5 48
#define OBJECT_8_4 47
#define OBJECT_8_3 46
#define OBJECT_8_2 45
#define OBJECT_8_1 44
#define OBJECT_8_0 43
#define EXECUTE_CACHE_8_18 35
#define EXECUTE_CACHE_8_16 37
#define EXECUTE_CACHE_8_12 39
#define EXECUTE_CACHE_8_9 41
#define FREE_REFERENCES_LABEL_8_0 34
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpkg_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd34;
  machine_word Wrd6;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_8_4);
      goto package_load__external_15;

    case 1:
      current_block = (Rpc - LABEL_8_7);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_10;

    case 3:
      current_block = (Rpc - LABEL_8_11);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_8_8);
      goto lambda_7;

    case 6:
      current_block = (Rpc - LABEL_8_13);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_8_14);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_8_15);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_8_20);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_8_17);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_8_21);
      goto label_23;

    case 13:
      current_block = (Rpc - LABEL_8_19);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_8_22);
      goto label_24;

    case 15:
      current_block = (Rpc - LABEL_8_23);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_load__external_27)
DEFLABEL (package_load__external_15)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_38;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_38;
  (Wrd13.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_37)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_36;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_36;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_34;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_34;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_8_19);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_32;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_32;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_31)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_30;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd27.Lng))))
    goto label_30;
  (Wrd21.Obj) = ((Wrd25.pObj) [2]);

DEFLABEL (label_29)
  (Wrd34.Obj) = (* (Rsp++));
  (Wrd35.Obj) = (* (Rsp++));
  (Wrd36.Obj) = (* (Rsp++));
  (Wrd43.Obj) = (MAKE_OBJECT (0, 4));
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd39.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd39.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd30.Obj) = (current_block [OBJECT_8_6]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_23]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_25)
  (Wrd21.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_8_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_22]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_8_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_20]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_8_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_8_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (lambda_28)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_8_8);
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_47;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_42;

DEFLABEL (label_41)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_8_17);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_40;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_39)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_3]), 1);

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_46;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_45)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_44;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_43)
  (Rsp [0]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_16]));

DEFLABEL (label_44)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_3]), 1);

DEFLABEL (label_20)
  (Wrd18.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_19)
  (Wrd9.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_47)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_3]), 1);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto label_41;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_6 5
#define LABEL_9_5 7
#define LABEL_9_7 9
#define LABEL_9_10 11
#define LABEL_9_13 13
#define LABEL_9_14 15
#define LABEL_9_12 17
#define ENVIRONMENT_LABEL_9_3 30
#define DEBUGGING_LABEL_9_2 29
#define OBJECT_9_1 28
#define OBJECT_9_0 27
#define EXECUTE_CACHE_9_15 19
#define EXECUTE_CACHE_9_11 21
#define EXECUTE_CACHE_9_9 23
#define EXECUTE_CACHE_9_8 25
#define FREE_REFERENCES_LABEL_9_0 18
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpkg_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_9_4);
      goto map_clauses_8;

    case 1:
      current_block = (Rpc - LABEL_9_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto lambda_5;

    case 4:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_9_13);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_9_14);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_9_12);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_clauses_13)
DEFLABEL (map_clauses_8)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_16;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_15)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (label_16)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (lambda_14)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_9_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_20;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_19)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (label_17)
  (Wrd6.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_18)
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_12);
  (Wrd6.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_6 5
#define LABEL_10_7 7
#define LABEL_10_5 9
#define ENVIRONMENT_LABEL_10_3 19
#define DEBUGGING_LABEL_10_2 18
#define OBJECT_10_0 17
#define EXECUTE_CACHE_10_9 11
#define EXECUTE_CACHE_10_8 13
#define FREE_REFERENCE_10_0 16
#define FREE_REFERENCES_LABEL_10_0 10
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpkg_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_10_4);
      goto map_files_2;

    case 1:
      current_block = (Rpc - LABEL_10_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_files_7)
DEFLABEL (map_files_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_11;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_10)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_9;
  Wrd17 = Wrd21;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_7])), (Wrd18.pObj));

DEFLABEL (label_5)
  (Wrd17.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_10;

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
conpkg_so_b7f419e4574e8629 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	0,
	2,
	1,
	0,
	1,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 10)
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

static const struct liarc_code_S arr_decl_conpkg_so_b7f419e4574e8629 [10] =
  {
    { "conpkg_so_code_1", 28, conpkg_so_code_1 },
    { "conpkg_so_code_2", 8, conpkg_so_code_2 },
    { "conpkg_so_code_3", 8, conpkg_so_code_3 },
    { "conpkg_so_code_4", 6, conpkg_so_code_4 },
    { "conpkg_so_code_5", 12, conpkg_so_code_5 },
    { "conpkg_so_code_6", 34, conpkg_so_code_6 },
    { "conpkg_so_code_7", 9, conpkg_so_code_7 },
    { "conpkg_so_code_8", 16, conpkg_so_code_8 },
    { "conpkg_so_code_9", 8, conpkg_so_code_9 },
    { "conpkg_so_code_10", 4, conpkg_so_code_10 }
  };

int
decl_conpkg_so_b7f419e4574e8629 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_conpkg_so_b7f419e4574e8629);
  return (0);
}

DECLARE_COMPILED_CODE ("conpkg.so", 3, decl_conpkg_so_b7f419e4574e8629, conpkg_so_b7f419e4574e8629)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_conpkg_so_data_b7f419e4574e8629 [1851] =
  "\x64\x17\x9e\x04\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\xb9\x0d\x07"
  "\x84\x83\x82\xc2\xba\x85\x0d\xbb\x0d\x24\x28\x0d\xbc\x28\x0d\xbd"
  "\x28\x0d\xbe\x28\x0d\xbf\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x82\x88\x85\x02\xb2\x84\x0d\x0d\x1c\x24\x28\xb4\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x83\x07\x86\x81\xb2\x84"
  "\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x08\x81\xb2"
  "\x83\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x85\x88\x08\xc1\x1c\x07\xb1\x28\x0d\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x82"
  "\x81\x08\x83\xb2\x85\x1b\x0d\x24\x28\x0d\x1c\x28\xb4\x28\x0d\x28"
  "\xb7\x28\xb6\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x02\x88"
  "\x81\x84\xb1\x1b\xb2\x02\x08\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x81\x84\x1b\xb1\x83\xb2\x82\x28\xb7\x28\xb6\x28\x0d\xba\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x1b\x28\xb7\x28"
  "\xb6\x28\xb2\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x02\x88\x1b\x0d"
  "\x24\x28\xb7\x28\xb6\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x17\xbf\x88\xb7\x1b\x2a\xb1\x2a\x1b\x2a\x1b\x2a\xb4\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\xb2\x1b\xb3\x1b\x1b"
  "\x1b\x1b\x1b\xb5\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x02\x52\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f"
  "\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73"
  "\x72\x63\x2f\x63\x72\x65\x66\x2f\x2e\x2f\x63\x6f\x6e\x70\x6b\x67"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x04\x63\x61\x72\x15\x70"
  "\x61\x63\x6b\x61\x67\x65\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69"
  "\x6f\x6e\x73\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x17"
  "\x70\x61\x63\x6b\x61\x67\x65\x2d\x6c\x6f\x61\x64\x2d\x3e\x65\x78"
  "\x74\x65\x72\x6e\x61\x6c\x04\x63\x64\x72\x03\x04\x18\x6c\x69\x73"
  "\x74\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x70\x6f\x73\x69"
  "\x74\x69\x76\x65\x03\x17\x6e\x65\x77\x2d\x65\x78\x74\x65\x6e\x73"
  "\x69\x6f\x6e\x2d\x70\x61\x63\x6b\x61\x67\x65\x73\x03\x0d\x6c\x69"
  "\x73\x74\x2d\x3e\x76\x65\x63\x74\x6f\x72\x04\x04\x6d\x61\x70\x04"
  "\x13\x70\x61\x63\x6b\x61\x67\x65\x2d\x61\x6e\x63\x65\x73\x74\x72"
  "\x79\x3c\x3f\x09\x04\x05\x73\x6f\x72\x74\x04\x08\x61\x70\x70\x65"
  "\x6e\x64\x21\x04\x12\x70\x61\x63\x6b\x61\x67\x65\x2d\x3e\x65\x78"
  "\x74\x65\x72\x6e\x61\x6c\x0a\x03\x11\x70\x61\x63\x6b\x61\x67\x65"
  "\x2f\x61\x6e\x63\x65\x73\x74\x72\x79\x0b\x0a\x1f\x3a\x81\x85\x02"
  "\x1e\x38\x81\x85\x02\x1d\x36\x81\x83\x02\x1c\x34\x81\x83\x02\x1b"
  "\x32\x83\x04\x1a\x30\x83\x04\x19\x2e\x81\x91\x02\x18\x2c\x81\x91"
  "\x02\x17\x2a\x81\x93\x02\x16\x28\x81\x8f\x02\x15\x26\x81\x8d\x02"
  "\x14\x24\x81\x85\x02\x13\x22\x81\x85\x02\x12\x20\x84\x06\x11\x1e"
  "\x81\x8b\x02\x10\x1c\x81\x89\x02\x0f\x1a\x81\x87\x02\x0e\x18\x81"
  "\x85\x02\x0d\x16\x81\x83\x02\x0c\x14\x81\x83\x02\x0b\x12\x81\x83"
  "\x02\x0a\x10\x83\x04\x09\x0e\x81\x89\x02\x08\x0c\x81\x87\x02\x07"
  "\x0a\x81\x85\x02\x06\x08\x81\x83\x02\x05\x06\x81\x8b\x02\x04\x04"
  "\x83\x04\x39\x5a\x0c\x02\x08\x0a\x6c\x69\x6e\x6b\x2f\x6e\x65\x77"
  "\x3f\x16\x6e\x65\x77\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x62"
  "\x69\x6e\x64\x69\x6e\x67\x3f\x0d\x03\x04\x04\x0e\x74\x68\x65\x72"
  "\x65\x2d\x65\x78\x69\x73\x74\x73\x3f\x0e\x03\x27\x12\x81\x85\x02"
  "\x26\x10\x81\x85\x02\x25\x0e\x81\x83\x02\x24\x0c\x81\x87\x02\x23"
  "\x0a\x81\x85\x02\x22\x08\x83\x04\x21\x06\x81\x83\x02\x20\x04\x83"
  "\x04\x11\x20\x0f\x02\x03\x12\x62\x69\x6e\x64\x69\x6e\x67\x2f\x69"
  "\x6e\x74\x65\x72\x6e\x61\x6c\x3f\x04\x0e\x03\x2f\x12\x81\x85\x02"
  "\x2e\x10\x81\x85\x02\x2d\x0e\x81\x83\x02\x2c\x0c\x81\x87\x02\x2b"
  "\x0a\x81\x85\x02\x2a\x08\x81\x83\x02\x29\x06\x81\x83\x02\x28\x04"
  "\x83\x04\x11\x1f\x0e\x02\x35\x0e\x81\x85\x02\x34\x0c\x81\x85\x02"
  "\x33\x0a\x81\x85\x02\x32\x08\x81\x85\x02\x31\x06\x81\x83\x02\x30"
  "\x04\x83\x04\x0d\x14\x10\x02\x04\x63\x64\x72\x11\x04\x0e\x73\x79"
  "\x6d\x62\x6f\x6c\x2d\x6c\x69\x73\x74\x3c\x3f\x04\x09\x03\x41\x1a"
  "\x81\x85\x02\x40\x18\x81\x85\x02\x3f\x16\x81\x85\x02\x3e\x14\x81"
  "\x85\x02\x3d\x12\x81\x85\x02\x3c\x10\x81\x85\x02\x3b\x0e\x81\x89"
  "\x02\x3a\x0c\x81\x87\x02\x39\x0a\x81\x85\x02\x38\x08\x81\x89\x02"
  "\x37\x06\x81\x87\x02\x36\x04\x84\x06\x19\x25\x12\x02\x0d\x0d\x62"
  "\x69\x6e\x64\x69\x6e\x67\x2f\x6e\x61\x6d\x65\x03\x03\x0c\x73\x70"
  "\x6c\x69\x74\x2d\x6c\x69\x6e\x6b\x73\x13\x04\x03\x09\x70\x61\x63"
  "\x6b\x61\x67\x65\x3f\x04\x03\x06\x63\x46\x81\x87\x02\x62\x44\x81"
  "\x87\x02\x61\x42\x81\x87\x02\x60\x40\x81\x85\x02\x5f\x3e\x81\x85"
  "\x02\x5e\x3c\x81\x83\x02\x5d\x3a\x83\x04\x5c\x38\x81\x8f\x02\x5b"
  "\x36\x81\x8f\x02\x5a\x34\x81\x8d\x02\x59\x32\x81\x85\x02\x58\x30"
  "\x81\x83\x02\x57\x2e\x81\x87\x02\x56\x2c\x81\x87\x02\x55\x2a\x81"
  "\x87\x02\x54\x28\x81\x85\x02\x53\x26\x81\x85\x02\x52\x24\x81\x83"
  "\x02\x51\x22\x83\x04\x50\x20\x81\x8d\x02\x4f\x1e\x81\x8b\x02\x4e"
  "\x1c\x81\x83\x02\x4d\x1a\x81\x8f\x02\x4c\x18\x81\x8d\x02\x4b\x16"
  "\x81\x8b\x02\x4a\x14\x81\x89\x02\x49\x12\x81\x83\x02\x48\x10\x81"
  "\x83\x02\x47\x0e\x81\x91\x02\x46\x0c\x81\x8f\x02\x45\x0a\x81\x87"
  "\x02\x44\x08\x81\x85\x02\x43\x06\x81\x87\x02\x42\x04\x84\x06\x45"
  "\x5c\x02\x08\x11\x08\x6c\x14\x81\x85\x02\x6b\x12\x81\x8d\x02\x6a"
  "\x10\x81\x8d\x02\x69\x0e\x81\x8d\x02\x68\x0c\x81\x8b\x02\x67\x0a"
  "\x81\x89\x02\x66\x08\x81\x89\x02\x65\x06\x81\x87\x02\x64\x04\x83"
  "\x04\x13\x1d\x14\x02\x09\x11\x04\x03\x03\x0a\x6d\x61\x70\x2d\x66"
  "\x69\x6c\x65\x73\x03\x0c\x6d\x61\x70\x2d\x63\x6c\x61\x75\x73\x65"
  "\x73\x15\x05\x7c\x22\x81\x89\x02\x7b\x20\x81\x89\x02\x7a\x1e\x81"
  "\x87\x02\x79\x1c\x81\x85\x02\x78\x1a\x81\x83\x02\x77\x18\x81\x89"
  "\x02\x76\x16\x81\x85\x02\x75\x14\x81\x83\x02\x74\x12\x81\x83\x02"
  "\x73\x10\x81\x83\x02\x72\x0e\x83\x04\x71\x0c\x81\x85\x02\x70\x0a"
  "\x81\x87\x02\x6f\x08\x81\x83\x02\x6e\x06\x81\x87\x02\x6d\x04\x83"
  "\x04\x21\x34\x16\x02\x0a\x11\x04\x03\x03\x03\x06\x6c\x69\x73\x74"
  "\x3f\x05\x84\x01\x12\x81\x85\x02\x83\x01\x10\x81\x83\x02\x82\x01"
  "\x0e\x81\x87\x02\x81\x01\x0c\x81\x83\x02\x80\x01\x0a\x83\x04\x7f"
  "\x08\x81\x83\x02\x7e\x06\x81\x85\x02\x7d\x04\x83\x04\x11\x1f\x02"
  "\x0b\x11\x0d\x2d\x3e\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x02"
  "\x04\x03\x03\x88\x01\x0a\x81\x83\x02\x87\x01\x08\x81\x87\x02\x86"
  "\x01\x06\x81\x85\x02\x85\x01\x04\x83\x04\x09\x14\x11\x0b\x11\x04"
  "\x04\x16\x04\x14\x04\x04\x12\x04\x10\x04\x0e\x04\x0f\x04\x0c\x04"
  "\x0b\x15\x13\x0a\x09\x0b\x0d\x20\x63\x6f\x6e\x73\x74\x72\x75\x63"
  "\x74\x2d\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d\x64\x65\x73\x63\x72"
  "\x69\x70\x74\x69\x6f\x6e\x73\x0b\x05\x10\x64\x65\x66\x69\x6e\x65"
  "\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02"
  "\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
conpkg_so_data_b7f419e4574e8629 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_conpkg_so_data_b7f419e4574e8629 [0]))), (sizeof (prog_conpkg_so_data_b7f419e4574e8629)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("conpkg.so", conpkg_so_data_b7f419e4574e8629)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("conpkg.so", "62d6d4fcae9f635e")
