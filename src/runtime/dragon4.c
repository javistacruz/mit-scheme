/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:31-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_5 3
#define LABEL_1_4 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define LABEL_1_8 11
#define LABEL_1_9 13
#define LABEL_1_10 15
#define LABEL_1_11 17
#define LABEL_1_13 19
#define LABEL_1_14 21
#define LABEL_1_18 23
#define LABEL_1_19 25
#define LABEL_1_20 27
#define LABEL_1_15 29
#define LABEL_1_17 31
#define LABEL_1_22 33
#define LABEL_1_23 35
#define LABEL_1_24 37
#define TAG_1_25 17
#define LABEL_1_26 39
#define LABEL_1_28 41
#define TAG_1_29 19
#define LABEL_1_30 43
#define LABEL_1_32 45
#define TAG_1_33 21
#define LABEL_1_35 47
#define LABEL_1_36 49
#define LABEL_1_37 51
#define TAG_1_38 24
#define LABEL_1_40 53
#define LABEL_1_41 55
#define LABEL_1_42 57
#define ENVIRONMENT_LABEL_1_3 98
#define DEBUGGING_LABEL_1_2 97
#define OBJECT_1_18 96
#define OBJECT_1_17 95
#define OBJECT_1_16 94
#define OBJECT_1_15 93
#define OBJECT_1_14 92
#define OBJECT_1_13 91
#define OBJECT_1_12 90
#define OBJECT_1_11 89
#define OBJECT_1_10 88
#define OBJECT_1_9 87
#define OBJECT_1_8 86
#define OBJECT_1_7 85
#define OBJECT_1_6 84
#define OBJECT_1_5 83
#define OBJECT_1_4 82
#define OBJECT_1_3 81
#define OBJECT_1_2 80
#define OBJECT_1_1 79
#define OBJECT_1_0 78
#define EXECUTE_CACHE_1_43 59
#define EXECUTE_CACHE_1_39 61
#define EXECUTE_CACHE_1_34 63
#define EXECUTE_CACHE_1_31 65
#define EXECUTE_CACHE_1_27 67
#define EXECUTE_CACHE_1_21 69
#define EXECUTE_CACHE_1_16 71
#define EXECUTE_CACHE_1_12 73
#define FREE_REFERENCE_1_1 76
#define FREE_REFERENCE_1_0 77
#define FREE_REFERENCES_LABEL_1_0 58
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dragon4_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd27;
  double Dbl27;
  machine_word Wrd21;
  machine_word Wrd17;
  double Dbl17;
  machine_word Wrd42;
  machine_word Wrd39;
  double Dbl6;
  machine_word Wrd6;
  double Dbl14;
  machine_word Wrd14;
  machine_word Wrd11;
  double Dbl16;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd60;
  double Dbl63;
  double Dbl62;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd45;
  machine_word Wrd51;
  double Dbl44;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd31;
  machine_word Wrd36;
  double Dbl36;
  machine_word Wrd35;
  double Dbl35;
  machine_word Wrd34;
  machine_word Wrd33;
  double Dbl33;
  machine_word Wrd38;
  machine_word Wrd37;
  double Dbl29;
  machine_word Wrd29;
  machine_word Wrd58;
  double Dbl28;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd79;
  double Dbl26;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd90;
  machine_word Wrd24;
  double Dbl24;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd19;
  double Dbl8;
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
      current_block = (Rpc - LABEL_1_5);
      goto continuation_19;

    case 1:
      current_block = (Rpc - LABEL_1_4);
      goto flo___string_33;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_35;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto label_41;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto label_40;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto label_38;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto label_36;

    case 7:
      current_block = (Rpc - LABEL_1_11);
      goto label_37;

    case 8:
      current_block = (Rpc - LABEL_1_13);
      goto label_39;

    case 9:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_27;

    case 10:
      current_block = (Rpc - LABEL_1_18);
      goto lambda_2;

    case 11:
      current_block = (Rpc - LABEL_1_19);
      goto label_43;

    case 12:
      current_block = (Rpc - LABEL_1_20);
      goto label_42;

    case 13:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_30;

    case 14:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_28;

    case 15:
      current_block = (Rpc - LABEL_1_22);
      goto lambda_18;

    case 16:
      current_block = (Rpc - LABEL_1_23);
      goto label_44;

    case 17:
      current_block = (Rpc - LABEL_1_24);
      goto lambda_50;

    case 18:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_16;

    case 19:
      current_block = (Rpc - LABEL_1_28);
      goto lambda_51;

    case 20:
      current_block = (Rpc - LABEL_1_30);
      goto continuation_14;

    case 21:
      current_block = (Rpc - LABEL_1_32);
      goto lambda_52;

    case 22:
      current_block = (Rpc - LABEL_1_35);
      goto continuation_10;

    case 23:
      current_block = (Rpc - LABEL_1_36);
      goto continuation_3;

    case 24:
      current_block = (Rpc - LABEL_1_37);
      goto loop_53;

    case 25:
      current_block = (Rpc - LABEL_1_40);
      goto label_45;

    case 26:
      current_block = (Rpc - LABEL_1_41);
      goto continuation_7;

    case 27:
      current_block = (Rpc - LABEL_1_42);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo___string_47)
DEFLABEL (flo___string_33)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_79;
  Wrd8 = Wrd12;

DEFLABEL (label_78)
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_77;
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_76)
  (Wrd19.Obj) = (Rsp [0]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_54;
  Rvl = (Wrd19.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 6))
    goto label_75;
  Dbl24 = (FLONUM_TO_DOUBLE (Wrd85.Obj));
  if (! (Dbl24 > 0.0))
    goto label_57;

DEFLABEL (label_56)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd84.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd84.Obj);
  goto lambda_2;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_1_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  (Wrd6.Obj) = (current_block [OBJECT_1_17]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (label_55)
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = (& (Rsp [2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd10.pObj)));
  (Rsp [1]) = (Wrd12.Obj);
  Rdl = (& (Rsp [4]));
  goto lambda_18;

DEFLABEL (label_57)
  (Wrd74.Obj) = (Rsp [1]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 6))
    goto label_74;
  Dbl26 = (FLONUM_TO_DOUBLE (Wrd74.Obj));
  if (Dbl26 < 0.0)
    goto label_70;

DEFLABEL (label_69)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 6))
    goto label_68;
  Dbl28 = (FLONUM_TO_DOUBLE (Wrd53.Obj));
  if (Dbl28 == 0.0)
    goto label_60;

DEFLABEL (label_59)
  (Wrd29.Obj) = (current_block [OBJECT_1_3]);
  (Rsp [2]) = (Wrd29.Obj);

DEFLABEL (label_58)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (label_60)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 6))
    goto label_67;
  Dbl33 = (FLONUM_TO_DOUBLE (Wrd37.Obj));
  (Wrd34.Obj) = (current_block [OBJECT_1_4]);
  Dbl35 = (FLONUM_TO_DOUBLE (Wrd34.Obj));
  Dbl36 = (DOUBLE_ATAN2 (Dbl33, Dbl35));
  INLINE_DOUBLE_TO_FLONUM (Dbl36, (Wrd31.Obj));

DEFLABEL (label_66)
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd47.uLng) == 6))
    goto label_65;
  Dbl44 = (FLONUM_TO_DOUBLE (Wrd31.Obj));
  if (Dbl44 < 0.0)
    goto label_62;

DEFLABEL (label_63)
  (Wrd45.Obj) = (current_block [OBJECT_1_6]);
  goto label_61;

DEFLABEL (label_62)
  (Wrd45.Obj) = (current_block [OBJECT_1_7]);

DEFLABEL (label_61)
DEFLABEL (label_64)
  (Rsp [2]) = (Wrd45.Obj);
  goto label_58;

DEFLABEL (label_65)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  goto label_62;

DEFLABEL (label_67)
  (Wrd40.Obj) = (current_block [OBJECT_1_4]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_36)
  (Wrd31.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_68)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_60;

DEFLABEL (label_70)
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 6))
    goto label_73;
  Dbl62 = (FLONUM_TO_DOUBLE (Wrd64.Obj));
  Dbl63 = (- Dbl62);
  INLINE_DOUBLE_TO_FLONUM (Dbl63, (Wrd60.Obj));

DEFLABEL (label_72)
  (Rsp [0]) = (Wrd60.Obj);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  goto lambda_2;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_1_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  (Wrd6.Obj) = (current_block [OBJECT_1_10]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (label_71)
  (Wrd8.Obj) = (current_block [OBJECT_1_9]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.pObj) = (& (Rsp [2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  Rdl = (& (Rsp [2]));
  goto lambda_18;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (label_73)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_8]), 1);

DEFLABEL (label_39)
  (Wrd60.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_74)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_40)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  goto label_70;

DEFLABEL (label_75)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  goto label_56;

DEFLABEL (label_77)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd9.pObj));

DEFLABEL (label_35)
  (Wrd8.Obj) = Rvl;
  goto label_78;

DEFLABEL (lambda_48)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_1_18);
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 6))
    goto label_89;
  Dbl6 = (FLONUM_TO_DOUBLE (Wrd36.Obj));
  (Wrd7.Obj) = (current_block [OBJECT_1_11]);
  Dbl8 = (FLONUM_TO_DOUBLE (Wrd7.Obj));
  if (Dbl6 > Dbl8)
    goto label_81;

DEFLABEL (label_80)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd11.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd19.uLng) == 6))
    goto label_88;
  Dbl14 = (FLONUM_TO_DOUBLE (Wrd11.Obj));
  (Wrd15.Obj) = (current_block [OBJECT_1_13]);
  Dbl16 = (FLONUM_TO_DOUBLE (Wrd15.Obj));
  Dbl17 = (Dbl14 / Dbl16);
  INLINE_DOUBLE_TO_FLONUM (Dbl17, (Wrd12.Obj));

DEFLABEL (label_87)
  (Rsp [1]) = (Wrd12.Obj);
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 6)
    goto label_83;

DEFLABEL (label_82)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_16]), 2);

DEFLABEL (label_83)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd33.uLng) == 6))
    goto label_82;
  Dbl27 = (FLONUM_TO_DOUBLE (Wrd34.Obj));
  Dbl29 = (FLONUM_TO_DOUBLE (Wrd12.Obj));
  if (Dbl27 == Dbl29)
    goto label_85;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_84;

DEFLABEL (label_85)
  Rvl = (current_block [OBJECT_1_15]);

DEFLABEL (label_84)
DEFLABEL (label_86)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_88)
  (Wrd21.Obj) = (current_block [OBJECT_1_13]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_14]), 2);

DEFLABEL (label_42)
  (Wrd12.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_89)
  (Wrd39.Obj) = (current_block [OBJECT_1_11]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_12]), 2);

DEFLABEL (label_43)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_80;
  goto label_81;

DEFLABEL (lambda_49)
DEFLABEL (lambda_18)
  DLINK_INTERRUPT_CHECK (25, LABEL_1_22);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd13.Obj) = ((Wrd6.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_91;
  Wrd5 = Wrd13;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_24])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd19 = Wrd16;
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  ((Wrd19.pObj) [2]) = (Wrd22.Obj);
  ((Wrd19.pObj) [3]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd29.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_1_26);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_91)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_23])), (Wrd6.pObj));

DEFLABEL (label_44)
  (Wrd7.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd5.Obj) = Rvl;
  goto label_90;

DEFLABEL (lambda_50)
  CLOSURE_HEADER (LABEL_1_24);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_28])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd18.pObj) [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [5]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_30]))));
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_31]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_1_30);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_1_28);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_32])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd19 = Wrd16;
  (Wrd22.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd19.pObj) [2]) = (Wrd22.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Rsp [6]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_34]));

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_1_32);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_37])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  Wrd17 = Wrd21;
  (Wrd18.Obj) = (Rsp [6]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  ((Wrd17.pObj) [2]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd22.Obj);
  goto loop_8;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_36);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_39]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_35);
  (* (--Rsp)) = Rvl;
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (loop_53)
  CLOSURE_HEADER (LABEL_1_37);

DEFLABEL (loop_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_94;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd20.Lng) < 0))
    goto label_93;

DEFLABEL (label_92)
  Rvl = (current_block [OBJECT_1_18]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_93)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_41]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_41);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_43]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_42);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_94)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_40]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_45)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_93;
  goto label_92;

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
#define LABEL_2_21 27
#define LABEL_2_17 29
#define LABEL_2_18 31
#define LABEL_2_20 33
#define LABEL_2_26 35
#define ENVIRONMENT_LABEL_2_3 57
#define DEBUGGING_LABEL_2_2 56
#define OBJECT_2_4 55
#define OBJECT_2_3 54
#define OBJECT_2_2 53
#define OBJECT_2_1 52
#define OBJECT_2_0 51
#define EXECUTE_CACHE_2_27 37
#define EXECUTE_CACHE_2_25 39
#define EXECUTE_CACHE_2_24 41
#define EXECUTE_CACHE_2_23 43
#define EXECUTE_CACHE_2_22 45
#define EXECUTE_CACHE_2_19 47
#define EXECUTE_CACHE_2_7 49
#define FREE_REFERENCES_LABEL_2_0 36
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dragon4_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd141;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd130;
  machine_word Wrd125;
  machine_word Wrd129;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd105;
  machine_word Wrd103;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd113;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd73;
  machine_word Wrd132;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd143;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto flonum_unparser_normal_output_18;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_2_11);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_2_12);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_2_13);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_2_14);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_2_15);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_2_16);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_2_21);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_2_17);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_2_20);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_2_26);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flonum_unparser_normal_output_32)
DEFLABEL (flonum_unparser_normal_output_18)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_58;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd13.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_58;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_57)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_56;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_55)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_54;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_54;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd24.Lng) = ((Wrd26.Lng) - (Wrd27.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_54;
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_53)
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 30))
    goto label_52;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (Wrd29.Obj) = (MAKE_OBJECT (26, (Wrd33.uLng)));

DEFLABEL (label_51)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_50;
  (Wrd143.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! ((Wrd143.Lng) == 0))
    goto label_34;

DEFLABEL (label_33)
  (Wrd141.Obj) = (current_block [OBJECT_2_4]);
  (Rsp [5]) = (Wrd141.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_24]));

DEFLABEL (label_34)
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 26))
    goto label_49;
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  (Wrd54.Lng) = (0 - (Wrd58.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd54.Lng)))
    goto label_49;
  (Wrd51.Obj) = (LONG_TO_FIXNUM (Wrd54.Lng));

DEFLABEL (label_48)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 26))
    goto label_47;
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd61.uLng) == 26))
    goto label_47;
  (Wrd139.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd140.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! ((Wrd139.Lng) < (Wrd140.Lng)))
    goto label_36;

DEFLABEL (label_35)
  (Wrd133.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd133.Obj);
  (Wrd134.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd134.Obj);
  (Wrd135.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd135.Obj);
  (Wrd136.Obj) = (current_block [OBJECT_2_1]);
  (Rsp [5]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_23]));

DEFLABEL (label_36)
  (Wrd68.Obj) = (Rsp [4]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 26))
    goto label_46;
  (Wrd132.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if ((Wrd132.Lng) < 0)
    goto label_44;

DEFLABEL (label_43)
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 26))
    goto label_42;
  (Wrd113.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! ((Wrd113.Lng) < 0))
    goto label_38;

DEFLABEL (label_37)
  (Wrd106.Obj) = (current_block [OBJECT_2_3]);
  (Rsp [4]) = (Wrd106.Obj);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd110.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd110.Obj);
  (Wrd111.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd111.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_19]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (Rsp [5]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_2_26);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (label_38)
  (Wrd82.Obj) = (Rsp [4]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 26))
    goto label_41;
  (Wrd84.Obj) = (Rsp [1]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 26))
    goto label_41;
  (Wrd103.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  (Wrd105.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  if ((Wrd103.Lng) > (Wrd105.Lng))
    goto label_35;

DEFLABEL (label_40)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd95.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd96.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd96.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_22]));

