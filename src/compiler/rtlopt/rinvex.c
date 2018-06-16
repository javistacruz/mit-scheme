/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:25-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_8 7
#define ENVIRONMENT_LABEL_1_3 16
#define DEBUGGING_LABEL_1_2 15
#define EXECUTE_CACHE_1_9 9
#define EXECUTE_CACHE_1_7 11
#define FREE_REFERENCE_1_0 14
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rinvex_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_1_4);
      goto invertible_expression_elimination_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invertible_expression_elimination_5)
DEFLABEL (invertible_expression_elimination_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_6 5
#define LABEL_2_5 7
#define LABEL_2_8 9
#define LABEL_2_12 11
#define TAG_2_13 4
#define LABEL_2_10 13
#define TAG_2_11 5
#define LABEL_2_18 15
#define LABEL_2_19 17
#define LABEL_2_20 19
#define LABEL_2_21 21
#define LABEL_2_22 23
#define LABEL_2_23 25
#define LABEL_2_24 27
#define LABEL_2_25 29
#define LABEL_2_26 31
#define LABEL_2_27 33
#define LABEL_2_28 35
#define LABEL_2_29 37
#define LABEL_2_15 39
#define LABEL_2_16 41
#define LABEL_2_31 43
#define LABEL_2_33 45
#define LABEL_2_34 47
#define ENVIRONMENT_LABEL_2_3 80
#define DEBUGGING_LABEL_2_2 79
#define OBJECT_2_3 78
#define OBJECT_2_2 77
#define OBJECT_2_1 76
#define OBJECT_2_0 75
#define EXECUTE_CACHE_2_36 49
#define EXECUTE_CACHE_2_35 51
#define EXECUTE_CACHE_2_32 53
#define EXECUTE_CACHE_2_30 55
#define EXECUTE_CACHE_2_17 57
#define EXECUTE_CACHE_2_14 59
#define EXECUTE_CACHE_2_9 61
#define EXECUTE_CACHE_2_7 63
#define FREE_REFERENCE_2_3 66
#define FREE_REFERENCE_2_2 67
#define FREE_REFERENCE_2_1 68
#define FREE_REFERENCE_2_0 69
#define FREE_ASSIGNMENT_2_3 71
#define FREE_ASSIGNMENT_2_2 72
#define FREE_ASSIGNMENT_2_1 73
#define FREE_ASSIGNMENT_2_0 74
#define FREE_REFERENCES_LABEL_2_0 48
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rinvex_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd201;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd161;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd162;
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
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      goto walk_rgraph_34;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto label_36;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_2_12);
      goto lambda_53;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto swapB_52;

    case 6:
      current_block = (Rpc - LABEL_2_18);
      goto label_37;

    case 7:
      current_block = (Rpc - LABEL_2_19);
      goto label_38;

    case 8:
      current_block = (Rpc - LABEL_2_20);
      goto label_39;

    case 9:
      current_block = (Rpc - LABEL_2_21);
      goto label_40;

    case 10:
      current_block = (Rpc - LABEL_2_22);
      goto label_41;

    case 11:
      current_block = (Rpc - LABEL_2_23);
      goto label_42;

    case 12:
      current_block = (Rpc - LABEL_2_24);
      goto label_43;

    case 13:
      current_block = (Rpc - LABEL_2_25);
      goto label_44;

    case 14:
      current_block = (Rpc - LABEL_2_26);
      goto label_45;

    case 15:
      current_block = (Rpc - LABEL_2_27);
      goto label_46;

    case 16:
      current_block = (Rpc - LABEL_2_28);
      goto label_47;

    case 17:
      current_block = (Rpc - LABEL_2_29);
      goto label_48;

    case 18:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_6;

    case 19:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_5;

    case 20:
      current_block = (Rpc - LABEL_2_31);
      goto lambda_4;

    case 21:
      current_block = (Rpc - LABEL_2_33);
      goto label_49;

    case 22:
      current_block = (Rpc - LABEL_2_34);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_rgraph_51)
DEFLABEL (walk_rgraph_34)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_56;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd17.Lng))))
    goto label_56;
  (Wrd11.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_55)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd37.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_10])));
  Rhp += 4;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd37.pObj)));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd30.pObj) = (& (Rhp [-1]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd30.pObj)));
  (Rsp [2]) = (Wrd31.Obj);
  (Wrd36.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd34.pObj) = (& (Rhp [-1]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd34.pObj)));
  (Rsp [4]) = (Wrd35.Obj);
  Wrd27 = Wrd37;
  ((Wrd27.pObj) [2]) = (Wrd35.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  ((Wrd27.pObj) [3]) = (Wrd25.Obj);
  ((Wrd27.pObj) [4]) = (Wrd31.Obj);
  ((Wrd27.pObj) [5]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_12])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  ((Wrd12.pObj) [2]) = (Wrd8.Obj);
  (Rsp [5]) = (Wrd38.Obj);
  (Rsp [4]) = (Wrd11.Obj);
  (Rsp [3]) = (Wrd38.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (label_56)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_2_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (lambda_53)
  CLOSURE_HEADER (LABEL_2_12);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_16);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_31]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_32]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_15);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_30]));

DEFLABEL (swapB_52)
  CLOSURE_HEADER (LABEL_2_10);

DEFLABEL (swapB_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_92;

DEFLABEL (label_91)
  Wrd5 = Wrd9;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_89;

DEFLABEL (label_88)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_87)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [5]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_86;

DEFLABEL (label_85)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_84)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_83;

DEFLABEL (label_82)
  Wrd57 = Wrd61;

DEFLABEL (label_81)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_80;

DEFLABEL (label_79)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_78)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [4]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_77;

DEFLABEL (label_76)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_75)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_74;

DEFLABEL (label_73)
  Wrd109 = Wrd113;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_71;

DEFLABEL (label_70)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_69)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [3]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_68;

DEFLABEL (label_67)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_66)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_3]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_65;

DEFLABEL (label_64)
  Wrd161 = Wrd165;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_3]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_62;

DEFLABEL (label_61)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_60)
  (Wrd188.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [2]);
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (* (--Rsp)) = (Wrd193.Obj);
  ((Wrd192.pObj) [0]) = (Wrd188.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_3]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_59;

DEFLABEL (label_58)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_57)
  Rvl = (current_block [OBJECT_2_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_59)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_58;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_29])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_48)
  goto label_57;

DEFLABEL (label_62)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_61;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_28])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_47)
  goto label_60;

DEFLABEL (label_65)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_64;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_27])), (Wrd162.pObj));

DEFLABEL (label_46)
  (Wrd161.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_68)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_67;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_26])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_45)
  goto label_66;

DEFLABEL (label_71)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_70;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_25])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_44)
  goto label_69;

DEFLABEL (label_74)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_73;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_24])), (Wrd110.pObj));

DEFLABEL (label_43)
  (Wrd109.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_77)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_76;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_23])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_42)
  goto label_75;

DEFLABEL (label_80)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_79;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_22])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_41)
  goto label_78;

DEFLABEL (label_83)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_82;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_21])), (Wrd58.pObj));

DEFLABEL (label_40)
  (Wrd57.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_86)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_85;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_20])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_39)
  goto label_84;

DEFLABEL (label_89)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_88;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_19])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_38)
  goto label_87;

DEFLABEL (label_92)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_91;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_18])), (Wrd6.pObj));

DEFLABEL (label_37)
  (Wrd5.Obj) = Rvl;
  goto label_90;

DEFLABEL (lambda_54)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_2_31);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_94;
  Wrd5 = Wrd9;

DEFLABEL (label_93)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_34]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_35]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_34);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_36]));

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_33])), (Wrd6.pObj));

DEFLABEL (label_49)
  (Wrd5.Obj) = Rvl;
  goto label_93;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_9 9
#define LABEL_3_10 11
#define LABEL_3_11 13
#define LABEL_3_12 15
#define LABEL_3_13 17
#define LABEL_3_14 19
#define LABEL_3_15 21
#define LABEL_3_16 23
#define LABEL_3_6 25
#define LABEL_3_19 27
#define LABEL_3_18 29
#define LABEL_3_22 31
#define LABEL_3_21 33
#define ENVIRONMENT_LABEL_3_3 55
#define DEBUGGING_LABEL_3_2 54
#define OBJECT_3_3 53
#define OBJECT_3_2 52
#define OBJECT_3_1 51
#define OBJECT_3_0 50
#define EXECUTE_CACHE_3_23 35
#define EXECUTE_CACHE_3_20 37
#define EXECUTE_CACHE_3_17 39
#define EXECUTE_CACHE_3_8 41
#define FREE_REFERENCE_3_2 44
#define FREE_REFERENCE_3_1 45
#define FREE_REFERENCE_3_0 46
#define FREE_ASSIGNMENT_3_1 48
#define FREE_ASSIGNMENT_3_0 49
#define FREE_REFERENCES_LABEL_3_0 34
#define NUMBER_OF_LINKER_SECTIONS_3_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rinvex_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd82;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd86;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd85;
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
      current_block = (Rpc - LABEL_3_4);
      goto continue_walk_9;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_3_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_3_12);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_3_13);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_3_14);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_3_15);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_3_16);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_1;

    case 12:
      current_block = (Rpc - LABEL_3_19);
      goto label_21;

    case 13:
      current_block = (Rpc - LABEL_3_18);
      goto continuation_2;

    case 14:
      current_block = (Rpc - LABEL_3_22);
      goto label_22;

    case 15:
      current_block = (Rpc - LABEL_3_21);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continue_walk_24)
DEFLABEL (continue_walk_9)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_52;
  Wrd6 = Wrd10;

DEFLABEL (label_51)
  if ((Wrd6.Obj) == (current_block [OBJECT_3_0]))
    goto label_43;
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_42;
  Wrd14 = Wrd18;

DEFLABEL (label_41)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_40;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_39)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_38;
  Wrd28 = Wrd32;

DEFLABEL (label_37)
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_36;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd34.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_35)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_0]));
  (Wrd49.Obj) = ((Wrd41.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd41.pObj) [0]) = (Wrd34.Obj);

DEFLABEL (label_32)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_31;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [0]);

DEFLABEL (label_30)
  (Wrd62.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_1]));
  (Wrd70.Obj) = ((Wrd62.pObj) [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd62.pObj) [0]) = (Wrd53.Obj);

DEFLABEL (label_27)
  (Wrd77.Obj) = (Rsp [0]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 1))
    goto label_26;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd74.Obj) = ((Wrd76.pObj) [1]);

DEFLABEL (label_25)
  (Rsp [0]) = (Wrd74.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (label_26)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_19)
  (Wrd74.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_29)
  if ((Wrd70.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_15])), (Wrd62.pObj), (Wrd53.Obj));

DEFLABEL (label_18)
  goto label_27;

DEFLABEL (label_31)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_17)
  (Wrd53.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_34)
  if ((Wrd49.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_13])), (Wrd41.pObj), (Wrd34.Obj));

DEFLABEL (label_16)
  goto label_32;

DEFLABEL (label_36)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_15)
  (Wrd34.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_11])), (Wrd29.pObj));

DEFLABEL (label_14)
  (Wrd28.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_9])), (Wrd15.pObj));

DEFLABEL (label_12)
  (Wrd14.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd87.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd90.Obj) = ((Wrd87.pObj) [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if ((Wrd91.uLng) == 50)
    goto label_50;
  Wrd86 = Wrd90;

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd86.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  Rvl = (current_block [OBJECT_3_3]);
  goto pop_return;

DEFLABEL (label_44)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_48;
  Wrd12 = Wrd16;

DEFLABEL (label_47)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_20]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_46;
  Wrd8 = Wrd12;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_22])), (Wrd9.pObj));

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_19])), (Wrd13.pObj));

DEFLABEL (label_21)
  (Wrd12.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_7])), (Wrd87.pObj));

DEFLABEL (label_20)
  (Wrd86.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_5])), (Wrd7.pObj));

DEFLABEL (label_11)
  (Wrd6.Obj) = Rvl;
  goto label_51;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_8 9
#define LABEL_4_10 11
#define LABEL_4_7 13
#define LABEL_4_12 15
#define LABEL_4_15 17
#define LABEL_4_9 19
#define LABEL_4_13 21
#define LABEL_4_16 23
#define LABEL_4_22 25
#define LABEL_4_20 27
#define LABEL_4_18 29
#define LABEL_4_29 31
#define LABEL_4_31 33
#define LABEL_4_33 35
#define LABEL_4_27 37
#define LABEL_4_35 39
#define LABEL_4_23 41
#define LABEL_4_37 43
#define LABEL_4_39 45
#define LABEL_4_34 47
#define LABEL_4_40 49
#define LABEL_4_41 51
#define LABEL_4_32 53
#define LABEL_4_42 55
#define LABEL_4_30 57
#define LABEL_4_45 59
#define LABEL_4_44 61
#define LABEL_4_43 63
#define LABEL_4_48 65
#define LABEL_4_50 67
#define LABEL_4_53 69
#define LABEL_4_54 71
#define LABEL_4_47 73
#define LABEL_4_55 75
#define LABEL_4_49 77
#define LABEL_4_56 79
#define LABEL_4_52 81
#define ENVIRONMENT_LABEL_4_3 121
#define DEBUGGING_LABEL_4_2 120
#define OBJECT_4_4 119
#define OBJECT_4_3 118
#define OBJECT_4_2 117
#define OBJECT_4_1 116
#define OBJECT_4_0 115
#define EXECUTE_CACHE_4_51 83
#define EXECUTE_CACHE_4_46 85
#define EXECUTE_CACHE_4_38 87
#define EXECUTE_CACHE_4_36 89
#define EXECUTE_CACHE_4_28 91
#define EXECUTE_CACHE_4_26 93
#define EXECUTE_CACHE_4_25 95
#define EXECUTE_CACHE_4_24 97
#define EXECUTE_CACHE_4_21 99
#define EXECUTE_CACHE_4_19 101
#define EXECUTE_CACHE_4_17 103
#define EXECUTE_CACHE_4_14 105
#define EXECUTE_CACHE_4_11 107
#define FREE_REFERENCE_4_2 110
#define FREE_REFERENCE_4_1 111
#define FREE_REFERENCE_4_0 112
#define FREE_ASSIGNMENT_4_0 114
#define FREE_REFERENCES_LABEL_4_0 82
#define NUMBER_OF_LINKER_SECTIONS_4_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rinvex_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd27;
  machine_word Wrd6;
  machine_word Wrd41;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd18;
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
      goto walk_bblock_38;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_40;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto loop_10;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_41;

    case 4:
      current_block = (Rpc - LABEL_4_10);
      goto label_42;

    case 5:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_4_12);
      goto label_44;

    case 7:
      current_block = (Rpc - LABEL_4_15);
      goto label_43;

    case 8:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_4_13);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_4_16);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_4_22);
      goto continuation_34;

    case 12:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_33;

    case 13:
      current_block = (Rpc - LABEL_4_18);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_4_29);
      goto continuation_20;

    case 15:
      current_block = (Rpc - LABEL_4_31);
      goto continuation_17;

    case 16:
      current_block = (Rpc - LABEL_4_33);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_4_27);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_4_35);
      goto continuation_36;

    case 19:
      current_block = (Rpc - LABEL_4_23);
      goto continuation_35;

    case 20:
      current_block = (Rpc - LABEL_4_37);
      goto label_45;

    case 21:
      current_block = (Rpc - LABEL_4_39);
      goto continuation_22;

    case 22:
      current_block = (Rpc - LABEL_4_34);
      goto continuation_21;

    case 23:
      current_block = (Rpc - LABEL_4_40);
      goto label_46;

    case 24:
      current_block = (Rpc - LABEL_4_41);
      goto continuation_19;

    case 25:
      current_block = (Rpc - LABEL_4_32);
      goto continuation_18;

    case 26:
      current_block = (Rpc - LABEL_4_42);
      goto label_47;

    case 27:
      current_block = (Rpc - LABEL_4_30);
      goto continuation_23;

    case 28:
      current_block = (Rpc - LABEL_4_45);
      goto label_48;

    case 29:
      current_block = (Rpc - LABEL_4_44);
      goto continuation_29;

    case 30:
      current_block = (Rpc - LABEL_4_43);
      goto continuation_24;

    case 31:
      current_block = (Rpc - LABEL_4_48);
      goto label_50;

    case 32:
      current_block = (Rpc - LABEL_4_50);
      goto label_51;

    case 33:
      current_block = (Rpc - LABEL_4_53);
      goto label_49;

    case 34:
      current_block = (Rpc - LABEL_4_54);
      goto continuation_31;

    case 35:
      current_block = (Rpc - LABEL_4_47);
      goto continuation_30;

    case 36:
      current_block = (Rpc - LABEL_4_55);
      goto label_52;

    case 37:
      current_block = (Rpc - LABEL_4_49);
      goto continuation_25;

    case 38:
      current_block = (Rpc - LABEL_4_56);
      goto label_53;

    case 39:
      current_block = (Rpc - LABEL_4_52);
      goto continuation_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_bblock_55)
DEFLABEL (walk_bblock_38)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_58;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_58;
  (Wrd7.Obj) = ((Wrd11.pObj) [9]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_57)
  goto loop_10;

DEFLABEL (label_58)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_4_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (loop_56)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_4_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_62;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_62;
  (Wrd10.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_61)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_60;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_59)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_60)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 1);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_4_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_86;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd35.Lng))))
    goto label_86;
  (Wrd7.Obj) = ((Wrd33.pObj) [3]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_83;

DEFLABEL (label_82)
  Rsp = (& (Rsp [1]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_4_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_17]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_4_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_21]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_4_20);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_64;

DEFLABEL (label_63)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_25]));

DEFLABEL (label_64)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_4_22);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_63;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_24]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_4_23);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_66;

DEFLABEL (label_65)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_36]));

DEFLABEL (label_66)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_35]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_68;
  Wrd11 = Wrd15;

DEFLABEL (label_67)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_38]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_4_35);
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_37])), (Wrd12.pObj));

DEFLABEL (label_45)
  (Wrd11.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_69)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_4_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_28]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_4_27);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_76;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_4_33);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;

DEFLABEL (label_76)
  (Wrd12.Obj) = (Rsp [1]);
  if (! ((Wrd12.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_71;

DEFLABEL (label_70)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_25]));

DEFLABEL (label_71)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_31]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_4_31);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_70;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_32]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_24]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_4_32);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_73;

DEFLABEL (label_72)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_36]));

DEFLABEL (label_73)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_41]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_75;
  Wrd11 = Wrd15;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_38]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_4_41);
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_42])), (Wrd12.pObj));

DEFLABEL (label_47)
  (Wrd11.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd21.Obj) = (Rsp [1]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_80;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_29]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_4_29);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_79;

DEFLABEL (label_80)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_34]))));
  (* (--Rsp)) = (Wrd29.Obj);
  goto label_78;

DEFLABEL (label_79)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_30]))));
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_78)
DEFLABEL (label_81)
  (Wrd42.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_24]));

DEFLABEL (label_83)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_85;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd22.Lng))))
    goto label_85;
  (Wrd14.Obj) = ((Wrd20.pObj) [3]);

DEFLABEL (label_84)
  (Rsp [0]) = (Wrd14.Obj);
  goto loop_10;

DEFLABEL (label_85)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (current_block [OBJECT_4_4]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_43)
  (Wrd14.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_86)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.Obj) = (current_block [OBJECT_4_4]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_44)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  goto label_83;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_4_34);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_88;

DEFLABEL (label_87)
  (Wrd17.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_36]));

DEFLABEL (label_88)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_39]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_90;
  Wrd11 = Wrd15;

DEFLABEL (label_89)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_38]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_4_39);
  goto label_87;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_40])), (Wrd12.pObj));

DEFLABEL (label_46)
  (Wrd11.Obj) = Rvl;
  goto label_89;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_4_30);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_101;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_43]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_24]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_4_43);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_52]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_93;
  Wrd11 = Wrd15;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_46]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_4_52);

DEFLABEL (label_91)
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_36]));

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_53])), (Wrd12.pObj));

DEFLABEL (label_49)
  (Wrd11.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_94)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_100;
  Wrd17 = Wrd21;

DEFLABEL (label_99)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_49]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_98;
  Wrd26 = Wrd30;

DEFLABEL (label_97)
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_51]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_4_49);
  (Wrd11.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd12.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_4_0]));
  (Wrd24.Obj) = ((Wrd16.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_96;

DEFLABEL (label_95)
  ((Wrd16.pObj) [0]) = (Wrd13.Obj);
  goto label_91;

DEFLABEL (label_96)
  if ((Wrd24.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_95;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_4_56])), (Wrd16.pObj), (Wrd13.Obj));

DEFLABEL (label_53)
  goto label_91;

DEFLABEL (label_98)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_50])), (Wrd27.pObj));

DEFLABEL (label_51)
  (Wrd26.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_48])), (Wrd18.pObj));

