/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:24-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_7 5
#define LABEL_1_5 7
#define TAG_1_6 2
#define LABEL_1_11 9
#define LABEL_1_12 11
#define LABEL_1_13 13
#define LABEL_1_9 15
#define LABEL_1_14 17
#define LABEL_1_15 19
#define LABEL_1_16 21
#define LABEL_1_17 23
#define LABEL_1_18 25
#define LABEL_1_20 27
#define LABEL_1_22 29
#define LABEL_1_25 31
#define LABEL_1_26 33
#define LABEL_1_27 35
#define LABEL_1_24 37
#define LABEL_1_28 39
#define LABEL_1_30 41
#define LABEL_1_31 43
#define LABEL_1_32 45
#define LABEL_1_29 47
#define LABEL_1_33 49
#define LABEL_1_35 51
#define LABEL_1_36 53
#define LABEL_1_37 55
#define LABEL_1_34 57
#define LABEL_1_38 59
#define LABEL_1_40 61
#define LABEL_1_41 63
#define LABEL_1_42 65
#define LABEL_1_39 67
#define LABEL_1_43 69
#define LABEL_1_44 71
#define LABEL_1_45 73
#define LABEL_1_48 75
#define LABEL_1_46 77
#define LABEL_1_49 79
#define ENVIRONMENT_LABEL_1_3 115
#define DEBUGGING_LABEL_1_2 114
#define OBJECT_1_14 113
#define OBJECT_1_13 112
#define OBJECT_1_12 111
#define OBJECT_1_11 110
#define OBJECT_1_10 109
#define OBJECT_1_9 108
#define OBJECT_1_8 107
#define OBJECT_1_7 106
#define OBJECT_1_6 105
#define OBJECT_1_5 104
#define OBJECT_1_4 103
#define OBJECT_1_3 102
#define OBJECT_1_2 101
#define OBJECT_1_1 100
#define OBJECT_1_0 99
#define EXECUTE_CACHE_1_50 81
#define EXECUTE_CACHE_1_47 83
#define EXECUTE_CACHE_1_23 85
#define EXECUTE_CACHE_1_21 87
#define EXECUTE_CACHE_1_19 89
#define EXECUTE_CACHE_1_10 91
#define EXECUTE_CACHE_1_8 93
#define FREE_REFERENCE_1_0 96
#define FREE_ASSIGNMENT_1_0 98
#define FREE_REFERENCES_LABEL_1_0 80
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdebug_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd26;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd11;
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
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
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
      goto dump_register_info_38;

    case 1:
      current_block = (Rpc - LABEL_1_7);
      goto lambda_29;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto swapB_64;

    case 3:
      current_block = (Rpc - LABEL_1_11);
      goto label_40;

    case 4:
      current_block = (Rpc - LABEL_1_12);
      goto label_41;

    case 5:
      current_block = (Rpc - LABEL_1_13);
      goto label_42;

    case 6:
      current_block = (Rpc - LABEL_1_9);
      goto lambda_28;

    case 7:
      current_block = (Rpc - LABEL_1_14);
      goto label_43;

    case 8:
      current_block = (Rpc - LABEL_1_15);
      goto label_44;

    case 9:
      current_block = (Rpc - LABEL_1_16);
      goto label_45;

    case 10:
      current_block = (Rpc - LABEL_1_17);
      goto label_46;

    case 11:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_3;

    case 12:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_5;

    case 14:
      current_block = (Rpc - LABEL_1_25);
      goto label_47;

    case 15:
      current_block = (Rpc - LABEL_1_26);
      goto label_48;

    case 16:
      current_block = (Rpc - LABEL_1_27);
      goto label_49;

    case 17:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_8;

    case 18:
      current_block = (Rpc - LABEL_1_28);
      goto continuation_9;

    case 19:
      current_block = (Rpc - LABEL_1_30);
      goto label_50;

    case 20:
      current_block = (Rpc - LABEL_1_31);
      goto label_51;

    case 21:
      current_block = (Rpc - LABEL_1_32);
      goto label_52;

    case 22:
      current_block = (Rpc - LABEL_1_29);
      goto continuation_12;

    case 23:
      current_block = (Rpc - LABEL_1_33);
      goto continuation_13;

    case 24:
      current_block = (Rpc - LABEL_1_35);
      goto label_53;

    case 25:
      current_block = (Rpc - LABEL_1_36);
      goto label_54;

    case 26:
      current_block = (Rpc - LABEL_1_37);
      goto label_55;

    case 27:
      current_block = (Rpc - LABEL_1_34);
      goto continuation_16;

    case 28:
      current_block = (Rpc - LABEL_1_38);
      goto continuation_17;

    case 29:
      current_block = (Rpc - LABEL_1_40);
      goto label_56;

    case 30:
      current_block = (Rpc - LABEL_1_41);
      goto label_57;

    case 31:
      current_block = (Rpc - LABEL_1_42);
      goto label_58;

    case 32:
      current_block = (Rpc - LABEL_1_39);
      goto continuation_20;

    case 33:
      current_block = (Rpc - LABEL_1_43);
      goto label_59;

    case 34:
      current_block = (Rpc - LABEL_1_44);
      goto label_60;

    case 35:
      current_block = (Rpc - LABEL_1_45);
      goto label_61;

    case 36:
      current_block = (Rpc - LABEL_1_48);
      goto continuation_24;

    case 37:
      current_block = (Rpc - LABEL_1_46);
      goto continuation_26;

    case 38:
      current_block = (Rpc - LABEL_1_49);
      goto continuation_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dump_register_info_63)
