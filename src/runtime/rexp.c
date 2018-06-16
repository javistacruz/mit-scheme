/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:51-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_8 7
#define LABEL_1_7 9
#define LABEL_1_10 11
#define LABEL_1_11 13
#define LABEL_1_12 15
#define LABEL_1_16 17
#define LABEL_1_18 19
#define LABEL_1_21 21
#define LABEL_1_15 23
#define LABEL_1_22 25
#define LABEL_1_23 27
#define LABEL_1_24 29
#define LABEL_1_25 31
#define LABEL_1_26 33
#define LABEL_1_14 35
#define LABEL_1_28 37
#define LABEL_1_29 39
#define LABEL_1_30 41
#define LABEL_1_32 43
#define LABEL_1_20 45
#define LABEL_1_33 47
#define LABEL_1_34 49
#define LABEL_1_35 51
#define LABEL_1_31 53
#define LABEL_1_37 55
#define LABEL_1_38 57
#define ENVIRONMENT_LABEL_1_3 96
#define DEBUGGING_LABEL_1_2 95
#define OBJECT_1_14 94
#define OBJECT_1_13 93
#define OBJECT_1_12 92
#define OBJECT_1_11 91
#define OBJECT_1_10 90
#define OBJECT_1_9 89
#define OBJECT_1_8 88
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
#define EXECUTE_CACHE_1_27 63
#define EXECUTE_CACHE_1_19 65
#define EXECUTE_CACHE_1_17 67
#define EXECUTE_CACHE_1_13 69
#define EXECUTE_CACHE_1_9 71
#define EXECUTE_CACHE_1_6 73
#define FREE_REFERENCE_1_3 76
#define FREE_REFERENCE_1_2 77
#define FREE_REFERENCE_1_1 78
#define FREE_REFERENCE_1_0 79
#define FREE_REFERENCES_LABEL_1_0 58
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd63;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_1_4);
      goto rexpP_41;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto label_43;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto label_44;

    case 5:
      current_block = (Rpc - LABEL_1_11);
      goto label_46;

    case 6:
      current_block = (Rpc - LABEL_1_12);
      goto label_47;

    case 7:
      current_block = (Rpc - LABEL_1_16);
      goto label_45;

    case 8:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_19;

    case 9:
      current_block = (Rpc - LABEL_1_21);
      goto label_48;

    case 10:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_27;

    case 11:
      current_block = (Rpc - LABEL_1_22);
      goto label_49;

    case 12:
      current_block = (Rpc - LABEL_1_23);
      goto label_50;

    case 13:
      current_block = (Rpc - LABEL_1_24);
      goto label_51;

    case 14:
      current_block = (Rpc - LABEL_1_25);
      goto continuation_33;

    case 15:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_36;

    case 16:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_31;

    case 17:
      current_block = (Rpc - LABEL_1_28);
      goto label_52;

    case 18:
      current_block = (Rpc - LABEL_1_29);
      goto label_53;

    case 19:
      current_block = (Rpc - LABEL_1_30);
      goto lambda_10;

    case 20:
      current_block = (Rpc - LABEL_1_32);
      goto label_54;

    case 21:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_22;

    case 22:
      current_block = (Rpc - LABEL_1_33);
      goto label_55;

    case 23:
      current_block = (Rpc - LABEL_1_34);
      goto label_56;

    case 24:
      current_block = (Rpc - LABEL_1_35);
      goto label_57;

    case 25:
      current_block = (Rpc - LABEL_1_31);
      goto continuation_6;

    case 26:
      current_block = (Rpc - LABEL_1_37);
      goto label_58;

    case 27:
      current_block = (Rpc - LABEL_1_38);
      goto label_59;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexpP_61)
DEFLABEL (rexpP_41)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 30))
    goto label_63;
  Rvl = (current_block [OBJECT_1_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_63)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  Rvl = Rvl;

DEFLABEL (label_64)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 1)
    goto label_66;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_64;

DEFLABEL (label_66)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  if (! ((Wrd10.uLng) == 1))
    goto label_115;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_114)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_67;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_67)
  Rsp = (& (Rsp [1]));
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_113;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_112)
  (Wrd16.Obj) = (Rsp [0]);
  if ((Wrd16.Obj) == (current_block [OBJECT_1_3]))
    goto label_107;
  if ((Wrd16.Obj) == (current_block [OBJECT_1_4]))
    goto label_107;
  if (! ((Wrd16.Obj) == (current_block [OBJECT_1_5])))
    goto label_78;

DEFLABEL (label_77)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.pObj) = (& (Rsp [2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd50.pObj)));
  (* (--Rsp)) = (Wrd52.Obj);
  goto lambda_10;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_1_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 30))
    goto label_70;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_25]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_1_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;

DEFLABEL (label_69)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_68)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_70)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd9.uLng) == 1)
    goto label_72;

DEFLABEL (label_71)
  Rvl = (current_block [OBJECT_1_0]);
  goto label_68;

DEFLABEL (label_72)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_76;
  Wrd15 = Wrd19;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_74;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_73)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_1_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  goto label_69;

DEFLABEL (label_74)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_29]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_28])), (Wrd16.pObj));

DEFLABEL (label_52)
  (Wrd15.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  if ((Wrd16.Obj) == (current_block [OBJECT_1_6]))
    goto label_77;
  if ((Wrd16.Obj) == (current_block [OBJECT_1_7]))
    goto label_77;
  if ((Wrd16.Obj) == (current_block [OBJECT_1_8]))
    goto label_77;
  if ((Wrd16.Obj) == (current_block [OBJECT_1_9]))
    goto label_95;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_1_10]);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_1_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_85;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_84;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_83)
  if ((Wrd7.Obj) == (current_block [OBJECT_1_13]))
    goto label_80;

DEFLABEL (label_81)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_79;

DEFLABEL (label_80)
  Rvl = (current_block [OBJECT_1_0]);

DEFLABEL (label_79)
DEFLABEL (label_82)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_48)
  (Wrd7.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_85)
  (Wrd20.Obj) = (Rsp [0]);
  if (! ((Wrd20.Obj) == (current_block [OBJECT_1_11])))
    goto label_94;

DEFLABEL (label_93)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.pObj) = (& (Rsp [2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  goto lambda_10;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_1_20);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_86;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_92;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_91)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_90;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd15.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_89)
  (Rsp [0]) = (Wrd15.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_88;
  Wrd23 = Wrd27;

DEFLABEL (label_87)
  (Rsp [1]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_36]));

DEFLABEL (label_88)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_35])), (Wrd24.pObj));

DEFLABEL (label_57)
  (Wrd23.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_34]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_56)
  (Wrd15.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_33]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_55)
  (Wrd6.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  if ((Wrd20.Obj) == (current_block [OBJECT_1_12]))
    goto label_93;
  goto label_81;

DEFLABEL (label_95)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_106;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [1]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_105)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_1_15);
  if (Rvl == (current_block [OBJECT_1_14]))
    goto label_98;

DEFLABEL (label_97)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_96)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_98)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_104;
  Wrd10 = Wrd14;

DEFLABEL (label_103)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_102;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_101)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_100;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_99)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd31.uLng) == 30))
    goto label_97;
  Rvl = (current_block [OBJECT_1_0]);
  goto label_96;

DEFLABEL (label_100)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_51)
  (Wrd23.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_50)
  (Wrd16.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_22])), (Wrd11.pObj));

DEFLABEL (label_49)
  (Wrd10.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_105;

DEFLABEL (label_107)
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_111;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [1]);

DEFLABEL (label_110)
  (Rsp [0]) = (Wrd53.Obj);
  (Wrd64.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd67.Obj) = ((Wrd64.pObj) [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd68.uLng) == 50)
    goto label_109;
  Wrd63 = Wrd67;

DEFLABEL (label_108)
  (Rsp [1]) = (Wrd63.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (label_109)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_12])), (Wrd64.pObj));

DEFLABEL (label_47)
  (Wrd63.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_46)
  (Wrd53.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_114;

DEFLABEL (lambda_62)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_1_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_122;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_121)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_31);
  if (Rvl == (current_block [OBJECT_1_14]))
    goto label_116;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_116)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_120;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd9.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_119)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_118;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd24.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_117)
  (Rsp [0]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_39]));

DEFLABEL (label_118)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_38]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_59)
  (Wrd24.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_37]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_58)
  (Wrd9.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_32]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_121;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 6
#define DEBUGGING_LABEL_2_2 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_2_4);
      goto rexp_alternatives_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_alternatives_3)
DEFLABEL (rexp_alternatives_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd9.Obj) = (current_block [OBJECT_2_0]);
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define ENVIRONMENT_LABEL_3_3 16
#define DEBUGGING_LABEL_3_2 15
#define OBJECT_3_3 14
#define OBJECT_3_2 13
#define OBJECT_3_1 12
#define OBJECT_3_0 11
#define EXECUTE_CACHE_3_6 9
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
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
      goto rexp_sequence_5;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_sequence_9)
DEFLABEL (rexp_sequence_5)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [0]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.uLng) == 1)
    goto label_11;
  Rvl = (current_block [OBJECT_3_3]);

DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  if (! ((Wrd7.uLng) == 1))
    goto label_15;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_14)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_13;
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 1)
    goto label_12;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_12)
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  Rvl = ((Wrd22.pObj) [0]);
  goto label_10;