DEFLABEL (label_50)
  (Wrd17.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_101)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_44]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_107;
  Wrd11 = Wrd15;

DEFLABEL (label_106)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_46]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_4_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_24]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_4_47);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_103;

DEFLABEL (label_102)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_36]));

DEFLABEL (label_103)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_54]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_105;
  Wrd11 = Wrd15;

DEFLABEL (label_104)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_38]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_4_54);
  goto label_102;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_55])), (Wrd12.pObj));

DEFLABEL (label_52)
  (Wrd11.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_45])), (Wrd12.pObj));

DEFLABEL (label_48)
  (Wrd11.Obj) = Rvl;
  goto label_106;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 11
#define DEBUGGING_LABEL_5_2 10
#define OBJECT_5_0 9
#define EXECUTE_CACHE_5_6 7
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rinvex_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      goto walk_nextP_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_nextP_4)
DEFLABEL (walk_nextP_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_5_0]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_7 5
#define LABEL_6_5 7
#define LABEL_6_9 9
#define ENVIRONMENT_LABEL_6_3 20
#define DEBUGGING_LABEL_6_2 19
#define EXECUTE_CACHE_6_10 11
#define EXECUTE_CACHE_6_8 13
#define EXECUTE_CACHE_6_6 15
#define FREE_REFERENCE_6_0 18
#define FREE_REFERENCES_LABEL_6_0 10
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rinvex_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_6_4);
      goto walk_next_2;

    case 1:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_next_6)
DEFLABEL (walk_next_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_10;
  Wrd11 = Wrd15;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_7);
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_9])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 10
#define DEBUGGING_LABEL_7_2 9
#define OBJECT_7_0 8
#define FREE_REFERENCE_7_0 7
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rinvex_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_7_4);
      goto register_value_0;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_value_4)
DEFLABEL (register_value_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd27.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 2);

DEFLABEL (label_6)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_5;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_5;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd18.Obj));
  (Wrd16.pObj) = (& ((Wrd23.pObj) [(Wrd13.Lng)]));
  Rvl = ((Wrd16.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define ENVIRONMENT_LABEL_8_3 13
#define DEBUGGING_LABEL_8_2 12
#define OBJECT_8_1 11
#define OBJECT_8_0 10
#define FREE_REFERENCE_8_0 9
#define FREE_REFERENCES_LABEL_8_0 8
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rinvex_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_8_4);
      goto set_register_valueB_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_register_valueB_6)
DEFLABEL (set_register_valueB_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_10;
  Wrd6 = Wrd10;

DEFLABEL (label_9)
  Wrd5 = Wrd6;
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_8;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_8;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_8;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd19.Obj));
  (Wrd17.pObj) = (& ((Wrd23.pObj) [(Wrd15.Lng)]));
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd17.pObj) [1]) = (Wrd18.Obj);

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_8_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 3);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_7 9
#define LABEL_9_8 11
#define LABEL_9_9 13
#define ENVIRONMENT_LABEL_9_3 22
#define DEBUGGING_LABEL_9_2 21
#define OBJECT_9_1 20
#define OBJECT_9_0 19
#define EXECUTE_CACHE_9_11 15
#define EXECUTE_CACHE_9_10 17
#define FREE_REFERENCES_LABEL_9_0 14
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rinvex_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_9_4);
      goto expression_updateB_8;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto loop_6;

    case 4:
      current_block = (Rpc - LABEL_9_8);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_updateB_12)
DEFLABEL (expression_updateB_8)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_6);
  (* (--Rsp)) = Rvl;
  goto loop_6;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (loop_13)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_9_7);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_16;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_15)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_9_1])))
    goto label_14;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_6 5
#define LABEL_10_9 7
#define LABEL_10_5 9
#define LABEL_10_7 11
#define TAG_10_8 4
#define LABEL_10_11 13
#define LABEL_10_12 15
#define LABEL_10_13 17
#define LABEL_10_14 19
#define LABEL_10_15 21
#define LABEL_10_16 23
#define LABEL_10_17 25
#define LABEL_10_18 27
#define LABEL_10_20 29
#define LABEL_10_21 31
#define LABEL_10_19 33
#define LABEL_10_22 35
#define LABEL_10_23 37
#define LABEL_10_24 39
#define LABEL_10_29 41
#define LABEL_10_25 43
#define LABEL_10_27 45
#define LABEL_10_32 47
#define LABEL_10_33 49
#define LABEL_10_34 51
#define LABEL_10_36 53
#define LABEL_10_37 55
#define LABEL_10_38 57
#define LABEL_10_39 59
#define LABEL_10_35 61
#define LABEL_10_41 63
#define LABEL_10_30 65
#define ENVIRONMENT_LABEL_10_3 84
#define DEBUGGING_LABEL_10_2 83
#define OBJECT_10_3 82
#define OBJECT_10_2 81
#define OBJECT_10_1 80
#define OBJECT_10_0 79
#define EXECUTE_CACHE_10_40 67
#define EXECUTE_CACHE_10_31 69
#define EXECUTE_CACHE_10_28 71
#define EXECUTE_CACHE_10_26 73
#define EXECUTE_CACHE_10_10 75
#define FREE_REFERENCE_10_0 78
#define FREE_REFERENCES_LABEL_10_0 66
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rinvex_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd73;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd88;
  machine_word Wrd60;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_10_4);
      goto optimize_expression_44;

    case 1:
      current_block = (Rpc - LABEL_10_6);
      goto label_46;

    case 2:
      current_block = (Rpc - LABEL_10_9);
      goto label_47;

    case 3:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_10_7);
      goto lambda_69;

    case 5:
      current_block = (Rpc - LABEL_10_11);
      goto label_48;

    case 6:
      current_block = (Rpc - LABEL_10_12);
      goto label_49;

    case 7:
      current_block = (Rpc - LABEL_10_13);
      goto label_50;

    case 8:
      current_block = (Rpc - LABEL_10_14);
      goto loop_42;

    case 9:
      current_block = (Rpc - LABEL_10_15);
      goto label_51;

    case 10:
      current_block = (Rpc - LABEL_10_16);
      goto label_52;

    case 11:
      current_block = (Rpc - LABEL_10_17);
      goto label_53;

    case 12:
      current_block = (Rpc - LABEL_10_18);
      goto label_54;

    case 13:
      current_block = (Rpc - LABEL_10_20);
      goto label_55;

    case 14:
      current_block = (Rpc - LABEL_10_21);
      goto label_56;

    case 15:
      current_block = (Rpc - LABEL_10_19);
      goto continuation_17;

    case 16:
      current_block = (Rpc - LABEL_10_22);
      goto label_57;

    case 17:
      current_block = (Rpc - LABEL_10_23);
      goto label_58;

    case 18:
      current_block = (Rpc - LABEL_10_24);
      goto loop_36;

    case 19:
      current_block = (Rpc - LABEL_10_29);
      goto continuation_35;

    case 20:
      current_block = (Rpc - LABEL_10_25);
      goto continuation_33;

    case 21:
      current_block = (Rpc - LABEL_10_27);
      goto continuation_22;

    case 22:
      current_block = (Rpc - LABEL_10_32);
      goto label_59;

    case 23:
      current_block = (Rpc - LABEL_10_33);
      goto label_60;

    case 24:
      current_block = (Rpc - LABEL_10_34);
      goto label_61;

    case 25:
      current_block = (Rpc - LABEL_10_36);
      goto label_63;

    case 26:
      current_block = (Rpc - LABEL_10_37);
      goto label_64;

    case 27:
      current_block = (Rpc - LABEL_10_38);
      goto label_65;

    case 28:
      current_block = (Rpc - LABEL_10_39);
      goto label_62;

    case 29:
      current_block = (Rpc - LABEL_10_35);
      goto continuation_28;

    case 30:
      current_block = (Rpc - LABEL_10_41);
      goto label_66;

    case 31:
      current_block = (Rpc - LABEL_10_30);
      goto continuation_34;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optimize_expression_68)
DEFLABEL (optimize_expression_44)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_75;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_74)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_7])));
  Rhp += 1;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd21 = Wrd20;
  (Wrd22.Obj) = (Rsp [0]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_73;
  Wrd23 = Wrd27;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  goto loop_42;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_9])), (Wrd24.pObj));

DEFLABEL (label_47)
  (Wrd23.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (lambda_69)
  CLOSURE_HEADER (LABEL_10_7);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_84;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_83)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_82;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_81)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_80;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_79)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  if ((Wrd31.Obj) == (Wrd21.Obj))
    goto label_77;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_76;

DEFLABEL (label_77)
  Rvl = (current_block [OBJECT_10_2]);

DEFLABEL (label_76)
DEFLABEL (label_78)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_50)
  (Wrd21.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_49)
  (Wrd14.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_48)
  (Wrd5.Obj) = Rvl;
  goto label_83;

DEFLABEL (loop_70)
DEFLABEL (loop_42)
  INTERRUPT_CHECK (26, LABEL_10_14);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_10_3])))
    goto label_85;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_85)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_101;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_100)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_99;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_98)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_97;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_96)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_95;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_94)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_19]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_93;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_92)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_91;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_90)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_10_19);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_89;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_88)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_87;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_86)
  goto loop_36;

DEFLABEL (label_87)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_57)
  (Wrd5.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_21]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_20]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_55)
  (Wrd45.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_18]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_17]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_52)
  (Wrd16.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_100;

DEFLABEL (loop_71)
DEFLABEL (loop_36)
  INTERRUPT_CHECK (26, LABEL_10_24);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_10_3]))
    goto label_122;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_27]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_28]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_10_27);
  (* (--Rsp)) = Rvl;
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd9.uLng) == 1))
    goto label_121;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_120)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_119;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_118)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_117;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_116)
  (Wrd30.Obj) = (* (Rsp++));
  if ((Wrd23.Obj) == (Wrd30.Obj))
    goto label_107;
  Rsp = (& (Rsp [6]));

DEFLABEL (label_106)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_105)
  (Wrd33.Obj) = (Rsp [0]);
  if ((Wrd33.Obj) == ((SCHEME_OBJECT) 0))
    goto label_102;
  (Rsp [2]) = (Wrd33.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_40]));

DEFLABEL (label_102)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_104;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_103)
  (Rsp [1]) = (Wrd37.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_42;

DEFLABEL (label_104)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_39]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_62)
  (Wrd37.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_107)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_35]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd54.Obj) = (Rsp [3]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_115;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd51.Obj) = ((Wrd53.pObj) [0]);

DEFLABEL (label_114)
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_113;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd60.Obj) = ((Wrd61.pObj) [1]);

DEFLABEL (label_112)
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_111;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (* (--Rsp)) = (Wrd68.Obj);

DEFLABEL (label_110)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_10_35);
  (Rsp [2]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_109;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_108)
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_36;

DEFLABEL (label_109)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_41]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_66)
  (Wrd6.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_38]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_37]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_64)
  (Wrd60.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_36]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_63)
  (Wrd51.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_34]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_61)
  (Wrd23.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_33]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_60)
  (Wrd14.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_32]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_120;

DEFLABEL (label_122)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_25]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_26]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_10_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_123;
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_29]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_30]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_31]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_10_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_10_29);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_123;
  (Wrd88.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [5]));
  (* (--Rsp)) = (Wrd88.Obj);
  goto label_105;

DEFLABEL (label_123)
  Rsp = (& (Rsp [5]));
  goto label_106;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 13
#define DEBUGGING_LABEL_11_2 12
#define OBJECT_11_2 11
#define OBJECT_11_1 10
#define OBJECT_11_0 9
#define EXECUTE_CACHE_11_6 7
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rinvex_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_11_4);
      goto valid_subexpressionP_4;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (valid_subexpressionP_8)
DEFLABEL (valid_subexpressionP_4)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_14;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_13)
  if ((Wrd5.Obj) == (current_block [OBJECT_11_1]))
    goto label_10;
  (Wrd15.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_9;

DEFLABEL (label_10)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (label_14)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_8 5
#define LABEL_12_9 7
#define LABEL_12_10 9
#define LABEL_12_6 11
#define LABEL_12_5 13
#define ENVIRONMENT_LABEL_12_3 24
#define DEBUGGING_LABEL_12_2 23
#define OBJECT_12_1 22
#define OBJECT_12_0 21
#define EXECUTE_CACHE_12_11 15
#define EXECUTE_CACHE_12_7 17
#define FREE_REFERENCE_12_0 20
#define FREE_REFERENCES_LABEL_12_0 14
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rinvex_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd43;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_12_4);
      goto canonicalize_subexpression_4;

    case 1:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_12_9);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_12_10);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_subexpression_9)
DEFLABEL (canonicalize_subexpression_4)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (* (--Rsp)) = Rvl;
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_17;
  Wrd21 = Wrd25;

DEFLABEL (label_16)
  Wrd20 = Wrd21;
  (Wrd27.Obj) = (* (Rsp++));
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_15;
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_15;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) (Wrd34.Lng)) < ((unsigned long) (Wrd37.Lng))))
    goto label_15;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd27.Obj));
  (Wrd32.pObj) = (& ((Wrd35.pObj) [(Wrd30.Lng)]));
  (Wrd29.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_13)
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = (Wrd5.Obj);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (Rsp [1]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 2);

DEFLABEL (label_7)
  (Wrd29.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_9])), (Wrd22.pObj));

DEFLABEL (label_6)
  (Wrd21.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_7 5
#define LABEL_13_6 7
#define LABEL_13_9 9
#define LABEL_13_10 11
#define LABEL_13_5 13
#define ENVIRONMENT_LABEL_13_3 23
#define DEBUGGING_LABEL_13_2 22
#define OBJECT_13_0 21
#define EXECUTE_CACHE_13_8 15
#define FREE_REFERENCE_13_0 18
#define FREE_ASSIGNMENT_13_0 20
#define FREE_REFERENCES_LABEL_13_0 14
#define NUMBER_OF_LINKER_SECTIONS_13_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rinvex_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_13_4);
      goto define_general_method_5;

    case 1:
      current_block = (Rpc - LABEL_13_7);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_13_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_13_10);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_general_method_11)
DEFLABEL (define_general_method_5)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_21;
  Wrd11 = Wrd15;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd16.uLng) == 1)
    goto label_12;
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 2);

DEFLABEL (label_12)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  ((Wrd13.pObj) [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [3]));

DEFLABEL (label_13)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_19;
  Wrd18 = Wrd22;

DEFLABEL (label_18)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_0]));
  (Wrd40.Obj) = ((Wrd32.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_17;

DEFLABEL (label_16)
  ((Wrd32.pObj) [0]) = (Wrd29.Obj);

DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));
  goto label_13;

DEFLABEL (label_17)
  if ((Wrd40.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_16;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_10])), (Wrd32.pObj), (Wrd29.Obj));

DEFLABEL (label_9)
  goto label_15;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_9])), (Wrd19.pObj));

DEFLABEL (label_8)
  (Wrd18.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_7])), (Wrd12.pObj));

DEFLABEL (label_7)
  (Wrd11.Obj) = Rvl;
  goto label_20;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_5);
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define LABEL_14_9 9
#define LABEL_14_6 11
#define ENVIRONMENT_LABEL_14_3 24
#define DEBUGGING_LABEL_14_2 23
#define OBJECT_14_2 22
#define OBJECT_14_1 21
#define OBJECT_14_0 20
#define EXECUTE_CACHE_14_10 13
#define EXECUTE_CACHE_14_8 15
#define FREE_REFERENCE_14_1 18
#define FREE_REFERENCE_14_0 19
#define FREE_REFERENCES_LABEL_14_0 12
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rinvex_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
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
      goto lookup_method_4;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_14_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lookup_method_9)
DEFLABEL (lookup_method_4)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_14_0]))
    goto label_14;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_13;
  Wrd10 = Wrd14;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_9);

DEFLABEL (label_11)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_10;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_7])), (Wrd11.pObj));

DEFLABEL (label_6)
  (Wrd10.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_14)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_16;
  Wrd18 = Wrd22;

DEFLABEL (label_15)
  Rvl = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_5])), (Wrd19.pObj));

DEFLABEL (label_7)
  (Wrd18.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_6 5
#define LABEL_15_7 7
#define LABEL_15_5 9
#define LABEL_15_9 11
#define LABEL_15_11 13
#define LABEL_15_13 15
#define LABEL_15_14 17
#define LABEL_15_15 19
#define LABEL_15_16 21
#define ENVIRONMENT_LABEL_15_3 38
#define DEBUGGING_LABEL_15_2 37
#define OBJECT_15_3 36
#define OBJECT_15_2 35
#define OBJECT_15_1 34
#define OBJECT_15_0 33
#define EXECUTE_CACHE_15_12 23
#define EXECUTE_CACHE_15_10 25
#define EXECUTE_CACHE_15_8 27
#define FREE_REFERENCE_15_2 30
#define FREE_REFERENCE_15_1 31
#define FREE_REFERENCE_15_0 32
#define FREE_REFERENCES_LABEL_15_0 22
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rinvex_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_15_4);
      goto walk_assign_7;

    case 1:
      current_block = (Rpc - LABEL_15_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_15_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_15_11);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_15_13);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_15_14);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_15_15);
      goto label_11;

    case 9:
      current_block = (Rpc - LABEL_15_16);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_assign_14)
DEFLABEL (walk_assign_7)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_23;
  Wrd9 = Wrd13;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_21;
  Wrd15 = Wrd19;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  Rvl = (current_block [OBJECT_15_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_15_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_2]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_19;
  Wrd6 = Wrd10;

DEFLABEL (label_18)
  Wrd5 = Wrd6;
  (Wrd12.Obj) = (* (Rsp++));
  (Wrd13.Obj) = (* (Rsp++));
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_17;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_17;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd20.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_17;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.pObj) = (& ((Wrd21.pObj) [(Wrd16.Lng)]));
  ((Wrd18.pObj) [1]) = (Wrd12.Obj);

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_15_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_16]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 3);

DEFLABEL (label_12)
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_15])), (Wrd7.pObj));

DEFLABEL (label_11)
  (Wrd6.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_7])), (Wrd16.pObj));

DEFLABEL (label_10)
  (Wrd15.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_6])), (Wrd10.pObj));

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define LABEL_16_8 9
#define ENVIRONMENT_LABEL_16_3 18
#define DEBUGGING_LABEL_16_2 17
#define OBJECT_16_1 16
#define OBJECT_16_0 15
#define EXECUTE_CACHE_16_6 11
#define FREE_REFERENCE_16_0 14
#define FREE_REFERENCES_LABEL_16_0 10
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rinvex_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd26;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_16_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto lambda_1;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (lambda_8)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_16_5);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  Wrd5 = Wrd6;
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_10;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_10;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_10;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd19.Obj));
  (Wrd17.pObj) = (& ((Wrd23.pObj) [(Wrd15.Lng)]));
  ((Wrd17.pObj) [1]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_16_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 3);

DEFLABEL (label_5)
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_7])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 11
#define DEBUGGING_LABEL_17_2 10
#define OBJECT_17_0 9
#define EXECUTE_CACHE_17_6 7
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rinvex_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_17_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (lambda_5)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_17_5);
  Rvl = (current_block [OBJECT_17_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define TAG_18_6 1
#define ENVIRONMENT_LABEL_18_3 12
#define DEBUGGING_LABEL_18_2 11
#define EXECUTE_CACHE_18_8 7
#define EXECUTE_CACHE_18_7 9
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rinvex_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_18_4);
      goto define_one_arg_method_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_one_arg_method_4)
DEFLABEL (define_one_arg_method_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_18_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define TAG_19_6 1
#define LABEL_19_8 7
#define ENVIRONMENT_LABEL_19_3 14
#define DEBUGGING_LABEL_19_2 13
#define EXECUTE_CACHE_19_9 9
#define EXECUTE_CACHE_19_7 11
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rinvex_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_19_4);
      goto define_two_arg_method_2;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_two_arg_method_5)
DEFLABEL (define_two_arg_method_2)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_5])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd16.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_19_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