DEFLABEL (dump_register_info_38)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-1]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd13.pObj)));
  (Rsp [1]) = (Wrd14.Obj);
  ((Wrd16.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd17.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (lambda_65)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_1_7);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (swapB_64)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (swapB_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_75;

DEFLABEL (label_74)
  Wrd5 = Wrd9;

DEFLABEL (label_73)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_72;

DEFLABEL (label_71)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_70)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_69;

DEFLABEL (label_68)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_67)
  Rvl = (current_block [OBJECT_1_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_69)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_68;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_13])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_42)
  goto label_67;

DEFLABEL (label_72)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_71;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_12])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_41)
  goto label_70;

DEFLABEL (label_75)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_74;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_11])), (Wrd6.pObj));

DEFLABEL (label_40)
  (Wrd5.Obj) = Rvl;
  goto label_73;

DEFLABEL (lambda_66)
DEFLABEL (lambda_28)
  INTERRUPT_CHECK (26, LABEL_1_9);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_119;
  Wrd6 = Wrd10;

DEFLABEL (label_118)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_117;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_117;
  (Wrd12.Obj) = ((Wrd16.pObj) [5]);

DEFLABEL (label_116)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_115;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_115;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) (Wrd33.Lng)) < ((unsigned long) (Wrd36.Lng))))
    goto label_115;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd30.Obj));
  (Wrd29.pObj) = (& ((Wrd34.pObj) [(Wrd27.Lng)]));
  (Wrd25.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_114)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_113;
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if ((Wrd54.Lng) > 0)
    goto label_77;

DEFLABEL (label_76)
  Rvl = (current_block [OBJECT_1_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_77)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_112;
  Wrd9 = Wrd13;

DEFLABEL (label_111)
  Wrd8 = Wrd9;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_110;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd21.Lng))))
    goto label_110;
  (Wrd15.Obj) = ((Wrd19.pObj) [4]);

DEFLABEL (label_109)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_108;
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_108;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd39.Lng))))
    goto label_108;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd33.Obj));
  (Wrd31.pObj) = (& ((Wrd37.pObj) [(Wrd29.Lng)]));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_107)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_106;
  Wrd9 = Wrd13;

DEFLABEL (label_105)
  Wrd8 = Wrd9;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_104;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd21.Lng))))
    goto label_104;
  (Wrd15.Obj) = ((Wrd19.pObj) [5]);

DEFLABEL (label_103)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_102;
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_102;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd39.Lng))))
    goto label_102;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd33.Obj));
  (Wrd31.pObj) = (& ((Wrd37.pObj) [(Wrd29.Lng)]));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_101)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_100;
  Wrd9 = Wrd13;

DEFLABEL (label_99)
  Wrd8 = Wrd9;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_98;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd21.Lng))))
    goto label_98;
  (Wrd15.Obj) = ((Wrd19.pObj) [7]);

DEFLABEL (label_97)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_96;
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_96;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd39.Lng))))
    goto label_96;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd33.Obj));
  (Wrd31.pObj) = (& ((Wrd37.pObj) [(Wrd29.Lng)]));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_95)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_1_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_1_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_94;
  Wrd9 = Wrd13;