DEFLABEL (label_41)
  (Wrd86.Obj) = (Rsp [4]);
  (Wrd87.Obj) = (Rsp [1]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  goto label_35;

DEFLABEL (label_42)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  goto label_37;

DEFLABEL (label_44)
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (Wrd117.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd117.Obj);
  (Wrd123.Obj) = (Rsp [4]);
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd123.Obj));
  if (! ((Wrd124.uLng) == 26))
    goto label_45;
  (Wrd129.Lng) = (FIXNUM_TO_LONG (Wrd123.Obj));
  (Wrd125.Lng) = (0 - (Wrd129.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd125.Lng)))
    goto label_45;
  (Wrd130.Obj) = (LONG_TO_FIXNUM (Wrd125.Lng));
  (* (--Rsp)) = (Wrd130.Obj);
  goto label_39;

DEFLABEL (label_45)
  (Wrd118.Obj) = (current_block [OBJECT_2_1]);
  (Wrd119.Obj) = (Rsp [4]);
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_46)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_44;

DEFLABEL (label_47)
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto label_35;

DEFLABEL (label_49)
  (Wrd46.Obj) = (current_block [OBJECT_2_1]);
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_25)
  (Wrd51.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_50)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_33;

DEFLABEL (label_52)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_23)
  (Wrd29.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_17);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_2_3]);
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_2_20);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [5]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_2_3]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 9
#define DEBUGGING_LABEL_3_2 8
#define OBJECT_3_0 7
#define EXECUTE_CACHE_3_5 5
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dragon4_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_3_4);
      goto flonum_unparser_scientific_output_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flonum_unparser_scientific_output_3)
DEFLABEL (flonum_unparser_scientific_output_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [3]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 13
#define DEBUGGING_LABEL_4_2 12
#define OBJECT_4_0 11
#define EXECUTE_CACHE_4_7 7
#define EXECUTE_CACHE_4_6 9
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dragon4_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_4_4);
      goto flonum_unparser_engineering_output_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flonum_unparser_engineering_output_4)
DEFLABEL (flonum_unparser_engineering_output_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_6 5
#define LABEL_5_5 7
#define LABEL_5_8 9
#define LABEL_5_9 11
#define LABEL_5_10 13
#define LABEL_5_11 15
#define LABEL_5_12 17
#define LABEL_5_17 19
#define LABEL_5_13 21
#define LABEL_5_16 23
#define LABEL_5_20 25
#define ENVIRONMENT_LABEL_5_3 49
#define DEBUGGING_LABEL_5_2 48
#define OBJECT_5_4 47
#define OBJECT_5_3 46
#define OBJECT_5_2 45
#define OBJECT_5_1 44
#define OBJECT_5_0 43
#define EXECUTE_CACHE_5_21 27
#define EXECUTE_CACHE_5_18 29
#define EXECUTE_CACHE_5_23 31
#define EXECUTE_CACHE_5_22 33
#define EXECUTE_CACHE_5_19 35
#define EXECUTE_CACHE_5_15 37
#define EXECUTE_CACHE_5_14 39
#define EXECUTE_CACHE_5_7 41
#define FREE_REFERENCES_LABEL_5_0 26
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dragon4_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd82;
  machine_word Wrd77;
  machine_word Wrd81;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd86;
  machine_word Wrd84;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd91;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_5_4);
      goto scientific_output_12;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_5_10);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_5_11);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_5_12);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_5_17);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_5_16);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_5_20);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scientific_output_22)
DEFLABEL (scientific_output_12)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_39;
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_39;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) - (Wrd22.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_39;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_37;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd13.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_37;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_36)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 30))
    goto label_35;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (Wrd19.Obj) = (MAKE_OBJECT (26, (Wrd18.uLng)));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_34)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_33;
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! ((Wrd91.Lng) == 0))
    goto label_24;

DEFLABEL (label_23)
  (Wrd87.Obj) = (current_block [OBJECT_5_3]);
  (Rsp [5]) = (Wrd87.Obj);
  (Wrd88.Obj) = (Rsp [2]);
  (Rsp [6]) = (Wrd88.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_19]));

DEFLABEL (label_24)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_32;
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_32;
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if ((Wrd84.Lng) < (Wrd86.Lng))
    goto label_29;

DEFLABEL (label_28)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_27;
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_27;
  if (! ((Wrd43.Obj) == (Wrd45.Obj)))
    goto label_26;

DEFLABEL (label_25)
  (Wrd58.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd58.Obj);
  (Wrd59.Obj) = (current_block [OBJECT_5_1]);
  (Rsp [5]) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [2]);
  (Rsp [6]) = (Wrd60.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (label_26)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_13);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_5_1]);
  (Rsp [5]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [6]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_20);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_5_4]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (label_27)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_25;

DEFLABEL (label_29)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd73.Obj) = (Rsp [3]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 26))
    goto label_31;
  (Wrd75.Obj) = (Rsp [2]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 26))
    goto label_31;
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  (Wrd77.Lng) = ((Wrd79.Lng) - (Wrd81.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd77.Lng)))
    goto label_31;
  (Wrd82.Obj) = (LONG_TO_FIXNUM (Wrd77.Lng));
  (* (--Rsp)) = (Wrd82.Obj);

DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_16);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_5_1]);
  (Rsp [5]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [6]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_22]));

DEFLABEL (label_31)
  (Wrd68.Obj) = (Rsp [3]);
  (Wrd69.Obj) = (Rsp [2]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_29;

DEFLABEL (label_33)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_23;

DEFLABEL (label_35)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_38;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_5 3
#define LABEL_6_7 5
#define LABEL_6_8 7
#define LABEL_6_9 9
#define LABEL_6_11 11
#define LABEL_6_12 13
#define LABEL_6_13 15
#define LABEL_6_14 17
#define LABEL_6_15 19
#define LABEL_6_16 21
#define LABEL_6_17 23
#define LABEL_6_18 25
#define LABEL_6_19 27
#define LABEL_6_20 29
#define LABEL_6_21 31
#define LABEL_6_22 33
#define LABEL_6_23 35
#define LABEL_6_24 37
#define LABEL_6_25 39
#define LABEL_6_26 41
#define LABEL_6_27 43
#define LABEL_6_30 45
#define LABEL_6_31 47
#define LABEL_6_32 49
#define LABEL_6_33 51
#define LABEL_6_35 53
#define LABEL_6_36 55
#define LABEL_6_37 57
#define LABEL_6_38 59
#define LABEL_6_39 61
#define LABEL_6_40 63
#define LABEL_6_41 65
#define LABEL_6_42 67
#define LABEL_6_43 69
#define LABEL_6_44 71
#define LABEL_6_45 73
#define LABEL_6_4 75
#define LABEL_6_46 77
#define LABEL_6_47 79
#define LABEL_6_50 81
#define LABEL_6_51 83
#define LABEL_6_52 85
#define LABEL_6_53 87
#define LABEL_6_54 89
#define LABEL_6_55 91
#define LABEL_6_56 93
#define LABEL_6_57 95
#define LABEL_6_60 97
#define LABEL_6_59 99
#define LABEL_6_62 101
#define LABEL_6_48 103
#define TAG_6_49 50
#define LABEL_6_63 105
#define TAG_6_64 51
#define LABEL_6_28 107
#define TAG_6_29 52
#define ENVIRONMENT_LABEL_6_3 138
#define DEBUGGING_LABEL_6_2 137
#define OBJECT_6_14 136
#define OBJECT_6_13 135
#define OBJECT_6_12 134
#define OBJECT_6_11 133
#define OBJECT_6_10 132
#define OBJECT_6_9 131
#define OBJECT_6_8 130
#define OBJECT_6_7 129
#define OBJECT_6_6 128
#define OBJECT_6_5 127
#define OBJECT_6_4 126
#define OBJECT_6_3 125
#define OBJECT_6_2 124
#define OBJECT_6_1 123
#define OBJECT_6_0 122
#define EXECUTE_CACHE_6_61 109
#define EXECUTE_CACHE_6_58 111
#define EXECUTE_CACHE_6_34 113
#define EXECUTE_CACHE_6_10 115
#define EXECUTE_CACHE_6_6 117
#define FREE_REFERENCE_6_1 120
#define FREE_REFERENCE_6_0 121
#define FREE_REFERENCES_LABEL_6_0 108
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dragon4_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd210;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd96;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd209;
  machine_word Wrd208;
  machine_word Wrd205;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd201;
  machine_word Wrd198;
  machine_word Wrd192;
  machine_word Wrd193;
  machine_word Wrd194;
  machine_word Wrd191;
  machine_word Wrd185;
  machine_word Wrd186;
  machine_word Wrd187;
  machine_word Wrd179;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd180;
  machine_word Wrd177;
  machine_word Wrd173;
  machine_word Wrd167;
  machine_word Wrd168;
  machine_word Wrd169;
  machine_word Wrd166;
  machine_word Wrd160;
  machine_word Wrd161;
  machine_word Wrd162;
  machine_word Wrd159;
  machine_word Wrd153;
  machine_word Wrd154;
  machine_word Wrd155;
  machine_word Wrd147;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd148;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd138;
  machine_word Wrd139;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd131;
  machine_word Wrd132;
  machine_word Wrd133;
  machine_word Wrd125;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd263;
  machine_word Wrd258;
  machine_word Wrd257;
  machine_word Wrd259;
  machine_word Wrd256;
  machine_word Wrd250;
  machine_word Wrd251;
  machine_word Wrd252;
  machine_word Wrd249;
  machine_word Wrd243;
  machine_word Wrd244;
  machine_word Wrd245;
  machine_word Wrd237;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd238;
  machine_word Wrd322;
  machine_word Wrd324;
  machine_word Wrd326;
  machine_word Wrd325;
  machine_word Wrd319;
  machine_word Wrd320;
  machine_word Wrd317;
  machine_word Wrd312;
  machine_word Wrd311;
  machine_word Wrd313;
  machine_word Wrd305;
  machine_word Wrd310;
  machine_word Wrd309;
  machine_word Wrd306;
  machine_word Wrd297;
  machine_word Wrd293;
  machine_word Wrd303;
  machine_word Wrd299;
  machine_word Wrd302;
  machine_word Wrd298;
  machine_word Wrd292;
  machine_word Wrd286;
  machine_word Wrd287;
  machine_word Wrd288;
  machine_word Wrd285;
  machine_word Wrd279;
  machine_word Wrd280;
  machine_word Wrd281;
  machine_word Wrd273;
  machine_word Wrd278;
  machine_word Wrd277;
  machine_word Wrd274;
  machine_word Wrd266;
  machine_word Wrd271;
  machine_word Wrd270;
  machine_word Wrd267;
  machine_word Wrd234;
  machine_word Wrd228;
  machine_word Wrd229;
  machine_word Wrd230;
  machine_word Wrd227;
  machine_word Wrd221;
  machine_word Wrd222;
  machine_word Wrd223;
  machine_word Wrd215;
  machine_word Wrd220;
  machine_word Wrd219;
  machine_word Wrd216;
  machine_word Wrd213;
  machine_word Wrd122;
  machine_word Wrd116;
  machine_word Wrd117;
  machine_word Wrd118;
  machine_word Wrd115;
  machine_word Wrd109;
  machine_word Wrd110;
  machine_word Wrd111;
  machine_word Wrd103;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd359;
  machine_word Wrd363;
  machine_word Wrd361;
  machine_word Wrd360;
  machine_word Wrd353;
  machine_word Wrd352;
  machine_word Wrd351;
  machine_word Wrd339;
  machine_word Wrd343;
  machine_word Wrd342;
  machine_word Wrd341;
  machine_word Wrd347;
  machine_word Wrd337;
  machine_word Wrd376;
  machine_word Wrd336;
  machine_word Wrd334;
  machine_word Wrd371;
  machine_word Wrd368;
  machine_word Wrd332;
  machine_word Wrd331;
  machine_word Wrd388;
  machine_word Wrd387;
  machine_word Wrd394;
  machine_word Wrd393;
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
      current_block = (Rpc - LABEL_6_5);
      goto continuation_31;

    case 1:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_9;

    case 2:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_44;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_30;

    case 4:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_29;

    case 5:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_6_13);
      goto label_94;

    case 7:
      current_block = (Rpc - LABEL_6_14);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_6_15);
      goto label_66;

    case 9:
      current_block = (Rpc - LABEL_6_16);
      goto label_67;

    case 10:
      current_block = (Rpc - LABEL_6_17);
      goto label_68;

    case 11:
      current_block = (Rpc - LABEL_6_18);
      goto label_80;

    case 12:
      current_block = (Rpc - LABEL_6_19);
      goto label_81;

    case 13:
      current_block = (Rpc - LABEL_6_20);
      goto label_82;

    case 14:
      current_block = (Rpc - LABEL_6_21);
      goto label_87;

    case 15:
      current_block = (Rpc - LABEL_6_22);
      goto label_88;

    case 16:
      current_block = (Rpc - LABEL_6_23);
      goto label_89;

    case 17:
      current_block = (Rpc - LABEL_6_24);
      goto label_90;

    case 18:
      current_block = (Rpc - LABEL_6_25);
      goto label_91;

    case 19:
      current_block = (Rpc - LABEL_6_26);
      goto label_92;

    case 20:
      current_block = (Rpc - LABEL_6_27);
      goto label_93;

    case 21:
      current_block = (Rpc - LABEL_6_30);
      goto label_83;

    case 22:
      current_block = (Rpc - LABEL_6_31);
      goto label_84;

    case 23:
      current_block = (Rpc - LABEL_6_32);
      goto label_85;

    case 24:
      current_block = (Rpc - LABEL_6_33);
      goto label_86;

    case 25:
      current_block = (Rpc - LABEL_6_35);
      goto label_69;

    case 26:
      current_block = (Rpc - LABEL_6_36);
      goto label_70;

    case 27:
      current_block = (Rpc - LABEL_6_37);
      goto label_71;

    case 28:
      current_block = (Rpc - LABEL_6_38);
      goto label_72;

    case 29:
      current_block = (Rpc - LABEL_6_39);
      goto label_73;

    case 30:
      current_block = (Rpc - LABEL_6_40);
      goto label_74;

    case 31:
      current_block = (Rpc - LABEL_6_41);
      goto label_75;

    case 32:
      current_block = (Rpc - LABEL_6_42);
      goto label_76;

    case 33:
      current_block = (Rpc - LABEL_6_43);
      goto label_77;

    case 34:
      current_block = (Rpc - LABEL_6_44);
      goto label_78;

    case 35:
      current_block = (Rpc - LABEL_6_45);
      goto label_79;

    case 36:
      current_block = (Rpc - LABEL_6_4);
      goto flonum_unparser_cutoff_args_52;

    case 37:
      current_block = (Rpc - LABEL_6_46);
      goto label_54;

    case 38:
      current_block = (Rpc - LABEL_6_47);
      goto label_64;

    case 39:
      current_block = (Rpc - LABEL_6_50);
      goto label_55;

    case 40:
      current_block = (Rpc - LABEL_6_51);
      goto label_57;

    case 41:
      current_block = (Rpc - LABEL_6_52);
      goto label_58;

    case 42:
      current_block = (Rpc - LABEL_6_53);
      goto label_59;

    case 43:
      current_block = (Rpc - LABEL_6_54);
      goto label_60;

    case 44:
      current_block = (Rpc - LABEL_6_55);
      goto label_61;

    case 45:
      current_block = (Rpc - LABEL_6_56);
      goto label_62;

    case 46:
      current_block = (Rpc - LABEL_6_57);
      goto label_63;

    case 47:
      current_block = (Rpc - LABEL_6_60);
      goto label_56;

    case 48:
      current_block = (Rpc - LABEL_6_59);
      goto continuation_34;

    case 49:
      current_block = (Rpc - LABEL_6_62);
      goto label_65;

    case 50:
      current_block = (Rpc - LABEL_6_48);
      goto lambda_98;

    case 51:
      current_block = (Rpc - LABEL_6_63);
      goto lambda_99;

    case 52:
      current_block = (Rpc - LABEL_6_28);
      goto lambda_96;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flonum_unparser_cutoff_args_97)
DEFLABEL (flonum_unparser_cutoff_args_52)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_127;
  Wrd6 = Wrd10;

DEFLABEL (label_126)
  if ((Wrd6.Obj) == (current_block [OBJECT_6_12]))
    goto label_123;
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_122;
  Wrd14 = Wrd18;