DEFLABEL (label_13)
  (Wrd30.Obj) = (current_block [OBJECT_3_1]);
  (Wrd31.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  goto label_10;

DEFLABEL (label_15)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_7)
  (Wrd10.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_7 5
#define LABEL_4_5 7
#define LABEL_4_9 9
#define LABEL_4_10 11
#define ENVIRONMENT_LABEL_4_3 24
#define DEBUGGING_LABEL_4_2 23
#define OBJECT_4_5 22
#define OBJECT_4_4 21
#define OBJECT_4_3 20
#define OBJECT_4_2 19
#define OBJECT_4_1 18
#define OBJECT_4_0 17
#define EXECUTE_CACHE_4_8 13
#define EXECUTE_CACHE_4_6 15
#define FREE_REFERENCES_LABEL_4_0 12
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd53;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd59;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_4_4);
      goto simplify_sequence_args_11;

    case 1:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_10;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_4_10);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (simplify_sequence_args_16)
DEFLABEL (simplify_sequence_args_11)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (lambda_17)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_4_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 30))
    goto label_19;
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = (current_block [OBJECT_4_0]);

DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_26;

DEFLABEL (label_25)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 1)
    goto label_22;

DEFLABEL (label_21)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);

DEFLABEL (label_20)
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  goto label_18;

DEFLABEL (label_22)
  if (! ((Wrd10.uLng) == 1))
    goto label_24;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_23)
  if (! ((Wrd17.Obj) == (current_block [OBJECT_4_4])))
    goto label_21;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd35.Obj) = (current_block [OBJECT_4_5]);
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  goto label_20;

DEFLABEL (label_24)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_13)
  (Wrd17.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  if (! ((Wrd8.uLng) == 1))
    goto label_29;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [0]);

DEFLABEL (label_28)
  if (! ((Wrd41.Obj) == (current_block [OBJECT_4_2])))
    goto label_25;
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_27;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 1);

DEFLABEL (label_27)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  Rvl = ((Wrd53.pObj) [1]);
  goto label_18;

DEFLABEL (label_29)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_14)
  (Wrd41.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_6 5
#define LABEL_5_5 7
#define LABEL_5_7 9
#define ENVIRONMENT_LABEL_5_3 17
#define DEBUGGING_LABEL_5_2 16
#define OBJECT_5_3 15
#define OBJECT_5_2 14
#define OBJECT_5_1 13
#define OBJECT_5_0 12
#define FREE_REFERENCE_5_0 11
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_5_4);
      goto rexp_group_6;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_group_11)
DEFLABEL (rexp_group_6)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_18;
  Wrd9 = Wrd13;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Rsp [0]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.uLng) == 1)
    goto label_14;

DEFLABEL (label_13)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.Obj) = (current_block [OBJECT_5_3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_5_2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  if (! ((Wrd7.uLng) == 1))
    goto label_16;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd18.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_15)
  if (! ((Wrd18.Obj) == (current_block [OBJECT_5_2])))
    goto label_13;
  Rvl = (Rsp [0]);
  goto label_12;

DEFLABEL (label_16)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_9)
  (Wrd18.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_6])), (Wrd10.pObj));

DEFLABEL (label_8)
  (Wrd9.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_7 5
#define LABEL_6_5 7
#define LABEL_6_6 9
#define ENVIRONMENT_LABEL_6_3 19
#define DEBUGGING_LABEL_6_2 18
#define OBJECT_6_2 17
#define OBJECT_6_1 16
#define OBJECT_6_0 15
#define EXECUTE_CACHE_6_8 11
#define FREE_REFERENCE_6_0 14
#define FREE_REFERENCES_LABEL_6_0 10
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      goto rexp_optional_3;

    case 1:
      current_block = (Rpc - LABEL_6_7);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_optional_7)
DEFLABEL (rexp_optional_3)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_9;
  Wrd12 = Wrd16;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Wrd9.Obj) = (current_block [OBJECT_6_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_6_2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_7])), (Wrd13.pObj));

DEFLABEL (label_5)
  (Wrd12.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_7 5
#define LABEL_7_5 7
#define LABEL_7_6 9
#define ENVIRONMENT_LABEL_7_3 19
#define DEBUGGING_LABEL_7_2 18
#define OBJECT_7_2 17
#define OBJECT_7_1 16
#define OBJECT_7_0 15
#define EXECUTE_CACHE_7_8 11
#define FREE_REFERENCE_7_0 14
#define FREE_REFERENCES_LABEL_7_0 10
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_7_4);
      goto rexp__3;

    case 1:
      current_block = (Rpc - LABEL_7_7);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp__7)
DEFLABEL (rexp__3)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_9;
  Wrd12 = Wrd16;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Wrd9.Obj) = (current_block [OBJECT_7_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_7_2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_7])), (Wrd13.pObj));

DEFLABEL (label_5)
  (Wrd12.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_7 5
#define LABEL_8_5 7
#define LABEL_8_6 9
#define ENVIRONMENT_LABEL_8_3 19
#define DEBUGGING_LABEL_8_2 18
#define OBJECT_8_2 17
#define OBJECT_8_1 16
#define OBJECT_8_0 15
#define EXECUTE_CACHE_8_8 11
#define FREE_REFERENCE_8_0 14
#define FREE_REFERENCES_LABEL_8_0 10
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_8_4);
      goto rexp__3;

    case 1:
      current_block = (Rpc - LABEL_8_7);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp__7)
DEFLABEL (rexp__3)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_9;
  Wrd12 = Wrd16;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Wrd9.Obj) = (current_block [OBJECT_8_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_8_2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_7])), (Wrd13.pObj));

DEFLABEL (label_5)
  (Wrd12.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_8 9
#define LABEL_9_6 11
#define LABEL_9_11 13
#define LABEL_9_12 15
#define LABEL_9_13 17
#define LABEL_9_10 19
#define ENVIRONMENT_LABEL_9_3 36
#define DEBUGGING_LABEL_9_2 35
#define OBJECT_9_7 34
#define OBJECT_9_6 33
#define OBJECT_9_5 32
#define OBJECT_9_4 31
#define OBJECT_9_3 30
#define OBJECT_9_2 29
#define OBJECT_9_1 28
#define OBJECT_9_0 27
#define EXECUTE_CACHE_9_14 21
#define EXECUTE_CACHE_9_9 23
#define FREE_REFERENCE_9_0 26
#define FREE_REFERENCES_LABEL_9_0 20
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
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
      goto rexp_groupify_14;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_9_11);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_9_12);
      goto lambda_1;

    case 7:
      current_block = (Rpc - LABEL_9_13);
      goto lambda_2;

    case 8:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_groupify_21)
DEFLABEL (rexp_groupify_14)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_33;
  if ((Wrd6.uLng) == 1)
    goto label_24;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_32;
  Wrd14 = Wrd18;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_30;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto lambda_2;

DEFLABEL (label_25)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_9_4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_28;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_9_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto lambda_1;

DEFLABEL (label_26)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_7])), (Wrd15.pObj));

DEFLABEL (label_16)
  (Wrd14.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  if (! ((Wrd6.uLng) == 30))
    goto label_37;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (Wrd33.Obj) = (MAKE_OBJECT (26, (Wrd32.uLng)));
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_36)
  (Wrd40.Obj) = (Rsp [0]);
  if (! ((Wrd40.Obj) == (current_block [OBJECT_9_1])))
    goto label_34;
  Rsp = (& (Rsp [1]));
  goto lambda_2;

DEFLABEL (label_34)
  if ((Wrd40.Obj) == (current_block [OBJECT_9_2]))
    goto label_35;
  Rsp = (& (Rsp [1]));
  goto lambda_1;

