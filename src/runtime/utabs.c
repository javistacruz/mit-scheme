/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:00-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define LABEL_1_9 11
#define LABEL_1_10 13
#define LABEL_1_11 15
#define LABEL_1_12 17
#define LABEL_1_13 19
#define LABEL_1_14 21
#define LABEL_1_15 23
#define LABEL_1_16 25
#define LABEL_1_17 27
#define LABEL_1_18 29
#define LABEL_1_19 31
#define LABEL_1_20 33
#define LABEL_1_21 35
#define LABEL_1_22 37
#define LABEL_1_23 39
#define LABEL_1_24 41
#define LABEL_1_26 43
#define LABEL_1_27 45
#define LABEL_1_28 47
#define LABEL_1_29 49
#define LABEL_1_30 51
#define LABEL_1_31 53
#define LABEL_1_32 55
#define LABEL_1_33 57
#define LABEL_1_34 59
#define LABEL_1_36 61
#define LABEL_1_37 63
#define LABEL_1_38 65
#define LABEL_1_39 67
#define LABEL_1_41 69
#define LABEL_1_40 71
#define LABEL_1_43 73
#define LABEL_1_44 75
#define LABEL_1_46 77
#define LABEL_1_47 79
#define LABEL_1_49 81
#define LABEL_1_48 83
#define LABEL_1_50 85
#define LABEL_1_51 87
#define LABEL_1_52 89
#define LABEL_1_53 91
#define LABEL_1_54 93
#define LABEL_1_56 95
#define LABEL_1_57 97
#define LABEL_1_58 99
#define LABEL_1_60 101
#define LABEL_1_61 103
#define ENVIRONMENT_LABEL_1_3 176
#define DEBUGGING_LABEL_1_2 175
#define OBJECT_1_28 174
#define OBJECT_1_27 173
#define OBJECT_1_26 172
#define OBJECT_1_25 171
#define OBJECT_1_24 170
#define OBJECT_1_23 169
#define OBJECT_1_22 168
#define OBJECT_1_21 167
#define OBJECT_1_20 166
#define OBJECT_1_19 165
#define OBJECT_1_18 164
#define OBJECT_1_17 163
#define OBJECT_1_16 162
#define OBJECT_1_15 161
#define OBJECT_1_14 160
#define OBJECT_1_13 159
#define OBJECT_1_12 158
#define OBJECT_1_11 157
#define OBJECT_1_10 156
#define OBJECT_1_9 155
#define OBJECT_1_8 154
#define OBJECT_1_7 153
#define OBJECT_1_6 152
#define OBJECT_1_5 151
#define OBJECT_1_4 150
#define OBJECT_1_3 149
#define OBJECT_1_2 148
#define OBJECT_1_1 147
#define OBJECT_1_0 146
#define EXECUTE_CACHE_1_59 105
#define EXECUTE_CACHE_1_55 107
#define EXECUTE_CACHE_1_42 109
#define EXECUTE_CACHE_1_35 111
#define EXECUTE_CACHE_1_45 113
#define EXECUTE_CACHE_1_25 115
#define EXECUTE_CACHE_1_8 117
#define FREE_REFERENCE_1_1 120
#define FREE_REFERENCE_1_0 121
#define FREE_ASSIGNMENT_1_22 123
#define FREE_ASSIGNMENT_1_21 124
#define FREE_ASSIGNMENT_1_20 125
#define FREE_ASSIGNMENT_1_19 126
#define FREE_ASSIGNMENT_1_18 127
#define FREE_ASSIGNMENT_1_17 128
#define FREE_ASSIGNMENT_1_16 129
#define FREE_ASSIGNMENT_1_15 130
#define FREE_ASSIGNMENT_1_14 131
#define FREE_ASSIGNMENT_1_13 132
#define FREE_ASSIGNMENT_1_12 133
#define FREE_ASSIGNMENT_1_11 134
#define FREE_ASSIGNMENT_1_10 135
#define FREE_ASSIGNMENT_1_9 136
#define FREE_ASSIGNMENT_1_8 137
#define FREE_ASSIGNMENT_1_7 138
#define FREE_ASSIGNMENT_1_6 139
#define FREE_ASSIGNMENT_1_5 140
#define FREE_ASSIGNMENT_1_4 141
#define FREE_ASSIGNMENT_1_3 142
#define FREE_ASSIGNMENT_1_2 143
#define FREE_ASSIGNMENT_1_1 144
#define FREE_ASSIGNMENT_1_0 145
#define FREE_REFERENCES_LABEL_1_0 104
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_1_4);
      goto read_microcode_tablesB_35;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_37;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto label_38;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto label_39;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_1_13);
      goto label_40;

    case 9:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_1_15);
      goto label_41;

    case 11:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_1_17);
      goto label_42;

    case 13:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_1_19);
      goto label_43;

    case 15:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_7;

    case 16:
      current_block = (Rpc - LABEL_1_21);
      goto label_44;

    case 17:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_8;

    case 18:
      current_block = (Rpc - LABEL_1_23);
      goto label_45;

    case 19:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_9;

    case 20:
      current_block = (Rpc - LABEL_1_26);
      goto label_46;

    case 21:
      current_block = (Rpc - LABEL_1_27);
      goto continuation_10;

    case 22:
      current_block = (Rpc - LABEL_1_28);
      goto label_47;

    case 23:
      current_block = (Rpc - LABEL_1_29);
      goto continuation_11;

    case 24:
      current_block = (Rpc - LABEL_1_30);
      goto label_48;

    case 25:
      current_block = (Rpc - LABEL_1_31);
      goto continuation_12;

    case 26:
      current_block = (Rpc - LABEL_1_32);
      goto label_49;

    case 27:
      current_block = (Rpc - LABEL_1_33);
      goto continuation_13;

    case 28:
      current_block = (Rpc - LABEL_1_34);
      goto continuation_15;

    case 29:
      current_block = (Rpc - LABEL_1_36);
      goto label_50;

    case 30:
      current_block = (Rpc - LABEL_1_37);
      goto label_51;

    case 31:
      current_block = (Rpc - LABEL_1_38);
      goto continuation_17;

    case 32:
      current_block = (Rpc - LABEL_1_39);
      goto label_52;

    case 33:
      current_block = (Rpc - LABEL_1_41);
      goto continuation_18;

    case 34:
      current_block = (Rpc - LABEL_1_40);
      goto continuation_19;

    case 35:
      current_block = (Rpc - LABEL_1_43);
      goto label_53;

    case 36:
      current_block = (Rpc - LABEL_1_44);
      goto continuation_22;

    case 37:
      current_block = (Rpc - LABEL_1_46);
      goto label_54;

    case 38:
      current_block = (Rpc - LABEL_1_47);
      goto continuation_28;

    case 39:
      current_block = (Rpc - LABEL_1_49);
      goto label_55;

    case 40:
      current_block = (Rpc - LABEL_1_48);
      goto continuation_25;

    case 41:
      current_block = (Rpc - LABEL_1_50);
      goto continuation_29;

    case 42:
      current_block = (Rpc - LABEL_1_51);
      goto label_56;

    case 43:
      current_block = (Rpc - LABEL_1_52);
      goto continuation_30;

    case 44:
      current_block = (Rpc - LABEL_1_53);
      goto label_57;

    case 45:
      current_block = (Rpc - LABEL_1_54);
      goto continuation_31;

    case 46:
      current_block = (Rpc - LABEL_1_56);
      goto label_58;

    case 47:
      current_block = (Rpc - LABEL_1_57);
      goto label_59;

    case 48:
      current_block = (Rpc - LABEL_1_58);
      goto continuation_33;

    case 49:
      current_block = (Rpc - LABEL_1_60);
      goto label_60;

    case 50:
      current_block = (Rpc - LABEL_1_61);
      goto label_61;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_microcode_tablesB_63)
DEFLABEL (read_microcode_tablesB_35)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_147;

DEFLABEL (label_146)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_145)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_144;

DEFLABEL (label_143)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_142)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_141;

DEFLABEL (label_140)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_139)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_138;

DEFLABEL (label_137)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_136)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_14);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_4]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_135;

DEFLABEL (label_134)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_133)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_5]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_132;

DEFLABEL (label_131)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_130)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_6]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_129;

DEFLABEL (label_128)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_127)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_7]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_7]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_126;

DEFLABEL (label_125)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_124)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_8]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_8]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_123;

DEFLABEL (label_122)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_121)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_9]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_9]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_120;

DEFLABEL (label_119)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_118)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_10]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_27);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_10]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_117;

DEFLABEL (label_116)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_115)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_29]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_11]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_29);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_11]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_114;

DEFLABEL (label_113)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_112)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_31]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_12]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_31);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_12]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_111;

DEFLABEL (label_110)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_109)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_33]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_13]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_33);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_35]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_1_34);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_13]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_108;

DEFLABEL (label_107)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_106)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_14]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_105;

