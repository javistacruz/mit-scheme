/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:30-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_7 7
#define LABEL_9 9
#define TAG_10 3
#define LABEL_19 11
#define LABEL_24 13
#define LABEL_11 15
#define TAG_12 6
#define LABEL_17 17
#define TAG_18 7
#define LABEL_15 19
#define TAG_16 8
#define LABEL_13 21
#define TAG_14 9
#define LABEL_22 23
#define LABEL_27 25
#define LABEL_25 27
#define LABEL_29 29
#define LABEL_40 31
#define LABEL_41 33
#define LABEL_30 35
#define TAG_31 16
#define LABEL_33 37
#define LABEL_36 39
#define LABEL_34 41
#define TAG_35 19
#define LABEL_37 43
#define LABEL_43 45
#define LABEL_44 47
#define TAG_45 22
#define LABEL_47 49
#define LABEL_48 51
#define LABEL_49 53
#define TAG_50 25
#define LABEL_53 55
#define LABEL_51 57
#define TAG_52 27
#define LABEL_55 59
#define LABEL_56 61
#define TAG_57 29
#define LABEL_59 63
#define LABEL_60 65
#define LABEL_63 67
#define LABEL_61 69
#define TAG_62 33
#define LABEL_64 71
#define TAG_65 34
#define LABEL_66 73
#define LABEL_67 75
#define LABEL_69 77
#define LABEL_70 79
#define LABEL_71 81
#define LABEL_72 83
#define LABEL_73 85
#define LABEL_74 87
#define LABEL_77 89
#define LABEL_79 91
#define LABEL_80 93
#define ENVIRONMENT_LABEL_3 147
#define DEBUGGING_LABEL_2 146
#define OBJECT_14 145
#define OBJECT_13 144
#define OBJECT_12 143
#define OBJECT_11 142
#define OBJECT_10 141
#define OBJECT_9 140
#define OBJECT_8 139
#define OBJECT_7 138
#define OBJECT_6 137
#define OBJECT_5 136
#define OBJECT_4 135
#define OBJECT_3 134
#define OBJECT_2 133
#define OBJECT_1 132
#define OBJECT_0 131
#define EXECUTE_CACHE_78 95
#define EXECUTE_CACHE_76 97
#define EXECUTE_CACHE_75 99
#define EXECUTE_CACHE_68 101
#define EXECUTE_CACHE_58 103
#define EXECUTE_CACHE_54 105
#define EXECUTE_CACHE_46 107
#define EXECUTE_CACHE_39 109
#define EXECUTE_CACHE_38 111
#define EXECUTE_CACHE_32 113
#define EXECUTE_CACHE_28 115
#define EXECUTE_CACHE_26 117
#define EXECUTE_CACHE_23 119
#define EXECUTE_CACHE_42 121
#define EXECUTE_CACHE_21 123
#define EXECUTE_CACHE_20 125
#define EXECUTE_CACHE_8 127
#define EXECUTE_CACHE_6 129
#define FREE_REFERENCES_LABEL_0 94
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
dosproc_so_c8443bc9f5b90493 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd29;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd56;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd42;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_4);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto lambda_70;

    case 4:
      current_block = (Rpc - LABEL_19);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_24);
      goto continuation_51;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto with_input_channel_62;

    case 7:
      current_block = (Rpc - LABEL_17);
      goto run_15;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto with_channel_output_port_28;

    case 9:
      current_block = (Rpc - LABEL_13);
      goto with_output_channel_47;

    case 10:
      current_block = (Rpc - LABEL_22);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_27);
      goto continuation_54;

    case 12:
      current_block = (Rpc - LABEL_25);
      goto continuation_50;

    case 13:
      current_block = (Rpc - LABEL_29);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_40);
      goto label_67;

    case 15:
      current_block = (Rpc - LABEL_41);
      goto label_68;

    case 16:
      current_block = (Rpc - LABEL_30);
      goto lambda_75;

    case 17:
      current_block = (Rpc - LABEL_33);
      goto continuation_40;

    case 18:
      current_block = (Rpc - LABEL_36);
      goto continuation_8;

    case 19:
      current_block = (Rpc - LABEL_34);
      goto lambda_76;

    case 20:
      current_block = (Rpc - LABEL_37);
      goto continuation_55;

    case 21:
      current_block = (Rpc - LABEL_43);
      goto continuation_19;

    case 22:
      current_block = (Rpc - LABEL_44);
      goto lambda_77;

    case 23:
      current_block = (Rpc - LABEL_47);
      goto continuation_41;

    case 24:
      current_block = (Rpc - LABEL_48);
      goto continuation_32;

    case 25:
      current_block = (Rpc - LABEL_49);
      goto lambda_78;

    case 26:
      current_block = (Rpc - LABEL_53);
      goto continuation_57;

    case 27:
      current_block = (Rpc - LABEL_51);
      goto lambda_79;

    case 28:
      current_block = (Rpc - LABEL_55);
      goto continuation_25;

    case 29:
      current_block = (Rpc - LABEL_56);
      goto lambda_80;

    case 30:
      current_block = (Rpc - LABEL_59);
      goto continuation_17;

    case 31:
      current_block = (Rpc - LABEL_60);
      goto continuation_16;

    case 32:
      current_block = (Rpc - LABEL_63);
      goto continuation_43;

    case 33:
      current_block = (Rpc - LABEL_61);
      goto lambda_81;

    case 34:
      current_block = (Rpc - LABEL_64);
      goto lambda_82;

    case 35:
      current_block = (Rpc - LABEL_66);
      goto continuation_30;

    case 36:
      current_block = (Rpc - LABEL_67);
      goto continuation_29;

    case 37:
      current_block = (Rpc - LABEL_69);
      goto continuation_58;

    case 38:
      current_block = (Rpc - LABEL_70);
      goto continuation_21;

    case 39:
      current_block = (Rpc - LABEL_71);
      goto continuation_20;

    case 40:
      current_block = (Rpc - LABEL_72);
      goto continuation_44;

    case 41:
      current_block = (Rpc - LABEL_73);
      goto continuation_34;

    case 42:
      current_block = (Rpc - LABEL_74);
      goto continuation_33;

    case 43:
      current_block = (Rpc - LABEL_77);
      goto continuation_22;

    case 44:
      current_block = (Rpc - LABEL_79);
      goto label_83;

    case 45:
      current_block = (Rpc - LABEL_80);
      goto expression_66;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_66)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_79])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_83)
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x205, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Rsp [2]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (lambda_70)
  CLOSURE_HEADER (LABEL_9);