DEFLABEL (label_35)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (lambda_22)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_9_12);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_9_5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_9_6]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_23)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_9_13);
  (Wrd5.Obj) = (current_block [OBJECT_9_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_14]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 6
#define DEBUGGING_LABEL_10_2 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto rexp_any_char_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_any_char_3)
DEFLABEL (rexp_any_char_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  Rvl = (current_block [OBJECT_10_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 6
#define DEBUGGING_LABEL_11_2 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto rexp_line_start_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_line_start_3)
DEFLABEL (rexp_line_start_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  Rvl = (current_block [OBJECT_11_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 6
#define DEBUGGING_LABEL_12_2 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto rexp_line_end_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_line_end_3)
DEFLABEL (rexp_line_end_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  Rvl = (current_block [OBJECT_12_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 6
#define DEBUGGING_LABEL_13_2 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto rexp_string_start_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_string_start_3)
DEFLABEL (rexp_string_start_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  Rvl = (current_block [OBJECT_13_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 6
#define DEBUGGING_LABEL_14_2 5
#define OBJECT_14_0 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto rexp_string_end_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_string_end_3)
DEFLABEL (rexp_string_end_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  Rvl = (current_block [OBJECT_14_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 6
#define DEBUGGING_LABEL_15_2 5
#define OBJECT_15_0 4
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto rexp_word_edge_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_word_edge_3)
DEFLABEL (rexp_word_edge_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  Rvl = (current_block [OBJECT_15_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 6
#define DEBUGGING_LABEL_16_2 5
#define OBJECT_16_0 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto rexp_not_word_edge_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_not_word_edge_3)
DEFLABEL (rexp_not_word_edge_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  Rvl = (current_block [OBJECT_16_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 6
#define DEBUGGING_LABEL_17_2 5
#define OBJECT_17_0 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto rexp_word_start_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_word_start_3)
DEFLABEL (rexp_word_start_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  Rvl = (current_block [OBJECT_17_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 6
#define DEBUGGING_LABEL_18_2 5
#define OBJECT_18_0 4
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto rexp_word_end_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_word_end_3)
DEFLABEL (rexp_word_end_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  Rvl = (current_block [OBJECT_18_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 6
#define DEBUGGING_LABEL_19_2 5
#define OBJECT_19_0 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto rexp_word_char_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_word_char_3)
DEFLABEL (rexp_word_char_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  Rvl = (current_block [OBJECT_19_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 6
#define DEBUGGING_LABEL_20_2 5
#define OBJECT_20_0 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto rexp_not_word_char_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_not_word_char_3)
DEFLABEL (rexp_not_word_char_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  Rvl = (current_block [OBJECT_20_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 7
#define DEBUGGING_LABEL_21_2 6
#define OBJECT_21_1 5
#define OBJECT_21_0 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto rexp_syntax_char_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_syntax_char_4)
DEFLABEL (rexp_syntax_char_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_21_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_21_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 7
#define DEBUGGING_LABEL_22_2 6
#define OBJECT_22_1 5
#define OBJECT_22_0 4
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto rexp_not_syntax_char_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_not_syntax_char_4)
DEFLABEL (rexp_not_syntax_char_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_22_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_22_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_5 3
#define LABEL_23_7 5
#define LABEL_23_8 7
#define LABEL_23_10 9
#define LABEL_23_11 11
#define LABEL_23_13 13
#define LABEL_23_14 15
#define LABEL_23_4 17
#define LABEL_23_6 19
#define LABEL_23_17 21
#define ENVIRONMENT_LABEL_23_3 39
#define DEBUGGING_LABEL_23_2 38
#define OBJECT_23_4 37
#define OBJECT_23_3 36
#define OBJECT_23_2 35
#define OBJECT_23_1 34
#define OBJECT_23_0 33
#define EXECUTE_CACHE_23_16 23
#define EXECUTE_CACHE_23_15 25
#define EXECUTE_CACHE_23_12 27
#define EXECUTE_CACHE_23_9 29
#define FREE_REFERENCE_23_0 32
#define FREE_REFERENCES_LABEL_23_0 22
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd68;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd58;
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
      current_block = (Rpc - LABEL_23_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_23_7);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_23_8);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_23_10);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_23_11);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_23_13);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_23_14);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_23_4);
      goto rexp_case_fold_11;

    case 8:
      current_block = (Rpc - LABEL_23_6);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_23_17);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_case_fold_19)
DEFLABEL (rexp_case_fold_11)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_21;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;

DEFLABEL (label_21)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (current_block [OBJECT_23_3]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_23_4]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));

DEFLABEL (label_20)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_24;

DEFLABEL (label_23)
  Rvl = (Rsp [0]);
  goto label_20;

DEFLABEL (label_24)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_23_1]);
  (* (--Rsp)) = (Wrd30.Obj);
  if (! ((Wrd24.uLng) == 1))
    goto label_34;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_23_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_32;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_23_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_30;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [1]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_29)
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd72.Obj) = ((Wrd69.pObj) [0]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if ((Wrd73.uLng) == 50)
    goto label_28;
  Wrd68 = Wrd72;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd68.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_9]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_23_6);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_26;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_25)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 1);

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_8])), (Wrd69.pObj));

DEFLABEL (label_16)
  (Wrd68.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_14]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define ENVIRONMENT_LABEL_24_3 12
#define DEBUGGING_LABEL_24_2 11
#define EXECUTE_CACHE_24_7 7
#define EXECUTE_CACHE_24_6 9
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto rexp_compile_1;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_compile_4)
DEFLABEL (rexp_compile_1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_8 5
#define LABEL_25_9 7
#define LABEL_25_11 9
#define LABEL_25_6 11
#define LABEL_25_21 13
#define LABEL_25_24 15
#define LABEL_25_20 17
#define LABEL_25_27 19
#define LABEL_25_29 21
#define LABEL_25_19 23
#define LABEL_25_17 25
#define LABEL_25_18 27
#define LABEL_25_34 29
#define LABEL_25_36 31
#define LABEL_25_16 33
#define LABEL_25_38 35
#define LABEL_25_15 37
#define LABEL_25_14 39
#define LABEL_25_13 41
#define LABEL_25_12 43
#define LABEL_25_41 45
#define LABEL_25_42 47
#define LABEL_25_43 49
#define LABEL_25_10 51
#define LABEL_25_28 53
#define LABEL_25_30 55
#define LABEL_25_33 57
#define LABEL_25_35 59
#define LABEL_25_48 61
#define LABEL_25_39 63
#define ENVIRONMENT_LABEL_25_3 143
#define DEBUGGING_LABEL_25_2 142
#define OBJECT_25_44 141
#define OBJECT_25_43 140
#define OBJECT_25_42 139
#define OBJECT_25_41 138
#define OBJECT_25_40 137
#define OBJECT_25_39 136
#define OBJECT_25_38 135
#define OBJECT_25_37 134
#define OBJECT_25_36 133
#define OBJECT_25_35 132
#define OBJECT_25_34 131
#define OBJECT_25_33 130
#define OBJECT_25_32 129
#define OBJECT_25_31 128
#define OBJECT_25_30 127
#define OBJECT_25_29 126
#define OBJECT_25_28 125
#define OBJECT_25_27 124
#define OBJECT_25_26 123
#define OBJECT_25_25 122
#define OBJECT_25_24 121
#define OBJECT_25_23 120
#define OBJECT_25_22 119
#define OBJECT_25_21 118
#define OBJECT_25_20 117
#define OBJECT_25_19 116
#define OBJECT_25_18 115
#define OBJECT_25_17 114
#define OBJECT_25_16 113
#define OBJECT_25_15 112
#define OBJECT_25_14 111
#define OBJECT_25_13 110
#define OBJECT_25_12 109
#define OBJECT_25_11 108
#define OBJECT_25_10 107
#define OBJECT_25_9 106
#define OBJECT_25_8 105
#define OBJECT_25_7 104
#define OBJECT_25_6 103
#define OBJECT_25_5 102
#define OBJECT_25_4 101
#define OBJECT_25_3 100
#define OBJECT_25_2 99
#define OBJECT_25_1 98
#define OBJECT_25_0 97
#define EXECUTE_CACHE_25_47 65
#define EXECUTE_CACHE_25_46 67
#define EXECUTE_CACHE_25_45 69
#define EXECUTE_CACHE_25_44 71
#define EXECUTE_CACHE_25_37 73
#define EXECUTE_CACHE_25_32 75
#define EXECUTE_CACHE_25_31 77
#define EXECUTE_CACHE_25_40 79
#define EXECUTE_CACHE_25_26 81
#define EXECUTE_CACHE_25_25 83
#define EXECUTE_CACHE_25_23 85
#define EXECUTE_CACHE_25_22 87
#define EXECUTE_CACHE_25_7 89
#define EXECUTE_CACHE_25_5 91
#define FREE_REFERENCE_25_2 94
#define FREE_REFERENCE_25_1 95
#define FREE_REFERENCE_25_0 96
#define FREE_REFERENCES_LABEL_25_0 64
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd93;
  machine_word Wrd91;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd124;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd118;
  machine_word Wrd142;
  machine_word Wrd140;
  machine_word Wrd127;
  machine_word Wrd133;
  machine_word Wrd139;
  machine_word Wrd149;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd143;
  machine_word Wrd162;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd151;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd171;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd29;
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
      current_block = (Rpc - LABEL_25_4);
      goto rexp__regexp_57;

    case 1:
      current_block = (Rpc - LABEL_25_8);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_25_9);
      goto label_60;

    case 3:
      current_block = (Rpc - LABEL_25_11);
      goto label_61;

    case 4:
      current_block = (Rpc - LABEL_25_6);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_25_21);
      goto label_59;

    case 6:
      current_block = (Rpc - LABEL_25_24);
      goto lambda_0;

    case 7:
      current_block = (Rpc - LABEL_25_20);
      goto continuation_40;

    case 8:
      current_block = (Rpc - LABEL_25_27);
      goto lambda_18;

    case 9:
      current_block = (Rpc - LABEL_25_29);
      goto label_62;

    case 10:
      current_block = (Rpc - LABEL_25_19);
      goto continuation_41;

    case 11:
      current_block = (Rpc - LABEL_25_17);
      goto continuation_43;

    case 12:
      current_block = (Rpc - LABEL_25_18);
      goto continuation_42;

    case 13:
      current_block = (Rpc - LABEL_25_34);
      goto lambda_10;

    case 14:
      current_block = (Rpc - LABEL_25_36);
      goto label_63;

    case 15:
      current_block = (Rpc - LABEL_25_16);
      goto continuation_47;

    case 16:
      current_block = (Rpc - LABEL_25_38);
      goto lambda_14;

    case 17:
      current_block = (Rpc - LABEL_25_15);
      goto continuation_48;

    case 18:
      current_block = (Rpc - LABEL_25_14);
      goto continuation_49;

    case 19:
      current_block = (Rpc - LABEL_25_13);
      goto continuation_50;

    case 20:
      current_block = (Rpc - LABEL_25_12);
      goto continuation_51;

    case 21:
      current_block = (Rpc - LABEL_25_41);
      goto lambda_12;

    case 22:
      current_block = (Rpc - LABEL_25_42);
      goto label_64;

    case 23:
      current_block = (Rpc - LABEL_25_43);
      goto label_65;

    case 24:
      current_block = (Rpc - LABEL_25_10);
      goto continuation_52;

    case 25:
      current_block = (Rpc - LABEL_25_28);
      goto continuation_16;

    case 26:
      current_block = (Rpc - LABEL_25_30);
      goto continuation_15;

    case 27:
      current_block = (Rpc - LABEL_25_33);
      goto continuation_45;

    case 28:
      current_block = (Rpc - LABEL_25_35);
      goto continuation_7;

    case 29:
      current_block = (Rpc - LABEL_25_48);
      goto label_66;

    case 30:
      current_block = (Rpc - LABEL_25_39);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp__regexp_68)
DEFLABEL (rexp__regexp_57)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 30))
    goto label_74;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_5]));

DEFLABEL (label_74)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_23]));

DEFLABEL (label_75)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_78;

DEFLABEL (label_77)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_76)
  Rdl = (& (Rsp [2]));
  goto lambda_0;

