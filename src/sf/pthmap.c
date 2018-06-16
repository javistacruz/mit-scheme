/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:06-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_4 3
#define LABEL_14 5
#define LABEL_15 7
#define LABEL_18 9
#define LABEL_19 11
#define LABEL_20 13
#define LABEL_21 15
#define LABEL_16 17
#define LABEL_12 19
#define TAG_13 8
#define LABEL_27 21
#define LABEL_28 23
#define LABEL_10 25
#define TAG_11 11
#define LABEL_30 27
#define LABEL_31 29
#define LABEL_32 31
#define LABEL_33 33
#define LABEL_8 35
#define TAG_9 16
#define LABEL_35 37
#define LABEL_6 39
#define TAG_7 18
#define LABEL_22 41
#define LABEL_23 43
#define LABEL_25 45
#define LABEL_26 47
#define LABEL_29 49
#define LABEL_34 51
#define LABEL_40 53
#define LABEL_36 55
#define LABEL_41 57
#define LABEL_37 59
#define LABEL_38 61
#define LABEL_45 63
#define LABEL_42 65
#define LABEL_43 67
#define TAG_44 32
#define LABEL_46 69
#define LABEL_47 71
#define TAG_48 34
#define LABEL_49 73
#define LABEL_52 75
#define LABEL_50 77
#define LABEL_51 79
#define LABEL_53 81
#define LABEL_55 83
#define LABEL_56 85
#define LABEL_57 87
#define LABEL_59 89
#define LABEL_61 91
#define LABEL_63 93
#define LABEL_66 95
#define LABEL_67 97
#define ENVIRONMENT_LABEL_3 141
#define DEBUGGING_LABEL_2 140
#define OBJECT_14 139
#define OBJECT_13 138
#define OBJECT_12 137
#define OBJECT_11 136
#define OBJECT_10 135
#define OBJECT_9 134
#define OBJECT_8 133
#define OBJECT_7 132
#define OBJECT_6 131
#define OBJECT_5 130
#define OBJECT_4 129
#define OBJECT_3 128
#define OBJECT_2 127
#define OBJECT_1 126
#define OBJECT_0 125
#define EXECUTE_CACHE_65 99
#define EXECUTE_CACHE_64 101
#define EXECUTE_CACHE_62 103
#define EXECUTE_CACHE_60 105
#define EXECUTE_CACHE_58 107
#define EXECUTE_CACHE_54 109
#define EXECUTE_CACHE_39 111
#define EXECUTE_CACHE_24 113
#define EXECUTE_CACHE_17 115
#define FREE_REFERENCE_3 118
#define FREE_REFERENCE_2 119
#define FREE_REFERENCE_1 120
#define FREE_REFERENCE_0 121
#define GLOBAL_EXECUTE_CACHE_5 123
#define FREE_REFERENCES_LABEL_0 98
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
pthmap_so_54bbba5518b6be71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd32;
  machine_word Wrd44;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd43;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_14);
      goto label_71;

    case 2:
      current_block = (Rpc - LABEL_15);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_18);
      goto label_72;

    case 4:
      current_block = (Rpc - LABEL_19);
      goto label_73;

    case 5:
      current_block = (Rpc - LABEL_20);
      goto label_74;

    case 6:
      current_block = (Rpc - LABEL_21);
      goto label_75;

    case 7:
      current_block = (Rpc - LABEL_16);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_12);
      goto node_associate_28;

    case 9:
      current_block = (Rpc - LABEL_27);
      goto continuation_46;

    case 10:
      current_block = (Rpc - LABEL_28);
      goto label_78;

    case 11:
      current_block = (Rpc - LABEL_10);
      goto find_node_49;

    case 12:
      current_block = (Rpc - LABEL_30);
      goto label_76;

    case 13:
      current_block = (Rpc - LABEL_31);
      goto continuation_61;

    case 14:
      current_block = (Rpc - LABEL_32);
      goto label_80;

    case 15:
      current_block = (Rpc - LABEL_33);
      goto label_81;

    case 16:
      current_block = (Rpc - LABEL_8);
      goto find_or_create_node_55;

    case 17:
      current_block = (Rpc - LABEL_35);
      goto label_77;

    case 18:
      current_block = (Rpc - LABEL_6);
      goto create_node_66;

    case 19:
      current_block = (Rpc - LABEL_22);
      goto continuation_5;

    case 20:
      current_block = (Rpc - LABEL_23);
      goto pathname_map_make_4;

    case 21:
      current_block = (Rpc - LABEL_25);
      goto continuation_26;

    case 22:
      current_block = (Rpc - LABEL_26);
      goto continuation_25;

    case 23:
      current_block = (Rpc - LABEL_29);
      goto continuation_13;

    case 24:
      current_block = (Rpc - LABEL_34);
      goto continuation_52;

    case 25:
      current_block = (Rpc - LABEL_40);
      goto label_79;

    case 26:
      current_block = (Rpc - LABEL_36);
      goto continuation_59;

    case 27:
      current_block = (Rpc - LABEL_41);
      goto label_82;

    case 28:
      current_block = (Rpc - LABEL_37);
      goto continuation_9;

    case 29:
      current_block = (Rpc - LABEL_38);
      goto pathname_mapP_8;

    case 30:
      current_block = (Rpc - LABEL_45);
      goto label_83;

    case 31:
      current_block = (Rpc - LABEL_42);
      goto continuation_18;

    case 32:
      current_block = (Rpc - LABEL_43);
      goto pathname_map_lookup_90;

    case 33:
      current_block = (Rpc - LABEL_46);
      goto continuation_23;

    case 34:
      current_block = (Rpc - LABEL_47);
      goto pathname_map_insertB_92;

    case 35:
      current_block = (Rpc - LABEL_49);
      goto continuation_11;

    case 36:
      current_block = (Rpc - LABEL_52);
      goto make_node_list_42;

    case 37:
      current_block = (Rpc - LABEL_50);
      goto continuation_20;

    case 38:
      current_block = (Rpc - LABEL_51);
      goto continuation_10;

    case 39:
      current_block = (Rpc - LABEL_53);
      goto continuation_29;

    case 40:
      current_block = (Rpc - LABEL_55);
      goto continuation_19;

    case 41:
      current_block = (Rpc - LABEL_56);
      goto continuation_40;

    case 42:
      current_block = (Rpc - LABEL_57);
      goto continuation_33;

    case 43:
      current_block = (Rpc - LABEL_59);
      goto continuation_32;

    case 44:
      current_block = (Rpc - LABEL_61);
      goto continuation_31;

    case 45:
      current_block = (Rpc - LABEL_63);
      goto continuation_30;

    case 46:
      current_block = (Rpc - LABEL_66);
      goto label_94;

    case 47:
      current_block = (Rpc - LABEL_67);
      goto expression_70;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_70)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_66])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_94)
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
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-1]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd24.pObj) = (& (Rhp [-1]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd30.pObj) = (& (Rhp [-1]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd74.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6])));
  Rhp += 2;
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd74.pObj)));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd72.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8])));
  Rhp += 2;
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd72.pObj)));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd70.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10])));
  Rhp += 1;
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd70.pObj)));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd68.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12])));
  Rhp += 1;
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd68.pObj)));
  (* (--Rsp)) = (Wrd69.Obj);
  ((Wrd68.pObj) [2]) = (Wrd13.Obj);
  ((Wrd70.pObj) [2]) = (Wrd69.Obj);
  Wrd60 = Wrd72;
  ((Wrd60.pObj) [2]) = (Wrd75.Obj);
  ((Wrd60.pObj) [3]) = (Wrd69.Obj);
  Wrd66 = Wrd74;
  ((Wrd66.pObj) [2]) = (Wrd7.Obj);
  ((Wrd66.pObj) [3]) = (Wrd13.Obj);
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_104;
  Wrd35 = Wrd39;

