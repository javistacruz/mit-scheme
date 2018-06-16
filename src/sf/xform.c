/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:07-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define TAG_1_9 3
#define LABEL_1_11 11
#define LABEL_1_14 13
#define TAG_1_15 5
#define ENVIRONMENT_LABEL_1_3 26
#define DEBUGGING_LABEL_1_2 25
#define OBJECT_1_1 24
#define OBJECT_1_0 23
#define EXECUTE_CACHE_1_13 15
#define EXECUTE_CACHE_1_12 17
#define EXECUTE_CACHE_1_10 19
#define EXECUTE_CACHE_1_6 21
#define FREE_REFERENCES_LABEL_1_0 14
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_1_4);
      goto transform_top_level_7;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto lambda_11;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_1_14);
      goto lambda_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_top_level_10)
DEFLABEL (transform_top_level_7)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_8])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_14])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_1_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_1_14);

DEFLABEL (lambda_4)
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

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 8
#define DEBUGGING_LABEL_2_2 7
#define EXECUTE_CACHE_2_5 5
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_2_4);
      goto transform_recursive_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_recursive_3)
DEFLABEL (transform_recursive_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_7 5
#define TAG_3_8 1
#define LABEL_3_11 7
#define LABEL_3_12 9
#define LABEL_3_5 11
#define TAG_3_6 4
#define LABEL_3_15 13
#define LABEL_3_16 15
#define LABEL_3_17 17
#define LABEL_3_18 19
#define LABEL_3_19 21
#define LABEL_3_20 23
#define LABEL_3_21 25
#define LABEL_3_22 27
#define LABEL_3_23 29
#define LABEL_3_10 31
#define LABEL_3_13 33
#define LABEL_3_27 35
#define LABEL_3_24 37
#define LABEL_3_29 39
#define LABEL_3_31 41
#define LABEL_3_36 43
#define LABEL_3_33 45
#define TAG_3_34 21
#define LABEL_3_35 47
#define LABEL_3_28 49
#define LABEL_3_40 51
#define LABEL_3_38 53
#define ENVIRONMENT_LABEL_3_3 91
#define DEBUGGING_LABEL_3_2 90
#define OBJECT_3_4 89
#define OBJECT_3_3 88
#define OBJECT_3_2 87
#define OBJECT_3_1 86
#define OBJECT_3_0 85
#define EXECUTE_CACHE_3_42 55
#define EXECUTE_CACHE_3_41 57
#define EXECUTE_CACHE_3_39 59
#define EXECUTE_CACHE_3_37 61
#define EXECUTE_CACHE_3_32 63
#define EXECUTE_CACHE_3_30 65
#define EXECUTE_CACHE_3_26 67
#define EXECUTE_CACHE_3_25 69
#define EXECUTE_CACHE_3_14 71
#define EXECUTE_CACHE_3_9 73
#define FREE_REFERENCE_3_4 76
#define FREE_REFERENCE_3_3 77
#define FREE_REFERENCE_3_2 78
#define FREE_REFERENCE_3_1 79
#define FREE_REFERENCE_3_0 80
#define FREE_ASSIGNMENT_3_2 82
#define FREE_ASSIGNMENT_3_1 83
#define FREE_ASSIGNMENT_3_0 84
#define FREE_REFERENCES_LABEL_3_0 54
#define NUMBER_OF_LINKER_SECTIONS_3_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd55;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd149;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd109;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_3_4);
      goto transform_top_level_1_33;

    case 1:
      current_block = (Rpc - LABEL_3_7);
      goto lambda_52;

    case 2:
      current_block = (Rpc - LABEL_3_11);
      goto label_35;

    case 3:
      current_block = (Rpc - LABEL_3_12);
      goto label_36;

    case 4:
      current_block = (Rpc - LABEL_3_5);
      goto swapB_51;

    case 5:
      current_block = (Rpc - LABEL_3_15);
      goto label_37;

    case 6:
      current_block = (Rpc - LABEL_3_16);
      goto label_38;

    case 7:
      current_block = (Rpc - LABEL_3_17);
      goto label_39;

    case 8:
      current_block = (Rpc - LABEL_3_18);
      goto label_40;

    case 9:
      current_block = (Rpc - LABEL_3_19);
      goto label_41;

    case 10:
      current_block = (Rpc - LABEL_3_20);
      goto label_42;

    case 11:
      current_block = (Rpc - LABEL_3_21);
      goto label_43;

    case 12:
      current_block = (Rpc - LABEL_3_22);
      goto label_44;

    case 13:
      current_block = (Rpc - LABEL_3_23);
      goto label_45;

    case 14:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_0;

    case 15:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_1;

    case 16:
      current_block = (Rpc - LABEL_3_27);
      goto continuation_6;

    case 17:
      current_block = (Rpc - LABEL_3_24);
      goto continuation_3;

    case 18:
      current_block = (Rpc - LABEL_3_29);
      goto label_48;

    case 19:
      current_block = (Rpc - LABEL_3_31);
      goto label_46;

    case 20:
      current_block = (Rpc - LABEL_3_36);
      goto label_47;

    case 21:
      current_block = (Rpc - LABEL_3_33);
      goto lambda_53;

    case 22:
      current_block = (Rpc - LABEL_3_35);
      goto continuation_10;

    case 23:
      current_block = (Rpc - LABEL_3_28);
      goto continuation_4;

    case 24:
      current_block = (Rpc - LABEL_3_40);
      goto continuation_8;

    case 25:
      current_block = (Rpc - LABEL_3_38);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_top_level_1_50)
DEFLABEL (transform_top_level_1_33)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd8.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 3;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  Wrd34 = Wrd36;
  ((Wrd34.pObj) [2]) = (Wrd7.Obj);
  ((Wrd34.pObj) [3]) = (Wrd11.Obj);
  ((Wrd34.pObj) [4]) = (Wrd15.Obj);
  (Rsp [5]) = (Wrd37.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_7])));
  Rhp += 2;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd23 = Wrd20;
  (Wrd24.Obj) = (Rsp [7]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  ((Wrd23.pObj) [3]) = (Wrd8.Obj);
  (Rsp [6]) = (Wrd19.Obj);
  (Rsp [7]) = (Wrd37.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_3_7);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_59;
  Wrd8 = Wrd12;

DEFLABEL (label_58)
  if (! ((Wrd8.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_55;

DEFLABEL (label_54)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (label_55)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_57;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd27.Lng))))
    goto label_57;
  (Wrd19.Obj) = ((Wrd25.pObj) [6]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_56)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd41.Obj);
  goto label_54;

DEFLABEL (label_57)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [3]);
  (Wrd35.Obj) = (current_block [OBJECT_3_0]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_11])), (Wrd9.pObj));

DEFLABEL (label_35)
  (Wrd8.Obj) = Rvl;
  goto label_58;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_26]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_25]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_64;
  Wrd7 = Wrd11;

DEFLABEL (label_63)
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_62;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_27]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [2]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_3_3]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_32]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_27);

DEFLABEL (label_62)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_33])));
  Rhp += 3;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd22 = Wrd15;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  ((Wrd22.pObj) [2]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd24.pObj) [3]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  ((Wrd22.pObj) [4]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_35]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_4]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_61;
  Wrd29 = Wrd33;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_37]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_35);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_36])), (Wrd30.pObj));

DEFLABEL (label_47)
  (Wrd29.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_31])), (Wrd8.pObj));

DEFLABEL (label_46)
  (Wrd7.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_65)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [3]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = ((Wrd46.pObj) [2]);
  (Rsp [2]) = (Wrd48.Obj);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd56.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_3]));
  (Wrd59.Obj) = ((Wrd56.pObj) [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if ((Wrd60.uLng) == 50)
    goto label_67;
  Wrd55 = Wrd59;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_30]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_28);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_29])), (Wrd56.pObj));

DEFLABEL (label_48)
  (Wrd55.Obj) = Rvl;
  goto label_66;

DEFLABEL (swapB_51)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (swapB_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_94;

DEFLABEL (label_93)
  Wrd5 = Wrd9;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_91;

DEFLABEL (label_90)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_89)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [4]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_88;

DEFLABEL (label_87)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_86)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_85;

DEFLABEL (label_84)
  Wrd57 = Wrd61;

DEFLABEL (label_83)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_82;

DEFLABEL (label_81)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_80)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [3]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_79;

DEFLABEL (label_78)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_77)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_2]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_76;

DEFLABEL (label_75)
  Wrd109 = Wrd113;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_73;

DEFLABEL (label_72)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_71)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [2]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_70;

DEFLABEL (label_69)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_68)
  Rvl = (current_block [OBJECT_3_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_70)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_69;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_23])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_45)
  goto label_68;

DEFLABEL (label_73)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_72;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_22])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_44)
  goto label_71;

DEFLABEL (label_76)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_75;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_3_21])), (Wrd110.pObj));

DEFLABEL (label_43)
  (Wrd109.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_79)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_78;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_20])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_42)
  goto label_77;

DEFLABEL (label_82)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_81;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_19])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_41)
  goto label_80;

DEFLABEL (label_85)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_84;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_3_18])), (Wrd58.pObj));

DEFLABEL (label_40)
  (Wrd57.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_88)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_87;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_17])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_39)
  goto label_86;

DEFLABEL (label_91)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_90;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_16])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_38)
  goto label_89;

DEFLABEL (label_94)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_93;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_3_15])), (Wrd6.pObj));

DEFLABEL (label_37)
  (Wrd5.Obj) = Rvl;
  goto label_92;

DEFLABEL (lambda_53)
  CLOSURE_HEADER (LABEL_3_33);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_39]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_38);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_96;

DEFLABEL (label_95)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = ((Wrd8.pObj) [4]);
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_42]));

DEFLABEL (label_96)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_40]))));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_41]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_40);
  goto label_95;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define TAG_4_8 2
#define ENVIRONMENT_LABEL_4_3 17
#define DEBUGGING_LABEL_4_2 16
#define OBJECT_4_0 15
#define EXECUTE_CACHE_4_10 9
#define EXECUTE_CACHE_4_9 11
#define EXECUTE_CACHE_4_6 13
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_4_4);
      goto ui_warning_2;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_1;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ui_warning_5)
DEFLABEL (ui_warning_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_4_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_4_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define LABEL_5_9 7
#define LABEL_5_8 9
#define ENVIRONMENT_LABEL_5_3 18
#define DEBUGGING_LABEL_5_2 17
#define EXECUTE_CACHE_5_10 11
#define EXECUTE_CACHE_5_7 13
#define FREE_REFERENCE_5_0 16
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_5_4);
      goto transform_expressions_3;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_5_9);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_expressions_7)
DEFLABEL (transform_expressions_3)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_10;
  Wrd15 = Wrd19;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_9])), (Wrd16.pObj));

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_6 5
#define LABEL_6_5 7
#define ENVIRONMENT_LABEL_6_3 14
#define DEBUGGING_LABEL_6_2 13
#define EXECUTE_CACHE_6_7 9
#define FREE_REFERENCE_6_0 12
#define FREE_REFERENCES_LABEL_6_0 8
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_6_4);
      goto transform_expression_1;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_expression_5)
DEFLABEL (transform_expression_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_7;
  Wrd9 = Wrd13;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_6])), (Wrd10.pObj));

DEFLABEL (label_3)
  (Wrd9.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 6
#define DEBUGGING_LABEL_7_2 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto environment_make_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_make_3)
DEFLABEL (environment_make_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  Rvl = (current_block [OBJECT_7_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_8 7
#define LABEL_8_7 9
#define LABEL_8_10 11
#define ENVIRONMENT_LABEL_8_3 24
#define DEBUGGING_LABEL_8_2 23
#define OBJECT_8_0 22
#define EXECUTE_CACHE_8_11 13
#define EXECUTE_CACHE_8_9 15
#define EXECUTE_CACHE_8_6 17
#define FREE_REFERENCE_8_1 20
#define FREE_REFERENCE_8_0 21
#define FREE_REFERENCES_LABEL_8_0 12
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_8_4);
      goto environment_lookup_4;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_lookup_9)
DEFLABEL (environment_lookup_4)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_10;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_11)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_16;
  Wrd20 = Wrd24;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_14;
  Wrd11 = Wrd15;

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_10])), (Wrd12.pObj));