INVOKE_INTERFACE_TARGET_0
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
#define LABEL_23 37
#define LABEL_24 39
#define LABEL_25 41
#define LABEL_26 43
#define LABEL_27 45
#define LABEL_28 47
#define LABEL_29 49
#define LABEL_30 51
#define LABEL_31 53
#define LABEL_32 55
#define LABEL_33 57
#define LABEL_34 59
#define LABEL_35 61
#define LABEL_36 63
#define LABEL_37 65
#define LABEL_38 67
#define LABEL_39 69
#define LABEL_40 71
#define LABEL_41 73
#define LABEL_42 75
#define LABEL_6 77
#define LABEL_43 79
#define LABEL_44 81
#define LABEL_46 83
#define LABEL_48 85
#define LABEL_50 87
#define LABEL_51 89
#define LABEL_49 91
#define LABEL_54 93
#define LABEL_55 95
#define LABEL_53 97
#define LABEL_57 99
#define LABEL_58 101
#define LABEL_56 103
#define LABEL_60 105
#define LABEL_61 107
#define LABEL_59 109
#define LABEL_63 111
#define LABEL_64 113
#define LABEL_62 115
#define LABEL_66 117
#define LABEL_67 119
#define LABEL_65 121
#define LABEL_69 123
#define LABEL_70 125
#define LABEL_68 127
#define LABEL_72 129
#define LABEL_73 131
#define LABEL_71 133
#define LABEL_75 135
#define LABEL_76 137
#define LABEL_74 139
#define LABEL_78 141
#define LABEL_79 143
#define LABEL_77 145
#define LABEL_81 147
#define LABEL_82 149
#define LABEL_80 151
#define LABEL_84 153
#define LABEL_85 155
#define LABEL_83 157
#define LABEL_87 159
#define LABEL_88 161
#define LABEL_86 163
#define LABEL_89 165
#define LABEL_91 167
#define LABEL_92 169
#define LABEL_93 171
#define LABEL_94 173
#define LABEL_90 175
#define LABEL_97 177
#define LABEL_98 179
#define LABEL_99 181
#define LABEL_100 183
#define LABEL_96 185
#define LABEL_102 187
#define LABEL_103 189
#define LABEL_104 191
#define LABEL_105 193
#define LABEL_101 195
#define LABEL_107 197
#define LABEL_108 199
#define LABEL_109 201
#define LABEL_110 203
#define LABEL_106 205
#define LABEL_112 207
#define LABEL_113 209
#define LABEL_114 211
#define LABEL_115 213
#define LABEL_111 215
#define LABEL_117 217
#define LABEL_118 219
#define LABEL_119 221
#define LABEL_120 223
#define LABEL_116 225
#define LABEL_122 227
#define LABEL_123 229
#define LABEL_124 231
#define LABEL_125 233
#define LABEL_121 235
#define LABEL_126 237
#define LABEL_127 239
#define LABEL_128 241
#define LABEL_129 243
#define LABEL_130 245
#define LABEL_131 247
#define LABEL_132 249
#define ENVIRONMENT_LABEL_3 389
#define DEBUGGING_LABEL_2 388
#define PURIFICATION_ROOT 387
#define OBJECT_48 386
#define OBJECT_47 385
#define OBJECT_46 384
#define OBJECT_45 383
#define OBJECT_44 382
#define OBJECT_43 381
#define OBJECT_42 380
#define OBJECT_41 379
#define OBJECT_40 378
#define OBJECT_39 377
#define OBJECT_38 376
#define OBJECT_37 375
#define OBJECT_36 374
#define OBJECT_35 373
#define OBJECT_34 372
#define OBJECT_33 371
#define OBJECT_32 370
#define OBJECT_31 369
#define OBJECT_30 368
#define OBJECT_29 367
#define OBJECT_28 366
#define OBJECT_27 365
#define OBJECT_26 364
#define OBJECT_25 363
#define OBJECT_24 362
#define OBJECT_23 361
#define OBJECT_22 360
#define OBJECT_21 359
#define OBJECT_20 358
#define OBJECT_19 357
#define OBJECT_18 356
#define OBJECT_17 355
#define OBJECT_16 354
#define OBJECT_15 353
#define OBJECT_14 352
#define OBJECT_13 351
#define OBJECT_12 350
#define OBJECT_11 349
#define OBJECT_10 348
#define OBJECT_9 347
#define OBJECT_8 346
#define OBJECT_7 345
#define OBJECT_6 344
#define OBJECT_5 343
#define OBJECT_4 342
#define OBJECT_3 341
#define OBJECT_2 340
#define OBJECT_1 339
#define OBJECT_0 338
#define EXECUTE_CACHE_95 251
#define EXECUTE_CACHE_52 253
#define EXECUTE_CACHE_47 255
#define EXECUTE_CACHE_45 257
#define FREE_REFERENCE_74 260
#define FREE_REFERENCE_73 261
#define FREE_REFERENCE_72 262
#define FREE_REFERENCE_71 263
#define FREE_REFERENCE_70 264
#define FREE_REFERENCE_69 265
#define FREE_REFERENCE_68 266
#define FREE_REFERENCE_67 267
#define FREE_REFERENCE_66 268
#define FREE_REFERENCE_65 269
#define FREE_REFERENCE_64 270
#define FREE_REFERENCE_63 271
#define FREE_REFERENCE_62 272
#define FREE_REFERENCE_61 273
#define FREE_REFERENCE_60 274
#define FREE_REFERENCE_59 275
#define FREE_REFERENCE_58 276
#define FREE_REFERENCE_57 277
#define FREE_REFERENCE_56 278
#define FREE_REFERENCE_55 279
#define FREE_REFERENCE_54 280
#define FREE_REFERENCE_53 281
#define FREE_REFERENCE_52 282
#define FREE_REFERENCE_51 283
#define FREE_REFERENCE_50 284
#define FREE_REFERENCE_49 285
#define FREE_REFERENCE_48 286
#define FREE_REFERENCE_47 287
#define FREE_REFERENCE_46 288
#define FREE_REFERENCE_45 289
#define FREE_REFERENCE_44 290
#define FREE_REFERENCE_43 291
#define FREE_REFERENCE_42 292
#define FREE_REFERENCE_41 293
#define FREE_REFERENCE_40 294
#define FREE_REFERENCE_39 295
#define FREE_REFERENCE_38 296
#define FREE_REFERENCE_37 297
#define FREE_REFERENCE_36 298
#define FREE_REFERENCE_35 299
#define FREE_REFERENCE_34 300
#define FREE_REFERENCE_33 301
#define FREE_REFERENCE_32 302
#define FREE_REFERENCE_31 303
#define FREE_REFERENCE_30 304
#define FREE_REFERENCE_29 305
#define FREE_REFERENCE_28 306
#define FREE_REFERENCE_27 307
#define FREE_REFERENCE_26 308
#define FREE_REFERENCE_25 309
#define FREE_REFERENCE_24 310
#define FREE_REFERENCE_23 311
#define FREE_REFERENCE_22 312
#define FREE_REFERENCE_21 313
#define FREE_REFERENCE_20 314
#define FREE_REFERENCE_19 315
#define FREE_REFERENCE_18 316
#define FREE_REFERENCE_17 317
#define FREE_REFERENCE_16 318
#define FREE_REFERENCE_15 319
#define FREE_REFERENCE_14 320
#define FREE_REFERENCE_13 321
#define FREE_REFERENCE_12 322
#define FREE_REFERENCE_11 323
#define FREE_REFERENCE_10 324
#define FREE_REFERENCE_9 325
#define FREE_REFERENCE_8 326
#define FREE_REFERENCE_7 327
#define FREE_REFERENCE_6 328
#define FREE_REFERENCE_5 329
#define FREE_REFERENCE_4 330
#define FREE_REFERENCE_3 331
#define FREE_REFERENCE_2 332
#define FREE_REFERENCE_1 333
#define FREE_REFERENCE_0 334
#define GLOBAL_EXECUTE_CACHE_5 336
#define FREE_REFERENCES_LABEL_0 250
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rinvex_so_3406cdabbb07ffc8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd645;
  machine_word Wrd644;
  machine_word Wrd643;
  machine_word Wrd642;
  machine_word Wrd640;
  machine_word Wrd637;
  machine_word Wrd639;
  machine_word Wrd636;
  machine_word Wrd630;
  machine_word Wrd635;
  machine_word Wrd634;
  machine_word Wrd631;
  machine_word Wrd628;
  machine_word Wrd627;
  machine_word Wrd625;
  machine_word Wrd621;
  machine_word Wrd623;
  machine_word Wrd624;
  machine_word Wrd617;
  machine_word Wrd619;
  machine_word Wrd620;
  machine_word Wrd611;
  machine_word Wrd616;
  machine_word Wrd615;
  machine_word Wrd612;
  machine_word Wrd608;
  machine_word Wrd607;
  machine_word Wrd602;
  machine_word Wrd604;
  machine_word Wrd605;
  machine_word Wrd598;
  machine_word Wrd600;
  machine_word Wrd601;
  machine_word Wrd592;
  machine_word Wrd597;
  machine_word Wrd596;
  machine_word Wrd593;
  machine_word Wrd590;
  machine_word Wrd589;
  machine_word Wrd587;
  machine_word Wrd584;
  machine_word Wrd586;
  machine_word Wrd583;
  machine_word Wrd577;
  machine_word Wrd582;
  machine_word Wrd581;
  machine_word Wrd578;
  machine_word Wrd575;
  machine_word Wrd574;
  machine_word Wrd572;
  machine_word Wrd568;
  machine_word Wrd570;
  machine_word Wrd571;
  machine_word Wrd564;
  machine_word Wrd566;
  machine_word Wrd567;
  machine_word Wrd558;
  machine_word Wrd563;
  machine_word Wrd562;
  machine_word Wrd559;
  machine_word Wrd555;
  machine_word Wrd554;
  machine_word Wrd549;
  machine_word Wrd551;
  machine_word Wrd552;
  machine_word Wrd545;
  machine_word Wrd547;
  machine_word Wrd548;
  machine_word Wrd539;
  machine_word Wrd544;
  machine_word Wrd543;
  machine_word Wrd540;
  machine_word Wrd537;
  machine_word Wrd536;
  machine_word Wrd534;
  machine_word Wrd531;
  machine_word Wrd533;
  machine_word Wrd530;
  machine_word Wrd524;
  machine_word Wrd529;
  machine_word Wrd528;
  machine_word Wrd525;
  machine_word Wrd522;
  machine_word Wrd521;
  machine_word Wrd519;
  machine_word Wrd515;
  machine_word Wrd517;
  machine_word Wrd518;
  machine_word Wrd511;
  machine_word Wrd513;
  machine_word Wrd514;
  machine_word Wrd505;
  machine_word Wrd510;
  machine_word Wrd509;
  machine_word Wrd506;
  machine_word Wrd502;
  machine_word Wrd501;
  machine_word Wrd496;
  machine_word Wrd498;
  machine_word Wrd499;
  machine_word Wrd492;
  machine_word Wrd494;
  machine_word Wrd495;
  machine_word Wrd486;
  machine_word Wrd491;
  machine_word Wrd490;
  machine_word Wrd487;
  machine_word Wrd484;
  machine_word Wrd483;
  machine_word Wrd481;
  machine_word Wrd478;
  machine_word Wrd480;
  machine_word Wrd477;
  machine_word Wrd471;
  machine_word Wrd476;
  machine_word Wrd475;
  machine_word Wrd472;
  machine_word Wrd469;
  machine_word Wrd468;
  machine_word Wrd466;
  machine_word Wrd462;
  machine_word Wrd464;
  machine_word Wrd465;
  machine_word Wrd458;
  machine_word Wrd460;
  machine_word Wrd461;
  machine_word Wrd452;
  machine_word Wrd457;
  machine_word Wrd456;
  machine_word Wrd453;
  machine_word Wrd449;
  machine_word Wrd448;
  machine_word Wrd443;
  machine_word Wrd445;
  machine_word Wrd446;
  machine_word Wrd439;
  machine_word Wrd441;
  machine_word Wrd442;
  machine_word Wrd433;
  machine_word Wrd438;
  machine_word Wrd437;
  machine_word Wrd434;
  machine_word Wrd431;
  machine_word Wrd430;
  machine_word Wrd428;
  machine_word Wrd425;
  machine_word Wrd427;
  machine_word Wrd424;
  machine_word Wrd418;
  machine_word Wrd423;
  machine_word Wrd422;
  machine_word Wrd419;
  machine_word Wrd416;
  machine_word Wrd415;
  machine_word Wrd413;
  machine_word Wrd409;
  machine_word Wrd411;
  machine_word Wrd412;
  machine_word Wrd405;
  machine_word Wrd407;
  machine_word Wrd408;
  machine_word Wrd399;
  machine_word Wrd404;
  machine_word Wrd403;
  machine_word Wrd400;
  machine_word Wrd396;
  machine_word Wrd395;
  machine_word Wrd390;
  machine_word Wrd392;
  machine_word Wrd393;
  machine_word Wrd386;
  machine_word Wrd388;
  machine_word Wrd389;
  machine_word Wrd380;
  machine_word Wrd385;
  machine_word Wrd384;
  machine_word Wrd381;
  machine_word Wrd378;
  machine_word Wrd377;
  machine_word Wrd375;
  machine_word Wrd372;
  machine_word Wrd374;
  machine_word Wrd371;
  machine_word Wrd365;
  machine_word Wrd370;
  machine_word Wrd369;
  machine_word Wrd366;
  machine_word Wrd363;
  machine_word Wrd362;
  machine_word Wrd360;
  machine_word Wrd356;
  machine_word Wrd358;
  machine_word Wrd359;
  machine_word Wrd352;
  machine_word Wrd354;
  machine_word Wrd355;
  machine_word Wrd346;
  machine_word Wrd351;
  machine_word Wrd350;
  machine_word Wrd347;
  machine_word Wrd343;
  machine_word Wrd342;
  machine_word Wrd337;
  machine_word Wrd339;
  machine_word Wrd340;
  machine_word Wrd333;
  machine_word Wrd335;
  machine_word Wrd336;
  machine_word Wrd327;
  machine_word Wrd332;
  machine_word Wrd331;
  machine_word Wrd328;
  machine_word Wrd325;
  machine_word Wrd324;
  machine_word Wrd322;
  machine_word Wrd319;
  machine_word Wrd321;
  machine_word Wrd318;
  machine_word Wrd312;
  machine_word Wrd317;
  machine_word Wrd316;
  machine_word Wrd313;
  machine_word Wrd310;
  machine_word Wrd309;
  machine_word Wrd307;
  machine_word Wrd303;
  machine_word Wrd305;
  machine_word Wrd306;
  machine_word Wrd299;
  machine_word Wrd301;
  machine_word Wrd302;
  machine_word Wrd293;
  machine_word Wrd298;
  machine_word Wrd297;
  machine_word Wrd294;
  machine_word Wrd290;
  machine_word Wrd289;
  machine_word Wrd284;
  machine_word Wrd286;
  machine_word Wrd287;
  machine_word Wrd280;
  machine_word Wrd282;
  machine_word Wrd283;
  machine_word Wrd274;
  machine_word Wrd279;
  machine_word Wrd278;
  machine_word Wrd275;
  machine_word Wrd272;
  machine_word Wrd271;
  machine_word Wrd269;
  machine_word Wrd266;
  machine_word Wrd268;
  machine_word Wrd265;
  machine_word Wrd259;
  machine_word Wrd264;
  machine_word Wrd263;
  machine_word Wrd260;
  machine_word Wrd257;
  machine_word Wrd256;
  machine_word Wrd254;
  machine_word Wrd250;
  machine_word Wrd252;
  machine_word Wrd253;
  machine_word Wrd246;
  machine_word Wrd248;
  machine_word Wrd249;
  machine_word Wrd240;
  machine_word Wrd245;
  machine_word Wrd244;
  machine_word Wrd241;
  machine_word Wrd237;
  machine_word Wrd236;
  machine_word Wrd231;
  machine_word Wrd233;
  machine_word Wrd234;
  machine_word Wrd227;
  machine_word Wrd229;
  machine_word Wrd230;
  machine_word Wrd221;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd222;
  machine_word Wrd219;
  machine_word Wrd218;
  machine_word Wrd216;
  machine_word Wrd213;
  machine_word Wrd215;
  machine_word Wrd212;
  machine_word Wrd206;
  machine_word Wrd211;
  machine_word Wrd210;
  machine_word Wrd207;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd201;
  machine_word Wrd197;
  machine_word Wrd199;
  machine_word Wrd200;
  machine_word Wrd193;
  machine_word Wrd195;
  machine_word Wrd196;
  machine_word Wrd187;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd188;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd178;
  machine_word Wrd180;
  machine_word Wrd181;
  machine_word Wrd174;
  machine_word Wrd176;
  machine_word Wrd177;
  machine_word Wrd168;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd169;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd163;
  machine_word Wrd160;
  machine_word Wrd162;
  machine_word Wrd159;
  machine_word Wrd153;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd154;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd148;
  machine_word Wrd144;
  machine_word Wrd146;
  machine_word Wrd147;
  machine_word Wrd140;
  machine_word Wrd142;
  machine_word Wrd143;
  machine_word Wrd134;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd135;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd125;
  machine_word Wrd127;
  machine_word Wrd128;
  machine_word Wrd121;
  machine_word Wrd123;
  machine_word Wrd124;
  machine_word Wrd115;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd100;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd94;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd90;
  machine_word Wrd81;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd75;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd62;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto label_125;

    case 2:
      current_block = (Rpc - LABEL_8);
      goto label_126;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto label_127;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto label_128;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto label_129;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto label_130;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto label_131;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto label_132;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto label_133;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto label_134;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto label_135;

    case 12:
      current_block = (Rpc - LABEL_18);
      goto label_136;

    case 13:
      current_block = (Rpc - LABEL_19);
      goto label_137;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto label_138;

    case 15:
      current_block = (Rpc - LABEL_21);
      goto label_139;

    case 16:
      current_block = (Rpc - LABEL_22);
      goto label_140;

    case 17:
      current_block = (Rpc - LABEL_23);
      goto label_141;

    case 18:
      current_block = (Rpc - LABEL_24);
      goto label_142;

    case 19:
      current_block = (Rpc - LABEL_25);
      goto label_143;

    case 20:
      current_block = (Rpc - LABEL_26);
      goto label_144;

    case 21:
      current_block = (Rpc - LABEL_27);
      goto label_145;

    case 22:
      current_block = (Rpc - LABEL_28);
      goto label_146;

    case 23:
      current_block = (Rpc - LABEL_29);
      goto label_147;

    case 24:
      current_block = (Rpc - LABEL_30);
      goto label_148;

    case 25:
      current_block = (Rpc - LABEL_31);
      goto label_149;

    case 26:
      current_block = (Rpc - LABEL_32);
      goto label_150;

    case 27:
      current_block = (Rpc - LABEL_33);
      goto label_151;

    case 28:
      current_block = (Rpc - LABEL_34);
      goto label_152;

    case 29:
      current_block = (Rpc - LABEL_35);
      goto label_153;

    case 30:
      current_block = (Rpc - LABEL_36);
      goto label_154;

    case 31:
      current_block = (Rpc - LABEL_37);
      goto label_155;

    case 32:
      current_block = (Rpc - LABEL_38);
      goto label_156;

    case 33:
      current_block = (Rpc - LABEL_39);
      goto label_157;

    case 34:
      current_block = (Rpc - LABEL_40);
      goto label_158;

    case 35:
      current_block = (Rpc - LABEL_41);
      goto label_159;

    case 36:
      current_block = (Rpc - LABEL_42);
      goto label_160;

    case 37:
      current_block = (Rpc - LABEL_6);
      goto continuation_97;

    case 38:
      current_block = (Rpc - LABEL_43);
      goto continuation_98;

    case 39:
      current_block = (Rpc - LABEL_44);
      goto continuation_99;

    case 40:
      current_block = (Rpc - LABEL_46);
      goto continuation_100;

    case 41:
      current_block = (Rpc - LABEL_48);
      goto continuation_101;

    case 42:
      current_block = (Rpc - LABEL_50);
      goto label_161;

    case 43:
      current_block = (Rpc - LABEL_51);
      goto label_162;

    case 44:
      current_block = (Rpc - LABEL_49);
      goto continuation_102;

    case 45:
      current_block = (Rpc - LABEL_54);
      goto label_163;

    case 46:
      current_block = (Rpc - LABEL_55);
      goto label_164;

    case 47:
      current_block = (Rpc - LABEL_53);
      goto continuation_103;

    case 48:
      current_block = (Rpc - LABEL_57);
      goto label_165;

    case 49:
      current_block = (Rpc - LABEL_58);
      goto label_166;

    case 50:
      current_block = (Rpc - LABEL_56);
      goto continuation_104;

    case 51:
      current_block = (Rpc - LABEL_60);
      goto label_167;

    case 52:
      current_block = (Rpc - LABEL_61);
      goto label_168;

    case 53:
      current_block = (Rpc - LABEL_59);
      goto continuation_105;

    case 54:
      current_block = (Rpc - LABEL_63);
      goto label_169;

    case 55:
      current_block = (Rpc - LABEL_64);
      goto label_170;

    case 56:
      current_block = (Rpc - LABEL_62);
      goto continuation_106;

    case 57:
      current_block = (Rpc - LABEL_66);
      goto label_171;

    case 58:
      current_block = (Rpc - LABEL_67);
      goto label_172;

    case 59:
      current_block = (Rpc - LABEL_65);
      goto continuation_107;

    case 60:
      current_block = (Rpc - LABEL_69);
      goto label_173;

    case 61:
      current_block = (Rpc - LABEL_70);
      goto label_174;

    case 62:
      current_block = (Rpc - LABEL_68);
      goto continuation_108;

    case 63:
      current_block = (Rpc - LABEL_72);
      goto label_175;

    case 64:
      current_block = (Rpc - LABEL_73);
      goto label_176;

    case 65:
      current_block = (Rpc - LABEL_71);
      goto continuation_109;

    case 66:
      current_block = (Rpc - LABEL_75);
      goto label_177;

    case 67:
      current_block = (Rpc - LABEL_76);
      goto label_178;

    case 68:
      current_block = (Rpc - LABEL_74);
      goto continuation_110;

    case 69:
      current_block = (Rpc - LABEL_78);
      goto label_179;

    case 70:
      current_block = (Rpc - LABEL_79);
      goto label_180;

    case 71:
      current_block = (Rpc - LABEL_77);
      goto continuation_111;

    case 72:
      current_block = (Rpc - LABEL_81);
      goto label_181;

    case 73:
      current_block = (Rpc - LABEL_82);
      goto label_182;

    case 74:
      current_block = (Rpc - LABEL_80);
      goto continuation_112;

    case 75:
      current_block = (Rpc - LABEL_84);
      goto label_183;

    case 76:
      current_block = (Rpc - LABEL_85);
      goto label_184;

    case 77:
      current_block = (Rpc - LABEL_83);
      goto continuation_113;

    case 78:
      current_block = (Rpc - LABEL_87);
      goto label_185;

    case 79:
      current_block = (Rpc - LABEL_88);
      goto label_186;

    case 80:
      current_block = (Rpc - LABEL_86);
      goto continuation_114;

    case 81:
      current_block = (Rpc - LABEL_89);
      goto continuation_115;

    case 82:
      current_block = (Rpc - LABEL_91);
      goto label_187;

    case 83:
      current_block = (Rpc - LABEL_92);
      goto label_188;

    case 84:
      current_block = (Rpc - LABEL_93);
      goto label_189;

    case 85:
      current_block = (Rpc - LABEL_94);
      goto label_190;

    case 86:
      current_block = (Rpc - LABEL_90);
      goto continuation_116;

    case 87:
      current_block = (Rpc - LABEL_97);
      goto label_191;

    case 88:
      current_block = (Rpc - LABEL_98);
      goto label_192;

    case 89:
      current_block = (Rpc - LABEL_99);
      goto label_193;

    case 90:
      current_block = (Rpc - LABEL_100);
      goto label_194;

    case 91:
      current_block = (Rpc - LABEL_96);
      goto continuation_117;

    case 92:
      current_block = (Rpc - LABEL_102);
      goto label_195;

    case 93:
      current_block = (Rpc - LABEL_103);
      goto label_196;

    case 94:
      current_block = (Rpc - LABEL_104);
      goto label_197;

    case 95:
      current_block = (Rpc - LABEL_105);
      goto label_198;

    case 96:
      current_block = (Rpc - LABEL_101);
      goto continuation_118;

    case 97:
      current_block = (Rpc - LABEL_107);
      goto label_199;

    case 98:
      current_block = (Rpc - LABEL_108);
      goto label_200;

    case 99:
      current_block = (Rpc - LABEL_109);
      goto label_201;

    case 100:
      current_block = (Rpc - LABEL_110);
      goto label_202;

    case 101:
      current_block = (Rpc - LABEL_106);
      goto continuation_119;

    case 102:
      current_block = (Rpc - LABEL_112);
      goto label_203;

    case 103:
      current_block = (Rpc - LABEL_113);
      goto label_204;

    case 104:
      current_block = (Rpc - LABEL_114);
      goto label_205;

    case 105:
      current_block = (Rpc - LABEL_115);
      goto label_206;

    case 106:
      current_block = (Rpc - LABEL_111);
      goto continuation_120;

    case 107:
      current_block = (Rpc - LABEL_117);
      goto label_207;

    case 108:
      current_block = (Rpc - LABEL_118);
      goto label_208;

    case 109:
      current_block = (Rpc - LABEL_119);
      goto label_209;

    case 110:
      current_block = (Rpc - LABEL_120);
      goto label_210;

    case 111:
      current_block = (Rpc - LABEL_116);
      goto continuation_121;

    case 112:
      current_block = (Rpc - LABEL_122);
      goto label_211;

    case 113:
      current_block = (Rpc - LABEL_123);
      goto label_212;

    case 114:
      current_block = (Rpc - LABEL_124);
      goto label_213;

    case 115:
      current_block = (Rpc - LABEL_125);
      goto label_214;

    case 116:
      current_block = (Rpc - LABEL_121);
      goto continuation_122;

    case 117:
      current_block = (Rpc - LABEL_126);
      goto label_215;

    case 118:
      current_block = (Rpc - LABEL_127);
      goto label_216;

    case 119:
      current_block = (Rpc - LABEL_128);
      goto label_217;

    case 120:
      current_block = (Rpc - LABEL_129);
      goto label_218;

    case 121:
      current_block = (Rpc - LABEL_130);
      goto label_221;

    case 122:
      current_block = (Rpc - LABEL_131);
      goto label_222;

    case 123:
      current_block = (Rpc - LABEL_132);
      goto expression_124;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_124)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_131])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_222)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_221)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	2,
	2,
	2,
	3,
	2,
	1,
	2,
	1,
	1,
	1,
	2,
	1,
	3,
	3,
	3,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 19)
      goto label_220;
    blocks = (current_block [OBJECT_48]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_130])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_220)
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
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_410;
  Wrd9 = Wrd13;