DEFLABEL (lambda_63)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd66.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11])));
  Rhp += 4;
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd66.pObj)));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd64.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13])));
  Rhp += 5;
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd64.pObj)));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd62.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15])));
  Rhp += 1;
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd62.pObj)));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd60.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17])));
  Rhp += 2;
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd60.pObj)));
  (* (--Rsp)) = (Wrd61.Obj);
  Wrd20 = Wrd60;
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  ((Wrd20.pObj) [3]) = (Wrd18.Obj);
  Wrd25 = Wrd62;
  (Wrd28.Obj) = ((Wrd22.pObj) [2]);
  ((Wrd25.pObj) [2]) = (Wrd28.Obj);
  Wrd42 = Wrd64;
  ((Wrd42.pObj) [2]) = (Wrd28.Obj);
  ((Wrd42.pObj) [3]) = (Wrd63.Obj);
  ((Wrd42.pObj) [4]) = (Wrd61.Obj);
  (Wrd34.Obj) = (Rsp [8]);
  ((Wrd42.pObj) [5]) = (Wrd34.Obj);
  (Wrd31.Obj) = (Rsp [7]);
  ((Wrd42.pObj) [6]) = (Wrd31.Obj);
  Wrd56 = Wrd66;
  ((Wrd56.pObj) [2]) = (Wrd28.Obj);
  ((Wrd56.pObj) [3]) = (Wrd65.Obj);
  ((Wrd56.pObj) [4]) = (Wrd63.Obj);
  ((Wrd56.pObj) [5]) = (Wrd31.Obj);
  (Wrd5.Obj) = (Rsp [6]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_6])))
    goto label_85;