DEFLABEL (label_121)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd20.uLng) == 1)
    goto label_105;

DEFLABEL (label_104)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_59]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_103;
  Wrd24 = Wrd28;

DEFLABEL (label_102)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_6_14]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_61]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_6_59);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_101;
  Wrd5 = Wrd9;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_64);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_63])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  ((Wrd13.pObj) [2]) = (Wrd5.Obj);
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_62])), (Wrd6.pObj));

DEFLABEL (label_65)
  (Wrd5.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_60])), (Wrd25.pObj));

DEFLABEL (label_56)
  (Wrd24.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_120;
  Wrd32 = Wrd36;

DEFLABEL (label_119)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_118;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd38.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_117)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_104;
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_116;
  Wrd50 = Wrd54;

DEFLABEL (label_115)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_114;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd56.Obj) = ((Wrd57.pObj) [1]);

DEFLABEL (label_113)
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_112;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_111)
  (Wrd72.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd75.Obj) = ((Wrd72.pObj) [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if ((Wrd76.uLng) == 50)
    goto label_110;
  Wrd71 = Wrd75;

DEFLABEL (label_109)
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd79.uLng) == 1))
    goto label_108;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [0]);
  (* (--Rsp)) = (Wrd78.Obj);

DEFLABEL (label_107)
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = (current_block [OBJECT_6_13]);
  (* (--Rsp)) = (Wrd87.Obj);

DEFLABEL (label_106)
  (Wrd210.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd210.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_58]));

DEFLABEL (label_108)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_57]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_9]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_56])), (Wrd72.pObj));

DEFLABEL (label_62)
  (Wrd71.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_55]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_9]), 1);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_54]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_60)
  (Wrd56.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_53])), (Wrd51.pObj));

DEFLABEL (label_59)
  (Wrd50.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_52]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_58)
  (Wrd38.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_51])), (Wrd33.pObj));

DEFLABEL (label_57)
  (Wrd32.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_50])), (Wrd15.pObj));

DEFLABEL (label_55)
  (Wrd14.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_123)
  (Wrd90.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd93.Obj) = ((Wrd90.pObj) [0]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if ((Wrd94.uLng) == 50)
    goto label_125;
  Wrd89 = Wrd93;

DEFLABEL (label_124)
  (* (--Rsp)) = (Wrd89.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd97.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_49);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_48])));
  Rhp += 1;
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd97.pObj)));
  ((Wrd97.pObj) [2]) = (Wrd89.Obj);
  Rvl = (Wrd96.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_125)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_47])), (Wrd90.pObj));

DEFLABEL (label_64)
  (Wrd89.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_46])), (Wrd7.pObj));

DEFLABEL (label_54)
  (Wrd6.Obj) = Rvl;
  goto label_126;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_200;
  (Wrd331.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd331.Obj);
  (Wrd332.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd332.Obj);
  (Wrd368.Obj) = (current_block [OBJECT_6_1]);
  (Wrd371.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd371.Lng))))
    goto label_204;
  (Wrd334.uLng) = (OBJECT_DATUM (Wrd368.Obj));
  (Wrd336.uLng) = (OBJECT_TYPE (Wrd332.Obj));
  if ((Wrd334.Obj) == (Wrd336.Obj))
    goto label_203;

DEFLABEL (label_202)
  (Wrd337.Obj) = (current_block [OBJECT_6_3]);
  (* (--Rsp)) = (Wrd337.Obj);
  (Wrd347.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd347.Lng)))
    goto label_128;
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 2);

DEFLABEL (label_128)
  (Wrd341.uLng) = (OBJECT_DATUM (Wrd337.Obj));
  (Wrd342.Obj) = (Rsp [1]);
  (Wrd343.uLng) = (OBJECT_TYPE (Wrd342.Obj));
  if ((Wrd341.Obj) == (Wrd343.Obj))
    goto label_130;
  (Wrd339.Obj) = (current_block [OBJECT_6_5]);
  goto label_129;

DEFLABEL (label_130)
  (Wrd339.Obj) = (current_block [OBJECT_6_4]);

DEFLABEL (label_129)
DEFLABEL (label_201)
  Rsp = (& (Rsp [3]));
  if ((Wrd339.Obj) == ((SCHEME_OBJECT) 0))
    goto label_200;

DEFLABEL (label_199)
  (Wrd351.Obj) = (Rsp [0]);
  if ((Wrd351.Obj) == (current_block [OBJECT_6_6]))
    goto label_132;
  (Wrd352.Obj) = (current_block [OBJECT_6_4]);
  (* (--Rsp)) = (Wrd352.Obj);
  goto label_131;

DEFLABEL (label_132)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_131)
DEFLABEL (label_198)
  (Wrd353.Obj) = (Rsp [0]);
  if ((Wrd353.Obj) == ((SCHEME_OBJECT) 0))
    goto label_193;
  Rsp = (& (Rsp [4]));
  if ((Wrd353.Obj) == ((SCHEME_OBJECT) 0))
    goto label_104;

DEFLABEL (label_192)
  (Wrd104.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd107.Obj) = ((Wrd104.pObj) [0]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if ((Wrd108.uLng) == 50)
    goto label_191;
  Wrd103 = Wrd107;

DEFLABEL (label_190)
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd111.uLng) == 1))
    goto label_189;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd109.Obj) = ((Wrd110.pObj) [1]);

DEFLABEL (label_188)
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd118.uLng) == 1))
    goto label_187;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd116.Obj) = ((Wrd117.pObj) [1]);

DEFLABEL (label_186)
  if ((Wrd116.Obj) == (current_block [OBJECT_6_8]))
    goto label_155;
  (Wrd126.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd129.Obj) = ((Wrd126.pObj) [0]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if ((Wrd130.uLng) == 50)
    goto label_154;
  Wrd125 = Wrd129;

DEFLABEL (label_153)
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if (! ((Wrd133.uLng) == 1))
    goto label_152;
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd125.Obj));
  (Wrd131.Obj) = ((Wrd132.pObj) [1]);

DEFLABEL (label_151)
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if (! ((Wrd140.uLng) == 1))
    goto label_150;
  (Wrd139.pObj) = (OBJECT_ADDRESS (Wrd131.Obj));
  (Wrd138.Obj) = ((Wrd139.pObj) [1]);

DEFLABEL (label_149)
  (Wrd145.uLng) = (OBJECT_TYPE (Wrd138.Obj));
  if (! ((Wrd145.uLng) == 1))
    goto label_104;
  (Wrd148.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd151.Obj) = ((Wrd148.pObj) [0]);
  (Wrd152.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if ((Wrd152.uLng) == 50)
    goto label_148;
  Wrd147 = Wrd151;

DEFLABEL (label_147)
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if (! ((Wrd155.uLng) == 1))
    goto label_146;
  (Wrd154.pObj) = (OBJECT_ADDRESS (Wrd147.Obj));
  (Wrd153.Obj) = ((Wrd154.pObj) [1]);

DEFLABEL (label_145)
  (Wrd162.uLng) = (OBJECT_TYPE (Wrd153.Obj));
  if (! ((Wrd162.uLng) == 1))
    goto label_144;
  (Wrd161.pObj) = (OBJECT_ADDRESS (Wrd153.Obj));
  (Wrd160.Obj) = ((Wrd161.pObj) [1]);

DEFLABEL (label_143)
  (Wrd169.uLng) = (OBJECT_TYPE (Wrd160.Obj));
  if (! ((Wrd169.uLng) == 1))
    goto label_142;
  (Wrd168.pObj) = (OBJECT_ADDRESS (Wrd160.Obj));
  (Wrd167.Obj) = ((Wrd168.pObj) [1]);

DEFLABEL (label_141)
  if (! ((Wrd167.Obj) == (current_block [OBJECT_6_8])))
    goto label_104;
  (Wrd177.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd177.Obj);
  (Wrd180.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd183.Obj) = ((Wrd180.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_140;
  Wrd179 = Wrd183;

DEFLABEL (label_139)
  (Wrd187.uLng) = (OBJECT_TYPE (Wrd179.Obj));
  if (! ((Wrd187.uLng) == 1))
    goto label_138;
  (Wrd186.pObj) = (OBJECT_ADDRESS (Wrd179.Obj));
  (Wrd185.Obj) = ((Wrd186.pObj) [1]);

DEFLABEL (label_137)
  (Wrd194.uLng) = (OBJECT_TYPE (Wrd185.Obj));
  if (! ((Wrd194.uLng) == 1))
    goto label_136;
  (Wrd193.pObj) = (OBJECT_ADDRESS (Wrd185.Obj));
  (Wrd192.Obj) = ((Wrd193.pObj) [1]);

DEFLABEL (label_135)
  (Wrd201.uLng) = (OBJECT_TYPE (Wrd192.Obj));
  if (! ((Wrd201.uLng) == 1))
    goto label_134;
  (Wrd199.pObj) = (OBJECT_ADDRESS (Wrd192.Obj));
  (Wrd200.Obj) = ((Wrd199.pObj) [0]);
  (* (--Rsp)) = (Wrd200.Obj);

DEFLABEL (label_133)
  (Wrd208.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd208.Obj);
  (Wrd209.Obj) = (current_block [OBJECT_6_11]);
  (* (--Rsp)) = (Wrd209.Obj);
  goto label_106;

DEFLABEL (label_134)
  (Wrd205.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_45]))));
  (* (--Rsp)) = (Wrd205.Obj);
  (* (--Rsp)) = (Wrd192.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_9]), 1);

DEFLABEL (label_79)
  (* (--Rsp)) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  (Wrd198.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_44]))));
  (* (--Rsp)) = (Wrd198.Obj);
  (* (--Rsp)) = (Wrd185.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_78)
  (Wrd192.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_43]))));
  (* (--Rsp)) = (Wrd191.Obj);
  (* (--Rsp)) = (Wrd179.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_77)
  (Wrd185.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_42])), (Wrd180.pObj));

DEFLABEL (label_76)
  (Wrd179.Obj) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  (Wrd173.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_41]))));
  (* (--Rsp)) = (Wrd173.Obj);
  (* (--Rsp)) = (Wrd160.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_75)
  (Wrd167.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  (Wrd166.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_40]))));
  (* (--Rsp)) = (Wrd166.Obj);
  (* (--Rsp)) = (Wrd153.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_74)
  (Wrd160.Obj) = Rvl;
  goto label_143;

DEFLABEL (label_146)
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_39]))));
  (* (--Rsp)) = (Wrd159.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_73)
  (Wrd153.Obj) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_38])), (Wrd148.pObj));

DEFLABEL (label_72)
  (Wrd147.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_37]))));
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_71)
  (Wrd138.Obj) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_36]))));
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_70)
  (Wrd131.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_35])), (Wrd126.pObj));

DEFLABEL (label_69)
  (Wrd125.Obj) = Rvl;
  goto label_153;

DEFLABEL (label_155)
  (Wrd213.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd216.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd219.Obj) = ((Wrd216.pObj) [0]);
  (Wrd220.uLng) = (OBJECT_TYPE (Wrd219.Obj));
  if ((Wrd220.uLng) == 50)
    goto label_185;
  Wrd215 = Wrd219;

DEFLABEL (label_184)
  (Wrd223.uLng) = (OBJECT_TYPE (Wrd215.Obj));
  if (! ((Wrd223.uLng) == 1))
    goto label_183;
  (Wrd222.pObj) = (OBJECT_ADDRESS (Wrd215.Obj));
  (Wrd221.Obj) = ((Wrd222.pObj) [1]);

DEFLABEL (label_182)
  (Wrd230.uLng) = (OBJECT_TYPE (Wrd221.Obj));
  if (! ((Wrd230.uLng) == 1))
    goto label_181;
  (Wrd229.pObj) = (OBJECT_ADDRESS (Wrd221.Obj));
  (Wrd228.Obj) = ((Wrd229.pObj) [1]);

DEFLABEL (label_180)
  if ((Wrd228.Obj) == (current_block [OBJECT_6_8]))
    goto label_177;
  (Wrd238.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd241.Obj) = ((Wrd238.pObj) [0]);
  (Wrd242.uLng) = (OBJECT_TYPE (Wrd241.Obj));
  if ((Wrd242.uLng) == 50)
    goto label_176;
  Wrd237 = Wrd241;

DEFLABEL (label_175)
  (Wrd245.uLng) = (OBJECT_TYPE (Wrd237.Obj));
  if (! ((Wrd245.uLng) == 1))
    goto label_174;
  (Wrd244.pObj) = (OBJECT_ADDRESS (Wrd237.Obj));
  (Wrd243.Obj) = ((Wrd244.pObj) [1]);

DEFLABEL (label_173)
  (Wrd252.uLng) = (OBJECT_TYPE (Wrd243.Obj));
  if (! ((Wrd252.uLng) == 1))
    goto label_172;
  (Wrd251.pObj) = (OBJECT_ADDRESS (Wrd243.Obj));
  (Wrd250.Obj) = ((Wrd251.pObj) [1]);

DEFLABEL (label_171)
  (Wrd259.uLng) = (OBJECT_TYPE (Wrd250.Obj));
  if (! ((Wrd259.uLng) == 1))
    goto label_170;
  (Wrd257.pObj) = (OBJECT_ADDRESS (Wrd250.Obj));
  (Wrd258.Obj) = ((Wrd257.pObj) [0]);
  (* (--Rsp)) = (Wrd258.Obj);

DEFLABEL (label_169)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_34]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_168)
  (Wrd274.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd277.Obj) = ((Wrd274.pObj) [0]);
  (Wrd278.uLng) = (OBJECT_TYPE (Wrd277.Obj));
  if ((Wrd278.uLng) == 50)
    goto label_167;
  Wrd273 = Wrd277;

DEFLABEL (label_166)
  (Wrd281.uLng) = (OBJECT_TYPE (Wrd273.Obj));
  if (! ((Wrd281.uLng) == 1))
    goto label_165;
  (Wrd280.pObj) = (OBJECT_ADDRESS (Wrd273.Obj));
  (Wrd279.Obj) = ((Wrd280.pObj) [1]);

DEFLABEL (label_164)
  (Wrd288.uLng) = (OBJECT_TYPE (Wrd279.Obj));
  if (! ((Wrd288.uLng) == 1))
    goto label_163;
  (Wrd287.pObj) = (OBJECT_ADDRESS (Wrd279.Obj));
  (Wrd286.Obj) = ((Wrd287.pObj) [0]);

DEFLABEL (label_162)
  (Wrd298.uLng) = (OBJECT_TYPE (Wrd286.Obj));
  if (! ((Wrd298.uLng) == 26))
    goto label_161;
  (Wrd302.Lng) = (FIXNUM_TO_LONG (Wrd286.Obj));
  (Wrd299.Lng) = (0 - (Wrd302.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd299.Lng)))
    goto label_161;
  (Wrd303.Obj) = (LONG_TO_FIXNUM (Wrd299.Lng));
  (* (--Rsp)) = (Wrd303.Obj);

DEFLABEL (label_160)
  (Wrd306.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd309.Obj) = ((Wrd306.pObj) [0]);
  (Wrd310.uLng) = (OBJECT_TYPE (Wrd309.Obj));
  if ((Wrd310.uLng) == 50)
    goto label_159;
  Wrd305 = Wrd309;

DEFLABEL (label_158)
  (Wrd313.uLng) = (OBJECT_TYPE (Wrd305.Obj));
  if (! ((Wrd313.uLng) == 1))
    goto label_157;
  (Wrd311.pObj) = (OBJECT_ADDRESS (Wrd305.Obj));
  (Wrd312.Obj) = ((Wrd311.pObj) [0]);
  (* (--Rsp)) = (Wrd312.Obj);

DEFLABEL (label_156)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd320.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_28])));
  Rhp += 3;
  (Wrd319.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd320.pObj)));
  Wrd325 = Wrd320;
  (Wrd326.Obj) = (Rsp [2]);
  ((Wrd325.pObj) [2]) = (Wrd326.Obj);
  (Wrd324.Obj) = (Rsp [1]);
  ((Wrd325.pObj) [3]) = (Wrd324.Obj);
  (Wrd322.Obj) = (Rsp [0]);
  ((Wrd325.pObj) [4]) = (Wrd322.Obj);
  Rvl = (Wrd319.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_157)
  (Wrd317.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_27]))));
  (* (--Rsp)) = (Wrd317.Obj);
  (* (--Rsp)) = (Wrd305.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_9]), 1);