DEFLABEL (label_409)
  (Wrd18.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_408;
  Wrd28 = Wrd32;

DEFLABEL (label_407)
  (Wrd37.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd42.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_406;
  Wrd47 = Wrd51;

DEFLABEL (label_405)
  (Wrd53.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (Wrd60.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd60.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd63.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd66.Obj) = ((Wrd63.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_404;
  Wrd62 = Wrd66;

DEFLABEL (label_403)
  (Wrd71.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd62.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd70.pObj) = (& (Rhp [-2]));
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd70.pObj)));
  (Wrd75.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd75.Obj);
  (* (Rhp++)) = (Wrd68.Obj);
  (Wrd74.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd74.pObj)));
  (* (Rhp++)) = (Wrd72.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd77.pObj) = (& (Rhp [-2]));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd77.pObj)));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd82.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd85.Obj) = ((Wrd82.pObj) [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if ((Wrd86.uLng) == 50)
    goto label_402;
  Wrd81 = Wrd85;

DEFLABEL (label_401)
  (Wrd90.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd81.Obj);
  (* (Rhp++)) = (Wrd90.Obj);
  (Wrd89.pObj) = (& (Rhp [-2]));
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd89.pObj)));
  (Wrd94.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd94.Obj);
  (* (Rhp++)) = (Wrd87.Obj);
  (Wrd93.pObj) = (& (Rhp [-2]));
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd93.pObj)));
  (Wrd95.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd91.Obj);
  (* (Rhp++)) = (Wrd95.Obj);
  (Wrd97.pObj) = (& (Rhp [-2]));
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd97.pObj)));
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd101.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd104.Obj) = ((Wrd101.pObj) [0]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if ((Wrd105.uLng) == 50)
    goto label_400;
  Wrd100 = Wrd104;

DEFLABEL (label_399)
  (Wrd106.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd100.Obj);
  (* (Rhp++)) = (Wrd106.Obj);
  (Wrd109.pObj) = (& (Rhp [-2]));
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd109.pObj)));
  (Wrd110.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd107.Obj);
  (* (Rhp++)) = (Wrd110.Obj);
  (Wrd112.pObj) = (& (Rhp [-2]));
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd112.pObj)));
  (* (--Rsp)) = (Wrd113.Obj);
  (Wrd116.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd119.Obj) = ((Wrd116.pObj) [0]);
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd119.Obj));
  if ((Wrd120.uLng) == 50)
    goto label_398;
  Wrd115 = Wrd119;

DEFLABEL (label_397)
  (Wrd124.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd115.Obj);
  (* (Rhp++)) = (Wrd124.Obj);
  (Wrd123.pObj) = (& (Rhp [-2]));
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd123.pObj)));
  (Wrd128.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd128.Obj);
  (* (Rhp++)) = (Wrd121.Obj);
  (Wrd127.pObj) = (& (Rhp [-2]));
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd127.pObj)));
  (* (Rhp++)) = (Wrd125.Obj);
  (* (Rhp++)) = (Wrd124.Obj);
  (Wrd130.pObj) = (& (Rhp [-2]));
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd130.pObj)));
  (* (--Rsp)) = (Wrd131.Obj);
  (Wrd135.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd138.Obj) = ((Wrd135.pObj) [0]);
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd138.Obj));
  if ((Wrd139.uLng) == 50)
    goto label_396;
  Wrd134 = Wrd138;

DEFLABEL (label_395)
  (Wrd143.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd134.Obj);
  (* (Rhp++)) = (Wrd143.Obj);
  (Wrd142.pObj) = (& (Rhp [-2]));
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd142.pObj)));
  (Wrd147.Obj) = (current_block [OBJECT_6]);
  (* (Rhp++)) = (Wrd147.Obj);
  (* (Rhp++)) = (Wrd140.Obj);
  (Wrd146.pObj) = (& (Rhp [-2]));
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd146.pObj)));
  (Wrd148.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd144.Obj);
  (* (Rhp++)) = (Wrd148.Obj);
  (Wrd150.pObj) = (& (Rhp [-2]));
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd150.pObj)));
  (* (--Rsp)) = (Wrd151.Obj);
  (Wrd154.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd157.Obj) = ((Wrd154.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_394;
  Wrd153 = Wrd157;

DEFLABEL (label_393)
  (Wrd159.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd153.Obj);
  (* (Rhp++)) = (Wrd159.Obj);
  (Wrd162.pObj) = (& (Rhp [-2]));
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd162.pObj)));
  (Wrd163.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd160.Obj);
  (* (Rhp++)) = (Wrd163.Obj);
  (Wrd165.pObj) = (& (Rhp [-2]));
  (Wrd166.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd165.pObj)));
  (* (--Rsp)) = (Wrd166.Obj);
  (Wrd169.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd172.Obj) = ((Wrd169.pObj) [0]);
  (Wrd173.uLng) = (OBJECT_TYPE (Wrd172.Obj));
  if ((Wrd173.uLng) == 50)
    goto label_392;
  Wrd168 = Wrd172;

DEFLABEL (label_391)
  (Wrd177.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd168.Obj);
  (* (Rhp++)) = (Wrd177.Obj);
  (Wrd176.pObj) = (& (Rhp [-2]));
  (Wrd174.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd176.pObj)));
  (Wrd181.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd181.Obj);
  (* (Rhp++)) = (Wrd174.Obj);
  (Wrd180.pObj) = (& (Rhp [-2]));
  (Wrd178.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd180.pObj)));
  (* (Rhp++)) = (Wrd178.Obj);
  (* (Rhp++)) = (Wrd177.Obj);
  (Wrd183.pObj) = (& (Rhp [-2]));
  (Wrd184.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd183.pObj)));
  (* (--Rsp)) = (Wrd184.Obj);
  (Wrd188.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd191.Obj) = ((Wrd188.pObj) [0]);
  (Wrd192.uLng) = (OBJECT_TYPE (Wrd191.Obj));
  if ((Wrd192.uLng) == 50)
    goto label_390;
  Wrd187 = Wrd191;

DEFLABEL (label_389)
  (Wrd196.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd187.Obj);
  (* (Rhp++)) = (Wrd196.Obj);
  (Wrd195.pObj) = (& (Rhp [-2]));
  (Wrd193.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd195.pObj)));
  (Wrd200.Obj) = (current_block [OBJECT_7]);
  (* (Rhp++)) = (Wrd200.Obj);
  (* (Rhp++)) = (Wrd193.Obj);
  (Wrd199.pObj) = (& (Rhp [-2]));
  (Wrd197.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd199.pObj)));
  (Wrd201.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd197.Obj);
  (* (Rhp++)) = (Wrd201.Obj);
  (Wrd203.pObj) = (& (Rhp [-2]));
  (Wrd204.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd203.pObj)));
  (* (--Rsp)) = (Wrd204.Obj);
  (Wrd207.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd210.Obj) = ((Wrd207.pObj) [0]);
  (Wrd211.uLng) = (OBJECT_TYPE (Wrd210.Obj));
  if ((Wrd211.uLng) == 50)
    goto label_388;
  Wrd206 = Wrd210;

DEFLABEL (label_387)
  (Wrd212.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd206.Obj);
  (* (Rhp++)) = (Wrd212.Obj);
  (Wrd215.pObj) = (& (Rhp [-2]));
  (Wrd213.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd215.pObj)));
  (Wrd216.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd213.Obj);
  (* (Rhp++)) = (Wrd216.Obj);
  (Wrd218.pObj) = (& (Rhp [-2]));
  (Wrd219.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd218.pObj)));
  (* (--Rsp)) = (Wrd219.Obj);
  (Wrd222.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd225.Obj) = ((Wrd222.pObj) [0]);
  (Wrd226.uLng) = (OBJECT_TYPE (Wrd225.Obj));
  if ((Wrd226.uLng) == 50)
    goto label_386;
  Wrd221 = Wrd225;

DEFLABEL (label_385)
  (Wrd230.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd221.Obj);
  (* (Rhp++)) = (Wrd230.Obj);
  (Wrd229.pObj) = (& (Rhp [-2]));
  (Wrd227.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd229.pObj)));
  (Wrd234.Obj) = (current_block [OBJECT_8]);
  (* (Rhp++)) = (Wrd234.Obj);
  (* (Rhp++)) = (Wrd227.Obj);
  (Wrd233.pObj) = (& (Rhp [-2]));
  (Wrd231.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd233.pObj)));
  (* (Rhp++)) = (Wrd231.Obj);
  (* (Rhp++)) = (Wrd230.Obj);
  (Wrd236.pObj) = (& (Rhp [-2]));
  (Wrd237.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd236.pObj)));
  (* (--Rsp)) = (Wrd237.Obj);
  (Wrd241.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd244.Obj) = ((Wrd241.pObj) [0]);
  (Wrd245.uLng) = (OBJECT_TYPE (Wrd244.Obj));
  if ((Wrd245.uLng) == 50)
    goto label_384;
  Wrd240 = Wrd244;

DEFLABEL (label_383)
  (Wrd249.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd240.Obj);
  (* (Rhp++)) = (Wrd249.Obj);
  (Wrd248.pObj) = (& (Rhp [-2]));
  (Wrd246.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd248.pObj)));
  (Wrd253.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd253.Obj);
  (* (Rhp++)) = (Wrd246.Obj);
  (Wrd252.pObj) = (& (Rhp [-2]));
  (Wrd250.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd252.pObj)));
  (Wrd254.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd250.Obj);
  (* (Rhp++)) = (Wrd254.Obj);
  (Wrd256.pObj) = (& (Rhp [-2]));
  (Wrd257.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd256.pObj)));
  (* (--Rsp)) = (Wrd257.Obj);
  (Wrd260.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd263.Obj) = ((Wrd260.pObj) [0]);
  (Wrd264.uLng) = (OBJECT_TYPE (Wrd263.Obj));
  if ((Wrd264.uLng) == 50)
    goto label_382;
  Wrd259 = Wrd263;

DEFLABEL (label_381)
  (Wrd265.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd259.Obj);
  (* (Rhp++)) = (Wrd265.Obj);
  (Wrd268.pObj) = (& (Rhp [-2]));
  (Wrd266.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd268.pObj)));
  (Wrd269.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd266.Obj);
  (* (Rhp++)) = (Wrd269.Obj);
  (Wrd271.pObj) = (& (Rhp [-2]));
  (Wrd272.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd271.pObj)));
  (* (--Rsp)) = (Wrd272.Obj);
  (Wrd275.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd278.Obj) = ((Wrd275.pObj) [0]);
  (Wrd279.uLng) = (OBJECT_TYPE (Wrd278.Obj));
  if ((Wrd279.uLng) == 50)
    goto label_380;
  Wrd274 = Wrd278;

DEFLABEL (label_379)
  (Wrd283.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd274.Obj);
  (* (Rhp++)) = (Wrd283.Obj);
  (Wrd282.pObj) = (& (Rhp [-2]));
  (Wrd280.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd282.pObj)));
  (Wrd287.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd287.Obj);
  (* (Rhp++)) = (Wrd280.Obj);
  (Wrd286.pObj) = (& (Rhp [-2]));
  (Wrd284.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd286.pObj)));
  (* (Rhp++)) = (Wrd284.Obj);
  (* (Rhp++)) = (Wrd283.Obj);
  (Wrd289.pObj) = (& (Rhp [-2]));
  (Wrd290.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd289.pObj)));
  (* (--Rsp)) = (Wrd290.Obj);
  (Wrd294.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd297.Obj) = ((Wrd294.pObj) [0]);
  (Wrd298.uLng) = (OBJECT_TYPE (Wrd297.Obj));
  if ((Wrd298.uLng) == 50)
    goto label_378;
  Wrd293 = Wrd297;

DEFLABEL (label_377)
  (Wrd302.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd293.Obj);
  (* (Rhp++)) = (Wrd302.Obj);
  (Wrd301.pObj) = (& (Rhp [-2]));
  (Wrd299.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd301.pObj)));
  (Wrd306.Obj) = (current_block [OBJECT_8]);
  (* (Rhp++)) = (Wrd306.Obj);
  (* (Rhp++)) = (Wrd299.Obj);
  (Wrd305.pObj) = (& (Rhp [-2]));
  (Wrd303.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd305.pObj)));
  (Wrd307.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd303.Obj);
  (* (Rhp++)) = (Wrd307.Obj);
  (Wrd309.pObj) = (& (Rhp [-2]));
  (Wrd310.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd309.pObj)));
  (* (--Rsp)) = (Wrd310.Obj);
  (Wrd313.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd316.Obj) = ((Wrd313.pObj) [0]);
  (Wrd317.uLng) = (OBJECT_TYPE (Wrd316.Obj));
  if ((Wrd317.uLng) == 50)
    goto label_376;
  Wrd312 = Wrd316;

DEFLABEL (label_375)
  (Wrd318.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd312.Obj);
  (* (Rhp++)) = (Wrd318.Obj);
  (Wrd321.pObj) = (& (Rhp [-2]));
  (Wrd319.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd321.pObj)));
  (Wrd322.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd319.Obj);
  (* (Rhp++)) = (Wrd322.Obj);
  (Wrd324.pObj) = (& (Rhp [-2]));
  (Wrd325.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd324.pObj)));
  (* (--Rsp)) = (Wrd325.Obj);
  (Wrd328.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd331.Obj) = ((Wrd328.pObj) [0]);
  (Wrd332.uLng) = (OBJECT_TYPE (Wrd331.Obj));
  if ((Wrd332.uLng) == 50)
    goto label_374;
  Wrd327 = Wrd331;

DEFLABEL (label_373)
  (Wrd336.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd327.Obj);
  (* (Rhp++)) = (Wrd336.Obj);
  (Wrd335.pObj) = (& (Rhp [-2]));
  (Wrd333.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd335.pObj)));
  (Wrd340.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = (Wrd340.Obj);
  (* (Rhp++)) = (Wrd333.Obj);
  (Wrd339.pObj) = (& (Rhp [-2]));
  (Wrd337.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd339.pObj)));
  (* (Rhp++)) = (Wrd337.Obj);
  (* (Rhp++)) = (Wrd336.Obj);
  (Wrd342.pObj) = (& (Rhp [-2]));
  (Wrd343.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd342.pObj)));
  (* (--Rsp)) = (Wrd343.Obj);
  (Wrd347.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd350.Obj) = ((Wrd347.pObj) [0]);
  (Wrd351.uLng) = (OBJECT_TYPE (Wrd350.Obj));
  if ((Wrd351.uLng) == 50)
    goto label_372;
  Wrd346 = Wrd350;

DEFLABEL (label_371)
  (Wrd355.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd346.Obj);
  (* (Rhp++)) = (Wrd355.Obj);
  (Wrd354.pObj) = (& (Rhp [-2]));
  (Wrd352.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd354.pObj)));
  (Wrd359.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd359.Obj);
  (* (Rhp++)) = (Wrd352.Obj);
  (Wrd358.pObj) = (& (Rhp [-2]));
  (Wrd356.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd358.pObj)));
  (Wrd360.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd356.Obj);
  (* (Rhp++)) = (Wrd360.Obj);
  (Wrd362.pObj) = (& (Rhp [-2]));
  (Wrd363.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd362.pObj)));
  (* (--Rsp)) = (Wrd363.Obj);
  (Wrd366.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd369.Obj) = ((Wrd366.pObj) [0]);
  (Wrd370.uLng) = (OBJECT_TYPE (Wrd369.Obj));
  if ((Wrd370.uLng) == 50)
    goto label_370;
  Wrd365 = Wrd369;