DEFLABEL (label_84)
  (Wrd13.Obj) = (Rsp [3]);
  (Rsp [7]) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8]);
  (Rsp [8]) = (Wrd14.Obj);
  Rsp = (& (Rsp [7]));
  goto with_input_channel_62;

DEFLABEL (label_85)
  if ((Wrd5.Obj) == (current_block [OBJECT_7]))
    goto label_84;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_86;
  (Wrd11.Obj) = (current_block [OBJECT_9]);
  (Rsp [7]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (Rsp [8]) = (Wrd12.Obj);
  Rsp = (& (Rsp [7]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (label_86)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_22);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_87;
  (Wrd15.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34])));
  Rhp += 3;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd24 = Wrd19;
  (Wrd25.Obj) = (Rsp [6]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  ((Wrd24.pObj) [2]) = (Wrd27.Obj);
  ((Wrd24.pObj) [3]) = (Wrd16.Obj);
  ((Wrd24.pObj) [4]) = (Wrd15.Obj);
  (Rsp [10]) = (Wrd18.Obj);
  Rsp = (& (Rsp [10]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32]));

DEFLABEL (label_87)
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [8]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [7]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_36);
  (Rsp [9]) = Rvl;
  Rsp = (& (Rsp [8]));
  goto with_input_channel_62;

DEFLABEL (with_input_channel_71)
DEFLABEL (with_input_channel_62)
  INTERRUPT_CHECK (26, LABEL_11);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_6])))
    goto label_93;

DEFLABEL (label_92)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_25);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd31.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_91)
  (Wrd16.Obj) = (Rsp [0]);
  if (! ((Wrd16.Obj) == (current_block [OBJECT_7])))
    goto label_88;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [3]);
  (Rsp [0]) = (Wrd22.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_8]);
  (Rsp [2]) = (Wrd26.Obj);
  goto with_output_channel_47;

DEFLABEL (label_88)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_27);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_89;
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (label_89)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_37);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_90;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_52);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = ((Wrd18.pObj) [4]);
  (Rsp [1]) = (Wrd21.Obj);
  (Rsp [2]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  goto with_channel_output_port_28;

DEFLABEL (label_90)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto with_output_channel_47;

DEFLABEL (label_93)
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_92;
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_91;

DEFLABEL (run_74)
DEFLABEL (run_15)
  INTERRUPT_CHECK (26, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_29);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_99;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if (! ((Wrd27.Lng) == 0))
    goto label_95;

DEFLABEL (label_94)
  Rvl = (current_block [OBJECT_13]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_95)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_98;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if ((Wrd23.Lng) < 0)
    goto label_97;

DEFLABEL (label_96)
  (Wrd20.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (label_97)
  (Wrd21.Obj) = (current_block [OBJECT_12]);
  (Rsp [0]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42]));

DEFLABEL (label_98)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_68)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_96;
  goto label_97;

DEFLABEL (label_99)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_67)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_95;
  goto label_94;

DEFLABEL (with_channel_output_port_73)
DEFLABEL (with_channel_output_port_28)
  INTERRUPT_CHECK (26, LABEL_15);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32]));

DEFLABEL (with_output_channel_72)
DEFLABEL (with_output_channel_47)
  INTERRUPT_CHECK (26, LABEL_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_6])))
    goto label_100;
  (Wrd27.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd29.Obj);
  goto run_15;

DEFLABEL (label_100)
  if (! ((Wrd7.Obj) == (current_block [OBJECT_7])))
    goto label_101;
  (Wrd21.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_8]);
  (Rsp [3]) = (Wrd24.Obj);
  goto run_15;