DEFLABEL (label_93)
  Wrd8 = Wrd9;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_92;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd21.Lng))))
    goto label_92;
  (Wrd15.Obj) = ((Wrd19.pObj) [6]);

DEFLABEL (label_91)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_90;
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_90;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd39.Lng))))
    goto label_90;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd33.Obj));
  (Wrd31.pObj) = (& ((Wrd37.pObj) [(Wrd29.Lng)]));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_89)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_1_39);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_88;
  Wrd6 = Wrd10;

DEFLABEL (label_87)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_86;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_86;
  (Wrd12.Obj) = ((Wrd16.pObj) [4]);

DEFLABEL (label_85)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_84;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_84;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) (Wrd33.Lng)) < ((unsigned long) (Wrd36.Lng))))
    goto label_84;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd30.Obj));
  (Wrd28.pObj) = (& ((Wrd34.pObj) [(Wrd26.Lng)]));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_83)
  (Wrd43.Obj) = (Rsp [0]);
  if (! ((Wrd43.Obj) == (current_block [OBJECT_1_10])))
    goto label_81;
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_46]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_47]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_1_46);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_79;
  (Wrd7.Obj) = (current_block [OBJECT_1_14]);
  (Rsp [1]) = (Wrd7.Obj);
  goto label_78;

DEFLABEL (label_79)
  (Wrd9.Obj) = (current_block [OBJECT_1_13]);
  (Rsp [1]) = (Wrd9.Obj);

DEFLABEL (label_78)
DEFLABEL (label_80)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (label_81)
  if (! ((Wrd43.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_82;
  (Wrd51.Obj) = (current_block [OBJECT_1_11]);
  (Rsp [1]) = (Wrd51.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (label_82)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_48]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (current_block [OBJECT_1_12]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_1_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_50]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_1_49);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (label_84)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_45]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd21.Obj) = (current_block [OBJECT_1_4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_44]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_60)
  (Wrd12.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_43])), (Wrd7.pObj));

DEFLABEL (label_59)
  (Wrd6.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_42]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd24.Obj) = (current_block [OBJECT_1_9]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_41]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_57)
  (Wrd15.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_40])), (Wrd10.pObj));

DEFLABEL (label_56)
  (Wrd9.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_37]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd24.Obj) = (current_block [OBJECT_1_7]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_36]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_54)
  (Wrd15.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_35])), (Wrd10.pObj));

DEFLABEL (label_53)
  (Wrd9.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_32]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd24.Obj) = (current_block [OBJECT_1_1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_31]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_51)
  (Wrd15.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_30])), (Wrd10.pObj));

DEFLABEL (label_50)
  (Wrd9.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd24.Obj) = (current_block [OBJECT_1_4]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_48)
  (Wrd15.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_25])), (Wrd10.pObj));

DEFLABEL (label_47)
  (Wrd9.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_113)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_46)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_76;
  goto label_77;

DEFLABEL (label_115)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_45)
  (Wrd25.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  (Wrd21.Obj) = (current_block [OBJECT_1_1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_44)
  (Wrd12.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_14])), (Wrd7.pObj));

DEFLABEL (label_43)
  (Wrd6.Obj) = Rvl;
  goto label_118;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_7 5