DEFLABEL (label_369)
  (Wrd371.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd365.Obj);
  (* (Rhp++)) = (Wrd371.Obj);
  (Wrd374.pObj) = (& (Rhp [-2]));
  (Wrd372.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd374.pObj)));
  (Wrd375.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd372.Obj);
  (* (Rhp++)) = (Wrd375.Obj);
  (Wrd377.pObj) = (& (Rhp [-2]));
  (Wrd378.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd377.pObj)));
  (* (--Rsp)) = (Wrd378.Obj);
  (Wrd381.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd384.Obj) = ((Wrd381.pObj) [0]);
  (Wrd385.uLng) = (OBJECT_TYPE (Wrd384.Obj));
  if ((Wrd385.uLng) == 50)
    goto label_368;
  Wrd380 = Wrd384;

DEFLABEL (label_367)
  (Wrd389.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd380.Obj);
  (* (Rhp++)) = (Wrd389.Obj);
  (Wrd388.pObj) = (& (Rhp [-2]));
  (Wrd386.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd388.pObj)));
  (Wrd393.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd393.Obj);
  (* (Rhp++)) = (Wrd386.Obj);
  (Wrd392.pObj) = (& (Rhp [-2]));
  (Wrd390.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd392.pObj)));
  (* (Rhp++)) = (Wrd390.Obj);
  (* (Rhp++)) = (Wrd389.Obj);
  (Wrd395.pObj) = (& (Rhp [-2]));
  (Wrd396.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd395.pObj)));
  (* (--Rsp)) = (Wrd396.Obj);
  (Wrd400.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd403.Obj) = ((Wrd400.pObj) [0]);
  (Wrd404.uLng) = (OBJECT_TYPE (Wrd403.Obj));
  if ((Wrd404.uLng) == 50)
    goto label_366;
  Wrd399 = Wrd403;

DEFLABEL (label_365)
  (Wrd408.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd399.Obj);
  (* (Rhp++)) = (Wrd408.Obj);
  (Wrd407.pObj) = (& (Rhp [-2]));
  (Wrd405.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd407.pObj)));
  (Wrd412.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = (Wrd412.Obj);
  (* (Rhp++)) = (Wrd405.Obj);
  (Wrd411.pObj) = (& (Rhp [-2]));
  (Wrd409.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd411.pObj)));
  (Wrd413.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd409.Obj);
  (* (Rhp++)) = (Wrd413.Obj);
  (Wrd415.pObj) = (& (Rhp [-2]));
  (Wrd416.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd415.pObj)));
  (* (--Rsp)) = (Wrd416.Obj);
  (Wrd419.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd422.Obj) = ((Wrd419.pObj) [0]);
  (Wrd423.uLng) = (OBJECT_TYPE (Wrd422.Obj));
  if ((Wrd423.uLng) == 50)
    goto label_364;
  Wrd418 = Wrd422;

DEFLABEL (label_363)
  (Wrd424.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd418.Obj);
  (* (Rhp++)) = (Wrd424.Obj);
  (Wrd427.pObj) = (& (Rhp [-2]));
  (Wrd425.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd427.pObj)));
  (Wrd428.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd425.Obj);
  (* (Rhp++)) = (Wrd428.Obj);
  (Wrd430.pObj) = (& (Rhp [-2]));
  (Wrd431.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd430.pObj)));
  (* (--Rsp)) = (Wrd431.Obj);
  (Wrd434.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14]));
  (Wrd437.Obj) = ((Wrd434.pObj) [0]);
  (Wrd438.uLng) = (OBJECT_TYPE (Wrd437.Obj));
  if ((Wrd438.uLng) == 50)
    goto label_362;
  Wrd433 = Wrd437;

DEFLABEL (label_361)
  (Wrd442.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd433.Obj);
  (* (Rhp++)) = (Wrd442.Obj);
  (Wrd441.pObj) = (& (Rhp [-2]));
  (Wrd439.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd441.pObj)));
  (Wrd446.Obj) = (current_block [OBJECT_12]);
  (* (Rhp++)) = (Wrd446.Obj);
  (* (Rhp++)) = (Wrd439.Obj);
  (Wrd445.pObj) = (& (Rhp [-2]));
  (Wrd443.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd445.pObj)));
  (* (Rhp++)) = (Wrd443.Obj);
  (* (Rhp++)) = (Wrd442.Obj);
  (Wrd448.pObj) = (& (Rhp [-2]));
  (Wrd449.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd448.pObj)));
  (* (--Rsp)) = (Wrd449.Obj);
  (Wrd453.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15]));
  (Wrd456.Obj) = ((Wrd453.pObj) [0]);
  (Wrd457.uLng) = (OBJECT_TYPE (Wrd456.Obj));
  if ((Wrd457.uLng) == 50)
    goto label_360;
  Wrd452 = Wrd456;

DEFLABEL (label_359)
  (Wrd461.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd452.Obj);
  (* (Rhp++)) = (Wrd461.Obj);
  (Wrd460.pObj) = (& (Rhp [-2]));
  (Wrd458.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd460.pObj)));
  (Wrd465.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd465.Obj);
  (* (Rhp++)) = (Wrd458.Obj);
  (Wrd464.pObj) = (& (Rhp [-2]));
  (Wrd462.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd464.pObj)));
  (Wrd466.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd462.Obj);
  (* (Rhp++)) = (Wrd466.Obj);
  (Wrd468.pObj) = (& (Rhp [-2]));
  (Wrd469.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd468.pObj)));
  (* (--Rsp)) = (Wrd469.Obj);
  (Wrd472.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd475.Obj) = ((Wrd472.pObj) [0]);
  (Wrd476.uLng) = (OBJECT_TYPE (Wrd475.Obj));
  if ((Wrd476.uLng) == 50)
    goto label_358;
  Wrd471 = Wrd475;

DEFLABEL (label_357)
  (Wrd477.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd471.Obj);
  (* (Rhp++)) = (Wrd477.Obj);
  (Wrd480.pObj) = (& (Rhp [-2]));
  (Wrd478.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd480.pObj)));
  (Wrd481.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd478.Obj);
  (* (Rhp++)) = (Wrd481.Obj);
  (Wrd483.pObj) = (& (Rhp [-2]));
  (Wrd484.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd483.pObj)));
  (* (--Rsp)) = (Wrd484.Obj);
  (Wrd487.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15]));
  (Wrd490.Obj) = ((Wrd487.pObj) [0]);
  (Wrd491.uLng) = (OBJECT_TYPE (Wrd490.Obj));
  if ((Wrd491.uLng) == 50)
    goto label_356;
  Wrd486 = Wrd490;

DEFLABEL (label_355)
  (Wrd495.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd486.Obj);
  (* (Rhp++)) = (Wrd495.Obj);
  (Wrd494.pObj) = (& (Rhp [-2]));
  (Wrd492.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd494.pObj)));
  (Wrd499.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd499.Obj);
  (* (Rhp++)) = (Wrd492.Obj);
  (Wrd498.pObj) = (& (Rhp [-2]));
  (Wrd496.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd498.pObj)));
  (* (Rhp++)) = (Wrd496.Obj);
  (* (Rhp++)) = (Wrd495.Obj);
  (Wrd501.pObj) = (& (Rhp [-2]));
  (Wrd502.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd501.pObj)));
  (* (--Rsp)) = (Wrd502.Obj);
  (Wrd506.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14]));
  (Wrd509.Obj) = ((Wrd506.pObj) [0]);
  (Wrd510.uLng) = (OBJECT_TYPE (Wrd509.Obj));
  if ((Wrd510.uLng) == 50)
    goto label_354;
  Wrd505 = Wrd509;

DEFLABEL (label_353)
  (Wrd514.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd505.Obj);
  (* (Rhp++)) = (Wrd514.Obj);
  (Wrd513.pObj) = (& (Rhp [-2]));
  (Wrd511.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd513.pObj)));
  (Wrd518.Obj) = (current_block [OBJECT_12]);
  (* (Rhp++)) = (Wrd518.Obj);
  (* (Rhp++)) = (Wrd511.Obj);
  (Wrd517.pObj) = (& (Rhp [-2]));
  (Wrd515.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd517.pObj)));
  (Wrd519.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd515.Obj);
  (* (Rhp++)) = (Wrd519.Obj);
  (Wrd521.pObj) = (& (Rhp [-2]));
  (Wrd522.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd521.pObj)));
  (* (--Rsp)) = (Wrd522.Obj);
  (Wrd525.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd528.Obj) = ((Wrd525.pObj) [0]);
  (Wrd529.uLng) = (OBJECT_TYPE (Wrd528.Obj));
  if ((Wrd529.uLng) == 50)
    goto label_352;
  Wrd524 = Wrd528;

DEFLABEL (label_351)
  (Wrd530.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd524.Obj);
  (* (Rhp++)) = (Wrd530.Obj);
  (Wrd533.pObj) = (& (Rhp [-2]));
  (Wrd531.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd533.pObj)));
  (Wrd534.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd531.Obj);
  (* (Rhp++)) = (Wrd534.Obj);
  (Wrd536.pObj) = (& (Rhp [-2]));
  (Wrd537.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd536.pObj)));
  (* (--Rsp)) = (Wrd537.Obj);
  (Wrd540.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16]));
  (Wrd543.Obj) = ((Wrd540.pObj) [0]);
  (Wrd544.uLng) = (OBJECT_TYPE (Wrd543.Obj));
  if ((Wrd544.uLng) == 50)
    goto label_350;
  Wrd539 = Wrd543;

DEFLABEL (label_349)
  (Wrd548.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd539.Obj);
  (* (Rhp++)) = (Wrd548.Obj);
  (Wrd547.pObj) = (& (Rhp [-2]));
  (Wrd545.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd547.pObj)));
  (Wrd552.Obj) = (current_block [OBJECT_14]);
  (* (Rhp++)) = (Wrd552.Obj);
  (* (Rhp++)) = (Wrd545.Obj);
  (Wrd551.pObj) = (& (Rhp [-2]));
  (Wrd549.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd551.pObj)));
  (* (Rhp++)) = (Wrd549.Obj);
  (* (Rhp++)) = (Wrd548.Obj);
  (Wrd554.pObj) = (& (Rhp [-2]));
  (Wrd555.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd554.pObj)));
  (* (--Rsp)) = (Wrd555.Obj);
  (Wrd559.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15]));
  (Wrd562.Obj) = ((Wrd559.pObj) [0]);
  (Wrd563.uLng) = (OBJECT_TYPE (Wrd562.Obj));
  if ((Wrd563.uLng) == 50)
    goto label_348;
  Wrd558 = Wrd562;

DEFLABEL (label_347)
  (Wrd567.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd558.Obj);
  (* (Rhp++)) = (Wrd567.Obj);
  (Wrd566.pObj) = (& (Rhp [-2]));
  (Wrd564.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd566.pObj)));
  (Wrd571.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd571.Obj);
  (* (Rhp++)) = (Wrd564.Obj);
  (Wrd570.pObj) = (& (Rhp [-2]));
  (Wrd568.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd570.pObj)));
  (Wrd572.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd568.Obj);
  (* (Rhp++)) = (Wrd572.Obj);
  (Wrd574.pObj) = (& (Rhp [-2]));
  (Wrd575.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd574.pObj)));
  (* (--Rsp)) = (Wrd575.Obj);
  (Wrd578.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd581.Obj) = ((Wrd578.pObj) [0]);
  (Wrd582.uLng) = (OBJECT_TYPE (Wrd581.Obj));
  if ((Wrd582.uLng) == 50)
    goto label_346;
  Wrd577 = Wrd581;

DEFLABEL (label_345)
  (Wrd583.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd577.Obj);
  (* (Rhp++)) = (Wrd583.Obj);
  (Wrd586.pObj) = (& (Rhp [-2]));
  (Wrd584.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd586.pObj)));
  (Wrd587.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd584.Obj);
  (* (Rhp++)) = (Wrd587.Obj);
  (Wrd589.pObj) = (& (Rhp [-2]));
  (Wrd590.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd589.pObj)));
  (* (--Rsp)) = (Wrd590.Obj);
  (Wrd593.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15]));
  (Wrd596.Obj) = ((Wrd593.pObj) [0]);
  (Wrd597.uLng) = (OBJECT_TYPE (Wrd596.Obj));
  if ((Wrd597.uLng) == 50)
    goto label_344;
  Wrd592 = Wrd596;

DEFLABEL (label_343)
  (Wrd601.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd592.Obj);
  (* (Rhp++)) = (Wrd601.Obj);
  (Wrd600.pObj) = (& (Rhp [-2]));
  (Wrd598.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd600.pObj)));
  (Wrd605.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd605.Obj);
  (* (Rhp++)) = (Wrd598.Obj);
  (Wrd604.pObj) = (& (Rhp [-2]));
  (Wrd602.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd604.pObj)));
  (* (Rhp++)) = (Wrd602.Obj);
  (* (Rhp++)) = (Wrd601.Obj);
  (Wrd607.pObj) = (& (Rhp [-2]));
  (Wrd608.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd607.pObj)));
  (* (--Rsp)) = (Wrd608.Obj);
  (Wrd612.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16]));
  (Wrd615.Obj) = ((Wrd612.pObj) [0]);
  (Wrd616.uLng) = (OBJECT_TYPE (Wrd615.Obj));
  if ((Wrd616.uLng) == 50)
    goto label_342;
  Wrd611 = Wrd615;

DEFLABEL (label_341)
  (Wrd620.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd611.Obj);
  (* (Rhp++)) = (Wrd620.Obj);
  (Wrd619.pObj) = (& (Rhp [-2]));
  (Wrd617.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd619.pObj)));
  (Wrd624.Obj) = (current_block [OBJECT_14]);
  (* (Rhp++)) = (Wrd624.Obj);
  (* (Rhp++)) = (Wrd617.Obj);
  (Wrd623.pObj) = (& (Rhp [-2]));
  (Wrd621.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd623.pObj)));
  (Wrd625.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd621.Obj);
  (* (Rhp++)) = (Wrd625.Obj);
  (Wrd627.pObj) = (& (Rhp [-2]));
  (Wrd628.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd627.pObj)));
  (* (--Rsp)) = (Wrd628.Obj);
  (Wrd631.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd634.Obj) = ((Wrd631.pObj) [0]);
  (Wrd635.uLng) = (OBJECT_TYPE (Wrd634.Obj));
  if ((Wrd635.uLng) == 50)
    goto label_340;
  Wrd630 = Wrd634;

DEFLABEL (label_339)
  (Wrd636.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd630.Obj);
  (* (Rhp++)) = (Wrd636.Obj);
  (Wrd639.pObj) = (& (Rhp [-2]));
  (Wrd637.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd639.pObj)));
  (Wrd640.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd637.Obj);
  (* (Rhp++)) = (Wrd640.Obj);
  (Wrd642.pObj) = (& (Rhp [-2]));
  (Wrd643.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd642.pObj)));
  (* (--Rsp)) = (Wrd643.Obj);
  (Wrd644.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd644.Obj);
  (Wrd645.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd645.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 3);

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45]));

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 3);

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_338;
  Wrd8 = Wrd12;

DEFLABEL (label_337)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_336;
  Wrd14 = Wrd18;

DEFLABEL (label_335)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_334;
  Wrd8 = Wrd12;

DEFLABEL (label_333)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_332;
  Wrd14 = Wrd18;

DEFLABEL (label_331)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_330;
  Wrd8 = Wrd12;

DEFLABEL (label_329)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_328;
  Wrd14 = Wrd18;

DEFLABEL (label_327)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_326;
  Wrd8 = Wrd12;

DEFLABEL (label_325)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_324;
  Wrd14 = Wrd18;

DEFLABEL (label_323)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_322;
  Wrd8 = Wrd12;

DEFLABEL (label_321)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_320;
  Wrd14 = Wrd18;

DEFLABEL (label_319)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_318;
  Wrd8 = Wrd12;

DEFLABEL (label_317)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_316;
  Wrd14 = Wrd18;

DEFLABEL (label_315)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_314;
  Wrd8 = Wrd12;

DEFLABEL (label_313)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_312;
  Wrd14 = Wrd18;

DEFLABEL (label_311)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_310;
  Wrd8 = Wrd12;

DEFLABEL (label_309)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_308;
  Wrd14 = Wrd18;

DEFLABEL (label_307)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_306;
  Wrd8 = Wrd12;

DEFLABEL (label_305)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_304;
  Wrd14 = Wrd18;

DEFLABEL (label_303)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_302;
  Wrd8 = Wrd12;

DEFLABEL (label_301)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_300;
  Wrd14 = Wrd18;

DEFLABEL (label_299)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_298;
  Wrd8 = Wrd12;

DEFLABEL (label_297)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_296;
  Wrd14 = Wrd18;

DEFLABEL (label_295)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_294;
  Wrd8 = Wrd12;

DEFLABEL (label_293)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_292;
  Wrd14 = Wrd18;

DEFLABEL (label_291)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_83);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_290;
  Wrd8 = Wrd12;

DEFLABEL (label_289)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_288;
  Wrd14 = Wrd18;

DEFLABEL (label_287)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_114)
  INTERRUPT_CHECK (27, LABEL_86);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 3);

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_89);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_286;
  Wrd8 = Wrd12;

DEFLABEL (label_285)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_284;
  Wrd14 = Wrd18;

DEFLABEL (label_283)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_282;
  Wrd20 = Wrd24;

DEFLABEL (label_281)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_280;
  Wrd26 = Wrd30;

DEFLABEL (label_279)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95]));

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_90);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_278;
  Wrd8 = Wrd12;

DEFLABEL (label_277)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_276;
  Wrd14 = Wrd18;

DEFLABEL (label_275)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_274;
  Wrd20 = Wrd24;

DEFLABEL (label_273)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_272;
  Wrd26 = Wrd30;

DEFLABEL (label_271)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95]));

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_96);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_270;
  Wrd8 = Wrd12;

DEFLABEL (label_269)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_268;
  Wrd14 = Wrd18;

DEFLABEL (label_267)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_266;
  Wrd20 = Wrd24;

DEFLABEL (label_265)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_264;
  Wrd26 = Wrd30;

DEFLABEL (label_263)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95]));

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_101);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_262;
  Wrd8 = Wrd12;

DEFLABEL (label_261)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_260;
  Wrd14 = Wrd18;

DEFLABEL (label_259)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_258;
  Wrd20 = Wrd24;

DEFLABEL (label_257)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_256;
  Wrd26 = Wrd30;

DEFLABEL (label_255)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95]));

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_254;
  Wrd8 = Wrd12;

DEFLABEL (label_253)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_252;
  Wrd14 = Wrd18;

DEFLABEL (label_251)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_250;
  Wrd20 = Wrd24;

DEFLABEL (label_249)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_248;
  Wrd26 = Wrd30;

DEFLABEL (label_247)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95]));

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_246;
  Wrd8 = Wrd12;

DEFLABEL (label_245)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_244;
  Wrd14 = Wrd18;

DEFLABEL (label_243)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_242;
  Wrd20 = Wrd24;

DEFLABEL (label_241)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_240;
  Wrd26 = Wrd30;

DEFLABEL (label_239)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95]));

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_116);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_238;
  Wrd8 = Wrd12;

DEFLABEL (label_237)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_236;
  Wrd14 = Wrd18;

DEFLABEL (label_235)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_69]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_234;
  Wrd20 = Wrd24;

DEFLABEL (label_233)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_232;
  Wrd26 = Wrd30;

DEFLABEL (label_231)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95]));

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_121);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_71]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_230;
  Wrd5 = Wrd9;

DEFLABEL (label_229)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_72]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_228;
  Wrd11 = Wrd15;

DEFLABEL (label_227)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_73]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_226;
  Wrd17 = Wrd21;

DEFLABEL (label_225)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_74]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_224;
  Wrd25 = Wrd29;

DEFLABEL (label_223)
  (Rsp [4]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95]));

DEFLABEL (label_224)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_129])), (Wrd26.pObj));

DEFLABEL (label_218)
  (Wrd25.Obj) = Rvl;
  goto label_223;

DEFLABEL (label_226)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_128])), (Wrd18.pObj));

DEFLABEL (label_217)
  (Wrd17.Obj) = Rvl;
  goto label_225;

DEFLABEL (label_228)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_127])), (Wrd12.pObj));

DEFLABEL (label_216)
  (Wrd11.Obj) = Rvl;
  goto label_227;

DEFLABEL (label_230)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_126])), (Wrd6.pObj));

DEFLABEL (label_215)
  (Wrd5.Obj) = Rvl;
  goto label_229;

DEFLABEL (label_232)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_125])), (Wrd27.pObj));

DEFLABEL (label_214)
  (Wrd26.Obj) = Rvl;
  goto label_231;

DEFLABEL (label_234)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_124])), (Wrd21.pObj));

DEFLABEL (label_213)
  (Wrd20.Obj) = Rvl;
  goto label_233;

DEFLABEL (label_236)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_123])), (Wrd15.pObj));