DEFLABEL (label_78)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  if (! ((Wrd8.uLng) == 1))
    goto label_109;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_108)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_22]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_25_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_107;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_106)
  (Wrd35.Obj) = (Rsp [0]);
  if (! ((Wrd35.Obj) == (current_block [OBJECT_25_1])))
    goto label_79;
  (Wrd163.Obj) = (current_block [OBJECT_25_2]);
  (* (--Rsp)) = (Wrd163.Obj);
  (Wrd164.Obj) = (current_block [OBJECT_25_3]);
  (* (--Rsp)) = (Wrd164.Obj);
  (Wrd165.Obj) = (current_block [OBJECT_25_3]);
  (Rsp [2]) = (Wrd165.Obj);
  (Wrd168.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd168.Obj);
  (Wrd169.pObj) = (& (Rsp [4]));
  (Wrd171.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd169.pObj)));
  (* (--Rsp)) = (Wrd171.Obj);
  goto lambda_12;

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_25_10);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_45]));

DEFLABEL (label_79)
  if ((Wrd35.Obj) == (current_block [OBJECT_25_4]))
    goto label_103;
  if (! ((Wrd35.Obj) == (current_block [OBJECT_25_5])))
    goto label_80;
  (Wrd143.Obj) = (current_block [OBJECT_25_6]);
  (* (--Rsp)) = (Wrd143.Obj);
  (Wrd146.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_13]))));
  (* (--Rsp)) = (Wrd146.Obj);
  (Wrd147.pObj) = (& (Rsp [3]));
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd147.pObj)));
  (* (--Rsp)) = (Wrd149.Obj);
  goto lambda_14;

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_25_13);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_25_42]);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_40]));

DEFLABEL (label_80)
  if ((Wrd35.Obj) == (current_block [OBJECT_25_7]))
    goto label_102;
  if ((Wrd35.Obj) == (current_block [OBJECT_25_8]))
    goto label_101;
  if ((Wrd35.Obj) == (current_block [OBJECT_25_9]))
    goto label_99;
  if (! ((Wrd35.Obj) == (current_block [OBJECT_25_10])))
    goto label_83;
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_17]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_18]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (Wrd122.pObj) = (& (Rsp [3]));
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd122.pObj)));
  (* (--Rsp)) = (Wrd124.Obj);
  goto lambda_10;

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_25_18);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 30))
    goto label_81;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_32]));

DEFLABEL (label_81)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_33]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_25_33);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_47]));

DEFLABEL (label_82)
  (Wrd8.pObj) = (& (Rsp [3]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (Rsp [0]) = (Wrd10.Obj);
  Rdl = (& (Rsp [1]));
  goto lambda_0;

DEFLABEL (label_83)
  if ((Wrd35.Obj) == (current_block [OBJECT_25_11]))
    goto label_98;
  if ((Wrd35.Obj) == (current_block [OBJECT_25_13]))
    goto label_97;
  if ((Wrd35.Obj) == (current_block [OBJECT_25_15]))
    goto label_96;
  if ((Wrd35.Obj) == (current_block [OBJECT_25_17]))
    goto label_95;
  if ((Wrd35.Obj) == (current_block [OBJECT_25_19]))
    goto label_94;
  if ((Wrd35.Obj) == (current_block [OBJECT_25_21]))
    goto label_93;
  if ((Wrd35.Obj) == (current_block [OBJECT_25_23]))
    goto label_92;
  if ((Wrd35.Obj) == (current_block [OBJECT_25_25]))
    goto label_91;
  if ((Wrd35.Obj) == (current_block [OBJECT_25_27]))
    goto label_90;
  if ((Wrd35.Obj) == (current_block [OBJECT_25_29]))
    goto label_89;
  if ((Wrd35.Obj) == (current_block [OBJECT_25_31]))
    goto label_87;
  if ((Wrd35.Obj) == (current_block [OBJECT_25_33]))
    goto label_86;
  if ((Wrd35.Obj) == (current_block [OBJECT_25_35]))
    goto label_84;
  (Wrd76.pObj) = (& (Rsp [1]));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd76.pObj)));
  (Rsp [0]) = (Wrd78.Obj);
  goto label_76;

DEFLABEL (label_84)
  (Wrd80.Obj) = (current_block [OBJECT_25_36]);
  (Rsp [0]) = (Wrd80.Obj);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_20]))));
  (* (--Rsp)) = (Wrd83.Obj);

DEFLABEL (label_85)
  (Wrd91.pObj) = (& (Rsp [2]));
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd91.pObj)));
  (* (--Rsp)) = (Wrd93.Obj);
  goto lambda_18;

DEFLABEL (label_86)
  (Wrd87.Obj) = (current_block [OBJECT_25_34]);
  (Rsp [0]) = (Wrd87.Obj);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_19]))));
  (* (--Rsp)) = (Wrd90.Obj);
  goto label_85;

DEFLABEL (label_87)
  Rvl = (current_block [OBJECT_25_32]);

DEFLABEL (label_88)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_89)
  Rvl = (current_block [OBJECT_25_30]);
  goto label_88;

DEFLABEL (label_90)
  Rvl = (current_block [OBJECT_25_28]);
  goto label_88;

DEFLABEL (label_91)
  Rvl = (current_block [OBJECT_25_26]);
  goto label_88;

DEFLABEL (label_92)
  Rvl = (current_block [OBJECT_25_24]);
  goto label_88;

DEFLABEL (label_93)
  Rvl = (current_block [OBJECT_25_22]);
  goto label_88;

DEFLABEL (label_94)
  Rvl = (current_block [OBJECT_25_20]);
  goto label_88;

DEFLABEL (label_95)
  Rvl = (current_block [OBJECT_25_18]);
  goto label_88;

DEFLABEL (label_96)
  Rvl = (current_block [OBJECT_25_16]);
  goto label_88;

DEFLABEL (label_97)
  Rvl = (current_block [OBJECT_25_14]);
  goto label_88;

DEFLABEL (label_98)
  Rvl = (current_block [OBJECT_25_12]);
  goto label_88;

DEFLABEL (label_99)
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_16]))));
  (* (--Rsp)) = (Wrd127.Obj);

DEFLABEL (label_100)
  (Wrd140.pObj) = (& (Rsp [2]));
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd140.pObj)));
  (* (--Rsp)) = (Wrd142.Obj);
  goto lambda_14;

DEFLABEL (label_101)
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_15]))));
  (* (--Rsp)) = (Wrd133.Obj);
  goto label_100;

DEFLABEL (label_102)
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_14]))));
  (* (--Rsp)) = (Wrd139.Obj);
  goto label_100;

DEFLABEL (label_103)
  (Wrd152.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd155.Obj) = ((Wrd152.pObj) [0]);
  (Wrd156.uLng) = (OBJECT_TYPE (Wrd155.Obj));
  if ((Wrd156.uLng) == 50)
    goto label_105;
  Wrd151 = Wrd155;

DEFLABEL (label_104)
  (Rsp [0]) = (Wrd151.Obj);
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_12]))));
  (* (--Rsp)) = (Wrd159.Obj);
  (Wrd160.pObj) = (& (Rsp [2]));
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd160.pObj)));
  (* (--Rsp)) = (Wrd162.Obj);
  goto lambda_12;

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_25_12);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_43]), 2);

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_11])), (Wrd152.pObj));

DEFLABEL (label_61)
  (Wrd151.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_21]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_37]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_108;

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_25_17);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_31]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_25_20);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_26]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_25_19);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_26]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_25_16);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_25_39]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_26]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_25_15);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_25_40]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_26]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_25_14);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_25_41]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_26]));

DEFLABEL (lambda_69)
DEFLABEL (lambda_0)
  DLINK_INTERRUPT_CHECK (25, LABEL_25_24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25_38]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_25]));

DEFLABEL (lambda_70)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_25_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_113;
  Wrd8 = Wrd12;

DEFLABEL (label_112)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_30]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  goto lambda_10;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_25_30);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_46]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_25_28);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_110;
  Rdl = (& (Rsp [2]));
  Rsp = (& (Rsp [1]));
  goto lambda_0;

DEFLABEL (label_110)
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_111;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_111)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_37]), 1);

DEFLABEL (label_113)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_29])), (Wrd9.pObj));

DEFLABEL (label_62)
  (Wrd8.Obj) = Rvl;
  goto label_112;

DEFLABEL (lambda_71)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_25_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_119;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_118)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_37]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_25_35);
  if (Rvl == (current_block [OBJECT_25_44]))
    goto label_114;
  Rdl = (& (Rsp [1]));
  goto lambda_0;

DEFLABEL (label_114)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_117;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd8.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_116)
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_115;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd25.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_115)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_117)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_48]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_37]), 1);

DEFLABEL (label_66)
  (Wrd8.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_36]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_37]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_118;

DEFLABEL (lambda_72)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_25_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_10;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_25_39);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_31]));

DEFLABEL (lambda_73)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_25_41);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_123;
  Wrd5 = Wrd9;

DEFLABEL (label_122)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_121;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd11.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_120)
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_44]));

DEFLABEL (label_121)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_43]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_37]), 1);

DEFLABEL (label_65)
  (Wrd11.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_42])), (Wrd6.pObj));

DEFLABEL (label_64)
  (Wrd5.Obj) = Rvl;
  goto label_122;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define LABEL_26_8 9