DEFLABEL (label_93)
  (* (--Rsp)) = Rvl;
  goto label_156;

DEFLABEL (label_159)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_26])), (Wrd306.pObj));

DEFLABEL (label_92)
  (Wrd305.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  (Wrd293.Obj) = (current_block [OBJECT_6_10]);
  (Wrd297.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_25]))));
  (* (--Rsp)) = (Wrd297.Obj);
  (* (--Rsp)) = (Wrd286.Obj);
  (* (--Rsp)) = (Wrd293.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_91)
  (* (--Rsp)) = Rvl;
  goto label_160;

DEFLABEL (label_163)
  (Wrd292.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_24]))));
  (* (--Rsp)) = (Wrd292.Obj);
  (* (--Rsp)) = (Wrd279.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_9]), 1);

DEFLABEL (label_90)
  (Wrd286.Obj) = Rvl;
  goto label_162;

DEFLABEL (label_165)
  (Wrd285.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_23]))));
  (* (--Rsp)) = (Wrd285.Obj);
  (* (--Rsp)) = (Wrd273.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_89)
  (Wrd279.Obj) = Rvl;
  goto label_164;

DEFLABEL (label_167)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_22])), (Wrd274.pObj));

DEFLABEL (label_88)
  (Wrd273.Obj) = Rvl;
  goto label_166;

DEFLABEL (label_170)
  (Wrd263.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_33]))));
  (* (--Rsp)) = (Wrd263.Obj);
  (* (--Rsp)) = (Wrd250.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_9]), 1);

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_169;

DEFLABEL (label_172)
  (Wrd256.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_32]))));
  (* (--Rsp)) = (Wrd256.Obj);
  (* (--Rsp)) = (Wrd243.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_85)
  (Wrd250.Obj) = Rvl;
  goto label_171;

DEFLABEL (label_174)
  (Wrd249.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_31]))));
  (* (--Rsp)) = (Wrd249.Obj);
  (* (--Rsp)) = (Wrd237.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_84)
  (Wrd243.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_30])), (Wrd238.pObj));

DEFLABEL (label_83)
  (Wrd237.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_177)
  (Wrd267.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd270.Obj) = ((Wrd267.pObj) [0]);
  (Wrd271.uLng) = (OBJECT_TYPE (Wrd270.Obj));
  if ((Wrd271.uLng) == 50)
    goto label_179;
  Wrd266 = Wrd270;

DEFLABEL (label_178)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd266.Obj);
  goto label_168;

DEFLABEL (label_179)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_21])), (Wrd267.pObj));

DEFLABEL (label_87)
  (Wrd266.Obj) = Rvl;
  goto label_178;

DEFLABEL (label_181)
  (Wrd234.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd234.Obj);
  (* (--Rsp)) = (Wrd221.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_82)
  (Wrd228.Obj) = Rvl;
  goto label_180;

DEFLABEL (label_183)
  (Wrd227.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd227.Obj);
  (* (--Rsp)) = (Wrd215.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_81)
  (Wrd221.Obj) = Rvl;
  goto label_182;

DEFLABEL (label_185)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_18])), (Wrd216.pObj));

DEFLABEL (label_80)
  (Wrd215.Obj) = Rvl;
  goto label_184;

DEFLABEL (label_187)
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_68)
  (Wrd116.Obj) = Rvl;
  goto label_186;

DEFLABEL (label_189)
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_67)
  (Wrd109.Obj) = Rvl;
  goto label_188;

DEFLABEL (label_191)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_15])), (Wrd104.pObj));

DEFLABEL (label_66)
  (Wrd103.Obj) = Rvl;
  goto label_190;

DEFLABEL (label_193)
  Rsp = (& (Rsp [2]));
  (Wrd360.Obj) = (Rsp [0]);
  (Wrd361.uLng) = (OBJECT_TYPE (Wrd360.Obj));
  if ((Wrd361.uLng) == 26)
    goto label_194;
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_194)
  (Wrd363.Lng) = (FIXNUM_TO_LONG (Wrd360.Obj));
  if ((Wrd363.Lng) > 0)
    goto label_196;
  (Wrd359.Obj) = ((SCHEME_OBJECT) 0);
  goto label_195;

DEFLABEL (label_196)
  (Wrd359.Obj) = (current_block [OBJECT_6_4]);

DEFLABEL (label_195)
DEFLABEL (label_197)
  Rsp = (& (Rsp [2]));
  if ((Wrd359.Obj) == ((SCHEME_OBJECT) 0))
    goto label_104;
  goto label_192;

DEFLABEL (label_200)
  Rsp = (& (Rsp [3]));
  goto label_104;

DEFLABEL (label_203)
  Rsp = (& (Rsp [2]));
  goto label_199;

DEFLABEL (label_204)
  (Wrd376.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd376.Obj);
  (* (--Rsp)) = (Wrd332.Obj);
  (* (--Rsp)) = (Wrd368.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 2);

DEFLABEL (label_94)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_202;
  goto label_203;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_104;
  goto label_192;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_205;
  (Wrd387.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd387.Obj);
  (Wrd388.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd388.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_6_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_200;
  (Wrd393.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd393.Obj);
  (Wrd394.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd394.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (label_205)
  Rsp = (& (Rsp [3]));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_104;
  goto label_155;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_6_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_104;
  goto label_155;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_6_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_200;
  goto label_199;

DEFLABEL (lambda_98)
  CLOSURE_HEADER (LABEL_6_48);

DEFLABEL (lambda_50)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_6_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6_10]);
  (Rsp [2]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_99)
  CLOSURE_HEADER (LABEL_6_63);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_6_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6_10]);
  (Rsp [2]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_96)
  CLOSURE_HEADER (LABEL_6_28);

DEFLABEL (lambda_48)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd12.Obj);
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
#define LABEL_7_6 7
#define LABEL_7_7 9
#define ENVIRONMENT_LABEL_7_3 18
#define DEBUGGING_LABEL_7_2 17
#define OBJECT_7_2 16
#define OBJECT_7_1 15
#define OBJECT_7_0 14
#define FREE_REFERENCE_7_2 11
#define FREE_REFERENCE_7_1 12
#define FREE_REFERENCE_7_0 13
#define FREE_REFERENCES_LABEL_7_0 10
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dragon4_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
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
      goto lookup_symbolic_display_mode_4;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lookup_symbolic_display_mode_10)
DEFLABEL (lookup_symbolic_display_mode_4)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_7_0]))
    goto label_18;
  if ((Wrd5.Obj) == (current_block [OBJECT_7_1]))
    goto label_15;
  if ((Wrd5.Obj) == (current_block [OBJECT_7_2]))
    goto label_12;
  Rvl = (Wrd5.Obj);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_2]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_14;
  Wrd14 = Wrd18;

DEFLABEL (label_13)
  Rvl = (Wrd14.Obj);
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_7])), (Wrd15.pObj));

DEFLABEL (label_6)
  (Wrd14.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_15)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_17;
  Wrd21 = Wrd25;

DEFLABEL (label_16)
  Rvl = (Wrd21.Obj);
  goto label_11;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_6])), (Wrd22.pObj));

DEFLABEL (label_7)
  (Wrd21.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_18)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_20;
  Wrd28 = Wrd32;

DEFLABEL (label_19)
  Rvl = (Wrd28.Obj);
  goto label_11;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_5])), (Wrd29.pObj));

DEFLABEL (label_8)
  (Wrd28.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define TAG_8_8 2
#define LABEL_8_9 9
#define LABEL_8_12 11
#define LABEL_8_10 13
#define LABEL_8_13 15
#define TAG_8_14 6
#define ENVIRONMENT_LABEL_8_3 24
#define DEBUGGING_LABEL_8_2 23
#define EXECUTE_CACHE_8_15 17
#define EXECUTE_CACHE_8_11 19
#define EXECUTE_CACHE_8_6 21
#define FREE_REFERENCES_LABEL_8_0 16
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dragon4_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd6;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_8_4);
      goto dragon4_normalize_7;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto lambda_12;

    case 3:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_8_12);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_8_13);
      goto lambda_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dragon4_normalize_11)
DEFLABEL (dragon4_normalize_7)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_8_7);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (Rsp [1]) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_15;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_15;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd20.Lng) = ((Wrd22.Lng) - (Wrd26.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_15;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));

DEFLABEL (label_14)
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_13])));
  Rhp += 2;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd32 = Wrd29;
  (Wrd33.Obj) = (Rsp [1]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (Wrd31.Obj) = (Rsp [0]);
  ((Wrd32.pObj) [3]) = (Wrd31.Obj);
  Rvl = (Wrd28.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_9)
  (Wrd13.Obj) = Rvl;
  goto label_14;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_8_13);

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
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_6 5
#define LABEL_9_7 7
#define LABEL_9_10 9
#define LABEL_9_5 11
#define LABEL_9_9 13
#define LABEL_9_11 15
#define LABEL_9_15 17
#define LABEL_9_13 19
#define TAG_9_14 8
#define LABEL_9_16 21
#define LABEL_9_18 23
#define LABEL_9_20 25
#define LABEL_9_17 27
#define LABEL_9_21 29
#define TAG_9_22 13
#define LABEL_9_24 31
#define LABEL_9_23 33
#define LABEL_9_26 35
#define LABEL_9_27 37
#define LABEL_9_31 39
#define LABEL_9_29 41
#define LABEL_9_32 43
#define LABEL_9_33 45
#define LABEL_9_34 47
#define LABEL_9_35 49
#define LABEL_9_36 51
#define LABEL_9_37 53
#define LABEL_9_38 55
#define LABEL_9_41 57
#define LABEL_9_43 59
#define LABEL_9_39 61
#define TAG_9_40 29
#define LABEL_9_45 63
#define LABEL_9_47 65
#define LABEL_9_49 67
#define LABEL_9_46 69
#define ENVIRONMENT_LABEL_9_3 99
#define DEBUGGING_LABEL_9_2 98
#define OBJECT_9_8 97
#define OBJECT_9_7 96
#define OBJECT_9_6 95
#define OBJECT_9_5 94
#define OBJECT_9_4 93
#define OBJECT_9_3 92
#define OBJECT_9_2 91
#define OBJECT_9_1 90
#define OBJECT_9_0 89
#define EXECUTE_CACHE_9_48 71
#define EXECUTE_CACHE_9_44 73
#define EXECUTE_CACHE_9_42 75
#define EXECUTE_CACHE_9_30 77
#define EXECUTE_CACHE_9_28 79
#define EXECUTE_CACHE_9_25 81
#define EXECUTE_CACHE_9_19 83
#define EXECUTE_CACHE_9_12 85
#define EXECUTE_CACHE_9_8 87
#define FREE_REFERENCES_LABEL_9_0 70
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dragon4_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd77;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd73;
  machine_word Wrd68;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd173;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd129;
  machine_word Wrd132;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd124;
  machine_word Wrd160;
  machine_word Wrd162;
  machine_word Wrd164;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd155;
  machine_word Wrd156;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd149;
  machine_word Wrd144;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd122;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd183;
  machine_word Wrd181;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd108;
  machine_word Wrd104;
  machine_word Wrd100;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd85;
  machine_word Wrd92;
  machine_word Wrd98;
  machine_word Wrd96;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd52;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd51;
  machine_word Wrd60;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd18;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd48;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd50;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd57;
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
      current_block = (Rpc - LABEL_9_4);
      goto dragon4_39;

    case 1:
      current_block = (Rpc - LABEL_9_6);
      goto label_41;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto label_42;

    case 3:
      current_block = (Rpc - LABEL_9_10);
      goto label_43;

    case 4:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_32;

    case 5:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_35;

    case 6:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_36;

    case 7:
      current_block = (Rpc - LABEL_9_15);
      goto label_44;

    case 8:
      current_block = (Rpc - LABEL_9_13);
      goto lambda_62;

    case 9:
      current_block = (Rpc - LABEL_9_16);
      goto label_45;

    case 10:
      current_block = (Rpc - LABEL_9_18);
      goto label_46;

    case 11:
      current_block = (Rpc - LABEL_9_20);
      goto label_47;

    case 12:
      current_block = (Rpc - LABEL_9_17);
      goto continuation_29;

    case 13:
      current_block = (Rpc - LABEL_9_21);
      goto loop_25;

    case 14:
      current_block = (Rpc - LABEL_9_24);
      goto label_48;

    case 15:
      current_block = (Rpc - LABEL_9_23);
      goto continuation_4;

    case 16:
      current_block = (Rpc - LABEL_9_26);
      goto label_49;

    case 17:
      current_block = (Rpc - LABEL_9_27);
      goto continuation_7;

    case 18:
      current_block = (Rpc - LABEL_9_31);
      goto continuation_11;

    case 19:
      current_block = (Rpc - LABEL_9_29);
      goto continuation_6;

    case 20:
      current_block = (Rpc - LABEL_9_32);
      goto label_50;

    case 21:
      current_block = (Rpc - LABEL_9_33);
      goto label_51;

    case 22:
      current_block = (Rpc - LABEL_9_34);
      goto label_52;

    case 23:
      current_block = (Rpc - LABEL_9_35);
      goto label_54;

    case 24:
      current_block = (Rpc - LABEL_9_36);
      goto label_55;

    case 25:
      current_block = (Rpc - LABEL_9_37);
      goto label_56;

    case 26:
      current_block = (Rpc - LABEL_9_38);
      goto label_58;

    case 27:
      current_block = (Rpc - LABEL_9_41);
      goto label_57;

    case 28:
      current_block = (Rpc - LABEL_9_43);
      goto label_53;

    case 29:
      current_block = (Rpc - LABEL_9_39);
      goto lambda_64;

    case 30:
      current_block = (Rpc - LABEL_9_45);
      goto lambda_16;

    case 31:
      current_block = (Rpc - LABEL_9_47);
      goto continuation_14;

    case 32:
      current_block = (Rpc - LABEL_9_49);
      goto label_59;

    case 33:
      current_block = (Rpc - LABEL_9_46);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dragon4_61)
DEFLABEL (dragon4_39)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_73;
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd57.Lng) > 0)
    goto label_72;

DEFLABEL (label_71)
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_70;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if ((Wrd50.Lng) < 0)
    goto label_67;

DEFLABEL (label_66)
  (Wrd22.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [5]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x808, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_13])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [6]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [6]) = (Wrd7.Obj);
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_67)
  (Wrd31.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_69;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = (0 - (Wrd46.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd42.Lng)))
    goto label_69;
  (Wrd47.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_68)
  (Wrd48.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (label_69)
  (Wrd35.Obj) = (current_block [OBJECT_9_1]);
  (Wrd36.Obj) = (Rsp [4]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_70)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_42)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  goto label_67;

DEFLABEL (label_72)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd54.Obj);
  goto label_68;

DEFLABEL (label_73)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  goto label_72;

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_9_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_75;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_75;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd17.Lng), (Wrd19.Lng), (& (Wrd15.Lng))))
    goto label_75;
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_74)
  (Wrd21.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (label_75)
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (lambda_62)
  CLOSURE_HEADER (LABEL_9_13);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_82;
  (Wrd7.Obj) = (Rsp [6]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_82;
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd69.Lng) > (Wrd71.Lng))
    goto label_79;