DEFLABEL (label_103)
  (Wrd41.Obj) = (Rsp [4]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  ((Wrd42.pObj) [0]) = (Wrd35.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_102;
  Wrd5 = Wrd9;

DEFLABEL (label_101)
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  ((Wrd12.pObj) [0]) = (Wrd5.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_100;
  Wrd13 = Wrd17;

DEFLABEL (label_99)
  (Wrd19.Obj) = (Rsp [6]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  ((Wrd20.pObj) [0]) = (Wrd13.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_98;
  Wrd21 = Wrd25;

DEFLABEL (label_97)
  (Wrd27.Obj) = (Rsp [7]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  ((Wrd28.pObj) [0]) = (Wrd21.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_96;
  Wrd29 = Wrd33;

DEFLABEL (label_95)
  (Wrd35.Obj) = (Rsp [8]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  ((Wrd36.pObj) [0]) = (Wrd29.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_43])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_46);
  Rvl = (current_block [OBJECT_14]);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_96)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21])), (Wrd30.pObj));

DEFLABEL (label_75)
  (Wrd29.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd22.pObj));

DEFLABEL (label_74)
  (Wrd21.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd14.pObj));

DEFLABEL (label_73)
  (Wrd13.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd6.pObj));

DEFLABEL (label_72)
  (Wrd5.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14])), (Wrd36.pObj));