#define LABEL_26_7 11
#define LABEL_26_10 13
#define LABEL_26_13 15
#define LABEL_26_17 17
#define LABEL_26_14 19
#define LABEL_26_11 21
#define LABEL_26_16 23
#define LABEL_26_18 25
#define LABEL_26_19 27
#define LABEL_26_22 29
#define LABEL_26_23 31
#define ENVIRONMENT_LABEL_26_3 60
#define DEBUGGING_LABEL_26_2 59
#define OBJECT_26_6 58
#define OBJECT_26_5 57
#define OBJECT_26_4 56
#define OBJECT_26_3 55
#define OBJECT_26_2 54
#define OBJECT_26_1 53
#define OBJECT_26_0 52
#define EXECUTE_CACHE_26_26 33
#define EXECUTE_CACHE_26_25 35
#define EXECUTE_CACHE_26_24 37
#define EXECUTE_CACHE_26_21 39
#define EXECUTE_CACHE_26_20 41
#define EXECUTE_CACHE_26_15 43
#define EXECUTE_CACHE_26_12 45
#define EXECUTE_CACHE_26_9 47
#define FREE_REFERENCE_26_1 50
#define FREE_REFERENCE_26_0 51
#define FREE_REFERENCES_LABEL_26_0 32
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_26_4);
      goto case_fold_string_20;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto loop_17;

    case 3:
      current_block = (Rpc - LABEL_26_8);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_26_10);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_26_13);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_26_17);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_26_14);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_26_11);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_26_16);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_26_18);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_26_19);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_26_22);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_26_23);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (case_fold_string_27)
DEFLABEL (case_fold_string_20)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_30;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_29)
  (Wrd16.Obj) = (current_block [OBJECT_26_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_26_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto loop_17;

DEFLABEL (label_30)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (loop_28)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_26_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_37;
  Wrd8 = Wrd12;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_14]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_15]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_26_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_26_13);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd29.Obj) = (Rsp [6]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 30))
    goto label_32;
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_32;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) (Wrd24.Lng)) < ((unsigned long) (Wrd28.Lng))))
    goto label_32;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  (Wrd18.pChr) = (& ((Wrd26.pChr) [(Wrd15.Lng)]));
  (Wrd19.uLng) = ((unsigned long) (((unsigned char *) (Wrd18.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd20.Obj) = (MAKE_OBJECT (2, (Wrd19.uLng)));
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_31)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_18]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_19]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_26_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_25]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_26_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_24]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_26_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_25]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_26_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_26_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_26_6]);
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_26]));

DEFLABEL (label_32)
  (Wrd31.Obj) = (Rsp [6]);
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_17]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_3]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_35;
  Wrd17 = Wrd21;

DEFLABEL (label_34)
  (Rsp [3]) = (Wrd17.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_11);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_4]), 2);

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_10])), (Wrd18.pObj));

DEFLABEL (label_24)
  (Wrd17.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_8])), (Wrd9.pObj));

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_36;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_26_16);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd12.Lng) + 1L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_7 7
#define LABEL_27_9 9
#define LABEL_27_11 11
#define LABEL_27_12 13
#define LABEL_27_8 15
#define LABEL_27_13 17
#define LABEL_27_15 19
#define LABEL_27_14 21
#define LABEL_27_17 23
#define ENVIRONMENT_LABEL_27_3 40
#define DEBUGGING_LABEL_27_2 39
#define OBJECT_27_3 38
#define OBJECT_27_2 37
#define OBJECT_27_1 36
#define OBJECT_27_0 35
#define EXECUTE_CACHE_27_18 25
#define EXECUTE_CACHE_27_16 27
#define EXECUTE_CACHE_27_10 29
#define EXECUTE_CACHE_27_6 31
#define FREE_REFERENCE_27_0 34
#define FREE_REFERENCES_LABEL_27_0 24
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_27_4);
      goto case_fold_char_set_14;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto loop_12;

    case 3:
      current_block = (Rpc - LABEL_27_9);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_27_11);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_27_12);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_27_8);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_27_13);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_27_15);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_27_14);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_27_17);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (case_fold_char_set_22)
DEFLABEL (case_fold_char_set_14)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd5.Obj);
  goto loop_12;

DEFLABEL (loop_23)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_27_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_26;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_25;
  Wrd8 = Wrd12;

DEFLABEL (label_24)
  (Rsp [0]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_11])), (Wrd9.pObj));

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_36;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_27_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_33;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_32)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_27_14);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_31;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_27_12);
  (Wrd29.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));

DEFLABEL (label_29)
  (Rsp [1]) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_28;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd20.Obj);
  goto loop_12;

DEFLABEL (label_28)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_13]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 1);

DEFLABEL (label_19)
  (Wrd20.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_31)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_17]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd19.Obj) = (Rsp [1]);
  goto label_29;

DEFLABEL (label_36)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_8 7
#define LABEL_28_7 9
#define LABEL_28_9 11
#define LABEL_28_11 13
#define LABEL_28_10 15
#define LABEL_28_13 17
#define LABEL_28_14 19
#define LABEL_28_16 21
#define LABEL_28_17 23
#define LABEL_28_19 25
#define LABEL_28_15 27
#define LABEL_28_18 29
#define ENVIRONMENT_LABEL_28_3 47
#define DEBUGGING_LABEL_28_2 46
#define OBJECT_28_2 45
#define OBJECT_28_1 44
#define OBJECT_28_0 43
#define EXECUTE_CACHE_28_22 31
#define EXECUTE_CACHE_28_21 33
#define EXECUTE_CACHE_28_20 35
#define EXECUTE_CACHE_28_12 37
#define EXECUTE_CACHE_28_6 39
#define FREE_REFERENCE_28_0 42
#define FREE_REFERENCES_LABEL_28_0 30
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd74;
  machine_word Wrd81;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd53;
  machine_word Wrd63;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd94;
  machine_word Wrd90;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd100;
  machine_word Wrd96;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_28_4);
      goto rexp_n_m_15;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_28_9);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_28_11);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_28_10);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_28_13);
      goto loop_12;

    case 8:
      current_block = (Rpc - LABEL_28_14);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_28_16);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_28_17);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_28_19);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_28_15);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_28_18);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_n_m_24)
DEFLABEL (rexp_n_m_15)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_30;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_30;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd31.Lng) > (Wrd33.Lng)))
    goto label_28;

DEFLABEL (label_29)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_28_8);

DEFLABEL (label_28)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_27;
  Wrd19 = Wrd23;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_28_10);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_28_2]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [6]));
  goto loop_12;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_11])), (Wrd20.pObj));

DEFLABEL (label_18)
  (Wrd19.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_29;

DEFLABEL (loop_25)
DEFLABEL (loop_12)
  DLINK_INTERRUPT_CHECK (25, LABEL_28_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_40;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_40;
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd96.Lng) > (Wrd100.Lng))
    goto label_35;

DEFLABEL (label_34)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_15]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_32;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd44.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd42.Lng)))
    goto label_32;
  (Wrd45.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_31)
  Rdl = (& (Rsp [2]));
  goto loop_12;

DEFLABEL (label_32)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_16]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_20)
DEFLABEL (label_33)
  (Wrd74.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd74.Obj));
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_35)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_39;
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [2]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_39;
  (Wrd90.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  (Wrd94.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! ((Wrd90.Lng) > (Wrd94.Lng)))
    goto label_37;

DEFLABEL (label_36)
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_20]));

DEFLABEL (label_37)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_18]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [3]);
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd71.pObj)));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd82.Obj) = (Rsp [3]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 26))
    goto label_38;
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  (Wrd84.Lng) = ((Wrd86.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd84.Lng)))
    goto label_38;
  (Wrd87.Obj) = (LONG_TO_FIXNUM (Wrd84.Lng));
  (* (--Rsp)) = (Wrd87.Obj);
  goto label_31;

DEFLABEL (label_38)
  (Wrd78.Obj) = (Rsp [3]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_19]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_22)
  goto label_33;

DEFLABEL (label_39)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd58.Obj) = ((Wrd60.pObj) [2]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_17]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_21)
  (Wrd53.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd53.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_36;

DEFLABEL (label_40)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_14]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_19)
  (Wrd11.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd11.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_35;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_28_15);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_28_18);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_22]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define ENVIRONMENT_LABEL_29_3 10
#define DEBUGGING_LABEL_29_2 9
#define OBJECT_29_0 8
#define FREE_REFERENCE_29_0 7
#define FREE_REFERENCES_LABEL_29_0 6
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_29_4);
      goto rexp_n_n_2;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_n_n_6)
DEFLABEL (rexp_n_n_2)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_8;
  Wrd15 = Wrd19;

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 2);

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_5])), (Wrd16.pObj));

DEFLABEL (label_4)
  (Wrd15.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define ENVIRONMENT_LABEL_30_3 11
#define DEBUGGING_LABEL_30_2 10
#define OBJECT_30_1 9
#define OBJECT_30_0 8
#define FREE_REFERENCE_30_0 7
#define FREE_REFERENCES_LABEL_30_0 6
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_30_4);
      goto rexp__n_2;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp__n_6)
DEFLABEL (rexp__n_2)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_30_0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_8;
  Wrd15 = Wrd19;

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_5])), (Wrd16.pObj));

DEFLABEL (label_4)
  (Wrd15.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_8 7
#define LABEL_31_7 9
#define LABEL_31_9 11
#define LABEL_31_11 13
#define LABEL_31_12 15
#define LABEL_31_15 17
#define LABEL_31_14 19
#define ENVIRONMENT_LABEL_31_3 35
#define DEBUGGING_LABEL_31_2 34
#define OBJECT_31_2 33
#define OBJECT_31_1 32
#define OBJECT_31_0 31
#define EXECUTE_CACHE_31_16 21
#define EXECUTE_CACHE_31_13 23
#define EXECUTE_CACHE_31_10 25
#define EXECUTE_CACHE_31_6 27
#define FREE_REFERENCE_31_0 30
#define FREE_REFERENCES_LABEL_31_0 20
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rexp_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_31_4);
      goto rexp_n__10;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_31_8);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_31_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_31_9);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_31_11);
      goto loop_7;

    case 6:
      current_block = (Rpc - LABEL_31_12);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_31_15);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_31_14);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rexp_n__17)