DEFLABEL (label_78)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_77;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd26.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_77;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_76)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_19]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_9_17);
  (Rsp [6]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [7]) = (Wrd6.Obj);
  Rsp = (& (Rsp [6]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_77)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_81;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (multiply_with_overflow ((Wrd39.Lng), 2, (& (Wrd35.Lng))))
    goto label_81;
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd35.Lng));
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_80)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd66.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_21])));
  Rhp += 5;
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd66.pObj)));
  (* (--Rsp)) = (Wrd67.Obj);
  Wrd62 = Wrd66;
  (Wrd63.Obj) = (Rsp [2]);
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [3]);
  ((Wrd62.pObj) [2]) = (Wrd65.Obj);
  (Wrd60.Obj) = (Rsp [9]);
  ((Wrd62.pObj) [3]) = (Wrd60.Obj);
  (Wrd57.Obj) = (Rsp [8]);
  ((Wrd62.pObj) [4]) = (Wrd57.Obj);
  (Wrd54.Obj) = (Rsp [5]);
  ((Wrd62.pObj) [5]) = (Wrd54.Obj);
  (Wrd51.Obj) = (Rsp [1]);
  ((Wrd62.pObj) [6]) = (Wrd51.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd43.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [2]);
  (Rsp [7]) = (Wrd44.Obj);
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [2]);
  (Rsp [8]) = (Wrd45.Obj);
  (Rsp [3]) = (Wrd67.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_25;

DEFLABEL (label_81)
  (Wrd28.Obj) = (current_block [OBJECT_9_2]);
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (label_82)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (Rsp [6]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_45)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_78;
  goto label_79;

DEFLABEL (loop_63)
DEFLABEL (loop_25)
  INTERRUPT_CHECK (26, LABEL_9_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_112;
  (Wrd22.Obj) = ((Wrd9.pObj) [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_112;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (multiply_with_overflow ((Wrd26.Lng), (Wrd30.Lng), (& (Wrd24.Lng))))
    goto label_112;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_111)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_25]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_23);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_110;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_110;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (multiply_with_overflow ((Wrd20.Lng), (Wrd24.Lng), (& (Wrd18.Lng))))
    goto label_110;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_109)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_27]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_28]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_30]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9_29);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [8]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_108;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd13.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_108;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_107)
  (Wrd23.Obj) = (Rsp [8]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_106;
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_106;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (multiply_with_overflow ((Wrd31.Lng), (Wrd35.Lng), (& (Wrd29.Lng))))
    goto label_106;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));

DEFLABEL (label_105)
  (Rsp [4]) = (Wrd22.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_104;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (multiply_with_overflow ((Wrd47.Lng), 2, (& (Wrd43.Lng))))
    goto label_104;
  (Wrd48.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_103)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_31]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [7]);
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [3]);
  if ((Wrd54.Obj) == ((SCHEME_OBJECT) 0))
    goto label_96;
  (Wrd65.Obj) = ((Wrd53.pObj) [6]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 26))
    goto label_95;
  (Wrd67.Obj) = (Rsp [6]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_95;
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  (Wrd69.Lng) = ((Wrd73.Lng) - (Wrd75.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd69.Lng)))
    goto label_95;
  (Wrd76.Obj) = (LONG_TO_FIXNUM (Wrd69.Lng));
  (* (--Rsp)) = (Wrd76.Obj);

DEFLABEL (label_94)
  (Wrd77.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd77.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_44]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_9_31);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_93)
  (Wrd112.Obj) = (Rsp [1]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if (! ((Wrd113.uLng) == 26))
    goto label_92;
  (Wrd114.Obj) = (Rsp [5]);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if (! ((Wrd115.uLng) == 26))
    goto label_92;
  (Wrd181.Lng) = (FIXNUM_TO_LONG (Wrd112.Obj));
  (Wrd183.Lng) = (FIXNUM_TO_LONG (Wrd114.Obj));
  if ((Wrd181.Lng) < (Wrd183.Lng))
    goto label_91;

DEFLABEL (label_90)
  (Wrd122.Obj) = (Rsp [0]);
  if ((Wrd122.Obj) == ((SCHEME_OBJECT) 0))
    goto label_86;
  (Wrd124.Obj) = (Rsp [12]);
  (Rsp [10]) = (Wrd124.Obj);
  (Wrd130.Obj) = (Rsp [3]);
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd130.Obj));
  if (! ((Wrd131.uLng) == 26))
    goto label_85;
  (Wrd134.Lng) = (FIXNUM_TO_LONG (Wrd130.Obj));
  (Wrd132.Lng) = ((Wrd134.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd132.Lng)))
    goto label_85;
  (Wrd129.Obj) = (LONG_TO_FIXNUM (Wrd132.Lng));

DEFLABEL (label_84)
  (Rsp [11]) = (Wrd129.Obj);

DEFLABEL (label_83)
  (Wrd178.Obj) = (Rsp [2]);
  (Rsp [12]) = (Wrd178.Obj);
  Rsp = (& (Rsp [10]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_42]));

DEFLABEL (label_85)
  (Wrd125.Obj) = (Rsp [3]);
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_41]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_57)
  (Wrd129.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_86)
  (Wrd137.Obj) = (Rsp [2]);
  (Wrd138.uLng) = (OBJECT_TYPE (Wrd137.Obj));
  if (! ((Wrd138.uLng) == 26))
    goto label_89;
  (Wrd139.Obj) = (Rsp [7]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [4]);
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if (! ((Wrd142.uLng) == 26))
    goto label_89;
  if ((Wrd137.Obj) == (Wrd141.Obj))
    goto label_88;

DEFLABEL (label_87)
  (Wrd151.Obj) = (Rsp [12]);
  (Rsp [9]) = (Wrd151.Obj);
  (Wrd152.Obj) = (Rsp [3]);
  (Rsp [10]) = (Wrd152.Obj);
  (Wrd153.Obj) = (Rsp [2]);
  (Rsp [11]) = (Wrd153.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd156.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_39])));
  Rhp += 5;
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd156.pObj)));
  Wrd165 = Wrd156;
  (Wrd166.Obj) = (Rsp [7]);
  ((Wrd165.pObj) [2]) = (Wrd166.Obj);
  (Wrd164.Obj) = (Rsp [6]);
  ((Wrd165.pObj) [3]) = (Wrd164.Obj);
  (Wrd162.Obj) = (Rsp [5]);
  ((Wrd165.pObj) [4]) = (Wrd162.Obj);
  (Wrd160.Obj) = (Rsp [4]);
  ((Wrd165.pObj) [5]) = (Wrd160.Obj);
  ((Wrd165.pObj) [6]) = (Wrd153.Obj);
  (Rsp [12]) = (Wrd155.Obj);
  Rsp = (& (Rsp [9]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_88)
  Rsp = (& (Rsp [1]));
  goto lambda_16;

DEFLABEL (label_89)
  (Wrd143.Obj) = (Rsp [2]);
  (Wrd145.Obj) = (Rsp [7]);
  (Wrd146.pObj) = (OBJECT_ADDRESS (Wrd145.Obj));
  (Wrd144.Obj) = ((Wrd146.pObj) [4]);
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_38]))));
  (* (--Rsp)) = (Wrd149.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd143.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_58)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_87;
  goto label_88;

DEFLABEL (label_91)
  (Wrd173.Obj) = (Rsp [0]);
  if (! ((Wrd173.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_88;
  (Wrd176.Obj) = (Rsp [12]);
  (Rsp [10]) = (Wrd176.Obj);
  (Wrd177.Obj) = (Rsp [3]);
  (Rsp [11]) = (Wrd177.Obj);
  goto label_83;

DEFLABEL (label_92)
  (Wrd116.Obj) = (Rsp [1]);
  (Wrd117.Obj) = (Rsp [5]);
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_37]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_8]), 2);

DEFLABEL (label_56)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_90;
  goto label_91;

DEFLABEL (label_95)
  (Wrd57.Obj) = (Rsp [7]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [6]);
  (Wrd59.Obj) = (Rsp [6]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_43]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_4]), 2);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_94;

DEFLABEL (label_96)
  (Wrd88.Obj) = ((Wrd53.pObj) [6]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd89.uLng) == 26))
    goto label_102;
  (Wrd90.Obj) = (Rsp [6]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 26))
    goto label_102;
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  (Wrd98.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  (Wrd92.Lng) = ((Wrd96.Lng) - (Wrd98.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd92.Lng)))
    goto label_102;
  (Wrd85.Obj) = (LONG_TO_FIXNUM (Wrd92.Lng));

DEFLABEL (label_101)
  (Wrd101.Obj) = (Rsp [1]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if (! ((Wrd102.uLng) == 26))
    goto label_100;
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd103.uLng) == 26))
    goto label_100;
  (Wrd110.Lng) = (FIXNUM_TO_LONG (Wrd101.Obj));
  (Wrd111.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  if ((Wrd110.Lng) > (Wrd111.Lng))
    goto label_98;
  (Wrd100.Obj) = (current_block [OBJECT_9_6]);
  goto label_97;

DEFLABEL (label_98)
  (Wrd100.Obj) = (current_block [OBJECT_9_5]);

DEFLABEL (label_97)
DEFLABEL (label_99)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd100.Obj);
  goto label_93;

DEFLABEL (label_100)
  (Wrd104.Obj) = (Rsp [1]);
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_36]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_7]), 2);

DEFLABEL (label_55)
  (Wrd100.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd79.Obj) = (Rsp [7]);
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd78.Obj) = ((Wrd80.pObj) [6]);
  (Wrd81.Obj) = (Rsp [6]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_35]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_4]), 2);

DEFLABEL (label_54)
  (Wrd85.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd36.Obj) = (current_block [OBJECT_9_2]);
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_34]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd15.Obj) = (Rsp [8]);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_33]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_51)
  (Wrd22.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd5.Obj) = (Rsp [8]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_32]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_26]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [2]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_24]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_111;

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_9_39);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [6]);
  (Rsp [4]) = (Wrd17.Obj);
  goto loop_25;

DEFLABEL (lambda_65)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_9_45);
  (Wrd5.Obj) = (Rsp [11]);
  (Rsp [9]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_46]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_47]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [8]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_48]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_9_47);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_115;
  (Wrd5.Obj) = (Rsp [3]);

DEFLABEL (label_114)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_113)
  (Rsp [10]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [11]) = (Wrd6.Obj);
  Rsp = (& (Rsp [9]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_42]));

DEFLABEL (label_115)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_116;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_116;
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  goto label_114;

DEFLABEL (label_116)
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_49]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_59)
  (Wrd5.Obj) = Rvl;
  goto label_114;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_9_46);
  (Wrd5.Obj) = Rvl;
  goto label_113;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_6 5
#define LABEL_10_5 7
#define ENVIRONMENT_LABEL_10_3 12
#define DEBUGGING_LABEL_10_2 11
#define EXECUTE_CACHE_10_7 9
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dragon4_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_10_4);
      goto dragon4_done_2;

    case 1:
      current_block = (Rpc - LABEL_10_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dragon4_done_6)
DEFLABEL (dragon4_done_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_8;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd17.Lng) = ((Wrd19.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd17.Lng)))
    goto label_8;
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Rsp [3]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_8)
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define TAG_11_6 1
#define LABEL_11_8 7
#define LABEL_11_7 9
#define ENVIRONMENT_LABEL_11_3 15
#define DEBUGGING_LABEL_11_2 14
#define OBJECT_11_0 13
#define EXECUTE_CACHE_11_9 11
#define FREE_REFERENCES_LABEL_11_0 10
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dragon4_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_11_4);
      goto dragon4_fill_3;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_11_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dragon4_fill_7)
DEFLABEL (dragon4_fill_3)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_11_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_10;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd20.Lng) = ((Wrd24.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_10;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_10)
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [2]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_6 5
#define LABEL_12_5 7
#define LABEL_12_8 9
#define LABEL_12_9 11
#define LABEL_12_10 13
#define LABEL_12_11 15
#define LABEL_12_12 17
#define LABEL_12_13 19
#define LABEL_12_17 21
#define LABEL_12_21 23
#define LABEL_12_14 25
#define LABEL_12_22 27
#define LABEL_12_23 29
#define LABEL_12_24 31
#define LABEL_12_25 33
#define LABEL_12_15 35
#define LABEL_12_18 37
#define LABEL_12_27 39
#define LABEL_12_20 41
#define LABEL_12_28 43
#define LABEL_12_29 45
#define LABEL_12_30 47
#define LABEL_12_31 49
#define LABEL_12_32 51
#define LABEL_12_33 53
#define LABEL_12_34 55
#define LABEL_12_35 57
#define LABEL_12_36 59
#define LABEL_12_37 61
#define LABEL_12_38 63
#define LABEL_12_39 65
#define LABEL_12_40 67
#define LABEL_12_41 69
#define LABEL_12_42 71
#define LABEL_12_44 73
#define LABEL_12_43 75
#define LABEL_12_48 77
#define LABEL_12_50 79
#define LABEL_12_51 81
#define LABEL_12_52 83
#define LABEL_12_53 85
#define LABEL_12_46 87
#define LABEL_12_56 89
#define LABEL_12_57 91
#define LABEL_12_54 93
#define LABEL_12_55 95
#define LABEL_12_62 97
#define LABEL_12_58 99
#define TAG_12_59 48
#define LABEL_12_60 101
#define LABEL_12_64 103
#define LABEL_12_65 105
#define LABEL_12_67 107
#define LABEL_12_68 109
#define LABEL_12_66 111
#define LABEL_12_69 113
#define TAG_12_70 55
#define ENVIRONMENT_LABEL_12_3 147
#define DEBUGGING_LABEL_12_2 146
#define OBJECT_12_12 145
#define OBJECT_12_11 144
#define OBJECT_12_10 143
#define OBJECT_12_9 142
#define OBJECT_12_8 141
#define OBJECT_12_7 140
#define OBJECT_12_6 139
#define OBJECT_12_5 138
#define OBJECT_12_4 137
#define OBJECT_12_3 136
#define OBJECT_12_2 135
#define OBJECT_12_1 134
#define OBJECT_12_0 133
#define EXECUTE_CACHE_12_63 115
#define EXECUTE_CACHE_12_61 117
#define EXECUTE_CACHE_12_49 119
#define EXECUTE_CACHE_12_47 121
#define EXECUTE_CACHE_12_45 123
#define EXECUTE_CACHE_12_26 125
#define EXECUTE_CACHE_12_19 127
#define EXECUTE_CACHE_12_16 129
#define EXECUTE_CACHE_12_7 131
#define FREE_REFERENCES_LABEL_12_0 114
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dragon4_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd80;
  machine_word Wrd85;
  machine_word Wrd89;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd65;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd92;
  machine_word Wrd90;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd21;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd56;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto dragon4_fixup_77;

    case 1:
      current_block = (Rpc - LABEL_12_6);
      goto label_79;

    case 2:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto label_80;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto label_81;

    case 5:
      current_block = (Rpc - LABEL_12_10);
      goto label_82;

    case 6:
      current_block = (Rpc - LABEL_12_11);
      goto label_83;

    case 7:
      current_block = (Rpc - LABEL_12_12);
      goto scale_76;

    case 8:
      current_block = (Rpc - LABEL_12_13);
      goto continuation_56;

    case 9:
      current_block = (Rpc - LABEL_12_17);
      goto label_84;

    case 10:
      current_block = (Rpc - LABEL_12_21);
      goto label_85;

    case 11:
      current_block = (Rpc - LABEL_12_14);
      goto continuation_53;

    case 12:
      current_block = (Rpc - LABEL_12_22);
      goto label_86;

    case 13:
      current_block = (Rpc - LABEL_12_23);
      goto label_87;

    case 14:
      current_block = (Rpc - LABEL_12_24);
      goto label_88;

    case 15:
      current_block = (Rpc - LABEL_12_25);
      goto label_89;

    case 16:
      current_block = (Rpc - LABEL_12_15);
      goto continuation_52;

    case 17:
      current_block = (Rpc - LABEL_12_18);
      goto continuation_58;

    case 18:
      current_block = (Rpc - LABEL_12_27);
      goto label_90;

    case 19:
      current_block = (Rpc - LABEL_12_20);
      goto continuation_61;

    case 20:
      current_block = (Rpc - LABEL_12_28);
      goto label_91;

    case 21:
      current_block = (Rpc - LABEL_12_29);
      goto label_92;

    case 22:
      current_block = (Rpc - LABEL_12_30);
      goto label_93;

    case 23:
      current_block = (Rpc - LABEL_12_31);
      goto adjust_49;

    case 24:
      current_block = (Rpc - LABEL_12_32);
      goto label_94;

    case 25:
      current_block = (Rpc - LABEL_12_33);
      goto loop_72;

    case 26:
      current_block = (Rpc - LABEL_12_34);
      goto label_95;

    case 27:
      current_block = (Rpc - LABEL_12_35);
      goto label_96;

    case 28:
      current_block = (Rpc - LABEL_12_36);
      goto label_97;

    case 29:
      current_block = (Rpc - LABEL_12_37);
      goto label_98;

    case 30:
      current_block = (Rpc - LABEL_12_38);
      goto label_99;

    case 31:
      current_block = (Rpc - LABEL_12_39);
      goto label_100;

    case 32:
      current_block = (Rpc - LABEL_12_40);
      goto loop_46;

    case 33:
      current_block = (Rpc - LABEL_12_41);
      goto label_101;

    case 34:
      current_block = (Rpc - LABEL_12_42);
      goto loop_14;

    case 35:
      current_block = (Rpc - LABEL_12_44);
      goto label_102;

    case 36:
      current_block = (Rpc - LABEL_12_43);
      goto continuation_11;

    case 37:
      current_block = (Rpc - LABEL_12_48);
      goto label_105;

    case 38:
      current_block = (Rpc - LABEL_12_50);
      goto label_103;

    case 39:
      current_block = (Rpc - LABEL_12_51);
      goto label_104;

    case 40:
      current_block = (Rpc - LABEL_12_52);
      goto cutoff_adjust_44;

    case 41:
      current_block = (Rpc - LABEL_12_53);
      goto label_106;

    case 42:
      current_block = (Rpc - LABEL_12_46);
      goto continuation_21;

    case 43:
      current_block = (Rpc - LABEL_12_56);
      goto label_107;

    case 44:
      current_block = (Rpc - LABEL_12_57);
      goto label_108;

    case 45:
      current_block = (Rpc - LABEL_12_54);
      goto continuation_30;

    case 46:
      current_block = (Rpc - LABEL_12_55);
      goto continuation_28;

    case 47:
      current_block = (Rpc - LABEL_12_62);
      goto label_109;

    case 48:
      current_block = (Rpc - LABEL_12_58);
      goto lambda_121;

    case 49:
      current_block = (Rpc - LABEL_12_60);
      goto continuation_32;

    case 50:
      current_block = (Rpc - LABEL_12_64);
      goto continuation_31;

    case 51:
      current_block = (Rpc - LABEL_12_65);
      goto label_110;

    case 52:
      current_block = (Rpc - LABEL_12_67);
      goto label_111;

    case 53:
      current_block = (Rpc - LABEL_12_68);
      goto label_112;

    case 54:
      current_block = (Rpc - LABEL_12_66);
      goto continuation_37;

    case 55:
      current_block = (Rpc - LABEL_12_69);
      goto lambda_122;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dragon4_fixup_114)
