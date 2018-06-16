/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:30-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define TAG_1_8 2
#define LABEL_1_13 9
#define LABEL_1_14 11
#define LABEL_1_15 13
#define LABEL_1_16 15
#define LABEL_1_10 17
#define LABEL_1_28 19
#define LABEL_1_29 21
#define LABEL_1_11 23
#define TAG_1_12 10
#define LABEL_1_30 25
#define LABEL_1_19 27
#define TAG_1_20 12
#define LABEL_1_17 29
#define TAG_1_18 13
#define LABEL_1_21 31
#define LABEL_1_22 33
#define LABEL_1_23 35
#define LABEL_1_24 37
#define LABEL_1_25 39
#define LABEL_1_26 41
#define LABEL_1_44 43
#define LABEL_1_32 45
#define LABEL_1_34 47
#define LABEL_1_36 49
#define LABEL_1_38 51
#define LABEL_1_40 53
#define LABEL_1_42 55
#define LABEL_1_45 57
#define LABEL_1_49 59
#define LABEL_1_50 61
#define LABEL_1_48 63
#define ENVIRONMENT_LABEL_1_3 106
#define DEBUGGING_LABEL_1_2 105
#define OBJECT_1_11 104
#define OBJECT_1_10 103
#define OBJECT_1_9 102
#define OBJECT_1_8 101
#define OBJECT_1_7 100
#define OBJECT_1_6 99
#define OBJECT_1_5 98
#define OBJECT_1_4 97
#define OBJECT_1_3 96
#define OBJECT_1_2 95
#define OBJECT_1_1 94
#define OBJECT_1_0 93
#define EXECUTE_CACHE_1_52 65
#define EXECUTE_CACHE_1_51 67
#define EXECUTE_CACHE_1_47 69
#define EXECUTE_CACHE_1_46 71
#define EXECUTE_CACHE_1_43 73
#define EXECUTE_CACHE_1_41 75
#define EXECUTE_CACHE_1_39 77
#define EXECUTE_CACHE_1_37 79
#define EXECUTE_CACHE_1_35 81
#define EXECUTE_CACHE_1_33 83
#define EXECUTE_CACHE_1_31 85
#define EXECUTE_CACHE_1_27 87
#define EXECUTE_CACHE_1_9 89
#define EXECUTE_CACHE_1_6 91
#define FREE_REFERENCES_LABEL_1_0 64
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd38;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd73;
  machine_word Wrd74;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd67;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_1_4);
      goto lambda_38;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto lambda_49;

    case 3:
      current_block = (Rpc - LABEL_1_13);
      goto label_40;

    case 4:
      current_block = (Rpc - LABEL_1_14);
      goto label_41;

    case 5:
      current_block = (Rpc - LABEL_1_15);
      goto label_42;

    case 6:
      current_block = (Rpc - LABEL_1_16);
      goto label_43;

    case 7:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_13;

    case 8:
      current_block = (Rpc - LABEL_1_28);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_1_29);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_1_11);
      goto lambda_50;

    case 11:
      current_block = (Rpc - LABEL_1_30);
      goto label_44;

    case 12:
      current_block = (Rpc - LABEL_1_19);
      goto lambda_52;

    case 13:
      current_block = (Rpc - LABEL_1_17);
      goto lambda_51;

    case 14:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_35;

    case 15:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_34;

    case 16:
      current_block = (Rpc - LABEL_1_23);
      goto continuation_33;

    case 17:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_32;

    case 18:
      current_block = (Rpc - LABEL_1_25);
      goto continuation_31;

    case 19:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_30;

    case 20:
      current_block = (Rpc - LABEL_1_44);
      goto continuation_6;

    case 21:
      current_block = (Rpc - LABEL_1_32);
      goto continuation_5;

    case 22:
      current_block = (Rpc - LABEL_1_34);
      goto continuation_25;

    case 23:
      current_block = (Rpc - LABEL_1_36);
      goto continuation_26;

    case 24:
      current_block = (Rpc - LABEL_1_38);
      goto continuation_27;

    case 25:
      current_block = (Rpc - LABEL_1_40);
      goto continuation_28;

    case 26:
      current_block = (Rpc - LABEL_1_42);
      goto continuation_29;

    case 27:
      current_block = (Rpc - LABEL_1_45);
      goto continuation_7;

    case 28:
      current_block = (Rpc - LABEL_1_49);
      goto label_45;

    case 29:
      current_block = (Rpc - LABEL_1_50);
      goto label_46;

    case 30:
      current_block = (Rpc - LABEL_1_48);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_48)
DEFLABEL (lambda_38)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_7])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_1_7);

DEFLABEL (lambda_37)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_11])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd16 = Wrd9;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd18.pObj) [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_62;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd20.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_61)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_60;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_59)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 1)
    goto label_54;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd47.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_19])));
  Rhp += 1;
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd47.pObj)));
  ((Wrd47.pObj) [2]) = (Wrd42.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_53)
  goto pop_return;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_25]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_1_26);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_43]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_1_42);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_47]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_1_25);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_41]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_1_40);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_47]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_1_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_39]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_1_38);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_47]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_1_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_37]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_1_36);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_47]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_35]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_1_34);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_47]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_1_21);
  (Wrd10.Obj) = (current_block [OBJECT_1_10]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_54)
  if (! ((Wrd43.uLng) == 1))
    goto label_58;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_57)
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_56;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [1]);

DEFLABEL (label_55)
  (Rsp [1]) = (Wrd59.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd71.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_17])));
  Rhp += 2;
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd71.pObj)));
  Wrd74 = Wrd71;
  ((Wrd74.pObj) [2]) = (Wrd59.Obj);
  (Wrd73.Obj) = (Rsp [0]);
  ((Wrd74.pObj) [3]) = (Wrd73.Obj);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd70.Obj);
  goto label_53;

DEFLABEL (label_56)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_43)
  (Wrd59.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_40)
  (Wrd20.Obj) = Rvl;
  goto label_61;

DEFLABEL (lambda_50)
  CLOSURE_HEADER (LABEL_1_11);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_1_3]);
  (Wrd38.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd38.Lng))))
    goto label_77;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_76;

DEFLABEL (label_75)
  (Wrd13.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_63;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_63)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_65;
  (Wrd15.Obj) = (current_block [OBJECT_1_7]);
  goto label_64;

DEFLABEL (label_65)
  (Wrd15.Obj) = (current_block [OBJECT_1_6]);

DEFLABEL (label_64)
DEFLABEL (label_74)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_73;

DEFLABEL (label_72)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_32]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_33]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_32);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;

DEFLABEL (label_70)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_45]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_46]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_45);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_69;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd8.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_68)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_67;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_66)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_51]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_48);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_52]));

DEFLABEL (label_67)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_50]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_49]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_45)
  (Wrd8.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_44]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_11]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_31]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_44);
  goto label_70;

DEFLABEL (label_73)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_28]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_1_8]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_31]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_28);
  goto label_72;

DEFLABEL (label_76)
  Rsp = (& (Rsp [2]));
  goto label_72;

DEFLABEL (label_77)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_30]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_44)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  goto label_76;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_29);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  goto label_72;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_1_19);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_9]);
  (Rsp [2]) = (Wrd9.Obj);
  goto lambda_12;

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_1_17);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_12;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define LABEL_2_9 9
#define LABEL_2_10 11
#define LABEL_2_11 13
#define LABEL_2_12 15
#define LABEL_2_13 17
#define LABEL_2_14 19
#define LABEL_2_15 21
#define LABEL_2_16 23
#define LABEL_2_18 25
#define LABEL_2_19 27
#define LABEL_2_20 29
#define LABEL_2_23 31
#define LABEL_2_24 33
#define LABEL_2_25 35
#define LABEL_2_26 37
#define LABEL_2_21 39
#define LABEL_2_29 41
#define LABEL_2_31 43
#define LABEL_2_33 45
#define LABEL_2_39 47
#define LABEL_2_40 49
#define LABEL_2_41 51
#define LABEL_2_42 53
#define LABEL_2_43 55
#define LABEL_2_35 57
#define TAG_2_36 27
#define LABEL_2_45 59
#define LABEL_2_37 61
#define LABEL_2_32 63
#define LABEL_2_49 65
#define LABEL_2_50 67
#define LABEL_2_44 69
#define LABEL_2_51 71
#define LABEL_2_55 73
#define LABEL_2_53 75
#define ENVIRONMENT_LABEL_2_3 127
#define DEBUGGING_LABEL_2_2 126
#define OBJECT_2_16 125
#define OBJECT_2_15 124
#define OBJECT_2_14 123
#define OBJECT_2_13 122
#define OBJECT_2_12 121
#define OBJECT_2_11 120
#define OBJECT_2_10 119
#define OBJECT_2_9 118
#define OBJECT_2_8 117
#define OBJECT_2_7 116
#define OBJECT_2_6 115
#define OBJECT_2_5 114
#define OBJECT_2_4 113
#define OBJECT_2_3 112
#define OBJECT_2_2 111
#define OBJECT_2_1 110
#define OBJECT_2_0 109
#define EXECUTE_CACHE_2_56 77
#define EXECUTE_CACHE_2_54 79
#define EXECUTE_CACHE_2_52 81
#define EXECUTE_CACHE_2_48 83
#define EXECUTE_CACHE_2_47 85
#define EXECUTE_CACHE_2_46 87
#define EXECUTE_CACHE_2_38 89
#define EXECUTE_CACHE_2_34 91
#define EXECUTE_CACHE_2_30 93
#define EXECUTE_CACHE_2_28 95
#define EXECUTE_CACHE_2_27 97
#define EXECUTE_CACHE_2_22 99
#define EXECUTE_CACHE_2_17 101
#define EXECUTE_CACHE_2_8 103
#define EXECUTE_CACHE_2_6 105
#define FREE_REFERENCE_2_0 108
#define FREE_REFERENCES_LABEL_2_0 76
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd54;
  machine_word Wrd73;
  machine_word Wrd94;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd69;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd11;
  machine_word Wrd57;
  machine_word Wrd50;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd42;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd22;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd20;
  machine_word Wrd55;
  machine_word Wrd16;
  machine_word Wrd56;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_2_4);
      goto parse_options_47;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_11;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_3;

    case 11:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_2_19);
      goto continuation_1;

    case 13:
      current_block = (Rpc - LABEL_2_20);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_2_23);
      goto continuation_18;

    case 15:
      current_block = (Rpc - LABEL_2_24);
      goto continuation_19;

    case 16:
      current_block = (Rpc - LABEL_2_25);
      goto continuation_20;

    case 17:
      current_block = (Rpc - LABEL_2_26);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_2_21);
      goto continuation_13;

    case 19:
      current_block = (Rpc - LABEL_2_29);
      goto label_49;

    case 20:
      current_block = (Rpc - LABEL_2_31);
      goto do_loop_30;

    case 21:
      current_block = (Rpc - LABEL_2_33);
      goto label_50;

    case 22:
      current_block = (Rpc - LABEL_2_39);
      goto continuation_35;

    case 23:
      current_block = (Rpc - LABEL_2_40);
      goto continuation_36;

    case 24:
      current_block = (Rpc - LABEL_2_41);
      goto continuation_37;

    case 25:
      current_block = (Rpc - LABEL_2_42);
      goto continuation_38;

    case 26:
      current_block = (Rpc - LABEL_2_43);
      goto continuation_39;

    case 27:
      current_block = (Rpc - LABEL_2_35);
      goto lambda_57;

    case 28:
      current_block = (Rpc - LABEL_2_45);
      goto label_51;

    case 29:
      current_block = (Rpc - LABEL_2_37);
      goto continuation_43;

    case 30:
      current_block = (Rpc - LABEL_2_32);
      goto continuation_26;

    case 31:
      current_block = (Rpc - LABEL_2_49);
      goto label_52;

    case 32:
      current_block = (Rpc - LABEL_2_50);
      goto label_53;

    case 33:
      current_block = (Rpc - LABEL_2_44);
      goto continuation_34;

    case 34:
      current_block = (Rpc - LABEL_2_51);
      goto continuation_33;

    case 35:
      current_block = (Rpc - LABEL_2_55);
      goto continuation_41;

    case 36:
      current_block = (Rpc - LABEL_2_53);
      goto continuation_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_options_55)
DEFLABEL (parse_options_47)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_2_20);
  (Rsp [11]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_22]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_2_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [12]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_71;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_30]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_2_26);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_70)
  (Wrd13.Obj) = (Rsp [8]);
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_59;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_58;

DEFLABEL (label_59)
  (Wrd56.Obj) = (current_block [OBJECT_2_13]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_58)
DEFLABEL (label_69)
  (Wrd16.Obj) = (Rsp [0]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_61;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_60;

DEFLABEL (label_61)
  (Wrd55.Obj) = (Rsp [11]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_60)
DEFLABEL (label_68)
  (Wrd20.Obj) = (Rsp [9]);
  if (! ((Wrd20.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_67;
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [14]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_2_23);

DEFLABEL (label_67)
  (Wrd22.Obj) = (Rsp [0]);
  if (! ((Wrd22.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_66;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_2_24);

DEFLABEL (label_66)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_64;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd37.Lng) = ((Wrd39.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd37.Lng)))
    goto label_64;
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));

DEFLABEL (label_63)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_62)
  (Wrd40.Obj) = (Rsp [16]);
  (* (--Rsp)) = (Wrd40.Obj);
  goto do_loop_30;

DEFLABEL (label_64)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_29]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_49)
  (Wrd30.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_65)
  (Wrd42.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd42.Obj);
  goto label_62;

DEFLABEL (label_71)
  (Wrd12.Obj) = (current_block [OBJECT_2_12]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_70;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_2_25);
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (do_loop_56)
DEFLABEL (do_loop_30)
  INTERRUPT_CHECK (26, LABEL_2_31);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_73;
  (Wrd7.Obj) = (current_block [OBJECT_2_13]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_72;

DEFLABEL (label_73)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_72)
DEFLABEL (label_81)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_74;
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 16));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_35])));
  Rhp += 13;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd37 = Wrd12;
  (Wrd38.Obj) = (Rsp [16]);
  ((Wrd37.pObj) [2]) = (Wrd38.Obj);
  (Wrd36.Obj) = (Rsp [15]);
  ((Wrd37.pObj) [3]) = (Wrd36.Obj);
  (Wrd34.Obj) = (Rsp [12]);
  ((Wrd37.pObj) [4]) = (Wrd34.Obj);
  (Wrd32.Obj) = (Rsp [9]);
  ((Wrd37.pObj) [5]) = (Wrd32.Obj);
  (Wrd30.Obj) = (Rsp [8]);
  ((Wrd37.pObj) [6]) = (Wrd30.Obj);
  (Wrd28.Obj) = (Rsp [7]);
  ((Wrd37.pObj) [7]) = (Wrd28.Obj);
  (Wrd26.Obj) = (Rsp [6]);
  ((Wrd37.pObj) [8]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  ((Wrd37.pObj) [9]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  ((Wrd37.pObj) [10]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  ((Wrd37.pObj) [11]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  ((Wrd37.pObj) [12]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  ((Wrd37.pObj) [13]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  ((Wrd37.pObj) [14]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_37]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd43.Obj) = (Rsp [14]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [14]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_38]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_2_37);
  (Rsp [16]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [16]) = (Wrd6.Obj);
  Rsp = (& (Rsp [15]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_74)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_32]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd52.Obj) = (Rsp [3]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_80;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_79)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_34]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_2_32);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_78;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_77)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_76;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Lng) = ((Wrd23.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd21.Lng)))
    goto label_76;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));

DEFLABEL (label_75)
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_30;

DEFLABEL (label_76)
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_50]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_53)
  (Wrd18.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_49]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_16]), 1);

DEFLABEL (label_52)
  (Wrd5.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_33]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_14]), 1);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (lambda_57)
  CLOSURE_HEADER (LABEL_2_35);

DEFLABEL (lambda_42)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [14]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_83;
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_82;

DEFLABEL (label_83)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_82)
DEFLABEL (label_101)
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [14]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_43]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd12.pObj) [5]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_100;
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_30]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_2_43);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_99)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_42]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [5]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [6]);
  if ((Wrd31.Obj) == ((SCHEME_OBJECT) 0))
    goto label_98;
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_30]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_2_42);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_97)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_41]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [6]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [7]);
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_95;
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_30]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_2_41);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_94)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_40]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [7]);
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [8]);
  if ((Wrd62.Obj) == ((SCHEME_OBJECT) 0))
    goto label_92;
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_30]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_2_40);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_91)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_39]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd79.Obj) = (Rsp [8]);
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [9]);
  if ((Wrd81.Obj) == ((SCHEME_OBJECT) 0))
    goto label_90;
  (* (--Rsp)) = (Wrd81.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_30]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_2_39);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_89)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_44]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = (Rsp [9]);
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [10]);
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd95.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd98.Obj) = ((Wrd95.pObj) [0]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if ((Wrd99.uLng) == 50)
    goto label_88;
  Wrd94 = Wrd98;

DEFLABEL (label_87)
  (* (--Rsp)) = (Wrd94.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_46]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_2_44);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [10]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [10]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [11]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_52]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_2_51);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [11]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [12]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_86;
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_30]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_2_53);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [11]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [13]);
  (Rsp [13]) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [14]) = (Wrd11.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_55]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd6.pObj) [4]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_85;
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_30]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_2_55);
  (Wrd25.Obj) = Rvl;

DEFLABEL (label_84)
  (Rsp [12]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_56]));

DEFLABEL (label_85)
  (Wrd25.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_84;

DEFLABEL (label_86)
  (Wrd17.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_54]));

DEFLABEL (label_88)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_45])), (Wrd95.pObj));

DEFLABEL (label_51)
  (Wrd94.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_89;

DEFLABEL (label_92)
  (Wrd69.Obj) = ((Wrd61.pObj) [14]);
  if ((Wrd69.Obj) == ((SCHEME_OBJECT) 0))
    goto label_93;
  (Wrd73.Obj) = ((Wrd61.pObj) [2]);
  (* (--Rsp)) = (Wrd73.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_47]));

DEFLABEL (label_93)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_91;

DEFLABEL (label_95)
  (Wrd50.Obj) = ((Wrd42.pObj) [5]);
  if ((Wrd50.Obj) == ((SCHEME_OBJECT) 0))
    goto label_96;
  (Wrd54.Obj) = ((Wrd42.pObj) [2]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_48]));

DEFLABEL (label_96)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_94;

DEFLABEL (label_98)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_97;

DEFLABEL (label_100)
  (Wrd25.Obj) = (current_block [OBJECT_2_15]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd25.Obj);
  goto label_99;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define LABEL_3_8 7
#define ENVIRONMENT_LABEL_3_3 15
#define DEBUGGING_LABEL_3_2 14
#define OBJECT_3_0 13
#define EXECUTE_CACHE_3_9 9
#define EXECUTE_CACHE_3_7 11
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_3_4);
      goto find_option_2;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_option_5)
DEFLABEL (find_option_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  if (Rvl == (Wrd9.Obj))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_3_0]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define TAG_4_6 1
#define LABEL_4_8 7
#define ENVIRONMENT_LABEL_4_3 15
#define DEBUGGING_LABEL_4_2 14
#define OBJECT_4_0 13
#define EXECUTE_CACHE_4_9 9
#define EXECUTE_CACHE_4_7 11
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_4_4);
      goto find_options_2;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_options_5)
DEFLABEL (find_options_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_8);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  if (Rvl == (Wrd9.Obj))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_4_0]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_8 9
#define LABEL_5_9 11
#define LABEL_5_12 13
#define LABEL_5_11 15
#define LABEL_5_10 17
#define LABEL_5_17 19
#define LABEL_5_14 21
#define TAG_5_15 9
#define LABEL_5_19 23
#define LABEL_5_20 25
#define ENVIRONMENT_LABEL_5_3 43
#define DEBUGGING_LABEL_5_2 42
#define OBJECT_5_4 41
#define OBJECT_5_3 40
#define OBJECT_5_2 39
#define OBJECT_5_1 38
#define OBJECT_5_0 37
#define EXECUTE_CACHE_5_21 27
#define EXECUTE_CACHE_5_18 29
#define EXECUTE_CACHE_5_16 31
#define EXECUTE_CACHE_5_13 33
#define EXECUTE_CACHE_5_6 35
#define FREE_REFERENCES_LABEL_5_0 26
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_5_4);
      goto check_for_duplicate_constructors_17;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto loop_15;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_5_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_5_17);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_5_14);
      goto lambda_24;

    case 10:
      current_block = (Rpc - LABEL_5_19);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_5_20);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (check_for_duplicate_constructors_22)
DEFLABEL (check_for_duplicate_constructors_17)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto loop_15;

DEFLABEL (loop_23)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_5_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_25;
  Rvl = (current_block [OBJECT_5_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  if (! ((Wrd6.uLng) == 1))
    goto label_33;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_32)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_31;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_30)
  (Rsp [1]) = (Wrd18.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_12);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_14])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  ((Wrd18.pObj) [2]) = Rvl;
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (label_26)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_29)
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_5_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_5_19);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_21]));

DEFLABEL (label_27)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_28)
  Rsp = (& (Rsp [1]));
  goto loop_15;

DEFLABEL (label_31)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_20)
  (Wrd18.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_11);
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_10);
  goto label_28;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_5_14);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_20);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  if (Rvl == (Wrd9.Obj))
    goto label_35;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_34;

DEFLABEL (label_35)
  Rvl = (current_block [OBJECT_5_4]);

DEFLABEL (label_34)
DEFLABEL (label_36)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_5 3
#define LABEL_6_6 5
#define LABEL_6_7 7
#define LABEL_6_4 9
#define LABEL_6_10 11
#define LABEL_6_11 13
#define ENVIRONMENT_LABEL_6_3 26
#define DEBUGGING_LABEL_6_2 25
#define OBJECT_6_1 24
#define OBJECT_6_0 23
#define EXECUTE_CACHE_6_13 15
#define EXECUTE_CACHE_6_12 17
#define EXECUTE_CACHE_6_9 19
#define EXECUTE_CACHE_6_8 21
#define FREE_REFERENCES_LABEL_6_0 14
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd27;
  machine_word Wrd26;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_5;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_6_4);
      goto check_for_illegal_untyped_7;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto lambda_1;

    case 5:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (check_for_illegal_untyped_10)
DEFLABEL (check_for_illegal_untyped_7)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 1))
    goto label_13;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto lambda_1;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_5);

DEFLABEL (label_13)
  (Wrd11.Obj) = (Rsp [1]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rsp = (& (Rsp [1]));
  goto lambda_1;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_6_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_11)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_6_10);
  (Wrd5.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_11);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_8 9
#define LABEL_7_11 11
#define LABEL_7_6 13
#define LABEL_7_9 15
#define ENVIRONMENT_LABEL_7_3 27
#define DEBUGGING_LABEL_7_2 26
#define OBJECT_7_2 25
#define OBJECT_7_1 24
#define OBJECT_7_0 23
#define EXECUTE_CACHE_7_13 17
#define EXECUTE_CACHE_7_12 19
#define EXECUTE_CACHE_7_10 21
#define FREE_REFERENCES_LABEL_7_0 16
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_7_4);
      goto check_for_illegal_untagged_9;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto lambda_5;

    case 5:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (check_for_illegal_untagged_12)
DEFLABEL (check_for_illegal_untagged_9)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_5;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_5;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7_6);
  Rsp = (& (Rsp [2]));
  goto lambda_5;

DEFLABEL (lambda_13)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_7_11);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_15;

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_7_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  (Wrd24.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd24.uLng) == 1)
    goto label_16;
  Rsp = (& (Rsp [2]));
  goto label_14;

DEFLABEL (label_16)
  if ((Wrd24.uLng) == 1)
    goto label_17;
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_17)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  Rsp = (& (Rsp [2]));
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;

DEFLABEL (label_18)
  (Wrd18.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_6 5
#define LABEL_8_5 7
#define LABEL_8_8 9
#define LABEL_8_10 11
#define LABEL_8_12 13
#define ENVIRONMENT_LABEL_8_3 28
#define DEBUGGING_LABEL_8_2 27
#define OBJECT_8_1 26
#define OBJECT_8_0 25
#define EXECUTE_CACHE_8_13 15
#define EXECUTE_CACHE_8_11 17
#define EXECUTE_CACHE_8_9 19
#define EXECUTE_CACHE_8_7 21
#define FREE_REFERENCE_8_0 24
#define FREE_REFERENCES_LABEL_8_0 14
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_8_4);
      goto compute_constructors_9;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_8_12);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_constructors_13)
DEFLABEL (compute_constructors_9)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_18;
  Wrd9 = Wrd13;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 1))
    goto label_15;

DEFLABEL (label_14)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.uLng) == 1)
    goto label_14;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rvl = (current_block [OBJECT_8_1]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_12);
  (Wrd9.Obj) = (current_block [OBJECT_8_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_6])), (Wrd10.pObj));

DEFLABEL (label_11)
  (Wrd9.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_8 5
#define LABEL_9_9 7
#define LABEL_9_5 9
#define LABEL_9_10 11
#define TAG_9_11 4
#define ENVIRONMENT_LABEL_9_3 20
#define DEBUGGING_LABEL_9_2 19
#define EXECUTE_CACHE_9_12 13
#define EXECUTE_CACHE_9_7 15
#define EXECUTE_CACHE_9_6 17
#define FREE_REFERENCES_LABEL_9_0 12
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd34;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_9_4);
      goto compute_tagging_info_9;

    case 1:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_9_10);
      goto lambda_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_tagging_info_12)
DEFLABEL (compute_tagging_info_9)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_19;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (Wrd31.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd31.uLng) == 1))
    goto label_18;
  (Wrd34.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_17)
  (Wrd16.Obj) = (Rsp [0]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  Wrd19 = Wrd16;
  goto label_14;

DEFLABEL (label_15)
  (Wrd19.Obj) = (Rsp [1]);

DEFLABEL (label_14)
DEFLABEL (label_16)
  Rsp = (& (Rsp [1]));
  (Rsp [3]) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd20.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_10])));
  Rhp += 2;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd26 = Wrd23;
  (Wrd27.Obj) = (Rsp [1]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  ((Wrd26.pObj) [3]) = (Wrd25.Obj);
  Rvl = (Wrd22.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_17;

DEFLABEL (label_19)
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_9_10);

DEFLABEL (lambda_6)
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

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_8 7
#define LABEL_10_10 9
#define LABEL_10_14 11
#define LABEL_10_12 13
#define TAG_10_13 5
#define LABEL_10_6 15
#define LABEL_10_16 17
#define LABEL_10_18 19
#define ENVIRONMENT_LABEL_10_3 39
#define DEBUGGING_LABEL_10_2 38
#define OBJECT_10_0 37
#define EXECUTE_CACHE_10_20 21
#define EXECUTE_CACHE_10_19 23
#define EXECUTE_CACHE_10_17 25
#define EXECUTE_CACHE_10_15 27
#define EXECUTE_CACHE_10_11 29
#define EXECUTE_CACHE_10_9 31
#define EXECUTE_CACHE_10_7 33
#define FREE_REFERENCE_10_0 36
#define FREE_REFERENCES_LABEL_10_0 20
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd24;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_10_4);
      goto false_expressionP_13;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_10_8);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_10_14);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_10_12);
      goto lambda_19;

    case 6:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_10_16);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_10_18);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (false_expressionP_17)
DEFLABEL (false_expressionP_13)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_6;

DEFLABEL (loop_18)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_10_8);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_20;

DEFLABEL (label_21)
  (Wrd24.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_20)
DEFLABEL (label_29)
  (Wrd8.Obj) = (Rsp [0]);
  if (! ((Wrd8.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_28;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto loop_6;

DEFLABEL (label_22)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_27)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_10_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_24;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_24)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_12])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_26;
  Wrd15 = Wrd19;

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_15]));

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_14])), (Wrd16.pObj));

DEFLABEL (label_15)
  (Wrd15.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_27;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_10_12);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_17]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_10_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_10_18);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_20]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 13
#define DEBUGGING_LABEL_11_2 12
#define OBJECT_11_0 11
#define EXECUTE_CACHE_11_6 7
#define FREE_REFERENCE_11_0 10
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_11_4);
      goto false_markerP_2;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (false_markerP_6)
DEFLABEL (false_markerP_2)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  (Wrd20.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_7)
DEFLABEL (label_12)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd12.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_11;
  Wrd14 = Wrd18;

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_5])), (Wrd15.pObj));

DEFLABEL (label_4)
  (Wrd14.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 13
#define DEBUGGING_LABEL_12_2 12
#define OBJECT_12_0 11
#define EXECUTE_CACHE_12_6 7
#define FREE_REFERENCE_12_0 10
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_12_4);
      goto true_markerP_1;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (true_markerP_5)
DEFLABEL (true_markerP_1)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (current_block [OBJECT_12_0]);
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_6;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_8;
  Wrd9 = Wrd13;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_5])), (Wrd10.pObj));

DEFLABEL (label_3)
  (Wrd9.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
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
defstr_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_13_4);
      goto option_argument_1;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (option_argument_4)
DEFLABEL (option_argument_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Rsp [0]) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_5;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  Rvl = ((Wrd8.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 13
#define DEBUGGING_LABEL_14_2 12
#define OBJECT_14_0 11
#define EXECUTE_CACHE_14_7 7
#define EXECUTE_CACHE_14_6 9
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_14_4);
      goto default_conc_name_1;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_conc_name_4)
DEFLABEL (default_conc_name_1)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

INVOKE_INTERFACE_TARGET_1
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
defstr_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_15_4);
      goto default_constructor_name_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_constructor_name_4)
DEFLABEL (default_constructor_name_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 13
#define DEBUGGING_LABEL_16_2 12
#define OBJECT_16_0 11
#define EXECUTE_CACHE_16_7 7
#define EXECUTE_CACHE_16_6 9
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_16_4);
      goto default_copier_name_1;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_copier_name_4)