#define TAG_2_8 1
#define LABEL_2_11 7
#define LABEL_2_5 9
#define TAG_2_6 3
#define LABEL_2_12 11
#define LABEL_2_13 13
#define LABEL_2_14 15
#define LABEL_2_10 17
#define LABEL_2_15 19
#define LABEL_2_21 21
#define LABEL_2_16 23
#define TAG_2_17 10
#define LABEL_2_19 25
#define TAG_2_20 11
#define LABEL_2_23 27
#define LABEL_2_25 29
#define LABEL_2_27 31
#define LABEL_2_28 33
#define LABEL_2_31 35
#define LABEL_2_29 37
#define LABEL_2_33 39
#define LABEL_2_32 41
#define LABEL_2_35 43
#define LABEL_2_36 45
#define LABEL_2_37 47
#define LABEL_2_39 49
#define LABEL_2_41 51
#define ENVIRONMENT_LABEL_2_3 87
#define DEBUGGING_LABEL_2_2 86
#define OBJECT_2_10 85
#define OBJECT_2_9 84
#define OBJECT_2_8 83
#define OBJECT_2_7 82
#define OBJECT_2_6 81
#define OBJECT_2_5 80
#define OBJECT_2_4 79
#define OBJECT_2_3 78
#define OBJECT_2_2 77
#define OBJECT_2_1 76
#define OBJECT_2_0 75
#define EXECUTE_CACHE_2_40 53
#define EXECUTE_CACHE_2_38 55
#define EXECUTE_CACHE_2_34 57
#define EXECUTE_CACHE_2_30 59
#define EXECUTE_CACHE_2_26 61
#define EXECUTE_CACHE_2_24 63
#define EXECUTE_CACHE_2_22 65
#define EXECUTE_CACHE_2_18 67
#define EXECUTE_CACHE_2_9 69
#define FREE_REFERENCE_2_0 72
#define FREE_ASSIGNMENT_2_0 74
#define FREE_REFERENCES_LABEL_2_0 52
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdebug_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd30;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_2_4);
      goto dump_block_info_30;

    case 1:
      current_block = (Rpc - LABEL_2_7);
      goto lambda_42;

    case 2:
      current_block = (Rpc - LABEL_2_11);
      goto label_32;

    case 3:
      current_block = (Rpc - LABEL_2_5);
      goto swapB_41;

    case 4:
      current_block = (Rpc - LABEL_2_12);
      goto label_33;

    case 5:
      current_block = (Rpc - LABEL_2_13);
      goto label_34;

    case 6:
      current_block = (Rpc - LABEL_2_14);
      goto label_35;

    case 7:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_2_21);
      goto label_36;

    case 10:
      current_block = (Rpc - LABEL_2_16);
      goto lambda_43;

    case 11:
      current_block = (Rpc - LABEL_2_19);
      goto lambda_44;

    case 12:
      current_block = (Rpc - LABEL_2_23);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_2_25);
      goto continuation_5;

    case 14:
      current_block = (Rpc - LABEL_2_27);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_2_28);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_2_31);
      goto label_37;

    case 17:
      current_block = (Rpc - LABEL_2_29);
      goto lambda_8;

    case 18:
      current_block = (Rpc - LABEL_2_33);
      goto label_38;

    case 19:
      current_block = (Rpc - LABEL_2_32);
      goto continuation_11;

    case 20:
      current_block = (Rpc - LABEL_2_35);
      goto continuation_12;

    case 21:
      current_block = (Rpc - LABEL_2_36);
      goto continuation_13;

    case 22:
      current_block = (Rpc - LABEL_2_37);
      goto continuation_14;

    case 23:
      current_block = (Rpc - LABEL_2_39);
      goto lambda_16;

    case 24:
      current_block = (Rpc - LABEL_2_41);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dump_block_info_40)
DEFLABEL (dump_block_info_30)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd8.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  ((Wrd19.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_7])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  ((Wrd12.pObj) [2]) = (Wrd8.Obj);
  (Rsp [2]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_2_7);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_50;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd21.Lng))))
    goto label_50;
  (Wrd13.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_49)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_16])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_19])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_48;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd22.Lng))))
    goto label_48;
  (Wrd10.Obj) = ((Wrd20.pObj) [3]);

DEFLABEL (label_47)
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_22]));

DEFLABEL (label_48)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [2]);
  (Wrd30.Obj) = (current_block [OBJECT_2_4]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_36)
  (Wrd10.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Wrd29.Obj) = (current_block [OBJECT_2_0]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (swapB_41)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (swapB_28)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_59;

DEFLABEL (label_58)
  Wrd5 = Wrd9;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_56;

DEFLABEL (label_55)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_54)
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
    goto label_53;

DEFLABEL (label_52)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_51)
  Rvl = (current_block [OBJECT_2_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_53)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_52;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_14])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_35)
  goto label_51;

DEFLABEL (label_56)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_55;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_13])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_34)
  goto label_54;

DEFLABEL (label_59)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_58;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_12])), (Wrd6.pObj));

DEFLABEL (label_33)
  (Wrd5.Obj) = Rvl;
  goto label_57;

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_2_16);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 2);

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_2_19);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_24]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_26]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_24]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_29]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_30]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_2_28);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_62;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd13.Lng))))
    goto label_62;
  (Wrd7.Obj) = ((Wrd11.pObj) [11]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_61)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_32]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_7]), 2);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_8]), 1);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_2_35);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  Rvl = (current_block [OBJECT_2_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_36]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_24]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_2_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_38]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_2_37);
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_39]))));
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_40]));