DEFLABEL (label_212)
  (Wrd14.Obj) = Rvl;
  goto label_235;

DEFLABEL (label_238)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_122])), (Wrd9.pObj));

DEFLABEL (label_211)
  (Wrd8.Obj) = Rvl;
  goto label_237;

DEFLABEL (label_240)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_120])), (Wrd27.pObj));

DEFLABEL (label_210)
  (Wrd26.Obj) = Rvl;
  goto label_239;

DEFLABEL (label_242)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_119])), (Wrd21.pObj));

DEFLABEL (label_209)
  (Wrd20.Obj) = Rvl;
  goto label_241;

DEFLABEL (label_244)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_118])), (Wrd15.pObj));

DEFLABEL (label_208)
  (Wrd14.Obj) = Rvl;
  goto label_243;

DEFLABEL (label_246)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_117])), (Wrd9.pObj));

DEFLABEL (label_207)
  (Wrd8.Obj) = Rvl;
  goto label_245;

DEFLABEL (label_248)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_115])), (Wrd27.pObj));

DEFLABEL (label_206)
  (Wrd26.Obj) = Rvl;
  goto label_247;

DEFLABEL (label_250)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_114])), (Wrd21.pObj));

DEFLABEL (label_205)
  (Wrd20.Obj) = Rvl;
  goto label_249;

DEFLABEL (label_252)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_113])), (Wrd15.pObj));

DEFLABEL (label_204)
  (Wrd14.Obj) = Rvl;
  goto label_251;

DEFLABEL (label_254)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_112])), (Wrd9.pObj));

DEFLABEL (label_203)
  (Wrd8.Obj) = Rvl;
  goto label_253;

DEFLABEL (label_256)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_110])), (Wrd27.pObj));

DEFLABEL (label_202)
  (Wrd26.Obj) = Rvl;
  goto label_255;

DEFLABEL (label_258)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_109])), (Wrd21.pObj));

DEFLABEL (label_201)
  (Wrd20.Obj) = Rvl;
  goto label_257;

DEFLABEL (label_260)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_108])), (Wrd15.pObj));

DEFLABEL (label_200)
  (Wrd14.Obj) = Rvl;
  goto label_259;

DEFLABEL (label_262)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_107])), (Wrd9.pObj));

DEFLABEL (label_199)
  (Wrd8.Obj) = Rvl;
  goto label_261;

DEFLABEL (label_264)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_105])), (Wrd27.pObj));

DEFLABEL (label_198)
  (Wrd26.Obj) = Rvl;
  goto label_263;

DEFLABEL (label_266)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104])), (Wrd21.pObj));

DEFLABEL (label_197)
  (Wrd20.Obj) = Rvl;
  goto label_265;

DEFLABEL (label_268)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_103])), (Wrd15.pObj));

DEFLABEL (label_196)
  (Wrd14.Obj) = Rvl;
  goto label_267;

DEFLABEL (label_270)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_102])), (Wrd9.pObj));

DEFLABEL (label_195)
  (Wrd8.Obj) = Rvl;
  goto label_269;

DEFLABEL (label_272)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_100])), (Wrd27.pObj));

DEFLABEL (label_194)
  (Wrd26.Obj) = Rvl;
  goto label_271;

DEFLABEL (label_274)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_99])), (Wrd21.pObj));

DEFLABEL (label_193)
  (Wrd20.Obj) = Rvl;
  goto label_273;

DEFLABEL (label_276)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_98])), (Wrd15.pObj));

DEFLABEL (label_192)
  (Wrd14.Obj) = Rvl;
  goto label_275;

DEFLABEL (label_278)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_97])), (Wrd9.pObj));

DEFLABEL (label_191)
  (Wrd8.Obj) = Rvl;
  goto label_277;

DEFLABEL (label_280)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94])), (Wrd27.pObj));

DEFLABEL (label_190)
  (Wrd26.Obj) = Rvl;
  goto label_279;

DEFLABEL (label_282)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_93])), (Wrd21.pObj));

DEFLABEL (label_189)
  (Wrd20.Obj) = Rvl;
  goto label_281;

DEFLABEL (label_284)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92])), (Wrd15.pObj));

DEFLABEL (label_188)
  (Wrd14.Obj) = Rvl;
  goto label_283;

DEFLABEL (label_286)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_91])), (Wrd9.pObj));

DEFLABEL (label_187)
  (Wrd8.Obj) = Rvl;
  goto label_285;

DEFLABEL (label_288)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88])), (Wrd15.pObj));

DEFLABEL (label_186)
  (Wrd14.Obj) = Rvl;
  goto label_287;

DEFLABEL (label_290)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87])), (Wrd9.pObj));

DEFLABEL (label_185)
  (Wrd8.Obj) = Rvl;
  goto label_289;

DEFLABEL (label_292)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85])), (Wrd15.pObj));

DEFLABEL (label_184)
  (Wrd14.Obj) = Rvl;
  goto label_291;

DEFLABEL (label_294)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84])), (Wrd9.pObj));

DEFLABEL (label_183)
  (Wrd8.Obj) = Rvl;
  goto label_293;

DEFLABEL (label_296)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_82])), (Wrd15.pObj));

DEFLABEL (label_182)
  (Wrd14.Obj) = Rvl;
  goto label_295;

DEFLABEL (label_298)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81])), (Wrd9.pObj));

DEFLABEL (label_181)
  (Wrd8.Obj) = Rvl;
  goto label_297;

DEFLABEL (label_300)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79])), (Wrd15.pObj));

DEFLABEL (label_180)
  (Wrd14.Obj) = Rvl;
  goto label_299;

DEFLABEL (label_302)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78])), (Wrd9.pObj));

DEFLABEL (label_179)
  (Wrd8.Obj) = Rvl;
  goto label_301;

DEFLABEL (label_304)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_76])), (Wrd15.pObj));

DEFLABEL (label_178)
  (Wrd14.Obj) = Rvl;
  goto label_303;

DEFLABEL (label_306)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75])), (Wrd9.pObj));

DEFLABEL (label_177)
  (Wrd8.Obj) = Rvl;
  goto label_305;

DEFLABEL (label_308)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_73])), (Wrd15.pObj));

DEFLABEL (label_176)
  (Wrd14.Obj) = Rvl;
  goto label_307;

DEFLABEL (label_310)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72])), (Wrd9.pObj));

DEFLABEL (label_175)
  (Wrd8.Obj) = Rvl;
  goto label_309;

DEFLABEL (label_312)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70])), (Wrd15.pObj));

DEFLABEL (label_174)
  (Wrd14.Obj) = Rvl;
  goto label_311;

DEFLABEL (label_314)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69])), (Wrd9.pObj));

DEFLABEL (label_173)
  (Wrd8.Obj) = Rvl;
  goto label_313;

DEFLABEL (label_316)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67])), (Wrd15.pObj));

DEFLABEL (label_172)
  (Wrd14.Obj) = Rvl;
  goto label_315;

DEFLABEL (label_318)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66])), (Wrd9.pObj));

DEFLABEL (label_171)
  (Wrd8.Obj) = Rvl;
  goto label_317;

DEFLABEL (label_320)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64])), (Wrd15.pObj));

DEFLABEL (label_170)
  (Wrd14.Obj) = Rvl;
  goto label_319;

DEFLABEL (label_322)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63])), (Wrd9.pObj));

DEFLABEL (label_169)
  (Wrd8.Obj) = Rvl;
  goto label_321;

DEFLABEL (label_324)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61])), (Wrd15.pObj));

DEFLABEL (label_168)
  (Wrd14.Obj) = Rvl;
  goto label_323;

DEFLABEL (label_326)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60])), (Wrd9.pObj));

DEFLABEL (label_167)
  (Wrd8.Obj) = Rvl;
  goto label_325;

DEFLABEL (label_328)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58])), (Wrd15.pObj));

DEFLABEL (label_166)
  (Wrd14.Obj) = Rvl;
  goto label_327;

DEFLABEL (label_330)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57])), (Wrd9.pObj));

DEFLABEL (label_165)
  (Wrd8.Obj) = Rvl;
  goto label_329;

DEFLABEL (label_332)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55])), (Wrd15.pObj));

DEFLABEL (label_164)
  (Wrd14.Obj) = Rvl;
  goto label_331;

DEFLABEL (label_334)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54])), (Wrd9.pObj));

DEFLABEL (label_163)
  (Wrd8.Obj) = Rvl;
  goto label_333;

DEFLABEL (label_336)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51])), (Wrd15.pObj));

DEFLABEL (label_162)
  (Wrd14.Obj) = Rvl;
  goto label_335;

DEFLABEL (label_338)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50])), (Wrd9.pObj));

DEFLABEL (label_161)
  (Wrd8.Obj) = Rvl;
  goto label_337;

DEFLABEL (label_340)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42])), (Wrd631.pObj));

DEFLABEL (label_160)
  (Wrd630.Obj) = Rvl;
  goto label_339;

DEFLABEL (label_342)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41])), (Wrd612.pObj));

DEFLABEL (label_159)
  (Wrd611.Obj) = Rvl;
  goto label_341;

DEFLABEL (label_344)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40])), (Wrd593.pObj));

DEFLABEL (label_158)
  (Wrd592.Obj) = Rvl;
  goto label_343;

DEFLABEL (label_346)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39])), (Wrd578.pObj));

DEFLABEL (label_157)
  (Wrd577.Obj) = Rvl;
  goto label_345;

DEFLABEL (label_348)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38])), (Wrd559.pObj));

DEFLABEL (label_156)
  (Wrd558.Obj) = Rvl;
  goto label_347;

DEFLABEL (label_350)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37])), (Wrd540.pObj));

DEFLABEL (label_155)
  (Wrd539.Obj) = Rvl;
  goto label_349;

DEFLABEL (label_352)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36])), (Wrd525.pObj));

DEFLABEL (label_154)
  (Wrd524.Obj) = Rvl;
  goto label_351;

DEFLABEL (label_354)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35])), (Wrd506.pObj));

DEFLABEL (label_153)
  (Wrd505.Obj) = Rvl;
  goto label_353;

DEFLABEL (label_356)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34])), (Wrd487.pObj));

DEFLABEL (label_152)
  (Wrd486.Obj) = Rvl;
  goto label_355;

DEFLABEL (label_358)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33])), (Wrd472.pObj));

DEFLABEL (label_151)
  (Wrd471.Obj) = Rvl;
  goto label_357;

DEFLABEL (label_360)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32])), (Wrd453.pObj));

DEFLABEL (label_150)
  (Wrd452.Obj) = Rvl;
  goto label_359;

DEFLABEL (label_362)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd434.pObj));

DEFLABEL (label_149)
  (Wrd433.Obj) = Rvl;
  goto label_361;

DEFLABEL (label_364)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd419.pObj));

DEFLABEL (label_148)
  (Wrd418.Obj) = Rvl;
  goto label_363;

DEFLABEL (label_366)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd400.pObj));

DEFLABEL (label_147)
  (Wrd399.Obj) = Rvl;
  goto label_365;

DEFLABEL (label_368)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28])), (Wrd381.pObj));

DEFLABEL (label_146)
  (Wrd380.Obj) = Rvl;
  goto label_367;

DEFLABEL (label_370)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27])), (Wrd366.pObj));

DEFLABEL (label_145)
  (Wrd365.Obj) = Rvl;
  goto label_369;

DEFLABEL (label_372)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26])), (Wrd347.pObj));

DEFLABEL (label_144)
  (Wrd346.Obj) = Rvl;
  goto label_371;

DEFLABEL (label_374)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25])), (Wrd328.pObj));

DEFLABEL (label_143)
  (Wrd327.Obj) = Rvl;
  goto label_373;

DEFLABEL (label_376)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd313.pObj));

DEFLABEL (label_142)
  (Wrd312.Obj) = Rvl;
  goto label_375;

DEFLABEL (label_378)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd294.pObj));

DEFLABEL (label_141)
  (Wrd293.Obj) = Rvl;
  goto label_377;

DEFLABEL (label_380)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd275.pObj));

DEFLABEL (label_140)
  (Wrd274.Obj) = Rvl;
  goto label_379;

DEFLABEL (label_382)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21])), (Wrd260.pObj));

DEFLABEL (label_139)
  (Wrd259.Obj) = Rvl;
  goto label_381;

DEFLABEL (label_384)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd241.pObj));

DEFLABEL (label_138)
  (Wrd240.Obj) = Rvl;
  goto label_383;

DEFLABEL (label_386)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd222.pObj));

DEFLABEL (label_137)
  (Wrd221.Obj) = Rvl;
  goto label_385;

DEFLABEL (label_388)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd207.pObj));

DEFLABEL (label_136)
  (Wrd206.Obj) = Rvl;
  goto label_387;

DEFLABEL (label_390)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd188.pObj));

DEFLABEL (label_135)
  (Wrd187.Obj) = Rvl;
  goto label_389;

DEFLABEL (label_392)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16])), (Wrd169.pObj));

DEFLABEL (label_134)
  (Wrd168.Obj) = Rvl;
  goto label_391;

DEFLABEL (label_394)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd154.pObj));

DEFLABEL (label_133)
  (Wrd153.Obj) = Rvl;
  goto label_393;

DEFLABEL (label_396)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14])), (Wrd135.pObj));

DEFLABEL (label_132)
  (Wrd134.Obj) = Rvl;
  goto label_395;

DEFLABEL (label_398)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd116.pObj));

DEFLABEL (label_131)
  (Wrd115.Obj) = Rvl;
  goto label_397;

DEFLABEL (label_400)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12])), (Wrd101.pObj));

DEFLABEL (label_130)
  (Wrd100.Obj) = Rvl;
  goto label_399;

DEFLABEL (label_402)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd82.pObj));

DEFLABEL (label_129)
  (Wrd81.Obj) = Rvl;
  goto label_401;

DEFLABEL (label_404)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10])), (Wrd63.pObj));

DEFLABEL (label_128)
  (Wrd62.Obj) = Rvl;
  goto label_403;

DEFLABEL (label_406)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd48.pObj));

DEFLABEL (label_127)
  (Wrd47.Obj) = Rvl;
  goto label_405;

DEFLABEL (label_408)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd29.pObj));

DEFLABEL (label_126)
  (Wrd28.Obj) = Rvl;
  goto label_407;

DEFLABEL (label_410)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd10.pObj));

DEFLABEL (label_125)
  (Wrd9.Obj) = Rvl;
  goto label_409;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rinvex_so_3406cdabbb07ffc8 [19] =
  {
    { "rinvex_so_code_1", 3, rinvex_so_code_1 },
    { "rinvex_so_code_2", 23, rinvex_so_code_2 },
    { "rinvex_so_code_3", 16, rinvex_so_code_3 },
    { "rinvex_so_code_4", 40, rinvex_so_code_4 },
    { "rinvex_so_code_5", 2, rinvex_so_code_5 },
    { "rinvex_so_code_6", 4, rinvex_so_code_6 },
    { "rinvex_so_code_7", 2, rinvex_so_code_7 },
    { "rinvex_so_code_8", 3, rinvex_so_code_8 },
    { "rinvex_so_code_9", 6, rinvex_so_code_9 },
    { "rinvex_so_code_10", 32, rinvex_so_code_10 },
    { "rinvex_so_code_11", 2, rinvex_so_code_11 },
    { "rinvex_so_code_12", 6, rinvex_so_code_12 },
    { "rinvex_so_code_13", 6, rinvex_so_code_13 },
    { "rinvex_so_code_14", 5, rinvex_so_code_14 },
    { "rinvex_so_code_15", 10, rinvex_so_code_15 },
    { "rinvex_so_code_16", 4, rinvex_so_code_16 },
    { "rinvex_so_code_17", 2, rinvex_so_code_17 },
    { "rinvex_so_code_18", 2, rinvex_so_code_18 },
    { "rinvex_so_code_19", 3, rinvex_so_code_19 }
  };

int
decl_rinvex_so_3406cdabbb07ffc8 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rinvex_so_3406cdabbb07ffc8);
  return (0);
}