DEFLABEL (default_copier_name_1)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 13
#define DEBUGGING_LABEL_17_2 12
#define OBJECT_17_0 11
#define EXECUTE_CACHE_17_7 7
#define EXECUTE_CACHE_17_6 9
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_17_4);
      goto default_predicate_name_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_predicate_name_4)
DEFLABEL (default_predicate_name_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define ENVIRONMENT_LABEL_18_3 17
#define DEBUGGING_LABEL_18_2 16
#define OBJECT_18_2 15
#define OBJECT_18_1 14
#define OBJECT_18_0 13
#define EXECUTE_CACHE_18_8 9
#define EXECUTE_CACHE_18_6 11
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_18_4);
      goto default_unparser_text_6;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_unparser_text_9)
DEFLABEL (default_unparser_text_6)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Wrd9.Obj) = (current_block [OBJECT_18_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_18_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_18_2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_7);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 13
#define DEBUGGING_LABEL_19_2 12
#define OBJECT_19_0 11
#define EXECUTE_CACHE_19_7 7
#define EXECUTE_CACHE_19_6 9
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_19_4);
      goto default_type_name_1;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_type_name_4)
DEFLABEL (default_type_name_1)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define LABEL_20_7 9
#define LABEL_20_8 11
#define LABEL_20_9 13
#define LABEL_20_10 15
#define LABEL_20_11 17
#define LABEL_20_12 19
#define LABEL_20_14 21
#define LABEL_20_15 23
#define LABEL_20_16 25
#define LABEL_20_17 27
#define LABEL_20_19 29
#define LABEL_20_21 31
#define LABEL_20_22 33
#define LABEL_20_23 35
#define LABEL_20_13 37
#define LABEL_20_24 39
#define LABEL_20_25 41
#define LABEL_20_26 43
#define LABEL_20_27 45
#define LABEL_20_28 47
#define LABEL_20_34 49
#define LABEL_20_32 51
#define LABEL_20_38 53
#define LABEL_20_29 55
#define TAG_20_30 26
#define LABEL_20_39 57
#define LABEL_20_36 59
#define LABEL_20_40 61
#define LABEL_20_37 63
#define LABEL_20_41 65
#define LABEL_20_42 67
#define ENVIRONMENT_LABEL_20_3 94
#define DEBUGGING_LABEL_20_2 93
#define OBJECT_20_9 92
#define OBJECT_20_8 91
#define OBJECT_20_7 90
#define OBJECT_20_6 89
#define OBJECT_20_5 88
#define OBJECT_20_4 87
#define OBJECT_20_3 86
#define OBJECT_20_2 85
#define OBJECT_20_1 84
#define OBJECT_20_0 83
#define EXECUTE_CACHE_20_43 69
#define EXECUTE_CACHE_20_35 71
#define EXECUTE_CACHE_20_33 73
#define EXECUTE_CACHE_20_31 75
#define EXECUTE_CACHE_20_20 77
#define EXECUTE_CACHE_20_18 79
#define FREE_REFERENCE_20_0 82
#define FREE_REFERENCES_LABEL_20_0 68
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd88;
  machine_word Wrd84;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd109;
  machine_word Wrd116;
  machine_word Wrd105;
  machine_word Wrd108;
  machine_word Wrd77;
  machine_word Wrd69;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd49;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd43;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd136;
  machine_word Wrd133;
  machine_word Wrd139;
  machine_word Wrd141;
  machine_word Wrd83;
  machine_word Wrd86;
  machine_word Wrd87;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd67;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd78;
  machine_word Wrd66;
  machine_word Wrd98;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd146;
  machine_word Wrd153;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd154;
  machine_word Wrd123;
  machine_word Wrd126;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd134;
  machine_word Wrd122;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd160;
  machine_word Wrd157;
  machine_word Wrd110;
  machine_word Wrd117;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd104;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd167;
  machine_word Wrd169;
  machine_word Wrd173;
  machine_word Wrd181;
  machine_word Wrd189;
  machine_word Wrd196;
  machine_word Wrd192;
  machine_word Wrd184;
  machine_word Wrd186;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd177;
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
      current_block = (Rpc - LABEL_20_4);
      goto apply_option_transformers_46;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_11;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto label_60;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_20_8);
      goto continuation_13;

    case 5:
      current_block = (Rpc - LABEL_20_9);
      goto continuation_12;

    case 6:
      current_block = (Rpc - LABEL_20_10);
      goto loop_44;

    case 7:
      current_block = (Rpc - LABEL_20_11);
      goto label_48;

    case 8:
      current_block = (Rpc - LABEL_20_12);
      goto label_49;

    case 9:
      current_block = (Rpc - LABEL_20_14);
      goto label_50;

    case 10:
      current_block = (Rpc - LABEL_20_15);
      goto label_52;

    case 11:
      current_block = (Rpc - LABEL_20_16);
      goto label_54;

    case 12:
      current_block = (Rpc - LABEL_20_17);
      goto label_53;

    case 13:
      current_block = (Rpc - LABEL_20_19);
      goto label_51;

    case 14:
      current_block = (Rpc - LABEL_20_21);
      goto continuation_17;

    case 15:
      current_block = (Rpc - LABEL_20_22);
      goto continuation_24;

    case 16:
      current_block = (Rpc - LABEL_20_23);
      goto continuation_31;

    case 17:
      current_block = (Rpc - LABEL_20_13);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_20_24);
      goto label_55;

    case 19:
      current_block = (Rpc - LABEL_20_25);
      goto label_56;

    case 20:
      current_block = (Rpc - LABEL_20_26);
      goto label_57;

    case 21:
      current_block = (Rpc - LABEL_20_27);
      goto label_58;

    case 22:
      current_block = (Rpc - LABEL_20_28);
      goto label_59;

    case 23:
      current_block = (Rpc - LABEL_20_34);
      goto lambda_4;

    case 24:
      current_block = (Rpc - LABEL_20_32);
      goto continuation_39;

    case 25:
      current_block = (Rpc - LABEL_20_38);
      goto continuation_28;

    case 26:
      current_block = (Rpc - LABEL_20_29);
      goto lambda_67;

    case 27:
      current_block = (Rpc - LABEL_20_39);
      goto label_61;

    case 28:
      current_block = (Rpc - LABEL_20_36);
      goto continuation_34;

    case 29:
      current_block = (Rpc - LABEL_20_40);
      goto continuation_35;

    case 30:
      current_block = (Rpc - LABEL_20_37);
      goto continuation_33;

    case 31:
      current_block = (Rpc - LABEL_20_41);
      goto label_62;

    case 32:
      current_block = (Rpc - LABEL_20_42);
      goto label_63;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_option_transformers_65)
DEFLABEL (apply_option_transformers_46)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_44;

DEFLABEL (loop_66)
DEFLABEL (loop_44)
  DLINK_INTERRUPT_CHECK (25, LABEL_20_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_69;
  Rvl = (current_block [OBJECT_20_7]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_69)
  if (! ((Wrd6.uLng) == 1))
    goto label_124;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_123)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_122;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_121)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd47.Obj) = ((Wrd40.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_120;
  Wrd39 = Wrd47;

DEFLABEL (label_119)
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [5]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 1)
    goto label_105;

DEFLABEL (label_104)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd90.Obj) = (current_block [OBJECT_20_2]);
  (Wrd93.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd93.Lng))))
    goto label_103;
  (Wrd63.uLng) = (OBJECT_DATUM (Wrd90.Obj));
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd63.Obj) == (Wrd65.Obj))
    goto label_102;

DEFLABEL (label_101)
  (Wrd66.Obj) = (current_block [OBJECT_20_4]);
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd78.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd78.Lng)))
    goto label_71;

DEFLABEL (label_70)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_3]), 2);

DEFLABEL (label_71)
  (Wrd72.uLng) = (OBJECT_DATUM (Wrd66.Obj));
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd72.Obj) == (Wrd74.Obj))
    goto label_73;
  (Wrd70.Obj) = (current_block [OBJECT_20_6]);
  goto label_72;

DEFLABEL (label_73)
  (Wrd70.Obj) = (current_block [OBJECT_20_5]);

DEFLABEL (label_72)
DEFLABEL (label_100)
  Rsp = (& (Rsp [3]));
  (Wrd67.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd67.Obj));
  if (! ((Wrd70.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_99;

DEFLABEL (label_98)
  (Wrd80.pObj) = (& (Rsp [5]));
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd80.pObj)));
  (* (--Rsp)) = (Wrd82.Obj);
  goto lambda_4;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_20_9);
  (Wrd167.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd167.Obj));
  (* (--Rsp)) = Rvl;

DEFLABEL (label_97)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_20]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_20_13);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_96;
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd130.Obj);
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_21]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (Wrd134.pObj) = (& (Rsp [3]));
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd134.pObj)));
  (* (--Rsp)) = (Wrd136.Obj);
  goto lambda_4;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_20_21);
  (Wrd141.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd141.Obj));

DEFLABEL (label_96)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_95;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_94)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_93;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_92)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 1)
    goto label_75;
  (Wrd43.Obj) = (current_block [OBJECT_20_7]);
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd37.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd37.Obj));
  (* (--Rsp)) = (Wrd39.Obj);
  goto label_74;

DEFLABEL (label_75)
  (Wrd126.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd126.Obj));
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_74)
DEFLABEL (label_91)
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_90;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [1]);

DEFLABEL (label_89)
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_88;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd57.Obj) = ((Wrd58.pObj) [1]);

DEFLABEL (label_87)
  (Rsp [2]) = (Wrd57.Obj);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_23]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_22]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd78.Obj) = (Rsp [5]);
  if ((Wrd78.Obj) == ((SCHEME_OBJECT) 0))
    goto label_84;
  Rsp = (& (Rsp [1]));
  (Wrd80.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd80.Obj));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_83)
  (Wrd84.Obj) = (Rsp [0]);
  if ((Wrd84.Obj) == ((SCHEME_OBJECT) 0))
    goto label_76;
  (Wrd86.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = (current_block [OBJECT_20_8]);
  (* (--Rsp)) = (Wrd87.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_33]));

DEFLABEL (label_76)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_82)
  (Wrd88.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd92.Obj);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_32]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd96.Obj) = (Rsp [7]);
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd97.pObj)));
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd100.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd100.Obj);
  Rdl = (& (Rsp [2]));
  goto loop_44;

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_20_32);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_36]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_37]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [10]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_20_37);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_81;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_40]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.pObj) = (& (Rsp [8]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  goto lambda_4;

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_20_40);

DEFLABEL (label_81)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_80;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_79)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_78;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_77)
  (Wrd27.Obj) = (Rsp [9]);
  (Rsp [2]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_43]));

DEFLABEL (label_78)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_42]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_41]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_84)
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd107.Obj) = (Rsp [5]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if (! ((Wrd108.uLng) == 1))
    goto label_86;
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd107.Obj));
  (Wrd106.Obj) = ((Wrd105.pObj) [0]);
  (* (--Rsp)) = (Wrd106.Obj);

DEFLABEL (label_85)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd122.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_29])));
  Rhp += 1;
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd122.pObj)));
  Wrd123 = Wrd122;
  (Wrd124.Obj) = (Rsp [0]);
  ((Wrd123.pObj) [2]) = (Wrd124.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd117.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd117.Obj));
  (* (--Rsp)) = (Wrd121.Obj);
  (Wrd125.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd125.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_31]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_20_22);
  (Wrd139.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd139.Obj));
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_28]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_59)
  (Wrd109.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd109.Obj));
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_27]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_58)
  (Wrd60.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd57.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_26]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_57)
  (Wrd49.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd44.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_93)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_25]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_56)
  (Wrd25.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd25.Obj));
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_24]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_55)
  (Wrd14.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd9.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_99)
  (Wrd86.Obj) = (Rsp [5]);
  Rsp = (& (Rsp [1]));
  (Wrd83.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd83.Obj));
  (* (--Rsp)) = (Wrd86.Obj);
  goto label_97;

DEFLABEL (label_102)
  Rsp = (& (Rsp [2]));
  (Wrd87.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd87.Obj));
  goto label_99;

DEFLABEL (label_103)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_19]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_3]), 2);

DEFLABEL (label_51)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_101;
  goto label_102;

DEFLABEL (label_105)
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd104.Obj);
  if (! ((Wrd55.uLng) == 1))
    goto label_118;
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd107.Obj) = ((Wrd106.pObj) [0]);
  (* (--Rsp)) = (Wrd107.Obj);

DEFLABEL (label_117)
  (Wrd157.Obj) = (current_block [OBJECT_20_2]);
  (Wrd160.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd160.Lng))))
    goto label_116;
  (Wrd119.uLng) = (OBJECT_DATUM (Wrd157.Obj));
  (Wrd120.Obj) = (Rsp [0]);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if ((Wrd119.Obj) == (Wrd121.Obj))
    goto label_115;

DEFLABEL (label_114)
  (Wrd122.Obj) = (current_block [OBJECT_20_4]);
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd134.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd134.Lng))))
    goto label_70;
  (Wrd128.uLng) = (OBJECT_DATUM (Wrd122.Obj));
  (Wrd129.Obj) = (Rsp [1]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if ((Wrd128.Obj) == (Wrd130.Obj))
    goto label_107;
  (Wrd126.Obj) = (current_block [OBJECT_20_6]);
  goto label_106;

DEFLABEL (label_107)
  (Wrd126.Obj) = (current_block [OBJECT_20_5]);

DEFLABEL (label_106)
DEFLABEL (label_113)
  Rsp = (& (Rsp [3]));
  (Wrd123.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd123.Obj));
  if ((Wrd126.Obj) == ((SCHEME_OBJECT) 0))
    goto label_104;

DEFLABEL (label_112)
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd137.Obj);
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (Wrd144.Obj) = (Rsp [7]);
  (Wrd145.uLng) = (OBJECT_TYPE (Wrd144.Obj));
  if (! ((Wrd145.uLng) == 1))
    goto label_111;
  (Wrd142.pObj) = (OBJECT_ADDRESS (Wrd144.Obj));
  (Wrd143.Obj) = ((Wrd142.pObj) [1]);
  (* (--Rsp)) = (Wrd143.Obj);

DEFLABEL (label_110)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_18]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Wrd177.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd177.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_104;
  (Wrd187.Obj) = (Rsp [5]);
  (Wrd188.uLng) = (OBJECT_TYPE (Wrd187.Obj));
  if (! ((Wrd188.uLng) == 1))
    goto label_109;
  (Wrd186.pObj) = (OBJECT_ADDRESS (Wrd187.Obj));
  (Wrd184.Obj) = ((Wrd186.pObj) [0]);

DEFLABEL (label_108)
  Rsp = (& (Rsp [1]));
  (Wrd181.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd181.Obj));
  (* (--Rsp)) = (Wrd184.Obj);
  goto label_97;

DEFLABEL (label_109)
  (Wrd192.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd192.Obj);
  (Wrd196.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd196.Obj);
  (* (--Rsp)) = (Wrd187.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_60)
  (Wrd189.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd184.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (* (--Rsp)) = (Wrd137.Obj);
  (Wrd153.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd153.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_53)
  (Wrd146.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd146.Obj));
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (label_115)
  Rsp = (& (Rsp [2]));
  (Wrd154.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd154.Obj));
  goto label_112;

DEFLABEL (label_116)
  (Wrd162.Obj) = (Rsp [0]);
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd165.Obj);
  (* (--Rsp)) = (Wrd162.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_3]), 2);

DEFLABEL (label_54)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_114;
  goto label_115;

DEFLABEL (label_118)
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_52)
  (Wrd110.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd110.Obj));
  (* (--Rsp)) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_14])), (Wrd40.pObj));

DEFLABEL (label_50)
  (Wrd41.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_49)
  (Wrd26.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd21.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_48)
  (Wrd13.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd13.Obj));
  (* (--Rsp)) = Rvl;
  goto label_123;

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_20_36);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_20_23);
  goto label_82;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_20_8);
  (Wrd169.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd169.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_98;
  goto label_99;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_20_7);
  (Wrd173.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd173.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_104;
  goto label_112;

DEFLABEL (lambda_68)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_20_34);
  (Wrd5.Obj) = (current_block [OBJECT_20_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_35]));

DEFLABEL (lambda_67)
  CLOSURE_HEADER (LABEL_20_29);

DEFLABEL (lambda_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd9.uLng) == 1)
    goto label_130;
  Wrd11 = Wrd8;

DEFLABEL (label_129)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_128)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  if ((Wrd11.Obj) == (Wrd15.Obj))
    goto label_126;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_125;

DEFLABEL (label_126)
  Rvl = (current_block [OBJECT_20_5]);

DEFLABEL (label_125)
DEFLABEL (label_127)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_130)
  if (! ((Wrd9.uLng) == 1))
    goto label_131;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd11.Obj) = ((Wrd20.pObj) [0]);
  goto label_129;

DEFLABEL (label_131)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_39]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_61)
  (Wrd11.Obj) = Rvl;
  goto label_129;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_20_38);
  (Wrd11.Obj) = Rvl;
  goto label_128;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_6 5
#define LABEL_21_5 7
#define LABEL_21_8 9
#define LABEL_21_9 11
#define ENVIRONMENT_LABEL_21_3 22
#define DEBUGGING_LABEL_21_2 21
#define OBJECT_21_1 20
#define OBJECT_21_0 19
#define EXECUTE_CACHE_21_7 13
#define FREE_REFERENCE_21_0 16
#define FREE_ASSIGNMENT_21_0 18
#define FREE_REFERENCES_LABEL_21_0 12
#define NUMBER_OF_LINKER_SECTIONS_21_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_21_4);
      goto define_option_5;

    case 1:
      current_block = (Rpc - LABEL_21_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_21_9);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_option_11)
DEFLABEL (define_option_5)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_20;
  Wrd13 = Wrd17;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_12;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [1]) = (Wrd12.Obj);
  Rvl = (current_block [OBJECT_21_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_13)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_18;
  Wrd18 = Wrd22;

DEFLABEL (label_17)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_0]));
  (Wrd40.Obj) = ((Wrd32.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_16;

DEFLABEL (label_15)
  ((Wrd32.pObj) [0]) = (Wrd29.Obj);

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_21_0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_16)
  if ((Wrd40.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_15;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_9])), (Wrd32.pObj), (Wrd29.Obj));

DEFLABEL (label_9)
  goto label_14;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_8])), (Wrd19.pObj));

DEFLABEL (label_8)
  (Wrd18.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_6])), (Wrd14.pObj));

DEFLABEL (label_7)
  (Wrd13.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_6 5
#define LABEL_22_5 7
#define LABEL_22_8 9
#define LABEL_22_9 11
#define ENVIRONMENT_LABEL_22_3 19
#define DEBUGGING_LABEL_22_2 18
#define OBJECT_22_2 17
#define OBJECT_22_1 16
#define OBJECT_22_0 15
#define EXECUTE_CACHE_22_7 13
#define FREE_REFERENCES_LABEL_22_0 12
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_22_4);
      goto one_required_argument_6;

    case 1:
      current_block = (Rpc - LABEL_22_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_22_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_22_9);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (one_required_argument_12)
DEFLABEL (one_required_argument_6)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_19;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_18)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_22_1]))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_17;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_16)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_15;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_14)
  (Wrd25.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd25.Obj);
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_15)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 1);

DEFLABEL (label_10)
  (Wrd18.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_6 5
#define LABEL_23_5 7
#define LABEL_23_8 9
#define LABEL_23_9 11
#define ENVIRONMENT_LABEL_23_3 20
#define DEBUGGING_LABEL_23_2 19
#define OBJECT_23_3 18
#define OBJECT_23_2 17
#define OBJECT_23_1 16
#define OBJECT_23_0 15
#define EXECUTE_CACHE_23_7 13
#define FREE_REFERENCES_LABEL_23_0 12
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd29;
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
      current_block = (Rpc - LABEL_23_4);
      goto one_optional_argument_7;

    case 1:
      current_block = (Rpc - LABEL_23_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_23_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_23_9);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (one_optional_argument_13)
DEFLABEL (one_optional_argument_7)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_21;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_20)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_23_1])))
    goto label_14;
  (Wrd29.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd29.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_14)
  if (Rvl == (current_block [OBJECT_23_2]))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd11.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_19;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_18)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_17;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_16)
  (Rsp [3]) = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_17)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 1);

DEFLABEL (label_11)
  (Wrd21.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_10)
  (Wrd12.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_6 5
#define LABEL_24_5 7
#define LABEL_24_8 9
#define LABEL_24_9 11
#define LABEL_24_10 13
#define LABEL_24_11 15
#define LABEL_24_12 17
#define LABEL_24_13 19
#define LABEL_24_14 21
#define ENVIRONMENT_LABEL_24_3 31
#define DEBUGGING_LABEL_24_2 30
#define OBJECT_24_4 29
#define OBJECT_24_3 28
#define OBJECT_24_2 27
#define OBJECT_24_1 26
#define OBJECT_24_0 25
#define EXECUTE_CACHE_24_7 23
#define FREE_REFERENCES_LABEL_24_0 22
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd71;
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
      current_block = (Rpc - LABEL_24_4);
      goto two_optional_arguments_13;

    case 1:
      current_block = (Rpc - LABEL_24_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_24_10);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_24_11);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_24_12);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_24_13);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_24_14);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (two_optional_arguments_24)
DEFLABEL (two_optional_arguments_13)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_43;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_24_1])))
    goto label_25;
  (Wrd71.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd71.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_25)
  if (Rvl == (current_block [OBJECT_24_2]))
    goto label_37;
  if (Rvl == (current_block [OBJECT_24_4]))
    goto label_26;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd13.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_36;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_35)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_34;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_33)
  (Rsp [3]) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_32;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_31)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_30;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_29)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_28;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd46.Obj) = ((Wrd47.pObj) [0]);

DEFLABEL (label_27)
  (Rsp [4]) = (Wrd46.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_28)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_14]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 1);

DEFLABEL (label_20)
  (Wrd46.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_13]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_19)
  (Wrd39.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_18)
  (Wrd30.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 1);

DEFLABEL (label_17)
  (Wrd23.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_16)
  (Wrd14.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_41;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd54.Obj) = ((Wrd56.pObj) [1]);

DEFLABEL (label_40)
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_39;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd63.Obj) = ((Wrd64.pObj) [0]);

DEFLABEL (label_38)
  (Rsp [4]) = (Wrd63.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_39)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 1);

DEFLABEL (label_22)
  (Wrd63.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_21)
  (Wrd54.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_9 7
#define LABEL_25_7 9
#define LABEL_25_10 11
#define ENVIRONMENT_LABEL_25_3 26
#define DEBUGGING_LABEL_25_2 25
#define OBJECT_25_7 24
#define OBJECT_25_6 23
#define OBJECT_25_5 22
#define OBJECT_25_4 21
#define OBJECT_25_3 20
#define OBJECT_25_2 19
#define OBJECT_25_1 18
#define OBJECT_25_0 17
#define EXECUTE_CACHE_25_8 13
#define EXECUTE_CACHE_25_6 15
#define FREE_REFERENCES_LABEL_25_0 12
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd50;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_25_4);
      goto lambda_6;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto lambda_5;

    case 2:
      current_block = (Rpc - LABEL_25_9);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_25_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (lambda_11)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_25_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = (current_block [OBJECT_25_7]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_25_0]);
  (Wrd45.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd45.Lng))))
    goto label_23;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd42.Obj));
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_22;

DEFLABEL (label_21)
  (Wrd17.Obj) = (current_block [OBJECT_25_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd27.Lng)))
    goto label_14;
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_14)
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd21.Obj) == (Wrd23.Obj))
    goto label_16;
  (Wrd19.Obj) = (current_block [OBJECT_25_4]);
  goto label_15;

DEFLABEL (label_16)
  (Wrd19.Obj) = (current_block [OBJECT_25_3]);

DEFLABEL (label_15)
DEFLABEL (label_20)
  Rsp = (& (Rsp [3]));
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;

DEFLABEL (label_19)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (current_block [OBJECT_25_5]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd40.Obj) = (current_block [OBJECT_25_6]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  goto label_17;

DEFLABEL (label_18)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_17)
  goto label_12;

DEFLABEL (label_22)
  Rsp = (& (Rsp [2]));
  goto label_19;

DEFLABEL (label_23)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_22;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define TAG_26_6 1
#define LABEL_26_7 7
#define TAG_26_8 2
#define LABEL_26_9 9
#define LABEL_26_11 11
#define LABEL_26_13 13
#define LABEL_26_18 15
#define LABEL_26_15 17
#define LABEL_26_17 19
#define ENVIRONMENT_LABEL_26_3 35
#define DEBUGGING_LABEL_26_2 34
#define OBJECT_26_2 33
#define OBJECT_26_1 32
#define OBJECT_26_0 31
#define EXECUTE_CACHE_26_19 21
#define EXECUTE_CACHE_26_16 23
#define EXECUTE_CACHE_26_14 25
#define EXECUTE_CACHE_26_12 27
#define EXECUTE_CACHE_26_10 29
#define FREE_REFERENCES_LABEL_26_0 20
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd5;
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
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto lambda_16;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto lambda_17;

    case 3:
      current_block = (Rpc - LABEL_26_9);
      goto lambda_11;

    case 4:
      current_block = (Rpc - LABEL_26_11);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_26_13);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_26_18);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_26_15);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_26_17);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_15)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_7])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  ((Wrd12.pObj) [2]) = (Wrd8.Obj);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (Rsp [3]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_26_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_11);
  (Wrd9.Obj) = (current_block [OBJECT_26_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_26_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_26_7);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = (current_block [OBJECT_26_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_26_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.Obj) = (current_block [OBJECT_26_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_26_1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  goto label_20;

DEFLABEL (label_21)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_20)
DEFLABEL (label_22)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_18)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_26_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_26_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_26_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_26_0]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd23.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_26_1]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  goto label_23;