DEFLABEL (label_7)
  (Wrd11.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_8])), (Wrd21.pObj));

DEFLABEL (label_6)
  (Wrd20.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define ENVIRONMENT_LABEL_9_3 14
#define DEBUGGING_LABEL_9_2 13
#define OBJECT_9_1 12
#define OBJECT_9_0 11
#define EXECUTE_CACHE_9_6 9
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto environment_bind_2;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_1;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_bind_6)
DEFLABEL (environment_bind_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_9_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_8)
  (Wrd25.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_9_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_8 5
#define LABEL_10_5 7
#define TAG_10_6 2
#define LABEL_10_7 9
#define LABEL_10_10 11
#define ENVIRONMENT_LABEL_10_3 24
#define DEBUGGING_LABEL_10_2 23
#define OBJECT_10_1 22
#define OBJECT_10_0 21
#define EXECUTE_CACHE_10_12 13
#define EXECUTE_CACHE_10_11 15
#define EXECUTE_CACHE_10_9 17
#define FREE_REFERENCE_10_0 20
#define FREE_REFERENCES_LABEL_10_0 12
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_10_4);
      goto transform_open_block_3;

    case 1:
      current_block = (Rpc - LABEL_10_8);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_open_block_7)
DEFLABEL (transform_open_block_3)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_10;
  Wrd16 = Wrd20;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_8])), (Wrd17.pObj));

DEFLABEL (label_5)
  (Wrd16.Obj) = Rvl;
  goto label_9;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define TAG_11_7 2
#define LABEL_11_9 9
#define LABEL_11_12 11
#define LABEL_11_13 13
#define LABEL_11_14 15
#define LABEL_11_16 17
#define TAG_11_17 7
#define LABEL_11_18 19
#define TAG_11_19 8
#define LABEL_11_26 21
#define LABEL_11_22 23
#define LABEL_11_20 25
#define TAG_11_21 11
#define LABEL_11_31 27
#define LABEL_11_25 29
#define LABEL_11_33 31
#define LABEL_11_35 33
#define LABEL_11_36 35
#define LABEL_11_30 37
#define LABEL_11_38 39
#define LABEL_11_39 41
#define LABEL_11_40 43
#define LABEL_11_41 45
#define LABEL_11_28 47
#define LABEL_11_37 49
#define LABEL_11_43 51
#define TAG_11_44 24
#define LABEL_11_34 53
#define LABEL_11_45 55
#define TAG_11_46 26
#define LABEL_11_50 57
#define LABEL_11_47 59
#define TAG_11_48 28
#define LABEL_11_53 61
#define LABEL_11_49 63
#define LABEL_11_51 65
#define LABEL_11_57 67
#define LABEL_11_52 69
#define LABEL_11_55 71
#define TAG_11_56 34
#define LABEL_11_58 73
#define TAG_11_59 35
#define ENVIRONMENT_LABEL_11_3 109
#define DEBUGGING_LABEL_11_2 108
#define OBJECT_11_7 107
#define OBJECT_11_6 106
#define OBJECT_11_5 105
#define OBJECT_11_4 104
#define OBJECT_11_3 103
#define OBJECT_11_2 102
#define OBJECT_11_1 101
#define OBJECT_11_0 100
#define EXECUTE_CACHE_11_54 75
#define EXECUTE_CACHE_11_42 77
#define EXECUTE_CACHE_11_32 79
#define EXECUTE_CACHE_11_29 81
#define EXECUTE_CACHE_11_27 83
#define EXECUTE_CACHE_11_24 85
#define EXECUTE_CACHE_11_23 87
#define EXECUTE_CACHE_11_15 89
#define EXECUTE_CACHE_11_11 91
#define EXECUTE_CACHE_11_10 93
#define EXECUTE_CACHE_11_8 95
#define FREE_REFERENCE_11_1 98
#define FREE_REFERENCE_11_0 99
#define FREE_REFERENCES_LABEL_11_0 74
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd78;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_11_4);
      goto transform_open_block__48;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto lambda_64;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_11_12);
      goto label_50;

    case 5:
      current_block = (Rpc - LABEL_11_13);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_11_14);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_11_16);
      goto lambda_65;

    case 8:
      current_block = (Rpc - LABEL_11_18);
      goto lambda_66;

    case 9:
      current_block = (Rpc - LABEL_11_26);
      goto label_51;

    case 10:
      current_block = (Rpc - LABEL_11_22);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_11_20);
      goto loop_43;

    case 12:
      current_block = (Rpc - LABEL_11_31);
      goto label_52;

    case 13:
      current_block = (Rpc - LABEL_11_25);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_11_33);
      goto continuation_17;

    case 15:
      current_block = (Rpc - LABEL_11_35);
      goto label_57;

    case 16:
      current_block = (Rpc - LABEL_11_36);
      goto label_58;

    case 17:
      current_block = (Rpc - LABEL_11_30);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_11_38);
      goto label_56;

    case 19:
      current_block = (Rpc - LABEL_11_39);
      goto label_53;

    case 20:
      current_block = (Rpc - LABEL_11_40);
      goto label_54;

    case 21:
      current_block = (Rpc - LABEL_11_41);
      goto label_55;

    case 22:
      current_block = (Rpc - LABEL_11_28);
      goto continuation_40;

    case 23:
      current_block = (Rpc - LABEL_11_37);
      goto continuation_28;

    case 24:
      current_block = (Rpc - LABEL_11_43);
      goto lambda_68;

    case 25:
      current_block = (Rpc - LABEL_11_34);
      goto continuation_39;

    case 26:
      current_block = (Rpc - LABEL_11_45);
      goto lambda_69;

    case 27:
      current_block = (Rpc - LABEL_11_50);
      goto label_59;

    case 28:
      current_block = (Rpc - LABEL_11_47);
      goto lambda_70;

    case 29:
      current_block = (Rpc - LABEL_11_53);
      goto label_60;

    case 30:
      current_block = (Rpc - LABEL_11_49);
      goto continuation_22;

    case 31:
      current_block = (Rpc - LABEL_11_51);
      goto continuation_31;

    case 32:
      current_block = (Rpc - LABEL_11_57);
      goto label_61;

    case 33:
      current_block = (Rpc - LABEL_11_52);
      goto continuation_30;

    case 34:
      current_block = (Rpc - LABEL_11_55);
      goto lambda_71;

    case 35:
      current_block = (Rpc - LABEL_11_58);
      goto lambda_72;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_open_block__63)
DEFLABEL (transform_open_block__48)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_6])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (Wrd5.Obj) = Rvl;
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_74;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd21.Lng))))
    goto label_74;
  ((Wrd19.pObj) [5]) = Rvl;

DEFLABEL (label_73)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_14);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_18])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_20])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  ((Wrd22.pObj) [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_22]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_23]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_11_22);
  (Rsp [2]) = Rvl;
  goto loop_43;

DEFLABEL (label_74)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_11_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 3);

DEFLABEL (label_50)
  goto label_73;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_13);
  (Rsp [5]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_16])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Rsp [6]) = (Wrd7.Obj);
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_11_6);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (lambda_65)
  CLOSURE_HEADER (LABEL_11_16);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [2]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_24]));

DEFLABEL (lambda_66)
  CLOSURE_HEADER (LABEL_11_18);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_25]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_76;
  Wrd15 = Wrd19;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_27]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_25);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_26])), (Wrd16.pObj));

DEFLABEL (label_51)
  (Wrd15.Obj) = Rvl;
  goto label_75;

DEFLABEL (loop_67)
DEFLABEL (loop_43)
  INTERRUPT_CHECK (26, LABEL_11_20);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_11_2]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_77;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_28]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_11_28);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_44);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_43])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_77)
  (Wrd7.Obj) = (Rsp [2]);
  if (! ((Wrd7.Obj) == (Wrd6.Obj)))
    goto label_78;
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_11_3]);
  (Rsp [1]) = (Wrd22.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_29]));

DEFLABEL (label_78)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_30]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_94;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_93)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_32]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_11_30);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_92;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_91)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_90;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd22.Lng))))
    goto label_90;
  (Wrd17.Obj) = ((Wrd20.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_89)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_33]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_88;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_87)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_42]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_11_33);
  (Wrd55.Obj) = (* (Rsp++));
  if (Rvl == (Wrd55.Obj))
    goto label_83;

DEFLABEL (label_82)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_37]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_81;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [1]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_80)
  (Wrd53.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_79)
  (Wrd78.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd78.Obj);
  goto loop_43;

DEFLABEL (label_81)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_38]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_5]), 1);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_34]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd63.Obj) = (Rsp [3]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_86;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [1]);
  (* (--Rsp)) = (Wrd62.Obj);

DEFLABEL (label_85)
  (Wrd72.Obj) = (Rsp [3]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 1))
    goto label_84;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [1]);
  (* (--Rsp)) = (Wrd71.Obj);
  goto label_79;

DEFLABEL (label_84)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_36]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_5]), 1);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_86)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_35]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_5]), 1);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_41]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 1);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd25.Obj) = (current_block [OBJECT_11_6]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_40]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_7]), 2);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_39]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 1);

DEFLABEL (label_53)
  (Wrd7.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_31]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 1);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_93;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_11_37);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_46);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_45])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_11_34);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_48);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_47])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_68)
  CLOSURE_HEADER (LABEL_11_43);

DEFLABEL (lambda_41)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11_2]);
  (Rsp [1]) = (Wrd9.Obj);
  goto pop_return;

DEFLABEL (lambda_69)
  CLOSURE_HEADER (LABEL_11_45);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_96;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_95)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  goto lambda_9;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_11_49);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_56);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_55])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd16.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  Rvl = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_96)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_50]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (lambda_70)
  CLOSURE_HEADER (LABEL_11_47);

DEFLABEL (lambda_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_52]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_100;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_99)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_54]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_11_52);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto lambda_9;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_11_51);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_98;
  Wrd11 = Wrd15;

DEFLABEL (label_97)
  (Wrd20.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Rsp [2]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_59);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_58])));
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

DEFLABEL (label_98)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_57])), (Wrd12.pObj));

DEFLABEL (label_61)
  (Wrd11.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_53]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 1);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_99;

DEFLABEL (lambda_71)
  CLOSURE_HEADER (LABEL_11_55);

DEFLABEL (lambda_24)
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

DEFLABEL (lambda_72)
  CLOSURE_HEADER (LABEL_11_58);

DEFLABEL (lambda_34)
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

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define ENVIRONMENT_LABEL_12_3 16
#define DEBUGGING_LABEL_12_2 15
#define EXECUTE_CACHE_12_9 9
#define EXECUTE_CACHE_12_8 11
#define EXECUTE_CACHE_12_7 13
#define FREE_REFERENCES_LABEL_12_0 8
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_12_4);
      goto transform_variable_2;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_variable_5)
DEFLABEL (transform_variable_2)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define TAG_13_6 1
#define LABEL_13_8 7
#define LABEL_13_10 9
#define LABEL_13_14 11
#define LABEL_13_12 13
#define LABEL_13_13 15
#define ENVIRONMENT_LABEL_13_3 30
#define DEBUGGING_LABEL_13_2 29
#define EXECUTE_CACHE_13_16 17
#define EXECUTE_CACHE_13_15 19
#define EXECUTE_CACHE_13_11 21
#define EXECUTE_CACHE_13_9 23
#define EXECUTE_CACHE_13_7 25
#define FREE_REFERENCE_13_0 28
#define FREE_REFERENCES_LABEL_13_0 16
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_13_4);
      goto transform_assignment_7;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_13_14);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_13_12);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_13_13);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_assignment_11)
DEFLABEL (transform_assignment_7)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_13_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_14;
  Wrd20 = Wrd24;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_13);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_14])), (Wrd21.pObj));

DEFLABEL (label_9)
  (Wrd20.Obj) = Rvl;
  goto label_13;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_12);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_16]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define TAG_14_6 1