DEFLABEL (dragon4_fixup_77)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_133;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_133;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_132)
  (Wrd18.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Wrd5.Obj) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_131;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 26))
    goto label_131;
  if ((Wrd6.Obj) == Rvl)
    goto label_125;

DEFLABEL (label_124)
  (Wrd15.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_123)
  goto scale_76;

DEFLABEL (label_125)
  (Wrd23.Obj) = (Rsp [8]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_130;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (multiply_with_overflow ((Wrd29.Lng), 2, (& (Wrd25.Lng))))
    goto label_130;
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_129)
  (Wrd36.Obj) = (Rsp [8]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_128;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (multiply_with_overflow ((Wrd42.Lng), 2, (& (Wrd38.Lng))))
    goto label_128;
  (Wrd43.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_127)
  (Wrd49.Obj) = (Rsp [8]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 26))
    goto label_126;
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (multiply_with_overflow ((Wrd55.Lng), 2, (& (Wrd51.Lng))))
    goto label_126;
  (Wrd56.Obj) = (LONG_TO_FIXNUM (Wrd51.Lng));
  (* (--Rsp)) = (Wrd56.Obj);
  goto label_123;

DEFLABEL (label_126)
  (Wrd44.Obj) = (current_block [OBJECT_12_0]);
  (Wrd45.Obj) = (Rsp [8]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_83)
  (* (--Rsp)) = Rvl;
  goto label_123;

DEFLABEL (label_128)
  (Wrd31.Obj) = (current_block [OBJECT_12_0]);
  (Wrd32.Obj) = (Rsp [8]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_82)
  (* (--Rsp)) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd18.Obj) = (current_block [OBJECT_12_0]);
  (Wrd19.Obj) = (Rsp [8]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_81)
  (* (--Rsp)) = Rvl;
  goto label_129;

DEFLABEL (label_131)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_80)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_124;
  goto label_125;

DEFLABEL (label_133)
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_79)
  (* (--Rsp)) = Rvl;
  goto label_132;

DEFLABEL (scale_115)
DEFLABEL (scale_76)
  INTERRUPT_CHECK (26, LABEL_12_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_16]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_12_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_53)
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [7]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_152;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_152;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_151)
  (Wrd24.Obj) = (Rsp [6]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_150;
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_150;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd27.Lng) = ((Wrd29.Lng) + (Wrd30.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd27.Lng)))
    goto label_150;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));

DEFLABEL (label_149)
  (Wrd31.Obj) = (* (Rsp++));
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_148;
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_148;
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (multiply_with_overflow ((Wrd41.Lng), (Wrd42.Lng), (& (Wrd40.Lng))))
    goto label_148;
  (Wrd37.Obj) = (LONG_TO_FIXNUM (Wrd40.Lng));

DEFLABEL (label_147)
  (Wrd44.Obj) = (current_block [OBJECT_12_5]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_25]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_89)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_26]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_12_13);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_146;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd36.Lng) < 0)
    goto label_137;

DEFLABEL (label_136)
  (Wrd12.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_19]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_12_18);
  (Wrd5.Obj) = Rvl;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_135;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_135;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd17.Lng), (Wrd18.Lng), (& (Wrd15.Lng))))
    goto label_135;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_134)
  (Wrd19.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [13]);
  (Rsp [3]) = (Wrd20.Obj);
  (Rsp [2]) = (Wrd11.Obj);
  goto adjust_49;

DEFLABEL (label_135)
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_90)
  (Wrd11.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_145;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Lng) = (0 - (Wrd32.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_145;
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_144)
  (Wrd34.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_19]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_12_20);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_143;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_143;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd16.Lng), (Wrd18.Lng), (& (Wrd14.Lng))))
    goto label_143;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_142)
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.Obj) = (Rsp [6]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_141;
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_141;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (multiply_with_overflow ((Wrd33.Lng), (Wrd35.Lng), (& (Wrd31.Lng))))
    goto label_141;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));

DEFLABEL (label_140)
  (Rsp [3]) = (Wrd26.Obj);
  (Wrd42.Obj) = (Rsp [15]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_139;
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 26))
    goto label_139;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (multiply_with_overflow ((Wrd48.Lng), (Wrd50.Lng), (& (Wrd46.Lng))))
    goto label_139;
  (Wrd41.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));

DEFLABEL (label_138)
  (Rsp [2]) = (Wrd41.Obj);
  goto loop_72;

DEFLABEL (label_139)
  (Wrd36.Obj) = (Rsp [15]);
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_30]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_93)
  (Wrd41.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_141)
  (Wrd21.Obj) = (Rsp [6]);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_29]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_92)
  (Wrd26.Obj) = Rvl;
  goto label_140;

DEFLABEL (label_143)
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_91)
  (* (--Rsp)) = Rvl;
  goto label_142;

DEFLABEL (label_145)
  (Wrd21.Obj) = (current_block [OBJECT_12_3]);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_21]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_85)
  (* (--Rsp)) = Rvl;
  goto label_144;

DEFLABEL (label_146)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_84)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_136;
  goto label_137;

DEFLABEL (label_148)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_24]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_88)
  (Wrd37.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  (Wrd18.Obj) = (Rsp [6]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_23]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_87)
  (Wrd23.Obj) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  (Wrd5.Obj) = (Rsp [7]);
  (Wrd6.Obj) = (current_block [OBJECT_12_4]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_86)
  (Wrd10.Obj) = Rvl;
  goto label_151;

DEFLABEL (adjust_116)
DEFLABEL (adjust_49)
  INTERRUPT_CHECK (26, LABEL_12_31);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_154;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if (multiply_with_overflow ((Wrd16.Lng), 2, (& (Wrd12.Lng))))
    goto label_154;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_153)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd19.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto loop_46;

DEFLABEL (label_154)
  (Wrd5.Obj) = (current_block [OBJECT_12_0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_32]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_94)
  (* (--Rsp)) = Rvl;
  goto label_153;

DEFLABEL (loop_117)
DEFLABEL (loop_72)
  INTERRUPT_CHECK (26, LABEL_12_33);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_167;
  (Wrd13.Obj) = (Rsp [10]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_167;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (multiply_with_overflow ((Wrd17.Lng), (Wrd19.Lng), (& (Wrd15.Lng))))
    goto label_167;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_166)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_165;
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_165;
  (Wrd90.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if ((Wrd90.Lng) < (Wrd92.Lng))
    goto label_156;

DEFLABEL (label_155)
  (Wrd29.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (Rsp [6]) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd33.Obj);
  Rsp = (& (Rsp [2]));
  goto adjust_49;

DEFLABEL (label_156)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_164;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd44.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd42.Lng)))
    goto label_164;
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));

DEFLABEL (label_163)
  (Rsp [0]) = (Wrd39.Obj);
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_162;
  (Wrd53.Obj) = (Rsp [10]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_162;
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (multiply_with_overflow ((Wrd57.Lng), (Wrd59.Lng), (& (Wrd55.Lng))))
    goto label_162;
  (Wrd50.Obj) = (LONG_TO_FIXNUM (Wrd55.Lng));

DEFLABEL (label_161)
  (Rsp [1]) = (Wrd50.Obj);
  (Wrd66.Obj) = (Rsp [2]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 26))
    goto label_160;
  (Wrd68.Obj) = (Rsp [10]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 26))
    goto label_160;
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (multiply_with_overflow ((Wrd72.Lng), (Wrd74.Lng), (& (Wrd70.Lng))))
    goto label_160;
  (Wrd65.Obj) = (LONG_TO_FIXNUM (Wrd70.Lng));

DEFLABEL (label_159)
  (Rsp [2]) = (Wrd65.Obj);
  (Wrd81.Obj) = (Rsp [3]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 26))
    goto label_158;
  (Wrd83.Obj) = (Rsp [10]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 26))
    goto label_158;
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  if (multiply_with_overflow ((Wrd87.Lng), (Wrd89.Lng), (& (Wrd85.Lng))))
    goto label_158;
  (Wrd80.Obj) = (LONG_TO_FIXNUM (Wrd85.Lng));

DEFLABEL (label_157)
  (Rsp [3]) = (Wrd80.Obj);
  goto loop_72;

DEFLABEL (label_158)
  (Wrd75.Obj) = (Rsp [3]);
  (Wrd76.Obj) = (Rsp [10]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_39]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_100)
  (Wrd80.Obj) = Rvl;
  goto label_157;

DEFLABEL (label_160)
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd61.Obj) = (Rsp [10]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_38]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_99)
  (Wrd65.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.Obj) = (Rsp [10]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_37]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_98)
  (Wrd50.Obj) = Rvl;
  goto label_161;

DEFLABEL (label_164)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_36]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_97)
  (Wrd39.Obj) = Rvl;
  goto label_163;

DEFLABEL (label_165)
  (Wrd24.Obj) = (Rsp [5]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_35]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_7]), 2);

DEFLABEL (label_96)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_155;
  goto label_156;

DEFLABEL (label_167)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [10]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_34]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_95)
  (Wrd10.Obj) = Rvl;
  goto label_166;

DEFLABEL (loop_118)
DEFLABEL (loop_46)
  INTERRUPT_CHECK (26, LABEL_12_40);
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_169;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_169;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_169;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_168)
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto loop_14;

DEFLABEL (label_169)
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_41]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_8]), 2);

DEFLABEL (label_101)
  (* (--Rsp)) = Rvl;
  goto label_168;

DEFLABEL (loop_119)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_12_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_185;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (multiply_with_overflow ((Wrd20.Lng), 2, (& (Wrd16.Lng))))
    goto label_185;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_184)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_45]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_12_43);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_174;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_173;
  (Wrd15.Obj) = (Rsp [17]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_173;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (multiply_with_overflow ((Wrd19.Lng), (Wrd21.Lng), (& (Wrd17.Lng))))
    goto label_173;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));

DEFLABEL (label_172)
  (Rsp [0]) = (Wrd12.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_171;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_171;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));

DEFLABEL (label_170)
  (Rsp [1]) = (Wrd26.Obj);
  goto loop_14;

DEFLABEL (label_171)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_51]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_104)
  (Wrd26.Obj) = Rvl;
  goto label_170;

DEFLABEL (label_173)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (Rsp [17]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_50]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_103)
  (Wrd12.Obj) = Rvl;
  goto label_172;

DEFLABEL (label_174)
  (Wrd32.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd33.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd34.Obj) = (Rsp [17]);
  if (! ((Wrd34.Obj) == (current_block [OBJECT_12_9])))
    goto label_179;
  (Wrd59.Obj) = (Rsp [1]);
  (Rsp [15]) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [0]);
  (Rsp [17]) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [4]);
  (Rsp [18]) = (Wrd61.Obj);
  (Wrd62.Obj) = (Rsp [5]);
  (Rsp [19]) = (Wrd62.Obj);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_46]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd66.Obj) = (Rsp [17]);
  (* (--Rsp)) = (Wrd66.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_47]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_12_46);
  (Wrd5.Obj) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_178;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd13.Lng) = ((Wrd14.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_178;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_177)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_176;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_176;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd26.Lng) = ((Wrd28.Lng) - (Wrd29.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_176;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));

DEFLABEL (label_175)
  (Rsp [20]) = (Wrd22.Obj);
  (Wrd30.Obj) = (Rsp [6]);
  (Rsp [21]) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [9]);
  (Rsp [16]) = (Wrd31.Obj);
  Rsp = (& (Rsp [15]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 10));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_59);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_58])));
  Rhp += 7;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  Wrd47 = Wrd34;
  (Wrd48.Obj) = (Rsp [6]);
  ((Wrd47.pObj) [2]) = (Wrd48.Obj);
  (Wrd46.Obj) = (Rsp [5]);
  ((Wrd47.pObj) [3]) = (Wrd46.Obj);
  (Wrd44.Obj) = (Rsp [4]);
  ((Wrd47.pObj) [4]) = (Wrd44.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  ((Wrd47.pObj) [5]) = (Wrd42.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  ((Wrd47.pObj) [6]) = (Wrd40.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  ((Wrd47.pObj) [7]) = (Wrd38.Obj);
  (Wrd36.Obj) = (Rsp [0]);
  ((Wrd47.pObj) [8]) = (Wrd36.Obj);
  Rvl = (Wrd33.Obj);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_176)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_57]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_108)
  (Wrd22.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  (Wrd7.Obj) = (current_block [OBJECT_12_0]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_56]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_107)
  (Wrd11.Obj) = Rvl;
  goto label_177;

DEFLABEL (label_179)
  if ((Wrd34.Obj) == (current_block [OBJECT_12_10]))
    goto label_183;
  if ((Wrd34.Obj) == (current_block [OBJECT_12_11]))
    goto label_180;
  (Rsp [20]) = (Wrd34.Obj);
  (Rsp [21]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [20]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_49]));

DEFLABEL (label_180)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 26))
    goto label_182;
  (Wrd50.Obj) = (Rsp [18]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_182;
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  (Wrd52.Lng) = ((Wrd54.Lng) + (Wrd56.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd52.Lng)))
    goto label_182;
  (Wrd57.Obj) = (LONG_TO_FIXNUM (Wrd52.Lng));
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_181)
  goto cutoff_adjust_44;

DEFLABEL (label_182)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (Rsp [18]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_48]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_105)
  (* (--Rsp)) = Rvl;
  goto label_181;

DEFLABEL (label_183)
  (Wrd58.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd58.Obj);
  goto label_181;

DEFLABEL (label_185)
  (Wrd9.Obj) = (current_block [OBJECT_12_0]);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_44]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_102)
  (* (--Rsp)) = Rvl;
  goto label_184;