DEFLABEL (label_104)
  ((Wrd18.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_103)
  Rsp = (& (Rsp [1]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_38]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_1_14]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_1_38);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_15]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_102;

DEFLABEL (label_101)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_100)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_40]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_41]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_1_15]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_1_41);
  (* (--Rsp)) = Rvl;
  (Wrd24.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd24.uLng) == 30))
    goto label_64;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_35]));

DEFLABEL (label_64)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd27.Obj) = (current_block [OBJECT_1_17]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_42]));

DEFLABEL (label_65)
  (Wrd5.Obj) = (current_block [OBJECT_1_16]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_99)
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_16]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_98;

DEFLABEL (label_97)
  ((Wrd6.pObj) [0]) = (Wrd5.Obj);

DEFLABEL (label_96)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_44]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd22.Obj) = (current_block [OBJECT_1_18]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_45]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_1_44);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;
  (Wrd8.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_67)
  (Wrd8.Obj) = (current_block [OBJECT_1_19]);

DEFLABEL (label_66)
DEFLABEL (label_95)
  Rsp = (& (Rsp [1]));
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_17]));
  (Wrd17.Obj) = ((Wrd9.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_94;

DEFLABEL (label_93)
  ((Wrd9.pObj) [0]) = (Wrd8.Obj);

DEFLABEL (label_92)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_47]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_48]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd28.Obj) = (current_block [OBJECT_1_20]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_45]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_1_48);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_69)
  (Wrd10.Obj) = (current_block [OBJECT_1_22]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_68)
DEFLABEL (label_91)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_35]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_1_47);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_18]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_90;

DEFLABEL (label_89)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_88)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_50]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_21]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_1_50);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_19]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_87;

DEFLABEL (label_86)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_85)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_52]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_23]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_1_52);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_20]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_84;

DEFLABEL (label_83)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_82)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_54]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_24]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_55]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_1_54);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;

DEFLABEL (label_76)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_58]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_1_26]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_59]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_1_58);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;

DEFLABEL (label_70)
  Rvl = (current_block [OBJECT_1_28]);
  goto pop_return;

DEFLABEL (label_71)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_75;
  Wrd9 = Wrd13;

DEFLABEL (label_74)
  (Wrd18.Obj) = (current_block [OBJECT_1_27]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_22]));
  (Wrd27.Obj) = ((Wrd19.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_73;

DEFLABEL (label_72)
  ((Wrd19.pObj) [0]) = (Wrd15.Obj);
  goto label_70;

DEFLABEL (label_73)
  if ((Wrd27.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_72;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_61])), (Wrd19.pObj), (Wrd15.Obj));

DEFLABEL (label_61)
  goto label_70;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_60])), (Wrd10.pObj));

DEFLABEL (label_60)
  (Wrd9.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_81;
  Wrd12 = Wrd16;

DEFLABEL (label_80)
  (Wrd21.Obj) = (current_block [OBJECT_1_25]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_21]));
  (Wrd30.Obj) = ((Wrd22.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_79;

DEFLABEL (label_78)
  ((Wrd22.pObj) [0]) = (Wrd18.Obj);
  goto label_76;

DEFLABEL (label_79)
  if ((Wrd30.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_78;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_57])), (Wrd22.pObj), (Wrd18.Obj));

DEFLABEL (label_59)
  goto label_76;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_56])), (Wrd13.pObj));

DEFLABEL (label_58)
  (Wrd12.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_84)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_83;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_53])), (Wrd6.pObj), Rvl);

DEFLABEL (label_57)
  goto label_82;

DEFLABEL (label_87)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_86;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_51])), (Wrd6.pObj), Rvl);

DEFLABEL (label_56)
  goto label_85;

DEFLABEL (label_90)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_89;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_49])), (Wrd6.pObj), Rvl);

DEFLABEL (label_55)
  goto label_88;

DEFLABEL (label_94)
  if ((Wrd17.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_93;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_46])), (Wrd9.pObj), (Wrd8.Obj));

DEFLABEL (label_54)
  goto label_92;

DEFLABEL (label_98)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_97;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_43])), (Wrd6.pObj), (Wrd5.Obj));

DEFLABEL (label_53)
  goto label_96;

DEFLABEL (label_102)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_101;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_39])), (Wrd6.pObj), Rvl);

DEFLABEL (label_52)
  goto label_100;

DEFLABEL (label_105)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_104;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_37])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_51)
  goto label_103;

DEFLABEL (label_108)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_107;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_36])), (Wrd6.pObj), Rvl);

DEFLABEL (label_50)
  goto label_106;

DEFLABEL (label_111)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_110;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_32])), (Wrd6.pObj), Rvl);

DEFLABEL (label_49)
  goto label_109;

DEFLABEL (label_114)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_113;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_30])), (Wrd6.pObj), Rvl);

DEFLABEL (label_48)
  goto label_112;

DEFLABEL (label_117)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_116;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_28])), (Wrd6.pObj), Rvl);

DEFLABEL (label_47)
  goto label_115;

DEFLABEL (label_120)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_119;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_26])), (Wrd6.pObj), Rvl);

DEFLABEL (label_46)
  goto label_118;

DEFLABEL (label_123)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_122;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_23])), (Wrd6.pObj), Rvl);

DEFLABEL (label_45)
  goto label_121;

DEFLABEL (label_126)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_125;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_21])), (Wrd6.pObj), Rvl);

DEFLABEL (label_44)
  goto label_124;

DEFLABEL (label_129)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_128;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_19])), (Wrd6.pObj), Rvl);

DEFLABEL (label_43)
  goto label_127;

DEFLABEL (label_132)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_131;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_17])), (Wrd6.pObj), Rvl);

DEFLABEL (label_42)
  goto label_130;

DEFLABEL (label_135)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_134;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_15])), (Wrd6.pObj), Rvl);

DEFLABEL (label_41)
  goto label_133;

DEFLABEL (label_138)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_137;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_13])), (Wrd6.pObj), Rvl);

DEFLABEL (label_40)
  goto label_136;

DEFLABEL (label_141)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_140;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_11])), (Wrd6.pObj), Rvl);

DEFLABEL (label_39)
  goto label_139;

DEFLABEL (label_144)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_143;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_38)
  goto label_142;

DEFLABEL (label_147)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_146;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_6])), (Wrd6.pObj), Rvl);

DEFLABEL (label_37)
  goto label_145;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_1_40);
  (Wrd5.Obj) = Rvl;
  goto label_99;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define LABEL_2_8 11
#define ENVIRONMENT_LABEL_2_3 19
#define DEBUGGING_LABEL_2_2 18
#define OBJECT_2_5 17
#define OBJECT_2_4 16
#define OBJECT_2_3 15
#define OBJECT_2_2 14
#define OBJECT_2_1 13
#define OBJECT_2_0 12
#define FREE_REFERENCES_LABEL_2_0 12
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_2_4);
      goto intern_7;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (intern_11)
DEFLABEL (intern_7)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_13;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_12)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 5);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (Wrd6.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (Rsp [0]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 1);

DEFLABEL (label_13)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 9
#define DEBUGGING_LABEL_3_2 8
#define FREE_REFERENCE_3_0 7
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto get_microcode_version_string_0;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_microcode_version_string_4)
DEFLABEL (get_microcode_version_string_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_6 5
#define LABEL_4_5 7
#define LABEL_4_8 9
#define LABEL_4_10 11
#define ENVIRONMENT_LABEL_4_3 23
#define DEBUGGING_LABEL_4_2 22
#define OBJECT_4_0 21
#define EXECUTE_CACHE_4_11 13
#define EXECUTE_CACHE_4_9 15
#define EXECUTE_CACHE_4_7 17
#define FREE_REFERENCE_4_0 20
#define FREE_REFERENCES_LABEL_4_0 12
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_4_4);
      goto get_microcode_version_numbers_4;

    case 1:
      current_block = (Rpc - LABEL_4_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto lambda_2;

    case 4:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_microcode_version_numbers_8)
DEFLABEL (get_microcode_version_numbers_4)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_11;
  Wrd10 = Wrd14;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_6])), (Wrd11.pObj));

DEFLABEL (label_6)
  (Wrd10.Obj) = Rvl;
  goto label_10;

DEFLABEL (lambda_9)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_4_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = Rvl;
  goto label_12;

DEFLABEL (label_13)
  Rvl = (Rsp [1]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 9
#define DEBUGGING_LABEL_5_2 8
#define OBJECT_5_0 7
#define EXECUTE_CACHE_5_5 5
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_5_4);
      goto fixed_object_name__code_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fixed_object_name__code_3)
DEFLABEL (fixed_object_name__code_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 9
#define DEBUGGING_LABEL_6_2 8
#define OBJECT_6_0 7
#define EXECUTE_CACHE_6_5 5
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_6_4);
      goto fixed_object_code__name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fixed_object_code__name_3)