DEFLABEL (label_101)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_33);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_102;
  (Wrd13.Obj) = (current_block [OBJECT_14]);
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [5]);
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (label_102)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_47);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_103;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_61])));
  Rhp += 3;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd20 = Wrd15;
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [4]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [4]) = (Wrd17.Obj);
  (Rsp [3]) = (Wrd14.Obj);
  (Wrd24.Obj) = ((Wrd22.pObj) [6]);
  (Rsp [2]) = (Wrd24.Obj);
  (Wrd27.Obj) = ((Wrd22.pObj) [3]);
  (Rsp [1]) = (Wrd27.Obj);
  Rsp = (& (Rsp [1]));
  goto with_channel_output_port_28;

DEFLABEL (label_103)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd9.Obj);
  (Rsp [3]) = Rvl;
  goto run_15;

DEFLABEL (lambda_75)
  CLOSURE_HEADER (LABEL_30);

DEFLABEL (lambda_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd16.pObj) [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_43);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_56])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_55);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_76)
  CLOSURE_HEADER (LABEL_34);

DEFLABEL (lambda_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_48);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_65);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_64])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = ((Wrd14.pObj) [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd16.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (lambda_77)
  CLOSURE_HEADER (LABEL_44);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_60);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_59);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  goto pop_return;

DEFLABEL (lambda_78)
  CLOSURE_HEADER (LABEL_49);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_67);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_66);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75]));

DEFLABEL (lambda_79)
  CLOSURE_HEADER (LABEL_51);

DEFLABEL (lambda_56)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  goto with_output_channel_47;

DEFLABEL (lambda_80)
  CLOSURE_HEADER (LABEL_56);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_71);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_70);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_77);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_104;
  Rvl = (current_block [OBJECT_13]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_104)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75]));

DEFLABEL (lambda_81)
  CLOSURE_HEADER (LABEL_61);

DEFLABEL (lambda_42)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd11.Obj);
  goto run_15;

DEFLABEL (lambda_82)
  CLOSURE_HEADER (LABEL_64);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_74);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_73);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  goto with_input_channel_62;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

int
decl_dosproc_so_c8443bc9f5b90493 (void)
{
  return (0);
}