DEFLABEL (rexp_n__10)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_23;
  Wrd9 = Wrd13;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_21;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd19.Lng) == 0)
    goto label_20;

DEFLABEL (label_19)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_31_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  Rdl = (& (Rsp [5]));
  goto loop_7;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_10]));

DEFLABEL (label_21)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_8])), (Wrd10.pObj));

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_22;

DEFLABEL (loop_18)
DEFLABEL (loop_7)
  DLINK_INTERRUPT_CHECK (25, LABEL_31_11);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_28;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_28;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd51.Lng) < (Wrd55.Lng))
    goto label_25;

DEFLABEL (label_24)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_13]));

DEFLABEL (label_25)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_14]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_27;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  (Wrd45.Lng) = ((Wrd47.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd45.Lng)))
    goto label_27;
  (Wrd48.Obj) = (LONG_TO_FIXNUM (Wrd45.Lng));
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_26)
  Rdl = (& (Rsp [2]));
  goto loop_7;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_31_14);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_16]));

DEFLABEL (label_27)
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_15]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_15)
  (Wrd35.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd35.Obj));
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_12]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_14)
  (Wrd11.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd11.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_25;

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
rexp_so_a1cd350910aec8a4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	2,
	1,
	2,
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
	0,
	0,
	0,
	2,
	2,
	2,
	2,
	1,
	1,
	1,
	0,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 31)
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

static const struct liarc_code_S arr_decl_rexp_so_a1cd350910aec8a4 [31] =
  {
    { "rexp_so_code_1", 28, rexp_so_code_1 },
    { "rexp_so_code_2", 1, rexp_so_code_2 },
    { "rexp_so_code_3", 3, rexp_so_code_3 },
    { "rexp_so_code_4", 5, rexp_so_code_4 },
    { "rexp_so_code_5", 4, rexp_so_code_5 },
    { "rexp_so_code_6", 4, rexp_so_code_6 },
    { "rexp_so_code_7", 4, rexp_so_code_7 },
    { "rexp_so_code_8", 4, rexp_so_code_8 },
    { "rexp_so_code_9", 9, rexp_so_code_9 },
    { "rexp_so_code_10", 1, rexp_so_code_10 },
    { "rexp_so_code_11", 1, rexp_so_code_11 },
    { "rexp_so_code_12", 1, rexp_so_code_12 },
    { "rexp_so_code_13", 1, rexp_so_code_13 },
    { "rexp_so_code_14", 1, rexp_so_code_14 },
    { "rexp_so_code_15", 1, rexp_so_code_15 },
    { "rexp_so_code_16", 1, rexp_so_code_16 },
    { "rexp_so_code_17", 1, rexp_so_code_17 },
    { "rexp_so_code_18", 1, rexp_so_code_18 },
    { "rexp_so_code_19", 1, rexp_so_code_19 },
    { "rexp_so_code_20", 1, rexp_so_code_20 },
    { "rexp_so_code_21", 1, rexp_so_code_21 },
    { "rexp_so_code_22", 1, rexp_so_code_22 },
    { "rexp_so_code_23", 10, rexp_so_code_23 },
    { "rexp_so_code_24", 2, rexp_so_code_24 },
    { "rexp_so_code_25", 31, rexp_so_code_25 },
    { "rexp_so_code_26", 15, rexp_so_code_26 },
    { "rexp_so_code_27", 11, rexp_so_code_27 },
    { "rexp_so_code_28", 14, rexp_so_code_28 },
    { "rexp_so_code_29", 2, rexp_so_code_29 },
    { "rexp_so_code_30", 2, rexp_so_code_30 },
    { "rexp_so_code_31", 9, rexp_so_code_31 }
  };

int
decl_rexp_so_a1cd350910aec8a4 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rexp_so_a1cd350910aec8a4);
  return (0);
}