DEFLABEL (label_24)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_23)
DEFLABEL (label_25)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define TAG_27_6 1
#define LABEL_27_7 7
#define LABEL_27_9 9
#define LABEL_27_11 11
#define ENVIRONMENT_LABEL_27_3 22
#define DEBUGGING_LABEL_27_2 21
#define OBJECT_27_1 20
#define OBJECT_27_0 19
#define EXECUTE_CACHE_27_12 13
#define EXECUTE_CACHE_27_10 15
#define EXECUTE_CACHE_27_8 17
#define FREE_REFERENCES_LABEL_27_0 12
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_27_4);
      goto lambda_6;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto lambda_5;

    case 3:
      current_block = (Rpc - LABEL_27_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_27_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (Rsp [2]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_27_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_9);
  (Wrd9.Obj) = (current_block [OBJECT_27_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_27_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_11)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_27_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_27_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Obj) = (current_block [OBJECT_27_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_27_1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  goto label_12;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define TAG_28_6 1
#define LABEL_28_7 7
#define TAG_28_8 2
#define LABEL_28_10 9
#define LABEL_28_12 11
#define LABEL_28_14 13
#define ENVIRONMENT_LABEL_28_3 27
#define DEBUGGING_LABEL_28_2 26
#define OBJECT_28_2 25
#define OBJECT_28_1 24
#define OBJECT_28_0 23
#define EXECUTE_CACHE_28_15 15
#define EXECUTE_CACHE_28_13 17
#define EXECUTE_CACHE_28_11 19
#define EXECUTE_CACHE_28_9 21
#define FREE_REFERENCES_LABEL_28_0 14
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_28_4);
      goto lambda_7;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto lambda_12;

    case 3:
      current_block = (Rpc - LABEL_28_10);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_28_12);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_28_14);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_7])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  ((Wrd13.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_28_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_10);
  (Wrd9.Obj) = (current_block [OBJECT_28_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_28_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_28_7);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_28_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = (current_block [OBJECT_28_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_28_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.Obj) = (current_block [OBJECT_28_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_28_1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  goto label_14;

DEFLABEL (label_15)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_14)
DEFLABEL (label_16)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define TAG_29_6 1
#define LABEL_29_7 7
#define TAG_29_8 2
#define LABEL_29_10 9
#define LABEL_29_12 11
#define LABEL_29_14 13
#define ENVIRONMENT_LABEL_29_3 27
#define DEBUGGING_LABEL_29_2 26
#define OBJECT_29_2 25
#define OBJECT_29_1 24
#define OBJECT_29_0 23
#define EXECUTE_CACHE_29_15 15
#define EXECUTE_CACHE_29_13 17
#define EXECUTE_CACHE_29_11 19
#define EXECUTE_CACHE_29_9 21
#define FREE_REFERENCES_LABEL_29_0 14
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_29_4);
      goto lambda_7;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto lambda_12;

    case 3:
      current_block = (Rpc - LABEL_29_10);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_29_12);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_29_14);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_7])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  ((Wrd13.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_9]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_29_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_10);
  (Wrd9.Obj) = (current_block [OBJECT_29_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_29_7);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = (current_block [OBJECT_29_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_29_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.Obj) = (current_block [OBJECT_29_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  goto label_14;

DEFLABEL (label_15)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_14)
DEFLABEL (label_16)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define TAG_30_6 1
#define LABEL_30_8 7
#define ENVIRONMENT_LABEL_30_3 16
#define DEBUGGING_LABEL_30_2 15
#define OBJECT_30_1 14
#define OBJECT_30_0 13
#define EXECUTE_CACHE_30_9 9
#define EXECUTE_CACHE_30_7 11
#define FREE_REFERENCES_LABEL_30_0 8
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_30_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_30_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_30_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd7.Obj) = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  (Wrd7.Obj) = (Rsp [1]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  (Wrd11.Obj) = (current_block [OBJECT_30_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_30_1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define TAG_31_6 1
#define LABEL_31_8 7
#define ENVIRONMENT_LABEL_31_3 16
#define DEBUGGING_LABEL_31_2 15
#define OBJECT_31_1 14
#define OBJECT_31_0 13
#define EXECUTE_CACHE_31_9 9
#define EXECUTE_CACHE_31_7 11
#define FREE_REFERENCES_LABEL_31_0 8
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_31_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_31_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_31_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd7.Obj) = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  (Wrd7.Obj) = (Rsp [1]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  (Wrd11.Obj) = (current_block [OBJECT_31_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_31_1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_7 7
#define ENVIRONMENT_LABEL_32_3 17
#define DEBUGGING_LABEL_32_2 16
#define OBJECT_32_2 15
#define OBJECT_32_1 14
#define OBJECT_32_0 13
#define EXECUTE_CACHE_32_8 9
#define EXECUTE_CACHE_32_6 11
#define FREE_REFERENCES_LABEL_32_0 8
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
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
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto lambda_2;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_32_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Obj) = (current_block [OBJECT_32_1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_32_2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  goto label_8;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_7 7
#define ENVIRONMENT_LABEL_33_3 16
#define DEBUGGING_LABEL_33_2 15
#define OBJECT_33_1 14
#define OBJECT_33_0 13
#define EXECUTE_CACHE_33_8 9
#define EXECUTE_CACHE_33_6 11
#define FREE_REFERENCES_LABEL_33_0 8
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_33_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto lambda_2;

    case 2:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_33_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Obj) = (current_block [OBJECT_33_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_33_1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  goto label_8;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_6 7
#define TAG_34_7 2
#define LABEL_34_9 9
#define ENVIRONMENT_LABEL_34_3 19
#define DEBUGGING_LABEL_34_2 18
#define OBJECT_34_2 17
#define OBJECT_34_1 16
#define OBJECT_34_0 15
#define EXECUTE_CACHE_34_10 11
#define EXECUTE_CACHE_34_8 13
#define FREE_REFERENCES_LABEL_34_0 10
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_34_4);
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_34_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (Rsp [1]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_6])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (lambda_10)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_34_5);
  Rvl = (current_block [OBJECT_34_0]);
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_34_6);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd7.Obj) = ((SCHEME_OBJECT) 0);
  goto label_11;

DEFLABEL (label_12)
  (Wrd7.Obj) = (Rsp [1]);

DEFLABEL (label_11)
DEFLABEL (label_13)
  (Wrd11.Obj) = (current_block [OBJECT_34_1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_34_2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_6 7
#define LABEL_35_8 9
#define LABEL_35_10 11
#define ENVIRONMENT_LABEL_35_3 22
#define DEBUGGING_LABEL_35_2 21
#define OBJECT_35_1 20
#define OBJECT_35_0 19
#define EXECUTE_CACHE_35_11 13
#define EXECUTE_CACHE_35_9 15
#define EXECUTE_CACHE_35_7 17
#define FREE_REFERENCES_LABEL_35_0 12
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_35_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto lambda_3;

    case 3:
      current_block = (Rpc - LABEL_35_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_35_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_7]));

DEFLABEL (lambda_8)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_35_5);
  Rvl = (current_block [OBJECT_35_0]);
  goto pop_return;

DEFLABEL (lambda_9)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_35_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = (current_block [OBJECT_35_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_35_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = (current_block [OBJECT_35_1]);
  goto label_11;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_7 7
#define ENVIRONMENT_LABEL_36_3 16
#define DEBUGGING_LABEL_36_2 15
#define OBJECT_36_1 14
#define OBJECT_36_0 13
#define EXECUTE_CACHE_36_8 9
#define EXECUTE_CACHE_36_6 11
#define FREE_REFERENCES_LABEL_36_0 8
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_36_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto lambda_2;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_36_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Obj) = (current_block [OBJECT_36_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_36_1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  goto label_8;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_6 7
#define LABEL_37_10 9
#define LABEL_37_13 11
#define LABEL_37_14 13
#define LABEL_37_16 15
#define LABEL_37_8 17
#define LABEL_37_17 19
#define LABEL_37_18 21
#define LABEL_37_19 23
#define LABEL_37_20 25
#define LABEL_37_11 27
#define LABEL_37_22 29
#define LABEL_37_12 31
#define LABEL_37_25 33
#define LABEL_37_23 35
#define TAG_37_24 16
#define LABEL_37_28 37
#define LABEL_37_27 39
#define ENVIRONMENT_LABEL_37_3 58
#define DEBUGGING_LABEL_37_2 57
#define OBJECT_37_3 56
#define OBJECT_37_2 55
#define OBJECT_37_1 54
#define OBJECT_37_0 53
#define EXECUTE_CACHE_37_26 41
#define EXECUTE_CACHE_37_21 43
#define EXECUTE_CACHE_37_15 45
#define EXECUTE_CACHE_37_9 47
#define EXECUTE_CACHE_37_7 49
#define FREE_REFERENCE_37_0 52
#define FREE_REFERENCES_LABEL_37_0 40
#define NUMBER_OF_LINKER_SECTIONS_37_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_37_4);
      goto parse_slot_descriptions_26;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_37_6);
      goto lambda_1;

    case 3:
      current_block = (Rpc - LABEL_37_10);
      goto do_loop_23;

    case 4:
      current_block = (Rpc - LABEL_37_13);
      goto label_29;

    case 5:
      current_block = (Rpc - LABEL_37_14);
      goto label_30;

    case 6:
      current_block = (Rpc - LABEL_37_16);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_37_8);
      goto continuation_0;

    case 8:
      current_block = (Rpc - LABEL_37_17);
      goto continuation_15;

    case 9:
      current_block = (Rpc - LABEL_37_18);
      goto label_33;

    case 10:
      current_block = (Rpc - LABEL_37_19);
      goto label_34;

    case 11:
      current_block = (Rpc - LABEL_37_20);
      goto label_35;

    case 12:
      current_block = (Rpc - LABEL_37_11);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_37_22);
      goto label_31;

    case 14:
      current_block = (Rpc - LABEL_37_12);
      goto continuation_9;

    case 15:
      current_block = (Rpc - LABEL_37_25);
      goto label_32;

    case 16:
      current_block = (Rpc - LABEL_37_23);
      goto lambda_41;

    case 17:
      current_block = (Rpc - LABEL_37_28);
      goto label_36;

    case 18:
      current_block = (Rpc - LABEL_37_27);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_slot_descriptions_38)
DEFLABEL (parse_slot_descriptions_26)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (Rsp [0]) = Rvl;
  (* (--Rsp)) = Rvl;
  goto do_loop_23;

DEFLABEL (lambda_39)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_37_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_8);
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (do_loop_40)
DEFLABEL (do_loop_23)
  INTERRUPT_CHECK (26, LABEL_37_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_43;
  (Wrd7.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_42;

DEFLABEL (label_43)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_42)
DEFLABEL (label_63)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_46;
  Rsp = (& (Rsp [2]));
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_45;
  Wrd11 = Wrd15;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_7]));

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_16])), (Wrd12.pObj));

DEFLABEL (label_28)
  (Wrd11.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_62;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_61)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_60;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_59)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_37_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_23])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_58;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_57)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_26]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_37_17);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_52;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_51)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_50;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_49)
  (Wrd34.Obj) = (current_block [OBJECT_37_3]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_48;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_47)
  (Rsp [2]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_21]));

DEFLABEL (label_48)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_20]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 1);

DEFLABEL (label_35)
  (Wrd35.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_19]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_18]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (label_33)
  (Wrd18.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_53)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_56)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_55;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_54)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_23;

DEFLABEL (label_55)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 1);

DEFLABEL (label_31)
  (Wrd5.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_58)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_25]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_14]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (label_29)
  (Wrd23.Obj) = Rvl;
  goto label_61;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_37_11);
  goto label_56;

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_37_23);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_68;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_67)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_15]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_37_27);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  if (Rvl == (Wrd9.Obj))
    goto label_65;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_64;

DEFLABEL (label_65)
  Rvl = (current_block [OBJECT_37_0]);

DEFLABEL (label_64)
DEFLABEL (label_66)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_28]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_67;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_6 7
#define LABEL_38_7 9
#define LABEL_38_8 11
#define LABEL_38_9 13
#define LABEL_38_10 15
#define LABEL_38_13 17
#define LABEL_38_16 19
#define TAG_38_17 8
#define LABEL_38_18 21
#define LABEL_38_14 23
#define TAG_38_15 10
#define LABEL_38_11 25
#define TAG_38_12 11
#define LABEL_38_21 27
#define LABEL_38_19 29
#define LABEL_38_23 31
#define LABEL_38_24 33
#define LABEL_38_25 35
#define LABEL_38_27 37
#define LABEL_38_28 39
#define LABEL_38_29 41
#define LABEL_38_33 43
#define LABEL_38_35 45
#define LABEL_38_36 47
#define LABEL_38_37 49
#define LABEL_38_38 51
#define LABEL_38_39 53
#define LABEL_38_40 55
#define LABEL_38_42 57
#define LABEL_38_26 59
#define LABEL_38_43 61
#define LABEL_38_44 63
#define LABEL_38_31 65
#define LABEL_38_30 67
#define ENVIRONMENT_LABEL_38_3 99
#define DEBUGGING_LABEL_38_2 98
#define OBJECT_38_14 97
#define OBJECT_38_13 96
#define OBJECT_38_12 95
#define OBJECT_38_11 94
#define OBJECT_38_10 93
#define OBJECT_38_9 92
#define OBJECT_38_8 91
#define OBJECT_38_7 90
#define OBJECT_38_6 89
#define OBJECT_38_5 88
#define OBJECT_38_4 87
#define OBJECT_38_3 86
#define OBJECT_38_2 85
#define OBJECT_38_1 84
#define OBJECT_38_0 83
#define EXECUTE_CACHE_38_46 69
#define EXECUTE_CACHE_38_41 71
#define EXECUTE_CACHE_38_34 73
#define EXECUTE_CACHE_38_32 75
#define EXECUTE_CACHE_38_45 77
#define EXECUTE_CACHE_38_22 79
#define EXECUTE_CACHE_38_20 81
#define FREE_REFERENCES_LABEL_38_0 68
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd15;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd88;
  machine_word Wrd86;
  machine_word Wrd82;
  machine_word Wrd78;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd81;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd72;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd56;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_38_4);
      goto parse_slot_description_56;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_58;

    case 2:
      current_block = (Rpc - LABEL_38_6);
      goto label_60;

    case 3:
      current_block = (Rpc - LABEL_38_7);
      goto label_61;

    case 4:
      current_block = (Rpc - LABEL_38_8);
      goto label_62;

    case 5:
      current_block = (Rpc - LABEL_38_9);
      goto label_63;

    case 6:
      current_block = (Rpc - LABEL_38_10);
      goto label_64;

    case 7:
      current_block = (Rpc - LABEL_38_13);
      goto label_59;

    case 8:
      current_block = (Rpc - LABEL_38_16);
      goto lambda_77;

    case 9:
      current_block = (Rpc - LABEL_38_18);
      goto lambda_39;

    case 10:
      current_block = (Rpc - LABEL_38_14);
      goto lambda_76;

    case 11:
      current_block = (Rpc - LABEL_38_11);
      goto lambda_75;

    case 12:
      current_block = (Rpc - LABEL_38_21);
      goto continuation_1;

    case 13:
      current_block = (Rpc - LABEL_38_19);
      goto continuation_0;

    case 14:
      current_block = (Rpc - LABEL_38_23);
      goto continuation_9;

    case 15:
      current_block = (Rpc - LABEL_38_24);
      goto do_loop_36;

    case 16:
      current_block = (Rpc - LABEL_38_25);
      goto label_65;

    case 17:
      current_block = (Rpc - LABEL_38_27);
      goto label_67;

    case 18:
      current_block = (Rpc - LABEL_38_28);
      goto label_68;

    case 19:
      current_block = (Rpc - LABEL_38_29);
      goto label_69;

    case 20:
      current_block = (Rpc - LABEL_38_33);
      goto label_66;

    case 21:
      current_block = (Rpc - LABEL_38_35);
      goto continuation_27;

    case 22:
      current_block = (Rpc - LABEL_38_36);
      goto continuation_24;

    case 23:
      current_block = (Rpc - LABEL_38_37);
      goto continuation_25;

    case 24:
      current_block = (Rpc - LABEL_38_38);
      goto label_72;

    case 25:
      current_block = (Rpc - LABEL_38_39);
      goto continuation_26;

    case 26:
      current_block = (Rpc - LABEL_38_40);
      goto continuation_22;

    case 27:
      current_block = (Rpc - LABEL_38_42);
      goto continuation_23;

    case 28:
      current_block = (Rpc - LABEL_38_26);
      goto continuation_13;

    case 29:
      current_block = (Rpc - LABEL_38_43);
      goto label_70;

    case 30:
      current_block = (Rpc - LABEL_38_44);
      goto label_71;

    case 31:
      current_block = (Rpc - LABEL_38_31);
      goto continuation_16;

    case 32:
      current_block = (Rpc - LABEL_38_30);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_slot_description_74)
DEFLABEL (parse_slot_description_56)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_81;
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_16])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  ((Wrd11.pObj) [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_80)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_18]))));
  (Rsp [1]) = (Wrd14.Obj);
  goto pop_return;

DEFLABEL (label_81)
  if (! ((Wrd6.uLng) == 1))
    goto label_96;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_95)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd25.uLng) == 1)
    goto label_84;
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_83;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_82)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd38.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_14])));
  Rhp += 1;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd38.pObj)));
  Wrd39 = Wrd38;
  (Wrd40.Obj) = (Rsp [0]);
  ((Wrd39.pObj) [2]) = (Wrd40.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd37.Obj);
  goto label_80;

DEFLABEL (label_83)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_13]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_84)
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_94;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_93)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_92;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [1]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_91)
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_90;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd57.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_89)
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd68.uLng) == 1))
    goto label_88;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (* (--Rsp)) = (Wrd67.Obj);

DEFLABEL (label_87)
  (Wrd76.Obj) = (Rsp [2]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_86;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (* (--Rsp)) = (Wrd75.Obj);

DEFLABEL (label_85)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd85.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_11])));
  Rhp += 3;
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd85.pObj)));
  Wrd90 = Wrd85;
  (Wrd91.Obj) = (Rsp [2]);
  ((Wrd90.pObj) [2]) = (Wrd91.Obj);
  (Wrd89.Obj) = (Rsp [1]);
  ((Wrd90.pObj) [3]) = (Wrd89.Obj);
  (Wrd87.Obj) = (Rsp [0]);
  ((Wrd90.pObj) [4]) = (Wrd87.Obj);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd84.Obj);
  goto label_80;

DEFLABEL (label_86)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_10]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 1);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_9]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (label_62)
  (Wrd57.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (label_60)
  (Wrd41.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (label_58)
  (Wrd16.Obj) = Rvl;
  goto label_95;

DEFLABEL (lambda_77)
  CLOSURE_HEADER (LABEL_38_16);

DEFLABEL (lambda_42)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_38_2]);
  (Rsp [2]) = (Wrd9.Obj);
  goto lambda_39;

DEFLABEL (lambda_78)
DEFLABEL (lambda_39)
  INTERRUPT_CHECK (26, LABEL_38_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_20]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_98;

DEFLABEL (label_97)
  (Wrd10.Obj) = (current_block [OBJECT_38_2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-1]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_38_4]);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-1]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto do_loop_36;

DEFLABEL (label_98)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_21]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_38_3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_22]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_21);
  goto label_97;

DEFLABEL (lambda_76)
  CLOSURE_HEADER (LABEL_38_14);

DEFLABEL (lambda_47)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_38_2]);
  (Rsp [2]) = (Wrd9.Obj);
  goto lambda_39;

DEFLABEL (lambda_75)
  CLOSURE_HEADER (LABEL_38_11);

DEFLABEL (lambda_54)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd11.Obj);
  goto lambda_39;

DEFLABEL (do_loop_79)
DEFLABEL (do_loop_36)
  INTERRUPT_CHECK (26, LABEL_38_24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_100;
  (Wrd7.Obj) = (current_block [OBJECT_38_4]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_99;

DEFLABEL (label_100)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_99)
DEFLABEL (label_139)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_101;
  Rsp = (& (Rsp [2]));
  (Wrd11.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [0]);
  (Rsp [5]) = (Wrd12.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd15.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);
  (Rsp [4]) = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_34]));

DEFLABEL (label_101)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_138;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_137)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd29.uLng) == 1)
    goto label_134;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_23]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_136;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_135)
  (Wrd42.Obj) = (current_block [OBJECT_38_5]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_22]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_38_23);

DEFLABEL (label_134)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_26]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_133;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_132)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_131;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_130)
  (Wrd65.Obj) = (Rsp [3]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_129;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_128)
  (Wrd74.Obj) = (Rsp [1]);
  (Wrd75.Obj) = (current_block [OBJECT_38_2]);
  (* (Rhp++)) = (Wrd74.Obj);
  (* (Rhp++)) = (Wrd75.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (Wrd79.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd77.pObj) = (& (Rhp [-2]));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd77.pObj)));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_30]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_31]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd86.Obj) = (Rsp [10]);
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [0]);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_32]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_38_31);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_102;
  (* (--Rsp)) = Rvl;
  (Wrd38.Obj) = (current_block [OBJECT_38_11]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_45]));

DEFLABEL (label_102)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_127)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (Rsp [8]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  ((Wrd10.pObj) [0]) = (Wrd5.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  if (! ((Wrd14.Obj) == (current_block [OBJECT_38_12])))
    goto label_121;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_39]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_37]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_41]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_38_37);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_111;
  (Wrd33.Obj) = (current_block [OBJECT_38_4]);

DEFLABEL (label_110)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_109)
  (Wrd34.Obj) = (Rsp [6]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  ((Wrd35.pObj) [0]) = (Wrd33.Obj);

DEFLABEL (label_108)
  Rsp = (& (Rsp [4]));

DEFLABEL (label_107)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_106;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_105)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_104;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_103)
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_36;

DEFLABEL (label_104)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_44]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (label_71)
  (Wrd14.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_43]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (label_70)
  (Wrd5.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_111)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_35]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd63.Obj) = (current_block [OBJECT_38_7]);
  (Wrd66.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd66.Lng))))
    goto label_120;
  (Wrd44.uLng) = (OBJECT_DATUM (Wrd63.Obj));
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd44.Obj) == (Wrd46.Obj))
    goto label_119;

DEFLABEL (label_118)
  (Wrd47.Obj) = (current_block [OBJECT_38_9]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd57.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd57.Lng)))
    goto label_112;
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_8]), 2);

DEFLABEL (label_112)
  (Wrd51.uLng) = (OBJECT_DATUM (Wrd47.Obj));
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd51.Obj) == (Wrd53.Obj))
    goto label_114;
  (Wrd49.Obj) = (current_block [OBJECT_38_10]);
  goto label_113;

DEFLABEL (label_114)
  (Wrd49.Obj) = (current_block [OBJECT_38_4]);

DEFLABEL (label_113)
DEFLABEL (label_117)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd49.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_116;

DEFLABEL (label_115)
  (Wrd59.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (current_block [OBJECT_38_6]);
  (* (--Rsp)) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_22]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_38_39);
  (Wrd33.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_116)
  (Wrd33.Obj) = (Rsp [3]);
  goto label_110;

DEFLABEL (label_119)
  Rsp = (& (Rsp [2]));
  goto label_116;

DEFLABEL (label_120)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_38]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_8]), 2);

DEFLABEL (label_72)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_118;
  goto label_119;

DEFLABEL (label_121)
  if ((Wrd14.Obj) == (current_block [OBJECT_38_13]))
    goto label_122;
  (Wrd18.Obj) = (current_block [OBJECT_38_14]);
  (Rsp [1]) = (Wrd18.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_22]));

DEFLABEL (label_122)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_42]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_40]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_46]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_38_40);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_126;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_36]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_41]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_38_36);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_124;
  (Wrd76.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (current_block [OBJECT_38_6]);
  (* (--Rsp)) = (Wrd77.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_22]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_38_42);
  (Wrd22.Obj) = Rvl;

DEFLABEL (label_123)
  (Wrd23.Obj) = (Rsp [7]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  ((Wrd24.pObj) [0]) = (Wrd22.Obj);
  goto label_108;

DEFLABEL (label_124)
  (Wrd22.Obj) = (current_block [OBJECT_38_4]);

DEFLABEL (label_125)
  Rsp = (& (Rsp [1]));
  goto label_123;

DEFLABEL (label_126)
  (Wrd22.Obj) = ((SCHEME_OBJECT) 0);
  goto label_125;

DEFLABEL (label_129)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_29]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 1);

DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_28]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 1);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_27]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (label_67)
  (Wrd46.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_136)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_33]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 1);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_25]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (label_65)
  (Wrd20.Obj) = Rvl;
  goto label_137;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_38_35);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_115;
  goto label_116;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_38_30);
  goto label_127;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_38_26);
  goto label_107;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define ENVIRONMENT_LABEL_39_3 12
#define DEBUGGING_LABEL_39_2 11
#define OBJECT_39_1 10
#define OBJECT_39_0 9
#define EXECUTE_CACHE_39_6 7
#define FREE_REFERENCES_LABEL_39_0 6
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto structure_record_typeP_1;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (structure_record_typeP_4)
DEFLABEL (structure_record_typeP_1)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  if (Rvl == (current_block [OBJECT_39_0]))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_39_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define ENVIRONMENT_LABEL_40_3 15
#define DEBUGGING_LABEL_40_2 14
#define OBJECT_40_2 13
#define OBJECT_40_1 12
#define OBJECT_40_0 11
#define EXECUTE_CACHE_40_7 7
#define EXECUTE_CACHE_40_6 9
#define FREE_REFERENCES_LABEL_40_0 6
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_40_4);
      goto absolute_4;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (absolute_7)
DEFLABEL (absolute_4)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd8.Obj) = (current_block [OBJECT_40_0]);
  (Wrd9.Obj) = (current_block [OBJECT_40_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_40_2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Rsp [0]) = (Wrd14.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define ENVIRONMENT_LABEL_41_3 12
#define DEBUGGING_LABEL_41_2 11
#define EXECUTE_CACHE_41_7 7
#define EXECUTE_CACHE_41_6 9
#define FREE_REFERENCES_LABEL_41_0 6
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_41_4);
      goto close_1;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_4)
DEFLABEL (close_1)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_7 7
#define TAG_42_8 2
#define LABEL_42_9 9
#define LABEL_42_11 11
#define LABEL_42_15 13
#define LABEL_42_14 15
#define LABEL_42_18 17
#define LABEL_42_22 19
#define LABEL_42_23 21
#define LABEL_42_20 23
#define LABEL_42_25 25
#define LABEL_42_26 27
#define LABEL_42_29 29
#define LABEL_42_30 31
#define ENVIRONMENT_LABEL_42_3 73
#define DEBUGGING_LABEL_42_2 72
#define OBJECT_42_14 71
#define OBJECT_42_13 70
#define OBJECT_42_12 69
#define OBJECT_42_11 68
#define OBJECT_42_10 67
#define OBJECT_42_9 66
#define OBJECT_42_8 65
#define OBJECT_42_7 64
#define OBJECT_42_6 63
#define OBJECT_42_5 62
#define OBJECT_42_4 61
#define OBJECT_42_3 60
#define OBJECT_42_2 59
#define OBJECT_42_1 58
#define OBJECT_42_0 57
#define EXECUTE_CACHE_42_31 33
#define EXECUTE_CACHE_42_28 35
#define EXECUTE_CACHE_42_27 37
#define EXECUTE_CACHE_42_24 39
#define EXECUTE_CACHE_42_21 41
#define EXECUTE_CACHE_42_19 43
#define EXECUTE_CACHE_42_17 45
#define EXECUTE_CACHE_42_16 47
#define EXECUTE_CACHE_42_13 49
#define EXECUTE_CACHE_42_12 51
#define EXECUTE_CACHE_42_10 53
#define EXECUTE_CACHE_42_6 55
#define FREE_REFERENCES_LABEL_42_0 32
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_42_4);
      goto accessor_definitions_42;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto lambda_46;

    case 3:
      current_block = (Rpc - LABEL_42_9);
      goto continuation_40;

    case 4:
      current_block = (Rpc - LABEL_42_11);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_42_15);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_42_14);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_42_18);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_42_22);
      goto continuation_29;

    case 9:
      current_block = (Rpc - LABEL_42_23);
      goto continuation_28;

    case 10:
      current_block = (Rpc - LABEL_42_20);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_42_25);
      goto continuation_27;

    case 12:
      current_block = (Rpc - LABEL_42_26);
      goto continuation_21;

    case 13:
      current_block = (Rpc - LABEL_42_29);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_42_30);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (accessor_definitions_45)
DEFLABEL (accessor_definitions_42)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_7])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_10]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_42_9);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_13]));

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_42_7);

DEFLABEL (lambda_39)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_42_15);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_17]));

DEFLABEL (label_47)
  (Wrd16.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_59)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_42_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_23]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_24]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_42_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_28]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_42_22);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_42_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_42_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_25]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_26]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_27]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_42_26);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_42_4]))
    goto label_52;
  if (Rvl == (current_block [OBJECT_42_6]))
    goto label_51;
  if (Rvl == (current_block [OBJECT_42_8]))
    goto label_49;
  (Wrd12.Obj) = (current_block [OBJECT_42_10]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_48;

DEFLABEL (label_49)
  (Wrd14.Obj) = (current_block [OBJECT_42_9]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_48)
DEFLABEL (label_50)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_31]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_42_25);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_42_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_42_3]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd16.Obj) = (current_block [OBJECT_42_7]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_50;

DEFLABEL (label_52)
  (Wrd18.Obj) = (current_block [OBJECT_42_5]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd18.Obj);
  goto label_50;

DEFLABEL (label_53)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_20]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_21]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_42_20);
  (Wrd9.Obj) = (current_block [OBJECT_42_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_42_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_29]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_30]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_27]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_42_30);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_42_4]))
    goto label_58;
  if (Rvl == (current_block [OBJECT_42_6]))
    goto label_57;
  if (Rvl == (current_block [OBJECT_42_8]))
    goto label_55;
  (Wrd12.Obj) = (current_block [OBJECT_42_10]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_54;

DEFLABEL (label_55)
  (Wrd14.Obj) = (current_block [OBJECT_42_14]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_54)
DEFLABEL (label_56)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_31]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_42_29);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_42_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_42_2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_42_11]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd16.Obj) = (current_block [OBJECT_42_13]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_56;

DEFLABEL (label_58)
  (Wrd18.Obj) = (current_block [OBJECT_42_12]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd18.Obj);
  goto label_56;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_42_14);
  (* (--Rsp)) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_10 7
#define LABEL_43_7 9
#define TAG_43_8 3
#define LABEL_43_9 11
#define LABEL_43_11 13
#define LABEL_43_13 15
#define LABEL_43_17 17
#define LABEL_43_18 19
#define LABEL_43_20 21
#define LABEL_43_26 23
#define LABEL_43_27 25
#define LABEL_43_32 27
#define LABEL_43_33 29
#define LABEL_43_34 31
#define LABEL_43_24 33
#define LABEL_43_29 35
#define LABEL_43_30 37
#define LABEL_43_37 39
#define LABEL_43_36 41
#define LABEL_43_35 43
#define LABEL_43_40 45
#define ENVIRONMENT_LABEL_43_3 97
#define DEBUGGING_LABEL_43_2 96
#define OBJECT_43_18 95
#define OBJECT_43_17 94
#define OBJECT_43_16 93
#define OBJECT_43_15 92
#define OBJECT_43_14 91
#define OBJECT_43_13 90
#define OBJECT_43_12 89
#define OBJECT_43_11 88
#define OBJECT_43_10 87
#define OBJECT_43_9 86
#define OBJECT_43_8 85
#define OBJECT_43_7 84
#define OBJECT_43_6 83
#define OBJECT_43_5 82
#define OBJECT_43_4 81
#define OBJECT_43_3 80
#define OBJECT_43_2 79
#define OBJECT_43_1 78
#define OBJECT_43_0 77
#define EXECUTE_CACHE_43_39 47
#define EXECUTE_CACHE_43_38 49
#define EXECUTE_CACHE_43_31 51
#define EXECUTE_CACHE_43_28 53
#define EXECUTE_CACHE_43_25 55
#define EXECUTE_CACHE_43_23 57
#define EXECUTE_CACHE_43_22 59
#define EXECUTE_CACHE_43_21 61
#define EXECUTE_CACHE_43_19 63
#define EXECUTE_CACHE_43_16 65
#define EXECUTE_CACHE_43_15 67
#define EXECUTE_CACHE_43_14 69
#define EXECUTE_CACHE_43_12 71
#define EXECUTE_CACHE_43_6 73
#define FREE_REFERENCE_43_0 76
#define FREE_REFERENCES_LABEL_43_0 46
#define NUMBER_OF_LINKER_SECTIONS_43_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd49;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_43_4);
      goto modifier_definitions_57;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_43_10);
      goto label_59;

    case 3:
      current_block = (Rpc - LABEL_43_7);
      goto lambda_62;

    case 4:
      current_block = (Rpc - LABEL_43_9);
      goto continuation_55;

    case 5:
      current_block = (Rpc - LABEL_43_11);
      goto continuation_54;

    case 6:
      current_block = (Rpc - LABEL_43_13);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_43_17);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_43_18);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_43_20);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_43_26);
      goto continuation_43;

    case 11:
      current_block = (Rpc - LABEL_43_27);
      goto continuation_42;

    case 12:
      current_block = (Rpc - LABEL_43_32);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_43_33);
      goto continuation_27;

    case 14:
      current_block = (Rpc - LABEL_43_34);
      goto continuation_22;

    case 15:
      current_block = (Rpc - LABEL_43_24);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_43_29);
      goto continuation_41;

    case 17:
      current_block = (Rpc - LABEL_43_30);
      goto continuation_35;

    case 18:
      current_block = (Rpc - LABEL_43_37);
      goto continuation_16;

    case 19:
      current_block = (Rpc - LABEL_43_36);
      goto continuation_23;

    case 20:
      current_block = (Rpc - LABEL_43_35);
      goto continuation_28;

    case 21:
      current_block = (Rpc - LABEL_43_40);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (modifier_definitions_61)