DEFLABEL (cutoff_adjust_120)
DEFLABEL (cutoff_adjust_44)
  INTERRUPT_CHECK (26, LABEL_12_52);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_199;
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_199;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) - (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_199;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_198)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_54]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_55]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [21]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_19]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_12_55);
  (Wrd5.Obj) = Rvl;
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_197;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_197;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd16.Lng), (Wrd17.Lng), (& (Wrd14.Lng))))
    goto label_197;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_196)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_63]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_12_54);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_60]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_61]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_12_60);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_61]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_12_64);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_195;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_195;
  if ((Wrd5.Obj) == (Wrd7.Obj))
    goto label_187;

DEFLABEL (label_188)
  (Wrd15.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_186;

DEFLABEL (label_187)
  (Wrd47.Obj) = (current_block [OBJECT_12_12]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_186)
DEFLABEL (label_194)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_66]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd24.Obj) = (Rsp [13]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_193;
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_193;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Lng) = ((Wrd30.Lng) + (Wrd32.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_193;
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_192)
  (Wrd39.Obj) = (Rsp [7]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_191;
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (multiply_with_overflow ((Wrd45.Lng), 2, (& (Wrd41.Lng))))
    goto label_191;
  (Wrd46.Obj) = (LONG_TO_FIXNUM (Wrd41.Lng));
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_190)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_45]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_12_66);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_189;
  (Wrd7.Obj) = (Rsp [6]);
  (Rsp [7]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Rsp [8]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [9]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [10]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Rsp [11]) = (Wrd11.Obj);
  Rsp = (& (Rsp [7]));
  goto loop_46;

DEFLABEL (label_189)
  (Wrd13.Obj) = (Rsp [6]);
  (Rsp [20]) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [14]);
  (Rsp [21]) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (Rsp [22]) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [23]) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Rsp [24]) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Rsp [25]) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  (Rsp [26]) = (Wrd19.Obj);
  Rsp = (& (Rsp [20]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 10));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_70);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_69])));
  Rhp += 7;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd35 = Wrd22;
  (Wrd36.Obj) = (Rsp [6]);
  ((Wrd35.pObj) [2]) = (Wrd36.Obj);
  (Wrd34.Obj) = (Rsp [5]);
  ((Wrd35.pObj) [3]) = (Wrd34.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  ((Wrd35.pObj) [4]) = (Wrd32.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  ((Wrd35.pObj) [5]) = (Wrd30.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  ((Wrd35.pObj) [6]) = (Wrd28.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  ((Wrd35.pObj) [7]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [0]);
  ((Wrd35.pObj) [8]) = (Wrd24.Obj);
  Rvl = (Wrd21.Obj);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_191)
  (Wrd34.Obj) = (current_block [OBJECT_12_0]);
  (Wrd35.Obj) = (Rsp [7]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_68]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_112)
  (* (--Rsp)) = Rvl;
  goto label_190;

DEFLABEL (label_193)
  (Wrd19.Obj) = (Rsp [13]);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_67]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_8]), 2);

DEFLABEL (label_111)
  (* (--Rsp)) = Rvl;
  goto label_192;

DEFLABEL (label_195)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_65]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_110)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_188;
  goto label_187;

DEFLABEL (label_197)
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_62]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_109)
  (* (--Rsp)) = Rvl;
  goto label_196;

DEFLABEL (label_199)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_53]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_106)
  (* (--Rsp)) = Rvl;
  goto label_198;

DEFLABEL (lambda_121)
  CLOSURE_HEADER (LABEL_12_58);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd6.pObj) [8]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [7]) = (Wrd21.Obj);
  (Wrd24.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [6]) = (Wrd24.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 8);
  }

DEFLABEL (lambda_122)
  CLOSURE_HEADER (LABEL_12_69);

DEFLABEL (lambda_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd6.pObj) [8]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [7]) = (Wrd21.Obj);
  (Wrd24.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [6]) = (Wrd24.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 8);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_10 7
#define LABEL_13_6 9
#define LABEL_13_8 11
#define TAG_13_9 4
#define LABEL_13_12 13
#define LABEL_13_13 15
#define LABEL_13_14 17
#define LABEL_13_15 19
#define ENVIRONMENT_LABEL_13_3 35
#define DEBUGGING_LABEL_13_2 34
#define OBJECT_13_4 33
#define OBJECT_13_3 32
#define OBJECT_13_2 31
#define OBJECT_13_1 30
#define OBJECT_13_0 29
#define EXECUTE_CACHE_13_16 21
#define EXECUTE_CACHE_13_11 23
#define EXECUTE_CACHE_13_7 25
#define FREE_ASSIGNMENT_13_0 28
#define FREE_REFERENCES_LABEL_13_0 20
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dragon4_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd68;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_13_4);
      goto initialize_dragon4B_9;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_13_10);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_13_6);
      goto lambda_0;

    case 4:
      current_block = (Rpc - LABEL_13_8);
      goto lambda_18;

    case 5:
      current_block = (Rpc - LABEL_13_12);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_13_13);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_13_14);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_13_15);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_dragon4B_17)
DEFLABEL (initialize_dragon4B_9)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_8])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_0]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_22;

DEFLABEL (label_21)
  ((Wrd11.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_20)
  Rvl = (current_block [OBJECT_13_1]);
  goto pop_return;

DEFLABEL (label_22)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_21;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_10])), (Wrd11.pObj), (Wrd6.Obj));

DEFLABEL (label_11)
  goto label_20;

DEFLABEL (lambda_19)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_13_6);
  (Wrd5.Obj) = (current_block [OBJECT_13_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_13_8);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_33;
  if ((Wrd5.Obj) == (current_block [OBJECT_13_2]))
    goto label_24;

DEFLABEL (label_23)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_16]));

DEFLABEL (label_24)
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_32;
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if ((Wrd68.Lng) < 0)
    goto label_23;

DEFLABEL (label_31)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_30;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd23.uLng)));

DEFLABEL (label_29)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_28;
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_28;
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! ((Wrd65.Lng) < (Wrd66.Lng)))
    goto label_23;

DEFLABEL (label_27)
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [2]);
  (Rsp [1]) = (Wrd43.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 10)
    goto label_26;

DEFLABEL (label_25)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 2);