DEFLABEL (label_62)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_2_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_31]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (lambda_45)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_2_29);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_64;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_64;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_63)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_34]));

DEFLABEL (label_64)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_33]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_38)
  (Wrd5.Obj) = Rvl;
  goto label_63;

DEFLABEL (lambda_46)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_2_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_38]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_2_41);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_26]));

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
rdebug_so_700ec04494ad9c3e (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	3,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 2)
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

static const struct liarc_code_S arr_decl_rdebug_so_700ec04494ad9c3e [2] =
  {
    { "rdebug_so_code_1", 39, rdebug_so_code_1 },
    { "rdebug_so_code_2", 25, rdebug_so_code_2 }
  };

int
decl_rdebug_so_700ec04494ad9c3e (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rdebug_so_700ec04494ad9c3e);
  return (0);
}

DECLARE_COMPILED_CODE ("rdebug.so", 3, decl_rdebug_so_700ec04494ad9c3e, rdebug_so_700ec04494ad9c3e)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rdebug_so_data_700ec04494ad9c3e [1187] =
  "\x77\x09\xf6\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x0c\x0c\x0c"
  "\x0d\x85\x0c\x86\x0c\x0c\x83\x0c\xc2\xb9\x84\x1d\x0d\xba\x25\xb2"
  "\x24\x28\x0d\xbb\x28\x0d\x28\x0d\xbc\x28\x0d\xbd\x28\x0d\xbe\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x82\x88\x0c\x0c\xc1\xc2\x02\xc2"
  "\x82\x1d\xc2\xb1\x80\xb2\x25\xb2\x24\x28\xb3\x28\x0d\x28\x0d\x28"
  "\xb4\x28\xb5\x28\x0d\x28\x0d\x28\xb6\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xbe\x99\xbd\x88\xb5\xb6\x2a\xb7\x2a\x99\x0d\x0d\x99\x28\x0d"
  "\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5b\x2f\x55\x73\x65\x72"
  "\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73"
  "\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x2f\x72\x74\x6c\x6f\x70\x74\x2f\x72\x64\x65\x62\x75"
  "\x67\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x10\x3b\x20\x63\x72"
  "\x6f\x73\x73\x65\x73\x20\x63\x61\x6c\x6c\x73\x12\x3b\x20\x6d\x75"
  "\x6c\x74\x69\x70\x6c\x65\x20\x62\x6c\x6f\x63\x6b\x73\x09\x3b\x20"
  "\x62\x6c\x6f\x63\x6b\x20\x0c\x3b\x20\x6e\x6f\x20\x62\x6c\x6f\x63"
  "\x6b\x21\x0a\x6e\x6f\x6e\x2d\x6c\x6f\x63\x61\x6c\x0b\x3b\x20\x6e"
  "\x64\x65\x61\x74\x68\x73\x20\x0a\x3b\x20\x6c\x65\x6e\x67\x74\x68"
  "\x20\x09\x3b\x20\x6e\x72\x65\x66\x73\x20\x0c\x3a\x20\x72\x65\x6e"
  "\x75\x6d\x62\x65\x72\x20\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65"
  "\x66\x02\x11\x2a\x63\x75\x72\x72\x65\x6e\x74\x2d\x72\x67\x72\x61"
  "\x70\x68\x2a\x02\x02\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66"
  "\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x03\x19\x66\x6f\x72\x2d\x65"
  "\x61\x63\x68\x2d\x70\x73\x65\x75\x64\x6f\x2d\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x02\x08\x6e\x65\x77\x6c\x69\x6e\x65\x03\x06\x77\x72"
  "\x69\x74\x65\x03\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e"
  "\x67\x03\x17\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x63\x72\x6f\x73"
  "\x73\x65\x73\x2d\x63\x61\x6c\x6c\x3f\x03\x07\x75\x6e\x68\x61\x73"
  "\x68\x08\x2a\x50\x81\x85\x02\x29\x4e\x81\x85\x02\x28\x4c\x81\x85"
  "\x02\x27\x4a\x81\x83\x02\x26\x48\x81\x83\x02\x25\x46\x81\x83\x02"
  "\x24\x44\x81\x83\x02\x23\x42\x81\x85\x02\x22\x40\x81\x85\x02\x21"
  "\x3e\x81\x85\x02\x20\x3c\x81\x83\x02\x1f\x3a\x81\x83\x02\x1e\x38"
  "\x81\x85\x02\x1d\x36\x81\x85\x02\x1c\x34\x81\x85\x02\x1b\x32\x81"
  "\x83\x02\x1a\x30\x81\x83\x02\x19\x2e\x81\x85\x02\x18\x2c\x81\x85"
  "\x02\x17\x2a\x81\x85\x02\x16\x28\x81\x83\x02\x15\x26\x81\x83\x02"
  "\x14\x24\x81\x85\x02\x13\x22\x81\x85\x02\x12\x20\x81\x85\x02\x11"
  "\x1e\x81\x83\x02\x10\x1c\x81\x83\x02\x0f\x1a\x81\x83\x02\x0e\x18"
  "\x81\x83\x02\x0d\x16\x81\x83\x02\x0c\x14\x81\x83\x02\x0b\x12\x81"
  "\x83\x02\x0a\x10\x83\x04\x09\x0e\x81\x83\x02\x08\x0c\x81\x85\x02"
  "\x07\x0a\x81\x83\x02\x06\x08\x81\x83\x02\x05\x06\x82\x02\x04\x04"
  "\x83\x04\x4f\x74\x02\x02\x20\x17\x52\x65\x67\x69\x73\x74\x65\x72"
  "\x73\x20\x6c\x69\x76\x65\x20\x61\x74\x20\x65\x6e\x64\x3a\x11\x62"
  "\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x7a\x65\x72\x6f\x3f\x11"
  "\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x61\x6e\x64\x63\x21"
  "\x0b\x10\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x73\x65\x74"
  "\x21\x02\x10\x6d\x61\x6b\x65\x2d\x62\x69\x74\x2d\x73\x74\x72\x69"
  "\x6e\x67\x02\x02\x05\x03\x1a\x66\x6f\x72\x2d\x65\x61\x63\x68\x2d"
  "\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x02\x03\x04\x14\x62\x62"
  "\x6c\x6f\x63\x6b\x2d\x77\x61\x6c\x6b\x2d\x66\x6f\x72\x77\x61\x72"
  "\x64\x03\x03\x70\x70\x03\x04\x17\x66\x6f\x72\x2d\x65\x61\x63\x68"
  "\x2d\x72\x65\x67\x73\x65\x74\x2d\x6d\x65\x6d\x62\x65\x72\x0a\x43"
  "\x34\x81\x83\x02\x42\x32\x83\x04\x41\x30\x81\x87\x02\x40\x2e\x81"
  "\x87\x02\x3f\x2c\x81\x87\x02\x3e\x2a\x81\x87\x02\x3d\x28\x81\x83"
  "\x02\x3c\x26\x83\x04\x3b\x24\x81\x85\x02\x3a\x22\x81\x85\x02\x39"
  "\x20\x81\x85\x02\x38\x1e\x81\x85\x02\x37\x1c\x81\x85\x02\x36\x1a"
  "\x81\x85\x02\x35\x18\x81\x85\x02\x34\x16\x81\x85\x02\x33\x14\x81"
  "\x85\x02\x32\x12\x81\x83\x02\x31\x10\x81\x83\x02\x30\x0e\x81\x85"
  "\x02\x2f\x0c\x81\x83\x02\x2e\x0a\x81\x83\x02\x2d\x08\x81\x87\x02"
  "\x2c\x06\x81\x83\x02\x2b\x04\x83\x04\x33\x58\x04\x04\x10\x64\x75"
  "\x6d\x70\x2d\x62\x6c\x6f\x63\x6b\x2d\x69\x6e\x66\x6f\x13\x64\x75"
  "\x6d\x70\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x69\x6e\x66\x6f"
  "\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c"
  "\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81"
  "\x02\x07\x11";

SCHEME_OBJECT *
rdebug_so_data_700ec04494ad9c3e (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rdebug_so_data_700ec04494ad9c3e [0]))), (sizeof (prog_rdebug_so_data_700ec04494ad9c3e)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("rdebug.so", rdebug_so_data_700ec04494ad9c3e)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rdebug.so", "fc7e5022385d254f")