#define LABEL_14_8 7
#define LABEL_14_10 9
#define TAG_14_11 3
#define LABEL_14_12 11
#define LABEL_14_16 13
#define LABEL_14_15 15
#define LABEL_14_18 17
#define LABEL_14_17 19
#define LABEL_14_20 21
#define ENVIRONMENT_LABEL_14_3 42
#define DEBUGGING_LABEL_14_2 41
#define OBJECT_14_3 40
#define OBJECT_14_2 39
#define OBJECT_14_1 38
#define OBJECT_14_0 37
#define EXECUTE_CACHE_14_22 23
#define EXECUTE_CACHE_14_21 25
#define EXECUTE_CACHE_14_19 27
#define EXECUTE_CACHE_14_14 29
#define EXECUTE_CACHE_14_13 31
#define EXECUTE_CACHE_14_9 33
#define EXECUTE_CACHE_14_7 35
#define FREE_REFERENCES_LABEL_14_0 22
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_14_4);
      goto transform_lambda_14;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto lambda_19;

    case 2:
      current_block = (Rpc - LABEL_14_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_14_10);
      goto lambda_20;

    case 4:
      current_block = (Rpc - LABEL_14_12);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_14_16);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_14_15);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_14_18);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_14_17);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_14_20);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_lambda_18)
DEFLABEL (transform_lambda_14)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_14_5);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_10])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  ((Wrd6.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [9]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_1;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_16);
  (Wrd13.Obj) = Rvl;

DEFLABEL (label_23)
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_17]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_22;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd25.Lng))))
    goto label_22;
  (Wrd19.Obj) = ((Wrd23.pObj) [6]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_21)
  (Wrd33.Obj) = (Rsp [6]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [3]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [7]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [8]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [9]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_14_20);
  (Rsp [10]) = Rvl;
  (Wrd6.Obj) = (Rsp [4]);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [4]) = (Wrd7.Obj);
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_22]));

DEFLABEL (label_22)
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.Obj) = (current_block [OBJECT_14_2]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_18]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd13.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_23;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_14_10);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_14]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_8 7
#define LABEL_15_9 9
#define LABEL_15_10 11
#define LABEL_15_11 13
#define LABEL_15_12 15
#define LABEL_15_13 17
#define LABEL_15_14 19
#define LABEL_15_15 21
#define LABEL_15_16 23
#define LABEL_15_17 25
#define LABEL_15_18 27
#define LABEL_15_19 29
#define LABEL_15_22 31
#define LABEL_15_24 33
#define LABEL_15_20 35
#define ENVIRONMENT_LABEL_15_3 58
#define DEBUGGING_LABEL_15_2 57
#define OBJECT_15_7 56
#define OBJECT_15_6 55
#define OBJECT_15_5 54
#define OBJECT_15_4 53
#define OBJECT_15_3 52
#define OBJECT_15_2 51
#define OBJECT_15_1 50
#define OBJECT_15_0 49
#define EXECUTE_CACHE_15_26 37
#define EXECUTE_CACHE_15_25 39
#define EXECUTE_CACHE_15_23 41
#define EXECUTE_CACHE_15_21 43
#define EXECUTE_CACHE_15_7 45
#define EXECUTE_CACHE_15_6 47
#define FREE_REFERENCES_LABEL_15_0 36
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd40;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd138;
  machine_word Wrd130;
  machine_word Wrd132;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd126;
  machine_word Wrd128;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd113;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd120;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd100;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd107;
  machine_word Wrd99;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd87;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_15_4);
      goto build_procedure_24;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_15_8);
      goto label_26;

    case 3:
      current_block = (Rpc - LABEL_15_9);
      goto continuation_17;

    case 4:
      current_block = (Rpc - LABEL_15_10);
      goto continuation_14;

    case 5:
      current_block = (Rpc - LABEL_15_11);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_15_12);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_15_13);
      goto label_33;

    case 8:
      current_block = (Rpc - LABEL_15_14);
      goto label_34;

    case 9:
      current_block = (Rpc - LABEL_15_15);
      goto label_35;

    case 10:
      current_block = (Rpc - LABEL_15_16);
      goto do_loop_22;

    case 11:
      current_block = (Rpc - LABEL_15_17);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_15_18);
      goto label_29;

    case 13:
      current_block = (Rpc - LABEL_15_19);
      goto label_31;

    case 14:
      current_block = (Rpc - LABEL_15_22);
      goto label_30;

    case 15:
      current_block = (Rpc - LABEL_15_24);
      goto label_28;

    case 16:
      current_block = (Rpc - LABEL_15_20);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_procedure_37)
DEFLABEL (build_procedure_24)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_39;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (label_39)
  (Wrd7.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [7]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_41;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_41;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_40)
  goto do_loop_22;

DEFLABEL (label_41)
  (Wrd19.Obj) = (Rsp [7]);
  (Wrd20.Obj) = (current_block [OBJECT_15_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (do_loop_38)
DEFLABEL (do_loop_22)
  INTERRUPT_CHECK (26, LABEL_15_16);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_64;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_63)
  if ((Wrd5.Obj) == (current_block [OBJECT_15_0]))
    goto label_50;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_62;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_25]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd94.Obj) = (Rsp [0]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 1))
    goto label_49;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd91.Obj) = ((Wrd93.pObj) [0]);

DEFLABEL (label_48)
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd107.uLng) == 10))
    goto label_47;
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd105.Obj) = ((Wrd104.pObj) [0]);
  (Wrd106.Lng) = (FIXNUM_TO_LONG (Wrd105.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd106.Lng))))
    goto label_47;
  (Wrd100.Obj) = ((Wrd104.pObj) [4]);

DEFLABEL (label_46)
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd120.uLng) == 10))
    goto label_45;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd118.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd119.Lng))))
    goto label_45;
  (Wrd113.Obj) = ((Wrd117.pObj) [3]);

DEFLABEL (label_44)
  (Wrd129.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd113.Obj);
  (* (Rhp++)) = (Wrd129.Obj);
  (Wrd128.pObj) = (& (Rhp [-2]));
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd128.pObj)));
  (Rsp [1]) = (Wrd126.Obj);
  (Wrd133.Obj) = (Rsp [0]);
  (Wrd134.uLng) = (OBJECT_TYPE (Wrd133.Obj));
  if (! ((Wrd134.uLng) == 1))
    goto label_43;
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd133.Obj));
  (Wrd130.Obj) = ((Wrd132.pObj) [1]);

DEFLABEL (label_42)
  (Rsp [0]) = (Wrd130.Obj);
  goto do_loop_22;

DEFLABEL (label_43)
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_15]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd133.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 1);

DEFLABEL (label_35)
  (Wrd130.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd122.Obj) = (current_block [OBJECT_15_1]);
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 2);

DEFLABEL (label_34)
  (Wrd113.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd109.Obj) = (current_block [OBJECT_15_4]);
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 2);

DEFLABEL (label_33)
  (Wrd100.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 1);

DEFLABEL (label_32)
  (Wrd91.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_50)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_60;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_59)
  if ((Wrd30.Obj) == (current_block [OBJECT_15_0]))
    goto label_56;
  (Wrd40.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd50.Obj) = (Rsp [10]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_55;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd49.Lng))))
    goto label_55;
  (Wrd43.Obj) = ((Wrd47.pObj) [2]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_54)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_23]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_15_10);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_53)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [3]);
  (Wrd71.Obj) = (current_block [OBJECT_15_0]);
  if ((Wrd70.Obj) == (Wrd71.Obj))
    goto label_52;
  (Wrd72.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_20]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd79.Obj) = (current_block [OBJECT_15_6]);
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd78.pObj) = (& (Rhp [-2]));
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd78.pObj)));
  (* (Rhp++)) = (Wrd76.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd82.pObj) = (& (Rhp [-2]));
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd82.pObj)));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd85.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd85.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_21]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_15_20);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_26]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_15_9);
  (Wrd87.Obj) = Rvl;

DEFLABEL (label_51)
  (Rsp [9]) = (Wrd87.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (label_52)
  (Wrd87.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [1]));
  goto label_51;

DEFLABEL (label_55)
  (Wrd52.Obj) = (Rsp [10]);
  (Wrd53.Obj) = (current_block [OBJECT_15_7]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_22]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_56)
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_58;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd58.Obj) = ((Wrd60.pObj) [0]);

DEFLABEL (label_57)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd58.Obj);
  goto label_53;

DEFLABEL (label_58)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_19]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 1);

DEFLABEL (label_31)
  (Wrd58.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_18]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 1);

DEFLABEL (label_29)
  (Wrd30.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_24]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 1);

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_63;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_8 7
#define LABEL_16_10 9
#define TAG_16_11 3
#define LABEL_16_7 11
#define LABEL_16_13 13
#define LABEL_16_16 15
#define LABEL_16_18 17
#define LABEL_16_17 19
#define ENVIRONMENT_LABEL_16_3 37
#define DEBUGGING_LABEL_16_2 36
#define OBJECT_16_2 35
#define OBJECT_16_1 34
#define OBJECT_16_0 33
#define EXECUTE_CACHE_16_15 21
#define EXECUTE_CACHE_16_14 23
#define EXECUTE_CACHE_16_12 25
#define EXECUTE_CACHE_16_9 27
#define EXECUTE_CACHE_16_6 29
#define FREE_REFERENCE_16_0 32
#define FREE_REFERENCES_LABEL_16_0 20
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd20;
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
      goto transform_procedure_body_9;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_8);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_16_10);
      goto lambda_16;

    case 4:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_16_13);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_16_16);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_16_18);
      goto label_12;

    case 8:
      current_block = (Rpc - LABEL_16_17);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_procedure_body_15)
DEFLABEL (transform_procedure_body_9)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_10])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (label_17)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_19;
  Wrd22 = Wrd26;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_8])), (Wrd23.pObj));

DEFLABEL (label_11)
  (Wrd22.Obj) = Rvl;
  goto label_18;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_16_10);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_16_0]))
    goto label_20;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [4]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Rsp [2]) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_15]));

DEFLABEL (label_20)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_16_13);
  (Wrd5.Obj) = Rvl;
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [4]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_24;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd34.Lng))))
    goto label_24;
  ((Wrd32.pObj) [5]) = Rvl;

DEFLABEL (label_23)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [4]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_17]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_22;
  Wrd16 = Wrd20;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16_17);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_18])), (Wrd17.pObj));

DEFLABEL (label_12)
  (Wrd16.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [4]);
  (Wrd42.Obj) = (current_block [OBJECT_16_1]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_16]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 3);

DEFLABEL (label_13)
  goto label_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_8 5
#define LABEL_17_5 7
#define TAG_17_6 2
#define LABEL_17_9 9
#define LABEL_17_10 11
#define LABEL_17_11 13
#define LABEL_17_15 15
#define ENVIRONMENT_LABEL_17_3 35
#define DEBUGGING_LABEL_17_2 34
#define OBJECT_17_2 33
#define OBJECT_17_1 32
#define OBJECT_17_0 31
#define EXECUTE_CACHE_17_17 17
#define EXECUTE_CACHE_17_16 19
#define EXECUTE_CACHE_17_14 21
#define EXECUTE_CACHE_17_13 23
#define EXECUTE_CACHE_17_12 25
#define EXECUTE_CACHE_17_7 27
#define FREE_REFERENCE_17_0 30
#define FREE_REFERENCES_LABEL_17_0 16
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_17_4);
      goto transform_definition_9;

    case 1:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_17_5);
      goto lambda_14;

    case 3:
      current_block = (Rpc - LABEL_17_9);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_17_10);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_17_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_17_15);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_definition_13)
DEFLABEL (transform_definition_9)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_17_5);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_17;
  Wrd6 = Wrd10;

DEFLABEL (label_16)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  if ((Wrd14.Obj) == (Wrd6.Obj))
    goto label_15;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_8);

DEFLABEL (label_15)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_11);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.Obj) = (current_block [OBJECT_17_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_17_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17_10);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_9])), (Wrd7.pObj));

DEFLABEL (label_11)
  (Wrd6.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define TAG_18_6 1
#define LABEL_18_10 7
#define LABEL_18_8 9
#define LABEL_18_9 11
#define ENVIRONMENT_LABEL_18_3 22
#define DEBUGGING_LABEL_18_2 21
#define EXECUTE_CACHE_18_12 13
#define EXECUTE_CACHE_18_11 15
#define EXECUTE_CACHE_18_7 17
#define FREE_REFERENCE_18_0 20
#define FREE_REFERENCES_LABEL_18_0 12
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_18_4);
      goto transform_access_4;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_18_10);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_access_8)