DEFLABEL (label_71)
  (Wrd35.Obj) = Rvl;
  goto label_103;

DEFLABEL (node_associate_88)
DEFLABEL (node_associate_28)
  INTERRUPT_CHECK (26, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_25);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_107;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_105;
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 1);

DEFLABEL (label_105)
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd10.pObj) [1]);

DEFLABEL (label_106)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_107)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_106;

DEFLABEL (find_node_87)
DEFLABEL (find_node_49)
  INTERRUPT_CHECK (26, LABEL_10);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_7]))
    goto label_116;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_115;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_114)
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto node_associate_28;

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_27);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_110;
  (Wrd39.Obj) = (Rsp [1]);
  (Rsp [1]) = (Wrd39.Obj);
  (Rsp [2]) = Rvl;
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_109;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_108)
  (Rsp [3]) = (Wrd41.Obj);
  Rsp = (& (Rsp [1]));
  goto find_node_49;

DEFLABEL (label_109)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 1);

DEFLABEL (label_78)
  (Wrd41.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_110)
  Rsp = (& (Rsp [4]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_113)
  (Wrd25.Obj) = (Rsp [0]);
  if (! ((Wrd25.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_111;
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_111)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [3]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (* (--Rsp)) = (Wrd35.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_29);
  (Rsp [0]) = Rvl;
  if (Rvl == (current_block [OBJECT_9]))
    goto label_112;
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_112)
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_115)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 1);

DEFLABEL (label_76)
  (* (--Rsp)) = Rvl;
  goto label_114;

DEFLABEL (label_116)
  (Wrd24.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd24.Obj);
  goto label_113;

DEFLABEL (find_or_create_node_86)
DEFLABEL (find_or_create_node_55)
  INTERRUPT_CHECK (26, LABEL_8);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_7]))
    goto label_122;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_121;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_120)
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto node_associate_28;

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_34);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_117;
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [2]);
  (Rsp [1]) = (Wrd19.Obj);
  Rsp = (& (Rsp [1]));
  goto create_node_66;

DEFLABEL (label_117)
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [2]) = Rvl;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_119;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_118)
  (Rsp [3]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto find_or_create_node_55;

DEFLABEL (label_119)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 1);

DEFLABEL (label_79)
  (Wrd9.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 1);

DEFLABEL (label_77)
  (* (--Rsp)) = Rvl;
  goto label_120;

DEFLABEL (label_122)
  (Wrd24.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [3]));

DEFLABEL (label_123)
  (Rsp [2]) = (Wrd24.Obj);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd29.pObj) [0]);
  (Rsp [1]) = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (create_node_85)
DEFLABEL (create_node_66)
  INTERRUPT_CHECK (26, LABEL_6);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (Wrd9.Obj) = (current_block [OBJECT_7]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_36);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_130;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_129)
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_128;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [1]);