DECLARE_COMPILED_CODE ("dosproc.so", 46, decl_dosproc_so_c8443bc9f5b90493, dosproc_so_c8443bc9f5b90493)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_dosproc_so_data_c8443bc9f5b90493 [1023] =
  "\x94\x01\x02\x99\x01\x1d\x0c\x0c\x1d\x0c\x0c\x0c\x0c\x87\x07\x1d"
  "\xc3\xc2\x84\x0d\x0d\x08\x89\x0d\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\xb8\x28\xb0\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x56\x2f"
  "\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61"
  "\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65"
  "\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72"
  "\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x64\x6f\x73\x70\x72\x6f\x63"
  "\x2e\x69\x6e\x66\x1f\x72\x75\x6e\x3a\x20\x73\x74\x64\x65\x72\x72"
  "\x20\x6e\x6f\x74\x20\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x70"
  "\x6f\x72\x74\x02\x1e\x72\x75\x6e\x2d\x73\x75\x62\x70\x72\x6f\x63"
  "\x65\x73\x73\x3a\x20\x4e\x6f\x74\x20\x61\x76\x61\x69\x6c\x61\x62"
  "\x6c\x65\x1f\x72\x75\x6e\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73"
  "\x73\x3a\x20\x43\x6f\x6d\x6d\x61\x6e\x64\x20\x66\x61\x69\x6c\x65"
  "\x64\x1f\x72\x75\x6e\x3a\x20\x73\x74\x64\x6f\x75\x74\x20\x6e\x6f"
  "\x74\x20\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x6f\x72\x74"
  "\x1d\x72\x75\x6e\x3a\x20\x73\x74\x64\x69\x6e\x20\x6e\x6f\x74\x20"
  "\x61\x6e\x20\x69\x6e\x70\x75\x74\x20\x70\x6f\x72\x74\x08\x11\x6c"
  "\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x12"
  "\x6c\x65\x78\x69\x63\x61\x6c\x2d\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x08\x72\x75\x6e\x74\x69\x6d\x65\x0d\x70\x72\x69\x6d\x69\x74"
  "\x69\x76\x65\x2d\x69\x6f\x13\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x64"
  "\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x0f\x72\x75\x6e\x2d\x73\x75"
  "\x62\x70\x72\x6f\x63\x65\x73\x73\x03\x0e\x2d\x3e\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x04\x19\x6d\x61\x6b\x65\x2d\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x03\x0c\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x3f\x04\x06"
  "\x65\x72\x72\x6f\x72\x03\x03\x13\x70\x6f\x72\x74\x2f\x69\x6e\x70"
  "\x75\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x02\x14\x63\x75\x72\x72"
  "\x65\x6e\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x03"
  "\x0d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x3f\x03\x1d\x63"
  "\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x74\x65\x6d\x70\x6f\x72\x61"
  "\x72\x79\x2d\x66\x69\x6c\x65\x6e\x61\x6d\x65\x03\x14\x70\x6f\x72"
  "\x74\x2f\x6f\x75\x74\x70\x75\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c"
  "\x03\x0b\x66\x72\x65\x73\x68\x2d\x6c\x69\x6e\x65\x04\x16\x63\x61"
  "\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x66"
  "\x69\x6c\x65\x03\x19\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74"
  "\x2f\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74\x70\x75\x74\x04\x15\x63"
  "\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x69\x6e\x70\x75\x74\x2d\x66"
  "\x69\x6c\x65\x02\x09\x63\x68\x61\x72\x2d\x73\x65\x74\x04\x0d\x77"
  "\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x04\x0c\x72\x65\x61"
  "\x64\x2d\x73\x74\x72\x69\x6e\x67\x03\x0c\x65\x6f\x66\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x3f\x13\x2e\x5e\x80\x80\x04\x2d\x5c\x81\x81\x02"
  "\x2c\x5a\x81\x87\x02\x2b\x58\x81\x87\x02\x2a\x56\x81\x85\x02\x29"
  "\x54\x81\x89\x02\x28\x52\x81\x89\x02\x27\x50\x81\x85\x02\x26\x4e"
  "\x81\x89\x02\x25\x4c\x81\x89\x02\x24\x4a\x81\x85\x02\x23\x48\x81"
  "\x85\x02\x22\x46\x81\x85\x02\x21\x44\x81\x89\x02\x20\x42\x81\x87"
  "\x02\x1f\x40\x81\x85\x02\x1e\x3e\x81\x85\x02\x1d\x3c\x81\x87\x02"
  "\x1c\x3a\x81\x85\x02\x1b\x38\x81\x89\x02\x1a\x36\x81\x85\x02\x19"
  "\x34\x81\x85\x02\x18\x32\x81\x87\x02\x17\x30\x81\x85\x02\x16\x2e"
  "\x81\x85\x02\x15\x2c\x81\x87\x02\x14\x2a\x81\x85\x02\x13\x28\x81"
  "\x95\x02\x12\x26\x81\x87\x02\x11\x24\x81\x85\x02\x10\x22\x81\x83"
  "\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x89\x02\x0d\x1c\x81\x85\x02"
  "\x0c\x1a\x81\x87\x02\x0b\x18\x81\x93\x02\x0a\x16\x81\x87\x02\x09"
  "\x14\x81\x87\x02\x08\x12\x81\x89\x02\x07\x10\x81\x85\x02\x06\x0e"
  "\x81\x87\x02\x05\x0c\x81\x93\x02\x04\x0a\x81\x93\x02\x03\x08\x81"
  "\x89\x02\x02\x06\x81\x8b\x02\x01\x04\x81\x87\x02\x5d\x94\x01";

SCHEME_OBJECT *
dosproc_so_data_c8443bc9f5b90493 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_dosproc_so_data_c8443bc9f5b90493 [0]))), (sizeof (prog_dosproc_so_data_c8443bc9f5b90493)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_80]));
}

DECLARE_COMPILED_DATA_NS ("dosproc.so", dosproc_so_data_c8443bc9f5b90493)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("dosproc.so", "2b09d7ab90724b87")