DEFLABEL (fixed_object_code__name_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define ENVIRONMENT_LABEL_7_3 13
#define DEBUGGING_LABEL_7_2 12
#define OBJECT_7_3 11
#define OBJECT_7_2 10
#define OBJECT_7_1 9
#define OBJECT_7_0 8
#define FREE_REFERENCES_LABEL_7_0 8
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
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
      goto fixed_object_code_limit_2;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fixed_object_code_limit_6)
DEFLABEL (fixed_object_code_limit_2)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 10))
    goto label_9;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd12.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd10.pObj) [16]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_7;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  Rvl = (MAKE_OBJECT (26, (Wrd23.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 1);

DEFLABEL (label_9)
  (Wrd15.Obj) = (current_block [OBJECT_7_1]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 13
#define DEBUGGING_LABEL_8_2 12
#define OBJECT_8_0 11
#define EXECUTE_CACHE_8_7 7
#define EXECUTE_CACHE_8_6 9
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto fixed_objects_vector_slot_2;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fixed_objects_vector_slot_5)
DEFLABEL (fixed_objects_vector_slot_2)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define ENVIRONMENT_LABEL_9_3 14
#define DEBUGGING_LABEL_9_2 13
#define OBJECT_9_1 12
#define OBJECT_9_0 11
#define EXECUTE_CACHE_9_7 9
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
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
      goto fixed_objects_item_2;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fixed_objects_item_5)
DEFLABEL (fixed_objects_item_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_6);
  (Rsp [1]) = Rvl;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_7)
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_6;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_6;
  (Wrd8.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd11.pObj) = (& ((Wrd18.pObj) [(Wrd8.Lng)]));
  Rvl = ((Wrd11.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define ENVIRONMENT_LABEL_10_3 13
#define DEBUGGING_LABEL_10_2 12
#define OBJECT_10_1 11
#define OBJECT_10_0 10
#define FREE_REFERENCE_10_0 9
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd21;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_10_4);
      goto microcode_object_unassigned_1;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_object_unassigned_5)
DEFLABEL (microcode_object_unassigned_1)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (* (--Rsp)) = Rvl;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd21.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_7)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_6;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd17.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) (Wrd15.Lng)) < ((unsigned long) (Wrd19.Lng))))
    goto label_6;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd10.pObj) = (& ((Wrd17.pObj) [(Wrd7.Lng)]));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_7 9
#define LABEL_11_8 11
#define LABEL_11_9 13
#define LABEL_11_10 15
#define ENVIRONMENT_LABEL_11_3 24
#define DEBUGGING_LABEL_11_2 23
#define OBJECT_11_3 22
#define OBJECT_11_2 21
#define OBJECT_11_1 20
#define OBJECT_11_0 19
#define EXECUTE_CACHE_11_11 17
#define FREE_REFERENCES_LABEL_11_0 16
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd5;
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
      goto microcode_table_search_14;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_11_9);
      goto loop_10;

    case 6:
      current_block = (Rpc - LABEL_11_10);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_table_search_20)
DEFLABEL (microcode_table_search_14)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Wrd5.Obj) = Rvl;
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 10))
    goto label_25;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_25;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) (Wrd14.Lng)) < ((unsigned long) (Wrd17.Lng))))
    goto label_25;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd9.pObj) = (& ((Wrd15.pObj) [(Wrd7.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_24)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_23;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Obj) = (MAKE_OBJECT (26, (Wrd27.uLng)));
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_22)
  (Wrd35.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd35.Obj);
  goto loop_10;

DEFLABEL (label_23)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (loop_21)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_11_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_26;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_31;
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_31;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd24.Lng))))
    goto label_31;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd15.pObj) = (& ((Wrd22.pObj) [(Wrd12.Lng)]));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_30)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_29;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd47.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;

DEFLABEL (label_27)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd36.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));
  (Rsp [1]) = (Wrd36.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_10;

DEFLABEL (label_29)
  (Wrd34.Obj) = (Rsp [5]);
  if ((Wrd34.Obj) == (Wrd32.Obj))
    goto label_27;
  goto label_28;

DEFLABEL (label_31)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define ENVIRONMENT_LABEL_12_3 14
#define DEBUGGING_LABEL_12_2 13
#define OBJECT_12_2 12
#define OBJECT_12_1 11
#define OBJECT_12_0 10
#define FREE_REFERENCES_LABEL_12_0 10
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd5;
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
      goto microcode_table_entry_5;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

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

DEFLABEL (microcode_table_entry_10)
DEFLABEL (microcode_table_entry_5)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Wrd5.Obj) = Rvl;
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 10))
    goto label_17;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_17;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) (Wrd14.Lng)) < ((unsigned long) (Wrd17.Lng))))
    goto label_17;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd9.pObj) = (& ((Wrd15.pObj) [(Wrd7.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_16)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_15;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd24.Obj) = (MAKE_OBJECT (26, (Wrd28.uLng)));

DEFLABEL (label_14)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if ((Wrd36.Lng) < (Wrd37.Lng))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd40.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd40.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_13)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 26))
    goto label_12;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) (Wrd51.Lng)) < ((unsigned long) (Wrd55.Lng))))
    goto label_12;
  (Wrd43.uLng) = (OBJECT_DATUM (Wrd48.Obj));
  (Wrd46.pObj) = (& ((Wrd53.pObj) [(Wrd43.Lng)]));
  Rvl = ((Wrd46.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_8)
  (Wrd24.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define ENVIRONMENT_LABEL_13_3 11
#define DEBUGGING_LABEL_13_2 10
#define OBJECT_13_0 9
#define EXECUTE_CACHE_13_6 7
#define FREE_REFERENCES_LABEL_13_0 6
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_13_4);
      goto microcode_table_ref_3;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_table_ref_6)
DEFLABEL (microcode_table_ref_3)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 1)
    goto label_8;
  Rvl = (Wrd6.Obj);

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  if ((Wrd7.uLng) == 1)
    goto label_9;
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_9)
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd12.pObj) [0]);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_8 7
#define LABEL_14_7 9
#define LABEL_14_6 11
#define LABEL_14_9 13
#define TAG_14_10 5
#define LABEL_14_13 15
#define ENVIRONMENT_LABEL_14_3 29
#define DEBUGGING_LABEL_14_2 28
#define OBJECT_14_1 27
#define OBJECT_14_0 26
#define EXECUTE_CACHE_14_14 17
#define EXECUTE_CACHE_14_12 19
#define EXECUTE_CACHE_14_11 21
#define FREE_REFERENCE_14_1 24
#define FREE_REFERENCE_14_0 25
#define FREE_REFERENCES_LABEL_14_0 16
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_14_4);
      goto microcode_return_name__code_5;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_14_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_14_6);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_14_9);
      goto lambda_12;

    case 6:
      current_block = (Rpc - LABEL_14_13);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_return_name__code_11)
DEFLABEL (microcode_return_name__code_5)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_20;
  Wrd5 = Wrd9;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_18;
  Wrd17 = Wrd21;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_9])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd25 = Wrd24;
  (Wrd26.Obj) = (Rsp [4]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd12.uLng) == 1)
    goto label_13;
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_13)
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd5.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_12]));

DEFLABEL (label_16)
  (Wrd5.Obj) = (Rsp [3]);
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_8])), (Wrd18.pObj));

DEFLABEL (label_8)
  (Wrd17.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_5])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_19;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_6);
  (Wrd5.Obj) = Rvl;
  goto label_14;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_14_9);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_22;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_21)
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_14]));

DEFLABEL (label_22)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 12
#define DEBUGGING_LABEL_15_2 11
#define EXECUTE_CACHE_15_6 7
#define FREE_REFERENCE_15_0 10
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto microcode_return_code__name_0;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_return_code__name_4)
DEFLABEL (microcode_return_code__name_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_6 5
#define LABEL_16_5 7
#define LABEL_16_9 9
#define LABEL_16_8 11
#define ENVIRONMENT_LABEL_16_3 22
#define DEBUGGING_LABEL_16_2 21
#define OBJECT_16_0 20
#define EXECUTE_CACHE_16_10 13
#define EXECUTE_CACHE_16_7 15
#define FREE_REFERENCE_16_1 18
#define FREE_REFERENCE_16_0 19
#define FREE_REFERENCES_LABEL_16_0 12
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      goto microcode_return_code__names_4;

    case 1:
      current_block = (Rpc - LABEL_16_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_16_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_16_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_return_code__names_9)
DEFLABEL (microcode_return_code__names_4)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_17;
  Wrd9 = Wrd13;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = (current_block [OBJECT_16_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_15;
  Wrd11 = Wrd15;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = Rvl;
  goto label_11;

DEFLABEL (label_12)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.Obj) = (current_block [OBJECT_16_0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_9])), (Wrd12.pObj));