DEFLABEL (label_127)
  if ((Wrd31.Obj) == (current_block [OBJECT_7]))
    goto label_126;
  (Wrd41.Obj) = (Rsp [1]);
  (Rsp [1]) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd42.Obj);
  (Wrd46.Obj) = (Rsp [3]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_125;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [1]);

DEFLABEL (label_124)
  (Rsp [3]) = (Wrd43.Obj);
  Rsp = (& (Rsp [1]));
  goto create_node_66;

DEFLABEL (label_125)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 1);

DEFLABEL (label_81)
  (Wrd43.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_126)
  (Wrd24.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto label_123;

DEFLABEL (label_128)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 1);

DEFLABEL (label_80)
  (Wrd31.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 1);

DEFLABEL (label_82)
  (Wrd5.Obj) = Rvl;
  goto label_129;

DEFLABEL (pathname_map_make_89)
DEFLABEL (pathname_map_make_4)
  INTERRUPT_CHECK (26, LABEL_23);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (Wrd9.Obj) = (current_block [OBJECT_7]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  goto pop_return;

DEFLABEL (pathname_mapP_91)
DEFLABEL (pathname_mapP_8)
  INTERRUPT_CHECK (26, LABEL_38);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_133;

DEFLABEL (label_132)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_131)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_133)
  if (! ((Wrd6.uLng) == 1))
    goto label_135;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_134)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_5])))
    goto label_132;
  Rvl = (current_block [OBJECT_12]);
  goto label_131;

DEFLABEL (label_135)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 1);

DEFLABEL (label_83)
  (Wrd9.Obj) = Rvl;
  goto label_134;

DEFLABEL (pathname_map_lookup_90)
  CLOSURE_HEADER (LABEL_43);

DEFLABEL (pathname_map_lookup_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto make_node_list_42;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_49);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_51);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto find_node_49;

DEFLABEL (pathname_map_insertB_92)
  CLOSURE_HEADER (LABEL_47);

DEFLABEL (pathname_map_insertB_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto make_node_list_42;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_50);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_55);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto find_or_create_node_55;