DEFLABEL (modifier_definitions_57)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_43_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_43_7])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_64;
  Wrd15 = Wrd19;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_12]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_43_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_16]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_43_9);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_15]));

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43_10])), (Wrd16.pObj));

DEFLABEL (label_59)
  (Wrd15.Obj) = Rvl;
  goto label_63;

DEFLABEL (lambda_62)
  CLOSURE_HEADER (LABEL_43_7);

DEFLABEL (lambda_53)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_19]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_43_18);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_43_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_43_1]);
  (Rsp [3]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_23]));

DEFLABEL (label_65)
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_43_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_43_1]);
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_22]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_43_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_21]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_43_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_27]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_28]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_43_27);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_31]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_43_26);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_43_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_43_3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_29]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_30]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_25]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_43_30);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_43_4]))
    goto label_70;
  if (Rvl == (current_block [OBJECT_43_5]))
    goto label_69;
  if (Rvl == (current_block [OBJECT_43_6]))
    goto label_67;
  (Wrd12.Obj) = (current_block [OBJECT_43_7]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_66;

DEFLABEL (label_67)
  (Wrd14.Obj) = (current_block [OBJECT_43_14]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_66)
DEFLABEL (label_68)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_39]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_43_29);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_43_2]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_43_11]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_69)
  (Wrd16.Obj) = (current_block [OBJECT_43_13]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_68;

DEFLABEL (label_70)
  (Wrd18.Obj) = (current_block [OBJECT_43_12]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd18.Obj);
  goto label_68;

DEFLABEL (label_71)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_24]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_25]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_43_24);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_43_4]))
    goto label_76;
  if (Rvl == (current_block [OBJECT_43_5]))
    goto label_75;
  if (Rvl == (current_block [OBJECT_43_6]))
    goto label_73;
  (Wrd12.Obj) = (current_block [OBJECT_43_7]);

DEFLABEL (label_72)
  Rsp = (& (Rsp [1]));
  (Wrd16.Obj) = (current_block [OBJECT_43_2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_43_8]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_43_9]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd37.Obj) = (current_block [OBJECT_43_10]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_37]))));
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_74)
  (Wrd49.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_38]));

DEFLABEL (label_75)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_36]))));
  (* (--Rsp)) = (Wrd44.Obj);
  goto label_74;

DEFLABEL (label_76)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_35]))));
  (* (--Rsp)) = (Wrd48.Obj);
  goto label_74;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_43_37);
  (Wrd9.Obj) = (current_block [OBJECT_43_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_43_9]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_40]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_43_15]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_39]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_43_40);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_43_8]);
  (Wrd14.Obj) = (current_block [OBJECT_43_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_32]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_43_18]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_39]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_43_32);

DEFLABEL (label_77)
  (Wrd60.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd60.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  goto label_72;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_43_36);
  (Wrd8.Obj) = (current_block [OBJECT_43_8]);
  (Wrd9.Obj) = (current_block [OBJECT_43_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_43_9]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_34]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_43_16]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_39]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_43_34);
  goto label_77;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_43_35);
  (Wrd8.Obj) = (current_block [OBJECT_43_8]);
  (Wrd9.Obj) = (current_block [OBJECT_43_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_43_9]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_33]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_43_17]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_39]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_43_33);
  goto label_77;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_6 7
#define LABEL_44_8 9
#define LABEL_44_9 11
#define LABEL_44_18 13
#define LABEL_44_11 15
#define TAG_44_12 6
#define LABEL_44_19 17
#define LABEL_44_20 19
#define LABEL_44_21 21
#define LABEL_44_22 23
#define LABEL_44_15 25
#define LABEL_44_16 27
#define LABEL_44_24 29
#define LABEL_44_30 31
#define LABEL_44_26 33
#define LABEL_44_27 35
#define LABEL_44_31 37
#define TAG_44_32 17
#define LABEL_44_36 39
#define LABEL_44_33 41
#define ENVIRONMENT_LABEL_44_3 75
#define DEBUGGING_LABEL_44_2 74
#define OBJECT_44_6 73
#define OBJECT_44_5 72
#define OBJECT_44_4 71
#define OBJECT_44_3 70
#define OBJECT_44_2 69
#define OBJECT_44_1 68
#define OBJECT_44_0 67
#define EXECUTE_CACHE_44_35 43
#define EXECUTE_CACHE_44_34 45
#define EXECUTE_CACHE_44_29 47
#define EXECUTE_CACHE_44_28 49
#define EXECUTE_CACHE_44_25 51
#define EXECUTE_CACHE_44_23 53
#define EXECUTE_CACHE_44_17 55
#define EXECUTE_CACHE_44_14 57
#define EXECUTE_CACHE_44_13 59
#define EXECUTE_CACHE_44_10 61
#define EXECUTE_CACHE_44_7 63
#define FREE_REFERENCE_44_0 66
#define FREE_REFERENCES_LABEL_44_0 42
#define NUMBER_OF_LINKER_SECTIONS_44_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_44_4);
      goto constructor_definitions_26;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_44_6);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_44_8);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_44_9);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_44_18);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_44_11);
      goto lambda_36;

    case 7:
      current_block = (Rpc - LABEL_44_19);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_44_20);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_44_21);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_44_22);
      goto label_31;

    case 11:
      current_block = (Rpc - LABEL_44_15);
      goto continuation_14;

    case 12:
      current_block = (Rpc - LABEL_44_16);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_44_24);
      goto continuation_4;

    case 14:
      current_block = (Rpc - LABEL_44_30);
      goto label_32;

    case 15:
      current_block = (Rpc - LABEL_44_26);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_44_27);
      goto continuation_15;

    case 17:
      current_block = (Rpc - LABEL_44_31);
      goto lambda_37;

    case 18:
      current_block = (Rpc - LABEL_44_36);
      goto label_33;

    case 19:
      current_block = (Rpc - LABEL_44_33);
      goto continuation_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constructor_definitions_35)
DEFLABEL (constructor_definitions_26)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_7]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_44_6);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_11])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [2]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_44_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_17]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_44_16);
  if (Rvl == (current_block [OBJECT_44_2]))
    goto label_39;
  (Wrd7.Obj) = (current_block [OBJECT_44_4]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_38;

DEFLABEL (label_39)
  (Wrd8.Obj) = (current_block [OBJECT_44_3]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_38)
DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_29]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_44_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_27]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_28]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_44_27);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_35]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_44_26);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_31])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  ((Wrd11.pObj) [2]) = Rvl;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_33]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_34]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_44_33);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_13]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_44_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_14]));

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_44_11);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_52;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_51)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd20.uLng) == 1)
    goto label_46;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_24]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_25]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_44_24);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_45;
  Wrd5 = Wrd9;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_44_18);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_43)
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_42;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [0]);

DEFLABEL (label_41)
  (Rsp [2]) = (Wrd44.Obj);
  (Wrd53.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_23]));

DEFLABEL (label_42)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_22]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_31)
  (Wrd44.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_30])), (Wrd6.pObj));

DEFLABEL (label_32)
  (Wrd5.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_50;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_49)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_48;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_47)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd37.Obj);
  goto label_43;

DEFLABEL (label_48)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_21]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_30)
  (Wrd37.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_20]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_0]), 1);

DEFLABEL (label_29)
  (Wrd27.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_19]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_0]), 1);

DEFLABEL (label_28)
  (Wrd11.Obj) = Rvl;
  goto label_51;

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_44_31);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_54;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_53)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (Wrd20.Obj) = (current_block [OBJECT_44_5]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd26.Obj) = ((Wrd18.pObj) [3]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_44_6]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_36]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_33)
  (Wrd5.Obj) = Rvl;
  goto label_53;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define TAG_45_6 1
#define LABEL_45_8 7
#define LABEL_45_10 9
#define LABEL_45_11 11
#define LABEL_45_12 13
#define LABEL_45_13 15
#define TAG_45_14 6
#define LABEL_45_15 17
#define LABEL_45_17 19
#define LABEL_45_18 21
#define LABEL_45_20 23
#define LABEL_45_22 25
#define LABEL_45_23 27
#define LABEL_45_25 29
#define TAG_45_26 13
#define LABEL_45_27 31
#define LABEL_45_32 33
#define LABEL_45_33 35
#define LABEL_45_38 37
#define LABEL_45_35 39
#define LABEL_45_39 41
#define TAG_45_40 19
#define LABEL_45_41 43
#define LABEL_45_42 45
#define LABEL_45_44 47
#define LABEL_45_46 49
#define LABEL_45_48 51
#define ENVIRONMENT_LABEL_45_3 95
#define DEBUGGING_LABEL_45_2 94
#define OBJECT_45_8 93
#define OBJECT_45_7 92
#define OBJECT_45_6 91
#define OBJECT_45_5 90
#define OBJECT_45_4 89
#define OBJECT_45_3 88
#define OBJECT_45_2 87
#define OBJECT_45_1 86
#define OBJECT_45_0 85
#define EXECUTE_CACHE_45_47 53
#define EXECUTE_CACHE_45_45 55
#define EXECUTE_CACHE_45_43 57
#define EXECUTE_CACHE_45_37 59
#define EXECUTE_CACHE_45_36 61
#define EXECUTE_CACHE_45_34 63
#define EXECUTE_CACHE_45_31 65
#define EXECUTE_CACHE_45_30 67
#define EXECUTE_CACHE_45_29 69
#define EXECUTE_CACHE_45_28 71
#define EXECUTE_CACHE_45_24 73
#define EXECUTE_CACHE_45_21 75
#define EXECUTE_CACHE_45_19 77
#define EXECUTE_CACHE_45_16 79
#define EXECUTE_CACHE_45_9 81
#define EXECUTE_CACHE_45_7 83
#define FREE_REFERENCES_LABEL_45_0 52
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_45_4);
      goto constructor_definition_boa_41;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto lambda_45;

    case 2:
      current_block = (Rpc - LABEL_45_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_45_10);
      goto continuation_38;

    case 4:
      current_block = (Rpc - LABEL_45_11);
      goto continuation_37;

    case 5:
      current_block = (Rpc - LABEL_45_12);
      goto continuation_35;

    case 6:
      current_block = (Rpc - LABEL_45_13);
      goto lambda_46;

    case 7:
      current_block = (Rpc - LABEL_45_15);
      goto continuation_36;

    case 8:
      current_block = (Rpc - LABEL_45_17);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_45_18);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_45_20);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_45_22);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_45_23);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_45_25);
      goto lambda_47;

    case 14:
      current_block = (Rpc - LABEL_45_27);
      goto continuation_17;

    case 15:
      current_block = (Rpc - LABEL_45_32);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_45_33);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_45_38);
      goto continuation_18;

    case 18:
      current_block = (Rpc - LABEL_45_35);
      goto continuation_16;

    case 19:
      current_block = (Rpc - LABEL_45_39);
      goto lambda_48;

    case 20:
      current_block = (Rpc - LABEL_45_41);
      goto continuation_31;

    case 21:
      current_block = (Rpc - LABEL_45_42);
      goto continuation_20;

    case 22:
      current_block = (Rpc - LABEL_45_44);
      goto continuation_19;

    case 23:
      current_block = (Rpc - LABEL_45_46);
      goto continuation_21;

    case 24:
      current_block = (Rpc - LABEL_45_48);
      goto continuation_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constructor_definition_boa_44)
DEFLABEL (constructor_definition_boa_41)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_5])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = (Wrd5.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_7]));

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_45_5);

DEFLABEL (lambda_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_13])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_16]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_45_15);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_45_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_23]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_24]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_45_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_31]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_45_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_30]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_45_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_45_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.Obj) = (current_block [OBJECT_45_5]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_49;

DEFLABEL (label_50)
  (Wrd12.Obj) = (current_block [OBJECT_45_5]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_49)
DEFLABEL (label_56)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_30]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_45_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_19]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_18);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_45_0]))
    goto label_55;
  (Wrd8.Obj) = (current_block [OBJECT_45_2]);
  if (Rvl == (Wrd8.Obj))
    goto label_54;
  (Wrd10.Obj) = (current_block [OBJECT_45_3]);
  if (Rvl == (Wrd10.Obj))
    goto label_52;
  (Wrd12.Obj) = (current_block [OBJECT_45_4]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_51;

DEFLABEL (label_52)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_51)
DEFLABEL (label_53)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_29]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_45_17);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_54)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_53;

DEFLABEL (label_55)
  (Wrd18.Obj) = (current_block [OBJECT_45_1]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd18.Obj);
  goto label_53;

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_45_13);

DEFLABEL (lambda_34)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_25])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_27]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_28]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_45_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_28]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_45_35);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_58;
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_15;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_45_38);
  (Wrd13.Obj) = Rvl;

DEFLABEL (label_57)
  (Rsp [2]) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_39])));
  Rhp += 4;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd23 = Wrd16;
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  ((Wrd23.pObj) [2]) = (Wrd26.Obj);
  ((Wrd23.pObj) [3]) = (Wrd13.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [4]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  ((Wrd23.pObj) [5]) = (Wrd18.Obj);
  (Rsp [5]) = (Wrd15.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_41]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_34]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_45_41);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_28]));

DEFLABEL (label_58)
  (Wrd13.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_57;

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_45_25);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_34]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_45_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_37]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_45_32);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd9.Obj) = (current_block [OBJECT_45_6]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_36]));

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_45_39);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_43]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_45_42);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_45]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_45_44);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_47]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_45_46);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;

DEFLABEL (label_60)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  if ((Wrd9.Obj) == (Wrd12.Obj))
    goto label_60;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_48]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_47]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_45_48);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Obj) = (current_block [OBJECT_45_5]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_45_7]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd24.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_45_8]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  goto label_62;

DEFLABEL (label_63)
  Rvl = (Rsp [1]);

DEFLABEL (label_62)
DEFLABEL (label_64)
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_7 7
#define LABEL_46_8 9
#define LABEL_46_10 11
#define LABEL_46_17 13
#define LABEL_46_13 15
#define LABEL_46_14 17
#define TAG_46_15 7
#define LABEL_46_18 19
#define LABEL_46_20 21
#define LABEL_46_21 23
#define ENVIRONMENT_LABEL_46_3 47
#define DEBUGGING_LABEL_46_2 46
#define OBJECT_46_6 45
#define OBJECT_46_5 44
#define OBJECT_46_4 43
#define OBJECT_46_3 42
#define OBJECT_46_2 41
#define OBJECT_46_1 40
#define OBJECT_46_0 39
#define EXECUTE_CACHE_46_22 25
#define EXECUTE_CACHE_46_19 27
#define EXECUTE_CACHE_46_16 29
#define EXECUTE_CACHE_46_12 31
#define EXECUTE_CACHE_46_11 33
#define EXECUTE_CACHE_46_9 35
#define EXECUTE_CACHE_46_6 37
#define FREE_REFERENCES_LABEL_46_0 24
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_46_4);
      goto make_constructor_29;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_46_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_46_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_46_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_46_17);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_46_13);
      goto continuation_21;

    case 7:
      current_block = (Rpc - LABEL_46_14);
      goto lambda_33;

    case 8:
      current_block = (Rpc - LABEL_46_18);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_46_20);
      goto continuation_17;

    case 10:
      current_block = (Rpc - LABEL_46_21);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_constructor_32)
DEFLABEL (make_constructor_29)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_46_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_46_10);
  if (Rvl == (current_block [OBJECT_46_0]))
    goto label_34;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_46_17);
  (Wrd9.Obj) = (current_block [OBJECT_46_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_46_2]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_14])));
  Rhp += 3;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd21 = Wrd16;
  (Wrd22.Obj) = (Rsp [6]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  ((Wrd21.pObj) [3]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  ((Wrd21.pObj) [4]) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_16]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_46_13);
  (Wrd9.Obj) = (current_block [OBJECT_46_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_18]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_46_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_19]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_46_18);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_46_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_46_4]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_46_5]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd41.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd46.Obj) = (current_block [OBJECT_46_2]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_46_14);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_46_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_22]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_46_21);
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
  INTERRUPT_CHECK (27, LABEL_46_20);
  (Wrd9.Obj) = (current_block [OBJECT_46_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [4]);
  (Wrd18.Obj) = ((Wrd14.pObj) [3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_46_6]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_7 7
#define LABEL_47_9 9
#define LABEL_47_13 11
#define LABEL_47_14 13
#define LABEL_47_15 15
#define LABEL_47_11 17
#define LABEL_47_18 19
#define LABEL_47_20 21
#define LABEL_47_16 23
#define LABEL_47_21 25
#define LABEL_47_22 27
#define LABEL_47_25 29
#define ENVIRONMENT_LABEL_47_3 59
#define DEBUGGING_LABEL_47_2 58
#define OBJECT_47_6 57
#define OBJECT_47_5 56
#define OBJECT_47_4 55
#define OBJECT_47_3 54
#define OBJECT_47_2 53
#define OBJECT_47_1 52
#define OBJECT_47_0 51
#define EXECUTE_CACHE_47_27 31
#define EXECUTE_CACHE_47_26 33
#define EXECUTE_CACHE_47_24 35
#define EXECUTE_CACHE_47_23 37
#define EXECUTE_CACHE_47_19 39
#define EXECUTE_CACHE_47_17 41
#define EXECUTE_CACHE_47_12 43
#define EXECUTE_CACHE_47_10 45
#define EXECUTE_CACHE_47_8 47
#define EXECUTE_CACHE_47_6 49
#define FREE_REFERENCES_LABEL_47_0 30
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_47_4);
      goto default_value_expr_20;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_47_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_47_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_47_13);
      goto continuation_12;

    case 5:
      current_block = (Rpc - LABEL_47_14);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_47_15);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_47_11);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_47_18);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_47_20);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_47_16);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_47_21);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_47_22);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_47_25);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_value_expr_25)
DEFLABEL (default_value_expr_20)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_7);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_26;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_47_9);
  if (Rvl == (current_block [OBJECT_47_0]))
    goto label_28;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_27;

DEFLABEL (label_28)
  (Wrd8.Obj) = (current_block [OBJECT_47_1]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_27)
DEFLABEL (label_41)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_47_11);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_40;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_17]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_47_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd7.Obj) = (current_block [OBJECT_47_4]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_29;

DEFLABEL (label_30)
  (Wrd12.Obj) = (current_block [OBJECT_47_2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_29)
DEFLABEL (label_39)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_24]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_47_13);
  (Wrd22.Obj) = Rvl;
  (Wrd21.Obj) = (* (Rsp++));
  (Wrd30.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd30.uLng) == 26))
    goto label_38;
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_38;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd32.Lng) = ((Wrd33.Lng) + (Wrd34.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd32.Lng)))
    goto label_38;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));

DEFLABEL (label_37)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_36)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_47_18);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_35;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_35;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd15.Lng) = ((Wrd16.Lng) - (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_35;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_34)
  (Wrd21.Obj) = (current_block [OBJECT_47_3]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_21]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_22]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_47_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_27]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_47_21);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_25]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd16.Obj) = (current_block [OBJECT_47_6]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_31;

DEFLABEL (label_32)
  (Wrd17.Obj) = (current_block [OBJECT_47_5]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_31)
DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_26]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_47_25);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_22)
  (Wrd12.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_38)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_14]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_23)
  (Wrd24.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd12.Obj) = (current_block [OBJECT_47_2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_36;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_47_15);
  (* (--Rsp)) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_7 7
#define LABEL_48_8 9
#define LABEL_48_10 11
#define ENVIRONMENT_LABEL_48_3 31
#define DEBUGGING_LABEL_48_2 30
#define OBJECT_48_8 29
#define OBJECT_48_7 28
#define OBJECT_48_6 27
#define OBJECT_48_5 26
#define OBJECT_48_4 25
#define OBJECT_48_3 24
#define OBJECT_48_2 23
#define OBJECT_48_1 22
#define OBJECT_48_0 21
#define EXECUTE_CACHE_48_12 13
#define EXECUTE_CACHE_48_11 15
#define EXECUTE_CACHE_48_9 17
#define EXECUTE_CACHE_48_6 19
#define FREE_REFERENCES_LABEL_48_0 12
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_48_4);
      goto copier_definitions_13;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_48_7);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_48_8);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_48_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copier_definitions_16)
DEFLABEL (copier_definitions_13)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  Rvl = (current_block [OBJECT_48_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_48_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_48_2]))
    goto label_22;
  if (Rvl == (current_block [OBJECT_48_4]))
    goto label_21;
  if (Rvl == (current_block [OBJECT_48_6]))
    goto label_19;
  (Wrd12.Obj) = (current_block [OBJECT_48_8]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_18;

DEFLABEL (label_19)
  (Wrd14.Obj) = (current_block [OBJECT_48_7]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_18)
DEFLABEL (label_20)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_48_7);
  (Wrd9.Obj) = (current_block [OBJECT_48_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_48_1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd16.Obj) = (current_block [OBJECT_48_5]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_20;

DEFLABEL (label_22)
  (Wrd18.Obj) = (current_block [OBJECT_48_3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd18.Obj);
  goto label_20;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_7 7
#define LABEL_49_9 9
#define LABEL_49_10 11
#define LABEL_49_12 13
#define LABEL_49_19 15
#define LABEL_49_17 17
#define LABEL_49_15 19
#define LABEL_49_20 21
#define LABEL_49_21 23
#define LABEL_49_22 25
#define LABEL_49_23 27
#define LABEL_49_24 29
#define LABEL_49_25 31
#define LABEL_49_26 33
#define LABEL_49_27 35
#define LABEL_49_28 37
#define LABEL_49_29 39
#define LABEL_49_30 41
#define LABEL_49_31 43
#define LABEL_49_32 45
#define LABEL_49_33 47
#define LABEL_49_34 49
#define LABEL_49_35 51
#define ENVIRONMENT_LABEL_49_3 93
#define DEBUGGING_LABEL_49_2 92
#define OBJECT_49_24 91
#define OBJECT_49_23 90
#define OBJECT_49_22 89
#define OBJECT_49_21 88
#define OBJECT_49_20 87
#define OBJECT_49_19 86
#define OBJECT_49_18 85
#define OBJECT_49_17 84
#define OBJECT_49_16 83
#define OBJECT_49_15 82
#define OBJECT_49_14 81
#define OBJECT_49_13 80
#define OBJECT_49_12 79
#define OBJECT_49_11 78
#define OBJECT_49_10 77
#define OBJECT_49_9 76
#define OBJECT_49_8 75
#define OBJECT_49_7 74
#define OBJECT_49_6 73
#define OBJECT_49_5 72
#define OBJECT_49_4 71
#define OBJECT_49_3 70
#define OBJECT_49_2 69
#define OBJECT_49_1 68
#define OBJECT_49_0 67
#define EXECUTE_CACHE_49_18 53
#define EXECUTE_CACHE_49_16 55
#define EXECUTE_CACHE_49_14 57
#define EXECUTE_CACHE_49_13 59
#define EXECUTE_CACHE_49_11 61
#define EXECUTE_CACHE_49_8 63
#define EXECUTE_CACHE_49_6 65
#define FREE_REFERENCES_LABEL_49_0 52
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd6;
  machine_word Wrd23;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_49_4);
      goto predicate_definitions_106;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_49_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_49_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_49_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_49_12);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_49_19);
      goto continuation_14;

    case 7:
      current_block = (Rpc - LABEL_49_17);
      goto continuation_41;

    case 8:
      current_block = (Rpc - LABEL_49_15);
      goto continuation_55;

    case 9:
      current_block = (Rpc - LABEL_49_20);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_49_21);
      goto continuation_40;

    case 11:
      current_block = (Rpc - LABEL_49_22);
      goto continuation_88;

    case 12:
      current_block = (Rpc - LABEL_49_23);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_49_24);
      goto continuation_33;

    case 14:
      current_block = (Rpc - LABEL_49_25);
      goto continuation_84;

    case 15:
      current_block = (Rpc - LABEL_49_26);
      goto continuation_32;

    case 16:
      current_block = (Rpc - LABEL_49_27);
      goto continuation_83;

    case 17:
      current_block = (Rpc - LABEL_49_28);
      goto continuation_31;

    case 18:
      current_block = (Rpc - LABEL_49_29);
      goto continuation_76;

    case 19:
      current_block = (Rpc - LABEL_49_30);
      goto continuation_28;

    case 20:
      current_block = (Rpc - LABEL_49_31);
      goto continuation_75;

    case 21:
      current_block = (Rpc - LABEL_49_32);
      goto continuation_74;

    case 22:
      current_block = (Rpc - LABEL_49_33);
      goto continuation_71;

    case 23:
      current_block = (Rpc - LABEL_49_34);
      goto continuation_64;

    case 24:
      current_block = (Rpc - LABEL_49_35);
      goto continuation_56;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (predicate_definitions_109)
DEFLABEL (predicate_definitions_106)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_110;
  Rvl = (current_block [OBJECT_49_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_110)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_49_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_49_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_49_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_49_12);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_49_1])))
    goto label_111;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_15]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_49_2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_16]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_49_15);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_22]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_14]));

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_49_22);
  (Wrd9.Obj) = (current_block [OBJECT_49_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_25]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_49_13]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_18]));

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_49_25);
  (Wrd8.Obj) = (current_block [OBJECT_49_10]);
  (Wrd9.Obj) = (current_block [OBJECT_49_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_49_8]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_27]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_49_9]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_18]));

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_49_27);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_49_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_29]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_49_18]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_18]));

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_49_29);
  (Wrd8.Obj) = (current_block [OBJECT_49_8]);
  (Wrd9.Obj) = (current_block [OBJECT_49_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_31]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_49_16]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_18]));

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_49_31);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_49_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_32]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_49_17]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_18]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_49_32);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_33]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_49_20]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_18]));

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_49_33);
  (Wrd8.Obj) = (current_block [OBJECT_49_8]);
  (Wrd9.Obj) = (current_block [OBJECT_49_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_49_14]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_34]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_14]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_49_34);
  (Wrd9.Obj) = (current_block [OBJECT_49_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_49_21]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_49_22]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_49_23]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd37.Obj) = (current_block [OBJECT_49_8]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd42.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (Wrd49.Obj) = (current_block [OBJECT_49_15]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_35]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (current_block [OBJECT_49_24]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_18]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_49_35);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_49_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_49_15]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_111)
  if (! (Rvl == (current_block [OBJECT_49_3])))
    goto label_112;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_49_4]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_18]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_49_17);
  (Wrd8.Obj) = (current_block [OBJECT_49_10]);
  (Wrd9.Obj) = (current_block [OBJECT_49_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_49_8]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd21.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_21]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_49_9]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_18]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_49_21);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_49_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_24]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_49_12]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_18]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_49_24);
  (Wrd8.Obj) = (current_block [OBJECT_49_8]);
  (Wrd9.Obj) = (current_block [OBJECT_49_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_26]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_49_16]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_18]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_49_26);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_49_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_28]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_49_17]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_18]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_49_28);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_30]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_49_19]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_18]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_49_30);
  (Wrd8.Obj) = (current_block [OBJECT_49_8]);
  (Wrd9.Obj) = (current_block [OBJECT_49_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_49_14]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd34.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_49_15]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_112)
  if (Rvl == (current_block [OBJECT_49_5]))
    goto label_113;
  Rvl = (current_block [OBJECT_49_7]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_113)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_19]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_49_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_18]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_49_19);
  (Wrd8.Obj) = (current_block [OBJECT_49_8]);
  (Wrd9.Obj) = (current_block [OBJECT_49_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_20]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_49_9]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_18]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_49_20);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_49_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_23]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_49_11]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_49_23);
  (Wrd8.Obj) = (current_block [OBJECT_49_8]);
  (Wrd9.Obj) = (current_block [OBJECT_49_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_49_14]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd34.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_49_15]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_7 7