DEFLABEL (label_26)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_25;
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) (Wrd56.Lng)) < ((unsigned long) (Wrd60.Lng))))
    goto label_25;
  (Wrd48.uLng) = (OBJECT_DATUM (Wrd53.Obj));
  (Wrd51.pObj) = (& ((Wrd58.pObj) [(Wrd48.Lng)]));
  Rvl = ((Wrd51.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_27;

DEFLABEL (label_30)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 1);

DEFLABEL (label_13)
  (Wrd17.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_23;

DEFLABEL (label_33)
  (Wrd70.Obj) = (current_block [OBJECT_13_2]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_24;

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
dragon4_so_1a1145c20a56275e (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 13)
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

static const struct liarc_code_S arr_decl_dragon4_so_1a1145c20a56275e [13] =
  {
    { "dragon4_so_code_1", 28, dragon4_so_code_1 },
    { "dragon4_so_code_2", 17, dragon4_so_code_2 },
    { "dragon4_so_code_3", 1, dragon4_so_code_3 },
    { "dragon4_so_code_4", 2, dragon4_so_code_4 },
    { "dragon4_so_code_5", 12, dragon4_so_code_5 },
    { "dragon4_so_code_6", 53, dragon4_so_code_6 },
    { "dragon4_so_code_7", 4, dragon4_so_code_7 },
    { "dragon4_so_code_8", 7, dragon4_so_code_8 },
    { "dragon4_so_code_9", 34, dragon4_so_code_9 },
    { "dragon4_so_code_10", 3, dragon4_so_code_10 },
    { "dragon4_so_code_11", 4, dragon4_so_code_11 },
    { "dragon4_so_code_12", 56, dragon4_so_code_12 },
    { "dragon4_so_code_13", 9, dragon4_so_code_13 }
  };

int
decl_dragon4_so_1a1145c20a56275e (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_dragon4_so_1a1145c20a56275e);
  return (0);
}

DECLARE_COMPILED_CODE ("dragon4.so", 3, decl_dragon4_so_1a1145c20a56275e, dragon4_so_1a1145c20a56275e)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_dragon4_so_data_1a1145c20a56275e [3694] =
  "\xa2\x01\x22\xf4\x06\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x08\x0c\xc2"
  "\x07\xc2\x09\xc2\x09\x0c\x0c\xc1\x0c\x0c\xc2\x09\x0c\xc1\xc1\xc1"
  "\x0d\xb9\x0d\x24\x28\x0d\xba\x28\xb1\x28\x0d\xbb\x28\x0d\xbc\x28"
  "\x0d\xbd\x28\x0d\xbe\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x82\x88\x0c\x0c\x0f\x80\xc1\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\xb2\x28\xb3"
  "\x28\x0d\xba\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x80\x28"
  "\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x83\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x0c\x0c"
  "\x0f\x0c\x1b\x28\x0d\x28\x1b\x28\xb3\x28\xb3\x28\xb3\x28\xb3\x28"
  "\x1b\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x86\x88\x0c\x0d\x1c\x0d\x1c\x0d\xbb\x08\x8a\xb3\xb3\x0d"
  "\xba\x0d\x1c\x08\x8a\x80\xc1\x08\xc1\x1b\x06\x07\x02\xc2\x02\x83"
  "\x0d\x1c\x0d\x1c\x24\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb3\xb2\x1b\x0d\x1c\x0d\xba\x1b\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\xc2\x06\x07\xc2\xc2"
  "\x1c\x82\x80\x81\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x87\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b"
  "\xb3\xc2\x1b\x09\x09\x87\x80\x1b\xc2\x82\x28\x1b\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc2\xc1\x02\x1d\x02\x1b\x25\x28\x0d\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a"
  "\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb3\x06\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\x17\x0d\x1b\x1b\x1b"
  "\x1b\xb6\xb4\x1b\xb1\x1b\xb5\x1b\x1b\xb2\x1b\x0d\x17\x28\x0d\x26"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x02\x56\x2f\x55\x73\x65\x72\x73"
  "\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65"
  "\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d"
  "\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d"
  "\x65\x2f\x2e\x2f\x64\x72\x61\x67\x6f\x6e\x34\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x08\x23\x5b\x2b\x69\x6e\x66\x5d\x0e\x66\x6c"
  "\x6f\x6e\x75\x6d\x2d\x65\x71\x75\x61\x6c\x3f\x0e\x66\x6c\x6f\x6e"
  "\x75\x6d\x2d\x64\x69\x76\x69\x64\x65\x03\x32\x2e\x10\x66\x6c\x6f"
  "\x6e\x75\x6d\x2d\x67\x72\x65\x61\x74\x65\x72\x3f\x03\x31\x2e\x08"
  "\x23\x5b\x2d\x69\x6e\x66\x5d\x02\x2d\x0e\x66\x6c\x6f\x6e\x75\x6d"
  "\x2d\x6e\x65\x67\x61\x74\x65\x04\x2d\x30\x2e\x03\x30\x2e\x0d\x66"
  "\x6c\x6f\x6e\x75\x6d\x2d\x61\x74\x61\x6e\x32\x04\x2d\x31\x2e\x07"
  "\x23\x5b\x4e\x61\x4e\x5d\x0d\x66\x6c\x6f\x6e\x75\x6d\x2d\x7a\x65"
  "\x72\x6f\x3f\x11\x66\x6c\x6f\x6e\x75\x6d\x2d\x6e\x65\x67\x61\x74"
  "\x69\x76\x65\x3f\x11\x66\x6c\x6f\x6e\x75\x6d\x2d\x70\x6f\x73\x69"
  "\x74\x69\x76\x65\x3f\x15\x66\x6c\x6f\x6e\x75\x6d\x2d\x75\x6e\x70"
  "\x61\x72\x73\x65\x72\x2d\x68\x6f\x6f\x6b\x1e\x66\x6c\x6f\x3a\x73"
  "\x69\x67\x6e\x69\x66\x69\x63\x61\x6e\x64\x2d\x64\x69\x67\x69\x74"
  "\x73\x2d\x62\x61\x73\x65\x2d\x32\x03\x03\x0c\x73\x74\x72\x69\x6e"
  "\x67\x2d\x63\x6f\x70\x79\x04\x04\x0e\x73\x74\x72\x69\x6e\x67\x2d"
  "\x61\x70\x70\x65\x6e\x64\x04\x12\x64\x72\x61\x67\x6f\x6e\x34\x2d"
  "\x6e\x6f\x72\x6d\x61\x6c\x69\x7a\x65\x02\x1c\x66\x6c\x6f\x6e\x75"
  "\x6d\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x63\x75\x74\x6f\x66"
  "\x66\x2d\x61\x72\x67\x73\x09\x08\x64\x72\x61\x67\x6f\x6e\x34\x03"
  "\x0d\x6c\x69\x73\x74\x2d\x3e\x73\x74\x72\x69\x6e\x67\x04\x0c\x64"
  "\x69\x67\x69\x74\x2d\x3e\x63\x68\x61\x72\x09\x1f\x3a\x81\x8b\x02"
  "\x1e\x38\x81\x89\x02\x1d\x36\x81\x89\x02\x1c\x34\x81\x89\x02\x1b"
  "\x32\x81\x8b\x02\x1a\x30\x81\x89\x02\x19\x2e\x81\x89\x02\x18\x2c"
  "\x81\x87\x02\x17\x2a\x81\x89\x02\x16\x28\xfd\xff\x03\x15\x26\x81"
  "\x87\x02\x14\x24\xfd\xff\x03\x13\x22\xff\xff\x03\x12\x20\x81\x87"
  "\x02\x11\x1e\x81\x87\x02\x10\x1c\x81\x85\x02\x0f\x1a\x81\x83\x02"
  "\x0e\x18\x81\x83\x02\x0d\x16\x81\x87\x02\x0c\x14\x81\x87\x02\x0b"
  "\x12\x81\x87\x02\x0a\x10\x81\x87\x02\x09\x0e\x81\x87\x02\x08\x0c"
  "\x81\x87\x02\x07\x0a\x81\x87\x02\x06\x08\x81\x87\x02\x05\x06\x84"
  "\x06\x04\x04\x81\x85\x02\x39\x63\x02\x03\x30\x2e\x02\x2e\x01\x31"
  "\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x09\x03"
  "\x17\x66\x6c\x6f\x3a\x73\x69\x67\x6e\x69\x66\x69\x63\x61\x6e\x64"
  "\x2d\x64\x69\x67\x69\x74\x73\x0a\x04\x0c\x73\x74\x72\x69\x6e\x67"
  "\x2d\x74\x61\x69\x6c\x0b\x04\x0c\x6d\x61\x6b\x65\x2d\x73\x74\x72"
  "\x69\x6e\x67\x0c\x06\x12\x73\x63\x69\x65\x6e\x74\x69\x66\x69\x63"
  "\x2d\x6f\x75\x74\x70\x75\x74\x0d\x03\x05\x04\x0c\x73\x74\x72\x69"
  "\x6e\x67\x2d\x68\x65\x61\x64\x08\x30\x24\x81\x8d\x02\x2f\x22\x81"
  "\x8d\x02\x2e\x20\x81\x8d\x02\x2d\x1e\x81\x8d\x02\x2c\x1c\x81\x91"
  "\x02\x2b\x1a\x81\x8d\x02\x2a\x18\x81\x8d\x02\x29\x16\x81\x8d\x02"
  "\x28\x14\x81\x8d\x02\x27\x12\x81\x8d\x02\x26\x10\x81\x8d\x02\x25"
  "\x0e\x81\x8d\x02\x24\x0c\x81\x8b\x02\x23\x0a\x81\x8b\x02\x22\x08"
  "\x81\x89\x02\x21\x06\x81\x87\x02\x20\x04\x85\x08\x23\x3a\x0e\x02"
  "\x06\x0d\x02\x31\x04\x85\x08\x03\x0a\x0f\x02\x04\x07\x6d\x6f\x64"
  "\x75\x6c\x6f\x06\x0d\x03\x33\x06\x81\x89\x02\x32\x04\x85\x08\x05"
  "\x0e\x10\x02\x02\x2e\x03\x30\x65\x01\x31\x02\x65\x09\x04\x0d\x69"
  "\x6e\x74\x3a\x2d\x3e\x73\x74\x72\x69\x6e\x67\x04\x0b\x05\x04\x06"
  "\x07\x04\x0c\x04\x09\x3f\x1a\x81\x8f\x02\x3e\x18\x81\x8f\x02\x3d"
  "\x16\x81\x8f\x02\x3c\x14\x81\x93\x02\x3b\x12\x81\x8f\x02\x3a\x10"
  "\x81\x8f\x02\x39\x0e\x81\x8f\x02\x38\x0c\x81\x8d\x02\x37\x0a\x81"
  "\x8b\x02\x36\x08\x81\x89\x02\x35\x06\x81\x8d\x02\x34\x04\x86\x0a"
  "\x19\x32\x0c\x02\x29\x69\x6c\x6c\x65\x67\x61\x6c\x20\x66\x6c\x6f"
  "\x6e\x75\x6d\x20\x75\x6e\x70\x61\x72\x73\x65\x72\x20\x63\x75\x74"
  "\x6f\x66\x66\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x09\x61\x62"
  "\x73\x6f\x6c\x75\x74\x65\x0b\x09\x72\x65\x6c\x61\x74\x69\x76\x65"
  "\x09\x07\x6e\x6f\x72\x6d\x61\x6c\x0b\x73\x63\x69\x65\x6e\x74\x69"
  "\x66\x69\x63\x0c\x65\x6e\x67\x69\x6e\x65\x65\x72\x69\x6e\x67\x11"
  "\x04\x63\x61\x72\x04\x63\x64\x72\x09\x0f\x0d\x6f\x62\x6a\x65\x63"
  "\x74\x2d\x74\x79\x70\x65\x3f\x1b\x17\x66\x6c\x6f\x6e\x75\x6d\x2d"
  "\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x63\x75\x74\x6f\x66\x66\x12"
  "\x1e\x66\x6c\x6f\x6e\x75\x6d\x2d\x75\x6e\x70\x61\x72\x73\x65\x72"
  "\x3a\x6e\x6f\x72\x6d\x61\x6c\x2d\x6f\x75\x74\x70\x75\x74\x13\x03"
  "\x04\x17\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74"
  "\x79\x2d\x76\x61\x6c\x69\x64\x3f\x03\x0b\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x3f\x03\x1d\x6c\x6f\x6f\x6b\x75\x70\x2d\x73\x79\x6d"
  "\x62\x6f\x6c\x69\x63\x2d\x64\x69\x73\x70\x6c\x61\x79\x2d\x6d\x6f"
  "\x64\x65\x14\x04\x05\x6d\x65\x6d\x71\x04\x05\x77\x61\x72\x6e\x06"
  "\x74\x6c\x81\x85\x02\x73\x6a\x81\x85\x02\x72\x68\x81\x85\x02\x71"
  "\x66\x81\x81\x02\x70\x64\x81\x81\x02\x6f\x62\x81\x83\x02\x6e\x60"
  "\x81\x85\x02\x6d\x5e\x81\x85\x02\x6c\x5c\x81\x83\x02\x6b\x5a\x81"
  "\x83\x02\x6a\x58\x81\x83\x02\x69\x56\x81\x81\x02\x68\x54\x81\x81"
  "\x02\x67\x52\x81\x81\x02\x66\x50\x81\x81\x02\x65\x4e\x81\x81\x02"
  "\x64\x4c\x82\x02\x63\x4a\x81\x83\x02\x62\x48\x81\x83\x02\x61\x46"
  "\x81\x83\x02\x60\x44\x81\x83\x02\x5f\x42\x81\x81\x02\x5e\x40\x81"
  "\x81\x02\x5d\x3e\x81\x81\x02\x5c\x3c\x81\x81\x02\x5b\x3a\x81\x81"
  "\x02\x5a\x38\x81\x81\x02\x59\x36\x81\x81\x02\x58\x34\x81\x83\x02"
  "\x57\x32\x81\x83\x02\x56\x30\x81\x83\x02\x55\x2e\x81\x83\x02\x54"
  "\x2c\x81\x85\x02\x53\x2a\x81\x85\x02\x52\x28\x81\x83\x02\x51\x26"
  "\x81\x83\x02\x50\x24\x81\x83\x02\x4f\x22\x81\x83\x02\x4e\x20\x81"
  "\x83\x02\x4d\x1e\x81\x83\x02\x4c\x1c\x81\x83\x02\x4b\x1a\x81\x83"
  "\x02\x4a\x18\x81\x81\x02\x49\x16\x81\x81\x02\x48\x14\x81\x81\x02"
  "\x47\x12\x81\x81\x02\x46\x10\x81\x83\x02\x45\x0e\x81\x85\x02\x44"
  "\x0c\x81\x81\x02\x43\x0a\x81\x83\x02\x42\x08\x81\x81\x02\x41\x06"
  "\x81\x85\x02\x40\x04\x81\x85\x02\x6b\x8b\x01\x15\x02\x08\x11\x23"
  "\x66\x6c\x6f\x6e\x75\x6d\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x3a"
  "\x65\x6e\x67\x69\x6e\x65\x65\x72\x69\x6e\x67\x2d\x6f\x75\x74\x70"
  "\x75\x74\x11\x22\x66\x6c\x6f\x6e\x75\x6d\x2d\x75\x6e\x70\x61\x72"
  "\x73\x65\x72\x3a\x73\x63\x69\x65\x6e\x74\x69\x66\x69\x63\x2d\x6f"
  "\x75\x74\x70\x75\x74\x13\x04\x78\x0a\x81\x83\x02\x77\x08\x81\x83"
  "\x02\x76\x06\x81\x83\x02\x75\x04\x83\x04\x09\x13\x16\x02\x09\x03"
  "\x0e\x66\x6c\x6f\x3a\x6e\x6f\x72\x6d\x61\x6c\x69\x7a\x65\x04\x10"
  "\x66\x6c\x6f\x3a\x64\x65\x6e\x6f\x72\x6d\x61\x6c\x69\x7a\x65\x03"
  "\x0e\x66\x6c\x6f\x3a\x2d\x3e\x69\x6e\x74\x65\x67\x65\x72\x04\x7f"
  "\x10\x81\x85\x02\x7e\x0e\x81\x89\x02\x7d\x0c\x81\x87\x02\x7c\x0a"
  "\x81\x87\x02\x7b\x08\x81\x87\x02\x7a\x06\x81\x85\x02\x79\x04\x84"
  "\x06\x0f\x19\x17\x02\x0a\x0e\x69\x6e\x74\x65\x67\x65\x72\x2d\x6c"
  "\x65\x73\x73\x3f\x18\x11\x69\x6e\x74\x65\x67\x65\x72\x2d\x67\x72"
  "\x65\x61\x74\x65\x72\x3f\x11\x69\x6e\x74\x65\x67\x65\x72\x2d\x73"
  "\x75\x62\x74\x72\x61\x63\x74\x11\x69\x6e\x74\x65\x67\x65\x72\x2d"
  "\x6d\x75\x6c\x74\x69\x70\x6c\x79\x19\x0b\x0e\x64\x72\x61\x67\x6f"
  "\x6e\x34\x2d\x66\x69\x78\x75\x70\x1a\x04\x09\x69\x6e\x74\x3a\x65"
  "\x78\x70\x74\x1b\x03\x0d\x64\x72\x61\x67\x6f\x6e\x34\x2d\x66\x69"
  "\x6c\x6c\x1c\x04\x0f\x69\x6e\x74\x65\x67\x65\x72\x2d\x64\x69\x76"
  "\x69\x64\x65\x03\x19\x69\x6e\x74\x65\x67\x65\x72\x2d\x64\x69\x76"
  "\x69\x64\x65\x2d\x72\x65\x6d\x61\x69\x6e\x64\x65\x72\x03\x18\x69"
  "\x6e\x74\x65\x67\x65\x72\x2d\x64\x69\x76\x69\x64\x65\x2d\x71\x75"
  "\x6f\x74\x69\x65\x6e\x74\x05\x0d\x64\x72\x61\x67\x6f\x6e\x34\x2d"
  "\x64\x6f\x6e\x65\x1d\x04\x07\x69\x6e\x74\x3a\x3e\x3d\x04\x07\x69"
  "\x6e\x74\x3a\x3c\x3d\x1e\x0a\xa1\x01\x46\x81\x99\x02\xa0\x01\x44"
  "\x81\x9b\x02\x9f\x01\x42\x81\x9b\x02\x9e\x01\x40\x81\x99\x02\x9d"
  "\x01\x3e\x81\x85\x02\x9c\x01\x3c\x81\x9b\x02\x9b\x01\x3a\x81\x9b"
  "\x02\x9a\x01\x38\x81\x9b\x02\x99\x01\x36\x81\x9b\x02\x98\x01\x34"
  "\x81\x9b\x02\x97\x01\x32\x81\x9b\x02\x96\x01\x30\x81\x97\x02\x95"
  "\x01\x2e\x81\x97\x02\x94\x01\x2c\x81\x95\x02\x93\x01\x2a\x81\x93"
  "\x02\x92\x01\x28\x81\x99\x02\x91\x01\x26\x81\x91\x02\x90\x01\x24"
  "\x81\x8f\x02\x8f\x01\x22\x81\x8d\x02\x8e\x01\x20\x81\x91\x02\x8d"
  "\x01\x1e\x81\x8d\x02\x8c\x01\x1c\x81\x91\x02\x8b\x01\x1a\x81\x91"
  "\x02\x8a\x01\x18\x81\x93\x02\x89\x01\x16\x81\x91\x02\x88\x01\x14"
  "\x81\x91\x02\x87\x01\x12\x81\x85\x02\x86\x01\x10\x81\x91\x02\x85"
  "\x01\x0e\x81\x93\x02\x84\x01\x0c\x81\x8f\x02\x83\x01\x0a\x81\x95"
  "\x02\x82\x01\x08\x81\x91\x02\x81\x01\x06\x81\x91\x02\x80\x01\x04"
  "\x89\x10\x45\x64\x1f\x02\x0b\x03\x1c\x02\xa4\x01\x08\x81\x89\x02"
  "\xa3\x01\x06\x81\x8b\x02\xa2\x01\x04\x85\x08\x07\x0d\x20\x02\x0c"
  "\x03\x1c\x02\xa8\x01\x0a\x81\x89\x02\xa7\x01\x08\x81\x8b\x02\xa6"
  "\x01\x06\x81\x85\x02\xa5\x01\x04\x83\x04\x09\x10\x21\x02\x0d\x09"
  "\x0b\x0c\x69\x6e\x74\x65\x67\x65\x72\x2d\x61\x64\x64\x18\x12\x2e"
  "\x36\x39\x33\x31\x34\x37\x31\x38\x30\x35\x35\x39\x39\x34\x35\x33"
  "\x0b\x2e\x30\x30\x30\x30\x30\x30\x30\x30\x31\x19\x0f\x69\x6e\x74"
  "\x65\x67\x65\x72\x2d\x65\x71\x75\x61\x6c\x3f\x04\x1b\x03\x04\x6c"
  "\x6f\x67\x04\x0b\x65\x78\x70\x74\x2d\x72\x61\x64\x69\x78\x1b\x03"
  "\x0f\x63\x65\x69\x6c\x69\x6e\x67\x2d\x3e\x65\x78\x61\x63\x74\x04"
  "\x1e\x03\x0a\x04\x17\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67"
  "\x2d\x74\x79\x70\x65\x2d\x64\x61\x74\x75\x6d\x04\x08\x69\x6e\x74"
  "\x3a\x6d\x61\x78\x03\x08\x63\x65\x69\x6c\x69\x6e\x67\x0a\xe0\x01"
  "\x72\x81\x85\x02\xdf\x01\x70\x81\xb7\x02\xde\x01\x6e\x81\xbb\x02"
  "\xdd\x01\x6c\x81\xb9\x02\xdc\x01\x6a\x81\xb5\x02\xdb\x01\x68\x81"
  "\xb3\x02\xda\x01\x66\x81\xb1\x02\xd9\x01\x64\x81\x85\x02\xd8\x01"
  "\x62\x81\xb3\x02\xd7\x01\x60\x81\xb3\x02\xd6\x01\x5e\x81\xb1\x02"
  "\xd5\x01\x5c\x81\xad\x02\xd4\x01\x5a\x81\xad\x02\xd3\x01\x58\x81"
  "\xad\x02\xd2\x01\x56\x81\xaf\x02\xd1\x01\x54\x81\xaf\x02\xd0\x01"
  "\x52\x81\xaf\x02\xcf\x01\x50\x81\xaf\x02\xce\x01\x4e\x81\xad\x02"
  "\xcd\x01\x4c\x81\xaf\x02\xcc\x01\x4a\x81\xb3\x02\xcb\x01\x48\x81"
  "\xaf\x02\xca\x01\x46\x81\xa9\x02\xc9\x01\x44\x81\xa9\x02\xc8\x01"
  "\x42\x81\xa1\x02\xc7\x01\x40\x81\xa1\x02\xc6\x01\x3e\x81\xa1\x02"
  "\xc5\x01\x3c\x81\xa1\x02\xc4\x01\x3a\x81\xa1\x02\xc3\x01\x38\x81"
  "\xa1\x02\xc2\x01\x36\x81\xa1\x02\xc1\x01\x34\x81\x9d\x02\xc0\x01"
  "\x32\x81\x9d\x02\xbf\x01\x30\x81\xa1\x02\xbe\x01\x2e\x81\xa1\x02"
  "\xbd\x01\x2c\x81\x9d\x02\xbc\x01\x2a\x81\x9b\x02\xbb\x01\x28\x81"
  "\x9d\x02\xba\x01\x26\x81\x9d\x02\xb9\x01\x24\x81\x9d\x02\xb8\x01"
  "\x22\x81\x9b\x02\xb7\x01\x20\x81\x9b\x02\xb6\x01\x1e\x81\x9d\x02"
  "\xb5\x01\x1c\x81\x9d\x02\xb4\x01\x1a\x81\x9b\x02\xb3\x01\x18\x81"
  "\x9d\x02\xb2\x01\x16\x81\x9b\x02\xb1\x01\x14\x81\x99\x02\xb0\x01"
  "\x12\x81\x99\x02\xaf\x01\x10\x81\x97\x02\xae\x01\x0e\x81\x95\x02"
  "\xad\x01\x0c\x81\x93\x02\xac\x01\x0a\x81\x93\x02\xab\x01\x08\x81"
  "\x93\x02\xaa\x01\x06\x81\x95\x02\xa9\x01\x04\x8b\x14\x71\x94\x01"
  "\x1e\x02\x0e\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x0e\x76"
  "\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x0b\x02\xb7\x02"
  "\x1b\x02\x04\x18\x6d\x61\x6b\x65\x2d\x69\x6e\x69\x74\x69\x61\x6c"
  "\x69\x7a\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x04\x05\x65\x78\x70"
  "\x74\x04\x09\x72\x61\x74\x3a\x65\x78\x70\x74\x04\xe9\x01\x14\x81"
  "\x87\x02\xe8\x01\x12\x81\x87\x02\xe7\x01\x10\x81\x87\x02\xe6\x01"
  "\x0e\x81\x87\x02\xe5\x01\x0c\x81\x87\x02\xe4\x01\x0a\x83\x04\xe3"
  "\x01\x08\x81\x81\x02\xe2\x01\x06\x81\x81\x02\xe1\x01\x04\x82\x02"
  "\x13\x24\x19\x0e\x18\x18\x19\x04\x1e\x04\x21\x04\x20\x04\x1f\x04"
  "\x17\x04\x16\x04\x15\x4c\x0c\x04\x10\x04\x0f\x04\x0e\x04\x06\x11"
  "\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x64\x72\x61\x67"
  "\x6f\x6e\x34\x21\x1b\x1a\x1c\x1d\x12\x14\x0d\x11\x13\x0d\x66\x6c"
  "\x6f\x3a\x2d\x3e\x73\x74\x72\x69\x6e\x67\x11\x05\x10\x64\x65\x66"
  "\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80"
  "\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
dragon4_so_data_1a1145c20a56275e (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_dragon4_so_data_1a1145c20a56275e [0]))), (sizeof (prog_dragon4_so_data_1a1145c20a56275e)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("dragon4.so", dragon4_so_data_1a1145c20a56275e)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("dragon4.so", "5349e805d33daedc")