DEFLABEL (make_node_list_93)
DEFLABEL (make_node_list_42)
  INTERRUPT_CHECK (26, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_53);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_57);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_137;
  (Wrd12.Obj) = (current_block [OBJECT_7]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_136;

DEFLABEL (label_137)
  (Wrd18.Obj) = (current_block [OBJECT_7]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_136)
DEFLABEL (label_147)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_59);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_139;
  (Wrd12.Obj) = (Rsp [1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_138;

DEFLABEL (label_139)
  (Wrd18.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_138)
DEFLABEL (label_146)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_61);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_141;
  (Wrd12.Obj) = (Rsp [1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_140;

DEFLABEL (label_141)
  (Wrd18.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_140)
DEFLABEL (label_145)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_63);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_56);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_143;
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd10.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  goto label_142;

DEFLABEL (label_143)
  Rvl = Rvl;

DEFLABEL (label_142)
DEFLABEL (label_144)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

int
decl_pthmap_so_54bbba5518b6be71 (void)
{
  return (0);
}

DECLARE_COMPILED_CODE ("pthmap.so", 48, decl_pthmap_so_54bbba5518b6be71, pthmap_so_54bbba5518b6be71)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_pthmap_so_data_54bbba5518b6be71 [828] =
  "\x8e\x01\x05\x9b\x01\x1d\x0c\x1d\x0d\xb8\x07\x0d\xb9\x0d\xba\x0c"
  "\xc1\x08\xc1\x0c\xc3\x0d\xbb\x0c\xb0\xb1\xb2\xb3\x9b\x1e\x1e\x1e"
  "\x1e\x9b\x28\x0d\x26\x0d\x0d\x0d\x0d\x24\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x50\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63"
  "\x2f\x73\x66\x2f\x2e\x2f\x70\x74\x68\x6d\x61\x70\x2e\x69\x6e\x66"
  "\x02\x15\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6d\x61\x70\x2f\x69"
  "\x6e\x73\x65\x72\x74\x21\x14\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d"
  "\x6d\x61\x70\x2f\x6c\x6f\x6f\x6b\x75\x70\x0e\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x2d\x6d\x61\x70\x3f\x0e\x75\x6e\x62\x6f\x75\x6e\x64"
  "\x2d\x76\x61\x6c\x75\x65\x04\x63\x61\x72\x04\x63\x64\x72\x0d\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6d\x61\x70\x13\x6c\x65\x78\x69"
  "\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x12\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6d\x61\x70\x2f\x6d\x61\x6b\x65"
  "\x0d\x50\x41\x54\x48\x4e\x41\x4d\x45\x2d\x4d\x41\x50\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x04"
  "\x63\x64\x72\x04\x63\x61\x72\x09\x73\x65\x74\x2d\x63\x61\x72\x21"
  "\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x05\x03\x19\x75\x6e\x70\x61"
  "\x72\x73\x65\x72\x2f\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x6d\x65"
  "\x74\x68\x6f\x64\x04\x21\x75\x6e\x70\x61\x72\x73\x65\x72\x2f\x73"
  "\x65\x74\x2d\x74\x61\x67\x67\x65\x64\x2d\x70\x61\x69\x72\x2d\x6d"
  "\x65\x74\x68\x6f\x64\x21\x04\x06\x61\x73\x73\x6f\x63\x03\x10\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x65\x76\x69\x63\x65\x03\x11"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x76\x65\x72\x73\x69\x6f\x6e"
  "\x03\x0e\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x74\x79\x70\x65\x03"
  "\x0e\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x61\x6d\x65\x03\x13"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x69\x72\x65\x63\x74\x6f"
  "\x72\x79\x04\x07\x61\x70\x70\x65\x6e\x64\x0a\x30\x62\x80\x80\x04"
  "\x2f\x60\x81\x81\x02\x2e\x5e\x81\x89\x02\x2d\x5c\x81\x89\x02\x2c"
  "\x5a\x81\x89\x02\x2b\x58\x81\x87\x02\x2a\x56\x81\x85\x02\x29\x54"
  "\x81\x8b\x02\x28\x52\x81\x83\x02\x27\x50\x81\x8d\x02\x26\x4e\x81"
  "\x89\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x8b\x02\x23\x48\x81\x89"
  "\x02\x22\x46\x81\x95\x02\x21\x44\x81\x8b\x02\x20\x42\x81\x95\x02"
  "\x1f\x40\x81\x83\x02\x1e\x3e\x83\x04\x1d\x3c\x81\x95\x02\x1c\x3a"
  "\x81\x95\x02\x1b\x38\x81\x93\x02\x1a\x36\x81\x91\x02\x19\x34\x81"
  "\x8f\x02\x18\x32\x81\x8d\x02\x17\x30\x81\x89\x02\x16\x2e\x81\x87"
  "\x02\x15\x2c\x82\x02\x14\x2a\x81\x95\x02\x13\x28\x81\x8f\x02\x12"
  "\x26\x81\x91\x02\x11\x24\x81\x8f\x02\x10\x22\x81\x91\x02\x0f\x20"
  "\x81\x91\x02\x0e\x1e\x81\x91\x02\x0d\x1c\x81\x93\x02\x0c\x1a\x81"
  "\x91\x02\x0b\x18\x81\x93\x02\x0a\x16\x81\x91\x02\x09\x14\x81\x87"
  "\x02\x08\x12\x81\x97\x02\x07\x10\x81\x95\x02\x06\x0e\x81\x95\x02"
  "\x05\x0c\x81\x95\x02\x04\x0a\x81\x95\x02\x03\x08\x81\x95\x02\x02"
  "\x06\x81\x95\x02\x01\x04\x81\x83\x02\x61\x8e\x01";

SCHEME_OBJECT *
pthmap_so_data_54bbba5518b6be71 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_pthmap_so_data_54bbba5518b6be71 [0]))), (sizeof (prog_pthmap_so_data_54bbba5518b6be71)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_67]));
}

DECLARE_COMPILED_DATA_NS ("pthmap.so", pthmap_so_data_54bbba5518b6be71)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("pthmap.so", "07652b89442fdecc")