#define LABEL_50_9 9
#define LABEL_50_11 11
#define LABEL_50_13 13
#define LABEL_50_15 15
#define LABEL_50_17 17
#define LABEL_50_22 19
#define LABEL_50_18 21
#define TAG_50_19 9
#define LABEL_50_21 23
#define LABEL_50_23 25
#define LABEL_50_30 27
#define LABEL_50_25 29
#define LABEL_50_26 31
#define LABEL_50_28 33
#define LABEL_50_33 35
#define LABEL_50_38 37
#define LABEL_50_31 39
#define LABEL_50_36 41
#define LABEL_50_42 43
#define LABEL_50_40 45
#define LABEL_50_39 47
#define LABEL_50_43 49
#define LABEL_50_48 51
#define LABEL_50_45 53
#define LABEL_50_46 55
#define LABEL_50_49 57
#define LABEL_50_51 59
#define LABEL_50_50 61
#define LABEL_50_52 63
#define LABEL_50_54 65
#define LABEL_50_53 67
#define LABEL_50_57 69
#define LABEL_50_55 71
#define LABEL_50_56 73
#define LABEL_50_58 75
#define LABEL_50_60 77
#define ENVIRONMENT_LABEL_50_3 132
#define DEBUGGING_LABEL_50_2 131
#define OBJECT_50_12 130
#define OBJECT_50_11 129
#define OBJECT_50_10 128
#define OBJECT_50_9 127
#define OBJECT_50_8 126
#define OBJECT_50_7 125
#define OBJECT_50_6 124
#define OBJECT_50_5 123
#define OBJECT_50_4 122
#define OBJECT_50_3 121
#define OBJECT_50_2 120
#define OBJECT_50_1 119
#define OBJECT_50_0 118
#define EXECUTE_CACHE_50_59 79
#define EXECUTE_CACHE_50_47 81
#define EXECUTE_CACHE_50_44 83
#define EXECUTE_CACHE_50_41 85
#define EXECUTE_CACHE_50_37 87
#define EXECUTE_CACHE_50_35 89
#define EXECUTE_CACHE_50_34 91
#define EXECUTE_CACHE_50_32 93
#define EXECUTE_CACHE_50_29 95
#define EXECUTE_CACHE_50_27 97
#define EXECUTE_CACHE_50_24 99
#define EXECUTE_CACHE_50_20 101
#define EXECUTE_CACHE_50_16 103
#define EXECUTE_CACHE_50_14 105
#define EXECUTE_CACHE_50_12 107
#define EXECUTE_CACHE_50_10 109
#define EXECUTE_CACHE_50_8 111
#define EXECUTE_CACHE_50_6 113
#define FREE_REFERENCE_50_1 116
#define FREE_REFERENCE_50_0 117
#define FREE_REFERENCES_LABEL_50_0 78
#define NUMBER_OF_LINKER_SECTIONS_50_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
defstr_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_50_4);
      goto type_definitions_82;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_50_7);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_50_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_50_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_50_13);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_50_15);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_50_17);
      goto continuation_16;

    case 8:
      current_block = (Rpc - LABEL_50_22);
      goto label_84;

    case 9:
      current_block = (Rpc - LABEL_50_18);
      goto lambda_90;

    case 10:
      current_block = (Rpc - LABEL_50_21);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_50_23);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_50_30);
      goto continuation_75;

    case 13:
      current_block = (Rpc - LABEL_50_25);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_50_26);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_50_28);
      goto continuation_10;

    case 16:
      current_block = (Rpc - LABEL_50_33);
      goto continuation_76;

    case 17:
      current_block = (Rpc - LABEL_50_38);
      goto continuation_65;

    case 18:
      current_block = (Rpc - LABEL_50_31);
      goto continuation_17;

    case 19:
      current_block = (Rpc - LABEL_50_36);
      goto continuation_11;

    case 20:
      current_block = (Rpc - LABEL_50_42);
      goto continuation_48;

    case 21:
      current_block = (Rpc - LABEL_50_40);
      goto continuation_46;

    case 22:
      current_block = (Rpc - LABEL_50_39);
      goto continuation_63;

    case 23:
      current_block = (Rpc - LABEL_50_43);
      goto continuation_41;

    case 24:
      current_block = (Rpc - LABEL_50_48);
      goto continuation_20;

    case 25:
      current_block = (Rpc - LABEL_50_45);
      goto continuation_57;

    case 26:
      current_block = (Rpc - LABEL_50_46);
      goto continuation_40;

    case 27:
      current_block = (Rpc - LABEL_50_49);
      goto label_85;

    case 28:
      current_block = (Rpc - LABEL_50_51);
      goto continuation_37;

    case 29:
      current_block = (Rpc - LABEL_50_50);
      goto continuation_38;

    case 30:
      current_block = (Rpc - LABEL_50_52);
      goto label_86;

    case 31:
      current_block = (Rpc - LABEL_50_54);
      goto continuation_34;

    case 32:
      current_block = (Rpc - LABEL_50_53);
      goto continuation_35;

    case 33:
      current_block = (Rpc - LABEL_50_57);
      goto label_87;

    case 34:
      current_block = (Rpc - LABEL_50_55);
      goto continuation_30;

    case 35:
      current_block = (Rpc - LABEL_50_56);
      goto continuation_29;

    case 36:
      current_block = (Rpc - LABEL_50_58);
      goto continuation_26;

    case 37:
      current_block = (Rpc - LABEL_50_60);
      goto continuation_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (type_definitions_89)
DEFLABEL (type_definitions_82)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_50_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_50_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_50_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_16]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50_18])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [5]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_20]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_50_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_113;
  Wrd9 = Wrd13;

DEFLABEL (label_112)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_50_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_27]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_50_26);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_35]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_50_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_111;
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == (Wrd8.Obj))
    goto label_111;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_33]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_34]));

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_50_33);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_50_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_30]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_50_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_37]));

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_50_30);
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd27.Obj) = (current_block [OBJECT_50_0]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_110)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_31]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_32]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_50_31);
  if (Rvl == (current_block [OBJECT_50_2]))
    goto label_107;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_40]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_41]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_50_40);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_106;
  (Wrd7.Obj) = (Rsp [9]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_106;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_42]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_34]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_50_42);
  (Wrd23.Obj) = (current_block [OBJECT_50_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_105)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_43]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_44]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_50_43);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_47]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_50_46);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_104;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_104;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd14.Lng) = ((Wrd15.Lng) + (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_104;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_103)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_50]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_41]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_50_50);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  (Wrd7.Obj) = (current_block [OBJECT_50_9]);
  goto label_91;

DEFLABEL (label_92)
  (Wrd7.Obj) = (current_block [OBJECT_50_8]);

DEFLABEL (label_91)
DEFLABEL (label_102)
  (Wrd8.Obj) = (* (Rsp++));
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_101;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_101;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd17.Lng) = ((Wrd18.Lng) + (Wrd19.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd17.Lng)))
    goto label_101;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));

DEFLABEL (label_100)
  (Wrd23.Obj) = (current_block [OBJECT_50_0]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd27.Obj) = (current_block [OBJECT_50_5]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd28.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_51]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [7]);
  if ((Wrd35.Obj) == ((SCHEME_OBJECT) 0))
    goto label_99;
  (Wrd38.Obj) = (Rsp [6]);
  if ((Wrd35.Obj) == (Wrd38.Obj))
    goto label_99;
  (Wrd39.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_34]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_50_51);
  (Wrd42.Obj) = Rvl;

DEFLABEL (label_98)
  (Wrd43.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_53]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_54]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_41]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_50_54);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_97;
  (Wrd33.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_34]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_50_53);
  (Wrd6.Obj) = Rvl;

DEFLABEL (label_96)
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_50_11]);
  (Wrd14.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_55]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_56]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_1]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_95;
  Wrd25 = Wrd29;

DEFLABEL (label_94)
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_20]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_50_56);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_59]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_50_55);
  (Wrd9.Obj) = (current_block [OBJECT_50_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_50_5]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_58]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_59]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_50_58);
  (Wrd9.Obj) = (current_block [OBJECT_50_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_50_5]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd21.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_60]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_32]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_50_60);
  (Wrd9.Obj) = (current_block [OBJECT_50_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_50_5]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_48]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_50_12]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_37]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_50_48);

DEFLABEL (label_93)
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_50_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_50_7]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd22.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_57])), (Wrd26.pObj));

DEFLABEL (label_87)
  (Wrd25.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd6.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_96;

DEFLABEL (label_99)
  (Wrd42.Obj) = (current_block [OBJECT_50_10]);
  Rsp = (& (Rsp [1]));
  goto label_98;

DEFLABEL (label_101)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_52]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_86)
  (Wrd14.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_104)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_49]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_85)
  (* (--Rsp)) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd14.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto label_105;

DEFLABEL (label_107)
  (Wrd11.Obj) = (Rsp [9]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_109;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_38]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_34]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_50_38);
  (Wrd28.Obj) = (current_block [OBJECT_50_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_108)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_39]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_34]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_50_39);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_50_4]);
  (Wrd14.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_50_0]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_50_5]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd33.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_45]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_50_6]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_37]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_50_45);
  goto label_93;

DEFLABEL (label_109)
  (Wrd18.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto label_108;

DEFLABEL (label_111)
  (Wrd14.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto label_110;

DEFLABEL (label_113)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_22])), (Wrd10.pObj));

DEFLABEL (label_84)
  (Wrd9.Obj) = Rvl;
  goto label_112;

DEFLABEL (lambda_90)
  CLOSURE_HEADER (LABEL_50_18);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_24]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_50_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_29]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_50_28);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_114;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_114)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_36]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_34]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_50_36);
  (Wrd9.Obj) = (current_block [OBJECT_50_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_50_3]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_11 15
#define LABEL_12 17
#define LABEL_13 19
#define LABEL_14 21
#define LABEL_15 23
#define LABEL_16 25
#define LABEL_17 27
#define LABEL_18 29
#define LABEL_19 31
#define LABEL_20 33
#define LABEL_21 35
#define LABEL_22 37
#define LABEL_23 39
#define LABEL_24 41
#define LABEL_25 43
#define LABEL_26 45
#define LABEL_27 47
#define LABEL_28 49
#define LABEL_29 51
#define LABEL_30 53
#define LABEL_31 55
#define LABEL_32 57
#define LABEL_33 59
#define LABEL_34 61
#define LABEL_36 63
#define LABEL_37 65
#define LABEL_38 67
#define LABEL_39 69
#define LABEL_40 71
#define LABEL_41 73
#define LABEL_42 75
#define LABEL_43 77
#define LABEL_44 79
#define LABEL_45 81
#define LABEL_46 83
#define LABEL_47 85
#define LABEL_48 87
#define LABEL_49 89
#define LABEL_54 91
#define LABEL_50 93
#define LABEL_52 95
#define LABEL_58 97
#define LABEL_53 99
#define LABEL_56 101
#define LABEL_62 103
#define LABEL_57 105
#define LABEL_60 107
#define LABEL_66 109
#define LABEL_61 111
#define LABEL_64 113
#define LABEL_69 115
#define LABEL_65 117
#define LABEL_67 119
#define LABEL_72 121
#define LABEL_68 123
#define LABEL_70 125
#define LABEL_75 127
#define LABEL_71 129
#define LABEL_73 131
#define LABEL_78 133
#define LABEL_74 135
#define LABEL_76 137
#define LABEL_81 139
#define LABEL_77 141
#define LABEL_79 143
#define LABEL_84 145
#define LABEL_80 147
#define LABEL_82 149
#define LABEL_87 151
#define LABEL_83 153
#define LABEL_85 155
#define LABEL_90 157
#define LABEL_86 159
#define LABEL_88 161
#define LABEL_93 163
#define LABEL_89 165
#define LABEL_91 167
#define LABEL_96 169
#define LABEL_92 171
#define LABEL_94 173
#define LABEL_99 175
#define LABEL_95 177
#define LABEL_97 179
#define LABEL_102 181
#define LABEL_98 183
#define LABEL_100 185
#define LABEL_105 187
#define LABEL_101 189
#define LABEL_103 191
#define LABEL_104 193
#define LABEL_106 195
#define LABEL_107 197
#define LABEL_111 199
#define LABEL_108 201
#define LABEL_109 203
#define LABEL_114 205
#define LABEL_110 207
#define LABEL_112 209
#define LABEL_117 211
#define LABEL_113 213
#define LABEL_115 215
#define LABEL_120 217
#define LABEL_116 219
#define LABEL_118 221
#define LABEL_123 223
#define LABEL_119 225
#define LABEL_121 227
#define LABEL_122 229
#define LABEL_124 231
#define LABEL_128 233
#define LABEL_125 235
#define LABEL_126 237
#define LABEL_131 239
#define LABEL_127 241
#define LABEL_129 243
#define LABEL_134 245
#define LABEL_130 247
#define LABEL_132 249
#define LABEL_137 251
#define LABEL_133 253
#define LABEL_135 255
#define LABEL_140 257
#define LABEL_136 259
#define LABEL_138 261
#define LABEL_139 263
#define LABEL_141 265
#define LABEL_145 267
#define LABEL_142 269
#define LABEL_143 271
#define LABEL_148 273
#define LABEL_144 275
#define LABEL_146 277
#define LABEL_151 279
#define LABEL_147 281
#define LABEL_149 283
#define LABEL_154 285
#define LABEL_150 287
#define LABEL_152 289
#define LABEL_157 291
#define LABEL_153 293
#define LABEL_155 295
#define LABEL_160 297
#define LABEL_156 299
#define LABEL_158 301
#define LABEL_163 303
#define LABEL_159 305
#define LABEL_161 307
#define LABEL_166 309
#define LABEL_162 311
#define LABEL_164 313
#define LABEL_170 315
#define LABEL_171 317
#define LABEL_165 319
#define LABEL_168 321
#define LABEL_169 323
#define LABEL_173 325
#define LABEL_174 327
#define LABEL_175 329
#define LABEL_176 331
#define LABEL_177 333
#define LABEL_178 335
#define LABEL_179 337
#define LABEL_180 339
#define LABEL_181 341
#define LABEL_182 343
#define LABEL_183 345
#define LABEL_184 347
#define LABEL_185 349
#define ENVIRONMENT_LABEL_3 552
#define DEBUGGING_LABEL_2 551
#define PURIFICATION_ROOT 550
#define OBJECT_174 549
#define OBJECT_173 548
#define OBJECT_172 547
#define OBJECT_171 546
#define OBJECT_170 545
#define OBJECT_169 544
#define OBJECT_168 543
#define OBJECT_167 542
#define OBJECT_166 541
#define OBJECT_165 540
#define OBJECT_164 539
#define OBJECT_163 538
#define OBJECT_162 537
#define OBJECT_161 536
#define OBJECT_160 535
#define OBJECT_159 534
#define OBJECT_158 533
#define OBJECT_157 532
#define OBJECT_156 531
#define OBJECT_155 530
#define OBJECT_154 529
#define OBJECT_153 528
#define OBJECT_152 527
#define OBJECT_151 526
#define OBJECT_150 525
#define OBJECT_149 524
#define OBJECT_148 523
#define OBJECT_147 522
#define OBJECT_146 521
#define OBJECT_145 520
#define OBJECT_144 519
#define OBJECT_143 518
#define OBJECT_142 517
#define OBJECT_141 516
#define OBJECT_140 515
#define OBJECT_139 514
#define OBJECT_138 513
#define OBJECT_137 512
#define OBJECT_136 511
#define OBJECT_135 510
#define OBJECT_134 509
#define OBJECT_133 508
#define OBJECT_132 507
#define OBJECT_131 506
#define OBJECT_130 505
#define OBJECT_129 504
#define OBJECT_128 503
#define OBJECT_127 502
#define OBJECT_126 501
#define OBJECT_125 500
#define OBJECT_124 499
#define OBJECT_123 498
#define OBJECT_122 497
#define OBJECT_121 496
#define OBJECT_120 495
#define OBJECT_119 494
#define OBJECT_118 493
#define OBJECT_117 492
#define OBJECT_116 491
#define OBJECT_115 490
#define OBJECT_114 489
#define OBJECT_113 488
#define OBJECT_112 487
#define OBJECT_111 486
#define OBJECT_110 485
#define OBJECT_109 484
#define OBJECT_108 483
#define OBJECT_107 482
#define OBJECT_106 481
#define OBJECT_105 480
#define OBJECT_104 479
#define OBJECT_103 478
#define OBJECT_102 477
#define OBJECT_101 476
#define OBJECT_100 475
#define OBJECT_99 474
#define OBJECT_98 473
#define OBJECT_97 472
#define OBJECT_96 471
#define OBJECT_95 470
#define OBJECT_94 469
#define OBJECT_93 468
#define OBJECT_92 467
#define OBJECT_91 466
#define OBJECT_90 465
#define OBJECT_89 464
#define OBJECT_88 463
#define OBJECT_87 462
#define OBJECT_86 461
#define OBJECT_85 460
#define OBJECT_84 459
#define OBJECT_83 458
#define OBJECT_82 457
#define OBJECT_81 456
#define OBJECT_80 455
#define OBJECT_79 454
#define OBJECT_78 453
#define OBJECT_77 452
#define OBJECT_76 451
#define OBJECT_75 450
#define OBJECT_74 449
#define OBJECT_73 448
#define OBJECT_72 447
#define OBJECT_71 446
#define OBJECT_70 445
#define OBJECT_69 444
#define OBJECT_68 443
#define OBJECT_67 442
#define OBJECT_66 441
#define OBJECT_65 440
#define OBJECT_64 439
#define OBJECT_63 438
#define OBJECT_62 437
#define OBJECT_61 436
#define OBJECT_60 435
#define OBJECT_59 434
#define OBJECT_58 433
#define OBJECT_57 432
#define OBJECT_56 431
#define OBJECT_55 430
#define OBJECT_54 429
#define OBJECT_53 428
#define OBJECT_52 427
#define OBJECT_51 426
#define OBJECT_50 425
#define OBJECT_49 424
#define OBJECT_48 423
#define OBJECT_47 422
#define OBJECT_46 421
#define OBJECT_45 420
#define OBJECT_44 419
#define OBJECT_43 418
#define OBJECT_42 417
#define OBJECT_41 416
#define OBJECT_40 415
#define OBJECT_39 414
#define OBJECT_38 413
#define OBJECT_37 412
#define OBJECT_36 411
#define OBJECT_35 410
#define OBJECT_34 409
#define OBJECT_33 408
#define OBJECT_32 407
#define OBJECT_31 406
#define OBJECT_30 405
#define OBJECT_29 404
#define OBJECT_28 403
#define OBJECT_27 402
#define OBJECT_26 401
#define OBJECT_25 400
#define OBJECT_24 399
#define OBJECT_23 398
#define OBJECT_22 397
#define OBJECT_21 396
#define OBJECT_20 395
#define OBJECT_19 394
#define OBJECT_18 393
#define OBJECT_17 392
#define OBJECT_16 391
#define OBJECT_15 390
#define OBJECT_14 389
#define OBJECT_13 388
#define OBJECT_12 387
#define OBJECT_11 386
#define OBJECT_10 385
#define OBJECT_9 384
#define OBJECT_8 383
#define OBJECT_7 382
#define OBJECT_6 381
#define OBJECT_5 380
#define OBJECT_4 379
#define OBJECT_3 378
#define OBJECT_2 377
#define OBJECT_1 376
#define OBJECT_0 375
#define EXECUTE_CACHE_172 351
#define EXECUTE_CACHE_167 353
#define EXECUTE_CACHE_63 355
#define EXECUTE_CACHE_59 357
#define EXECUTE_CACHE_55 359
#define EXECUTE_CACHE_51 361
#define EXECUTE_CACHE_35 363
#define FREE_REFERENCE_5 366
#define FREE_REFERENCE_4 367
#define FREE_REFERENCE_3 368
#define FREE_REFERENCE_2 369
#define FREE_REFERENCE_1 370
#define FREE_REFERENCE_0 371
#define GLOBAL_EXECUTE_CACHE_7 373
#define FREE_REFERENCES_LABEL_0 350
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
defstr_so_dd760304cdf1311c (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_4);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_19);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_20);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_17;

    case 17:
      current_block = (Rpc - LABEL_22);
      goto continuation_18;

    case 18:
      current_block = (Rpc - LABEL_23);
      goto continuation_19;

    case 19:
      current_block = (Rpc - LABEL_24);
      goto continuation_20;

    case 20:
      current_block = (Rpc - LABEL_25);
      goto continuation_21;

    case 21:
      current_block = (Rpc - LABEL_26);
      goto continuation_22;

    case 22:
      current_block = (Rpc - LABEL_27);
      goto continuation_23;

    case 23:
      current_block = (Rpc - LABEL_28);
      goto continuation_24;

    case 24:
      current_block = (Rpc - LABEL_29);
      goto continuation_25;

    case 25:
      current_block = (Rpc - LABEL_30);
      goto continuation_26;

    case 26:
      current_block = (Rpc - LABEL_31);
      goto continuation_27;

    case 27:
      current_block = (Rpc - LABEL_32);
      goto continuation_28;

    case 28:
      current_block = (Rpc - LABEL_33);
      goto continuation_29;

    case 29:
      current_block = (Rpc - LABEL_34);
      goto continuation_30;

    case 30:
      current_block = (Rpc - LABEL_36);
      goto continuation_31;

    case 31:
      current_block = (Rpc - LABEL_37);
      goto continuation_32;

    case 32:
      current_block = (Rpc - LABEL_38);
      goto continuation_33;

    case 33:
      current_block = (Rpc - LABEL_39);
      goto continuation_34;

    case 34:
      current_block = (Rpc - LABEL_40);
      goto continuation_35;

    case 35:
      current_block = (Rpc - LABEL_41);
      goto continuation_36;

    case 36:
      current_block = (Rpc - LABEL_42);
      goto continuation_37;

    case 37:
      current_block = (Rpc - LABEL_43);
      goto continuation_38;

    case 38:
      current_block = (Rpc - LABEL_44);
      goto continuation_39;

    case 39:
      current_block = (Rpc - LABEL_45);
      goto continuation_40;

    case 40:
      current_block = (Rpc - LABEL_46);
      goto continuation_41;

    case 41:
      current_block = (Rpc - LABEL_47);
      goto continuation_42;

    case 42:
      current_block = (Rpc - LABEL_48);
      goto continuation_43;

    case 43:
      current_block = (Rpc - LABEL_49);
      goto continuation_45;

    case 44:
      current_block = (Rpc - LABEL_54);
      goto label_137;

    case 45:
      current_block = (Rpc - LABEL_50);
      goto continuation_44;

    case 46:
      current_block = (Rpc - LABEL_52);
      goto continuation_47;

    case 47:
      current_block = (Rpc - LABEL_58);
      goto label_138;

    case 48:
      current_block = (Rpc - LABEL_53);
      goto continuation_46;

    case 49:
      current_block = (Rpc - LABEL_56);
      goto continuation_49;

    case 50:
      current_block = (Rpc - LABEL_62);
      goto label_139;

    case 51:
      current_block = (Rpc - LABEL_57);
      goto continuation_48;

    case 52:
      current_block = (Rpc - LABEL_60);
      goto continuation_51;

    case 53:
      current_block = (Rpc - LABEL_66);
      goto label_140;

    case 54:
      current_block = (Rpc - LABEL_61);
      goto continuation_50;

    case 55:
      current_block = (Rpc - LABEL_64);
      goto continuation_53;

    case 56:
      current_block = (Rpc - LABEL_69);
      goto label_141;

    case 57:
      current_block = (Rpc - LABEL_65);
      goto continuation_52;

    case 58:
      current_block = (Rpc - LABEL_67);
      goto continuation_55;

    case 59:
      current_block = (Rpc - LABEL_72);
      goto label_142;

    case 60:
      current_block = (Rpc - LABEL_68);
      goto continuation_54;

    case 61:
      current_block = (Rpc - LABEL_70);
      goto continuation_57;

    case 62:
      current_block = (Rpc - LABEL_75);
      goto label_143;

    case 63:
      current_block = (Rpc - LABEL_71);
      goto continuation_56;

    case 64:
      current_block = (Rpc - LABEL_73);
      goto continuation_59;

    case 65:
      current_block = (Rpc - LABEL_78);
      goto label_144;

    case 66:
      current_block = (Rpc - LABEL_74);
      goto continuation_58;

    case 67:
      current_block = (Rpc - LABEL_76);
      goto continuation_61;

    case 68:
      current_block = (Rpc - LABEL_81);
      goto label_145;

    case 69:
      current_block = (Rpc - LABEL_77);
      goto continuation_60;

    case 70:
      current_block = (Rpc - LABEL_79);
      goto continuation_63;

    case 71:
      current_block = (Rpc - LABEL_84);
      goto label_146;

    case 72:
      current_block = (Rpc - LABEL_80);
      goto continuation_62;

    case 73:
      current_block = (Rpc - LABEL_82);
      goto continuation_65;

    case 74:
      current_block = (Rpc - LABEL_87);
      goto label_147;

    case 75:
      current_block = (Rpc - LABEL_83);
      goto continuation_64;

    case 76:
      current_block = (Rpc - LABEL_85);
      goto continuation_67;

    case 77:
      current_block = (Rpc - LABEL_90);
      goto label_148;

    case 78:
      current_block = (Rpc - LABEL_86);
      goto continuation_66;

    case 79:
      current_block = (Rpc - LABEL_88);
      goto continuation_69;

    case 80:
      current_block = (Rpc - LABEL_93);
      goto label_149;

    case 81:
      current_block = (Rpc - LABEL_89);
      goto continuation_68;

    case 82:
      current_block = (Rpc - LABEL_91);
      goto continuation_71;

    case 83:
      current_block = (Rpc - LABEL_96);
      goto label_150;

    case 84:
      current_block = (Rpc - LABEL_92);
      goto continuation_70;

    case 85:
      current_block = (Rpc - LABEL_94);
      goto continuation_73;

    case 86:
      current_block = (Rpc - LABEL_99);
      goto label_151;

    case 87:
      current_block = (Rpc - LABEL_95);
      goto continuation_72;

    case 88:
      current_block = (Rpc - LABEL_97);
      goto continuation_75;

    case 89:
      current_block = (Rpc - LABEL_102);
      goto label_152;

    case 90:
      current_block = (Rpc - LABEL_98);
      goto continuation_74;

    case 91:
      current_block = (Rpc - LABEL_100);
      goto continuation_77;

    case 92:
      current_block = (Rpc - LABEL_105);
      goto label_153;

    case 93:
      current_block = (Rpc - LABEL_101);
      goto continuation_76;

    case 94:
      current_block = (Rpc - LABEL_103);
      goto continuation_79;

    case 95:
      current_block = (Rpc - LABEL_104);
      goto continuation_78;

    case 96:
      current_block = (Rpc - LABEL_106);
      goto continuation_80;

    case 97:
      current_block = (Rpc - LABEL_107);
      goto continuation_82;

    case 98:
      current_block = (Rpc - LABEL_111);
      goto label_154;

    case 99:
      current_block = (Rpc - LABEL_108);
      goto continuation_81;

    case 100:
      current_block = (Rpc - LABEL_109);
      goto continuation_84;

    case 101:
      current_block = (Rpc - LABEL_114);
      goto label_155;

    case 102:
      current_block = (Rpc - LABEL_110);
      goto continuation_83;

    case 103:
      current_block = (Rpc - LABEL_112);
      goto continuation_86;

    case 104:
      current_block = (Rpc - LABEL_117);
      goto label_156;

    case 105:
      current_block = (Rpc - LABEL_113);
      goto continuation_85;

    case 106:
      current_block = (Rpc - LABEL_115);
      goto continuation_88;

    case 107:
      current_block = (Rpc - LABEL_120);
      goto label_157;

    case 108:
      current_block = (Rpc - LABEL_116);
      goto continuation_87;

    case 109:
      current_block = (Rpc - LABEL_118);
      goto continuation_90;

    case 110:
      current_block = (Rpc - LABEL_123);
      goto label_158;

    case 111:
      current_block = (Rpc - LABEL_119);
      goto continuation_89;

    case 112:
      current_block = (Rpc - LABEL_121);
      goto continuation_92;

    case 113:
      current_block = (Rpc - LABEL_122);
      goto continuation_91;

    case 114:
      current_block = (Rpc - LABEL_124);
      goto continuation_94;

    case 115:
      current_block = (Rpc - LABEL_128);
      goto label_159;

    case 116:
      current_block = (Rpc - LABEL_125);
      goto continuation_93;

    case 117:
      current_block = (Rpc - LABEL_126);
      goto continuation_96;

    case 118:
      current_block = (Rpc - LABEL_131);
      goto label_160;

    case 119:
      current_block = (Rpc - LABEL_127);
      goto continuation_95;

    case 120:
      current_block = (Rpc - LABEL_129);
      goto continuation_98;

    case 121:
      current_block = (Rpc - LABEL_134);
      goto label_161;

    case 122:
      current_block = (Rpc - LABEL_130);
      goto continuation_97;

    case 123:
      current_block = (Rpc - LABEL_132);
      goto continuation_100;

    case 124:
      current_block = (Rpc - LABEL_137);
      goto label_162;

    case 125:
      current_block = (Rpc - LABEL_133);
      goto continuation_99;

    case 126:
      current_block = (Rpc - LABEL_135);
      goto continuation_102;

    case 127:
      current_block = (Rpc - LABEL_140);
      goto label_163;

    case 128:
      current_block = (Rpc - LABEL_136);
      goto continuation_101;

    case 129:
      current_block = (Rpc - LABEL_138);
      goto continuation_104;

    case 130:
      current_block = (Rpc - LABEL_139);
      goto continuation_103;

    case 131:
      current_block = (Rpc - LABEL_141);
      goto continuation_106;

    case 132:
      current_block = (Rpc - LABEL_145);
      goto label_164;

    case 133:
      current_block = (Rpc - LABEL_142);
      goto continuation_105;

    case 134:
      current_block = (Rpc - LABEL_143);
      goto continuation_108;

    case 135:
      current_block = (Rpc - LABEL_148);
      goto label_165;

    case 136:
      current_block = (Rpc - LABEL_144);
      goto continuation_107;

    case 137:
      current_block = (Rpc - LABEL_146);
      goto continuation_110;

    case 138:
      current_block = (Rpc - LABEL_151);
      goto label_166;

    case 139:
      current_block = (Rpc - LABEL_147);
      goto continuation_109;

    case 140:
      current_block = (Rpc - LABEL_149);
      goto continuation_112;

    case 141:
      current_block = (Rpc - LABEL_154);
      goto label_167;

    case 142:
      current_block = (Rpc - LABEL_150);
      goto continuation_111;

    case 143:
      current_block = (Rpc - LABEL_152);
      goto continuation_114;

    case 144:
      current_block = (Rpc - LABEL_157);
      goto label_168;

    case 145:
      current_block = (Rpc - LABEL_153);
      goto continuation_113;

    case 146:
      current_block = (Rpc - LABEL_155);
      goto continuation_116;

    case 147:
      current_block = (Rpc - LABEL_160);
      goto label_169;

    case 148:
      current_block = (Rpc - LABEL_156);
      goto continuation_115;

    case 149:
      current_block = (Rpc - LABEL_158);
      goto continuation_118;

    case 150:
      current_block = (Rpc - LABEL_163);
      goto label_170;

    case 151:
      current_block = (Rpc - LABEL_159);
      goto continuation_117;

    case 152:
      current_block = (Rpc - LABEL_161);
      goto continuation_120;

    case 153:
      current_block = (Rpc - LABEL_166);
      goto label_171;

    case 154:
      current_block = (Rpc - LABEL_162);
      goto continuation_119;

    case 155:
      current_block = (Rpc - LABEL_164);
      goto continuation_122;

    case 156:
      current_block = (Rpc - LABEL_170);
      goto label_172;

    case 157:
      current_block = (Rpc - LABEL_171);
      goto label_173;

    case 158:
      current_block = (Rpc - LABEL_165);
      goto continuation_121;

    case 159:
      current_block = (Rpc - LABEL_168);
      goto continuation_124;

    case 160:
      current_block = (Rpc - LABEL_169);
      goto continuation_123;

    case 161:
      current_block = (Rpc - LABEL_173);
      goto continuation_125;

    case 162:
      current_block = (Rpc - LABEL_174);
      goto continuation_126;

    case 163:
      current_block = (Rpc - LABEL_175);
      goto continuation_127;

    case 164:
      current_block = (Rpc - LABEL_176);
      goto continuation_128;

    case 165:
      current_block = (Rpc - LABEL_177);
      goto continuation_129;

    case 166:
      current_block = (Rpc - LABEL_178);
      goto continuation_130;

    case 167:
      current_block = (Rpc - LABEL_179);
      goto continuation_131;

    case 168:
      current_block = (Rpc - LABEL_180);
      goto continuation_132;

    case 169:
      current_block = (Rpc - LABEL_181);
      goto continuation_133;

    case 170:
      current_block = (Rpc - LABEL_182);
      goto continuation_134;

    case 171:
      current_block = (Rpc - LABEL_183);
      goto label_176;

    case 172:
      current_block = (Rpc - LABEL_184);
      goto label_177;

    case 173:
      current_block = (Rpc - LABEL_185);
      goto expression_136;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_136)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_184])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_177)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_176)
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
	2,
	2,
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
	3,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	2,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 50)
      goto label_175;
    blocks = (current_block [OBJECT_174]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_183])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_175)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_50);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_251;
  Wrd12 = Wrd16;