DEFLABEL (label_7)
  (Wrd11.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_6])), (Wrd10.pObj));

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_7 9
#define ENVIRONMENT_LABEL_17_3 16
#define DEBUGGING_LABEL_17_2 15
#define OBJECT_17_2 14
#define OBJECT_17_1 13
#define OBJECT_17_0 12
#define FREE_REFERENCE_17_0 11
#define FREE_REFERENCES_LABEL_17_0 10
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_17_4);
      goto microcode_return_code_limit_2;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_return_code_limit_7)
DEFLABEL (microcode_return_code_limit_2)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_6);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 10))
    goto label_10;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_10;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) (Wrd12.Lng)) < ((unsigned long) (Wrd15.Lng))))
    goto label_10;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.pObj) = (& ((Wrd13.pObj) [(Wrd7.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_9)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_8;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  Rvl = (MAKE_OBJECT (26, (Wrd26.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_10)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 12
#define DEBUGGING_LABEL_18_2 11
#define EXECUTE_CACHE_18_6 7
#define FREE_REFERENCE_18_0 10
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto microcode_error_name__code_0;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_error_name__code_4)
DEFLABEL (microcode_error_name__code_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 12
#define DEBUGGING_LABEL_19_2 11
#define EXECUTE_CACHE_19_6 7
#define FREE_REFERENCE_19_0 10
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto microcode_error_code__name_0;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_error_code__name_4)
DEFLABEL (microcode_error_code__name_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define LABEL_20_7 9
#define ENVIRONMENT_LABEL_20_3 16
#define DEBUGGING_LABEL_20_2 15
#define OBJECT_20_2 14
#define OBJECT_20_1 13
#define OBJECT_20_0 12
#define FREE_REFERENCE_20_0 11
#define FREE_REFERENCES_LABEL_20_0 10
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_20_4);
      goto microcode_error_code_limit_2;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_error_code_limit_7)
DEFLABEL (microcode_error_code_limit_2)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 10))
    goto label_10;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_10;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) (Wrd12.Lng)) < ((unsigned long) (Wrd15.Lng))))
    goto label_10;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.pObj) = (& ((Wrd13.pObj) [(Wrd7.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_9)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_8;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  Rvl = (MAKE_OBJECT (26, (Wrd26.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_10)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 12
#define DEBUGGING_LABEL_21_2 11
#define EXECUTE_CACHE_21_6 7
#define FREE_REFERENCE_21_0 10
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto microcode_termination_name__code_0;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_termination_name__code_4)
DEFLABEL (microcode_termination_name__code_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 12
#define DEBUGGING_LABEL_22_2 11
#define EXECUTE_CACHE_22_6 7
#define FREE_REFERENCE_22_0 10
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto microcode_termination_code__name_0;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_termination_code__name_4)
DEFLABEL (microcode_termination_code__name_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define LABEL_23_7 9
#define ENVIRONMENT_LABEL_23_3 16
#define DEBUGGING_LABEL_23_2 15
#define OBJECT_23_2 14
#define OBJECT_23_1 13
#define OBJECT_23_0 12
#define FREE_REFERENCE_23_0 11
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_23_4);
      goto microcode_termination_code_limit_2;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_23_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_termination_code_limit_7)
DEFLABEL (microcode_termination_code_limit_2)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_6);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 10))
    goto label_10;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_10;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) (Wrd12.Lng)) < ((unsigned long) (Wrd15.Lng))))
    goto label_10;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.pObj) = (& ((Wrd13.pObj) [(Wrd7.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_9)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_8;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  Rvl = (MAKE_OBJECT (26, (Wrd26.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 1);

DEFLABEL (label_10)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_6 5
#define LABEL_24_8 7
#define LABEL_24_5 9
#define ENVIRONMENT_LABEL_24_3 20
#define DEBUGGING_LABEL_24_2 19
#define OBJECT_24_1 18
#define OBJECT_24_0 17
#define EXECUTE_CACHE_24_9 11
#define EXECUTE_CACHE_24_7 13
#define FREE_REFERENCE_24_0 16
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      goto microcode_identification_vector_slot_4;

    case 1:
      current_block = (Rpc - LABEL_24_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_identification_vector_slot_8)
DEFLABEL (microcode_identification_vector_slot_4)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_14;
  Wrd9 = Wrd13;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_9)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (Rsp [2]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_24_0])))
    goto label_12;

DEFLABEL (label_11)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_8);
  goto label_9;

DEFLABEL (label_12)
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_6])), (Wrd10.pObj));

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define ENVIRONMENT_LABEL_25_3 15
#define DEBUGGING_LABEL_25_2 14
#define OBJECT_25_0 13
#define EXECUTE_CACHE_25_6 9
#define FREE_REFERENCE_25_0 12
#define FREE_REFERENCES_LABEL_25_0 8
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd30;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_25_4);
      goto microcode_identification_item_2;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_identification_item_6)
DEFLABEL (microcode_identification_item_2)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd30.uLng) == 10)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 2);

DEFLABEL (label_9)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_8;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) (Wrd24.Lng)) < ((unsigned long) (Wrd28.Lng))))
    goto label_8;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  (Wrd19.pObj) = (& ((Wrd26.pObj) [(Wrd16.Lng)]));
  Rvl = ((Wrd19.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_7])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
utabs_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto microcode_system_call_name__code_0;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_system_call_name__code_4)
DEFLABEL (microcode_system_call_name__code_0)
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
#define ENVIRONMENT_LABEL_27_3 12
#define DEBUGGING_LABEL_27_2 11
#define EXECUTE_CACHE_27_6 7
#define FREE_REFERENCE_27_0 10
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto microcode_system_call_code__name_0;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_system_call_code__name_4)
DEFLABEL (microcode_system_call_code__name_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define ENVIRONMENT_LABEL_28_3 12
#define DEBUGGING_LABEL_28_2 11
#define EXECUTE_CACHE_28_6 7
#define FREE_REFERENCE_28_0 10
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto microcode_system_call_error_name__code_0;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_system_call_error_name__code_4)
DEFLABEL (microcode_system_call_error_name__code_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define ENVIRONMENT_LABEL_29_3 12
#define DEBUGGING_LABEL_29_2 11
#define EXECUTE_CACHE_29_6 7
#define FREE_REFERENCE_29_0 10
#define FREE_REFERENCES_LABEL_29_0 6
#define NUMBER_OF_LINKER_SECTIONS_29_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto microcode_system_call_error_code__name_0;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_system_call_error_code__name_4)
DEFLABEL (microcode_system_call_error_code__name_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_8 7
#define LABEL_30_7 9
#define LABEL_30_6 11
#define LABEL_30_9 13
#define TAG_30_10 5
#define LABEL_30_13 15
#define ENVIRONMENT_LABEL_30_3 29
#define DEBUGGING_LABEL_30_2 28
#define OBJECT_30_1 27
#define OBJECT_30_0 26
#define EXECUTE_CACHE_30_14 17
#define EXECUTE_CACHE_30_12 19
#define EXECUTE_CACHE_30_11 21
#define FREE_REFERENCE_30_1 24
#define FREE_REFERENCE_30_0 25
#define FREE_REFERENCES_LABEL_30_0 16
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_30_4);
      goto microcode_type_name__code_5;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_30_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_30_6);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_30_9);
      goto lambda_12;

    case 6:
      current_block = (Rpc - LABEL_30_13);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_type_name__code_11)
DEFLABEL (microcode_type_name__code_5)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_20;
  Wrd5 = Wrd9;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_18;
  Wrd17 = Wrd21;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_9])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd25 = Wrd24;
  (Wrd26.Obj) = (Rsp [4]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd12.uLng) == 1)
    goto label_13;
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_13)
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd5.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (label_16)
  (Wrd5.Obj) = (Rsp [3]);
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_8])), (Wrd18.pObj));

DEFLABEL (label_8)
  (Wrd17.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_5])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_19;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_6);
  (Wrd5.Obj) = Rvl;
  goto label_14;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_30_9);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_22;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_21)
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_14]));

DEFLABEL (label_22)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 1);

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define ENVIRONMENT_LABEL_31_3 12
#define DEBUGGING_LABEL_31_2 11
#define EXECUTE_CACHE_31_6 7
#define FREE_REFERENCE_31_0 10
#define FREE_REFERENCES_LABEL_31_0 6
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto microcode_type_code__name_0;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_type_code__name_4)
DEFLABEL (microcode_type_code__name_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_6 5
#define LABEL_32_5 7
#define LABEL_32_9 9
#define LABEL_32_8 11
#define ENVIRONMENT_LABEL_32_3 22
#define DEBUGGING_LABEL_32_2 21
#define OBJECT_32_0 20
#define EXECUTE_CACHE_32_10 13
#define EXECUTE_CACHE_32_7 15
#define FREE_REFERENCE_32_1 18
#define FREE_REFERENCE_32_0 19
#define FREE_REFERENCES_LABEL_32_0 12
#define NUMBER_OF_LINKER_SECTIONS_32_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_32_4);
      goto microcode_type_code__names_4;

    case 1:
      current_block = (Rpc - LABEL_32_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_32_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_type_code__names_9)
DEFLABEL (microcode_type_code__names_4)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_17;
  Wrd9 = Wrd13;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = (current_block [OBJECT_32_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_15;
  Wrd11 = Wrd15;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = Rvl;
  goto label_11;

DEFLABEL (label_12)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.Obj) = (current_block [OBJECT_32_0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_9])), (Wrd12.pObj));