DECLARE_COMPILED_CODE ("rexp.so", 3, decl_rexp_so_a1cd350910aec8a4, rexp_so_a1cd350910aec8a4)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rexp_so_data_a1cd350910aec8a4 [3967] =
  "\xab\x01\x40\xff\x08\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x81\x08\x0d"
  "\xb9\x0d\xba\x0d\xbb\x0d\xbc\x0d\xbd\x0d\xbe\x0d\xbf\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x08\x14\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\xc1\x1c\xc1\x1c\x07\x0d\x1c"
  "\x0d\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x1b\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x83\x88\x0c\x1b\x1b\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x1b\x1b"
  "\x1b\x1b\x1b\x08\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x08\x1b\x1b\xc2\x1c"
  "\x0d\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x86\x88\x1b\x08\x1b\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x1b\x1b"
  "\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x08\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x08\x1b"
  "\x1b\x1b\x1b\x1b\x08\x8c\x1b\x81\x80\xc1\x1c\x1b\x24\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x08\x88"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xb4\x08\x88\x22\x29\x21"
  "\x9d\x2b\x1c\x1d\xb0\x02\x88\xb5\x08\x88\x22\x29\x21\x9d\x2b\x1c"
  "\x1d\xb0\x02\x88\xb6\x08\x88\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\xb7\x08\x88\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\x08"
  "\x88\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x88\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x88\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x08\x88\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x08\x88\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x08\x88\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xb2\x08\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x08\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x08\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x08\x8d\x1b"
  "\x0d\x1c\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x1b\x0c\x0c\x0c"
  "\x0c\x0c\x1b\x0c\xb1\x0c\xb2\x0c\x1b\x0c\x1b\x0c\x1b\x0c\x1b\x0c"
  "\x1b\x0c\x1b\x0c\xb7\x0c\xb6\x0c\xb5\x0c\xb4\x0c\xb3\x1b\x1b\x1b"
  "\x1b\x0c\x1b\x1b\x0c\x0c\x1b\x1b\x0d\x1c\x1b\x1b\x24\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x0c\x1b\xc2\x80\x08\x1b\x0d\x1b\x24\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x08\x0d\x24\x28\x0d\x28\x0d"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x81\x1b\x0d\x1c\x1b\x24\x28\x0d\x1c\x28\x0d\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x24\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x1b\x24\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x1b\x0d\x1c\x1b\x24\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x0d\x0c\x88\x0d\x0c\x88\x0d\x0c\x88\x0d\x0c\x88\x0d\x0c\x88\x0d"
  "\x0c\x88\x0d\x0c\x88\x0d\x0c\x88\x0d\x0c\x88\x0d\x0c\x88\x0d\x0c"
  "\x88\x0d\x0c\x88\x0d\x0c\x88\x08\x14\xb4\xb5\xb6\xb7\x1b\x1b\x1b"
  "\x1b\x08\x8f\x1b\x2a\x17\x1b\x0d\x0d\x1b\x1b\x1b\x1b\x0d\x1b\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x1b"
  "\x0d\x1b\x1b\x0d\x1b\x1b\x1b\x17\x28\x0d\x26\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x02\x53\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x72"
  "\x65\x78\x70\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69"
  "\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x10\x6e\x6f"
  "\x74\x2d\x73\x79\x6e\x74\x61\x78\x2d\x63\x68\x61\x72\x0c\x73\x79"
  "\x6e\x74\x61\x78\x2d\x63\x68\x61\x72\x09\x61\x6e\x79\x2d\x63\x68"
  "\x61\x72\x0b\x6c\x69\x6e\x65\x2d\x73\x74\x61\x72\x74\x09\x6c\x69"
  "\x6e\x65\x2d\x65\x6e\x64\x0d\x73\x74\x72\x69\x6e\x67\x2d\x73\x74"
  "\x61\x72\x74\x0b\x73\x74\x72\x69\x6e\x67\x2d\x65\x6e\x64\x0a\x77"
  "\x6f\x72\x64\x2d\x65\x64\x67\x65\x09\x0e\x6e\x6f\x74\x2d\x77\x6f"
  "\x72\x64\x2d\x65\x64\x67\x65\x0a\x0b\x77\x6f\x72\x64\x2d\x73\x74"
  "\x61\x72\x74\x0b\x09\x77\x6f\x72\x64\x2d\x65\x6e\x64\x0c\x0a\x77"
  "\x6f\x72\x64\x2d\x63\x68\x61\x72\x0d\x0e\x6e\x6f\x74\x2d\x77\x6f"
  "\x72\x64\x2d\x63\x68\x61\x72\x0e\x0b\x0a\x63\x61\x73\x65\x2d\x66"
  "\x6f\x6c\x64\x0f\x02\x2b\x10\x02\x2a\x11\x09\x6f\x70\x74\x69\x6f"
  "\x6e\x61\x6c\x12\x06\x67\x72\x6f\x75\x70\x13\x09\x73\x65\x71\x75"
  "\x65\x6e\x63\x65\x14\x0d\x61\x6c\x74\x65\x72\x6e\x61\x74\x69\x76"
  "\x65\x73\x15\x04\x63\x61\x72\x16\x04\x63\x64\x72\x17\x06\x72\x65"
  "\x78\x70\x3f\x18\x04\x65\x78\x70\x14\x62\x6f\x75\x6e\x64\x61\x72"
  "\x79\x2d\x72\x65\x78\x70\x2d\x74\x79\x70\x65\x73\x19\x12\x73\x79"
  "\x6e\x74\x61\x78\x2d\x74\x79\x70\x65\x2d\x61\x6c\x69\x73\x74\x1a"
  "\x05\x03\x0a\x63\x68\x61\x72\x2d\x73\x65\x74\x3f\x1b\x03\x06\x6c"
  "\x69\x73\x74\x3f\x1c\x04\x09\x66\x6f\x72\x2d\x61\x6c\x6c\x3f\x03"
  "\x07\x6c\x65\x6e\x67\x74\x68\x1d\x04\x05\x6d\x65\x6d\x71\x1e\x03"
  "\x0d\x73\x74\x72\x69\x6e\x67\x2d\x6e\x75\x6c\x6c\x3f\x1f\x04\x05"
  "\x61\x73\x73\x71\x20\x03\x18\x09\x1f\x3a\x81\x83\x02\x1e\x38\x81"
  "\x83\x02\x1d\x36\x81\x83\x02\x1c\x34\x81\x85\x02\x1b\x32\x81\x85"
  "\x02\x1a\x30\x81\x85\x02\x19\x2e\x81\x85\x02\x18\x2c\x81\x85\x02"
  "\x17\x2a\x81\x83\x02\x16\x28\x81\x89\x02\x15\x26\x81\x87\x02\x14"
  "\x24\x81\x85\x02\x13\x22\x81\x85\x02\x12\x20\x81\x85\x02\x11\x1e"
  "\x81\x85\x02\x10\x1c\x81\x85\x02\x0f\x1a\x81\x85\x02\x0e\x18\x81"
  "\x85\x02\x0d\x16\x81\x85\x02\x0c\x14\x81\x85\x02\x0b\x12\x81\x87"
  "\x02\x0a\x10\x81\x85\x02\x09\x0e\x81\x85\x02\x08\x0c\x81\x83\x02"
  "\x07\x0a\x81\x85\x02\x06\x08\x81\x87\x02\x05\x06\x81\x83\x02\x04"
  "\x04\x83\x04\x39\x61\x21\x02\x15\x20\x04\xff\x03\x03\x22\x02\x01"
  "\x16\x14\x17\x03\x17\x73\x69\x6d\x70\x6c\x69\x66\x79\x2d\x73\x65"
  "\x71\x75\x65\x6e\x63\x65\x2d\x61\x72\x67\x73\x23\x02\x23\x08\x81"
  "\x83\x02\x22\x06\x81\x83\x02\x21\x04\xff\x03\x07\x11\x24\x02\x13"
  "\x15\x17\x14\x16\x04\x0b\x61\x70\x70\x65\x6e\x64\x2d\x6d\x61\x70"
  "\x03\x1f\x03\x28\x0c\x81\x83\x02\x27\x0a\x81\x83\x02\x26\x08\x83"
  "\x04\x25\x06\x81\x83\x02\x24\x04\x83\x04\x0b\x19\x1f\x02\x13\x16"
  "\x06\x61\x70\x70\x6c\x79\x25\x0e\x72\x65\x78\x70\x2d\x73\x65\x71"
  "\x75\x65\x6e\x63\x65\x26\x02\x2c\x0a\x81\x83\x02\x2b\x08\x81\x83"
  "\x02\x2a\x06\x81\x87\x02\x29\x04\xff\x03\x09\x12\x27\x02\x12\x25"
  "\x26\x02\x03\x0e\x72\x65\x78\x70\x2d\x67\x72\x6f\x75\x70\x69\x66"
  "\x79\x28\x02\x30\x0a\x81\x85\x02\x2f\x08\x81\x83\x02\x2e\x06\x81"
  "\x89\x02\x2d\x04\xff\x03\x09\x14\x29\x02\x08\x11\x25\x26\x02\x03"
  "\x28\x02\x34\x0a\x81\x85\x02\x33\x08\x81\x83\x02\x32\x06\x81\x89"
  "\x02\x31\x04\xff\x03\x09\x14\x2a\x02\x09\x10\x25\x26\x02\x03\x28"
  "\x02\x38\x0a\x81\x85\x02\x37\x08\x81\x83\x02\x36\x06\x81\x89\x02"
  "\x35\x04\xff\x03\x09\x14\x2b\x02\x0a\x1d\x45\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x20\x63\x61\x6e\x27\x74\x20\x62\x65\x20\x67\x72"
  "\x6f\x75\x70\x65\x64\x3a\x13\x15\x14\x12\x11\x10\x16\x0e\x73\x74"
  "\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x2c\x19\x02\x04\x1e"
  "\x04\x06\x65\x72\x72\x6f\x72\x2d\x03\x41\x14\x81\x83\x02\x40\x12"
  "\x81\x83\x02\x3f\x10\x81\x83\x02\x3e\x0e\x81\x87\x02\x3d\x0c\x81"
  "\x83\x02\x3c\x0a\x81\x87\x02\x3b\x08\x81\x85\x02\x3a\x06\x81\x83"
  "\x02\x39\x04\x83\x04\x13\x25\x2e\x02\x0b\x42\x04\x82\x02\x03\x2f"
  "\x02\x0c\x43\x04\x82\x02\x03\x30\x02\x0d\x44\x04\x82\x02\x03\x31"
  "\x02\x0e\x45\x04\x82\x02\x03\x32\x02\x0f\x46\x04\x82\x02\x03\x33"
  "\x02\x10\x09\x47\x04\x82\x02\x03\x34\x02\x11\x0a\x48\x04\x82\x02"
  "\x03\x35\x02\x12\x0b\x49\x04\x82\x02\x03\x36\x02\x13\x0c\x4a\x04"
  "\x82\x02\x03\x37\x02\x14\x0d\x4b\x04\x82\x02\x03\x38\x02\x15\x0e"
  "\x4c\x04\x82\x02\x03\x39\x02\x16\x4d\x04\x83\x04\x03\x3a\x02\x17"
  "\x4e\x04\x83\x04\x03\x3b\x02\x18\x0f\x16\x15\x14\x13\x12\x11\x10"
  "\x17\x0f\x72\x65\x78\x70\x2d\x63\x61\x73\x65\x2d\x66\x6f\x6c\x64"
  "\x3c\x02\x04\x04\x6d\x61\x70\x3d\x03\x1c\x04\x1e\x03\x1b\x05\x58"
  "\x16\x81\x85\x02\x57\x14\x81\x83\x02\x56\x12\x83\x04\x55\x10\x81"
  "\x87\x02\x54\x0e\x81\x83\x02\x53\x0c\x81\x85\x02\x52\x0a\x81\x83"
  "\x02\x51\x08\x81\x87\x02\x50\x06\x81\x85\x02\x4f\x04\x81\x83\x02"
  "\x15\x28\x1e\x02\x19\x03\x0d\x72\x65\x78\x70\x2d\x3e\x72\x65\x67"
  "\x65\x78\x70\x3e\x04\x13\x72\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x2d\x70\x61\x74\x74\x65\x72\x6e\x03\x5a\x06\x81\x83\x02\x59\x04"
  "\x83\x04\x05\x0d\x3f\x02\x1a\x25\x03\x5c\x29\x02\x3f\x02\x2a\x02"
  "\x2b\x10\x4d\x61\x6c\x66\x6f\x72\x6d\x65\x64\x20\x72\x65\x78\x70"
  "\x3a\x17\x03\x5c\x53\x03\x5c\x73\x03\x5c\x57\x0e\x03\x5c\x77\x0d"
  "\x03\x5c\x3e\x0c\x03\x5c\x3c\x0b\x03\x5c\x42\x0a\x03\x5c\x62\x09"
  "\x03\x5c\x27\x03\x5c\x60\x02\x24\x02\x5e\x02\x2e\x0f\x10\x11\x12"
  "\x03\x5c\x28\x13\x14\x01\x03\x5c\x7c\x15\x16\x0e\x73\x74\x72\x69"
  "\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x15\x1a\x3e\x04\x03\x10\x72"
  "\x65\x2d\x71\x75\x6f\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x14\x03"
  "\x1b\x03\x1c\x03\x11\x63\x68\x61\x72\x2d\x73\x65\x74\x2d\x3e\x72"
  "\x65\x67\x65\x78\x70\x04\x2d\x04\x15\x05\x15\x03\x3e\x03\x11\x63"
  "\x61\x73\x65\x2d\x66\x6f\x6c\x64\x2d\x73\x74\x72\x69\x6e\x67\x2d"
  "\x03\x1d\x04\x3d\x06\x18\x64\x65\x63\x6f\x72\x61\x74\x65\x64\x2d"
  "\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x04\x20\x03"
  "\x13\x63\x61\x73\x65\x2d\x66\x6f\x6c\x64\x2d\x63\x68\x61\x72\x2d"
  "\x73\x65\x74\x3d\x0f\x79\x40\x81\x83\x02\x78\x3e\x81\x83\x02\x77"
  "\x3c\x81\x83\x02\x76\x3a\x81\x83\x02\x75\x38\x81\x87\x02\x74\x36"
  "\x81\x83\x02\x73\x34\x81\x89\x02\x72\x32\x81\x85\x02\x71\x30\x81"
  "\x83\x02\x70\x2e\x81\x83\x02\x6f\x2c\x81\x85\x02\x6e\x2a\x81\x87"
  "\x02\x6d\x28\x81\x85\x02\x6c\x26\x81\x85\x02\x6b\x24\x81\x83\x02"
  "\x6a\x22\x81\x85\x02\x69\x20\x81\x85\x02\x68\x1e\x81\x83\x02\x67"
  "\x1c\x81\x87\x02\x66\x1a\x81\x85\x02\x65\x18\x81\x85\x02\x64\x16"
  "\x81\x85\x02\x63\x14\x81\x83\x02\x62\x12\x81\x85\x02\x61\x10\xff"
  "\xff\x03\x60\x0e\x81\x85\x02\x5f\x0c\x81\x83\x02\x5e\x0a\x81\x85"
  "\x02\x5d\x08\x81\x83\x02\x5c\x06\x81\x83\x02\x5b\x04\x83\x04\x3f"
  "\x90\x01\x20\x02\x1b\x02\x5d\x02\x5b\x25\x0b\x73\x74\x72\x69\x6e"
  "\x67\x2d\x72\x65\x66\x2c\x14\x63\x68\x61\x72\x2d\x73\x65\x74\x3a"
  "\x61\x6c\x70\x68\x61\x62\x65\x74\x69\x63\x15\x03\x06\x20\x73\x75"
  "\x62\x73\x74\x72\x69\x6e\x67\x2d\x66\x69\x6e\x64\x2d\x6e\x65\x78"
  "\x74\x2d\x63\x68\x61\x72\x2d\x69\x6e\x2d\x73\x65\x74\x03\x09\x72"
  "\x65\x76\x65\x72\x73\x65\x21\x05\x0a\x73\x75\x62\x73\x74\x72\x69"
  "\x6e\x67\x03\x0e\x63\x68\x61\x72\x2d\x64\x6f\x77\x6e\x63\x61\x73"
  "\x65\x2c\x03\x14\x03\x0c\x63\x68\x61\x72\x2d\x75\x70\x63\x61\x73"
  "\x65\x1d\x03\x07\x73\x74\x72\x69\x6e\x67\x06\x15\x09\x88\x01\x20"
  "\x81\x87\x02\x87\x01\x1e\x81\x85\x02\x86\x01\x1c\x81\x85\x02\x85"
  "\x01\x1a\x81\x83\x02\x84\x01\x18\x81\x8d\x02\x83\x01\x16\x81\x8b"
  "\x02\x82\x01\x14\x81\x8d\x02\x81\x01\x12\x81\x8f\x02\x80\x01\x10"
  "\x81\x8b\x02\x7f\x0e\x81\x8b\x02\x7e\x0c\x81\x89\x02\x7d\x0a\x81"
  "\x8b\x02\x7c\x08\x81\x89\x02\x7b\x06\x81\x83\x02\x7a\x04\x83\x04"
  "\x1f\x3d\x1c\x02\x1c\x17\x25\x16\x09\x63\x68\x61\x72\x2d\x73\x65"
  "\x74\x02\x03\x11\x63\x68\x61\x72\x2d\x73\x65\x74\x2d\x6d\x65\x6d"
  "\x62\x65\x72\x73\x03\x11\x63\x68\x61\x72\x2d\x61\x6c\x70\x68\x61"
  "\x62\x65\x74\x69\x63\x3f\x03\x2c\x03\x1d\x05\x93\x01\x18\x81\x89"
  "\x02\x92\x01\x16\x81\x85\x02\x91\x01\x14\x81\x87\x02\x90\x01\x12"
  "\x81\x85\x02\x8f\x01\x10\x81\x85\x02\x8e\x01\x0e\x81\x87\x02\x8d"
  "\x01\x0c\x81\x85\x02\x8c\x01\x0a\x81\x87\x02\x8b\x01\x08\x81\x85"
  "\x02\x8a\x01\x06\x81\x83\x02\x89\x01\x04\x83\x04\x17\x29\x2c\x02"
  "\x1d\x25\x09\x72\x65\x78\x70\x2d\x6e\x2a\x6d\x1d\x26\x02\x04\x24"
  "\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x65\x78\x61\x63\x74\x2d"
  "\x6e\x6f\x6e\x6e\x65\x67\x61\x74\x69\x76\x65\x2d\x69\x6e\x74\x65"
  "\x67\x65\x72\x1b\x04\x19\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d"
  "\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x02\x26"
  "\x04\x26\x04\x0e\x72\x65\x78\x70\x2d\x6f\x70\x74\x69\x6f\x6e\x61"
  "\x6c\x17\x06\xa1\x01\x1e\xfd\xff\x03\xa0\x01\x1c\xfd\xff\x03\x9f"
  "\x01\x1a\xfd\xff\x03\x9e\x01\x18\xfd\xff\x03\x9d\x01\x16\xfd\xff"
  "\x03\x9c\x01\x14\xfd\xff\x03\x9b\x01\x12\xff\xff\x03\x9a\x01\x10"
  "\x81\x87\x02\x99\x01\x0e\x81\x8b\x02\x98\x01\x0c\x81\x87\x02\x97"
  "\x01\x0a\x81\x87\x02\x96\x01\x08\x81\x87\x02\x95\x01\x06\x81\x87"
  "\x02\x94\x01\x04\xfd\x07\x1d\x30\x16\x02\x1e\x25\x1d\x02\xa3\x01"
  "\x06\x81\x85\x02\xa2\x01\x04\xfe\x05\x05\x0b\x15\x02\x1f\x25\x1d"
  "\x02\xa5\x01\x06\x81\x85\x02\xa4\x01\x04\xfe\x05\x05\x0c\x14\x02"
  "\x20\x25\x08\x72\x65\x78\x70\x2d\x6e\x2a\x25\x26\x02\x04\x1b\x03"
  "\x06\x72\x65\x78\x70\x2a\x1b\x03\x06\x72\x65\x78\x70\x2b\x13\x04"
  "\x26\x05\xae\x01\x14\xfd\xff\x03\xad\x01\x12\xfd\xff\x03\xac\x01"
  "\x10\xfd\xff\x03\xab\x01\x0e\xff\xff\x03\xaa\x01\x0c\x81\x87\x02"
  "\xa9\x01\x0a\x81\x85\x02\xa8\x01\x08\x81\x89\x02\xa7\x01\x06\x81"
  "\x85\x02\xa6\x01\x04\xfe\x05\x13\x24\x12\x20\x11\x11\x12\x04\x14"
  "\x04\x15\x04\x16\x04\x2c\x04\x1c\x04\x20\x04\x3f\x04\x1e\x12\x3b"
  "\x04\x3a\x04\x39\x04\x38\x04\x37\x04\x36\x04\x35\x04\x34\x04\x33"
  "\x04\x32\x04\x31\x04\x30\x04\x2f\x04\x2e\x04\x2b\x04\x2a\x04\x29"
  "\x04\x27\x04\x1f\x04\x24\x04\x22\x04\x0b\x77\x68\x69\x74\x65\x73"
  "\x70\x61\x63\x65\x02\x20\x0c\x70\x75\x6e\x63\x74\x75\x61\x74\x69"
  "\x6f\x6e\x02\x2e\x05\x77\x6f\x72\x64\x02\x77\x07\x73\x79\x6d\x62"
  "\x6f\x6c\x02\x5f\x05\x6f\x70\x65\x6e\x02\x28\x06\x63\x6c\x6f\x73"
  "\x65\x02\x29\x06\x71\x75\x6f\x74\x65\x02\x27\x11\x73\x74\x72\x69"
  "\x6e\x67\x2d\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x02\x22\x0f\x6d"
  "\x61\x74\x68\x2d\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x02\x24\x07"
  "\x65\x73\x63\x61\x70\x65\x02\x5c\x0b\x63\x68\x61\x72\x2d\x71\x75"
  "\x6f\x74\x65\x02\x2f\x0e\x63\x6f\x6d\x6d\x65\x6e\x74\x2d\x73\x74"
  "\x61\x72\x74\x02\x3c\x0c\x63\x6f\x6d\x6d\x65\x6e\x74\x2d\x65\x6e"
  "\x64\x02\x3e\x0d\x09\x0a\x0b\x0c\x21\x04\x22\x25\x08\x72\x65\x78"
  "\x70\x2d\x2a\x6e\x09\x72\x65\x78\x70\x2d\x6e\x2a\x6e\x1d\x3d\x2d"
  "\x3e\x0d\x72\x65\x78\x70\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x3c\x15"
  "\x72\x65\x78\x70\x2d\x6e\x6f\x74\x2d\x73\x79\x6e\x74\x61\x78\x2d"
  "\x63\x68\x61\x72\x11\x72\x65\x78\x70\x2d\x73\x79\x6e\x74\x61\x78"
  "\x2d\x63\x68\x61\x72\x13\x72\x65\x78\x70\x2d\x6e\x6f\x74\x2d\x77"
  "\x6f\x72\x64\x2d\x63\x68\x61\x72\x0f\x72\x65\x78\x70\x2d\x77\x6f"
  "\x72\x64\x2d\x63\x68\x61\x72\x0e\x72\x65\x78\x70\x2d\x77\x6f\x72"
  "\x64\x2d\x65\x6e\x64\x10\x72\x65\x78\x70\x2d\x77\x6f\x72\x64\x2d"
  "\x73\x74\x61\x72\x74\x13\x72\x65\x78\x70\x2d\x6e\x6f\x74\x2d\x77"
  "\x6f\x72\x64\x2d\x65\x64\x67\x65\x0f\x72\x65\x78\x70\x2d\x77\x6f"
  "\x72\x64\x2d\x65\x64\x67\x65\x10\x72\x65\x78\x70\x2d\x73\x74\x72"
  "\x69\x6e\x67\x2d\x65\x6e\x64\x12\x72\x65\x78\x70\x2d\x73\x74\x72"
  "\x69\x6e\x67\x2d\x73\x74\x61\x72\x74\x0e\x72\x65\x78\x70\x2d\x6c"
  "\x69\x6e\x65\x2d\x65\x6e\x64\x10\x72\x65\x78\x70\x2d\x6c\x69\x6e"
  "\x65\x2d\x73\x74\x61\x72\x74\x0e\x72\x65\x78\x70\x2d\x61\x6e\x79"
  "\x2d\x63\x68\x61\x72\x28\x13\x1b\x17\x0b\x72\x65\x78\x70\x2d\x67"
  "\x72\x6f\x75\x70\x23\x26\x12\x72\x65\x78\x70\x2d\x61\x6c\x74\x65"
  "\x72\x6e\x61\x74\x69\x76\x65\x73\x1a\x19\x18\x22\x05\x10\x64\x65"
  "\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08"
  "\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
rexp_so_data_a1cd350910aec8a4 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rexp_so_data_a1cd350910aec8a4 [0]))), (sizeof (prog_rexp_so_data_a1cd350910aec8a4)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("rexp.so", rexp_so_data_a1cd350910aec8a4)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rexp.so", "7e8e0758fda4958c")