DEFLABEL (label_250)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_53);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_249;
  Wrd11 = Wrd15;

DEFLABEL (label_248)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_57);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_247;
  Wrd12 = Wrd16;

DEFLABEL (label_246)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_61);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_245;
  Wrd12 = Wrd16;

DEFLABEL (label_244)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_65);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_243;
  Wrd12 = Wrd16;

DEFLABEL (label_242)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_68);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_241;
  Wrd12 = Wrd16;

DEFLABEL (label_240)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_71);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_239;
  Wrd12 = Wrd16;

DEFLABEL (label_238)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_74);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_237;
  Wrd12 = Wrd16;

DEFLABEL (label_236)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_77);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_235;
  Wrd12 = Wrd16;

DEFLABEL (label_234)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_80);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_233;
  Wrd12 = Wrd16;

DEFLABEL (label_232)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_83);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_231;
  Wrd12 = Wrd16;

DEFLABEL (label_230)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_86);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_85);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_103]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_229;
  Wrd12 = Wrd16;

DEFLABEL (label_228)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_89);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_105]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_88);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_227;
  Wrd12 = Wrd16;

DEFLABEL (label_226)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_92);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_107]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_225;
  Wrd12 = Wrd16;

DEFLABEL (label_224)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_95);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_223;
  Wrd12 = Wrd16;

DEFLABEL (label_222)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_98);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_111]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_221;
  Wrd12 = Wrd16;

DEFLABEL (label_220)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_101);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_113]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_112]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_219;
  Wrd12 = Wrd16;

DEFLABEL (label_218)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_104);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_114]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_115]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_108);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_107);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_217;
  Wrd12 = Wrd16;

DEFLABEL (label_216)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55]));

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_110);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_119]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_109);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_215;
  Wrd11 = Wrd15;

DEFLABEL (label_214)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_113);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_121]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_112);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_120]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_213;
  Wrd12 = Wrd16;

DEFLABEL (label_212)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_116);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_123]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_122]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_211;
  Wrd12 = Wrd16;

DEFLABEL (label_210)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_119);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_125]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_118);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_124]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_209;
  Wrd12 = Wrd16;

DEFLABEL (label_208)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_122);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_128]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_121);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_126]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_127]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_125);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_127]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_124);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_126]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_207;
  Wrd12 = Wrd16;

DEFLABEL (label_206)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55]));

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_127);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_126);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_205;
  Wrd11 = Wrd15;

DEFLABEL (label_204)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_130);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_131]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_129);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_130]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_203;
  Wrd12 = Wrd16;

DEFLABEL (label_202)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_133);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_133]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_132);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_132]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_201;
  Wrd12 = Wrd16;

DEFLABEL (label_200)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_136);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_135]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_135);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_139]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_134]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_199;
  Wrd12 = Wrd16;

DEFLABEL (label_198)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_139);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_138]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_138);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_142]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_136]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_142);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_141);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_143]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_144]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_139]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_197;
  Wrd12 = Wrd16;

DEFLABEL (label_196)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55]));

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_144);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_140]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_143);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_147]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_195;
  Wrd11 = Wrd15;

DEFLABEL (label_194)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_147);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_141]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_146);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_120]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_193;
  Wrd12 = Wrd16;

DEFLABEL (label_192)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_150);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_143]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_149);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_152]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_142]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_191;
  Wrd12 = Wrd16;

DEFLABEL (label_190)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_153);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_144]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_114)
  INTERRUPT_CHECK (27, LABEL_152);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_189;
  Wrd12 = Wrd16;

DEFLABEL (label_188)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_156);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_146]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_155);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_158]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_159]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_145]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_187;
  Wrd12 = Wrd16;

DEFLABEL (label_186)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_159);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_148]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_158);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_161]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_162]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_147]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_185;
  Wrd12 = Wrd16;

DEFLABEL (label_184)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_162);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_149]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_161);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_164]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_165]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_147]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_183;
  Wrd12 = Wrd16;

DEFLABEL (label_182)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_167]));

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_165);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_150]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_164);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_168]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_169]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_181;
  Wrd11 = Wrd15;

DEFLABEL (label_180)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_179;
  Wrd17 = Wrd21;

DEFLABEL (label_178)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_172]));

DEFLABEL (continuation_123)
  INTERRUPT_CHECK (27, LABEL_169);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_153]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_168);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_173]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_152]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_125)
  INTERRUPT_CHECK (27, LABEL_173);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_174]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_155]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_126)
  INTERRUPT_CHECK (27, LABEL_174);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_156]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_157]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_127)
  INTERRUPT_CHECK (27, LABEL_175);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_176]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_159]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_128)
  INTERRUPT_CHECK (27, LABEL_176);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_177]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_160]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_161]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_177);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_178]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_162]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_163]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_130)
  INTERRUPT_CHECK (27, LABEL_178);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_179]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_164]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_165]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_131)
  INTERRUPT_CHECK (27, LABEL_179);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_180]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_166]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_167]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_132)
  INTERRUPT_CHECK (27, LABEL_180);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_181]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_168]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_169]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_133)
  INTERRUPT_CHECK (27, LABEL_181);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_182]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_170]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_171]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_134)
  INTERRUPT_CHECK (27, LABEL_182);
  (Wrd5.Obj) = (current_block [OBJECT_172]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_173]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (label_179)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_171])), (Wrd18.pObj));

DEFLABEL (label_173)
  (Wrd17.Obj) = Rvl;
  goto label_178;

DEFLABEL (label_181)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_170])), (Wrd12.pObj));

DEFLABEL (label_172)
  (Wrd11.Obj) = Rvl;
  goto label_180;

DEFLABEL (label_183)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_166])), (Wrd13.pObj));

DEFLABEL (label_171)
  (Wrd12.Obj) = Rvl;
  goto label_182;

DEFLABEL (label_185)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_163])), (Wrd13.pObj));

DEFLABEL (label_170)
  (Wrd12.Obj) = Rvl;
  goto label_184;

DEFLABEL (label_187)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_160])), (Wrd13.pObj));

DEFLABEL (label_169)
  (Wrd12.Obj) = Rvl;
  goto label_186;

DEFLABEL (label_189)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_157])), (Wrd13.pObj));

DEFLABEL (label_168)
  (Wrd12.Obj) = Rvl;
  goto label_188;

DEFLABEL (label_191)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_154])), (Wrd13.pObj));

DEFLABEL (label_167)
  (Wrd12.Obj) = Rvl;
  goto label_190;

DEFLABEL (label_193)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_151])), (Wrd13.pObj));

DEFLABEL (label_166)
  (Wrd12.Obj) = Rvl;
  goto label_192;

DEFLABEL (label_195)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_148])), (Wrd12.pObj));

DEFLABEL (label_165)
  (Wrd11.Obj) = Rvl;
  goto label_194;

DEFLABEL (label_197)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_145])), (Wrd13.pObj));

DEFLABEL (label_164)
  (Wrd12.Obj) = Rvl;
  goto label_196;

DEFLABEL (label_199)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_140])), (Wrd13.pObj));

DEFLABEL (label_163)
  (Wrd12.Obj) = Rvl;
  goto label_198;

DEFLABEL (label_201)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_137])), (Wrd13.pObj));

DEFLABEL (label_162)
  (Wrd12.Obj) = Rvl;
  goto label_200;

DEFLABEL (label_203)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_134])), (Wrd13.pObj));

DEFLABEL (label_161)
  (Wrd12.Obj) = Rvl;
  goto label_202;

DEFLABEL (label_205)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_131])), (Wrd12.pObj));

DEFLABEL (label_160)
  (Wrd11.Obj) = Rvl;
  goto label_204;

DEFLABEL (label_207)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_128])), (Wrd13.pObj));

DEFLABEL (label_159)
  (Wrd12.Obj) = Rvl;
  goto label_206;

DEFLABEL (label_209)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_123])), (Wrd13.pObj));

DEFLABEL (label_158)
  (Wrd12.Obj) = Rvl;
  goto label_208;

DEFLABEL (label_211)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_120])), (Wrd13.pObj));

DEFLABEL (label_157)
  (Wrd12.Obj) = Rvl;
  goto label_210;

DEFLABEL (label_213)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_117])), (Wrd13.pObj));

DEFLABEL (label_156)
  (Wrd12.Obj) = Rvl;
  goto label_212;

DEFLABEL (label_215)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_114])), (Wrd12.pObj));

DEFLABEL (label_155)
  (Wrd11.Obj) = Rvl;
  goto label_214;

DEFLABEL (label_217)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_111])), (Wrd13.pObj));

DEFLABEL (label_154)
  (Wrd12.Obj) = Rvl;
  goto label_216;

DEFLABEL (label_219)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_105])), (Wrd13.pObj));

DEFLABEL (label_153)
  (Wrd12.Obj) = Rvl;
  goto label_218;

DEFLABEL (label_221)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_102])), (Wrd13.pObj));

DEFLABEL (label_152)
  (Wrd12.Obj) = Rvl;
  goto label_220;

DEFLABEL (label_223)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_99])), (Wrd13.pObj));

DEFLABEL (label_151)
  (Wrd12.Obj) = Rvl;
  goto label_222;

DEFLABEL (label_225)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_96])), (Wrd13.pObj));

DEFLABEL (label_150)
  (Wrd12.Obj) = Rvl;
  goto label_224;

DEFLABEL (label_227)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_93])), (Wrd13.pObj));

DEFLABEL (label_149)
  (Wrd12.Obj) = Rvl;
  goto label_226;

DEFLABEL (label_229)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_90])), (Wrd13.pObj));

DEFLABEL (label_148)
  (Wrd12.Obj) = Rvl;
  goto label_228;

DEFLABEL (label_231)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87])), (Wrd13.pObj));

DEFLABEL (label_147)
  (Wrd12.Obj) = Rvl;
  goto label_230;

DEFLABEL (label_233)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84])), (Wrd13.pObj));

DEFLABEL (label_146)
  (Wrd12.Obj) = Rvl;
  goto label_232;

DEFLABEL (label_235)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81])), (Wrd13.pObj));

DEFLABEL (label_145)
  (Wrd12.Obj) = Rvl;
  goto label_234;

DEFLABEL (label_237)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78])), (Wrd13.pObj));

DEFLABEL (label_144)
  (Wrd12.Obj) = Rvl;
  goto label_236;

DEFLABEL (label_239)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75])), (Wrd13.pObj));

DEFLABEL (label_143)
  (Wrd12.Obj) = Rvl;
  goto label_238;

DEFLABEL (label_241)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72])), (Wrd13.pObj));

DEFLABEL (label_142)
  (Wrd12.Obj) = Rvl;
  goto label_240;

DEFLABEL (label_243)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69])), (Wrd13.pObj));

DEFLABEL (label_141)
  (Wrd12.Obj) = Rvl;
  goto label_242;

DEFLABEL (label_245)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66])), (Wrd13.pObj));

DEFLABEL (label_140)
  (Wrd12.Obj) = Rvl;
  goto label_244;

DEFLABEL (label_247)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62])), (Wrd13.pObj));

DEFLABEL (label_139)
  (Wrd12.Obj) = Rvl;
  goto label_246;

DEFLABEL (label_249)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58])), (Wrd12.pObj));

DEFLABEL (label_138)
  (Wrd11.Obj) = Rvl;
  goto label_248;

DEFLABEL (label_251)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54])), (Wrd13.pObj));

DEFLABEL (label_137)
  (Wrd12.Obj) = Rvl;
  goto label_250;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_defstr_so_dd760304cdf1311c [50] =
  {
    { "defstr_so_code_1", 31, defstr_so_code_1 },
    { "defstr_so_code_2", 37, defstr_so_code_2 },
    { "defstr_so_code_3", 3, defstr_so_code_3 },
    { "defstr_so_code_4", 3, defstr_so_code_4 },
    { "defstr_so_code_5", 12, defstr_so_code_5 },
    { "defstr_so_code_6", 6, defstr_so_code_6 },
    { "defstr_so_code_7", 7, defstr_so_code_7 },
    { "defstr_so_code_8", 6, defstr_so_code_8 },
    { "defstr_so_code_9", 5, defstr_so_code_9 },
    { "defstr_so_code_10", 9, defstr_so_code_10 },
    { "defstr_so_code_11", 2, defstr_so_code_11 },
    { "defstr_so_code_12", 2, defstr_so_code_12 },
    { "defstr_so_code_13", 2, defstr_so_code_13 },
    { "defstr_so_code_14", 2, defstr_so_code_14 },
    { "defstr_so_code_15", 2, defstr_so_code_15 },
    { "defstr_so_code_16", 2, defstr_so_code_16 },
    { "defstr_so_code_17", 2, defstr_so_code_17 },
    { "defstr_so_code_18", 3, defstr_so_code_18 },
    { "defstr_so_code_19", 2, defstr_so_code_19 },
    { "defstr_so_code_20", 33, defstr_so_code_20 },
    { "defstr_so_code_21", 5, defstr_so_code_21 },
    { "defstr_so_code_22", 5, defstr_so_code_22 },
    { "defstr_so_code_23", 5, defstr_so_code_23 },
    { "defstr_so_code_24", 10, defstr_so_code_24 },
    { "defstr_so_code_25", 5, defstr_so_code_25 },
    { "defstr_so_code_26", 9, defstr_so_code_26 },
    { "defstr_so_code_27", 5, defstr_so_code_27 },
    { "defstr_so_code_28", 6, defstr_so_code_28 },
    { "defstr_so_code_29", 6, defstr_so_code_29 },
    { "defstr_so_code_30", 3, defstr_so_code_30 },
    { "defstr_so_code_31", 3, defstr_so_code_31 },
    { "defstr_so_code_32", 3, defstr_so_code_32 },
    { "defstr_so_code_33", 3, defstr_so_code_33 },
    { "defstr_so_code_34", 4, defstr_so_code_34 },
    { "defstr_so_code_35", 5, defstr_so_code_35 },
    { "defstr_so_code_36", 3, defstr_so_code_36 },
    { "defstr_so_code_37", 19, defstr_so_code_37 },
    { "defstr_so_code_38", 33, defstr_so_code_38 },
    { "defstr_so_code_39", 2, defstr_so_code_39 },
    { "defstr_so_code_40", 2, defstr_so_code_40 },
    { "defstr_so_code_41", 2, defstr_so_code_41 },
    { "defstr_so_code_42", 15, defstr_so_code_42 },
    { "defstr_so_code_43", 22, defstr_so_code_43 },
    { "defstr_so_code_44", 20, defstr_so_code_44 },
    { "defstr_so_code_45", 25, defstr_so_code_45 },
    { "defstr_so_code_46", 11, defstr_so_code_46 },
    { "defstr_so_code_47", 14, defstr_so_code_47 },
    { "defstr_so_code_48", 5, defstr_so_code_48 },
    { "defstr_so_code_49", 25, defstr_so_code_49 },
    { "defstr_so_code_50", 38, defstr_so_code_50 }
  };

int
decl_defstr_so_dd760304cdf1311c (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_defstr_so_dd760304cdf1311c);
  return (0);
}