DECLARE_COMPILED_CODE ("rinvex.so", 124, decl_rinvex_so_3406cdabbb07ffc8, rinvex_so_3406cdabbb07ffc8)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rinvex_so_data_3406cdabbb07ffc8 [7945] =
  "\x86\x03\x25\xb4\x09\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x24"
  "\x28\x0d\x28\x0d\xba\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb"
  "\x1d\xb0\x82\x88\x1d\x08\xc2\xbc\x80\x0d\xbd\x0d\xbe\x0d\xbf\x0d"
  "\x1c\x25\xb5\xb6\xb7\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\xbd\x28\xb2\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88"
  "\x1d\xc1\x1c\xc1\x1c\x08\xb7\x1b\x25\xb7\xb6\x1b\x24\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88"
  "\x82\x1b\x80\xb4\x02\xb7\x25\x1b\xb6\xb7\x24\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\xb5\x28\x0d\x1c\x28\x0d"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85"
  "\x88\x07\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86"
  "\x88\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x1b\x24\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xc3\x1c\x1b\x24\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x28"
  "\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x07\x1b\x1b\x0d\x1c\x24"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x86\xb4\x1b\x24\x28\x1b\x28\x0d"
  "\xbc\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc2\x0d\x1c\x25\x1b\x24\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x0c\x0d\x0d\x1c\x1b\x24\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x02\x1d\x86\x0d\x0d\x1b\x24\x28\x0d\x1c\x28\xb4\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b"
  "\x1b\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\xbc\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\xb4\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\xb4\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xb8\x17\x1c\x88\x1b\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x1c\xb0\x2a\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\xb8\x1b\x2a\x1b\x2a\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x08\x14\x0d\x1b\x2a\x1b\x1b"
  "\x1b\xb4\x1b\x1b\x9d\x1b\x2a\x08\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x9d\xc3\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x08"
  "\x1b\x1b\x0d\x0d\x0d\x0d\x1b\xb5\xb1\x0d\x1b\xb7\xb6\x17\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\xb3\x2a\x1e\x1e\x1e\x17\x28\x0d\x26\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x24\x28\xb4\x28\xb2\x28\xb0\x28\x1b\x23\x22\x29"
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
  "\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5b\x2f\x55\x73\x65\x72\x73"
  "\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65"
  "\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d"
  "\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x2f\x72\x74\x6c\x6f\x70\x74\x2f\x72\x69\x6e\x76\x65\x78"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0c\x77\x61\x6c\x6b\x2d"
  "\x72\x67\x72\x61\x70\x68\x02\x03\x14\x77\x69\x74\x68\x2d\x6e\x65"
  "\x77\x2d\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x73\x04\x09\x66\x6f"
  "\x72\x2d\x65\x61\x63\x68\x03\x7f\x08\x81\x83\x02\x7e\x06\x81\x83"
  "\x02\x7d\x04\x83\x04\x07\x11\x02\x02\x0b\x76\x65\x63\x74\x6f\x72"
  "\x2d\x72\x65\x66\x11\x2a\x63\x75\x72\x72\x65\x6e\x74\x2d\x72\x67"
  "\x72\x61\x70\x68\x2a\x10\x2a\x69\x6e\x69\x74\x69\x61\x6c\x2d\x71"
  "\x75\x65\x75\x65\x2a\x0f\x2a\x62\x72\x61\x6e\x63\x68\x2d\x71\x75"
  "\x65\x75\x65\x2a\x12\x2a\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x76"
  "\x61\x6c\x75\x65\x73\x2a\x09\x05\x09\x05\x04\x0c\x6d\x61\x6b\x65"
  "\x2d\x76\x65\x63\x74\x6f\x72\x02\x0b\x6d\x61\x6b\x65\x2d\x71\x75"
  "\x65\x75\x65\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75"
  "\x69\x64\x2d\x62\x69\x6e\x64\x03\x15\x72\x67\x72\x61\x70\x68\x2d"
  "\x69\x6e\x69\x74\x69\x61\x6c\x2d\x65\x64\x67\x65\x73\x02\x0e\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x65\x2d\x77\x61\x6c\x6b\x04\x03\x10\x65"
  "\x64\x67\x65\x2d\x72\x69\x67\x68\x74\x2d\x6e\x6f\x64\x65\x04\x10"
  "\x65\x6e\x71\x75\x65\x75\x65\x21\x2f\x75\x6e\x73\x61\x66\x65\x0a"
  "\x09\x96\x01\x30\x81\x85\x02\x95\x01\x2e\x81\x83\x02\x94\x01\x2c"
  "\x83\x04\x93\x01\x2a\x81\x85\x02\x92\x01\x28\x81\x83\x02\x91\x01"
  "\x26\x81\x83\x02\x90\x01\x24\x81\x85\x02\x8f\x01\x22\x81\x83\x02"
  "\x8e\x01\x20\x81\x83\x02\x8d\x01\x1e\x81\x85\x02\x8c\x01\x1c\x81"
  "\x83\x02\x8b\x01\x1a\x81\x83\x02\x8a\x01\x18\x81\x85\x02\x89\x01"
  "\x16\x81\x83\x02\x88\x01\x14\x81\x83\x02\x87\x01\x12\x81\x85\x02"
  "\x86\x01\x10\x81\x83\x02\x85\x01\x0e\x81\x83\x02\x84\x01\x0c\x81"
  "\x83\x02\x83\x01\x0a\x81\x87\x02\x82\x01\x08\x81\x83\x02\x81\x01"
  "\x06\x81\x87\x02\x80\x01\x04\x83\x04\x2f\x51\x0b\x02\x02\x04\x63"
  "\x64\x72\x0c\x04\x63\x61\x72\x0d\x09\x03\x09\x04\x03\x0d\x71\x75"
  "\x65\x75\x65\x2d\x65\x6d\x70\x74\x79\x3f\x03\x0c\x77\x61\x6c\x6b"
  "\x2d\x62\x62\x6c\x6f\x63\x6b\x0e\x04\x0d\x76\x65\x63\x74\x6f\x72"
  "\x2d\x66\x69\x6c\x6c\x21\x0f\x03\x10\x64\x65\x71\x75\x65\x75\x65"
  "\x21\x2f\x75\x6e\x73\x61\x66\x65\x05\xa6\x01\x22\x81\x81\x02\xa5"
  "\x01\x20\x81\x83\x02\xa4\x01\x1e\x81\x81\x02\xa3\x01\x1c\x81\x85"
  "\x02\xa2\x01\x1a\x81\x81\x02\xa1\x01\x18\x81\x83\x02\xa0\x01\x16"
  "\x81\x83\x02\x9f\x01\x14\x81\x83\x02\x9e\x01\x12\x81\x83\x02\x9d"
  "\x01\x10\x81\x83\x02\x9c\x01\x0e\x81\x83\x02\x9b\x01\x0c\x81\x81"
  "\x02\x9a\x01\x0a\x81\x81\x02\x99\x01\x08\x81\x83\x02\x98\x01\x06"
  "\x81\x81\x02\x97\x01\x04\x82\x02\x21\x38\x10\x02\x0d\x09\x02\x09"
  "\x04\x03\x0e\x6c\x6f\x6f\x6b\x75\x70\x2d\x6d\x65\x74\x68\x6f\x64"
  "\x11\x03\x0b\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x21\x03\x08\x73"
  "\x62\x6c\x6f\x63\x6b\x3f\x03\x11\x70\x6e\x6f\x64\x65\x2d\x63\x6f"
  "\x6e\x73\x65\x71\x75\x65\x6e\x74\x03\x0b\x73\x6e\x6f\x64\x65\x2d"
  "\x6e\x65\x78\x74\x03\x11\x6e\x6f\x64\x65\x2d\x70\x72\x65\x76\x69"
  "\x6f\x75\x73\x3e\x31\x3f\x12\x02\x03\x0d\x6e\x6f\x64\x65\x2d\x6d"
  "\x61\x72\x6b\x65\x64\x3f\x13\x03\x12\x70\x6e\x6f\x64\x65\x2d\x61"
  "\x6c\x74\x65\x72\x6e\x61\x74\x69\x76\x65\x03\x0e\x04\x0f\x04\x0a"
  "\x03\x0c\x76\x65\x63\x74\x6f\x72\x2d\x63\x6f\x70\x79\x0e\xce\x01"
  "\x52\x81\x85\x02\xcd\x01\x50\x81\x85\x02\xcc\x01\x4e\x81\x87\x02"
  "\xcb\x01\x4c\x81\x89\x02\xca\x01\x4a\x81\x85\x02\xc9\x01\x48\x81"
  "\x85\x02\xc8\x01\x46\x81\x89\x02\xc7\x01\x44\x81\x89\x02\xc6\x01"
  "\x42\x81\x85\x02\xc5\x01\x40\x81\x85\x02\xc4\x01\x3e\x81\x85\x02"
  "\xc3\x01\x3c\x81\x89\x02\xc2\x01\x3a\x81\x85\x02\xc1\x01\x38\x81"
  "\x89\x02\xc0\x01\x36\x81\x85\x02\xbf\x01\x34\x81\x85\x02\xbe\x01"
  "\x32\x81\x89\x02\xbd\x01\x30\x81\x85\x02\xbc\x01\x2e\x81\x85\x02"
  "\xbb\x01\x2c\x81\x87\x02\xba\x01\x2a\x81\x83\x02\xb9\x01\x28\x81"
  "\x83\x02\xb8\x01\x26\x81\x85\x02\xb7\x01\x24\x81\x85\x02\xb6\x01"
  "\x22\x81\x85\x02\xb5\x01\x20\x81\x85\x02\xb4\x01\x1e\x81\x83\x02"
  "\xb3\x01\x1c\x81\x83\x02\xb2\x01\x1a\x81\x83\x02\xb1\x01\x18\x81"
  "\x83\x02\xb0\x01\x16\x81\x83\x02\xaf\x01\x14\x81\x83\x02\xae\x01"
  "\x12\x81\x85\x02\xad\x01\x10\x81\x85\x02\xac\x01\x0e\x81\x85\x02"
  "\xab\x01\x0c\x81\x85\x02\xaa\x01\x0a\x81\x87\x02\xa9\x01\x08\x81"
  "\x85\x02\xa8\x01\x06\x81\x83\x02\xa7\x01\x04\x83\x04\x51\x7a\x0a"
  "\x02\x03\x13\x02\xd0\x01\x06\x81\x83\x02\xcf\x01\x04\x83\x04\x05"
  "\x0c\x13\x02\x09\x02\x03\x12\x03\x0e\x04\x0f\x04\xd4\x01\x0a\x81"
  "\x87\x02\xd3\x01\x08\x81\x83\x02\xd2\x01\x06\x81\x83\x02\xd1\x01"
  "\x04\x83\x04\x09\x15\x12\x02\x08\x09\x02\xd6\x01\x06\x81\x83\x02"
  "\xd5\x01\x04\x83\x04\x05\x0b\x0f\x02\x09\x02\x0c\x76\x65\x63\x74"
  "\x6f\x72\x2d\x73\x65\x74\x21\x14\x09\x02\xd9\x01\x08\x81\x85\x02"
  "\xd8\x01\x06\x81\x85\x02\xd7\x01\x04\x84\x06\x07\x0e\x15\x02\x0a"
  "\x09\x72\x65\x67\x69\x73\x74\x65\x72\x16\x0d\x04\x17\x72\x74\x6c"
  "\x3a\x6d\x61\x70\x2d\x73\x75\x62\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x73\x03\x14\x6f\x70\x74\x69\x6d\x69\x7a\x65\x2d\x65\x78"
  "\x70\x72\x65\x73\x73\x69\x6f\x6e\x17\x03\xdf\x01\x0e\x81\x83\x02"
  "\xde\x01\x0c\x81\x83\x02\xdd\x01\x0a\x83\x04\xdc\x01\x08\x81\x89"
  "\x02\xdb\x01\x06\x81\x87\x02\xda\x01\x04\x85\x08\x0d\x17\x18\x02"
  "\x0b\x0c\x0d\x0b\x69\x64\x65\x6e\x74\x69\x74\x69\x65\x73\x19\x02"
  "\x04\x18\x6c\x69\x73\x74\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d"
  "\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x03\x15\x76\x61\x6c\x69\x64"
  "\x2d\x73\x75\x62\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f\x1a"
  "\x03\x1b\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2d\x73"
  "\x75\x62\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x1b\x03\x1b\x72"
  "\x74\x6c\x3a\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x76\x61"
  "\x6c\x75\x65\x2d\x63\x6c\x61\x73\x73\x03\x17\x06\xff\x01\x42\x81"
  "\x91\x02\xfe\x01\x40\x81\x91\x02\xfd\x01\x3e\x81\x91\x02\xfc\x01"
  "\x3c\x81\x87\x02\xfb\x01\x3a\x81\x95\x02\xfa\x01\x38\x81\x95\x02"
  "\xf9\x01\x36\x81\x95\x02\xf8\x01\x34\x81\x93\x02\xf7\x01\x32\x81"
  "\x93\x02\xf6\x01\x30\x81\x91\x02\xf5\x01\x2e\x81\x8f\x02\xf4\x01"
  "\x2c\x81\x8f\x02\xf3\x01\x2a\x81\x8f\x02\xf2\x01\x28\x81\x8f\x02"
  "\xf1\x01\x26\x81\x8d\x02\xf0\x01\x24\x81\x8d\x02\xef\x01\x22\x81"
  "\x8b\x02\xee\x01\x20\x81\x8f\x02\xed\x01\x1e\x81\x8f\x02\xec\x01"
  "\x1c\x81\x89\x02\xeb\x01\x1a\x81\x87\x02\xea\x01\x18\x81\x87\x02"
  "\xe9\x01\x16\x81\x85\x02\xe8\x01\x14\x81\x85\x02\xe7\x01\x12\x81"
  "\x85\x02\xe6\x01\x10\x81\x85\x02\xe5\x01\x0e\x81\x85\x02\xe4\x01"
  "\x0c\x81\x85\x02\xe3\x01\x0a\x81\x83\x02\xe2\x01\x08\x81\x87\x02"
  "\xe1\x01\x06\x81\x85\x02\xe0\x01\x04\x83\x04\x41\x55\x1c\x02\x0c"
  "\x16\x0d\x03\x20\x72\x74\x6c\x3a\x70\x73\x65\x75\x64\x6f\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x3f\x16\x02\x81\x02\x06\x81\x83\x02\x80\x02\x04\x83\x04"
  "\x05\x0e\x0d\x02\x0d\x09\x02\x03\x16\x04\x10\x67\x65\x6e\x65\x72"
  "\x61\x6c\x2d\x63\x61\x72\x2d\x63\x64\x72\x03\x87\x02\x0e\x81\x83"
  "\x02\x86\x02\x0c\x81\x85\x02\x85\x02\x0a\x81\x85\x02\x84\x02\x08"
  "\x81\x87\x02\x83\x02\x06\x81\x85\x02\x82\x02\x04\x83\x04\x0d\x19"
  "\x1d\x02\x0e\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x08\x6d\x65\x74"
  "\x68\x6f\x64\x73\x1e\x02\x1e\x02\x04\x05\x61\x73\x73\x71\x1f\x02"
  "\x8d\x02\x0e\x81\x85\x02\x8c\x02\x0c\x81\x83\x02\x8b\x02\x0a\x81"
  "\x83\x02\x8a\x02\x08\x81\x87\x02\x89\x02\x06\x81\x89\x02\x88\x02"
  "\x04\x84\x06\x0d\x18\x20\x02\x0f\x0c\x0f\x4d\x69\x73\x73\x69\x6e"
  "\x67\x20\x6d\x65\x74\x68\x6f\x64\x07\x61\x73\x73\x69\x67\x6e\x0c"
  "\x77\x61\x6c\x6b\x2f\x61\x73\x73\x69\x67\x6e\x0c\x1e\x03\x04\x1f"
  "\x04\x06\x65\x72\x72\x6f\x72\x03\x92\x02\x0c\x81\x83\x02\x91\x02"
  "\x0a\x81\x85\x02\x90\x02\x08\x81\x85\x02\x8f\x02\x06\x81\x83\x02"
  "\x8e\x02\x04\x83\x04\x0b\x19\x1f\x02\x10\x14\x0d\x02\x1b\x72\x74"
  "\x6c\x3a\x73\x65\x74\x2d\x61\x73\x73\x69\x67\x6e\x2d\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x21\x16\x72\x74\x6c\x3a\x61\x73\x73"
  "\x69\x67\x6e\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x09\x04"
  "\x05\x13\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x75\x70\x64"
  "\x61\x74\x65\x21\x21\x04\x03\x16\x04\x9c\x02\x16\x81\x85\x02\x9b"
  "\x02\x14\x81\x89\x02\x9a\x02\x12\x81\x87\x02\x99\x02\x10\x81\x85"
  "\x02\x98\x02\x0e\x81\x85\x02\x97\x02\x0c\x81\x83\x02\x96\x02\x0a"
  "\x81\x83\x02\x95\x02\x08\x81\x89\x02\x94\x02\x06\x81\x87\x02\x93"
  "\x02\x04\x83\x04\x15\x27\x16\x02\x11\x02\x14\x09\x02\x03\x19\x66"
  "\x6f\x72\x2d\x65\x61\x63\x68\x2d\x70\x73\x65\x75\x64\x6f\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x02\xa0\x02\x0a\x81\x83\x02\x9f\x02"
  "\x08\x81\x83\x02\x9e\x02\x06\x83\x04\x9d\x02\x04\x83\x04\x09\x13"
  "\x14\x02\x12\x02\x04\x16\x64\x65\x66\x69\x6e\x65\x2d\x67\x65\x6e"
  "\x65\x72\x61\x6c\x2d\x6d\x65\x74\x68\x6f\x64\x02\xa2\x02\x06\x83"
  "\x04\xa1\x02\x04\x83\x04\x05\x0c\x22\x02\x13\x04\x05\x21\x03\xa4"
  "\x02\x06\x81\x85\x02\xa3\x02\x04\x85\x08\x05\x0d\x23\x02\x14\x04"
  "\x05\x21\x03\xa7\x02\x08\x81\x85\x02\xa6\x02\x06\x81\x85\x02\xa5"
  "\x02\x04\x87\x0c\x07\x0f\x14\x24\x24\x16\x69\x6e\x74\x65\x72\x70"
  "\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x73\x65\x74\x21\x18"
  "\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c"
  "\x3a\x64\x65\x66\x69\x6e\x65\x22\x69\x6e\x74\x65\x72\x70\x72\x65"
  "\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61\x63\x68\x65\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x1f\x69\x6e\x76\x6f\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x70\x72\x65\x66\x69\x78\x3a\x64\x79\x6e\x61"
  "\x6d\x69\x63\x2d\x6c\x69\x6e\x6b\x13\x66\x6c\x6f\x6e\x75\x6d\x2d"
  "\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73\x13\x66\x69\x78\x6e"
  "\x75\x6d\x2d\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73\x0c\x70"
  "\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73\x08\x65\x71\x2d\x74\x65"
  "\x73\x74\x16\x64\x65\x66\x69\x6e\x65\x2d\x74\x77\x6f\x2d\x61\x72"
  "\x67\x2d\x6d\x65\x74\x68\x6f\x64\x24\x04\x1a\x69\x6e\x74\x65\x72"
  "\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x75\x6e\x62\x6f"
  "\x75\x6e\x64\x3f\x1d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72"
  "\x2d\x63\x61\x6c\x6c\x3a\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64"
  "\x3f\x18\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61"
  "\x6c\x6c\x3a\x6c\x6f\x6f\x6b\x75\x70\x23\x69\x6e\x74\x65\x72\x70"
  "\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61\x63\x68\x65"
  "\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x21\x69\x6e\x74"
  "\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61"
  "\x63\x68\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x18\x69\x6e"
  "\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x61"
  "\x63\x63\x65\x73\x73\x20\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x70\x72\x65\x66\x69\x78\x3a\x6d\x6f\x76\x65\x2d\x66\x72\x61"
  "\x6d\x65\x2d\x75\x70\x12\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e"
  "\x3a\x6c\x6f\x6f\x6b\x75\x70\x1b\x69\x6e\x76\x6f\x63\x61\x74\x69"
  "\x6f\x6e\x3a\x63\x61\x63\x68\x65\x2d\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x0b\x70\x72\x65\x64\x2d\x31\x2d\x61\x72\x67\x0a\x74\x79"
  "\x70\x65\x2d\x74\x65\x73\x74\x12\x66\x6c\x6f\x6e\x75\x6d\x2d\x70"
  "\x72\x65\x64\x2d\x31\x2d\x61\x72\x67\x12\x66\x69\x78\x6e\x75\x6d"
  "\x2d\x70\x72\x65\x64\x2d\x31\x2d\x61\x72\x67\x16\x64\x65\x66\x69"
  "\x6e\x65\x2d\x6f\x6e\x65\x2d\x61\x72\x67\x2d\x6d\x65\x74\x68\x6f"
  "\x64\x23\x04\x22\x04\x0f\x63\x6c\x6f\x73\x75\x72\x65\x2d\x68\x65"
  "\x61\x64\x65\x72\x13\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x2d\x65\x6e\x74\x72\x79\x14\x63\x6f\x6e\x74\x69\x6e\x75\x61"
  "\x74\x69\x6f\x6e\x2d\x68\x65\x61\x64\x65\x72\x14\x69\x63\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x68\x65\x61\x64\x65\x72\x11"
  "\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x61\x70\x70\x6c\x79"
  "\x19\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x63\x6f\x6d\x70"
  "\x75\x74\x65\x64\x2d\x6a\x75\x6d\x70\x1a\x69\x6e\x76\x6f\x63\x61"
  "\x74\x69\x6f\x6e\x3a\x63\x6f\x6d\x70\x75\x74\x65\x64\x2d\x6c\x65"
  "\x78\x70\x72\x10\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x6a"
  "\x75\x6d\x70\x11\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x6c"
  "\x65\x78\x70\x72\x15\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a"
  "\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x14\x69\x6e\x76\x6f\x63\x61"
  "\x74\x69\x6f\x6e\x3a\x75\x75\x6f\x2d\x6c\x69\x6e\x6b\x17\x69\x6e"
  "\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x67\x6c\x6f\x62\x61\x6c\x2d"
  "\x6c\x69\x6e\x6b\x16\x6f\x70\x65\x6e\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x68\x65\x61\x64\x65\x72\x0e\x6f\x76\x65\x72\x66"
  "\x6c\x6f\x77\x2d\x74\x65\x73\x74\x0b\x70\x6f\x70\x2d\x72\x65\x74"
  "\x75\x72\x6e\x11\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x68\x65"
  "\x61\x64\x65\x72\x10\x1d\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e"
  "\x3a\x73\x70\x65\x63\x69\x61\x6c\x2d\x70\x72\x69\x6d\x69\x74\x69"
  "\x76\x65\x14\x04\x0c\x1e\x11\x1b\x1a\x16\x04\x1f\x04\x20\x04\x1d"
  "\x04\x0d\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e"
  "\x6d\x65\x6e\x74\x19\x0f\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x66\x69"
  "\x78\x6e\x75\x6d\x0f\x66\x69\x78\x6e\x75\x6d\x2d\x3e\x6f\x62\x6a"
  "\x65\x63\x74\x18\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x75\x6e\x73\x69"
  "\x67\x6e\x65\x64\x2d\x66\x69\x78\x6e\x75\x6d\x10\x61\x64\x64\x72"
  "\x65\x73\x73\x2d\x3e\x66\x69\x78\x6e\x75\x6d\x10\x66\x69\x78\x6e"
  "\x75\x6d\x2d\x3e\x61\x64\x64\x72\x65\x73\x73\x0e\x66\x6c\x6f\x61"
  "\x74\x2d\x3e\x6f\x62\x6a\x65\x63\x74\x0e\x6f\x62\x6a\x65\x63\x74"
  "\x2d\x3e\x66\x6c\x6f\x61\x74\x10\x6f\x62\x6a\x65\x63\x74\x2d\x3e"
  "\x61\x64\x64\x72\x65\x73\x73\x0e\x6f\x62\x6a\x65\x63\x74\x2d\x3e"
  "\x64\x61\x74\x75\x6d\x0d\x63\x6f\x6e\x73\x2d\x70\x6f\x69\x6e\x74"
  "\x65\x72\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x74\x79\x70\x65\x11"
  "\x63\x6f\x6e\x73\x2d\x6e\x6f\x6e\x2d\x70\x6f\x69\x6e\x74\x65\x72"
  "\x17\x21\x14\x73\x65\x74\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d"
  "\x76\x61\x6c\x75\x65\x21\x0f\x72\x65\x67\x69\x73\x74\x65\x72\x2d"
  "\x76\x61\x6c\x75\x65\x0a\x77\x61\x6c\x6b\x2d\x6e\x65\x78\x74\x0b"
  "\x77\x61\x6c\x6b\x2d\x6e\x65\x78\x74\x3f\x0e\x22\x69\x6e\x76\x65"
  "\x72\x74\x69\x62\x6c\x65\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x2d\x65\x6c\x69\x6d\x69\x6e\x61\x74\x69\x6f\x6e\x09\x0e\x1c"
  "\x04\x18\x04\x15\x04\x0f\x04\x12\x04\x13\x04\x0a\x04\x10\x04\x0b"
  "\x04\x04\x0e\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74"
  "\x69\x70\x6c\x65\x02\x1a\x72\x74\x6c\x3a\x63\x6f\x6e\x73\x2d\x6e"
  "\x6f\x6e\x2d\x70\x6f\x69\x6e\x74\x65\x72\x2d\x74\x79\x70\x65\x1c"
  "\x72\x74\x6c\x3a\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x74\x79\x70\x65"
  "\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x17\x76\x61\x6c\x75"
  "\x65\x2d\x63\x6c\x61\x73\x73\x3d\x69\x6d\x6d\x65\x64\x69\x61\x74"
  "\x65\x3f\x16\x72\x74\x6c\x3a\x63\x6f\x6e\x73\x2d\x70\x6f\x69\x6e"
  "\x74\x65\x72\x2d\x74\x79\x70\x65\x1b\x72\x74\x6c\x3a\x63\x6f\x6e"
  "\x73\x2d\x6e\x6f\x6e\x2d\x70\x6f\x69\x6e\x74\x65\x72\x2d\x64\x61"
  "\x74\x75\x6d\x1d\x72\x74\x6c\x3a\x6f\x62\x6a\x65\x63\x74\x2d\x3e"
  "\x64\x61\x74\x75\x6d\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x17\x72\x74\x6c\x3a\x63\x6f\x6e\x73\x2d\x70\x6f\x69\x6e\x74\x65"
  "\x72\x2d\x64\x61\x74\x75\x6d\x1f\x72\x74\x6c\x3a\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x3e\x61\x64\x64\x72\x65\x73\x73\x2d\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x15\x76\x61\x6c\x75\x65\x2d\x63\x6c\x61"
  "\x73\x73\x3d\x61\x64\x64\x72\x65\x73\x73\x3f\x1d\x72\x74\x6c\x3a"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x66\x6c\x6f\x61\x74\x2d\x65\x78"
  "\x70\x72\x65\x73\x73\x69\x6f\x6e\x1d\x72\x74\x6c\x3a\x66\x6c\x6f"
  "\x61\x74\x2d\x3e\x6f\x62\x6a\x65\x63\x74\x2d\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x13\x76\x61\x6c\x75\x65\x2d\x63\x6c\x61\x73"
  "\x73\x3d\x76\x61\x6c\x75\x65\x3f\x1f\x72\x74\x6c\x3a\x66\x69\x78"
  "\x6e\x75\x6d\x2d\x3e\x61\x64\x64\x72\x65\x73\x73\x2d\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x1f\x72\x74\x6c\x3a\x61\x64\x64\x72"
  "\x65\x73\x73\x2d\x3e\x66\x69\x78\x6e\x75\x6d\x2d\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x27\x72\x74\x6c\x3a\x6f\x62\x6a\x65\x63"
  "\x74\x2d\x3e\x75\x6e\x73\x69\x67\x6e\x65\x64\x2d\x66\x69\x78\x6e"
  "\x75\x6d\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x1e\x72\x74"
  "\x6c\x3a\x66\x69\x78\x6e\x75\x6d\x2d\x3e\x6f\x62\x6a\x65\x63\x74"
  "\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x1e\x72\x74\x6c\x3a"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x66\x69\x78\x6e\x75\x6d\x2d\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x23\x72\x74\x6c\x3a\x73\x65"
  "\x74\x2d\x66\x69\x78\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x31\x2d"
  "\x61\x72\x67\x2d\x6f\x70\x65\x72\x61\x6e\x64\x21\x1e\x72\x74\x6c"
  "\x3a\x66\x69\x78\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x31\x2d\x61"
  "\x72\x67\x2d\x6f\x70\x65\x72\x61\x6e\x64\x23\x72\x74\x6c\x3a\x73"
  "\x65\x74\x2d\x66\x6c\x6f\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x31"
  "\x2d\x61\x72\x67\x2d\x6f\x70\x65\x72\x61\x6e\x64\x21\x1e\x72\x74"
  "\x6c\x3a\x66\x6c\x6f\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x31\x2d"
  "\x61\x72\x67\x2d\x6f\x70\x65\x72\x61\x6e\x64\x1e\x72\x74\x6c\x3a"
  "\x73\x65\x74\x2d\x74\x79\x70\x65\x2d\x74\x65\x73\x74\x2d\x65\x78"
  "\x70\x72\x65\x73\x73\x69\x6f\x6e\x21\x19\x72\x74\x6c\x3a\x74\x79"
  "\x70\x65\x2d\x74\x65\x73\x74\x2d\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x1c\x72\x74\x6c\x3a\x73\x65\x74\x2d\x70\x72\x65\x64\x2d"
  "\x31\x2d\x61\x72\x67\x2d\x6f\x70\x65\x72\x61\x6e\x64\x21\x17\x72"
  "\x74\x6c\x3a\x70\x72\x65\x64\x2d\x31\x2d\x61\x72\x67\x2d\x6f\x70"
  "\x65\x72\x61\x6e\x64\x29\x72\x74\x6c\x3a\x73\x65\x74\x2d\x69\x6e"
  "\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x63\x61\x63\x68\x65\x2d\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x6e\x61\x6d\x65\x21\x24\x72"
  "\x74\x6c\x3a\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x63\x61"
  "\x63\x68\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x6e\x61"
  "\x6d\x65\x27\x72\x74\x6c\x3a\x73\x65\x74\x2d\x69\x6e\x76\x6f\x63"
  "\x61\x74\x69\x6f\x6e\x3a\x6c\x6f\x6f\x6b\x75\x70\x2d\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x22\x72\x74\x6c\x3a\x69\x6e"
  "\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x6c\x6f\x6f\x6b\x75\x70\x2d"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x32\x72\x74\x6c\x3a"
  "\x73\x65\x74\x2d\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x70"
  "\x72\x65\x66\x69\x78\x3a\x6d\x6f\x76\x65\x2d\x66\x72\x61\x6d\x65"
  "\x2d\x75\x70\x2d\x6c\x6f\x63\x61\x74\x69\x76\x65\x21\x2d\x72\x74"
  "\x6c\x3a\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x70\x72\x65"
  "\x66\x69\x78\x3a\x6d\x6f\x76\x65\x2d\x66\x72\x61\x6d\x65\x2d\x75"
  "\x70\x2d\x6c\x6f\x63\x61\x74\x69\x76\x65\x2d\x72\x74\x6c\x3a\x73"
  "\x65\x74\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63"
  "\x61\x6c\x6c\x3a\x61\x63\x63\x65\x73\x73\x2d\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x21\x28\x72\x74\x6c\x3a\x69\x6e\x74\x65"
  "\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x61\x63\x63"
  "\x65\x73\x73\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f"
  "\x72\x74\x6c\x3a\x73\x65\x74\x2d\x69\x6e\x74\x65\x72\x70\x72\x65"
  "\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61\x63\x68\x65\x2d\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x6e\x61\x6d\x65\x21\x2a\x72"
  "\x74\x6c\x3a\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63"
  "\x61\x6c\x6c\x3a\x63\x61\x63\x68\x65\x2d\x72\x65\x66\x65\x72\x65"
  "\x6e\x63\x65\x2d\x6e\x61\x6d\x65\x31\x72\x74\x6c\x3a\x73\x65\x74"
  "\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c"
  "\x6c\x3a\x63\x61\x63\x68\x65\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e"
  "\x65\x64\x3f\x2d\x6e\x61\x6d\x65\x21\x2c\x72\x74\x6c\x3a\x69\x6e"
  "\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63"
  "\x61\x63\x68\x65\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f"
  "\x2d\x6e\x61\x6d\x65\x2d\x72\x74\x6c\x3a\x73\x65\x74\x2d\x69\x6e"
  "\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x6c"
  "\x6f\x6f\x6b\x75\x70\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x21\x28\x72\x74\x6c\x3a\x69\x6e\x74\x65\x72\x70\x72\x65\x74"
  "\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x6c\x6f\x6f\x6b\x75\x70\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x32\x72\x74\x6c\x3a\x73"
  "\x65\x74\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63"
  "\x61\x6c\x6c\x3a\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x2d"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x2d\x72\x74\x6c"
  "\x3a\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c"
  "\x6c\x3a\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x2d\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x72\x74\x6c\x3a\x73\x65"
  "\x74\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61"
  "\x6c\x6c\x3a\x75\x6e\x62\x6f\x75\x6e\x64\x3f\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x2a\x72\x74\x6c\x3a\x69\x6e\x74"
  "\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x75\x6e"
  "\x62\x6f\x75\x6e\x64\x3f\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x1e\x72\x74\x6c\x3a\x73\x65\x74\x2d\x65\x71\x2d\x74\x65"
  "\x73\x74\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x32\x21"
  "\x19\x72\x74\x6c\x3a\x65\x71\x2d\x74\x65\x73\x74\x2d\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x2d\x32\x1e\x72\x74\x6c\x3a\x73\x65"
  "\x74\x2d\x65\x71\x2d\x74\x65\x73\x74\x2d\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x2d\x31\x21\x19\x72\x74\x6c\x3a\x65\x71\x2d\x74"
  "\x65\x73\x74\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x31"
  "\x1f\x72\x74\x6c\x3a\x73\x65\x74\x2d\x70\x72\x65\x64\x2d\x32\x2d"
  "\x61\x72\x67\x73\x2d\x6f\x70\x65\x72\x61\x6e\x64\x2d\x32\x21\x1a"
  "\x72\x74\x6c\x3a\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73\x2d"
  "\x6f\x70\x65\x72\x61\x6e\x64\x2d\x32\x1f\x72\x74\x6c\x3a\x73\x65"
  "\x74\x2d\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73\x2d\x6f\x70"
  "\x65\x72\x61\x6e\x64\x2d\x31\x21\x1a\x72\x74\x6c\x3a\x70\x72\x65"
  "\x64\x2d\x32\x2d\x61\x72\x67\x73\x2d\x6f\x70\x65\x72\x61\x6e\x64"
  "\x2d\x31\x26\x72\x74\x6c\x3a\x73\x65\x74\x2d\x66\x69\x78\x6e\x75"
  "\x6d\x2d\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73\x2d\x6f\x70"
  "\x65\x72\x61\x6e\x64\x2d\x32\x21\x21\x72\x74\x6c\x3a\x66\x69\x78"
  "\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73\x2d"
  "\x6f\x70\x65\x72\x61\x6e\x64\x2d\x32\x26\x72\x74\x6c\x3a\x73\x65"
  "\x74\x2d\x66\x69\x78\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x32\x2d"
  "\x61\x72\x67\x73\x2d\x6f\x70\x65\x72\x61\x6e\x64\x2d\x31\x21\x21"
  "\x72\x74\x6c\x3a\x66\x69\x78\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d"
  "\x32\x2d\x61\x72\x67\x73\x2d\x6f\x70\x65\x72\x61\x6e\x64\x2d\x31"
  "\x26\x72\x74\x6c\x3a\x73\x65\x74\x2d\x66\x6c\x6f\x6e\x75\x6d\x2d"
  "\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73\x2d\x6f\x70\x65\x72"
  "\x61\x6e\x64\x2d\x32\x21\x21\x72\x74\x6c\x3a\x66\x6c\x6f\x6e\x75"
  "\x6d\x2d\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73\x2d\x6f\x70"
  "\x65\x72\x61\x6e\x64\x2d\x32\x26\x72\x74\x6c\x3a\x73\x65\x74\x2d"
  "\x66\x6c\x6f\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x32\x2d\x61\x72"
  "\x67\x73\x2d\x6f\x70\x65\x72\x61\x6e\x64\x2d\x31\x21\x21\x72\x74"
  "\x6c\x3a\x66\x6c\x6f\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x32\x2d"
  "\x61\x72\x67\x73\x2d\x6f\x70\x65\x72\x61\x6e\x64\x2d\x31\x31\x72"
  "\x74\x6c\x3a\x73\x65\x74\x2d\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x70\x72\x65\x66\x69\x78\x3a\x64\x79\x6e\x61\x6d\x69\x63"
  "\x2d\x6c\x69\x6e\x6b\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x21\x2c"
  "\x72\x74\x6c\x3a\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x70"
  "\x72\x65\x66\x69\x78\x3a\x64\x79\x6e\x61\x6d\x69\x63\x2d\x6c\x69"
  "\x6e\x6b\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x31\x72\x74\x6c\x3a"
  "\x73\x65\x74\x2d\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x70"
  "\x72\x65\x66\x69\x78\x3a\x64\x79\x6e\x61\x6d\x69\x63\x2d\x6c\x69"
  "\x6e\x6b\x2d\x6c\x6f\x63\x61\x74\x69\x76\x65\x21\x2c\x72\x74\x6c"
  "\x3a\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x70\x72\x65\x66"
  "\x69\x78\x3a\x64\x79\x6e\x61\x6d\x69\x63\x2d\x6c\x69\x6e\x6b\x2d"
  "\x6c\x6f\x63\x61\x74\x69\x76\x65\x31\x72\x74\x6c\x3a\x73\x65\x74"
  "\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c"
  "\x6c\x3a\x63\x61\x63\x68\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65"
  "\x6e\x74\x2d\x76\x61\x6c\x75\x65\x21\x2c\x72\x74\x6c\x3a\x69\x6e"
  "\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63"
  "\x61\x63\x68\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d"
  "\x76\x61\x6c\x75\x65\x30\x72\x74\x6c\x3a\x73\x65\x74\x2d\x69\x6e"
  "\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63"
  "\x61\x63\x68\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d"
  "\x6e\x61\x6d\x65\x21\x2b\x72\x74\x6c\x3a\x69\x6e\x74\x65\x72\x70"
  "\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61\x63\x68\x65"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x6e\x61\x6d\x65"
  "\x27\x72\x74\x6c\x3a\x73\x65\x74\x2d\x69\x6e\x74\x65\x72\x70\x72"
  "\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x64\x65\x66\x69\x6e\x65"
  "\x2d\x76\x61\x6c\x75\x65\x21\x22\x72\x74\x6c\x3a\x69\x6e\x74\x65"
  "\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x64\x65\x66"
  "\x69\x6e\x65\x2d\x76\x61\x6c\x75\x65\x2d\x72\x74\x6c\x3a\x73\x65"
  "\x74\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61"
  "\x6c\x6c\x3a\x64\x65\x66\x69\x6e\x65\x2d\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x21\x28\x72\x74\x6c\x3a\x69\x6e\x74\x65\x72"
  "\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x64\x65\x66\x69"
  "\x6e\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x20\x72"
  "\x74\x6c\x3a\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63"
  "\x61\x6c\x6c\x3a\x73\x65\x74\x21\x2d\x76\x61\x6c\x75\x65\x2b\x72"
  "\x74\x6c\x3a\x73\x65\x74\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74"
  "\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x73\x65\x74\x21\x2d\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x26\x72\x74\x6c\x3a\x69\x6e"
  "\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x73"
  "\x65\x74\x21\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x25"
  "\x72\x74\x6c\x3a\x73\x65\x74\x2d\x69\x6e\x74\x65\x72\x70\x72\x65"
  "\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x73\x65\x74\x21\x2d\x76\x61"
  "\x6c\x75\x65\x21\x4c\x04\x04\x05\x07\x24\x05\x7c\xfa\x01\x80\x80"
  "\x04\x7b\xf8\x01\x81\x81\x02\x7a\xf6\x01\x81\x81\x02\x79\xf4\x01"
  "\x81\x8b\x02\x78\xf2\x01\x81\x87\x02\x77\xf0\x01\x81\x85\x02\x76"
  "\xee\x01\x81\x83\x02\x75\xec\x01\x81\x83\x02\x74\xea\x01\x81\x8b"
  "\x02\x73\xe8\x01\x81\x89\x02\x72\xe6\x01\x81\x87\x02\x71\xe4\x01"
  "\x81\x85\x02\x70\xe2\x01\x81\x83\x02\x6f\xe0\x01\x81\x8b\x02\x6e"
  "\xde\x01\x81\x89\x02\x6d\xdc\x01\x81\x87\x02\x6c\xda\x01\x81\x85"
  "\x02\x6b\xd8\x01\x81\x83\x02\x6a\xd6\x01\x81\x8b\x02\x69\xd4\x01"
  "\x81\x89\x02\x68\xd2\x01\x81\x87\x02\x67\xd0\x01\x81\x85\x02\x66"
  "\xce\x01\x81\x83\x02\x65\xcc\x01\x81\x8b\x02\x64\xca\x01\x81\x89"
  "\x02\x63\xc8\x01\x81\x87\x02\x62\xc6\x01\x81\x85\x02\x61\xc4\x01"
  "\x81\x83\x02\x60\xc2\x01\x81\x8b\x02\x5f\xc0\x01\x81\x89\x02\x5e"
  "\xbe\x01\x81\x87\x02\x5d\xbc\x01\x81\x85\x02\x5c\xba\x01\x81\x83"
  "\x02\x5b\xb8\x01\x81\x8b\x02\x5a\xb6\x01\x81\x89\x02\x59\xb4\x01"
  "\x81\x87\x02\x58\xb2\x01\x81\x85\x02\x57\xb0\x01\x81\x83\x02\x56"
  "\xae\x01\x81\x8b\x02\x55\xac\x01\x81\x89\x02\x54\xaa\x01\x81\x87"
  "\x02\x53\xa8\x01\x81\x85\x02\x52\xa6\x01\x81\x83\x02\x51\xa4\x01"
  "\x81\x83\x02\x50\xa2\x01\x81\x87\x02\x4f\xa0\x01\x81\x85\x02\x4e"
  "\x9e\x01\x81\x83\x02\x4d\x9c\x01\x81\x87\x02\x4c\x9a\x01\x81\x85"
  "\x02\x4b\x98\x01\x81\x83\x02\x4a\x96\x01\x81\x87\x02\x49\x94\x01"
  "\x81\x85\x02\x48\x92\x01\x81\x83\x02\x47\x90\x01\x81\x87\x02\x46"
  "\x8e\x01\x81\x85\x02\x45\x8c\x01\x81\x83\x02\x44\x8a\x01\x81\x87"
  "\x02\x43\x88\x01\x81\x85\x02\x42\x86\x01\x81\x83\x02\x41\x84\x01"
  "\x81\x87\x02\x40\x82\x01\x81\x85\x02\x3f\x80\x01\x81\x83\x02\x3e"
  "\x7e\x81\x87\x02\x3d\x7c\x81\x85\x02\x3c\x7a\x81\x83\x02\x3b\x78"
  "\x81\x87\x02\x3a\x76\x81\x85\x02\x39\x74\x81\x83\x02\x38\x72\x81"
  "\x87\x02\x37\x70\x81\x85\x02\x36\x6e\x81\x83\x02\x35\x6c\x81\x87"
  "\x02\x34\x6a\x81\x85\x02\x33\x68\x81\x83\x02\x32\x66\x81\x87\x02"
  "\x31\x64\x81\x85\x02\x30\x62\x81\x83\x02\x2f\x60\x81\x87\x02\x2e"
  "\x5e\x81\x85\x02\x2d\x5c\x81\x83\x02\x2c\x5a\x81\x87\x02\x2b\x58"
  "\x81\x85\x02\x2a\x56\x81\x83\x02\x29\x54\x81\x83\x02\x28\x52\x81"
  "\x83\x02\x27\x50\x81\x83\x02\x26\x4e\x81\x83\x02\x25\x4c\x81\x89"
  "\x02\x24\x4a\x81\x89\x02\x23\x48\x81\x87\x02\x22\x46\x81\x89\x02"
  "\x21\x44\x81\x89\x02\x20\x42\x81\x87\x02\x1f\x40\x81\x89\x02\x1e"
  "\x3e\x81\x89\x02\x1d\x3c\x81\x87\x02\x1c\x3a\x81\x89\x02\x1b\x38"
  "\x81\x89\x02\x1a\x36\x81\x87\x02\x19\x34\x81\x89\x02\x18\x32\x81"
  "\x89\x02\x17\x30\x81\x87\x02\x16\x2e\x81\x89\x02\x15\x2c\x81\x89"
  "\x02\x14\x2a\x81\x87\x02\x13\x28\x81\x89\x02\x12\x26\x81\x89\x02"
  "\x11\x24\x81\x87\x02\x10\x22\x81\x89\x02\x0f\x20\x81\x89\x02\x0e"
  "\x1e\x81\x87\x02\x0d\x1c\x81\x89\x02\x0c\x1a\x81\x89\x02\x0b\x18"
  "\x81\x87\x02\x0a\x16\x81\x89\x02\x09\x14\x81\x89\x02\x08\x12\x81"
  "\x87\x02\x07\x10\x81\x89\x02\x06\x0e\x81\x89\x02\x05\x0c\x81\x87"
  "\x02\x04\x0a\x81\x87\x02\x03\x08\x81\x87\x02\x02\x06\x81\x85\x02"
  "\x01\x04\x81\x83\x02\xf9\x01\x86\x03";

SCHEME_OBJECT *
rinvex_so_data_3406cdabbb07ffc8 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rinvex_so_data_3406cdabbb07ffc8 [0]))), (sizeof (prog_rinvex_so_data_3406cdabbb07ffc8)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_132]));
}

DECLARE_COMPILED_DATA_NS ("rinvex.so", rinvex_so_data_3406cdabbb07ffc8)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rinvex.so", "1e16dd22ea0558c2")