DEFLABEL (transform_access_4)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_18_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_11;
  Wrd22 = Wrd26;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_9);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_10])), (Wrd23.pObj));

DEFLABEL (label_6)
  (Wrd22.Obj) = Rvl;
  goto label_10;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_8);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [4]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 8
#define DEBUGGING_LABEL_19_2 7
#define EXECUTE_CACHE_19_5 5
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto transform_combination_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_combination_3)
DEFLABEL (transform_combination_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define TAG_20_6 1
#define LABEL_20_10 7
#define LABEL_20_8 9
#define LABEL_20_9 11
#define LABEL_20_12 13
#define ENVIRONMENT_LABEL_20_3 26
#define DEBUGGING_LABEL_20_2 25
#define EXECUTE_CACHE_20_14 15
#define EXECUTE_CACHE_20_13 17
#define EXECUTE_CACHE_20_11 19
#define EXECUTE_CACHE_20_7 21
#define FREE_REFERENCE_20_0 24
#define FREE_REFERENCES_LABEL_20_0 14
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_20_4);
      goto transform_combination__5;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_20_10);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_20_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_20_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_20_12);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_combination__9)
DEFLABEL (transform_combination__5)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_20_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_12;
  Wrd22 = Wrd26;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_9);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_10])), (Wrd23.pObj));

DEFLABEL (label_7)
  (Wrd22.Obj) = Rvl;
  goto label_11;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_8);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_12);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_14]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_8 7
#define LABEL_21_7 9
#define ENVIRONMENT_LABEL_21_3 18
#define DEBUGGING_LABEL_21_2 17
#define EXECUTE_CACHE_21_9 11
#define EXECUTE_CACHE_21_6 13
#define FREE_REFERENCE_21_0 16
#define FREE_REFERENCES_LABEL_21_0 10
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_21_4);
      goto transform_comment_3;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_comment_7)
DEFLABEL (transform_comment_3)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;
  Wrd10 = Wrd14;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_8])), (Wrd11.pObj));

DEFLABEL (label_5)
  (Wrd10.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define TAG_22_6 1
#define LABEL_22_10 7
#define LABEL_22_8 9
#define LABEL_22_14 11
#define LABEL_22_9 13
#define LABEL_22_12 15
#define LABEL_22_17 17
#define LABEL_22_13 19
#define LABEL_22_15 21
#define LABEL_22_16 23
#define ENVIRONMENT_LABEL_22_3 34
#define DEBUGGING_LABEL_22_2 33
#define EXECUTE_CACHE_22_18 25
#define EXECUTE_CACHE_22_11 27
#define EXECUTE_CACHE_22_7 29
#define FREE_REFERENCE_22_0 32
#define FREE_REFERENCES_LABEL_22_0 24
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_22_4);
      goto transform_conditional_10;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto lambda_17;

    case 2:
      current_block = (Rpc - LABEL_22_10);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_22_14);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_22_12);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_22_17);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_22_13);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_22_15);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_22_16);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_conditional_16)
DEFLABEL (transform_conditional_10)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_22_5);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_19;
  Wrd19 = Wrd23;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_9);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_10])), (Wrd20.pObj));

DEFLABEL (label_12)
  (Wrd19.Obj) = Rvl;
  goto label_18;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_8);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_21;
  Wrd20 = Wrd24;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_13);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_14])), (Wrd21.pObj));

DEFLABEL (label_13)
  (Wrd20.Obj) = Rvl;
  goto label_20;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_22_12);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_16]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_23;
  Wrd20 = Wrd24;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_22_16);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_17])), (Wrd21.pObj));

DEFLABEL (label_14)
  (Wrd20.Obj) = Rvl;
  goto label_22;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_22_15);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_18]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 8
#define DEBUGGING_LABEL_23_2 7
#define EXECUTE_CACHE_23_5 5
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto transform_constant_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_constant_3)
DEFLABEL (transform_constant_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define TAG_24_6 1
#define LABEL_24_8 7
#define LABEL_24_12 9
#define LABEL_24_10 11
#define LABEL_24_11 13
#define ENVIRONMENT_LABEL_24_3 26
#define DEBUGGING_LABEL_24_2 25
#define EXECUTE_CACHE_24_14 15
#define EXECUTE_CACHE_24_13 17
#define EXECUTE_CACHE_24_9 19
#define EXECUTE_CACHE_24_7 21
#define FREE_REFERENCE_24_0 24
#define FREE_REFERENCES_LABEL_24_0 14
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_24_4);
      goto transform_declaration_5;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_24_12);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_24_10);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_24_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_declaration_9)
DEFLABEL (transform_declaration_5)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_24_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_12;
  Wrd20 = Wrd24;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_11);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_12])), (Wrd21.pObj));

DEFLABEL (label_7)
  (Wrd20.Obj) = Rvl;
  goto label_11;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_10);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_14]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define LABEL_25_10 9
#define LABEL_25_9 11
#define ENVIRONMENT_LABEL_25_3 22
#define DEBUGGING_LABEL_25_2 21
#define EXECUTE_CACHE_25_11 13
#define EXECUTE_CACHE_25_8 15
#define EXECUTE_CACHE_25_7 17
#define FREE_REFERENCE_25_0 20
#define FREE_REFERENCES_LABEL_25_0 12
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto transform_delay_4;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_25_10);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_25_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_delay_8)
DEFLABEL (transform_delay_4)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_10;
  Wrd11 = Wrd15;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_9);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_10])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_9;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define TAG_26_6 1
#define LABEL_26_10 7
#define LABEL_26_8 9
#define LABEL_26_14 11
#define LABEL_26_9 13
#define LABEL_26_12 15
#define LABEL_26_13 17
#define ENVIRONMENT_LABEL_26_3 28
#define DEBUGGING_LABEL_26_2 27
#define EXECUTE_CACHE_26_15 19
#define EXECUTE_CACHE_26_11 21
#define EXECUTE_CACHE_26_7 23
#define FREE_REFERENCE_26_0 26
#define FREE_REFERENCES_LABEL_26_0 18
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_26_4);
      goto transform_disjunction_7;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_26_10);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_26_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_26_14);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_26_9);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_26_12);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_26_13);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_disjunction_12)
DEFLABEL (transform_disjunction_7)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_26_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_15;
  Wrd19 = Wrd23;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_9);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_10])), (Wrd20.pObj));

DEFLABEL (label_9)
  (Wrd19.Obj) = Rvl;
  goto label_14;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_8);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_17;
  Wrd20 = Wrd24;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_26_13);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_14])), (Wrd21.pObj));

DEFLABEL (label_10)
  (Wrd20.Obj) = Rvl;
  goto label_16;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_12);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_15]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define ENVIRONMENT_LABEL_27_3 12
#define DEBUGGING_LABEL_27_2 11
#define EXECUTE_CACHE_27_7 7
#define EXECUTE_CACHE_27_6 9
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto transform_quotation_1;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_quotation_4)
DEFLABEL (transform_quotation_1)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define TAG_28_6 1
#define LABEL_28_7 7
#define ENVIRONMENT_LABEL_28_3 15
#define DEBUGGING_LABEL_28_2 14
#define OBJECT_28_0 13
#define EXECUTE_CACHE_28_9 9
#define EXECUTE_CACHE_28_8 11
#define FREE_REFERENCES_LABEL_28_0 8
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_28_4);
      goto transform_quotation__2;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_quotation__5)
DEFLABEL (transform_quotation__2)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_7);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_28_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_6 7
#define ENVIRONMENT_LABEL_29_3 16
#define DEBUGGING_LABEL_29_2 15
#define EXECUTE_CACHE_29_9 9
#define EXECUTE_CACHE_29_8 11
#define EXECUTE_CACHE_29_7 13
#define FREE_REFERENCES_LABEL_29_0 8
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto transform_sequence_2;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_29_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_sequence_5)
DEFLABEL (transform_sequence_2)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define ENVIRONMENT_LABEL_30_3 12
#define DEBUGGING_LABEL_30_2 11
#define EXECUTE_CACHE_30_7 7
#define EXECUTE_CACHE_30_6 9
#define FREE_REFERENCES_LABEL_30_0 6
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
xform_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_30_4);
      goto transform_the_environment_1;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_the_environment_4)
DEFLABEL (transform_the_environment_1)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_8 7
#define LABEL_9 9
#define LABEL_10 11
#define LABEL_11 13
#define LABEL_12 15
#define LABEL_13 17
#define LABEL_14 19
#define LABEL_15 21
#define LABEL_16 23
#define LABEL_17 25
#define LABEL_18 27
#define LABEL_19 29
#define LABEL_20 31
#define LABEL_21 33
#define LABEL_22 35
#define LABEL_6 37
#define LABEL_24 39
#define LABEL_25 41
#define LABEL_26 43
#define ENVIRONMENT_LABEL_3 90
#define DEBUGGING_LABEL_2 89
#define PURIFICATION_ROOT 88
#define OBJECT_20 87
#define OBJECT_19 86
#define OBJECT_18 85
#define OBJECT_17 84
#define OBJECT_16 83
#define OBJECT_15 82
#define OBJECT_14 81
#define OBJECT_13 80
#define OBJECT_12 79
#define OBJECT_11 78
#define OBJECT_10 77
#define OBJECT_9 76
#define OBJECT_8 75
#define OBJECT_7 74
#define OBJECT_6 73
#define OBJECT_5 72
#define OBJECT_4 71
#define OBJECT_3 70
#define OBJECT_2 69
#define OBJECT_1 68
#define OBJECT_0 67
#define EXECUTE_CACHE_23 45
#define FREE_REFERENCE_15 48
#define FREE_REFERENCE_14 49
#define FREE_REFERENCE_13 50
#define FREE_REFERENCE_12 51
#define FREE_REFERENCE_11 52
#define FREE_REFERENCE_10 53
#define FREE_REFERENCE_9 54
#define FREE_REFERENCE_8 55
#define FREE_REFERENCE_7 56
#define FREE_REFERENCE_6 57
#define FREE_REFERENCE_5 58
#define FREE_REFERENCE_4 59
#define FREE_REFERENCE_3 60
#define FREE_REFERENCE_2 61
#define FREE_REFERENCE_1 62
#define FREE_REFERENCE_0 63
#define GLOBAL_EXECUTE_CACHE_5 65
#define FREE_REFERENCES_LABEL_0 44
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
xform_so_d08500b9c2c6f321 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd295;
  machine_word Wrd300;
  machine_word Wrd299;
  machine_word Wrd296;
  machine_word Wrd294;
  machine_word Wrd293;
  machine_word Wrd291;
  machine_word Wrd287;
  machine_word Wrd289;
  machine_word Wrd290;
  machine_word Wrd283;
  machine_word Wrd285;
  machine_word Wrd286;
  machine_word Wrd277;
  machine_word Wrd282;
  machine_word Wrd281;
  machine_word Wrd278;
  machine_word Wrd275;
  machine_word Wrd274;
  machine_word Wrd272;
  machine_word Wrd268;
  machine_word Wrd270;
  machine_word Wrd271;
  machine_word Wrd264;
  machine_word Wrd266;
  machine_word Wrd267;
  machine_word Wrd258;
  machine_word Wrd263;
  machine_word Wrd262;
  machine_word Wrd259;
  machine_word Wrd256;
  machine_word Wrd255;
  machine_word Wrd253;
  machine_word Wrd249;
  machine_word Wrd251;
  machine_word Wrd252;
  machine_word Wrd245;
  machine_word Wrd247;
  machine_word Wrd248;
  machine_word Wrd239;
  machine_word Wrd244;
  machine_word Wrd243;
  machine_word Wrd240;
  machine_word Wrd237;
  machine_word Wrd236;
  machine_word Wrd234;
  machine_word Wrd230;
  machine_word Wrd232;
  machine_word Wrd233;
  machine_word Wrd226;
  machine_word Wrd228;
  machine_word Wrd229;
  machine_word Wrd220;
  machine_word Wrd225;
  machine_word Wrd224;
  machine_word Wrd221;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd215;
  machine_word Wrd211;
  machine_word Wrd213;
  machine_word Wrd214;
  machine_word Wrd207;
  machine_word Wrd209;
  machine_word Wrd210;
  machine_word Wrd201;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd202;
  machine_word Wrd199;
  machine_word Wrd198;
  machine_word Wrd196;
  machine_word Wrd192;
  machine_word Wrd194;
  machine_word Wrd195;
  machine_word Wrd188;
  machine_word Wrd190;
  machine_word Wrd191;
  machine_word Wrd182;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd183;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd177;
  machine_word Wrd173;
  machine_word Wrd175;
  machine_word Wrd176;
  machine_word Wrd169;
  machine_word Wrd171;
  machine_word Wrd172;
  machine_word Wrd163;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd164;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd158;
  machine_word Wrd154;
  machine_word Wrd156;
  machine_word Wrd157;
  machine_word Wrd150;
  machine_word Wrd152;
  machine_word Wrd153;
  machine_word Wrd144;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd145;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd139;
  machine_word Wrd135;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd131;
  machine_word Wrd133;
  machine_word Wrd134;
  machine_word Wrd125;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd120;
  machine_word Wrd116;
  machine_word Wrd118;
  machine_word Wrd119;
  machine_word Wrd112;
  machine_word Wrd114;
  machine_word Wrd115;
  machine_word Wrd106;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd100;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd96;
  machine_word Wrd87;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd82;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd81;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd77;
  machine_word Wrd68;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd49;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_7);
      goto label_49;

    case 2:
      current_block = (Rpc - LABEL_8);
      goto label_50;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto label_51;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto label_52;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto label_53;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto label_54;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto label_55;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto label_56;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto label_57;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto label_58;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto label_59;

    case 12:
      current_block = (Rpc - LABEL_18);
      goto label_60;

    case 13:
      current_block = (Rpc - LABEL_19);
      goto label_61;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto label_62;

    case 15:
      current_block = (Rpc - LABEL_21);
      goto label_63;

    case 16:
      current_block = (Rpc - LABEL_22);
      goto label_64;

    case 17:
      current_block = (Rpc - LABEL_6);
      goto continuation_46;

    case 18:
      current_block = (Rpc - LABEL_24);
      goto label_67;

    case 19:
      current_block = (Rpc - LABEL_25);
      goto label_68;

    case 20:
      current_block = (Rpc - LABEL_26);
      goto expression_48;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_48)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_25])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_68)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_67)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	1,
	2,
	2,
	2,
	1,
	2,
	2,
	2,
	1,
	1,
	2,
	1,
	2,
	2,
	1,
	2,
	0,
	2,
	2,
	1,
	3,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 30)
      goto label_66;
    blocks = (current_block [OBJECT_20]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_24])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_66)
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
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_100;
  Wrd11 = Wrd15;