DECLARE_COMPILED_CODE ("defstr.so", 174, decl_defstr_so_dd760304cdf1311c, defstr_so_dd760304cdf1311c)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_defstr_so_data_dd760304cdf1311c [11963] =
  "\xa9\x04\x8f\x01\x9b\x17\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x0d"
  "\x08\x0c\x06\x07\x85\xc2\xb9\x02\xc1\xba\xc1\xbb\x0d\xbc\x0d\x0d"
  "\x08\x8a\x28\x0d\x28\x0d\xbd\x28\x0d\xbe\x28\x0d\xbf\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x82\x88\xb3\x0d\x1c\xb2\x07\x80\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x83\x88\x07\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x07\x28\x0d\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x07\x0c\x1d"
  "\xb3\xb2\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\xb7\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x0c\x1d"
  "\x28\x1b\x28\x1b\x28\x1b\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\xb2"
  "\x28\x1b\x28\x1b\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x06\x08"
  "\x88\x1b\x24\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1c\x24\x28"
  "\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x24\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d"
  "\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb2\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x1c\x08\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x0c\x08\x06\x07\x85\xb1\x02\xb3\xb2\x0d"
  "\x1c\x24\x28\x1b\x28\x0d\x1c\x28\x1b\x28\xb7\x28\xb7\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1d\x1b\x25\x1b"
  "\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb2\x81\xb3\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2"
  "\x81\x80\xb3\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\xb2\x81\x80\xb3\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x06\x08\x89"
  "\x1b\x08\x06\x07\x85\xb1\x02\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x06\x08\x89\x1b\x08\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x28"
  "\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x06\x08\x89\x1b\x08\x28"
  "\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x06\x08"
  "\x89\x1b\x08\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x08\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x08\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x0d\x1c\x0d\x1c"
  "\x08\x89\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x08\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x1b\x08\x88\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x06\x08\x89\x1b\x07\x08\x89\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x28\x1b\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\xb3\xb2\x07\x0d"
  "\x1c\x24\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\xb7\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x1b"
  "\x0c\x06\x85\xb1\x02\x0c\x0c\x07\x0c\x08\xb2\xb3\x28\x1b\x28\xb7"
  "\x28\xb7\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x28\x0d\xb9\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\x0d\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x1d\x0d\x1b\x0d\x1b\x0d\x1c\x1b\x0d\x1c\x0d"
  "\x1c\x1b\x08\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\xb1\x28\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x1c\x1b\x1b\x1b\x0d\x1d\x1b\x1b\x1b\x1b\x08\x0d\x0d\x0d\x1c\x24"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\xb1\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x08\x0d\x0d\x1b\xb2\xb3\x1b\x24\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x28\x1b\x28\xb1\x28\x0d\xbb\x28\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\xba\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x0d\x0c\x08\x1d\x1b\x1b\x0d\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x28\xb1\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x28\x1b\x28\xb7\x28\x0d\x1c\x28\x0d\xbf\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x0d"
  "\x1c\x0d\x1c\x1b\x08\x1b\x28\x1b\x28\x0d\x1c\x28\xb1\x28\x1b\x28"
  "\xb5\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x0d\x81\x08\x80\x07\x1b\x28\x0d\xbd\x28\x0d"
  "\x28\xb1\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x0d\x1b\x0d\x1b\x0d\x1b\x1b\x08\x28\x0d"
  "\x1c\x28\x1b\x28\xb1\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x1b\x0d\x1b\x0d\x0d\x80\x0d\x1c\x0d\x1d\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x08\x28\x0d\x1c\x28\x1b\x28\x1b\x28\xb1\x28\x1b\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1b"
  "\x06\x81\x80\x1b\x0d\x1c\x1b\x1b\x0d\x1b\x0d\x08\x1b\x1b\x24\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\xb5\x28\x1b\x28\x1b\x28\xb1\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x1b\x1b\x2a"
  "\xb6\x1b\x2a\xb7\x1b\x2a\x1b\x1b\x2a\xb3\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x2a\x1b\x1b\x1b\x0d"
  "\x1c\x0d\x0d\x1c\xb5\x1b\x0d\x1c\x0d\x1b\x0d\x1c\x1b\x1b\x1b\x08"
  "\x8b\x1b\x0d\x1c\x1b\x1b\x1b\x1b\x1b\x08\x8c\x1b\x0d\x1c\x1b\x0d"
  "\x1c\x0d\xb4\x1b\x1b\x0d\x1c\xb4\x1b\x1b\x08\x8a\x1b\x0d\x1c\x1b"
  "\x0d\x1c\x0d\x1b\x1b\x0d\x1c\x1b\x1b\x1b\x08\x8a\x1b\x0d\x1b\x2a"
  "\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x1c\x1b\xb1\x0d\x1c"
  "\x1b\x0d\x1c\x1b\x1b\x1b\xb2\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x0d"
  "\x1c\x1b\x0d\x1c\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x08\x14\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x07\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x08\x0d\x1c\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x0d\x0d\x08\x89\x1b\x1b\x2a\x1b"
  "\x0d\x0d\x08\x89\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\xc2"
  "\x02\x02\x0d\xc3\x1b\x1b\x2a\x1b\x2a\x28\x0d\x26\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72"
  "\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x64\x65\x66\x73"
  "\x74\x72\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x22\x53\x74\x72"
  "\x75\x63\x74\x75\x72\x65\x20\x6f\x70\x74\x69\x6f\x6e\x73\x20\x6d"
  "\x75\x73\x74\x20\x62\x65\x20\x61\x20\x6c\x69\x73\x74\x3a\x06\x62"
  "\x65\x67\x69\x6e\x21\x53\x74\x72\x75\x63\x74\x75\x72\x65\x20\x6e"
  "\x61\x6d\x65\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x61\x20\x73\x79"
  "\x6d\x62\x6f\x6c\x3a\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70"
  "\x65\x3f\x1e\x04\x63\x61\x72\x04\x63\x64\x72\x08\x6b\x65\x79\x77"
  "\x6f\x72\x64\x02\x2b\x06\x64\x61\x74\x75\x6d\x04\x0d\x73\x79\x6e"
  "\x74\x61\x78\x2d\x63\x68\x65\x63\x6b\x03\x1e\x63\x61\x70\x74\x75"
  "\x72\x65\x2d\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x03\x13\x63\x6f\x70\x69\x65\x72"
  "\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x73\x04\x06\x65\x72"
  "\x72\x6f\x72\x03\x06\x6c\x69\x73\x74\x3f\x09\x03\x11\x74\x79\x70"
  "\x65\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x73\x0a\x03\x18"
  "\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x2d\x64\x65\x66\x69"
  "\x6e\x69\x74\x69\x6f\x6e\x73\x0b\x03\x15\x61\x63\x63\x65\x73\x73"
  "\x6f\x72\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x73\x0c\x03"
  "\x15\x6d\x6f\x64\x69\x66\x69\x65\x72\x2d\x64\x65\x66\x69\x6e\x69"
  "\x74\x69\x6f\x6e\x73\x0d\x03\x16\x70\x72\x65\x64\x69\x63\x61\x74"
  "\x65\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x73\x0e\x05\x14"
  "\x6d\x61\x6b\x65\x2d\x70\x61\x72\x73\x65\x72\x2d\x63\x6f\x6e\x74"
  "\x65\x78\x74\x0f\x04\x07\x61\x70\x70\x65\x6e\x64\x10\x03\x18\x70"
  "\x61\x72\x73\x65\x2f\x73\x6c\x6f\x74\x2d\x64\x65\x73\x63\x72\x69"
  "\x70\x74\x69\x6f\x6e\x73\x11\x05\x0e\x70\x61\x72\x73\x65\x2f\x6f"
  "\x70\x74\x69\x6f\x6e\x73\x12\x0f\xcd\x01\x40\x81\x89\x02\xcc\x01"
  "\x3e\x81\x8b\x02\xcb\x01\x3c\x81\x8b\x02\xca\x01\x3a\x81\x87\x02"
  "\xc9\x01\x38\x81\x8f\x02\xc8\x01\x36\x81\x8d\x02\xc7\x01\x34\x81"
  "\x8b\x02\xc6\x01\x32\x81\x89\x02\xc5\x01\x30\x81\x87\x02\xc4\x01"
  "\x2e\x81\x87\x02\xc3\x01\x2c\x81\x87\x02\xc2\x01\x2a\x81\x8d\x02"
  "\xc1\x01\x28\x81\x8b\x02\xc0\x01\x26\x81\x89\x02\xbf\x01\x24\x81"
  "\x87\x02\xbe\x01\x22\x81\x85\x02\xbd\x01\x20\x81\x83\x02\xbc\x01"
  "\x1e\x81\x85\x02\xbb\x01\x1c\x81\x85\x02\xba\x01\x1a\x81\x83\x02"
  "\xb9\x01\x18\x81\x87\x02\xb8\x01\x16\x81\x87\x02\xb7\x01\x14\x81"
  "\x87\x02\xb6\x01\x12\x81\x85\x02\xb5\x01\x10\x81\x8d\x02\xb4\x01"
  "\x0e\x81\x8b\x02\xb3\x01\x0c\x81\x89\x02\xb2\x01\x0a\x81\x89\x02"
  "\xb1\x01\x08\x81\x85\x02\xb0\x01\x06\x81\x85\x02\xaf\x01\x04\x84"
  "\x06\x3f\x6b\x13\x02\x07\x72\x65\x63\x6f\x72\x64\x14\x0f\x69\x6e"
  "\x69\x74\x69\x61\x6c\x2d\x6f\x66\x66\x73\x65\x74\x15\x0a\x63\x6f"
  "\x6e\x63\x2d\x6e\x61\x6d\x65\x16\x0c\x63\x6f\x6e\x73\x74\x72\x75"
  "\x63\x74\x6f\x72\x17\x14\x6b\x65\x79\x77\x6f\x72\x64\x2d\x63\x6f"
  "\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x18\x07\x63\x6f\x70\x69\x65"
  "\x72\x19\x0a\x70\x72\x65\x64\x69\x63\x61\x74\x65\x1a\x10\x70\x72"
  "\x69\x6e\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x1b\x17\x70"
  "\x72\x69\x6e\x74\x2d\x65\x6e\x74\x69\x74\x79\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x1c\x05\x74\x79\x70\x65\x1d\x10\x74\x79\x70"
  "\x65\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x1e\x06\x6e\x61"
  "\x6d\x65\x64\x1f\x0f\x73\x61\x66\x65\x2d\x61\x63\x63\x65\x73\x73"
  "\x6f\x72\x73\x20\x11\x6f\x70\x74\x69\x6f\x6e\x2f\x61\x72\x67\x75"
  "\x6d\x65\x6e\x74\x73\x21\x02\x04\x1a\x61\x70\x70\x6c\x79\x2d\x6f"
  "\x70\x74\x69\x6f\x6e\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65"
  "\x72\x73\x22\x04\x0c\x66\x69\x6e\x64\x2d\x6f\x70\x74\x69\x6f\x6e"
  "\x23\x04\x0d\x66\x69\x6e\x64\x2d\x6f\x70\x74\x69\x6f\x6e\x73\x24"
  "\x04\x21\x63\x68\x65\x63\x6b\x2d\x66\x6f\x72\x2d\x64\x75\x70\x6c"
  "\x69\x63\x61\x74\x65\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f"
  "\x72\x73\x25\x04\x1a\x63\x68\x65\x63\x6b\x2d\x66\x6f\x72\x2d\x69"
  "\x6c\x6c\x65\x67\x61\x6c\x2d\x75\x6e\x74\x79\x70\x65\x64\x26\x05"
  "\x1b\x63\x68\x65\x63\x6b\x2d\x66\x6f\x72\x2d\x69\x6c\x6c\x65\x67"
  "\x61\x6c\x2d\x75\x6e\x74\x61\x67\x67\x65\x64\x27\x03\x10\x6f\x70"
  "\x74\x69\x6f\x6e\x2f\x61\x72\x67\x75\x6d\x65\x6e\x74\x28\x04\x10"
  "\x73\x65\x74\x2d\x73\x6c\x6f\x74\x2f\x69\x6e\x64\x65\x78\x21\x29"
  "\x05\x15\x63\x6f\x6d\x70\x75\x74\x65\x2d\x74\x61\x67\x67\x69\x6e"
  "\x67\x2d\x69\x6e\x66\x6f\x2a\x04\x04\x6d\x61\x70\x2b\x03\x17\x64"
  "\x65\x66\x61\x75\x6c\x74\x2d\x70\x72\x65\x64\x69\x63\x61\x74\x65"
  "\x2d\x6e\x61\x6d\x65\x2c\x03\x16\x64\x65\x66\x61\x75\x6c\x74\x2d"
  "\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x74\x65\x78\x74\x2d\x05\x15"
  "\x63\x6f\x6d\x70\x75\x74\x65\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63"
  "\x74\x6f\x72\x73\x2e\x03\x12\x64\x65\x66\x61\x75\x6c\x74\x2d\x63"
  "\x6f\x6e\x63\x2d\x6e\x61\x6d\x65\x2f\x11\x0f\x6d\x61\x6b\x65\x2d"
  "\x73\x74\x72\x75\x63\x74\x75\x72\x65\x30\x10\xf2\x01\x4c\x81\x9b"
  "\x02\xf1\x01\x4a\x81\x9f\x02\xf0\x01\x48\x81\x99\x02\xef\x01\x46"
  "\x81\x97\x02\xee\x01\x44\x81\xa9\x02\xed\x01\x42\x81\xa9\x02\xec"
  "\x01\x40\x81\xa9\x02\xeb\x01\x3e\x81\xa5\x02\xea\x01\x3c\x81\x9b"
  "\x02\xe9\x01\x3a\x81\x87\x02\xe8\x01\x38\x81\x8d\x02\xe7\x01\x36"
  "\x81\x8f\x02\xe6\x01\x34\x81\x91\x02\xe5\x01\x32\x81\x93\x02\xe4"
  "\x01\x30\x81\x95\x02\xe3\x01\x2e\x81\xad\x02\xe2\x01\x2c\x81\xa7"
  "\x02\xe1\x01\x2a\x81\xa5\x02\xe0\x01\x28\x81\x9f\x02\xdf\x01\x26"
  "\x81\x9f\x02\xde\x01\x24\x81\xa3\x02\xdd\x01\x22\x81\xa3\x02\xdc"
  "\x01\x20\x81\xa3\x02\xdb\x01\x1e\x81\x9f\x02\xda\x01\x1c\x81\x9d"
  "\x02\xd9\x01\x1a\x81\x9b\x02\xd8\x01\x18\x81\x99\x02\xd7\x01\x16"
  "\x81\x97\x02\xd6\x01\x14\x81\x95\x02\xd5\x01\x12\x81\x93\x02\xd4"
  "\x01\x10\x81\x91\x02\xd3\x01\x0e\x81\x8f\x02\xd2\x01\x0c\x81\x8d"
  "\x02\xd1\x01\x0a\x81\x8b\x02\xd0\x01\x08\x81\x89\x02\xcf\x01\x06"
  "\x81\x87\x02\xce\x01\x04\x85\x08\x4b\x80\x01\x31\x02\x04\x13\x66"
  "\x69\x6e\x64\x2d\x6d\x61\x74\x63\x68\x69\x6e\x67\x2d\x69\x74\x65"
  "\x6d\x32\x03\x0f\x6f\x70\x74\x69\x6f\x6e\x2f\x6b\x65\x79\x77\x6f"
  "\x72\x64\x33\x03\xf5\x01\x08\x81\x85\x02\xf4\x01\x06\x81\x85\x02"
  "\xf3\x01\x04\x84\x06\x07\x10\x34\x02\x04\x14\x6b\x65\x65\x70\x2d"
  "\x6d\x61\x74\x63\x68\x69\x6e\x67\x2d\x69\x74\x65\x6d\x73\x03\x33"
  "\x03\xf8\x01\x08\x81\x85\x02\xf7\x01\x06\x81\x85\x02\xf6\x01\x04"
  "\x84\x06\x07\x10\x35\x02\x25\x43\x6f\x6e\x66\x6c\x69\x63\x74\x69"
  "\x6e\x67\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x20\x64"
  "\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x73\x3a\x02\x04\x10\x03\x28"
  "\x04\x32\x03\x10\x6f\x70\x74\x69\x6f\x6e\x2f\x6f\x72\x69\x67\x69"
  "\x6e\x61\x6c\x36\x05\x06\x84\x02\x1a\x81\x85\x02\x83\x02\x18\x81"
  "\x87\x02\x82\x02\x16\x81\x85\x02\x81\x02\x14\x81\x83\x02\x80\x02"
  "\x12\x81\x85\x02\xff\x01\x10\x81\x87\x02\xfe\x01\x0e\x81\x89\x02"
  "\xfd\x01\x0c\x81\x85\x02\xfc\x01\x0a\x81\x83\x02\xfb\x01\x08\x81"
  "\x83\x02\xfa\x01\x06\x81\x85\x02\xf9\x01\x04\x84\x06\x19\x2c\x37"
  "\x02\x2e\x53\x74\x72\x75\x63\x74\x75\x72\x65\x20\x6f\x70\x74\x69"
  "\x6f\x6e\x20\x69\x6c\x6c\x65\x67\x61\x6c\x20\x77\x69\x74\x68\x6f"
  "\x75\x74\x20\x54\x59\x50\x45\x20\x6f\x70\x74\x69\x6f\x6e\x3a\x02"
  "\x03\x28\x03\x21\x03\x36\x04\x05\x8a\x02\x0e\x81\x85\x02\x89\x02"
  "\x0c\x81\x83\x02\x88\x02\x0a\x84\x06\x87\x02\x08\x81\x85\x02\x86"
  "\x02\x06\x81\x85\x02\x85\x02\x04\x81\x85\x02\x0d\x1b\x38\x02\x08"
  "\x02\x30\x53\x74\x72\x75\x63\x74\x75\x72\x65\x20\x6f\x70\x74\x69"
  "\x6f\x6e\x20\x69\x6c\x6c\x65\x67\x61\x6c\x20\x66\x6f\x72\x20\x75"
  "\x6e\x6e\x61\x6d\x65\x64\x20\x73\x74\x72\x75\x63\x74\x75\x72\x65"
  "\x3a\x03\x36\x03\x21\x04\x04\x91\x02\x10\x81\x85\x02\x90\x02\x0e"
  "\x81\x87\x02\x8f\x02\x0c\x81\x83\x02\x8e\x02\x0a\x81\x83\x02\x8d"
  "\x02\x08\x81\x85\x02\x8c\x02\x06\x81\x87\x02\x8b\x02\x04\x85\x08"
  "\x0f\x1c\x39\x02\x09\x21\x02\x04\x2b\x04\x07\x64\x65\x6c\x65\x74"
  "\x65\x04\x07\x6d\x65\x6d\x62\x65\x72\x03\x19\x64\x65\x66\x61\x75"
  "\x6c\x74\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x2d\x6e"
  "\x61\x6d\x65\x3a\x05\x97\x02\x0e\x81\x8b\x02\x96\x02\x0c\x81\x8b"
  "\x02\x95\x02\x0a\x81\x89\x02\x94\x02\x08\x81\x87\x02\x93\x02\x06"
  "\x81\x8b\x02\x92\x02\x04\x85\x08\x0d\x1d\x3b\x02\x0a\x03\x12\x64"
  "\x65\x66\x61\x75\x6c\x74\x2d\x74\x79\x70\x65\x2d\x6e\x61\x6d\x65"
  "\x3c\x03\x28\x03\x21\x04\x9c\x02\x0c\x81\x85\x02\x9b\x02\x0a\x81"
  "\x87\x02\x9a\x02\x08\x81\x89\x02\x99\x02\x06\x81\x8b\x02\x98\x02"
  "\x04\x85\x08\x0b\x15\x3d\x02\x0b\x17\x66\x61\x6c\x73\x65\x2d\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x6e\x61\x6d\x65\x73\x3e"
  "\x02\x03\x17\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x63\x6c\x6f"
  "\x73\x75\x72\x65\x2f\x66\x6f\x72\x6d\x03\x13\x73\x79\x6e\x74\x61"
  "\x63\x74\x69\x63\x2d\x63\x6c\x6f\x73\x75\x72\x65\x3f\x03\x0c\x69"
  "\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x3f\x3f\x04\x0e\x74\x68\x65"
  "\x72\x65\x2d\x65\x78\x69\x73\x74\x73\x3f\x03\x1f\x70\x61\x72\x73"
  "\x65\x72\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x75\x73\x65\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x40\x03\x23\x70\x61\x72"
  "\x73\x65\x72\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x63\x6c\x6f\x73"
  "\x69\x6e\x67\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x41"
  "\x06\x0d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x3d\x3f\x08\xa5"
  "\x02\x14\x81\x89\x02\xa4\x02\x12\x81\x87\x02\xa3\x02\x10\x81\x89"
  "\x02\xa2\x02\x0e\x81\x85\x02\xa1\x02\x0c\x81\x87\x02\xa0\x02\x0a"
  "\x81\x87\x02\x9f\x02\x08\x81\x87\x02\x9e\x02\x06\x81\x89\x02\x9d"
  "\x02\x04\x84\x06\x13\x28\x42\x02\x0c\x3e\x02\x04\x05\x6d\x65\x6d"
  "\x71\x43\x02\xa7\x02\x06\x81\x85\x02\xa6\x02\x04\x83\x04\x05\x0e"
  "\x44\x02\x0d\x16\x74\x72\x75\x65\x2d\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x2d\x6e\x61\x6d\x65\x73\x45\x02\x04\x43\x02\xa9\x02"
  "\x06\x81\x85\x02\xa8\x02\x04\x83\x04\x05\x0e\x46\x02\x0e\x03\x21"
  "\x02\xab\x02\x06\x81\x83\x02\xaa\x02\x04\x83\x04\x05\x0c\x47\x02"
  "\x0f\x02\x2d\x03\x14\x70\x61\x72\x73\x65\x72\x2d\x63\x6f\x6e\x74"
  "\x65\x78\x74\x2f\x6e\x61\x6d\x65\x48\x04\x0e\x73\x79\x6d\x62\x6f"
  "\x6c\x2d\x61\x70\x70\x65\x6e\x64\x49\x03\xad\x02\x06\x81\x83\x02"
  "\xac\x02\x04\x83\x04\x05\x0e\x4a\x02\x10\x06\x6d\x61\x6b\x65\x2d"
  "\x03\x48\x04\x49\x03\xaf\x02\x06\x81\x85\x02\xae\x02\x04\x83\x04"
  "\x05\x0e\x4b\x02\x11\x06\x63\x6f\x70\x79\x2d\x03\x48\x04\x49\x03"
  "\xb1\x02\x06\x81\x85\x02\xb0\x02\x04\x83\x04\x05\x0e\x4c\x02\x12"
  "\x02\x3f\x03\x48\x04\x49\x03\xb3\x02\x06\x81\x83\x02\xb2\x02\x04"
  "\x83\x04\x05\x0e\x4d\x02\x13\x19\x73\x74\x61\x6e\x64\x61\x72\x64"
  "\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64"
  "\x06\x71\x75\x6f\x74\x65\x4e\x03\x48\x04\x09\x61\x62\x73\x6f\x6c"
  "\x75\x74\x65\x4f\x03\xb6\x02\x08\x81\x85\x02\xb5\x02\x06\x81\x83"
  "\x02\xb4\x02\x04\x83\x04\x07\x12\x50\x02\x14\x05\x72\x74\x64\x3a"
  "\x03\x48\x04\x49\x03\xb8\x02\x06\x81\x85\x02\xb7\x02\x04\x83\x04"
  "\x05\x0e\x51\x02\x15\x1d\x49\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64"
  "\x20\x73\x74\x72\x75\x63\x74\x75\x72\x65\x20\x6f\x70\x74\x69\x6f"
  "\x6e\x3a\x1c\x44\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x74\x72"
  "\x75\x63\x74\x75\x72\x65\x20\x6f\x70\x74\x69\x6f\x6e\x3a\x1e\x0e"
  "\x6b\x6e\x6f\x77\x6e\x2d\x6f\x70\x74\x69\x6f\x6e\x73\x52\x02\x03"
  "\x09\x04\x05\x61\x73\x73\x71\x53\x04\x32\x05\x04\x05\x0c\x6d\x61"
  "\x6b\x65\x2d\x6f\x70\x74\x69\x6f\x6e\x54\x07\xd9\x02\x44\x81\x85"
  "\x02\xd8\x02\x42\x81\x83\x02\xd7\x02\x40\xfd\xff\x03\xd6\x02\x3e"
  "\x81\x83\x02\xd5\x02\x3c\xfd\xff\x03\xd4\x02\x3a\x81\x87\x02\xd3"
  "\x02\x38\x81\x85\x02\xd2\x02\x36\x81\x85\x02\xd1\x02\x34\xfd\xff"
  "\x03\xd0\x02\x32\x81\x83\x02\xcf\x02\x30\xfd\xff\x03\xce\x02\x2e"
  "\xfd\xff\x03\xcd\x02\x2c\xfd\xff\x03\xcc\x02\x2a\xfd\xff\x03\xcb"
  "\x02\x28\xfd\xff\x03\xca\x02\x26\xfd\xff\x03\xc9\x02\x24\xfd\xff"
  "\x03\xc8\x02\x22\xfd\xff\x03\xc7\x02\x20\xfd\xff\x03\xc6\x02\x1e"
  "\x81\x83\x02\xc5\x02\x1c\xfd\xff\x03\xc4\x02\x1a\x81\x83\x02\xc3"
  "\x02\x18\xfd\xff\x03\xc2\x02\x16\xfd\xff\x03\xc1\x02\x14\xfd\xff"
  "\x03\xc0\x02\x12\xfd\xff\x03\xbf\x02\x10\xff\xff\x03\xbe\x02\x0e"
  "\xfd\xff\x03\xbd\x02\x0c\xfd\xff\x03\xbc\x02\x0a\xfd\xff\x03\xbb"
  "\x02\x08\xfd\xff\x03\xba\x02\x06\xfd\xff\x03\xb9\x02\x04\x84\x06"
  "\x43\x5f\x55\x02\x16\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x02\x52"
  "\x02\x52\x02\x04\x53\x02\xde\x02\x0c\x81\x8b\x02\xdd\x02\x0a\x81"
  "\x8b\x02\xdc\x02\x08\x81\x89\x02\xdb\x02\x06\x81\x8b\x02\xda\x02"
  "\x04\x85\x08\x0b\x17\x56\x02\x17\x03\x07\x6c\x65\x6e\x67\x74\x68"
  "\x57\x02\xe3\x02\x0c\x81\x87\x02\xe2\x02\x0a\x81\x87\x02\xe1\x02"
  "\x08\x81\x85\x02\xe0\x02\x06\x81\x87\x02\xdf\x02\x04\x84\x06\x0b"
  "\x14\x58\x02\x18\x03\x57\x02\xe8\x02\x0c\x81\x89\x02\xe7\x02\x0a"
  "\x81\x89\x02\xe6\x02\x08\x81\x87\x02\xe5\x02\x06\x81\x89\x02\xe4"
  "\x02\x04\x85\x08\x0b\x15\x59\x02\x19\x03\x57\x02\xf2\x02\x16\x81"
  "\x8b\x02\xf1\x02\x14\x81\x8b\x02\xf0\x02\x12\x81\x8b\x02\xef\x02"
  "\x10\x81\x8b\x02\xee\x02\x0e\x81\x8b\x02\xed\x02\x0c\x81\x8b\x02"
  "\xec\x02\x0a\x81\x8b\x02\xeb\x02\x08\x81\x89\x02\xea\x02\x06\x81"
  "\x8b\x02\xe9\x02\x04\x86\x0a\x15\x20\x5a\x02\x1a\x16\x16\x1e\x04"
  "\x16\x6f\x6e\x65\x2d\x72\x65\x71\x75\x69\x72\x65\x64\x2d\x61\x72"
  "\x67\x75\x6d\x65\x6e\x74\x5b\x03\x0e\x66\x61\x6c\x73\x65\x2d\x6d"
  "\x61\x72\x6b\x65\x72\x3f\x5c\x03\xf7\x02\x0c\x81\x83\x02\xf6\x02"
  "\x0a\x81\x83\x02\xf5\x02\x08\x81\x83\x02\xf4\x02\x06\x83\x04\xf3"
  "\x02\x04\x84\x06\x0b\x1b\x5d\x02\x1b\x17\x17\x06\x17\x74\x77\x6f"
  "\x2d\x6f\x70\x74\x69\x6f\x6e\x61\x6c\x2d\x61\x72\x67\x75\x6d\x65"
  "\x6e\x74\x73\x5e\x03\x3a\x04\x12\x66\x61\x6c\x73\x65\x2d\x65\x78"
  "\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f\x5f\x03\x3f\x03\x11\x6d\x69"
  "\x74\x2d\x6c\x61\x6d\x62\x64\x61\x2d\x6c\x69\x73\x74\x3f\x06\x80"
  "\x03\x14\x81\x85\x02\xff\x02\x12\x81\x85\x02\xfe\x02\x10\x81\x85"
  "\x02\xfd\x02\x0e\x81\x85\x02\xfc\x02\x0c\x81\x83\x02\xfb\x02\x0a"
  "\x84\x06\xfa\x02\x08\x81\x85\x02\xf9\x02\x06\x81\x83\x02\xf8\x02"
  "\x04\x84\x06\x13\x24\x60\x02\x1c\x18\x05\x16\x6f\x6e\x65\x2d\x6f"
  "\x70\x74\x69\x6f\x6e\x61\x6c\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74"
  "\x61\x03\x3a\x03\x3f\x04\x85\x03\x0c\x81\x83\x02\x84\x03\x0a\x81"
  "\x83\x02\x83\x03\x08\x83\x04\x82\x03\x06\x81\x83\x02\x81\x03\x04"
  "\x84\x06\x0b\x17\x62\x02\x1d\x19\x19\x05\x61\x03\x14\x64\x65\x66"
  "\x61\x75\x6c\x74\x2d\x63\x6f\x70\x69\x65\x72\x2d\x6e\x61\x6d\x65"
  "\x63\x04\x5f\x03\x3f\x05\x8b\x03\x0e\x81\x85\x02\x8a\x03\x0c\x81"
  "\x85\x02\x89\x03\x0a\x81\x83\x02\x88\x03\x08\x81\x85\x02\x87\x03"
  "\x06\x81\x83\x02\x86\x03\x04\x84\x06\x0d\x1c\x64\x02\x1e\x1a\x1a"
  "\x05\x61\x03\x2c\x04\x5f\x03\x3f\x05\x91\x03\x0e\x81\x85\x02\x90"
  "\x03\x0c\x81\x85\x02\x8f\x03\x0a\x81\x83\x02\x8e\x03\x08\x81\x85"
  "\x02\x8d\x03\x06\x81\x83\x02\x8c\x03\x04\x84\x06\x0d\x1c\x65\x02"
  "\x1f\x1b\x04\x5b\x04\x5f\x03\x94\x03\x08\x81\x85\x02\x93\x03\x06"
  "\x81\x85\x02\x92\x03\x04\x84\x06\x07\x11\x66\x02\x20\x1c\x04\x5b"
  "\x04\x5f\x03\x97\x03\x08\x81\x85\x02\x96\x03\x06\x81\x85\x02\x95"
  "\x03\x04\x84\x06\x07\x11\x67\x02\x21\x1d\x07\x76\x65\x63\x74\x6f"
  "\x72\x68\x05\x6c\x69\x73\x74\x69\x04\x5b\x04\x43\x03\x9a\x03\x08"
  "\x81\x83\x02\x99\x03\x06\x83\x04\x98\x03\x04\x84\x06\x07\x12\x6a"
  "\x02\x22\x1e\x04\x5b\x03\x3f\x03\x9d\x03\x08\x81\x83\x02\x9c\x03"
  "\x06\x83\x04\x9b\x03\x04\x84\x06\x07\x11\x3f\x02\x23\x1f\x1f\x05"
  "\x61\x04\x5f\x03\xa1\x03\x0a\x81\x85\x02\xa0\x03\x08\x81\x85\x02"
  "\x9f\x03\x06\x82\x02\x9e\x03\x04\x84\x06\x09\x14\x6b\x02\x24\x20"
  "\x20\x05\x61\x03\x0d\x74\x72\x75\x65\x2d\x6d\x61\x72\x6b\x65\x72"
  "\x3f\x6c\x03\x5c\x04\xa6\x03\x0c\x81\x83\x02\xa5\x03\x0a\x81\x83"
  "\x02\xa4\x03\x08\x83\x04\xa3\x03\x06\x82\x02\xa2\x03\x04\x84\x06"
  "\x0b\x17\x6d\x02\x25\x15\x04\x5b\x03\x1b\x65\x78\x61\x63\x74\x2d"
  "\x6e\x6f\x6e\x6e\x65\x67\x61\x74\x69\x76\x65\x2d\x69\x6e\x74\x65"
  "\x67\x65\x72\x3f\x03\xa9\x03\x08\x81\x83\x02\xa8\x03\x06\x83\x04"
  "\xa7\x03\x04\x84\x06\x07\x11\x6e\x02\x26\x2f\x53\x74\x72\x75\x63"
  "\x74\x75\x72\x65\x20\x73\x6c\x6f\x74\x73\x20\x6d\x75\x73\x74\x20"
  "\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x64\x75\x70\x6c\x69\x63\x61"
  "\x74\x65\x20\x6e\x61\x6d\x65\x73\x3a\x04\x63\x61\x72\x6f\x02\x04"
  "\x2b\x03\x17\x70\x61\x72\x73\x65\x2f\x73\x6c\x6f\x74\x2d\x64\x65"
  "\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x70\x03\x0a\x73\x6c\x6f\x74"
  "\x2f\x6e\x61\x6d\x65\x71\x05\x04\x32\x06\xbc\x03\x28\x81\x85\x02"
  "\xbb\x03\x26\x81\x87\x02\xba\x03\x24\x81\x85\x02\xb9\x03\x22\x81"
  "\x87\x02\xb8\x03\x20\x81\x89\x02\xb7\x03\x1e\x81\x87\x02\xb6\x03"
  "\x1c\x81\x87\x02\xb5\x03\x1a\x81\x87\x02\xb4\x03\x18\x81\x83\x02"
  "\xb3\x03\x16\x81\x83\x02\xb2\x03\x14\x81\x83\x02\xb1\x03\x12\x81"
  "\x83\x02\xb0\x03\x10\x81\x83\x02\xaf\x03\x0e\x81\x8b\x02\xae\x03"
  "\x0c\x81\x8b\x02\xad\x03\x0a\x81\x85\x02\xac\x03\x08\x83\x04\xab"
  "\x03\x06\x81\x83\x02\xaa\x03\x04\x83\x04\x27\x3b\x32\x02\x27\x24"
  "\x55\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x73\x74\x72"
  "\x75\x63\x74\x75\x72\x65\x20\x73\x6c\x6f\x74\x20\x6f\x70\x74\x69"
  "\x6f\x6e\x3a\x0a\x72\x65\x61\x64\x2d\x6f\x6e\x6c\x79\x1d\x17\x44"
  "\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x6c\x6f\x74\x20\x6f\x70"
  "\x74\x69\x6f\x6e\x3a\x1e\x15\x49\x6c\x6c\x65\x67\x61\x6c\x20\x73"
  "\x6c\x6f\x74\x20\x6f\x70\x74\x69\x6f\x6e\x3a\x1e\x4d\x69\x73\x73"
  "\x69\x6e\x67\x20\x73\x6c\x6f\x74\x20\x6f\x70\x74\x69\x6f\x6e\x20"
  "\x61\x72\x67\x75\x6d\x65\x6e\x74\x3a\x27\x53\x74\x72\x75\x63\x74"
  "\x75\x72\x65\x20\x73\x6c\x6f\x74\x20\x6f\x70\x74\x69\x6f\x6e\x73"
  "\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x61\x20\x6c\x69\x73\x74\x3a"
  "\x03\x09\x04\x05\x04\x53\x06\x0a\x6d\x61\x6b\x65\x2d\x73\x6c\x6f"
  "\x74\x53\x03\x6c\x03\x5c\x08\xdd\x03\x44\x81\x87\x02\xdc\x03\x42"
  "\x81\x89\x02\xdb\x03\x40\x81\x91\x02\xda\x03\x3e\x81\x91\x02\xd9"
  "\x03\x3c\x81\x91\x02\xd8\x03\x3a\x81\x87\x02\xd7\x03\x38\x81\x89"
  "\x02\xd6\x03\x36\x81\x87\x02\xd5\x03\x34\x81\x83\x02\xd4\x03\x32"
  "\x81\x89\x02\xd3\x03\x30\x81\x89\x02\xd2\x03\x2e\x81\x89\x02\xd1"
  "\x03\x2c\x81\x93\x02\xd0\x03\x2a\x81\x95\x02\xcf\x03\x28\x81\x93"
  "\x02\xce\x03\x26\x81\x93\x02\xcd\x03\x24\x81\x91\x02\xcc\x03\x22"
  "\x81\x8f\x02\xcb\x03\x20\x81\x91\x02\xca\x03\x1e\x81\x87\x02\xc9"
  "\x03\x1c\x81\x87\x02\xc8\x03\x1a\x81\x85\x02\xc7\x03\x18\x81\x85"
  "\x02\xc6\x03\x16\x85\x08\xc5\x03\x14\x81\x85\x02\xc4\x03\x12\x81"
  "\x83\x02\xc3\x03\x10\x81\x87\x02\xc2\x03\x0e\x81\x85\x02\xc1\x03"
  "\x0c\x81\x85\x02\xc0\x03\x0a\x81\x83\x02\xbf\x03\x08\x81\x83\x02"
  "\xbe\x03\x06\x81\x83\x02\xbd\x03\x04\x83\x04\x43\x64\x09\x02\x28"
  "\x14\x03\x18\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x70\x68\x79"
  "\x73\x69\x63\x61\x6c\x2d\x74\x79\x70\x65\x02\xdf\x03\x06\x81\x83"
  "\x02\xde\x03\x04\x83\x04\x05\x0d\x72\x02\x29\x07\x61\x63\x63\x65"
  "\x73\x73\x1a\x73\x79\x73\x74\x65\x6d\x2d\x67\x6c\x6f\x62\x61\x6c"
  "\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x03\x41\x04\x0d"
  "\x63\x6c\x6f\x73\x65\x2d\x73\x79\x6e\x74\x61\x78\x73\x03\xe1\x03"
  "\x06\x81\x85\x02\xe0\x03\x04\x84\x06\x05\x10\x74\x02\x2a\x03\x40"
  "\x04\x73\x03\xe3\x03\x06\x81\x85\x02\xe2\x03\x04\x84\x06\x05\x0d"
  "\x75\x02\x2b\x09\x6c\x69\x73\x74\x2d\x72\x65\x66\x0b\x76\x65\x63"
  "\x74\x6f\x72\x2d\x72\x65\x66\x76\x0c\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x72\x65\x66\x77\x12\x64\x65\x66\x69\x6e\x65\x2d\x69\x6e\x74"
  "\x65\x67\x72\x61\x62\x6c\x65\x78\x02\x1f\x64\x65\x66\x69\x6e\x65"
  "\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x6c\x69\x73\x74\x2d"
  "\x61\x63\x63\x65\x73\x73\x6f\x72\x69\x21\x64\x65\x66\x69\x6e\x65"
  "\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x76\x65\x63\x74\x6f"
  "\x72\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x68\x10\x72\x65\x63\x6f"
  "\x72\x64\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x79\x14\x07\x64\x65"
  "\x66\x69\x6e\x65\x7a\x0a\x73\x74\x72\x75\x63\x74\x75\x72\x65\x7b"
  "\x4e\x03\x12\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x63\x6f\x6e"
  "\x74\x65\x78\x74\x7c\x03\x10\x73\x74\x72\x75\x63\x74\x75\x72\x65"
  "\x2f\x73\x6c\x6f\x74\x73\x7d\x03\x71\x04\x2b\x03\x14\x73\x74\x72"
  "\x75\x63\x74\x75\x72\x65\x2f\x63\x6f\x6e\x63\x2d\x6e\x61\x6d\x65"
  "\x7e\x04\x49\x03\x1a\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x73"
  "\x61\x66\x65\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x73\x3f\x7f\x03"
  "\x0b\x73\x6c\x6f\x74\x2f\x69\x6e\x64\x65\x78\x80\x01\x03\x1a\x73"
  "\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x74\x79\x70\x65\x2d\x64\x65"
  "\x73\x63\x72\x69\x70\x74\x6f\x72\x81\x01\x03\x04\x06\x63\x6c\x6f"
  "\x73\x65\x82\x01\x04\x4f\x0d\xf2\x03\x20\x81\x8f\x02\xf1\x03\x1e"
  "\x81\x8b\x02\xf0\x03\x1c\x81\x8f\x02\xef\x03\x1a\x81\x8b\x02\xee"
  "\x03\x18\x81\x89\x02\xed\x03\x16\x81\x8d\x02\xec\x03\x14\x81\x89"
  "\x02\xeb\x03\x12\x81\x89\x02\xea\x03\x10\x81\x87\x02\xe9\x03\x0e"
  "\x81\x89\x02\xe8\x03\x0c\x81\x85\x02\xe7\x03\x0a\x81\x85\x02\xe6"
  "\x03\x08\x81\x85\x02\xe5\x03\x06\x81\x83\x02\xe4\x03\x04\x83\x04"
  "\x1f\x4a\x83\x01\x02\x2c\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x0d"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x0c\x76\x65\x63"
  "\x74\x6f\x72\x2d\x73\x65\x74\x21\x0a\x6c\x69\x73\x74\x2d\x74\x61"
  "\x69\x6c\x1f\x64\x65\x66\x69\x6e\x65\x2d\x73\x74\x72\x75\x63\x74"
  "\x75\x72\x65\x2f\x6c\x69\x73\x74\x2d\x6d\x6f\x64\x69\x66\x69\x65"
  "\x72\x21\x64\x65\x66\x69\x6e\x65\x2d\x73\x74\x72\x75\x63\x74\x75"
  "\x72\x65\x2f\x76\x65\x63\x74\x6f\x72\x2d\x6d\x6f\x64\x69\x66\x69"
  "\x65\x72\x10\x72\x65\x63\x6f\x72\x64\x2d\x6d\x6f\x64\x69\x66\x69"
  "\x65\x72\x84\x01\x7a\x78\x7b\x06\x76\x61\x6c\x75\x65\x02\x69\x68"
  "\x14\x4e\x02\x21\x05\x73\x65\x74\x2d\x10\x73\x6c\x6f\x74\x2f\x72"
  "\x65\x61\x64\x2d\x6f\x6e\x6c\x79\x3f\x7b\x02\x03\x7c\x03\x7d\x03"
  "\x71\x04\x2b\x04\x16\x64\x65\x6c\x65\x74\x65\x2d\x6d\x61\x74\x63"
  "\x68\x69\x6e\x67\x2d\x69\x74\x65\x6d\x73\x03\x7e\x03\x7f\x05\x49"
  "\x06\x49\x03\x03\x81\x01\x04\x82\x01\x03\x80\x01\x04\x4f\x0f\x88"
  "\x04\x2e\x81\x8d\x02\x87\x04\x2c\x81\x8b\x02\x86\x04\x2a\x81\x8b"
  "\x02\x85\x04\x28\x81\x8b\x02\x84\x04\x26\x81\x8f\x02\x83\x04\x24"
  "\x81\x8b\x02\x82\x04\x22\x81\x89\x02\x81\x04\x20\x81\x8d\x02\x80"
  "\x04\x1e\x81\x8d\x02\xff\x03\x1c\x81\x8d\x02\xfe\x03\x1a\x81\x8d"
  "\x02\xfd\x03\x18\x81\x89\x02\xfc\x03\x16\x81\x89\x02\xfb\x03\x14"
  "\x81\x89\x02\xfa\x03\x12\x81\x87\x02\xf9\x03\x10\x81\x85\x02\xf8"
  "\x03\x0e\x81\x89\x02\xf7\x03\x0c\x81\x85\x02\xf6\x03\x0a\x81\x85"
  "\x02\xf5\x03\x08\x81\x87\x02\xf4\x03\x06\x81\x83\x02\xf3\x03\x04"
  "\x83\x04\x2d\x62\x78\x02\x2d\x7a\x25\x64\x65\x66\x69\x6e\x65\x2d"
  "\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x6b\x65\x79\x77\x6f\x72"
  "\x64\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x1b\x72\x65"
  "\x63\x6f\x72\x64\x2d\x6b\x65\x79\x77\x6f\x72\x64\x2d\x63\x6f\x6e"
  "\x73\x74\x72\x75\x63\x74\x6f\x72\x14\x71\x02\x03\x17\x73\x74\x72"
  "\x75\x63\x74\x75\x72\x65\x2f\x63\x6f\x6e\x73\x74\x72\x75\x63\x74"
  "\x6f\x72\x73\x49\x03\x7c\x04\x2b\x04\x10\x03\x05\x1b\x63\x6f\x6e"
  "\x73\x74\x72\x75\x63\x74\x6f\x72\x2d\x64\x65\x66\x69\x6e\x69\x74"
  "\x69\x6f\x6e\x2f\x62\x6f\x61\x03\x7d\x03\x81\x01\x04\x4f\x03\x1f"
  "\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x6b\x65\x79\x77\x6f\x72"
  "\x64\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x73\x04\x82"
  "\x01\x0c\x9c\x04\x2a\x81\x85\x02\x9b\x04\x28\x81\x85\x02\x9a\x04"
  "\x26\x81\x85\x02\x99\x04\x24\x81\x89\x02\x98\x04\x22\x81\x85\x02"
  "\x97\x04\x20\x81\x8b\x02\x96\x04\x1e\x81\x89\x02\x95\x04\x1c\x81"
  "\x87\x02\x94\x04\x1a\x81\x83\x02\x93\x04\x18\x81\x89\x02\x92\x04"
  "\x16\x81\x89\x02\x91\x04\x14\x81\x89\x02\x90\x04\x12\x81\x89\x02"
  "\x8f\x04\x10\x81\x85\x02\x8e\x04\x0e\x81\x87\x02\x8d\x04\x0c\x81"
  "\x87\x02\x8c\x04\x0a\x81\x85\x02\x8b\x04\x08\x81\x85\x02\x8a\x04"
  "\x06\x81\x83\x02\x89\x04\x04\x83\x04\x29\x4c\x85\x01\x02\x2e\x03"
  "\x69\x66\x10\x64\x65\x66\x61\x75\x6c\x74\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x3f\x1e\x4e\x6f\x74\x20\x61\x20\x64\x65\x66\x69\x6e\x65\x64"
  "\x20\x73\x74\x72\x75\x63\x74\x75\x72\x65\x20\x73\x6c\x6f\x74\x3a"
  "\x02\x69\x68\x08\x25\x72\x65\x63\x6f\x72\x64\x14\x06\x11\x6d\x61"
  "\x6b\x65\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x86\x01"
  "\x03\x7c\x03\x16\x70\x61\x72\x73\x65\x2d\x6d\x69\x74\x2d\x6c\x61"
  "\x6d\x62\x64\x61\x2d\x6c\x69\x73\x74\x03\x03\x12\x73\x74\x72\x75"
  "\x63\x74\x75\x72\x65\x2f\x74\x61\x67\x67\x65\x64\x3f\x87\x01\x03"
  "\x11\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x6f\x66\x66\x73\x65"
  "\x74\x88\x01\x04\x2b\x04\x4f\x04\x10\x04\x0a\x6d\x61\x6b\x65\x2d"
  "\x6c\x69\x73\x74\x03\x7d\x04\x04\x0b\x73\x6c\x6f\x74\x2d\x61\x73"
  "\x73\x6f\x63\x10\x04\x13\x64\x65\x66\x61\x75\x6c\x74\x2d\x76\x61"
  "\x6c\x75\x65\x2d\x65\x78\x70\x72\x03\x71\x04\x43\x11\xb5\x04\x34"
  "\x81\x89\x02\xb4\x04\x32\x81\x89\x02\xb3\x04\x30\x81\x87\x02\xb2"
  "\x04\x2e\x81\x85\x02\xb1\x04\x2c\x81\x8f\x02\xb0\x04\x2a\x81\x85"
  "\x02\xaf\x04\x28\x81\x8d\x02\xae\x04\x26\x81\x8f\x02\xad\x04\x24"
  "\x81\x87\x02\xac\x04\x22\x81\x85\x02\xab\x04\x20\x81\x8b\x02\xaa"
  "\x04\x1e\x81\x85\x02\xa9\x04\x1c\x81\x91\x02\xa8\x04\x1a\x81\x8d"
  "\x02\xa7\x04\x18\x81\x8b\x02\xa6\x04\x16\x81\x8d\x02\xa5\x04\x14"
  "\x81\x89\x02\xa4\x04\x12\x81\x8f\x02\xa3\x04\x10\x81\x89\x02\xa2"
  "\x04\x0e\x81\x8b\x02\xa1\x04\x0c\x81\x89\x02\xa0\x04\x0a\x81\x87"
  "\x02\x9f\x04\x08\x81\x85\x02\x9e\x04\x06\x81\x85\x02\x9d\x04\x04"
  "\x85\x08\x33\x60\x43\x02\x2f\x0d\x6e\x61\x6d\x65\x64\x2d\x6c\x61"
  "\x6d\x62\x64\x61\x04\x6c\x65\x74\x04\x74\x61\x67\x89\x01\x19\x72"
  "\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61"
  "\x74\x63\x68\x2d\x74\x61\x67\x8a\x01\x7a\x14\x03\x7c\x03\x19\x73"
  "\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x74\x61\x67\x2d\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x8b\x01\x03\x04\x82\x01\x03\x04\x4f"
  "\x04\x73\x08\xc0\x04\x18\x81\x87\x02\xbf\x04\x16\x81\x85\x02\xbe"
  "\x04\x14\x81\x8f\x02\xbd\x04\x12\x81\x85\x02\xbc\x04\x10\x81\x8d"
  "\x02\xbb\x04\x0e\x81\x8d\x02\xba\x04\x0c\x81\x8d\x02\xb9\x04\x0a"
  "\x81\x8f\x02\xb8\x04\x08\x81\x8b\x02\xb7\x04\x06\x81\x89\x02\xb6"
  "\x04\x04\x86\x0a\x17\x30\x73\x02\x30\x23\x72\x65\x63\x6f\x72\x64"
  "\x2d\x74\x79\x70\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x76\x61"
  "\x6c\x75\x65\x2d\x62\x79\x2d\x69\x6e\x64\x65\x78\x28\x64\x65\x66"
  "\x69\x6e\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x64\x65"
  "\x66\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75\x65\x2d\x62\x79\x2d\x69"
  "\x6e\x64\x65\x78\x14\x03\x0d\x73\x6c\x6f\x74\x2f\x64\x65\x66\x61"
  "\x75\x6c\x74\x03\x19\x73\x74\x72\x69\x70\x2d\x73\x79\x6e\x74\x61"
  "\x63\x74\x69\x63\x2d\x63\x6c\x6f\x73\x75\x72\x65\x73\x03\x03\x7c"
  "\x03\x87\x01\x03\x80\x01\x03\x81\x01\x03\x88\x01\x04\x4f\x04\x82"
  "\x01\x0b\xce\x04\x1e\x81\x8b\x02\xcd\x04\x1c\x81\x8f\x02\xcc\x04"
  "\x1a\x81\x8b\x02\xcb\x04\x18\x81\x8b\x02\xca\x04\x16\x81\x89\x02"
  "\xc9\x04\x14\x81\x8b\x02\xc8\x04\x12\x81\x89\x02\xc7\x04\x10\x81"
  "\x89\x02\xc6\x04\x0e\x81\x8b\x02\xc5\x04\x0c\x81\x8d\x02\xc4\x04"
  "\x0a\x81\x87\x02\xc3\x04\x08\x81\x87\x02\xc2\x04\x06\x81\x85\x02"
  "\xc1\x04\x04\x84\x06\x1d\x3c\x8c\x01\x02\x31\x02\x0a\x6c\x69\x73"
  "\x74\x2d\x63\x6f\x70\x79\x69\x0c\x76\x65\x63\x74\x6f\x72\x2d\x63"
  "\x6f\x70\x79\x68\x0c\x63\x6f\x70\x79\x2d\x72\x65\x63\x6f\x72\x64"
  "\x14\x7a\x03\x11\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x63\x6f"
  "\x70\x69\x65\x72\x8d\x01\x03\x7c\x03\x04\x4f\x05\xd3\x04\x0c\x81"
  "\x89\x02\xd2\x04\x0a\x81\x87\x02\xd1\x04\x08\x81\x85\x02\xd0\x04"
  "\x06\x81\x83\x02\xcf\x04\x04\x83\x04\x0b\x20\x8e\x01\x02\x32\x8a"
  "\x01\x08\x64\x65\x63\x6c\x61\x72\x65\x17\x69\x67\x6e\x6f\x72\x65"
  "\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x73"
  "\x04\x73\x65\x74\x09\x25\x72\x65\x63\x6f\x72\x64\x3f\x08\x76\x65"
  "\x63\x74\x6f\x72\x3f\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x04\x6e\x6f\x74\x06\x7a\x65\x72\x6f\x3f\x7a\x04"
  "\x61\x6e\x64\x77\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x06\x70\x61\x69\x72\x3f\x04\x65\x71\x3f\x8a\x01\x07\x6f"
  "\x62\x6a\x65\x63\x74\x02\x6f\x69\x76\x68\x89\x01\x14\x03\x14\x73"
  "\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x70\x72\x65\x64\x69\x63\x61"
  "\x74\x65\x89\x01\x03\x7c\x03\x8b\x01\x03\x04\x82\x01\x03\x1a\x6d"
  "\x61\x6b\x65\x2d\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x2d\x69\x64"
  "\x65\x6e\x74\x69\x66\x69\x65\x72\x04\x4f\x08\xec\x04\x34\x81\x8d"
  "\x02\xeb\x04\x32\x81\x8d\x02\xea\x04\x30\x81\x8d\x02\xe9\x04\x2e"
  "\x81\x8f\x02\xe8\x04\x2c\x81\x8f\x02\xe7\x04\x2a\x81\x8d\x02\xe6"
  "\x04\x28\x81\x8d\x02\xe5\x04\x26\x81\x8f\x02\xe4\x04\x24\x81\x8d"
  "\x02\xe3\x04\x22\x81\x8f\x02\xe2\x04\x20\x81\x8d\x02\xe1\x04\x1e"
  "\x81\x8d\x02\xe0\x04\x1c\x81\x8d\x02\xdf\x04\x1a\x81\x8b\x02\xde"
  "\x04\x18\x81\x8d\x02\xdd\x04\x16\x81\x8d\x02\xdc\x04\x14\x81\x8b"
  "\x02\xdb\x04\x12\x81\x8b\x02\xda\x04\x10\x81\x8b\x02\xd9\x04\x0e"
  "\x81\x89\x02\xd8\x04\x0c\x81\x8b\x02\xd7\x04\x0a\x81\x87\x02\xd6"
  "\x04\x08\x81\x85\x02\xd5\x04\x06\x81\x83\x02\xd4\x04\x04\x83\x04"
  "\x33\x5e\x77\x02\x33\x1b\x6d\x61\x6b\x65\x2d\x64\x65\x66\x69\x6e"
  "\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x74\x79\x70\x65"
  "\x68\x7a\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74"
  "\x79\x70\x65\x7a\x4e\x69\x07\x6c\x61\x6d\x62\x64\x61\x14\x25\x6e"
  "\x61\x6d\x65\x64\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x73"
  "\x65\x74\x2d\x74\x61\x67\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69"
  "\x6f\x6e\x21\x71\x80\x01\x03\x03\x21\x73\x74\x72\x75\x63\x74\x75"
  "\x72\x65\x2f\x70\x72\x69\x6e\x74\x2d\x65\x6e\x74\x69\x74\x79\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x76\x03\x1a\x73\x74\x72\x75"
  "\x63\x74\x75\x72\x65\x2f\x70\x72\x69\x6e\x74\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x6f\x03\x7c\x03\x7d\x03\x8b\x01\x03\x81\x01"
  "\x04\x2b\x03\x03\x48\x03\x5c\x03\x04\x82\x01\x03\x0f\x73\x79\x6d"
  "\x62\x6f\x6c\x2d\x3e\x73\x74\x72\x69\x6e\x67\x04\x4f\x03\x87\x01"
  "\x03\x57\x03\x88\x01\x03\x0d\x6c\x69\x73\x74\x2d\x3e\x76\x65\x63"
  "\x74\x6f\x72\x13\x92\x05\x4e\x81\x99\x02\x91\x05\x4c\x81\x99\x02"
  "\x90\x05\x4a\x81\x9b\x02\x8f\x05\x48\x81\x99\x02\x8e\x05\x46\x81"
  "\x9f\x02\x8d\x05\x44\x81\x99\x02\x8c\x05\x42\x81\x9b\x02\x8b\x05"
  "\x40\x81\x99\x02\x8a\x05\x3e\x81\x9b\x02\x89\x05\x3c\x81\x99\x02"
  "\x88\x05\x3a\x81\x99\x02\x87\x05\x38\x81\x9b\x02\x86\x05\x36\x81"
  "\x99\x02\x85\x05\x34\x81\x99\x02\x84\x05\x32\x81\x99\x02\x83\x05"
  "\x30\x81\x99\x02\x82\x05\x2e\x81\x97\x02\x81\x05\x2c\x81\x97\x02"
  "\x80\x05\x2a\x81\x87\x02\xff\x04\x28\x81\x97\x02\xfe\x04\x26\x81"
  "\x97\x02\xfd\x04\x24\x81\x95\x02\xfc\x04\x22\x81\x87\x02\xfb\x04"
  "\x20\x81\x95\x02\xfa\x04\x1e\x81\x93\x02\xf9\x04\x1c\x81\x97\x02"
  "\xf8\x04\x1a\x81\x85\x02\xf7\x04\x18\x81\x91\x02\xf6\x04\x16\x81"
  "\x85\x02\xf5\x04\x14\x81\x95\x02\xf4\x04\x12\x81\x8f\x02\xf3\x04"
  "\x10\x81\x8d\x02\xf2\x04\x0e\x81\x8b\x02\xf1\x04\x0c\x81\x89\x02"
  "\xf0\x04\x0a\x81\x87\x02\xef\x04\x08\x81\x85\x02\xee\x04\x06\x81"
  "\x83\x02\xed\x04\x04\x83\x04\x4d\x85\x01\x69\x33\x68\x68\x69\x04"
  "\x0a\x0e\x77\x04\x8e\x01\x04\x8c\x01\x04\x86\x01\x73\x04\x43\x04"
  "\x0b\x85\x01\x04\x0d\x78\x04\x0c\x83\x01\x04\x82\x01\x75\x04\x10"
  "\x4f\x74\x04\x29\x80\x01\x7b\x06\x69\x6e\x64\x65\x78\x8e\x01\x0a"
  "\x73\x6c\x6f\x74\x2f\x74\x79\x70\x65\x0b\x72\x65\x61\x64\x2d\x6f"
  "\x6e\x6c\x79\x3f\x8c\x01\x71\x08\x64\x65\x66\x61\x75\x6c\x74\x86"
  "\x01\x06\x73\x6c\x6f\x74\x3f\x53\x05\x6e\x61\x6d\x65\x85\x01\x86"
  "\x01\x1d\x8c\x01\x36\x07\x3c\x73\x6c\x6f\x74\x3e\x83\x01\x85\x01"
  "\x86\x01\x1d\x8c\x01\x8e\x01\x21\x09\x6f\x72\x69\x67\x69\x6e\x61"
  "\x6c\x8e\x01\x33\x0a\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x8c\x01"
  "\x08\x6f\x70\x74\x69\x6f\x6e\x3f\x54\x41\x09\x3c\x6f\x70\x74\x69"
  "\x6f\x6e\x3e\x86\x01\x8c\x01\x8e\x01\x40\x14\x63\x6c\x6f\x73\x69"
  "\x6e\x67\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x8e\x01"
  "\x48\x10\x75\x73\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x8c\x01\x10\x70\x61\x72\x73\x65\x72\x2d\x63\x6f\x6e\x74\x65"
  "\x78\x74\x3f\x85\x01\x0f\x11\x3c\x70\x61\x72\x73\x65\x72\x2d\x63"
  "\x6f\x6e\x74\x65\x78\x74\x3e\x82\x01\x85\x01\x8c\x01\x8e\x01\x7d"
  "\x17\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x72\x65\x63\x6f\x72"
  "\x64\x2d\x74\x79\x70\x65\x3f\x72\x04\x88\x01\x06\x73\x6c\x6f\x74"
  "\x73\x8e\x01\x7f\x07\x6f\x66\x66\x73\x65\x74\x8c\x01\x8b\x01\x10"
  "\x73\x61\x66\x65\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x73\x3f\x8b"
  "\x01\x81\x01\x0f\x74\x61\x67\x2d\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x88\x01\x87\x01\x07\x6e\x61\x6d\x65\x64\x3f\x87\x01\x76"
  "\x0e\x70\x68\x79\x73\x69\x63\x61\x6c\x2d\x74\x79\x70\x65\x85\x01"
  "\x6f\x89\x01\x8d\x01\x49\x15\x6b\x65\x79\x77\x6f\x72\x64\x2d\x63"
  "\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x73\x8d\x01\x7e\x0d\x63"
  "\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x73\x89\x01\x7c\x0b\x73"
  "\x74\x72\x75\x63\x74\x75\x72\x65\x3f\x08\x63\x6f\x6e\x74\x65\x78"
  "\x74\x81\x01\x30\x0c\x3c\x73\x74\x72\x75\x63\x74\x75\x72\x65\x3e"
  "\x80\x01\x81\x01\x16\x89\x01\x8d\x01\x19\x1a\x1b\x1c\x85\x01\x87"
  "\x01\x1e\x88\x01\x8b\x01\x8c\x01\x8e\x01\x0f\x70\x09\x04\x11\x32"
  "\x04\x15\x6e\x04\x20\x6d\x04\x1f\x6b\x04\x1e\x3f\x04\x1d\x6a\x04"
  "\x1c\x67\x04\x1b\x66\x04\x1a\x65\x04\x19\x64\x04\x18\x62\x04\x17"
  "\x60\x04\x16\x5d\x04\x5e\x5a\x04\x61\x59\x04\x5b\x58\x04\x52\x0e"
  "\x64\x65\x66\x69\x6e\x65\x2d\x6f\x70\x74\x69\x6f\x6e\x8e\x01\x56"
  "\x04\x22\x55\x04\x3c\x51\x04\x2d\x50\x04\x2c\x4d\x04\x63\x4c\x04"
  "\x3a\x4b\x04\x2f\x4a\x04\x28\x47\x04\x45\x05\x74\x72\x75\x65\x02"
  "\x74\x6c\x46\x04\x3e\x06\x66\x61\x6c\x73\x65\x04\x6e\x69\x6c\x5c"
  "\x44\x04\x5f\x42\x04\x2a\x3d\x04\x2e\x3b\x04\x27\x39\x04\x26\x38"
  "\x0a\x25\x37\x04\x24\x35\x04\x23\x34\x04\x1a\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d"
  "\x74\x79\x70\x65\x33\x10\x11\x64\x65\x66\x69\x6e\x65\x2d\x73\x74"
  "\x72\x75\x63\x74\x75\x72\x65\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x12\x31\x04\x13\x04\x04\x1f\x73"
  "\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72"
  "\x6d\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72\x02\x80\x01"
  "\x82\x01\x86\x01\x83\x01\x71\x8a\x01\x07\x05\x8e\x01\x04\x7a\x04"
  "\x13\x72\x65\x63\x6f\x72\x64\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63"
  "\x74\x6f\x72\x03\x11\x72\x65\x63\x6f\x72\x64\x2d\x70\x72\x65\x64"
  "\x69\x63\x61\x74\x65\x04\x79\x04\x84\x01\x04\x16\x61\x73\x73\x6f"
  "\x63\x69\x61\x74\x69\x6f\x6e\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x08\xae\x01\xde\x02\x80\x80\x04\xad\x01\xdc\x02\x81\x81\x02"
  "\xac\x01\xda\x02\x81\x81\x02\xab\x01\xd8\x02\x81\x83\x02\xaa\x01"
  "\xd6\x02\x81\x83\x02\xa9\x01\xd4\x02\x81\x83\x02\xa8\x01\xd2\x02"
  "\x81\x83\x02\xa7\x01\xd0\x02\x81\x83\x02\xa6\x01\xce\x02\x81\x83"
  "\x02\xa5\x01\xcc\x02\x81\x83\x02\xa4\x01\xca\x02\x81\x83\x02\xa3"
  "\x01\xc8\x02\x81\x83\x02\xa2\x01\xc6\x02\x81\x83\x02\xa1\x01\xc4"
  "\x02\x81\x85\x02\xa0\x01\xc2\x02\x81\x83\x02\x9f\x01\xc0\x02\x81"
  "\x85\x02\x9e\x01\xbe\x02\x81\x89\x02\x9d\x01\xbc\x02\x81\x87\x02"
  "\x9c\x01\xba\x02\x81\x83\x02\x9b\x01\xb8\x02\x81\x85\x02\x9a\x01"
  "\xb6\x02\x81\x89\x02\x99\x01\xb4\x02\x81\x83\x02\x98\x01\xb2\x02"
  "\x81\x85\x02\x97\x01\xb0\x02\x81\x89\x02\x96\x01\xae\x02\x81\x83"
  "\x02\x95\x01\xac\x02\x81\x85\x02\x94\x01\xaa\x02\x81\x89\x02\x93"
  "\x01\xa8\x02\x81\x83\x02\x92\x01\xa6\x02\x81\x85\x02\x91\x01\xa4"
  "\x02\x81\x89\x02\x90\x01\xa2\x02\x81\x83\x02\x8f\x01\xa0\x02\x81"
  "\x85\x02\x8e\x01\x9e\x02\x81\x89\x02\x8d\x01\x9c\x02\x81\x83\x02"
  "\x8c\x01\x9a\x02\x81\x85\x02\x8b\x01\x98\x02\x81\x89\x02\x8a\x01"
  "\x96\x02\x81\x83\x02\x89\x01\x94\x02\x81\x85\x02\x88\x01\x92\x02"
  "\x81\x87\x02\x87\x01\x90\x02\x81\x83\x02\x86\x01\x8e\x02\x81\x85"
  "\x02\x85\x01\x8c\x02\x81\x89\x02\x84\x01\x8a\x02\x81\x83\x02\x83"
  "\x01\x88\x02\x81\x85\x02\x82\x01\x86\x02\x81\x83\x02\x81\x01\x84"
  "\x02\x81\x85\x02\x80\x01\x82\x02\x81\x89\x02\x7f\x80\x02\x81\x83"
  "\x02\x7e\xfe\x01\x81\x85\x02\x7d\xfc\x01\x81\x89\x02\x7c\xfa\x01"
  "\x81\x83\x02\x7b\xf8\x01\x81\x85\x02\x7a\xf6\x01\x81\x89\x02\x79"
  "\xf4\x01\x81\x83\x02\x78\xf2\x01\x81\x85\x02\x77\xf0\x01\x81\x87"
  "\x02\x76\xee\x01\x81\x83\x02\x75\xec\x01\x81\x85\x02\x74\xea\x01"
  "\x81\x89\x02\x73\xe8\x01\x81\x83\x02\x72\xe6\x01\x81\x85\x02\x71"
  "\xe4\x01\x81\x83\x02\x70\xe2\x01\x81\x85\x02\x6f\xe0\x01\x81\x89"
  "\x02\x6e\xde\x01\x81\x83\x02\x6d\xdc\x01\x81\x85\x02\x6c\xda\x01"
  "\x81\x89\x02\x6b\xd8\x01\x81\x83\x02\x6a\xd6\x01\x81\x85\x02\x69"
  "\xd4\x01\x81\x89\x02\x68\xd2\x01\x81\x83\x02\x67\xd0\x01\x81\x85"
  "\x02\x66\xce\x01\x81\x87\x02\x65\xcc\x01\x81\x83\x02\x64\xca\x01"
  "\x81\x85\x02\x63\xc8\x01\x81\x89\x02\x62\xc6\x01\x81\x83\x02\x61"
  "\xc4\x01\x81\x83\x02\x60\xc2\x01\x81\x85\x02\x5f\xc0\x01\x81\x83"
  "\x02\x5e\xbe\x01\x81\x85\x02\x5d\xbc\x01\x81\x89\x02\x5c\xba\x01"
  "\x81\x83\x02\x5b\xb8\x01\x81\x85\x02\x5a\xb6\x01\x81\x89\x02\x59"
  "\xb4\x01\x81\x83\x02\x58\xb2\x01\x81\x85\x02\x57\xb0\x01\x81\x89"
  "\x02\x56\xae\x01\x81\x83\x02\x55\xac\x01\x81\x85\x02\x54\xaa\x01"
  "\x81\x89\x02\x53\xa8\x01\x81\x83\x02\x52\xa6\x01\x81\x85\x02\x51"
  "\xa4\x01\x81\x89\x02\x50\xa2\x01\x81\x83\x02\x4f\xa0\x01\x81\x85"
  "\x02\x4e\x9e\x01\x81\x89\x02\x4d\x9c\x01\x81\x83\x02\x4c\x9a\x01"
  "\x81\x85\x02\x4b\x98\x01\x81\x89\x02\x4a\x96\x01\x81\x83\x02\x49"
  "\x94\x01\x81\x85\x02\x48\x92\x01\x81\x89\x02\x47\x90\x01\x81\x83"
  "\x02\x46\x8e\x01\x81\x85\x02\x45\x8c\x01\x81\x89\x02\x44\x8a\x01"
  "\x81\x83\x02\x43\x88\x01\x81\x85\x02\x42\x86\x01\x81\x89\x02\x41"
  "\x84\x01\x81\x83\x02\x40\x82\x01\x81\x85\x02\x3f\x80\x01\x81\x89"
  "\x02\x3e\x7e\x81\x83\x02\x3d\x7c\x81\x85\x02\x3c\x7a\x81\x89\x02"
  "\x3b\x78\x81\x83\x02\x3a\x76\x81\x85\x02\x39\x74\x81\x89\x02\x38"
  "\x72\x81\x83\x02\x37\x70\x81\x85\x02\x36\x6e\x81\x89\x02\x35\x6c"
  "\x81\x83\x02\x34\x6a\x81\x85\x02\x33\x68\x81\x89\x02\x32\x66\x81"
  "\x83\x02\x31\x64\x81\x85\x02\x30\x62\x81\x87\x02\x2f\x60\x81\x83"
  "\x02\x2e\x5e\x81\x85\x02\x2d\x5c\x81\x89\x02\x2c\x5a\x81\x83\x02"
  "\x2b\x58\x81\x83\x02\x2a\x56\x81\x83\x02\x29\x54\x81\x83\x02\x28"
  "\x52\x81\x83\x02\x27\x50\x81\x83\x02\x26\x4e\x81\x83\x02\x25\x4c"
  "\x81\x83\x02\x24\x4a\x81\x83\x02\x23\x48\x81\x83\x02\x22\x46\x81"
  "\x83\x02\x21\x44\x81\x83\x02\x20\x42\x81\x83\x02\x1f\x40\x81\x83"
  "\x02\x1e\x3e\x81\x83\x02\x1d\x3c\x81\x83\x02\x1c\x3a\x81\x83\x02"
  "\x1b\x38\x81\x83\x02\x1a\x36\x81\x83\x02\x19\x34\x81\x83\x02\x18"
  "\x32\x81\x83\x02\x17\x30\x81\x83\x02\x16\x2e\x81\x83\x02\x15\x2c"
  "\x81\x83\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x83\x02\x12\x26\x81"
  "\x83\x02\x11\x24\x81\x83\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x83"
  "\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02"
  "\x0b\x18\x81\x83\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x83\x02\x08"
  "\x12\x81\x83\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x83\x02\x05\x0c"
  "\x81\x83\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x87\x02\x02\x06\x81"
  "\x85\x02\x01\x04\x81\x83\x02\xdd\x02\xa9\x04";

SCHEME_OBJECT *
defstr_so_data_dd760304cdf1311c (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_defstr_so_data_dd760304cdf1311c [0]))), (sizeof (prog_defstr_so_data_dd760304cdf1311c)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_185]));
}

DECLARE_COMPILED_DATA_NS ("defstr.so", defstr_so_data_dd760304cdf1311c)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("defstr.so", "1fd60fba814e92c3")