DEFLABEL (label_7)
  (Wrd11.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_6])), (Wrd10.pObj));

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_6 7
#define LABEL_33_7 9
#define ENVIRONMENT_LABEL_33_3 16
#define DEBUGGING_LABEL_33_2 15
#define OBJECT_33_2 14
#define OBJECT_33_1 13
#define OBJECT_33_0 12
#define FREE_REFERENCE_33_0 11
#define FREE_REFERENCES_LABEL_33_0 10
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utabs_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_33_4);
      goto microcode_type_code_limit_2;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_33_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_type_code_limit_7)
DEFLABEL (microcode_type_code_limit_2)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_6);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 10))
    goto label_10;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_10;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) (Wrd12.Lng)) < ((unsigned long) (Wrd15.Lng))))
    goto label_10;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.pObj) = (& ((Wrd13.pObj) [(Wrd7.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_9)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_8;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  Rvl = (MAKE_OBJECT (26, (Wrd26.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (label_10)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

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
utabs_so_43c4750df63ebded (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	1,
	2,
	2,
	1,
	2,
	2,
	1,
	2,
	2,
	2,
	1,
	0,
	1,
	1,
	1,
	1,
	0,
	1,
	1,
	2,
	1,
	0,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 33)
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

static const struct liarc_code_S arr_decl_utabs_so_43c4750df63ebded [33] =
  {
    { "utabs_so_code_1", 51, utabs_so_code_1 },
    { "utabs_so_code_2", 5, utabs_so_code_2 },
    { "utabs_so_code_3", 2, utabs_so_code_3 },
    { "utabs_so_code_4", 5, utabs_so_code_4 },
    { "utabs_so_code_5", 1, utabs_so_code_5 },
    { "utabs_so_code_6", 1, utabs_so_code_6 },
    { "utabs_so_code_7", 3, utabs_so_code_7 },
    { "utabs_so_code_8", 2, utabs_so_code_8 },
    { "utabs_so_code_9", 3, utabs_so_code_9 },
    { "utabs_so_code_10", 3, utabs_so_code_10 },
    { "utabs_so_code_11", 7, utabs_so_code_11 },
    { "utabs_so_code_12", 4, utabs_so_code_12 },
    { "utabs_so_code_13", 2, utabs_so_code_13 },
    { "utabs_so_code_14", 7, utabs_so_code_14 },
    { "utabs_so_code_15", 2, utabs_so_code_15 },
    { "utabs_so_code_16", 5, utabs_so_code_16 },
    { "utabs_so_code_17", 4, utabs_so_code_17 },
    { "utabs_so_code_18", 2, utabs_so_code_18 },
    { "utabs_so_code_19", 2, utabs_so_code_19 },
    { "utabs_so_code_20", 4, utabs_so_code_20 },
    { "utabs_so_code_21", 2, utabs_so_code_21 },
    { "utabs_so_code_22", 2, utabs_so_code_22 },
    { "utabs_so_code_23", 4, utabs_so_code_23 },
    { "utabs_so_code_24", 4, utabs_so_code_24 },
    { "utabs_so_code_25", 3, utabs_so_code_25 },
    { "utabs_so_code_26", 2, utabs_so_code_26 },
    { "utabs_so_code_27", 2, utabs_so_code_27 },
    { "utabs_so_code_28", 2, utabs_so_code_28 },
    { "utabs_so_code_29", 2, utabs_so_code_29 },
    { "utabs_so_code_30", 7, utabs_so_code_30 },
    { "utabs_so_code_31", 2, utabs_so_code_31 },
    { "utabs_so_code_32", 5, utabs_so_code_32 },
    { "utabs_so_code_33", 4, utabs_so_code_33 }
  };

int
decl_utabs_so_43c4750df63ebded (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_utabs_so_43c4750df63ebded);
  return (0);
}

DECLARE_COMPILED_CODE ("utabs.so", 3, decl_utabs_so_43c4750df63ebded, utabs_so_43c4750df63ebded)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_utabs_so_data_43c4750df63ebded [4983] =
  "\xb4\x01\x48\xd7\x08\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x0d\x0d"
  "\xb9\x08\x89\xb1\x0d\x0d\xb9\x08\x89\xb1\x0d\x0c\x0d\x0d\x0c\x0d"
  "\x0c\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\xc0\x0d\xb9\x0d\xba\x0d\xbb\x0d\xbc\x0d\xbd\x0d\xbe\x0d\xbf"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x25\x1b\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x82\x88\xc1\xc3\xc5\x80\xc1\xc1\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x1b\x24"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0f\x1b\x24\x28"
  "\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x02\x28\x0d\x1c\x23\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x86\x88\x02\x28\x0d\x1c\x23\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\xc2\x1c\x02\xc0\x1c\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\xb7\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x80\x1b\x1b\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc1\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x1b\xb4\x1b\x24\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x24\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\xb6\x1b\x24"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\xb4\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x24\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x1b\xb2\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb5\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb5\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\xb5\x24\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1d\xb3\x24"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\xb1\x24\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\xb6"
  "\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6"
  "\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x08\xb6\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\xb6\x24"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b"
  "\x0d\x0d\x0d\x08\x8a\x0d\x0d\x08\x89\x0d\x0d\x08\x89\x0d\x0d\x08"
  "\x89\x0d\x0d\x08\x89\x0d\x0d\x08\x89\x0d\x0d\x08\x89\x0d\x0d\x0d"
  "\x0d\x08\x8b\x0d\x0d\x0d\x08\x8a\x0d\x0d\x08\x89\x0d\x0d\x0d\x0d"
  "\x08\x8b\x0d\x0d\x08\x89\x0d\x0d\x08\x89\x08\x14\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1e\x1b"
  "\x2a\x1b\x2a\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1e\x08\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e"
  "\x02\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x17\x1b\x0d\x0d\x0d\x1b\xb6\x0d\x0d\x1b\x0d"
  "\x0d\x1b\x1b\x1b\xb1\xb3\x0d\x0d\x0d\xb5\x0d\x0d\x0d\xb2\x1b\x0d"
  "\x0d\x0d\x1b\xb4\x1b\x1b\x1b\x0d\x0d\x1b\x0d\x0d\x1b\xb7\x0d\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x0d\x17"
  "\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x54\x2f\x55\x73"
  "\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65"
  "\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e"
  "\x74\x69\x6d\x65\x2f\x2e\x2f\x75\x74\x61\x62\x73\x2e\x69\x6e\x66"
  "\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x72\x6f\x6f\x74\x5d\x02\x02\x12\x73\x65\x71\x75\x65\x6e\x63\x65"
  "\x2d\x32\x2d\x73\x65\x63\x6f\x6e\x64\x12\x73\x65\x71\x75\x65\x6e"
  "\x63\x65\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x65\x0b\x73\x65\x71\x75"
  "\x65\x6e\x63\x65\x2d\x32\x09\x73\x65\x71\x75\x65\x6e\x63\x65\x0f"
  "\x63\x6f\x6e\x73\x6f\x6c\x65\x2d\x68\x65\x69\x67\x68\x74\x08\x75"
  "\x6e\x6b\x6e\x6f\x77\x6e\x0e\x63\x6f\x6e\x73\x6f\x6c\x65\x2d\x77"
  "\x69\x64\x74\x68\x0f\x63\x63\x2d\x61\x72\x63\x68\x2d\x73\x74\x72"
  "\x69\x6e\x67\x10\x75\x6e\x6b\x6e\x6f\x77\x6e\x2d\x6d\x61\x63\x68"
  "\x69\x6e\x65\x14\x6d\x61\x63\x68\x69\x6e\x65\x2d\x74\x79\x70\x65"
  "\x2d\x73\x74\x72\x69\x6e\x67\x14\x49\x6c\x6c\x65\x67\x61\x6c\x20"
  "\x73\x74\x61\x63\x6b\x20\x74\x79\x70\x65\x3a\x09\x73\x74\x61\x6e"
  "\x64\x61\x72\x64\x12\x73\x74\x61\x63\x6b\x2d\x74\x79\x70\x65\x2d"
  "\x73\x74\x72\x69\x6e\x67\x12\x6f\x73\x2d\x76\x61\x72\x69\x61\x6e"
  "\x74\x2d\x73\x74\x72\x69\x6e\x67\x0f\x6f\x73\x2d\x6e\x61\x6d\x65"
  "\x2d\x73\x74\x72\x69\x6e\x67\x0f\x66\x6c\x6f\x6e\x75\x6d\x2d\x65"
  "\x70\x73\x69\x6c\x6f\x6e\x17\x66\x6c\x6f\x6e\x75\x6d\x2d\x6d\x61"
  "\x6e\x74\x69\x73\x73\x61\x2d\x6c\x65\x6e\x67\x74\x68\x0d\x6e\x65"
  "\x77\x6c\x69\x6e\x65\x2d\x63\x68\x61\x72\x12\x6d\x69\x63\x72\x6f"
  "\x63\x6f\x64\x65\x2d\x76\x65\x72\x73\x69\x6f\x6e\x13\x73\x79\x73"
  "\x74\x65\x6d\x2d\x63\x61\x6c\x6c\x2d\x65\x72\x72\x6f\x72\x73\x12"
  "\x73\x79\x73\x74\x65\x6d\x2d\x63\x61\x6c\x6c\x2d\x6e\x61\x6d\x65"
  "\x73\x0b\x6e\x6f\x6e\x2d\x6f\x62\x6a\x65\x63\x74\x17\x6d\x69\x63"
  "\x72\x6f\x63\x6f\x64\x65\x2d\x74\x79\x70\x65\x73\x2d\x76\x65\x63"
  "\x74\x6f\x72\x1e\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74\x65"
  "\x72\x6d\x69\x6e\x61\x74\x69\x6f\x6e\x73\x2d\x76\x65\x63\x74\x6f"
  "\x72\x19\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x72\x65\x74\x75"
  "\x72\x6e\x73\x2d\x76\x65\x63\x74\x6f\x72\x20\x6d\x69\x63\x72\x6f"
  "\x63\x6f\x64\x65\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x76\x65\x63\x74\x6f\x72\x18\x6d\x69\x63\x72\x6f"
  "\x63\x6f\x64\x65\x2d\x65\x72\x72\x6f\x72\x73\x2d\x76\x65\x63\x74"
  "\x6f\x72\x13\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x69\x64\x65"
  "\x6e\x74\x69\x66\x79\x16\x69\x64\x65\x6e\x74\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x76\x65\x63\x74\x6f\x72\x0c\x65\x72\x72\x6f"
  "\x72\x73\x2d\x73\x6c\x6f\x74\x15\x69\x64\x65\x6e\x74\x69\x66\x69"
  "\x63\x61\x74\x69\x6f\x6e\x73\x2d\x73\x6c\x6f\x74\x0d\x72\x65\x74"
  "\x75\x72\x6e\x73\x2d\x73\x6c\x6f\x74\x12\x74\x65\x72\x6d\x69\x6e"
  "\x61\x74\x69\x6f\x6e\x73\x2d\x73\x6c\x6f\x74\x0b\x74\x79\x70\x65"
  "\x73\x2d\x73\x6c\x6f\x74\x10\x6e\x6f\x6e\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x2d\x73\x6c\x6f\x74\x17\x73\x79\x73\x74\x65\x6d\x2d\x63\x61"
  "\x6c\x6c\x2d\x6e\x61\x6d\x65\x73\x2d\x73\x6c\x6f\x74\x09\x18\x73"
  "\x79\x73\x74\x65\x6d\x2d\x63\x61\x6c\x6c\x2d\x65\x72\x72\x6f\x72"
  "\x73\x2d\x73\x6c\x6f\x74\x0a\x19\x6d\x69\x63\x72\x6f\x63\x6f\x64"
  "\x65\x2d\x76\x65\x72\x73\x69\x6f\x6e\x2d\x73\x74\x72\x69\x6e\x67"
  "\x0b\x0d\x63\x68\x61\x72\x3a\x6e\x65\x77\x6c\x69\x6e\x65\x0c\x24"
  "\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x69\x64\x2f\x66\x6c\x6f"
  "\x61\x74\x69\x6e\x67\x2d\x6d\x61\x6e\x74\x69\x73\x73\x61\x2d\x62"
  "\x69\x74\x73\x0d\x1e\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x69"
  "\x64\x2f\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x65\x70\x73\x69\x6c"
  "\x6f\x6e\x0e\x1e\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x69\x64"
  "\x2f\x6f\x70\x65\x72\x61\x74\x69\x6e\x67\x2d\x73\x79\x73\x74\x65"
  "\x6d\x0f\x23\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x69\x64\x2f"
  "\x6f\x70\x65\x72\x61\x74\x69\x6e\x67\x2d\x73\x79\x73\x74\x65\x6d"
  "\x2d\x6e\x61\x6d\x65\x10\x26\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65"
  "\x2d\x69\x64\x2f\x6f\x70\x65\x72\x61\x74\x69\x6e\x67\x2d\x73\x79"
  "\x73\x74\x65\x6d\x2d\x76\x61\x72\x69\x61\x6e\x74\x11\x18\x6d\x69"
  "\x63\x72\x6f\x63\x6f\x64\x65\x2d\x69\x64\x2f\x73\x74\x61\x63\x6b"
  "\x2d\x74\x79\x70\x65\x12\x1a\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65"
  "\x2d\x69\x64\x2f\x6d\x61\x63\x68\x69\x6e\x65\x2d\x74\x79\x70\x65"
  "\x13\x20\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x69\x64\x2f\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x74\x79\x70"
  "\x65\x14\x18\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x69\x64\x2f"
  "\x74\x74\x79\x2d\x78\x2d\x73\x69\x7a\x65\x15\x18\x6d\x69\x63\x72"
  "\x6f\x63\x6f\x64\x65\x2d\x69\x64\x2f\x74\x74\x79\x2d\x79\x2d\x73"
  "\x69\x7a\x65\x16\x0d\x74\x79\x70\x65\x2d\x61\x6c\x69\x61\x73\x65"
  "\x73\x17\x10\x72\x65\x74\x75\x72\x6e\x73\x2d\x61\x6c\x69\x61\x73"
  "\x65\x73\x18\x18\x17\x18\x03\x03\x18\x66\x69\x78\x65\x64\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x2f\x6e\x61\x6d\x65\x2d\x3e\x63\x6f\x64\x65"
  "\x19\x03\x1e\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x69\x64\x65"
  "\x6e\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x69\x74\x65\x6d"
  "\x1a\x04\x1a\x03\x07\x69\x6e\x74\x65\x72\x6e\x1b\x04\x06\x65\x72"
  "\x72\x6f\x72\x03\x1a\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74"
  "\x79\x70\x65\x2f\x6e\x61\x6d\x65\x2d\x3e\x63\x6f\x64\x65\x1c\x03"
  "\x1c\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x72\x65\x74\x75\x72"
  "\x6e\x2f\x6e\x61\x6d\x65\x2d\x3e\x63\x6f\x64\x65\x1d\x08\x36\x68"
  "\x81\x81\x02\x35\x66\x81\x81\x02\x34\x64\x81\x81\x02\x33\x62\x81"
  "\x81\x02\x32\x60\x81\x81\x02\x31\x5e\x81\x81\x02\x30\x5c\x81\x81"
  "\x02\x2f\x5a\x81\x81\x02\x2e\x58\x81\x81\x02\x2d\x56\x81\x81\x02"
  "\x2c\x54\x81\x83\x02\x2b\x52\x81\x81\x02\x2a\x50\x81\x81\x02\x29"
  "\x4e\x81\x81\x02\x28\x4c\x81\x81\x02\x27\x4a\x81\x81\x02\x26\x48"
  "\x81\x81\x02\x25\x46\x81\x83\x02\x24\x44\x81\x81\x02\x23\x42\x81"
  "\x81\x02\x22\x40\x81\x83\x02\x21\x3e\x81\x83\x02\x20\x3c\x81\x83"
  "\x02\x1f\x3a\x81\x81\x02\x1e\x38\x81\x81\x02\x1d\x36\x81\x81\x02"
  "\x1c\x34\x81\x81\x02\x1b\x32\x81\x81\x02\x1a\x30\x81\x81\x02\x19"
  "\x2e\x81\x81\x02\x18\x2c\x81\x81\x02\x17\x2a\x81\x81\x02\x16\x28"
  "\x81\x81\x02\x15\x26\x81\x81\x02\x14\x24\x81\x81\x02\x13\x22\x81"
  "\x81\x02\x12\x20\x81\x81\x02\x11\x1e\x81\x81\x02\x10\x1c\x81\x81"
  "\x02\x0f\x1a\x81\x81\x02\x0e\x18\x81\x81\x02\x0d\x16\x81\x81\x02"
  "\x0c\x14\x81\x81\x02\x0b\x12\x81\x81\x02\x0a\x10\x81\x81\x02\x09"
  "\x0e\x81\x81\x02\x08\x0c\x81\x81\x02\x07\x0a\x81\x81\x02\x06\x08"
  "\x81\x81\x02\x05\x06\x81\x81\x02\x04\x04\x82\x02\x67\xb1\x01\x1e"
  "\x02\x0f\x73\x74\x72\x69\x6e\x67\x2d\x3e\x73\x79\x6d\x62\x6f\x6c"
  "\x14\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x64\x6f\x77\x6e\x63"
  "\x61\x73\x65\x21\x16\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x6d"
  "\x6f\x76\x65\x2d\x72\x69\x67\x68\x74\x21\x10\x73\x74\x72\x69\x6e"
  "\x67\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x0e\x73\x74\x72\x69\x6e"
  "\x67\x2d\x6c\x65\x6e\x67\x74\x68\x3b\x0c\x81\x87\x02\x3a\x0a\x81"
  "\x87\x02\x39\x08\x81\x85\x02\x38\x06\x81\x83\x02\x37\x04\x83\x04"
  "\x0b\x14\x1f\x02\x0b\x02\x3d\x06\x81\x81\x02\x3c\x04\x82\x02\x05"
  "\x0a\x20\x02\x01\x2f\x0b\x02\x05\x0d\x62\x75\x72\x73\x74\x2d\x73"
  "\x74\x72\x69\x6e\x67\x04\x04\x6d\x61\x70\x03\x0f\x73\x74\x72\x69"
  "\x6e\x67\x2d\x3e\x6e\x75\x6d\x62\x65\x72\x04\x42\x0c\x81\x83\x02"
  "\x41\x0a\x83\x04\x40\x08\x81\x81\x02\x3f\x06\x81\x87\x02\x3e\x04"
  "\x82\x02\x0b\x18\x21\x02\x10\x04\x17\x6d\x69\x63\x72\x6f\x63\x6f"
  "\x64\x65\x2d\x74\x61\x62\x6c\x65\x2d\x73\x65\x61\x72\x63\x68\x22"
  "\x02\x43\x04\x83\x04\x03\x0a\x23\x02\x10\x04\x14\x6d\x69\x63\x72"
  "\x6f\x63\x6f\x64\x65\x2d\x74\x61\x62\x6c\x65\x2d\x72\x65\x66\x24"
  "\x02\x44\x04\x83\x04\x03\x0a\x25\x02\x08\x0e\x76\x65\x63\x74\x6f"
  "\x72\x2d\x6c\x65\x6e\x67\x74\x68\x26\x0b\x76\x65\x63\x74\x6f\x72"
  "\x2d\x72\x65\x66\x27\x10\x19\x67\x65\x74\x2d\x66\x69\x78\x65\x64"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x73\x2d\x76\x65\x63\x74\x6f\x72\x28"
  "\x47\x08\x81\x81\x02\x46\x06\x81\x81\x02\x45\x04\x82\x02\x07\x0e"
  "\x29\x02\x09\x1a\x66\x69\x78\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74"
  "\x73\x2d\x76\x65\x63\x74\x6f\x72\x2d\x73\x6c\x6f\x74\x2a\x03\x19"
  "\x04\x19\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67"
  "\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x2b\x03\x49\x06\x81\x83"
  "\x02\x48\x04\x83\x04\x05\x0e\x2c\x02\x0a\x27\x28\x03\x2a\x02\x4c"
  "\x08\x81\x85\x02\x4b\x06\x81\x83\x02\x4a\x04\x83\x04\x07\x0f\x2d"
  "\x02\x0b\x27\x28\x02\x4f\x08\x81\x83\x02\x4e\x06\x81\x81\x02\x4d"
  "\x04\x82\x02\x07\x0e\x2e\x02\x0c\x26\x27\x28\x04\x05\x6d\x65\x6d"
  "\x71\x2f\x02\x56\x10\x81\x8b\x02\x55\x0e\x81\x8b\x02\x54\x0c\x81"
  "\x8d\x02\x53\x0a\x81\x87\x02\x52\x08\x81\x85\x02\x51\x06\x81\x85"
  "\x02\x50\x04\x84\x06\x0f\x19\x30\x02\x0d\x26\x27\x28\x5a\x0a\x81"
  "\x87\x02\x59\x08\x81\x85\x02\x58\x06\x81\x85\x02\x57\x04\x84\x06"
  "\x09\x0f\x31\x02\x0e\x04\x63\x61\x72\x32\x04\x16\x6d\x69\x63\x72"
  "\x6f\x63\x6f\x64\x65\x2d\x74\x61\x62\x6c\x65\x2d\x65\x6e\x74\x72"
  "\x79\x33\x02\x5c\x06\x81\x85\x02\x5b\x04\x84\x06\x05\x0c\x34\x02"
  "\x0f\x04\x63\x64\x72\x35\x32\x18\x03\x04\x05\x66\x69\x6e\x64\x36"
  "\x04\x22\x04\x2f\x04\x63\x10\x81\x85\x02\x62\x0e\x81\x85\x02\x61"
  "\x0c\x81\x85\x02\x60\x0a\x81\x87\x02\x5f\x08\x81\x89\x02\x5e\x06"
  "\x81\x83\x02\x5d\x04\x83\x04\x0f\x1e\x37\x02\x10\x02\x04\x24\x02"
  "\x65\x06\x81\x83\x02\x64\x04\x83\x04\x05\x0d\x38\x02\x11\x18\x03"
  "\x04\x33\x04\x05\x61\x73\x73\x71\x39\x03\x6a\x0c\x81\x83\x02\x69"
  "\x0a\x81\x85\x02\x68\x08\x81\x83\x02\x67\x06\x81\x87\x02\x66\x04"
  "\x83\x04\x0b\x17\x3a\x02\x12\x26\x27\x28\x02\x6e\x0a\x81\x81\x02"
  "\x6d\x08\x81\x83\x02\x6c\x06\x81\x81\x02\x6b\x04\x82\x02\x09\x11"
  "\x3b\x02\x13\x02\x04\x22\x02\x70\x06\x81\x83\x02\x6f\x04\x83\x04"
  "\x05\x0d\x3c\x02\x14\x02\x04\x24\x02\x72\x06\x81\x83\x02\x71\x04"
  "\x83\x04\x05\x0d\x3d\x02\x15\x26\x27\x28\x02\x76\x0a\x81\x81\x02"
  "\x75\x08\x81\x83\x02\x74\x06\x81\x81\x02\x73\x04\x82\x02\x09\x11"
  "\x3e\x02\x16\x02\x04\x22\x02\x78\x06\x81\x83\x02\x77\x04\x83\x04"
  "\x05\x0d\x3f\x02\x17\x02\x04\x24\x02\x7a\x06\x81\x83\x02\x79\x04"
  "\x83\x04\x05\x0d\x40\x02\x18\x26\x27\x28\x02\x7e\x0a\x81\x81\x02"
  "\x7d\x08\x81\x83\x02\x7c\x06\x81\x81\x02\x7b\x04\x82\x02\x09\x11"
  "\x41\x02\x19\x25\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x69\x64"
  "\x65\x6e\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x76\x65\x63"
  "\x74\x6f\x72\x2d\x73\x6c\x6f\x74\x42\x08\x02\x04\x22\x04\x2b\x03"
  "\x82\x01\x0a\x81\x85\x02\x81\x01\x08\x81\x87\x02\x80\x01\x06\x81"
  "\x89\x02\x7f\x04\x84\x04\x09\x15\x2b\x02\x1a\x27\x02\x04\x42\x02"
  "\x85\x01\x08\x81\x83\x02\x84\x01\x06\x81\x85\x02\x83\x01\x04\x84"
  "\x04\x07\x10\x43\x02\x1b\x09\x02\x04\x22\x02\x87\x01\x06\x81\x83"
  "\x02\x86\x01\x04\x83\x04\x05\x0d\x44\x02\x1c\x09\x02\x04\x24\x02"
  "\x89\x01\x06\x81\x83\x02\x88\x01\x04\x83\x04\x05\x0d\x45\x02\x1d"
  "\x0a\x02\x04\x22\x02\x8b\x01\x06\x81\x83\x02\x8a\x01\x04\x83\x04"
  "\x05\x0d\x46\x02\x1e\x0a\x02\x04\x24\x02\x8d\x01\x06\x81\x83\x02"
  "\x8c\x01\x04\x83\x04\x05\x0d\x47\x02\x1f\x35\x32\x17\x03\x04\x36"
  "\x04\x22\x04\x2f\x04\x94\x01\x10\x81\x85\x02\x93\x01\x0e\x81\x85"
  "\x02\x92\x01\x0c\x81\x85\x02\x91\x01\x0a\x81\x87\x02\x90\x01\x08"
  "\x81\x89\x02\x8f\x01\x06\x81\x83\x02\x8e\x01\x04\x83\x04\x0f\x1e"
  "\x36\x02\x20\x02\x04\x24\x02\x96\x01\x06\x81\x83\x02\x95\x01\x04"
  "\x83\x04\x05\x0d\x35\x02\x21\x17\x03\x04\x33\x04\x39\x03\x9b\x01"
  "\x0c\x81\x83\x02\x9a\x01\x0a\x81\x85\x02\x99\x01\x08\x81\x83\x02"
  "\x98\x01\x06\x81\x87\x02\x97\x01\x04\x83\x04\x0b\x17\x39\x02\x22"
  "\x26\x27\x28\x02\x9f\x01\x0a\x81\x81\x02\x9e\x01\x08\x81\x83\x02"
  "\x9d\x01\x06\x81\x81\x02\x9c\x01\x04\x82\x02\x09\x11\x32\x22\x2f"
  "\x2f\x06\x66\x61\x6c\x73\x65\x10\x6d\x61\x6e\x69\x66\x65\x73\x74"
  "\x2d\x76\x65\x63\x74\x6f\x72\x13\x67\x6c\x6f\x62\x61\x6c\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x05\x70\x61\x69\x72\x05"
  "\x6c\x69\x73\x74\x07\x66\x6c\x6f\x6e\x75\x6d\x0b\x62\x69\x67\x2d"
  "\x66\x6c\x6f\x6e\x75\x6d\x09\x63\x6f\x6e\x73\x74\x61\x6e\x74\x05"
  "\x74\x72\x75\x65\x0c\x72\x65\x74\x75\x72\x6e\x2d\x63\x6f\x64\x65"
  "\x0f\x72\x65\x74\x75\x72\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x07"
  "\x62\x69\x67\x6e\x75\x6d\x0b\x62\x69\x67\x2d\x66\x69\x78\x6e\x75"
  "\x6d\x08\x70\x72\x6f\x6d\x69\x73\x65\x08\x64\x65\x6c\x61\x79\x65"
  "\x64\x07\x66\x69\x78\x6e\x75\x6d\x08\x61\x64\x64\x72\x65\x73\x73"
  "\x10\x70\x6f\x73\x69\x74\x69\x76\x65\x2d\x66\x69\x78\x6e\x75\x6d"
  "\x10\x6e\x65\x67\x61\x74\x69\x76\x65\x2d\x66\x69\x78\x6e\x75\x6d"
  "\x07\x73\x74\x72\x69\x6e\x67\x11\x63\x68\x61\x72\x61\x63\x74\x65"
  "\x72\x2d\x73\x74\x72\x69\x6e\x67\x0a\x76\x65\x63\x74\x6f\x72\x2d"
  "\x38\x62\x08\x68\x75\x6e\x6b\x33\x2d\x61\x11\x75\x6e\x6d\x61\x72"
  "\x6b\x65\x64\x2d\x68\x69\x73\x74\x6f\x72\x79\x07\x74\x72\x69\x70"
  "\x6c\x65\x06\x68\x75\x6e\x6b\x33\x08\x68\x75\x6e\x6b\x33\x2d\x62"
  "\x0f\x6d\x61\x72\x6b\x65\x64\x2d\x68\x69\x73\x74\x6f\x72\x79\x0f"
  "\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x0b\x75"
  "\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x07\x72\x65\x63\x6e\x75\x6d"
  "\x08\x63\x6f\x6d\x70\x6c\x65\x78\x0d\x32\x04\x39\x04\x35\x04\x36"
  "\x04\x47\x04\x46\x04\x45\x04\x44\x04\x43\x04\x2b\x04\x41\x04\x40"
  "\x04\x3f\x04\x3e\x04\x3d\x04\x3c\x04\x3b\x04\x3a\x04\x38\x04\x37"
  "\x04\x34\x04\x31\x04\x30\x04\x2e\x04\x2d\x04\x2c\x04\x29\x04\x25"
  "\x04\x23\x04\x10\x21\x04\x20\x04\x1f\x04\x1e\x04\x3a\x17\x1a\x6d"
  "\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74\x79\x70\x65\x2f\x63\x6f"
  "\x64\x65\x2d\x6c\x69\x6d\x69\x74\x1b\x6d\x69\x63\x72\x6f\x63\x6f"
  "\x64\x65\x2d\x74\x79\x70\x65\x2f\x63\x6f\x64\x65\x2d\x3e\x6e\x61"
  "\x6d\x65\x73\x1a\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74\x79"
  "\x70\x65\x2f\x63\x6f\x64\x65\x2d\x3e\x6e\x61\x6d\x65\x1c\x27\x6d"
  "\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x73\x79\x73\x74\x65\x6d\x2d"
  "\x63\x61\x6c\x6c\x2d\x65\x72\x72\x6f\x72\x2f\x63\x6f\x64\x65\x2d"
  "\x3e\x6e\x61\x6d\x65\x27\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d"
  "\x73\x79\x73\x74\x65\x6d\x2d\x63\x61\x6c\x6c\x2d\x65\x72\x72\x6f"
  "\x72\x2f\x6e\x61\x6d\x65\x2d\x3e\x63\x6f\x64\x65\x0a\x21\x6d\x69"
  "\x63\x72\x6f\x63\x6f\x64\x65\x2d\x73\x79\x73\x74\x65\x6d\x2d\x63"
  "\x61\x6c\x6c\x2f\x63\x6f\x64\x65\x2d\x3e\x6e\x61\x6d\x65\x21\x6d"
  "\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x73\x79\x73\x74\x65\x6d\x2d"
  "\x63\x61\x6c\x6c\x2f\x6e\x61\x6d\x65\x2d\x3e\x63\x6f\x64\x65\x09"
  "\x1a\x42\x21\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74\x65\x72"
  "\x6d\x69\x6e\x61\x74\x69\x6f\x6e\x2f\x63\x6f\x64\x65\x2d\x6c\x69"
  "\x6d\x69\x74\x21\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74\x65"
  "\x72\x6d\x69\x6e\x61\x74\x69\x6f\x6e\x2f\x63\x6f\x64\x65\x2d\x3e"
  "\x6e\x61\x6d\x65\x21\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74"
  "\x65\x72\x6d\x69\x6e\x61\x74\x69\x6f\x6e\x2f\x6e\x61\x6d\x65\x2d"
  "\x3e\x63\x6f\x64\x65\x1b\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d"
  "\x65\x72\x72\x6f\x72\x2f\x63\x6f\x64\x65\x2d\x6c\x69\x6d\x69\x74"
  "\x1b\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x65\x72\x72\x6f\x72"
  "\x2f\x63\x6f\x64\x65\x2d\x3e\x6e\x61\x6d\x65\x1b\x6d\x69\x63\x72"
  "\x6f\x63\x6f\x64\x65\x2d\x65\x72\x72\x6f\x72\x2f\x6e\x61\x6d\x65"
  "\x2d\x3e\x63\x6f\x64\x65\x18\x1c\x6d\x69\x63\x72\x6f\x63\x6f\x64"
  "\x65\x2d\x72\x65\x74\x75\x72\x6e\x2f\x63\x6f\x64\x65\x2d\x6c\x69"
  "\x6d\x69\x74\x1d\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x72\x65"
  "\x74\x75\x72\x6e\x2f\x63\x6f\x64\x65\x2d\x3e\x6e\x61\x6d\x65\x73"
  "\x1c\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x72\x65\x74\x75\x72"
  "\x6e\x2f\x63\x6f\x64\x65\x2d\x3e\x6e\x61\x6d\x65\x1d\x24\x33\x22"
  "\x1c\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x2f\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x13\x66\x69\x78"
  "\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x73\x2d\x69\x74\x65\x6d\x2a"
  "\x18\x66\x69\x78\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x2f\x63\x6f"
  "\x64\x65\x2d\x6c\x69\x6d\x69\x74\x18\x66\x69\x78\x65\x64\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x2f\x63\x6f\x64\x65\x2d\x3e\x6e\x61\x6d\x65"
  "\x19\x13\x66\x69\x78\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x73\x2d"
  "\x73\x6c\x6f\x74\x14\x13\x12\x11\x10\x0f\x0e\x0d\x16\x15\x0c\x0b"
  "\x1e\x67\x65\x74\x2d\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x76"
  "\x65\x72\x73\x69\x6f\x6e\x2d\x6e\x75\x6d\x62\x65\x72\x73\x1d\x67"
  "\x65\x74\x2d\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x76\x65\x72"
  "\x73\x69\x6f\x6e\x2d\x73\x74\x72\x69\x6e\x67\x1b\x17\x72\x65\x61"
  "\x64\x2d\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74\x61\x62\x6c"
  "\x65\x73\x21\x3a\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c"
  "\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02"
  "\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
utabs_so_data_43c4750df63ebded (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_utabs_so_data_43c4750df63ebded [0]))), (sizeof (prog_utabs_so_data_43c4750df63ebded)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("utabs.so", utabs_so_data_43c4750df63ebded)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("utabs.so", "19fb0f4a0dd38691")