DEFLABEL (label_99)
  (Wrd20.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_98;
  Wrd30 = Wrd34;

DEFLABEL (label_97)
  (Wrd39.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (Wrd44.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd53.Obj) = ((Wrd50.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_96;
  Wrd49 = Wrd53;

DEFLABEL (label_95)
  (Wrd58.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  (Wrd62.Obj) = (current_block [OBJECT_6]);
  (* (Rhp++)) = (Wrd62.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd61.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd61.pObj)));
  (Wrd63.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd59.Obj);
  (* (Rhp++)) = (Wrd63.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd72.Obj) = ((Wrd69.pObj) [0]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if ((Wrd73.uLng) == 50)
    goto label_94;
  Wrd68 = Wrd72;

DEFLABEL (label_93)
  (Wrd77.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd77.Obj);
  (Wrd76.pObj) = (& (Rhp [-2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd76.pObj)));
  (Wrd81.Obj) = (current_block [OBJECT_7]);
  (* (Rhp++)) = (Wrd81.Obj);
  (* (Rhp++)) = (Wrd74.Obj);
  (Wrd80.pObj) = (& (Rhp [-2]));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd80.pObj)));
  (Wrd82.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd78.Obj);
  (* (Rhp++)) = (Wrd82.Obj);
  (Wrd84.pObj) = (& (Rhp [-2]));
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd84.pObj)));
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd88.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd91.Obj) = ((Wrd88.pObj) [0]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if ((Wrd92.uLng) == 50)
    goto label_92;
  Wrd87 = Wrd91;

DEFLABEL (label_91)
  (Wrd96.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd96.Obj);
  (Wrd95.pObj) = (& (Rhp [-2]));
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd95.pObj)));
  (Wrd100.Obj) = (current_block [OBJECT_8]);
  (* (Rhp++)) = (Wrd100.Obj);
  (* (Rhp++)) = (Wrd93.Obj);
  (Wrd99.pObj) = (& (Rhp [-2]));
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd99.pObj)));
  (Wrd101.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd97.Obj);
  (* (Rhp++)) = (Wrd101.Obj);
  (Wrd103.pObj) = (& (Rhp [-2]));
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd103.pObj)));
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd107.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd110.Obj) = ((Wrd107.pObj) [0]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if ((Wrd111.uLng) == 50)
    goto label_90;
  Wrd106 = Wrd110;

DEFLABEL (label_89)
  (Wrd115.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd106.Obj);
  (* (Rhp++)) = (Wrd115.Obj);
  (Wrd114.pObj) = (& (Rhp [-2]));
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd114.pObj)));
  (Wrd119.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd119.Obj);
  (* (Rhp++)) = (Wrd112.Obj);
  (Wrd118.pObj) = (& (Rhp [-2]));
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd118.pObj)));
  (Wrd120.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd116.Obj);
  (* (Rhp++)) = (Wrd120.Obj);
  (Wrd122.pObj) = (& (Rhp [-2]));
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd122.pObj)));
  (* (--Rsp)) = (Wrd123.Obj);
  (Wrd126.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd129.Obj) = ((Wrd126.pObj) [0]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if ((Wrd130.uLng) == 50)
    goto label_88;
  Wrd125 = Wrd129;

DEFLABEL (label_87)
  (Wrd134.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd125.Obj);
  (* (Rhp++)) = (Wrd134.Obj);
  (Wrd133.pObj) = (& (Rhp [-2]));
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd133.pObj)));
  (Wrd138.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = (Wrd138.Obj);
  (* (Rhp++)) = (Wrd131.Obj);
  (Wrd137.pObj) = (& (Rhp [-2]));
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd137.pObj)));
  (Wrd139.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd135.Obj);
  (* (Rhp++)) = (Wrd139.Obj);
  (Wrd141.pObj) = (& (Rhp [-2]));
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd141.pObj)));
  (* (--Rsp)) = (Wrd142.Obj);
  (Wrd145.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd148.Obj) = ((Wrd145.pObj) [0]);
  (Wrd149.uLng) = (OBJECT_TYPE (Wrd148.Obj));
  if ((Wrd149.uLng) == 50)
    goto label_86;
  Wrd144 = Wrd148;

DEFLABEL (label_85)
  (Wrd153.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd144.Obj);
  (* (Rhp++)) = (Wrd153.Obj);
  (Wrd152.pObj) = (& (Rhp [-2]));
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd152.pObj)));
  (Wrd157.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd157.Obj);
  (* (Rhp++)) = (Wrd150.Obj);
  (Wrd156.pObj) = (& (Rhp [-2]));
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd156.pObj)));
  (Wrd158.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd154.Obj);
  (* (Rhp++)) = (Wrd158.Obj);
  (Wrd160.pObj) = (& (Rhp [-2]));
  (Wrd161.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd160.pObj)));
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd164.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd167.Obj) = ((Wrd164.pObj) [0]);
  (Wrd168.uLng) = (OBJECT_TYPE (Wrd167.Obj));
  if ((Wrd168.uLng) == 50)
    goto label_84;
  Wrd163 = Wrd167;

DEFLABEL (label_83)
  (Wrd172.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd163.Obj);
  (* (Rhp++)) = (Wrd172.Obj);
  (Wrd171.pObj) = (& (Rhp [-2]));
  (Wrd169.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd171.pObj)));
  (Wrd176.Obj) = (current_block [OBJECT_12]);
  (* (Rhp++)) = (Wrd176.Obj);
  (* (Rhp++)) = (Wrd169.Obj);
  (Wrd175.pObj) = (& (Rhp [-2]));
  (Wrd173.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd175.pObj)));
  (Wrd177.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd173.Obj);
  (* (Rhp++)) = (Wrd177.Obj);
  (Wrd179.pObj) = (& (Rhp [-2]));
  (Wrd180.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd179.pObj)));
  (* (--Rsp)) = (Wrd180.Obj);
  (Wrd183.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd186.Obj) = ((Wrd183.pObj) [0]);
  (Wrd187.uLng) = (OBJECT_TYPE (Wrd186.Obj));
  if ((Wrd187.uLng) == 50)
    goto label_82;
  Wrd182 = Wrd186;

DEFLABEL (label_81)
  (Wrd191.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd182.Obj);
  (* (Rhp++)) = (Wrd191.Obj);
  (Wrd190.pObj) = (& (Rhp [-2]));
  (Wrd188.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd190.pObj)));
  (Wrd195.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd195.Obj);
  (* (Rhp++)) = (Wrd188.Obj);
  (Wrd194.pObj) = (& (Rhp [-2]));
  (Wrd192.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd194.pObj)));
  (Wrd196.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd192.Obj);
  (* (Rhp++)) = (Wrd196.Obj);
  (Wrd198.pObj) = (& (Rhp [-2]));
  (Wrd199.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd198.pObj)));
  (* (--Rsp)) = (Wrd199.Obj);
  (Wrd202.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd205.Obj) = ((Wrd202.pObj) [0]);
  (Wrd206.uLng) = (OBJECT_TYPE (Wrd205.Obj));
  if ((Wrd206.uLng) == 50)
    goto label_80;
  Wrd201 = Wrd205;

DEFLABEL (label_79)
  (Wrd210.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd201.Obj);
  (* (Rhp++)) = (Wrd210.Obj);
  (Wrd209.pObj) = (& (Rhp [-2]));
  (Wrd207.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd209.pObj)));
  (Wrd214.Obj) = (current_block [OBJECT_14]);
  (* (Rhp++)) = (Wrd214.Obj);
  (* (Rhp++)) = (Wrd207.Obj);
  (Wrd213.pObj) = (& (Rhp [-2]));
  (Wrd211.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd213.pObj)));
  (Wrd215.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd211.Obj);
  (* (Rhp++)) = (Wrd215.Obj);
  (Wrd217.pObj) = (& (Rhp [-2]));
  (Wrd218.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd217.pObj)));
  (* (--Rsp)) = (Wrd218.Obj);
  (Wrd221.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd224.Obj) = ((Wrd221.pObj) [0]);
  (Wrd225.uLng) = (OBJECT_TYPE (Wrd224.Obj));
  if ((Wrd225.uLng) == 50)
    goto label_78;
  Wrd220 = Wrd224;

DEFLABEL (label_77)
  (Wrd229.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd220.Obj);
  (* (Rhp++)) = (Wrd229.Obj);
  (Wrd228.pObj) = (& (Rhp [-2]));
  (Wrd226.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd228.pObj)));
  (Wrd233.Obj) = (current_block [OBJECT_15]);
  (* (Rhp++)) = (Wrd233.Obj);
  (* (Rhp++)) = (Wrd226.Obj);
  (Wrd232.pObj) = (& (Rhp [-2]));
  (Wrd230.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd232.pObj)));
  (Wrd234.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd230.Obj);
  (* (Rhp++)) = (Wrd234.Obj);
  (Wrd236.pObj) = (& (Rhp [-2]));
  (Wrd237.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd236.pObj)));
  (* (--Rsp)) = (Wrd237.Obj);
  (Wrd240.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd243.Obj) = ((Wrd240.pObj) [0]);
  (Wrd244.uLng) = (OBJECT_TYPE (Wrd243.Obj));
  if ((Wrd244.uLng) == 50)
    goto label_76;
  Wrd239 = Wrd243;

DEFLABEL (label_75)
  (Wrd248.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd239.Obj);
  (* (Rhp++)) = (Wrd248.Obj);
  (Wrd247.pObj) = (& (Rhp [-2]));
  (Wrd245.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd247.pObj)));
  (Wrd252.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd252.Obj);
  (* (Rhp++)) = (Wrd245.Obj);
  (Wrd251.pObj) = (& (Rhp [-2]));
  (Wrd249.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd251.pObj)));
  (Wrd253.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd249.Obj);
  (* (Rhp++)) = (Wrd253.Obj);
  (Wrd255.pObj) = (& (Rhp [-2]));
  (Wrd256.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd255.pObj)));
  (* (--Rsp)) = (Wrd256.Obj);
  (Wrd259.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd262.Obj) = ((Wrd259.pObj) [0]);
  (Wrd263.uLng) = (OBJECT_TYPE (Wrd262.Obj));
  if ((Wrd263.uLng) == 50)
    goto label_74;
  Wrd258 = Wrd262;

DEFLABEL (label_73)
  (Wrd267.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd258.Obj);
  (* (Rhp++)) = (Wrd267.Obj);
  (Wrd266.pObj) = (& (Rhp [-2]));
  (Wrd264.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd266.pObj)));
  (Wrd271.Obj) = (current_block [OBJECT_17]);
  (* (Rhp++)) = (Wrd271.Obj);
  (* (Rhp++)) = (Wrd264.Obj);
  (Wrd270.pObj) = (& (Rhp [-2]));
  (Wrd268.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd270.pObj)));
  (Wrd272.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd268.Obj);
  (* (Rhp++)) = (Wrd272.Obj);
  (Wrd274.pObj) = (& (Rhp [-2]));
  (Wrd275.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd274.pObj)));
  (* (--Rsp)) = (Wrd275.Obj);
  (Wrd278.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14]));
  (Wrd281.Obj) = ((Wrd278.pObj) [0]);
  (Wrd282.uLng) = (OBJECT_TYPE (Wrd281.Obj));
  if ((Wrd282.uLng) == 50)
    goto label_72;
  Wrd277 = Wrd281;

DEFLABEL (label_71)
  (Wrd286.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd277.Obj);
  (* (Rhp++)) = (Wrd286.Obj);
  (Wrd285.pObj) = (& (Rhp [-2]));
  (Wrd283.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd285.pObj)));
  (Wrd290.Obj) = (current_block [OBJECT_18]);
  (* (Rhp++)) = (Wrd290.Obj);
  (* (Rhp++)) = (Wrd283.Obj);
  (Wrd289.pObj) = (& (Rhp [-2]));
  (Wrd287.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd289.pObj)));
  (Wrd291.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd287.Obj);
  (* (Rhp++)) = (Wrd291.Obj);
  (Wrd293.pObj) = (& (Rhp [-2]));
  (Wrd294.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd293.pObj)));
  (* (--Rsp)) = (Wrd294.Obj);
  (Wrd296.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15]));
  (Wrd299.Obj) = ((Wrd296.pObj) [0]);
  (Wrd300.uLng) = (OBJECT_TYPE (Wrd299.Obj));
  if ((Wrd300.uLng) == 50)
    goto label_70;
  Wrd295 = Wrd299;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd295.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_6);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 3);

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd296.pObj));

DEFLABEL (label_64)
  (Wrd295.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21])), (Wrd278.pObj));

DEFLABEL (label_63)
  (Wrd277.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd259.pObj));

DEFLABEL (label_62)
  (Wrd258.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd240.pObj));

DEFLABEL (label_61)
  (Wrd239.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd221.pObj));

DEFLABEL (label_60)
  (Wrd220.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd202.pObj));

DEFLABEL (label_59)
  (Wrd201.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16])), (Wrd183.pObj));

DEFLABEL (label_58)
  (Wrd182.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd164.pObj));

DEFLABEL (label_57)
  (Wrd163.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14])), (Wrd145.pObj));

DEFLABEL (label_56)
  (Wrd144.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd126.pObj));

DEFLABEL (label_55)
  (Wrd125.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12])), (Wrd107.pObj));

DEFLABEL (label_54)
  (Wrd106.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd88.pObj));

DEFLABEL (label_53)
  (Wrd87.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10])), (Wrd69.pObj));

DEFLABEL (label_52)
  (Wrd68.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd50.pObj));

DEFLABEL (label_51)
  (Wrd49.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd31.pObj));

DEFLABEL (label_50)
  (Wrd30.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd12.pObj));

DEFLABEL (label_49)
  (Wrd11.Obj) = Rvl;
  goto label_99;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_xform_so_d08500b9c2c6f321 [30] =
  {
    { "xform_so_code_1", 6, xform_so_code_1 },
    { "xform_so_code_2", 1, xform_so_code_2 },
    { "xform_so_code_3", 26, xform_so_code_3 },
    { "xform_so_code_4", 3, xform_so_code_4 },
    { "xform_so_code_5", 4, xform_so_code_5 },
    { "xform_so_code_6", 3, xform_so_code_6 },
    { "xform_so_code_7", 1, xform_so_code_7 },
    { "xform_so_code_8", 5, xform_so_code_8 },
    { "xform_so_code_9", 3, xform_so_code_9 },
    { "xform_so_code_10", 5, xform_so_code_10 },
    { "xform_so_code_11", 36, xform_so_code_11 },
    { "xform_so_code_12", 3, xform_so_code_12 },
    { "xform_so_code_13", 7, xform_so_code_13 },
    { "xform_so_code_14", 10, xform_so_code_14 },
    { "xform_so_code_15", 17, xform_so_code_15 },
    { "xform_so_code_16", 9, xform_so_code_16 },
    { "xform_so_code_17", 7, xform_so_code_17 },
    { "xform_so_code_18", 5, xform_so_code_18 },
    { "xform_so_code_19", 1, xform_so_code_19 },
    { "xform_so_code_20", 6, xform_so_code_20 },
    { "xform_so_code_21", 4, xform_so_code_21 },
    { "xform_so_code_22", 11, xform_so_code_22 },
    { "xform_so_code_23", 1, xform_so_code_23 },
    { "xform_so_code_24", 6, xform_so_code_24 },
    { "xform_so_code_25", 5, xform_so_code_25 },
    { "xform_so_code_26", 8, xform_so_code_26 },
    { "xform_so_code_27", 2, xform_so_code_27 },
    { "xform_so_code_28", 3, xform_so_code_28 },
    { "xform_so_code_29", 3, xform_so_code_29 },
    { "xform_so_code_30", 2, xform_so_code_30 }
  };

int
decl_xform_so_d08500b9c2c6f321 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_xform_so_d08500b9c2c6f321);
  return (0);
}

DECLARE_COMPILED_CODE ("xform.so", 21, decl_xform_so_d08500b9c2c6f321, xform_so_d08500b9c2c6f321)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_xform_so_data_d08500b9c2c6f321 [5251] =
  "\x7b\x3a\xbd\x09\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x07\x08\x28\x0d"
  "\xb9\x28\x0d\xba\x28\x0d\xbb\x28\x0d\xbc\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x82\x88\x28"
  "\xb3\x23\x22\x29\x21\x9f\x2b\xbe\x1d\xb0\x83\x88\x0d\x0c\x1d\xc2"
  "\xbf\x85\x0d\x1c\x0d\x1c\x0d\x1c\x25\x1b\x1b\x1b\x0d\x1c\x0d\x1c"
  "\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0c\x0c\x0c\x0c\x0c"
  "\x08\x8c\x28\xb2\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xba\x1d\xb0\x85\x88\x1b\x24\x28\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1b"
  "\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x08\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x1b"
  "\x1b\x24\x28\x1b\x28\x0d\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x82\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x08"
  "\x1b\x24\x28\x1b\x28\xb1\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x82\x1b\xc1\x1c"
  "\x0c\x08\xc3\x1c\x84\x1b\x0d\x24\x28\x1b\x28\x0d\x1c\x28\xb4\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x28\x1b\x28\x0d\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x85\x07\x08\x28\x0d"
  "\x28\xb1\x28\x1b\x28\xb4\x28\x1b\x28\x0d\x1c\x28\x0d\xbc\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x02\x88\x81\x0d\x1b\x83\x1b"
  "\xb7\x82\x08\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x08\x1b\x24"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\x0c\x1b\x24\x28\x0d\x28\x0d\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x24\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24"
  "\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x0d\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x24\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x24\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d"
  "\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08"
  "\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\xb8\x17\x1c\x88\x1b\xc3\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x08\x1b\x0d\x1c\x0d\x1c"
  "\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x1b"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x1b\xb4\x0d\x1c\x0d\xbc\x0d\x1c\x1b\x1b"
  "\x1b\x1b\x1b\x0d\x1b\x1b\xb3\x1b\x1b\x1b\x0d\x1b\x17\xb0\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\xb7\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb1\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\xb2\x2a\x1b\x2a\x1e\x1e\x1e\xb6\x2a\xb5\x2a\x17\x28\x0d\x26"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb4\x1b\x1b"
  "\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x02\x4f\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72"
  "\x63\x2f\x73\x66\x2f\x2e\x2f\x78\x66\x6f\x72\x6d\x2e\x69\x6e\x66"
  "\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x72\x6f\x6f\x74\x5d\x02\x05\x0b\x62\x6c\x6f\x63\x6b\x2f\x6d\x61"
  "\x6b\x65\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x06\x16\x74\x72"
  "\x61\x6e\x73\x66\x6f\x72\x6d\x2f\x74\x6f\x70\x2d\x6c\x65\x76\x65"
  "\x6c\x2d\x31\x04\x14\x76\x61\x72\x69\x61\x62\x6c\x65\x2f\x6d\x61"
  "\x6b\x65\x26\x62\x69\x6e\x64\x21\x05\x1b\x0e\x81\x85\x02\x1a\x0c"
  "\x81\x87\x02\x19\x0a\x81\x85\x02\x18\x08\x81\x87\x02\x17\x06\x81"
  "\x85\x02\x16\x04\x84\x06\x0d\x1b\x02\x06\x02\x1c\x04\x85\x08\x03"
  "\x02\x13\x75\x73\x75\x61\x6c\x2d\x69\x6e\x74\x65\x67\x72\x61\x74"
  "\x69\x6f\x6e\x73\x27\x4f\x70\x65\x6e\x20\x62\x6c\x6f\x63\x6b\x73"
  "\x20\x61\x6c\x6c\x6f\x77\x65\x64\x20\x6f\x6e\x6c\x79\x20\x61\x74"
  "\x20\x74\x6f\x70\x20\x6c\x65\x76\x65\x6c\x3a\x02\x0b\x76\x65\x63"
  "\x74\x6f\x72\x2d\x72\x65\x66\x0b\x74\x6f\x70\x2d\x6c\x65\x76\x65"
  "\x6c\x3f\x09\x10\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x62\x6c"
  "\x6f\x63\x6b\x0a\x0b\x72\x6f\x6f\x74\x2d\x62\x6c\x6f\x63\x6b\x0b"
  "\x04\x09\x0a\x0b\x13\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2f\x64"
  "\x69\x73\x70\x61\x74\x63\x68\x0c\x07\x76\x61\x6c\x75\x65\x73\x0d"
  "\x06\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64"
  "\x2d\x62\x69\x6e\x64\x02\x11\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x2f\x6d\x61\x6b\x65\x0e\x03\x12\x73\x63\x6f\x64\x65\x2d"
  "\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x3f\x0f\x04\x11\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x62\x69\x6e\x64\x10\x04"
  "\x0b\x73\x63\x6f\x64\x65\x2d\x77\x61\x6c\x6b\x11\x04\x06\x65\x72"
  "\x72\x6f\x72\x12\x04\x16\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b"
  "\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x13\x04\x05\x61\x73"
  "\x73\x71\x14\x02\x0b\x75\x69\x2d\x77\x61\x72\x6e\x69\x6e\x67\x15"
  "\x08\x16\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2f\x6f\x70\x65\x6e"
  "\x2d\x62\x6c\x6f\x63\x6b\x2a\x16\x0b\x36\x36\x81\x89\x02\x35\x34"
  "\x81\x89\x02\x34\x32\x81\x87\x02\x33\x30\x81\x87\x02\x32\x2e\x81"
  "\x89\x02\x31\x2c\x81\x89\x02\x30\x2a\x81\x85\x02\x2f\x28\x81\x8b"
  "\x02\x2e\x26\x81\x85\x02\x2d\x24\x81\x85\x02\x2c\x22\x81\x87\x02"
  "\x2b\x20\x81\x83\x02\x2a\x1e\x81\x83\x02\x29\x1c\x81\x85\x02\x28"
  "\x1a\x81\x83\x02\x27\x18\x81\x83\x02\x26\x16\x81\x85\x02\x25\x14"
  "\x81\x83\x02\x24\x12\x81\x83\x02\x23\x10\x81\x85\x02\x22\x0e\x81"
  "\x83\x02\x21\x0c\x81\x83\x02\x20\x0a\x81\x85\x02\x1f\x08\x81\x85"
  "\x02\x1e\x06\x81\x83\x02\x1d\x04\x86\x0a\x35\x5c\x17\x02\x3d\x54"
  "\x68\x69\x73\x20\x70\x72\x6f\x67\x72\x61\x6d\x20\x64\x6f\x65\x73"
  "\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x55\x53\x55\x41"
  "\x4c\x2d\x49\x4e\x54\x45\x47\x52\x41\x54\x49\x4f\x4e\x53\x20\x64"
  "\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2e\x41\x57\x69\x74\x68"
  "\x6f\x75\x74\x20\x74\x68\x69\x73\x20\x64\x65\x63\x6c\x61\x72\x61"
  "\x74\x69\x6f\x6e\x2c\x20\x74\x68\x65\x20\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x20\x77\x69\x6c\x6c\x20\x62\x65\x20\x75\x6e\x61\x62\x6c"
  "\x65\x20\x74\x6f\x20\x70\x65\x72\x66\x6f\x72\x6d\x41\x6d\x61\x6e"
  "\x79\x20\x6f\x70\x74\x69\x6d\x69\x7a\x61\x74\x69\x6f\x6e\x73\x2c"
  "\x20\x61\x6e\x64\x20\x61\x73\x20\x61\x20\x72\x65\x73\x75\x6c\x74"
  "\x20\x74\x68\x65\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64\x20\x70\x72"
  "\x6f\x67\x72\x61\x6d\x20\x77\x69\x6c\x6c\x20\x62\x65\x41\x73\x6c"
  "\x6f\x77\x65\x72\x20\x61\x6e\x64\x20\x70\x65\x72\x68\x61\x70\x73"
  "\x20\x6c\x61\x72\x67\x65\x72\x20\x74\x68\x61\x6e\x20\x69\x74\x20"
  "\x63\x6f\x75\x6c\x64\x20\x62\x65\x2e\x20\x20\x50\x6c\x65\x61\x73"
  "\x65\x20\x72\x65\x61\x64\x20\x74\x68\x65\x20\x4d\x49\x54\x43\x53"
  "\x63\x68\x65\x6d\x65\x20\x55\x73\x65\x72\x27\x73\x20\x47\x75\x69"
  "\x64\x65\x20\x66\x6f\x72\x20\x6d\x6f\x72\x65\x20\x69\x6e\x66\x6f"
  "\x72\x6d\x61\x74\x69\x6f\x6e\x20\x61\x62\x6f\x75\x74\x20\x55\x53"
  "\x55\x41\x4c\x2d\x49\x4e\x54\x45\x47\x52\x41\x54\x49\x4f\x4e\x53"
  "\x2e\x04\x03\x18\x77\x72\x69\x74\x65\x2d\x6e\x6f\x74\x69\x66\x69"
  "\x63\x61\x74\x69\x6f\x6e\x2d\x6c\x69\x6e\x65\x04\x0d\x77\x72\x69"
  "\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x04\x39\x08\x81\x85\x02\x38"
  "\x06\x83\x04\x37\x04\x82\x02\x07\x12\x02\x0c\x02\x04\x04\x6d\x61"
  "\x70\x18\x04\x11\x03\x3d\x0a\x81\x87\x02\x3c\x08\x81\x8b\x02\x3b"
  "\x06\x81\x85\x02\x3a\x04\x85\x08\x09\x13\x19\x02\x0c\x02\x04\x11"
  "\x02\x40\x08\x81\x87\x02\x3f\x06\x81\x8b\x02\x3e\x04\x85\x08\x07"
  "\x0f\x1a\x02\x08\x41\x04\x82\x02\x03\x1b\x02\x09\x04\x63\x64\x72"
  "\x1c\x0b\x0a\x03\x04\x14\x05\x12\x62\x6c\x6f\x63\x6b\x2f\x6c\x6f"
  "\x6f\x6b\x75\x70\x2d\x6e\x61\x6d\x65\x04\x04\x46\x0c\x81\x87\x02"
  "\x45\x0a\x81\x87\x02\x44\x08\x81\x8d\x02\x43\x06\x81\x85\x02\x42"
  "\x04\x84\x06\x0b\x19\x14\x02\x0a\x05\x05\x6d\x61\x70\x2a\x02\x49"
  "\x08\x81\x83\x02\x48\x06\x83\x04\x47\x04\x84\x06\x07\x0f\x1d\x02"
  "\x0b\x0d\x02\x04\x13\x05\x08\x16\x04\x4e\x0c\x81\x89\x02\x4d\x0a"
  "\x81\x89\x02\x4c\x08\x81\x89\x02\x4b\x06\x81\x8b\x02\x4a\x04\x85"
  "\x08\x0b\x19\x0d\x02\x0c\x1c\x04\x63\x61\x72\x1e\x17\x45\x78\x74"
  "\x72\x61\x6e\x65\x6f\x75\x73\x20\x61\x75\x78\x69\x6c\x69\x61\x72"
  "\x69\x65\x73\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x1f"
  "\x0c\x18\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x2f\x76\x61\x6c"
  "\x75\x65\x2d\x6d\x61\x72\x6b\x65\x72\x03\x04\x18\x04\x13\x64\x65"
  "\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x2f\x70\x61\x72\x73\x65"
  "\x20\x04\x04\x10\x03\x11\x73\x65\x71\x75\x65\x6e\x63\x65\x2d\x61"
  "\x63\x74\x69\x6f\x6e\x73\x21\x07\x10\x6f\x70\x65\x6e\x2d\x62\x6c"
  "\x6f\x63\x6b\x2f\x6d\x61\x6b\x65\x04\x11\x04\x12\x03\x12\x73\x63"
  "\x6f\x64\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x3f\x03"
  "\x10\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x6e\x61\x6d\x65"
  "\x03\x11\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x76\x61\x6c"
  "\x75\x65\x0c\x72\x4a\x81\x85\x02\x71\x48\x81\x85\x02\x70\x46\x81"
  "\x89\x02\x6f\x44\x81\x87\x02\x6e\x42\x81\x87\x02\x6d\x40\x81\x87"
  "\x02\x6c\x3e\x81\x8b\x02\x6b\x3c\x81\x87\x02\x6a\x3a\x81\x89\x02"
  "\x69\x38\x81\x87\x02\x68\x36\x81\x87\x02\x67\x34\x81\x85\x02\x66"
  "\x32\x81\x87\x02\x65\x30\x81\x87\x02\x64\x2e\x81\x8b\x02\x63\x2c"
  "\x81\x87\x02\x62\x2a\x81\x87\x02\x61\x28\x81\x89\x02\x60\x26\x81"
  "\x87\x02\x5f\x24\x81\x8b\x02\x5e\x22\x81\x89\x02\x5d\x20\x81\x89"
  "\x02\x5c\x1e\x81\x87\x02\x5b\x1c\x81\x89\x02\x5a\x1a\x81\x87\x02"
  "\x59\x18\x81\x87\x02\x58\x16\x81\x8b\x02\x57\x14\x81\x85\x02\x56"
  "\x12\x81\x87\x02\x55\x10\x81\x91\x02\x54\x0e\x81\x8f\x02\x53\x0c"
  "\x81\x8f\x02\x52\x0a\x81\x8f\x02\x51\x08\x81\x85\x02\x50\x06\x81"
  "\x8d\x02\x4f\x04\x88\x0e\x49\x6e\x22\x02\x0d\x03\x0e\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x2d\x6e\x61\x6d\x65\x05\x0f\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x2f\x6d\x61\x6b\x65\x04\x13\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x6c\x6f\x6f\x6b\x75\x70\x23\x04"
  "\x75\x08\x81\x89\x02\x74\x06\x81\x87\x02\x73\x04\x85\x08\x07\x11"
  "\x24\x02\x0e\x0c\x02\x04\x16\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x04\x23\x03\x16"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x2f\x73\x69\x64\x65\x2d\x65\x66"
  "\x66\x65\x63\x74\x21\x04\x11\x06\x10\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x2f\x6d\x61\x6b\x65\x06\x7c\x10\x81\x87\x02\x7b\x0e"
  "\x81\x89\x02\x7a\x0c\x81\x8b\x02\x79\x0a\x81\x89\x02\x78\x08\x81"
  "\x87\x02\x77\x06\x81\x87\x02\x76\x04\x85\x08\x0f\x1f\x25\x02\x0f"
  "\x04\x13\x6c\x61\x6d\x62\x64\x61\x2d\x63\x6f\x6d\x70\x6f\x6e\x65"
  "\x6e\x74\x73\x2a\x05\x04\x18\x04\x04\x10\x05\x19\x74\x72\x61\x6e"
  "\x73\x66\x6f\x72\x6d\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x62\x6f\x64\x79\x18\x09\x10\x62\x75\x69\x6c\x64\x2d\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x08\x86\x01\x16\x81\x97\x02\x85\x01\x14"
  "\x81\x95\x02\x84\x01\x12\x81\x97\x02\x83\x01\x10\x81\x93\x02\x82"
  "\x01\x0e\x81\x95\x02\x81\x01\x0c\x81\x91\x02\x80\x01\x0a\x81\x85"
  "\x02\x7f\x08\x81\x8d\x02\x7e\x06\x81\x8d\x02\x7d\x04\x85\x08\x15"
  "\x2b\x02\x10\x07\x69\x67\x6e\x6f\x72\x65\x1c\x1e\x03\x0a\x73\x65"
  "\x71\x75\x65\x6e\x63\x65\x3f\x09\x0f\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2f\x6d\x61\x6b\x65\x04\x20\x04\x0e\x73\x65\x71\x75\x65"
  "\x6e\x63\x65\x2f\x6d\x61\x6b\x65\x03\x0b\x72\x65\x66\x65\x72\x65"
  "\x6e\x63\x65\x3f\x05\x11\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f"
  "\x6e\x2f\x6d\x61\x6b\x65\x1e\x07\x97\x01\x24\x81\x99\x02\x96\x01"
  "\x22\x81\x95\x02\x95\x01\x20\x81\x97\x02\x94\x01\x1e\x81\x95\x02"
  "\x93\x01\x1c\x81\x95\x02\x92\x01\x1a\x81\x93\x02\x91\x01\x18\x81"
  "\x93\x02\x90\x01\x16\x81\x93\x02\x8f\x01\x14\x81\x93\x02\x8e\x01"
  "\x12\x81\x93\x02\x8d\x01\x10\x81\x93\x02\x8c\x01\x0e\x81\x93\x02"
  "\x8b\x01\x0c\x81\x93\x02\x8a\x01\x0a\x81\x95\x02\x89\x01\x08\x81"
  "\x91\x02\x88\x01\x06\x81\x8f\x02\x87\x01\x04\x89\x10\x23\x3b\x1c"
  "\x02\x11\x1f\x0c\x02\x03\x0f\x04\x11\x04\x13\x04\x20\x05\x15\x74"
  "\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2f\x6f\x70\x65\x6e\x2d\x62\x6c"
  "\x6f\x63\x6b\x1f\x06\xa0\x01\x14\x81\x87\x02\x9f\x01\x12\x81\x8b"
  "\x02\x9e\x01\x10\x81\x89\x02\x9d\x01\x0e\x81\x89\x02\x9c\x01\x0c"
  "\x81\x87\x02\x9b\x01\x0a\x81\x89\x02\x9a\x01\x08\x81\x8b\x02\x99"
  "\x01\x06\x81\x87\x02\x98\x01\x04\x85\x08\x13\x26\x13\x02\x12\x11"
  "\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x36\x55\x6e\x73\x63\x61\x6e\x6e\x65\x64\x20\x64\x65\x66\x69\x6e"
  "\x69\x74\x69\x6f\x6e\x20\x65\x6e\x63\x6f\x75\x6e\x74\x65\x72\x65"
  "\x64\x20\x28\x75\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x70\x72\x6f"
  "\x63\x65\x65\x64\x29\x3a\x0a\x02\x04\x16\x64\x65\x66\x69\x6e\x69"
  "\x74\x69\x6f\x6e\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x02"
  "\x15\x6d\x61\x6b\x65\x2d\x74\x68\x65\x2d\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x04\x12\x06\x17\x74\x72\x61\x6e\x73\x66\x6f"
  "\x72\x6d\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2a\x12"
  "\x03\x19\x6d\x61\x6b\x65\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x04\x11\x6d\x61\x6b\x65"
  "\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x07\xa7\x01\x10"
  "\x81\x8d\x02\xa6\x01\x0e\x81\x8b\x02\xa5\x01\x0c\x81\x89\x02\xa4"
  "\x01\x0a\x81\x87\x02\xa3\x01\x08\x81\x87\x02\xa2\x01\x06\x81\x87"
  "\x02\xa1\x01\x04\x85\x08\x0f\x24\x0f\x02\x13\x0c\x02\x04\x12\x61"
  "\x63\x63\x65\x73\x73\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73"
  "\x04\x11\x06\x0c\x61\x63\x63\x65\x73\x73\x2f\x6d\x61\x6b\x65\x04"
  "\xac\x01\x0c\x81\x87\x02\xab\x01\x0a\x81\x89\x02\xaa\x01\x08\x81"
  "\x8b\x02\xa9\x01\x06\x81\x87\x02\xa8\x01\x04\x85\x08\x0b\x17\x02"
  "\x14\x06\x12\x02\xad\x01\x04\x85\x08\x03\x26\x02\x15\x0c\x02\x04"
  "\x17\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x63\x6f\x6d"
  "\x70\x6f\x6e\x65\x6e\x74\x73\x04\x11\x05\x16\x74\x72\x61\x6e\x73"
  "\x66\x6f\x72\x6d\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x73"
  "\x27\x06\x12\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2f\x25"
  "\x6d\x61\x6b\x65\x05\xb3\x01\x0e\x81\x89\x02\xb2\x01\x0c\x81\x87"
  "\x02\xb1\x01\x0a\x81\x89\x02\xb0\x01\x08\x81\x8b\x02\xaf\x01\x06"
  "\x81\x87\x02\xae\x01\x04\x86\x0a\x0d\x1b\x28\x02\x16\x0c\x02\x03"
  "\x13\x63\x6f\x6d\x6d\x65\x6e\x74\x2d\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x04\x11\x03\xb7\x01\x0a\x81\x87\x02\xb6\x01\x08\x81"
  "\x8b\x02\xb5\x01\x06\x81\x87\x02\xb4\x01\x04\x85\x08\x09\x13\x29"
  "\x02\x17\x0c\x02\x04\x17\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61"
  "\x6c\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x04\x11\x06\x11"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x2f\x6d\x61\x6b\x65"
  "\x04\xc2\x01\x18\x81\x87\x02\xc1\x01\x16\x81\x89\x02\xc0\x01\x14"
  "\x81\x87\x02\xbf\x01\x12\x81\x8b\x02\xbe\x01\x10\x81\x89\x02\xbd"
  "\x01\x0e\x81\x87\x02\xbc\x01\x0c\x81\x8b\x02\xbb\x01\x0a\x81\x89"
  "\x02\xba\x01\x08\x81\x8b\x02\xb9\x01\x06\x81\x89\x02\xb8\x01\x04"
  "\x85\x08\x17\x23\x2a\x02\x18\x04\x0e\x63\x6f\x6e\x73\x74\x61\x6e"
  "\x74\x2f\x6d\x61\x6b\x65\x02\xc3\x01\x04\x85\x08\x03\x2b\x02\x19"
  "\x0c\x02\x04\x17\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2d"
  "\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x04\x20\x04\x11\x05\x1e"
  "\x05\xc9\x01\x0e\x81\x87\x02\xc8\x01\x0c\x81\x87\x02\xc7\x01\x0a"
  "\x81\x8b\x02\xc6\x01\x08\x81\x87\x02\xc5\x01\x06\x81\x87\x02\xc4"
  "\x01\x04\x85\x08\x0d\x1b\x20\x02\x1a\x0c\x02\x03\x11\x64\x65\x6c"
  "\x61\x79\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x04\x0b\x64"
  "\x65\x6c\x61\x79\x2f\x6d\x61\x6b\x65\x04\x11\x04\xce\x01\x0c\x81"
  "\x87\x02\xcd\x01\x0a\x81\x8b\x02\xcc\x01\x08\x81\x89\x02\xcb\x01"
  "\x06\x81\x87\x02\xca\x01\x04\x85\x08\x0b\x17\x1e\x02\x1b\x0c\x02"
  "\x04\x17\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x63\x6f"
  "\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x04\x11\x05\x11\x64\x69\x73\x6a"
  "\x75\x6e\x63\x74\x69\x6f\x6e\x2f\x6d\x61\x6b\x65\x04\xd6\x01\x12"
  "\x81\x87\x02\xd5\x01\x10\x81\x87\x02\xd4\x01\x0e\x81\x87\x02\xd3"
  "\x01\x0c\x81\x8b\x02\xd2\x01\x0a\x81\x87\x02\xd1\x01\x08\x81\x8b"
  "\x02\xd0\x01\x06\x81\x87\x02\xcf\x01\x04\x85\x08\x11\x1d\x11\x02"
  "\x1c\x03\x15\x71\x75\x6f\x74\x61\x74\x69\x6f\x6e\x2d\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x04\x15\x74\x72\x61\x6e\x73\x66\x6f"
  "\x72\x6d\x2f\x71\x75\x6f\x74\x61\x74\x69\x6f\x6e\x2a\x2c\x03\xd8"
  "\x01\x06\x81\x87\x02\xd7\x01\x04\x85\x08\x05\x0d\x2d\x02\x1d\x04"
  "\x14\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2f\x74\x6f\x70\x2d\x6c"
  "\x65\x76\x65\x6c\x2e\x05\x0f\x71\x75\x6f\x74\x61\x74\x69\x6f\x6e"
  "\x2f\x6d\x61\x6b\x65\x03\xdb\x01\x08\x81\x87\x02\xda\x01\x06\x81"
  "\x87\x02\xd9\x01\x04\x84\x06\x07\x10\x2f\x02\x1e\x03\x21\x04\x0f"
  "\x73\x65\x71\x75\x65\x6e\x63\x65\x2f\x25\x6d\x61\x6b\x65\x05\x27"
  "\x04\xde\x01\x08\x81\x89\x02\xdd\x01\x06\x81\x87\x02\xdc\x01\x04"
  "\x85\x08\x07\x11\x21\x02\x1f\x03\x0e\x62\x6c\x6f\x63\x6b\x2f\x75"
  "\x6e\x73\x61\x66\x65\x21\x04\x15\x74\x68\x65\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x6d\x61\x6b\x65\x03\xe0\x01\x06"
  "\x81\x87\x02\xdf\x01\x04\x85\x08\x05\x0d\x1f\x30\x30\x11\x6c\x6f"
  "\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x07\x61"
  "\x63\x63\x65\x73\x73\x0b\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x0c\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x08\x63\x6f\x6d"
  "\x6d\x65\x6e\x74\x0c\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c"
  "\x0c\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x0b\x64\x65\x66"
  "\x69\x6e\x69\x74\x69\x6f\x6e\x06\x64\x65\x6c\x61\x79\x0c\x64\x69"
  "\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x07\x6c\x61\x6d\x62\x64\x61"
  "\x0b\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x0a\x71\x75\x6f\x74"
  "\x61\x74\x69\x6f\x6e\x09\x73\x65\x71\x75\x65\x6e\x63\x65\x10\x74"
  "\x68\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x09\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x0c\x1a\x74\x72\x61\x6e\x73\x66\x6f"
  "\x72\x6d\x2f\x74\x68\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x30\x13\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2f\x73\x65"
  "\x71\x75\x65\x6e\x63\x65\x0c\x2c\x14\x74\x72\x61\x6e\x73\x66\x6f"
  "\x72\x6d\x2f\x71\x75\x6f\x74\x61\x74\x69\x6f\x6e\x2c\x16\x74\x72"
  "\x61\x6e\x73\x66\x6f\x72\x6d\x2f\x64\x69\x73\x6a\x75\x6e\x63\x74"
  "\x69\x6f\x6e\x31\x10\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2f\x64"
  "\x65\x6c\x61\x79\x32\x16\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2f"
  "\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x33\x13\x74\x72\x61"
  "\x6e\x73\x66\x6f\x72\x6d\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74\x34"
  "\x16\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2f\x63\x6f\x6e\x64\x69"
  "\x74\x69\x6f\x6e\x61\x6c\x35\x12\x74\x72\x61\x6e\x73\x66\x6f\x72"
  "\x6d\x2f\x63\x6f\x6d\x6d\x65\x6e\x74\x36\x12\x16\x74\x72\x61\x6e"
  "\x73\x66\x6f\x72\x6d\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f"
  "\x6e\x12\x11\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2f\x61\x63\x63"
  "\x65\x73\x73\x37\x15\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2f\x64"
  "\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x38\x18\x11\x74\x72\x61\x6e"
  "\x73\x66\x6f\x72\x6d\x2f\x6c\x61\x6d\x62\x64\x61\x18\x15\x74\x72"
  "\x61\x6e\x73\x66\x6f\x72\x6d\x2f\x61\x73\x73\x69\x67\x6e\x6d\x65"
  "\x6e\x74\x13\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2f\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x39\x16\x1f\x10\x23\x0e\x15\x74\x72\x61\x6e"
  "\x73\x66\x6f\x72\x6d\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x27\x15\x0b\x0a\x09\x14\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2f"
  "\x72\x65\x63\x75\x72\x73\x69\x76\x65\x2e\x22\x04\x21\x04\x2f\x04"
  "\x2d\x04\x11\x04\x1e\x04\x20\x04\x2b\x04\x2a\x04\x29\x04\x28\x04"
  "\x26\x04\x04\x0f\x04\x13\x04\x1c\x04\x04\x25\x04\x24\x04\x22\x04"
  "\x0d\x04\x1d\x04\x14\x04\x1b\x04\x1a\x04\x19\x04\x04\x17\x04\x04"
  "\x04\x22\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69"
  "\x70\x6c\x65\x02\x39\x30\x0c\x2c\x1f\x18\x31\x32\x38\x33\x35\x36"
  "\x12\x37\x34\x11\x04\x12\x6d\x61\x6b\x65\x2d\x73\x63\x6f\x64\x65"
  "\x2d\x77\x61\x6c\x6b\x65\x72\x02\x15\x2c\x80\x80\x04\x14\x2a\x81"
  "\x81\x02\x13\x28\x81\x81\x02\x12\x26\x81\x87\x02\x11\x24\x81\x8b"
  "\x02\x10\x22\x81\x8b\x02\x0f\x20\x81\x8b\x02\x0e\x1e\x81\x8b\x02"
  "\x0d\x1c\x81\x8b\x02\x0c\x1a\x81\x8b\x02\x0b\x18\x81\x8b\x02\x0a"
  "\x16\x81\x8b\x02\x09\x14\x81\x8b\x02\x08\x12\x81\x8b\x02\x07\x10"
  "\x81\x8b\x02\x06\x0e\x81\x8b\x02\x05\x0c\x81\x8b\x02\x04\x0a\x81"
  "\x8b\x02\x03\x08\x81\x8b\x02\x02\x06\x81\x89\x02\x01\x04\x81\x83"
  "\x02\x2b\x5b";

SCHEME_OBJECT *
xform_so_data_d08500b9c2c6f321 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_xform_so_data_d08500b9c2c6f321 [0]))), (sizeof (prog_xform_so_data_d08500b9c2c6f321)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_26]));
}

DECLARE_COMPILED_DATA_NS ("xform.so", xform_so_data_d08500b9c2c6f321)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("xform.so", "89b5750e58f170d0")
