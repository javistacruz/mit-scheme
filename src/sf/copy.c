/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:05-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_11 11
#define TAG_1_12 4
#define LABEL_1_9 13
#define TAG_1_10 5
#define LABEL_1_16 15
#define LABEL_1_17 17
#define LABEL_1_18 19
#define LABEL_1_19 21
#define LABEL_1_20 23
#define LABEL_1_21 25
#define LABEL_1_22 27
#define LABEL_1_23 29
#define LABEL_1_24 31
#define LABEL_1_14 33
#define ENVIRONMENT_LABEL_1_3 56
#define DEBUGGING_LABEL_1_2 55
#define OBJECT_1_1 54
#define OBJECT_1_0 53
#define EXECUTE_CACHE_1_25 35
#define EXECUTE_CACHE_1_15 37
#define EXECUTE_CACHE_1_13 39
#define EXECUTE_CACHE_1_6 41
#define FREE_REFERENCE_1_4 44
#define FREE_REFERENCE_1_3 45
#define FREE_REFERENCE_1_2 46
#define FREE_REFERENCE_1_1 47
#define FREE_REFERENCE_1_0 48
#define FREE_ASSIGNMENT_1_2 50
#define FREE_ASSIGNMENT_1_1 51
#define FREE_ASSIGNMENT_1_0 52
#define FREE_REFERENCES_LABEL_1_0 34
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_1_4);
      goto copy_expression_intern_23;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto lambda_39;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto swapB_38;

    case 6:
      current_block = (Rpc - LABEL_1_16);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_1_17);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_1_18);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_1_19);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_1_20);
      goto label_31;

    case 11:
      current_block = (Rpc - LABEL_1_21);
      goto label_32;

    case 12:
      current_block = (Rpc - LABEL_1_22);
      goto label_33;

    case 13:
      current_block = (Rpc - LABEL_1_23);
      goto label_34;

    case 14:
      current_block = (Rpc - LABEL_1_24);
      goto label_35;

    case 15:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_expression_intern_37)
DEFLABEL (copy_expression_intern_23)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_43;
  Wrd5 = Wrd9;

DEFLABEL (label_42)
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_41;
  Wrd14 = Wrd18;

DEFLABEL (label_40)
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-1]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd24.pObj) = (& (Rhp [-1]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd46.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_9])));
  Rhp += 3;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  Wrd44 = Wrd46;
  (Wrd45.Obj) = (Rsp [3]);
  ((Wrd44.pObj) [2]) = (Wrd45.Obj);
  ((Wrd44.pObj) [3]) = (Wrd22.Obj);
  ((Wrd44.pObj) [4]) = (Wrd25.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_11])));
  Rhp += 2;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd32 = Wrd29;
  (Wrd33.Obj) = (Rsp [5]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  ((Wrd32.pObj) [3]) = (Wrd26.Obj);
  (Rsp [4]) = (Wrd28.Obj);
  (Rsp [5]) = (Wrd47.Obj);
  (Rsp [3]) = (Wrd47.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd15.pObj));

DEFLABEL (label_26)
  (Wrd14.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd6.pObj));

DEFLABEL (label_25)
  (Wrd5.Obj) = Rvl;
  goto label_42;

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_1_11);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (swapB_38)
  CLOSURE_HEADER (LABEL_1_9);

DEFLABEL (swapB_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_70;

DEFLABEL (label_69)
  Wrd5 = Wrd9;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_67;

DEFLABEL (label_66)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_65)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_64;

DEFLABEL (label_63)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_62)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_61;

DEFLABEL (label_60)
  Wrd57 = Wrd61;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_58;

DEFLABEL (label_57)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_56)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_55;

DEFLABEL (label_54)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_53)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_52;

DEFLABEL (label_51)
  Wrd109 = Wrd113;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_49;

DEFLABEL (label_48)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_47)
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
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_44)
  Rvl = (current_block [OBJECT_1_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_46)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_45;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_24])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_35)
  goto label_44;

DEFLABEL (label_49)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_48;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_23])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_34)
  goto label_47;

DEFLABEL (label_52)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_51;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_22])), (Wrd110.pObj));

DEFLABEL (label_33)
  (Wrd109.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_55)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_54;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_21])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_32)
  goto label_53;

DEFLABEL (label_58)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_57;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_20])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_31)
  goto label_56;

DEFLABEL (label_61)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_60;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_19])), (Wrd58.pObj));

DEFLABEL (label_30)
  (Wrd57.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_64)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_63;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_18])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_29)
  goto label_62;

DEFLABEL (label_67)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_66;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_17])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_28)
  goto label_65;

DEFLABEL (label_70)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_69;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_16])), (Wrd6.pObj));

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_68;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define LABEL_2_8 9
#define LABEL_2_11 11
#define TAG_2_12 4
#define LABEL_2_9 13
#define TAG_2_10 5
#define LABEL_2_16 15
#define LABEL_2_17 17
#define LABEL_2_18 19
#define LABEL_2_19 21
#define LABEL_2_20 23
#define LABEL_2_21 25
#define LABEL_2_22 27
#define LABEL_2_23 29
#define LABEL_2_24 31
#define LABEL_2_14 33
#define ENVIRONMENT_LABEL_2_3 56
#define DEBUGGING_LABEL_2_2 55
#define OBJECT_2_1 54
#define OBJECT_2_0 53
#define EXECUTE_CACHE_2_25 35
#define EXECUTE_CACHE_2_15 37
#define EXECUTE_CACHE_2_13 39
#define EXECUTE_CACHE_2_6 41
#define FREE_REFERENCE_2_4 44
#define FREE_REFERENCE_2_3 45
#define FREE_REFERENCE_2_2 46
#define FREE_REFERENCE_2_1 47
#define FREE_REFERENCE_2_0 48
#define FREE_ASSIGNMENT_2_2 50
#define FREE_ASSIGNMENT_2_1 51
#define FREE_ASSIGNMENT_2_0 52
#define FREE_REFERENCES_LABEL_2_0 34
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_2_4);
      goto copy_expression_extern_23;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_2_11);
      goto lambda_39;

    case 5:
      current_block = (Rpc - LABEL_2_9);
      goto swapB_38;

    case 6:
      current_block = (Rpc - LABEL_2_16);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_2_17);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_2_18);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_2_19);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_2_20);
      goto label_31;

    case 11:
      current_block = (Rpc - LABEL_2_21);
      goto label_32;

    case 12:
      current_block = (Rpc - LABEL_2_22);
      goto label_33;

    case 13:
      current_block = (Rpc - LABEL_2_23);
      goto label_34;

    case 14:
      current_block = (Rpc - LABEL_2_24);
      goto label_35;

    case 15:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_expression_extern_37)
DEFLABEL (copy_expression_extern_23)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_43;
  Wrd5 = Wrd9;

DEFLABEL (label_42)
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_41;
  Wrd14 = Wrd18;

DEFLABEL (label_40)
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-1]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd24.pObj) = (& (Rhp [-1]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd46.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_9])));
  Rhp += 3;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  Wrd44 = Wrd46;
  (Wrd45.Obj) = (Rsp [3]);
  ((Wrd44.pObj) [2]) = (Wrd45.Obj);
  ((Wrd44.pObj) [3]) = (Wrd22.Obj);
  ((Wrd44.pObj) [4]) = (Wrd25.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_11])));
  Rhp += 2;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd32 = Wrd29;
  (Wrd33.Obj) = (Rsp [5]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  ((Wrd32.pObj) [3]) = (Wrd26.Obj);
  (Rsp [4]) = (Wrd28.Obj);
  (Rsp [5]) = (Wrd47.Obj);
  (Rsp [3]) = (Wrd47.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_8])), (Wrd15.pObj));

DEFLABEL (label_26)
  (Wrd14.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_7])), (Wrd6.pObj));

DEFLABEL (label_25)
  (Wrd5.Obj) = Rvl;
  goto label_42;

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_2_11);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (swapB_38)
  CLOSURE_HEADER (LABEL_2_9);

DEFLABEL (swapB_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_70;

DEFLABEL (label_69)
  Wrd5 = Wrd9;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_67;

DEFLABEL (label_66)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_65)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_64;

DEFLABEL (label_63)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_62)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_3]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_61;

DEFLABEL (label_60)
  Wrd57 = Wrd61;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_58;

DEFLABEL (label_57)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_56)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_55;

DEFLABEL (label_54)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_53)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_4]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_52;

DEFLABEL (label_51)
  Wrd109 = Wrd113;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_49;

DEFLABEL (label_48)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_47)
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
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_44)
  Rvl = (current_block [OBJECT_2_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_46)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_45;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_24])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_35)
  goto label_44;

DEFLABEL (label_49)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_48;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_23])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_34)
  goto label_47;

DEFLABEL (label_52)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_51;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_22])), (Wrd110.pObj));

DEFLABEL (label_33)
  (Wrd109.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_55)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_54;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_21])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_32)
  goto label_53;

DEFLABEL (label_58)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_57;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_20])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_31)
  goto label_56;

DEFLABEL (label_61)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_60;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_19])), (Wrd58.pObj));

DEFLABEL (label_30)
  (Wrd57.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_64)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_63;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_18])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_29)
  goto label_62;

DEFLABEL (label_67)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_66;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_17])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_28)
  goto label_65;

DEFLABEL (label_70)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_69;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_16])), (Wrd6.pObj));

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_68;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define ENVIRONMENT_LABEL_3_3 12
#define DEBUGGING_LABEL_3_2 11
#define EXECUTE_CACHE_3_8 7
#define EXECUTE_CACHE_3_7 9
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_3_4);
      goto copy_expressions_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_expressions_4)
DEFLABEL (copy_expressions_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define LABEL_4_8 11
#define ENVIRONMENT_LABEL_4_3 18
#define DEBUGGING_LABEL_4_2 17
#define OBJECT_4_2 16
#define OBJECT_4_1 15
#define OBJECT_4_0 14
#define FREE_REFERENCE_4_0 13
#define FREE_REFERENCES_LABEL_4_0 12
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
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
      goto copy_expression_3;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_expression_10)
DEFLABEL (copy_expression_3)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_18;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_17)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_16;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_16;
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_15)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_14;
  Wrd35 = Wrd39;

DEFLABEL (label_13)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_12;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_12;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_12;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd44.pObj) = (& ((Wrd48.pObj) [(Wrd42.Lng)]));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_11)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_12)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_7])), (Wrd36.pObj));

DEFLABEL (label_7)
  (Wrd35.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd30.Obj) = (current_block [OBJECT_4_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_4_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 6
#define DEBUGGING_LABEL_5_2 5
#define OBJECT_5_0 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto environment_make_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_make_3)
DEFLABEL (environment_make_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  Rvl = (current_block [OBJECT_5_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 12
#define DEBUGGING_LABEL_6_2 11
#define EXECUTE_CACHE_6_6 7
#define FREE_REFERENCE_6_0 10
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_6_4);
      goto environment_bind_0;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_bind_4)
DEFLABEL (environment_bind_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_9 9
#define ENVIRONMENT_LABEL_7_3 18
#define DEBUGGING_LABEL_7_2 17
#define OBJECT_7_1 16
#define OBJECT_7_0 15
#define EXECUTE_CACHE_7_8 11
#define EXECUTE_CACHE_7_6 13
#define FREE_REFERENCES_LABEL_7_0 10
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_7_4);
      goto environment_lookup_4;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_lookup_8)
DEFLABEL (environment_lookup_4)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_9)
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_11;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_10)
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_11)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define TAG_8_7 2
#define LABEL_8_10 9
#define ENVIRONMENT_LABEL_8_3 21
#define DEBUGGING_LABEL_8_2 20
#define OBJECT_8_2 19
#define OBJECT_8_1 18
#define OBJECT_8_0 17
#define EXECUTE_CACHE_8_11 11
#define EXECUTE_CACHE_8_9 13
#define EXECUTE_CACHE_8_8 15
#define FREE_REFERENCES_LABEL_8_0 10
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_8_4);
      goto environment_rebind_3;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_8_10);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_rebind_7)
DEFLABEL (environment_rebind_3)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_6])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_8_6);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_10;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_10;
  (Wrd8.Obj) = ((Wrd14.pObj) [3]);

DEFLABEL (label_9)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_8_2]);
  (Rsp [2]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (label_10)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_8_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define TAG_9_6 1
#define LABEL_9_7 7
#define LABEL_9_11 9
#define LABEL_9_9 11
#define TAG_9_10 4
#define ENVIRONMENT_LABEL_9_3 23
#define DEBUGGING_LABEL_9_2 22
#define OBJECT_9_0 21
#define EXECUTE_CACHE_9_13 13
#define EXECUTE_CACHE_9_12 15
#define EXECUTE_CACHE_9_8 17
#define FREE_REFERENCE_9_0 20
#define FREE_REFERENCES_LABEL_9_0 12
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_9_4);
      goto make_renamer_3;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_9_11);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_9_9);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_renamer_7)
DEFLABEL (make_renamer_3)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_9_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_9])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  ((Wrd11.pObj) [2]) = (Wrd5.Obj);
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_11;
  Wrd15 = Wrd19;

DEFLABEL (label_10)
  (Rsp [2]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_11])), (Wrd16.pObj));

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_10;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_9_9);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_7 5
#define TAG_10_8 1
#define LABEL_10_5 7
#define TAG_10_6 2
#define LABEL_10_12 9
#define LABEL_10_13 11
#define LABEL_10_14 13
#define LABEL_10_10 15
#define LABEL_10_15 17
#define LABEL_10_17 19
#define LABEL_10_16 21
#define LABEL_10_19 23
#define ENVIRONMENT_LABEL_10_3 43
#define DEBUGGING_LABEL_10_2 42
#define OBJECT_10_4 41
#define OBJECT_10_3 40
#define OBJECT_10_2 39
#define OBJECT_10_1 38
#define OBJECT_10_0 37
#define EXECUTE_CACHE_10_20 25
#define EXECUTE_CACHE_10_18 27
#define EXECUTE_CACHE_10_11 29
#define EXECUTE_CACHE_10_9 31
#define FREE_REFERENCE_10_0 34
#define FREE_ASSIGNMENT_10_0 36
#define FREE_REFERENCES_LABEL_10_0 24
#define NUMBER_OF_LINKER_SECTIONS_10_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd21;
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
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_10_4);
      goto copy_quotation_15;

    case 1:
      current_block = (Rpc - LABEL_10_7);
      goto lambda_26;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto swapB_25;

    case 3:
      current_block = (Rpc - LABEL_10_12);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_10_13);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_10_14);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_10_15);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_10_17);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_10_16);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_10_19);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_quotation_24)
DEFLABEL (copy_quotation_15)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  ((Wrd19.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_7])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Rsp [2]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_10_7);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (* (--Rsp)) = Rvl;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_32;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_32;
  (Wrd9.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_31)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd45.Obj) = (Rsp [3]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [2]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_30;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd44.Lng))))
    goto label_30;
  (Wrd36.Obj) = ((Wrd42.pObj) [4]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_29)
  (Wrd56.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_28;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_28;
  (Wrd6.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_27)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd30.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_20]));

DEFLABEL (label_28)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [2]);
  (Wrd26.Obj) = (current_block [OBJECT_10_4]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_19]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_22)
  (Wrd6.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd50.Obj) = (Rsp [3]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd49.Obj) = ((Wrd51.pObj) [2]);
  (Wrd52.Obj) = (current_block [OBJECT_10_3]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_17]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_10_1]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (swapB_25)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (swapB_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  Wrd5 = Wrd9;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_36)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_33)
  Rvl = (current_block [OBJECT_10_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_35)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_34;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_14])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_19)
  goto label_33;

DEFLABEL (label_38)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_37;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_13])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_18)
  goto label_36;

DEFLABEL (label_41)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_40;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_10_12])), (Wrd6.pObj));

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_6 9
#define LABEL_11_9 11
#define LABEL_11_10 13
#define TAG_11_11 5
#define LABEL_11_16 15
#define LABEL_11_13 17
#define LABEL_11_19 19
#define LABEL_11_15 21
#define LABEL_11_22 23
#define LABEL_11_18 25
#define LABEL_11_24 27
#define LABEL_11_21 29
#define LABEL_11_27 31
#define LABEL_11_25 33
#define TAG_11_26 15
#define ENVIRONMENT_LABEL_11_3 55
#define DEBUGGING_LABEL_11_2 54
#define OBJECT_11_6 53
#define OBJECT_11_5 52
#define OBJECT_11_4 51
#define OBJECT_11_3 50
#define OBJECT_11_2 49
#define OBJECT_11_1 48
#define OBJECT_11_0 47
#define EXECUTE_CACHE_11_23 35
#define EXECUTE_CACHE_11_20 37
#define EXECUTE_CACHE_11_17 39
#define EXECUTE_CACHE_11_14 41
#define EXECUTE_CACHE_11_12 43
#define EXECUTE_CACHE_11_8 45
#define FREE_REFERENCES_LABEL_11_0 34
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_11_4);
      goto copy_block_20;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_11_10);
      goto lambda_31;

    case 6:
      current_block = (Rpc - LABEL_11_16);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_11_13);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_11_19);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_11_15);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_11_22);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_11_18);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_11_24);
      goto label_27;

    case 13:
      current_block = (Rpc - LABEL_11_21);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_11_27);
      goto label_28;

    case 15:
      current_block = (Rpc - LABEL_11_25);
      goto lambda_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_block_30)
DEFLABEL (copy_block_20)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_40;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_40;
  (Wrd7.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_39)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd34.Obj) = (Rsp [5]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_38;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd33.Lng))))
    goto label_38;
  (Wrd27.Obj) = ((Wrd31.pObj) [4]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_37)
  (Wrd41.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_10])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_11_13);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_36;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_36;
  (Wrd11.Obj) = ((Wrd15.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_35)
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_20]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_11_18);
  (Wrd5.Obj) = Rvl;
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_34;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd23.Lng))))
    goto label_34;
  ((Wrd21.pObj) [5]) = Rvl;

DEFLABEL (label_33)
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_25])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd14.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (current_block [OBJECT_11_5]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_24]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_6]), 3);

DEFLABEL (label_27)
  goto label_33;

DEFLABEL (label_36)
  (Wrd20.Obj) = (Rsp [6]);
  (Wrd21.Obj) = (current_block [OBJECT_11_5]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd36.Obj) = (Rsp [5]);
  (Wrd37.Obj) = (current_block [OBJECT_11_3]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_11_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_11_10);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_46;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_46;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_45)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_44;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_44;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_43)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_23]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_21);
  (Wrd5.Obj) = Rvl;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_42;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_42;
  ((Wrd13.pObj) [4]) = Rvl;

DEFLABEL (label_41)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_11_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_27]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_6]), 3);

DEFLABEL (label_28)
  goto label_41;

DEFLABEL (label_44)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_11_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_22]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_11_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_11_25);

DEFLABEL (lambda_15)
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
#define TAG_12_7 2
#define ENVIRONMENT_LABEL_12_3 16
#define DEBUGGING_LABEL_12_2 15
#define EXECUTE_CACHE_12_9 9
#define EXECUTE_CACHE_12_8 11
#define FREE_REFERENCE_12_0 14
#define FREE_REFERENCES_LABEL_12_0 8
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_12_4);
      goto copy_variable_1;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_variable_5)
DEFLABEL (copy_variable_1)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_8;
  Wrd8 = Wrd12;

DEFLABEL (label_7)
  (Rsp [2]) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_6])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd17 = Wrd16;
  (Wrd18.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Rsp [3]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_5])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_7;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_12_6);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_7 9
#define LABEL_13_10 11
#define LABEL_13_11 13
#define LABEL_13_12 15
#define LABEL_13_8 17
#define LABEL_13_14 19
#define LABEL_13_15 21
#define LABEL_13_16 23
#define LABEL_13_17 25
#define LABEL_13_20 27
#define LABEL_13_21 29
#define LABEL_13_18 31
#define ENVIRONMENT_LABEL_13_3 51
#define DEBUGGING_LABEL_13_2 50
#define OBJECT_13_6 49
#define OBJECT_13_5 48
#define OBJECT_13_4 47
#define OBJECT_13_3 46
#define OBJECT_13_2 45
#define OBJECT_13_1 44
#define OBJECT_13_0 43
#define EXECUTE_CACHE_13_22 33
#define EXECUTE_CACHE_13_19 35
#define EXECUTE_CACHE_13_13 37
#define EXECUTE_CACHE_13_9 39
#define FREE_REFERENCE_13_0 42
#define FREE_REFERENCES_LABEL_13_0 32
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd5;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd35;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd54;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd8;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_13_4);
      goto copy_variable_free_intern_18;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto loop_15;

    case 4:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_13_11);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_13_12);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_13_14);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_13_15);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_13_16);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_13_17);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_13_20);
      goto label_26;

    case 13:
      current_block = (Rpc - LABEL_13_21);
      goto label_25;

    case 14:
      current_block = (Rpc - LABEL_13_18);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_variable_free_intern_28)
DEFLABEL (copy_variable_free_intern_18)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_33;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_33;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_32)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_31;
  Wrd21 = Wrd25;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd21.Obj);
  goto loop_15;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_6])), (Wrd22.pObj));

DEFLABEL (label_21)
  (Wrd21.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_13_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (loop_29)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_13_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_8);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_47;
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd80.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (current_block [OBJECT_13_2]);
  (* (--Rsp)) = (Wrd81.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_10);

DEFLABEL (label_47)
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Obj) = (Rsp [0]);
  if (! ((Wrd7.Obj) == (Wrd8.Obj)))
    goto label_34;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 10))
    goto label_46;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd66.Lng))))
    goto label_46;
  (Wrd11.Obj) = ((Wrd64.pObj) [2]);
  if (! ((Wrd11.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_44;

DEFLABEL (label_45)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_13_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13_12);

DEFLABEL (label_44)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_43;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd26.Lng))))
    goto label_43;
  (Wrd18.Obj) = ((Wrd24.pObj) [2]);

DEFLABEL (label_42)
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_41;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd53.Lng))))
    goto label_41;
  (Wrd35.Obj) = ((Wrd51.pObj) [4]);
  if ((Wrd35.Obj) == ((SCHEME_OBJECT) 0))
    goto label_40;

DEFLABEL (label_39)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_18]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_13_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_22]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_13_17);
  (Wrd5.Obj) = Rvl;
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_38;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd30.Lng))))
    goto label_38;
  ((Wrd28.pObj) [3]) = Rvl;

DEFLABEL (label_37)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_36;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd14.Lng))))
    goto label_36;
  (Wrd6.Obj) = ((Wrd12.pObj) [2]);

DEFLABEL (label_35)
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_15;

DEFLABEL (label_36)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_13_3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_25)
  (Wrd6.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (current_block [OBJECT_13_0]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_20]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_6]), 3);

DEFLABEL (label_26)
  goto label_37;

DEFLABEL (label_40)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_13_5]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13_11);
  goto label_39;

DEFLABEL (label_41)
  (Wrd56.Obj) = (current_block [OBJECT_13_4]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  goto label_39;

DEFLABEL (label_43)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (current_block [OBJECT_13_3]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_22)
  (Wrd18.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_46)
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.Obj) = (current_block [OBJECT_13_3]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_44;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define ENVIRONMENT_LABEL_14_3 17
#define DEBUGGING_LABEL_14_2 16
#define OBJECT_14_2 15
#define OBJECT_14_1 14
#define OBJECT_14_0 13
#define EXECUTE_CACHE_14_7 9
#define FREE_REFERENCE_14_0 12
#define FREE_REFERENCES_LABEL_14_0 8
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_14_4);
      goto copy_variable_free_extern_1;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_variable_free_extern_6)
DEFLABEL (copy_variable_free_extern_1)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_10;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_10;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_9)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_8;
  Wrd21 = Wrd25;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_14_2]);
  (Rsp [2]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_6])), (Wrd22.pObj));

DEFLABEL (label_4)
  (Wrd21.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_14_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_7 5
#define LABEL_15_5 7
#define TAG_15_6 2
#define LABEL_15_9 9
#define LABEL_15_10 11
#define TAG_15_11 4
#define ENVIRONMENT_LABEL_15_3 21
#define DEBUGGING_LABEL_15_2 20
#define OBJECT_15_0 19
#define EXECUTE_CACHE_15_12 13
#define EXECUTE_CACHE_15_8 15
#define FREE_REFERENCE_15_0 18
#define FREE_REFERENCES_LABEL_15_0 12
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_15_4);
      goto copy_declarations_intern_3;

    case 1:
      current_block = (Rpc - LABEL_15_7);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_15_9);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_15_10);
      goto lambda_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_declarations_intern_8)
DEFLABEL (copy_declarations_intern_3)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_11;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Rsp [0]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_5])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_13;
  Wrd14 = Wrd18;

DEFLABEL (label_12)
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_7])), (Wrd15.pObj));

DEFLABEL (label_5)
  (Wrd14.Obj) = Rvl;
  goto label_12;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_15_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_15;
  Wrd10 = Wrd14;

DEFLABEL (label_14)
  (Rsp [2]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_10])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd19 = Wrd18;
  (Wrd20.Obj) = (Rsp [3]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Rsp [3]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_12]));

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_9])), (Wrd11.pObj));

DEFLABEL (label_6)
  (Wrd10.Obj) = Rvl;
  goto label_14;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_15_10);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define TAG_16_6 1
#define LABEL_16_7 7
#define TAG_16_8 2
#define LABEL_16_13 9
#define LABEL_16_11 11
#define TAG_16_12 4
#define LABEL_16_15 13
#define LABEL_16_16 15
#define ENVIRONMENT_LABEL_16_3 33
#define DEBUGGING_LABEL_16_2 32
#define OBJECT_16_3 31
#define OBJECT_16_2 30
#define OBJECT_16_1 29
#define OBJECT_16_0 28
#define EXECUTE_CACHE_16_17 17
#define EXECUTE_CACHE_16_14 19
#define EXECUTE_CACHE_16_10 21
#define EXECUTE_CACHE_16_9 23
#define FREE_REFERENCE_16_1 26
#define FREE_REFERENCE_16_0 27
#define FREE_REFERENCES_LABEL_16_0 16
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_16_4);
      goto copy_declarations_extern_5;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto lambda_13;

    case 3:
      current_block = (Rpc - LABEL_16_13);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_16_11);
      goto lambda_14;

    case 5:
      current_block = (Rpc - LABEL_16_15);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_16_16);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_declarations_extern_11)
DEFLABEL (copy_declarations_extern_5)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_15;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_5])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_7])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  ((Wrd16.pObj) [2]) = (Wrd13.Obj);
  (Rsp [1]) = (Wrd15.Obj);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (label_15)
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_16_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_16_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_11])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  ((Wrd11.pObj) [2]) = (Wrd5.Obj);
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_17;
  Wrd15 = Wrd19;

DEFLABEL (label_16)
  (Rsp [2]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_14]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_13])), (Wrd16.pObj));

DEFLABEL (label_7)
  (Wrd15.Obj) = Rvl;
  goto label_16;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_16_11);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_21;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_21;
  (Wrd9.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_20)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_1]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_19;
  Wrd29 = Wrd33;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_16_3]);
  (Rsp [2]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_17]));

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_16])), (Wrd30.pObj));

DEFLABEL (label_9)
  (Wrd29.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_16_1]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_6 5
#define LABEL_17_5 7
#define LABEL_17_8 9
#define TAG_17_9 3
#define LABEL_17_10 11
#define LABEL_17_12 13
#define LABEL_17_11 15
#define LABEL_17_14 17
#define ENVIRONMENT_LABEL_17_3 31
#define DEBUGGING_LABEL_17_2 30
#define OBJECT_17_4 29
#define OBJECT_17_3 28
#define OBJECT_17_2 27
#define OBJECT_17_1 26
#define OBJECT_17_0 25
#define EXECUTE_CACHE_17_15 19
#define EXECUTE_CACHE_17_13 21
#define EXECUTE_CACHE_17_7 23
#define FREE_REFERENCES_LABEL_17_0 18
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd5;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd36;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_17_4);
      goto lambda_7;

    case 1:
      current_block = (Rpc - LABEL_17_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_17_8);
      goto lambda_15;

    case 4:
      current_block = (Rpc - LABEL_17_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_17_12);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_17_11);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_17_14);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_14)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_17;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_17;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_16)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_8])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_17)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_17_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_17_8);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_23;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_23;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_22)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [2]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_21;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd44.Lng))))
    goto label_21;
  (Wrd36.Obj) = ((Wrd42.pObj) [4]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_20)
  (Wrd56.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_11);
  (* (--Rsp)) = Rvl;
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_19;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_19;
  (Wrd5.Obj) = ((Wrd15.pObj) [5]);

DEFLABEL (label_18)
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd29.Obj);
  (Wrd30.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_15]));

DEFLABEL (label_19)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_17_4]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd49.Obj) = ((Wrd51.pObj) [2]);
  (Wrd52.Obj) = (current_block [OBJECT_17_3]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_17_2]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define LABEL_18_6 9
#define LABEL_18_10 11
#define LABEL_18_9 13
#define ENVIRONMENT_LABEL_18_3 26
#define DEBUGGING_LABEL_18_2 25
#define OBJECT_18_3 24
#define OBJECT_18_2 23
#define OBJECT_18_1 22
#define OBJECT_18_0 21
#define EXECUTE_CACHE_18_12 15
#define EXECUTE_CACHE_18_11 17
#define EXECUTE_CACHE_18_8 19
#define FREE_REFERENCES_LABEL_18_0 14
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_18_4);
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_18_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_18_10);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_11)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_17;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_17;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_16)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_15;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_15;
  (Wrd26.Obj) = ((Wrd30.pObj) [4]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_14)
  (Wrd40.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_13;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_13;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_12)
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_18_9);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_12]));

DEFLABEL (label_13)
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.Obj) = (current_block [OBJECT_18_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.Obj) = (current_block [OBJECT_18_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_18_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define LABEL_19_6 9
#define LABEL_19_10 11
#define LABEL_19_9 13
#define ENVIRONMENT_LABEL_19_3 26
#define DEBUGGING_LABEL_19_2 25
#define OBJECT_19_3 24
#define OBJECT_19_2 23
#define OBJECT_19_1 22
#define OBJECT_19_0 21
#define EXECUTE_CACHE_19_12 15
#define EXECUTE_CACHE_19_11 17
#define EXECUTE_CACHE_19_8 19
#define FREE_REFERENCES_LABEL_19_0 14
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_19_4);
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_19_10);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_19_9);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_11)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_17;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_17;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_16)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_15;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_15;
  (Wrd26.Obj) = ((Wrd30.pObj) [4]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_14)
  (Wrd40.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_13;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_13;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_12)
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_9);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (label_13)
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.Obj) = (current_block [OBJECT_19_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.Obj) = (current_block [OBJECT_19_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_19_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_7 7
#define LABEL_20_6 9
#define LABEL_20_10 11
#define LABEL_20_9 13
#define LABEL_20_12 15
#define LABEL_20_11 17
#define ENVIRONMENT_LABEL_20_3 29
#define DEBUGGING_LABEL_20_2 28
#define OBJECT_20_4 27
#define OBJECT_20_3 26
#define OBJECT_20_2 25
#define OBJECT_20_1 24
#define OBJECT_20_0 23
#define EXECUTE_CACHE_20_13 19
#define EXECUTE_CACHE_20_8 21
#define FREE_REFERENCES_LABEL_20_0 18
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_20_4);
      goto lambda_7;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_20_10);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_20_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_20_12);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_20_11);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_14)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_22;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_21)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_20;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_20;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_19)
  (Wrd40.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_18;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_18;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_17)
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_20_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_16;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_16;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_15)
  (Wrd24.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_20_11);
  (Rsp [5]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_13]));

DEFLABEL (label_16)
  (Wrd19.Obj) = (Rsp [6]);
  (Wrd20.Obj) = (current_block [OBJECT_20_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.Obj) = (current_block [OBJECT_20_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.Obj) = (current_block [OBJECT_20_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_20_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 5
#define DEBUGGING_LABEL_21_2 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_6 5
#define LABEL_22_5 7
#define LABEL_22_9 9
#define LABEL_22_8 11
#define LABEL_22_11 13
#define ENVIRONMENT_LABEL_22_3 26
#define DEBUGGING_LABEL_22_2 25
#define OBJECT_22_3 24
#define OBJECT_22_2 23
#define OBJECT_22_1 22
#define OBJECT_22_0 21
#define EXECUTE_CACHE_22_12 15
#define EXECUTE_CACHE_22_10 17
#define EXECUTE_CACHE_22_7 19
#define FREE_REFERENCES_LABEL_22_0 14
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_22_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_22_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_22_11);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_11)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_17;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_17;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_16)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_15;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_14)
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_8);
  (Rsp [2]) = Rvl;
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_13;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd14.Lng))))
    goto label_13;
  (Wrd6.Obj) = ((Wrd12.pObj) [2]);

DEFLABEL (label_12)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd22.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_12]));

DEFLABEL (label_13)
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.Obj) = (current_block [OBJECT_22_3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_9)
  (Wrd6.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_22_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_22_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_6 5
#define LABEL_23_5 7
#define LABEL_23_8 9
#define ENVIRONMENT_LABEL_23_3 19
#define DEBUGGING_LABEL_23_2 18
#define OBJECT_23_2 17
#define OBJECT_23_1 16
#define OBJECT_23_0 15
#define EXECUTE_CACHE_23_9 11
#define EXECUTE_CACHE_23_7 13
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_23_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_23_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_12;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_12;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_11)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_10;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_10;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_9)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd21.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_9]));

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_23_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_23_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_6 5
#define LABEL_24_5 7
#define LABEL_24_9 9
#define LABEL_24_8 11
#define LABEL_24_10 13
#define ENVIRONMENT_LABEL_24_3 24
#define DEBUGGING_LABEL_24_2 23
#define OBJECT_24_3 22
#define OBJECT_24_2 21
#define OBJECT_24_1 20
#define OBJECT_24_0 19
#define EXECUTE_CACHE_24_11 15
#define EXECUTE_CACHE_24_7 17
#define FREE_REFERENCES_LABEL_24_0 14
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_24_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_24_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_24_10);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_11)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_17;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_17;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_16)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_15;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_14)
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (Rsp [2]) = Rvl;
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_13;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd14.Lng))))
    goto label_13;
  (Wrd6.Obj) = ((Wrd12.pObj) [2]);

DEFLABEL (label_12)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd22.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (label_13)
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.Obj) = (current_block [OBJECT_24_3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_9)
  (Wrd6.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_24_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_24_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_6 5
#define LABEL_25_5 7
#define LABEL_25_8 9
#define TAG_25_9 3
#define LABEL_25_10 11
#define LABEL_25_12 13
#define LABEL_25_13 15
#define LABEL_25_15 17
#define LABEL_25_14 19
#define LABEL_25_18 21
#define LABEL_25_17 23
#define LABEL_25_21 25
#define LABEL_25_22 27
#define LABEL_25_20 29
#define LABEL_25_23 31
#define ENVIRONMENT_LABEL_25_3 52
#define DEBUGGING_LABEL_25_2 51
#define OBJECT_25_7 50
#define OBJECT_25_6 49
#define OBJECT_25_5 48
#define OBJECT_25_4 47
#define OBJECT_25_3 46
#define OBJECT_25_2 45
#define OBJECT_25_1 44
#define OBJECT_25_0 43
#define EXECUTE_CACHE_25_24 33
#define EXECUTE_CACHE_25_19 35
#define EXECUTE_CACHE_25_16 37
#define EXECUTE_CACHE_25_11 39
#define EXECUTE_CACHE_25_7 41
#define FREE_REFERENCES_LABEL_25_0 32
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd12;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd13;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd34;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto lambda_16;

    case 1:
      current_block = (Rpc - LABEL_25_6);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_15;

    case 3:
      current_block = (Rpc - LABEL_25_8);
      goto lambda_27;

    case 4:
      current_block = (Rpc - LABEL_25_10);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_25_12);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_25_13);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_25_15);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_25_14);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_25_18);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_25_17);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_25_21);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_25_22);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_25_20);
      goto continuation_4;

    case 14:
      current_block = (Rpc - LABEL_25_23);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_26)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_29;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_29;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_28)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_8])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_29)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_25_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_25_8);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_10);
  (* (--Rsp)) = Rvl;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_43;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_43;
  (Wrd9.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_42)
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [2]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_41;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd42.Lng))))
    goto label_41;
  (Wrd34.Obj) = ((Wrd40.pObj) [2]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_40)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_14]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd70.Obj) = (Rsp [5]);
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [2]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 10))
    goto label_39;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd69.Lng))))
    goto label_39;
  (Wrd61.Obj) = ((Wrd67.pObj) [8]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_38)
  (Wrd81.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_16]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_25_14);
  (Rsp [6]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_17]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_37;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd21.Lng))))
    goto label_37;
  (Wrd13.Obj) = ((Wrd19.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_36)
  (Wrd33.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_25_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [6]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_35;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd20.Lng))))
    goto label_35;
  (Wrd12.Obj) = ((Wrd18.pObj) [5]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_34)
  (Wrd32.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_25_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [7]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_33;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd20.Lng))))
    goto label_33;
  (Wrd12.Obj) = ((Wrd18.pObj) [7]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_32)
  (Wrd32.Obj) = (Rsp [0]);
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd34.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd34.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_30)
  (Wrd36.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_31)
  (Rsp [7]) = (Wrd36.Obj);
  (Wrd37.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd37.Obj);
  (Wrd38.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_24]));

DEFLABEL (label_33)
  (Wrd26.Obj) = (Rsp [7]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Wrd28.Obj) = (current_block [OBJECT_25_7]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_23]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd26.Obj) = (Rsp [6]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Wrd28.Obj) = (current_block [OBJECT_25_6]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_21]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd27.Obj) = (Rsp [5]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Wrd29.Obj) = (current_block [OBJECT_25_5]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_18]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd75.Obj) = (Rsp [5]);
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd74.Obj) = ((Wrd76.pObj) [2]);
  (Wrd77.Obj) = (current_block [OBJECT_25_4]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_15]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [2]);
  (Wrd50.Obj) = (current_block [OBJECT_25_3]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_13]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_25_2]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_25_22);
  (Wrd36.Obj) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_6 5
#define LABEL_26_5 7
#define LABEL_26_8 9
#define TAG_26_9 3
#define LABEL_26_10 11
#define LABEL_26_12 13
#define LABEL_26_11 15
#define LABEL_26_17 17
#define LABEL_26_13 19
#define TAG_26_14 8
#define LABEL_26_19 21
#define LABEL_26_16 23
#define LABEL_26_22 25
#define LABEL_26_21 27
#define LABEL_26_23 29
#define ENVIRONMENT_LABEL_26_3 52
#define DEBUGGING_LABEL_26_2 51
#define OBJECT_26_5 50
#define OBJECT_26_4 49
#define OBJECT_26_3 48
#define OBJECT_26_2 47
#define OBJECT_26_1 46
#define OBJECT_26_0 45
#define EXECUTE_CACHE_26_25 31
#define EXECUTE_CACHE_26_24 33
#define EXECUTE_CACHE_26_20 35
#define EXECUTE_CACHE_26_18 37
#define EXECUTE_CACHE_26_15 39
#define EXECUTE_CACHE_26_7 41
#define FREE_REFERENCE_26_0 44
#define FREE_REFERENCES_LABEL_26_0 30
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd12;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd37;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_26_4);
      goto lambda_13;

    case 1:
      current_block = (Rpc - LABEL_26_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_12;

    case 3:
      current_block = (Rpc - LABEL_26_8);
      goto lambda_23;

    case 4:
      current_block = (Rpc - LABEL_26_10);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_26_12);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_26_11);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_26_17);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_26_13);
      goto lambda_24;

    case 9:
      current_block = (Rpc - LABEL_26_19);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_26_16);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_26_22);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_26_21);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_26_23);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_22)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_26;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_26;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_25)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_8])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_26)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_26_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_26_8);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_34;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_34;
  (Wrd10.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_33)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd46.Obj) = (Rsp [3]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [2]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_32;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd45.Lng))))
    goto label_32;
  (Wrd37.Obj) = ((Wrd43.pObj) [6]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_31)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd58.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_13])));
  Rhp += 2;
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd58.pObj)));
  Wrd61 = Wrd58;
  (Wrd62.Obj) = (Rsp [6]);
  ((Wrd61.pObj) [2]) = (Wrd62.Obj);
  (Wrd60.Obj) = (Rsp [5]);
  ((Wrd61.pObj) [3]) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_26_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_30;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd20.Lng))))
    goto label_30;
  (Wrd12.Obj) = ((Wrd18.pObj) [5]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_29)
  (Wrd32.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_26_16);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_21]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_28;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd21.Lng))))
    goto label_28;
  (Wrd13.Obj) = ((Wrd19.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_27)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_23]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_24]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_21);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_25]));

DEFLABEL (label_28)
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Wrd29.Obj) = (current_block [OBJECT_26_5]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_22]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Wrd28.Obj) = (current_block [OBJECT_26_4]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_17]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd50.Obj) = ((Wrd52.pObj) [2]);
  (Wrd53.Obj) = (current_block [OBJECT_26_3]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [2]);
  (Wrd26.Obj) = (current_block [OBJECT_26_2]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_26_13);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_37;
  Wrd6 = Wrd10;

DEFLABEL (label_36)
  (Wrd12.Obj) = (Rsp [1]);
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_35;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = ((Wrd14.pObj) [2]);
  (Rsp [1]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_20]));

DEFLABEL (label_35)
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_19])), (Wrd7.pObj));

DEFLABEL (label_19)
  (Wrd6.Obj) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 8
#define DEBUGGING_LABEL_27_2 7
#define EXECUTE_CACHE_27_5 5
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_6 5
#define LABEL_28_5 7
#define LABEL_28_8 9
#define ENVIRONMENT_LABEL_28_3 19
#define DEBUGGING_LABEL_28_2 18
#define OBJECT_28_2 17
#define OBJECT_28_1 16
#define OBJECT_28_0 15
#define EXECUTE_CACHE_28_9 11
#define EXECUTE_CACHE_28_7 13
#define FREE_REFERENCES_LABEL_28_0 10
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_28_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_28_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_12;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_12;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_11)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_10;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd14.Lng))))
    goto label_10;
  (Wrd6.Obj) = ((Wrd12.pObj) [2]);

DEFLABEL (label_9)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd22.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (label_10)
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.Obj) = (current_block [OBJECT_28_2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_28_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_6 5
#define LABEL_29_5 7
#define LABEL_29_8 9
#define ENVIRONMENT_LABEL_29_3 19
#define DEBUGGING_LABEL_29_2 18
#define OBJECT_29_2 17
#define OBJECT_29_1 16
#define OBJECT_29_0 15
#define EXECUTE_CACHE_29_9 11
#define EXECUTE_CACHE_29_7 13
#define FREE_REFERENCES_LABEL_29_0 10
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_29_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_29_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_29_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_12;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_12;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_11)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_10;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_10;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_9)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd21.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_9]));

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_29_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_29_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define ENVIRONMENT_LABEL_30_3 9
#define DEBUGGING_LABEL_30_2 8
#define OBJECT_30_0 7
#define EXECUTE_CACHE_30_5 5
#define FREE_REFERENCES_LABEL_30_0 4
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
copy_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_30_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (current_block [OBJECT_30_0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_11 7
#define LABEL_7 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_13 15
#define LABEL_14 17
#define LABEL_16 19
#define LABEL_17 21
#define LABEL_18 23
#define LABEL_19 25
#define LABEL_20 27
#define LABEL_21 29
#define LABEL_22 31
#define LABEL_23 33
#define LABEL_24 35
#define LABEL_25 37
#define LABEL_26 39
#define LABEL_27 41
#define LABEL_28 43
#define LABEL_29 45
#define LABEL_30 47
#define ENVIRONMENT_LABEL_3 98
#define DEBUGGING_LABEL_2 97
#define PURIFICATION_ROOT 96
#define OBJECT_35 95
#define OBJECT_34 94
#define OBJECT_33 93
#define OBJECT_32 92
#define OBJECT_31 91
#define OBJECT_30 90
#define OBJECT_29 89
#define OBJECT_28 88
#define OBJECT_27 87
#define OBJECT_26 86
#define OBJECT_25 85
#define OBJECT_24 84
#define OBJECT_23 83
#define OBJECT_22 82
#define OBJECT_21 81
#define OBJECT_20 80
#define OBJECT_19 79
#define OBJECT_18 78
#define OBJECT_17 77
#define OBJECT_16 76
#define OBJECT_15 75
#define OBJECT_14 74
#define OBJECT_13 73
#define OBJECT_12 72
#define OBJECT_11 71
#define OBJECT_10 70
#define OBJECT_9 69
#define OBJECT_8 68
#define OBJECT_7 67
#define OBJECT_6 66
#define OBJECT_5 65
#define OBJECT_4 64
#define OBJECT_3 63
#define OBJECT_2 62
#define OBJECT_1 61
#define OBJECT_0 60
#define EXECUTE_CACHE_15 49
#define EXECUTE_CACHE_12 51
#define EXECUTE_CACHE_8 53
#define FREE_REFERENCE_0 56
#define GLOBAL_EXECUTE_CACHE_5 58
#define FREE_REFERENCES_LABEL_0 48
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
copy_so_1c71d2185ec2f2b4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_14);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_16);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_17);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_22);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_23);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_24);
      goto continuation_15;

    case 17:
      current_block = (Rpc - LABEL_25);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_26);
      goto continuation_17;

    case 19:
      current_block = (Rpc - LABEL_27);
      goto continuation_18;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto label_24;

    case 21:
      current_block = (Rpc - LABEL_29);
      goto label_25;

    case 22:
      current_block = (Rpc - LABEL_30);
      goto expression_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_20)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_29])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_25)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_24)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	0,
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	2,
	2,
	1,
	3,
	2,
	1,
	1,
	2,
	0,
	1,
	1,
	3,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 30)
      goto label_23;
    blocks = (current_block [OBJECT_35]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_28])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_23)
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
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_27;
  Wrd11 = Wrd15;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd5.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_34]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_21)
  (Wrd11.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_copy_so_1c71d2185ec2f2b4 [30] =
  {
    { "copy_so_code_1", 16, copy_so_code_1 },
    { "copy_so_code_2", 16, copy_so_code_2 },
    { "copy_so_code_3", 2, copy_so_code_3 },
    { "copy_so_code_4", 5, copy_so_code_4 },
    { "copy_so_code_5", 1, copy_so_code_5 },
    { "copy_so_code_6", 2, copy_so_code_6 },
    { "copy_so_code_7", 4, copy_so_code_7 },
    { "copy_so_code_8", 4, copy_so_code_8 },
    { "copy_so_code_9", 5, copy_so_code_9 },
    { "copy_so_code_10", 11, copy_so_code_10 },
    { "copy_so_code_11", 16, copy_so_code_11 },
    { "copy_so_code_12", 3, copy_so_code_12 },
    { "copy_so_code_13", 15, copy_so_code_13 },
    { "copy_so_code_14", 3, copy_so_code_14 },
    { "copy_so_code_15", 5, copy_so_code_15 },
    { "copy_so_code_16", 7, copy_so_code_16 },
    { "copy_so_code_17", 8, copy_so_code_17 },
    { "copy_so_code_18", 6, copy_so_code_18 },
    { "copy_so_code_19", 6, copy_so_code_19 },
    { "copy_so_code_20", 8, copy_so_code_20 },
    { "copy_so_code_21", 1, copy_so_code_21 },
    { "copy_so_code_22", 6, copy_so_code_22 },
    { "copy_so_code_23", 4, copy_so_code_23 },
    { "copy_so_code_24", 6, copy_so_code_24 },
    { "copy_so_code_25", 15, copy_so_code_25 },
    { "copy_so_code_26", 14, copy_so_code_26 },
    { "copy_so_code_27", 1, copy_so_code_27 },
    { "copy_so_code_28", 4, copy_so_code_28 },
    { "copy_so_code_29", 4, copy_so_code_29 },
    { "copy_so_code_30", 1, copy_so_code_30 }
  };

int
decl_copy_so_1c71d2185ec2f2b4 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_copy_so_1c71d2185ec2f2b4);
  return (0);
}

DECLARE_COMPILED_CODE ("copy.so", 23, decl_copy_so_1c71d2185ec2f2b4, copy_so_1c71d2185ec2f2b4)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_copy_so_data_1c71d2185ec2f2b4 [4136] =
  "\x63\x33\x83\x09\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x0d\xb9\x0d"
  "\xba\x0d\xbb\x0d\xbc\x25\x0d\xbd\x0d\xbe\xb2\xb3\xb4\x24\x28\x0d"
  "\xbf\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x82\x88\x1d\x0d\x1c\xb2\xb3\xb4\x25\x0d\x1c\x0d\x1c\xb2\xb3"
  "\xb4\x24\x28\xb7\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d"
  "\xb0\x83\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x84\x88\x82\xc2\x1c\x80\x0d\x1c\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x08\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x86\x88\x0d\x24\x28\x0d\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\x1b\x82\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x83\x1b"
  "\x82\x1d\xb2\x25\xb2\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x84"
  "\x82\x83\x08\x1b\x85\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28\xb4\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x1b\x28\xb3"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x0c\x83\x81\x0c\x1b\x82\xb2\x24\x28\x1b\x28\x1b\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x82\xb2\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x24"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x82\x08\x1b\xb2\x24\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84\x83"
  "\x81\x1b\x82\x28\x0d\x1c\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x84\x83\x1b\x81\x28\x0d\x1c\x28\x1b\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x84\x83\x1b\x81\x28\x1b\x28\x0d\x1c\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x84\x83\x82\x1b\x81\x28\x1b\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x81"
  "\x82\x1b\x83\x28\x1b\x28\xb4\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x1b"
  "\x82\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x81\x82\x1b\x83\x28\x1b\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x86\x84\x85\x02\x81\x83\x1b\x82\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x84\x85"
  "\x81\x1b\x82\x0d\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x81\x1b\x83\x28\x1b\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x1b\x82\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x17\xb8"
  "\x88\xb0\x1b\x2a\x0d\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1c\x1b\xb5"
  "\x1b\xb6\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x17\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x17\xc3\x1b\x1b\x1b\x1b\xb1\xb4\xb3\xb2\x9e\x1b\x2a"
  "\x1b\x2a\xb7\x2a\x1b\x2a\x1e\x1e\x1e\x9e\x28\x0d\x26\x1b\x24\x28"
  "\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x02\x4e\x2f\x55\x73\x65\x72\x73\x2f\x63"
  "\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39"
  "\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d"
  "\x39\x2e\x32\x2f\x73\x72\x63\x2f\x73\x66\x2f\x2e\x2f\x63\x6f\x70"
  "\x79\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x02\x17\x63\x6f\x70"
  "\x79\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2f\x69\x6e\x74"
  "\x65\x72\x6e\x0b\x72\x6f\x6f\x74\x2d\x62\x6c\x6f\x63\x6b\x13\x63"
  "\x6f\x70\x79\x2f\x76\x61\x72\x69\x61\x62\x6c\x65\x2f\x66\x72\x65"
  "\x65\x12\x63\x6f\x70\x79\x2f\x64\x65\x63\x6c\x61\x72\x61\x74\x69"
  "\x6f\x6e\x73\x04\x19\x63\x6f\x70\x79\x2f\x64\x65\x63\x6c\x61\x72"
  "\x61\x74\x69\x6f\x6e\x73\x2f\x69\x6e\x74\x65\x72\x6e\x1a\x63\x6f"
  "\x70\x79\x2f\x76\x61\x72\x69\x61\x62\x6c\x65\x2f\x66\x72\x65\x65"
  "\x2f\x69\x6e\x74\x65\x72\x6e\x06\x04\x10\x67\x75\x61\x72\x61\x6e"
  "\x74\x65\x65\x2d\x62\x6c\x6f\x63\x6b\x05\x13\x73\x68\x61\x6c\x6c"
  "\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x09\x02\x11"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x6d\x61\x6b\x65"
  "\x0a\x05\x10\x63\x6f\x70\x79\x2f\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x0b\x05\x27\x22\x81\x83\x02\x26\x20\x81\x83\x02\x25\x1e"
  "\x81\x85\x02\x24\x1c\x81\x83\x02\x23\x1a\x81\x83\x02\x22\x18\x81"
  "\x85\x02\x21\x16\x81\x83\x02\x20\x14\x81\x83\x02\x1f\x12\x81\x85"
  "\x02\x1e\x10\x81\x83\x02\x1d\x0e\x81\x83\x02\x1c\x0c\x81\x83\x02"
  "\x1b\x0a\x81\x87\x02\x1a\x08\x81\x85\x02\x19\x06\x81\x85\x02\x18"
  "\x04\x84\x06\x21\x39\x0c\x02\x02\x17\x63\x6f\x70\x79\x2f\x65\x78"
  "\x70\x72\x65\x73\x73\x69\x6f\x6e\x2f\x65\x78\x74\x65\x72\x6e\x0d"
  "\x04\x19\x63\x6f\x70\x79\x2f\x64\x65\x63\x6c\x61\x72\x61\x74\x69"
  "\x6f\x6e\x73\x2f\x65\x78\x74\x65\x72\x6e\x0e\x1a\x63\x6f\x70\x79"
  "\x2f\x76\x61\x72\x69\x61\x62\x6c\x65\x2f\x66\x72\x65\x65\x2f\x65"
  "\x78\x74\x65\x72\x6e\x0f\x06\x04\x05\x09\x02\x0a\x05\x0b\x05\x37"
  "\x22\x81\x83\x02\x36\x20\x81\x83\x02\x35\x1e\x81\x85\x02\x34\x1c"
  "\x81\x83\x02\x33\x1a\x81\x83\x02\x32\x18\x81\x85\x02\x31\x16\x81"
  "\x83\x02\x30\x14\x81\x83\x02\x2f\x12\x81\x85\x02\x2e\x10\x81\x83"
  "\x02\x2d\x0e\x81\x83\x02\x2c\x0c\x81\x83\x02\x2b\x0a\x81\x87\x02"
  "\x2a\x08\x81\x85\x02\x29\x06\x81\x85\x02\x28\x04\x84\x06\x21\x39"
  "\x02\x04\x04\x6d\x61\x70\x10\x05\x0b\x03\x39\x06\x81\x85\x02\x38"
  "\x04\x85\x08\x05\x0d\x11\x02\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72"
  "\x65\x66\x12\x10\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x76\x65\x63"
  "\x74\x6f\x72\x13\x02\x3e\x0c\x81\x87\x02\x3d\x0a\x81\x89\x02\x3c"
  "\x08\x81\x87\x02\x3b\x06\x81\x87\x02\x3a\x04\x85\x08\x0b\x13\x14"
  "\x02\x3f\x04\x82\x02\x03\x15\x02\x05\x63\x6f\x6e\x73\x02\x06\x05"
  "\x6d\x61\x70\x2a\x02\x41\x06\x81\x89\x02\x40\x04\x85\x08\x05\x0d"
  "\x16\x02\x08\x04\x63\x64\x72\x13\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x2f\x6c\x6f\x6f\x6b\x75\x70\x17\x04\x13\x67\x75\x61"
  "\x72\x61\x6e\x74\x65\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x18"
  "\x04\x05\x61\x73\x73\x71\x03\x45\x0a\x81\x8b\x02\x44\x08\x81\x89"
  "\x02\x43\x06\x81\x89\x02\x42\x04\x86\x0a\x09\x13\x19\x02\x09\x12"
  "\x04\x10\x05\x11\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f"
  "\x62\x69\x6e\x64\x1a\x05\x12\x62\x6c\x6f\x63\x6b\x2f\x6c\x6f\x6f"
  "\x6b\x75\x70\x2d\x6e\x61\x6d\x65\x1b\x04\x49\x0a\x81\x87\x02\x48"
  "\x08\x81\x85\x02\x47\x06\x81\x87\x02\x46\x04\x85\x08\x09\x16\x1c"
  "\x02\x0a\x28\x56\x61\x72\x69\x61\x62\x6c\x65\x20\x6d\x69\x73\x73"
  "\x69\x6e\x67\x20\x64\x75\x72\x69\x6e\x67\x20\x63\x6f\x70\x79\x20"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x3a\x13\x69\x64\x65\x6e\x74"
  "\x69\x74\x79\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x1d\x02\x03"
  "\x18\x06\x17\x04\x06\x65\x72\x72\x6f\x72\x18\x04\x4e\x0c\x81\x83"
  "\x02\x4d\x0a\x81\x89\x02\x4c\x08\x81\x85\x02\x4b\x06\x81\x85\x02"
  "\x4a\x04\x83\x04\x0b\x18\x1e\x02\x0b\x12\x02\x02\x02\x05\x09\x02"
  "\x0a\x05\x0b\x05\x0f\x71\x75\x6f\x74\x61\x74\x69\x6f\x6e\x2f\x6d"
  "\x61\x6b\x65\x05\x59\x18\x81\x89\x02\x58\x16\x81\x87\x02\x57\x14"
  "\x81\x89\x02\x56\x12\x81\x85\x02\x55\x10\x81\x83\x02\x54\x0e\x81"
  "\x83\x02\x53\x0c\x81\x85\x02\x52\x0a\x81\x83\x02\x51\x08\x81\x83"
  "\x02\x50\x06\x81\x83\x02\x4f\x04\x83\x04\x17\x2c\x09\x02\x0c\x0c"
  "\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x1f\x12\x05\x0b\x62"
  "\x6c\x6f\x63\x6b\x2f\x6d\x61\x6b\x65\x04\x10\x05\x1a\x04\x14\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x2f\x6d\x61\x6b\x65\x26\x62\x69\x6e"
  "\x64\x21\x05\x03\x0a\x6c\x69\x73\x74\x2d\x63\x6f\x70\x79\x07\x69"
  "\x22\x81\x85\x02\x68\x20\x81\x87\x02\x67\x1e\x81\x87\x02\x66\x1c"
  "\x81\x8d\x02\x65\x1a\x81\x8d\x02\x64\x18\x81\x89\x02\x63\x16\x81"
  "\x85\x02\x62\x14\x81\x8f\x02\x61\x12\x81\x8d\x02\x60\x10\x81\x87"
  "\x02\x5f\x0e\x81\x85\x02\x5e\x0c\x81\x8b\x02\x5d\x0a\x81\x89\x02"
  "\x5c\x08\x81\x8d\x02\x5b\x06\x81\x87\x02\x5a\x04\x85\x08\x21\x38"
  "\x20\x02\x0d\x1d\x02\x06\x17\x03\x03\x6c\x08\x81\x83\x02\x6b\x06"
  "\x81\x89\x02\x6a\x04\x85\x08\x07\x11\x21\x02\x0e\x1f\x2f\x49\x6e"
  "\x74\x65\x67\x72\x61\x74\x69\x6f\x6e\x20\x72\x65\x71\x75\x69\x72"
  "\x65\x73\x20\x72\x65\x6e\x61\x6d\x69\x6e\x67\x20\x75\x6e\x73\x61"
  "\x66\x65\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x3a\x2a\x55\x6e\x61"
  "\x62\x6c\x65\x20\x74\x6f\x20\x66\x69\x6e\x64\x20\x66\x72\x65\x65"
  "\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x64\x75\x72\x69\x6e\x67"
  "\x20\x63\x6f\x70\x79\x3a\x12\x02\x05\x1b\x04\x18\x03\x0f\x73\x79"
  "\x6d\x62\x6f\x6c\x2d\x3e\x73\x74\x72\x69\x6e\x67\x03\x1a\x73\x74"
  "\x72\x69\x6e\x67\x2d\x3e\x75\x6e\x69\x6e\x74\x65\x72\x6e\x65\x64"
  "\x2d\x73\x79\x6d\x62\x6f\x6c\x05\x7b\x20\x81\x8b\x02\x7a\x1e\x81"
  "\x89\x02\x79\x1c\x81\x89\x02\x78\x1a\x81\x89\x02\x77\x18\x81\x89"
  "\x02\x76\x16\x81\x89\x02\x75\x14\x81\x89\x02\x74\x12\x81\x87\x02"
  "\x73\x10\x81\x89\x02\x72\x0e\x81\x89\x02\x71\x0c\x81\x89\x02\x70"
  "\x0a\x81\x87\x02\x6f\x08\x81\x85\x02\x6e\x06\x81\x83\x02\x6d\x04"
  "\x83\x04\x1f\x34\x1f\x02\x0f\x12\x02\x05\x1b\x02\x7e\x08\x81\x85"
  "\x02\x7d\x06\x81\x83\x02\x7c\x04\x83\x04\x07\x12\x22\x02\x10\x1d"
  "\x02\x05\x11\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x2f"
  "\x6d\x61\x70\x23\x06\x17\x03\x83\x01\x0c\x81\x83\x02\x82\x01\x0a"
  "\x81\x89\x02\x81\x01\x08\x81\x85\x02\x80\x01\x06\x81\x87\x02\x7f"
  "\x04\x85\x08\x0b\x16\x24\x02\x11\x12\x1d\x03\x05\x23\x05\x0b\x06"
  "\x17\x05\x1b\x05\x8a\x01\x10\x81\x85\x02\x89\x01\x0e\x81\x83\x02"
  "\x88\x01\x0c\x81\x83\x02\x87\x01\x0a\x81\x89\x02\x86\x01\x08\x81"
  "\x85\x02\x85\x01\x06\x81\x85\x02\x84\x01\x04\x85\x08\x0f\x22\x23"
  "\x02\x12\x12\x05\x0b\x63\x6f\x70\x79\x2f\x62\x6c\x6f\x63\x6b\x1d"
  "\x05\x0b\x06\x0c\x61\x63\x63\x65\x73\x73\x2f\x6d\x61\x6b\x65\x04"
  "\x92\x01\x12\x81\x8b\x02\x91\x01\x10\x81\x89\x02\x90\x01\x0e\x81"
  "\x8b\x02\x8f\x01\x0c\x81\x87\x02\x8e\x01\x0a\x81\x87\x02\x8d\x01"
  "\x08\x81\x87\x02\x8c\x01\x06\x81\x89\x02\x8b\x01\x04\x85\x08\x11"
  "\x20\x1b\x02\x13\x12\x05\x0e\x63\x6f\x70\x79\x2f\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x25\x05\x0b\x06\x10\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x2f\x6d\x61\x6b\x65\x04\x98\x01\x0e\x81\x8b\x02\x97"
  "\x01\x0c\x81\x8d\x02\x96\x01\x0a\x81\x89\x02\x95\x01\x08\x81\x8b"
  "\x02\x94\x01\x06\x81\x87\x02\x93\x01\x04\x85\x08\x0d\x1b\x26\x02"
  "\x14\x12\x05\x0b\x05\x11\x63\x6f\x70\x79\x2f\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x73\x27\x06\x12\x63\x6f\x6d\x62\x69\x6e\x61"
  "\x74\x69\x6f\x6e\x2f\x25\x6d\x61\x6b\x65\x04\x9e\x01\x0e\x81\x8b"
  "\x02\x9d\x01\x0c\x81\x8d\x02\x9c\x01\x0a\x81\x89\x02\x9b\x01\x08"
  "\x81\x8b\x02\x9a\x01\x06\x81\x87\x02\x99\x01\x04\x85\x08\x0d\x1b"
  "\x28\x02\x15\x12\x05\x0b\x06\x11\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x61\x6c\x2f\x6d\x61\x6b\x65\x03\xa6\x01\x12\x81\x8d\x02\xa5"
  "\x01\x10\x81\x8f\x02\xa4\x01\x0e\x81\x8b\x02\xa3\x01\x0c\x81\x8d"
  "\x02\xa2\x01\x0a\x81\x89\x02\xa1\x01\x08\x81\x8b\x02\xa0\x01\x06"
  "\x81\x87\x02\x9f\x01\x04\x85\x08\x11\x1e\x29\x02\x16\xa7\x01\x04"
  "\x85\x08\x03\x2a\x02\x17\x12\x05\x0b\x05\x05\x11\x64\x65\x63\x6c"
  "\x61\x72\x61\x74\x69\x6f\x6e\x2f\x6d\x61\x6b\x65\x04\xad\x01\x0e"
  "\x81\x89\x02\xac\x01\x0c\x81\x89\x02\xab\x01\x0a\x81\x8b\x02\xaa"
  "\x01\x08\x81\x87\x02\xa9\x01\x06\x81\x89\x02\xa8\x01\x04\x85\x08"
  "\x0d\x1b\x2b\x02\x18\x12\x05\x0b\x04\x0b\x64\x65\x6c\x61\x79\x2f"
  "\x6d\x61\x6b\x65\x03\xb1\x01\x0a\x81\x89\x02\xb0\x01\x08\x81\x87"
  "\x02\xaf\x01\x06\x81\x89\x02\xae\x01\x04\x85\x08\x09\x14\x2c\x02"
  "\x19\x12\x05\x0b\x05\x11\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f"
  "\x6e\x2f\x6d\x61\x6b\x65\x03\xb7\x01\x0e\x81\x89\x02\xb6\x01\x0c"
  "\x81\x89\x02\xb5\x01\x0a\x81\x8b\x02\xb4\x01\x08\x81\x87\x02\xb3"
  "\x01\x06\x81\x89\x02\xb2\x01\x04\x85\x08\x0d\x19\x2d\x02\x1a\x08"
  "\x12\x05\x1d\x03\x0d\x6d\x61\x6b\x65\x2d\x72\x65\x6e\x61\x6d\x65"
  "\x72\x2e\x05\x0b\x04\x10\x09\x0f\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2f\x6d\x61\x6b\x65\x06\xc6\x01\x20\x81\x95\x02\xc5\x01\x1e"
  "\x81\x91\x02\xc4\x01\x1c\x81\x93\x02\xc3\x01\x1a\x81\x93\x02\xc2"
  "\x01\x18\x81\x8f\x02\xc1\x01\x16\x81\x91\x02\xc0\x01\x14\x81\x8f"
  "\x02\xbf\x01\x12\x81\x91\x02\xbe\x01\x10\x81\x8d\x02\xbd\x01\x0e"
  "\x81\x89\x02\xbc\x01\x0c\x81\x87\x02\xbb\x01\x0a\x81\x87\x02\xba"
  "\x01\x08\x81\x87\x02\xb9\x01\x06\x81\x89\x02\xb8\x01\x04\x85\x08"
  "\x1f\x35\x2f\x02\x1b\x12\x18\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63"
  "\x6b\x2f\x76\x61\x6c\x75\x65\x2d\x6d\x61\x72\x6b\x65\x72\x02\x05"
  "\x1d\x04\x10\x05\x27\x05\x0b\x03\x2e\x07\x10\x6f\x70\x65\x6e\x2d"
  "\x62\x6c\x6f\x63\x6b\x2f\x6d\x61\x6b\x65\x07\xd4\x01\x1e\x81\x91"
  "\x02\xd3\x01\x1c\x81\x8d\x02\xd2\x01\x1a\x81\x8f\x02\xd1\x01\x18"
  "\x81\x8d\x02\xd0\x01\x16\x81\x85\x02\xcf\x01\x14\x81\x85\x02\xce"
  "\x01\x12\x81\x8f\x02\xcd\x01\x10\x81\x8b\x02\xcc\x01\x0e\x81\x8d"
  "\x02\xcb\x01\x0c\x81\x89\x02\xca\x01\x0a\x81\x87\x02\xc9\x01\x08"
  "\x81\x87\x02\xc8\x01\x06\x81\x89\x02\xc7\x01\x04\x85\x08\x1d\x35"
  "\x10\x02\x1c\x03\x0f\x63\x6f\x70\x79\x2f\x71\x75\x6f\x74\x61\x74"
  "\x69\x6f\x6e\x30\x02\xd5\x01\x04\x85\x08\x03\x31\x02\x1d\x12\x05"
  "\x25\x05\x0f\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2f\x6d\x61\x6b"
  "\x65\x03\xd9\x01\x0a\x81\x89\x02\xd8\x01\x08\x81\x87\x02\xd7\x01"
  "\x06\x81\x89\x02\xd6\x01\x04\x85\x08\x09\x14\x32\x02\x1e\x12\x05"
  "\x27\x04\x0e\x73\x65\x71\x75\x65\x6e\x63\x65\x2f\x6d\x61\x6b\x65"
  "\x03\xdd\x01\x0a\x81\x89\x02\xdc\x01\x08\x81\x87\x02\xdb\x01\x06"
  "\x81\x89\x02\xda\x01\x04\x85\x08\x09\x14\x12\x02\x1f\x3d\x41\x74"
  "\x74\x65\x6d\x70\x74\x20\x74\x6f\x20\x69\x6e\x74\x65\x67\x72\x61"
  "\x74\x65\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x20\x63\x6f"
  "\x6e\x74\x61\x69\x6e\x69\x6e\x67\x20\x28\x54\x48\x45\x2d\x45\x4e"
  "\x56\x49\x52\x4f\x4e\x4d\x45\x4e\x54\x29\x03\x18\x02\xde\x01\x04"
  "\x85\x08\x03\x0a\x18\x1f\x18\x04\x10\x74\x68\x65\x2d\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x09\x73\x65\x71\x75\x65\x6e\x63"
  "\x65\x12\x04\x0a\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x32\x04\x0a"
  "\x71\x75\x6f\x74\x61\x74\x69\x6f\x6e\x31\x04\x0b\x6f\x70\x65\x6e"
  "\x2d\x62\x6c\x6f\x63\x6b\x10\x04\x0a\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2f\x04\x0c\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e"
  "\x2d\x04\x06\x64\x65\x6c\x61\x79\x2c\x04\x0c\x64\x65\x63\x6c\x61"
  "\x72\x61\x74\x69\x6f\x6e\x2b\x04\x09\x63\x6f\x6e\x73\x74\x61\x6e"
  "\x74\x2a\x04\x0c\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x29"
  "\x04\x0c\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x28\x04\x0b"
  "\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x26\x04\x07\x61\x63\x63"
  "\x65\x73\x73\x1b\x04\x13\x64\x65\x66\x69\x6e\x65\x2d\x6d\x65\x74"
  "\x68\x6f\x64\x2f\x63\x6f\x70\x79\x32\x0e\x0f\x25\x1d\x30\x2e\x13"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x72\x65\x62\x69"
  "\x6e\x64\x17\x1a\x0a\x0d\x23\x04\x24\x04\x22\x04\x1f\x04\x21\x04"
  "\x20\x04\x09\x04\x1e\x04\x1c\x04\x19\x04\x16\x04\x15\x04\x0d\x11"
  "\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x13\x0b\x27\x0d\x14\x04\x11\x04\x04\x0c\x04\x05\x10\x64\x65\x66"
  "\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x13\x02\x02"
  "\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2f\x6d\x61\x6b\x65"
  "\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x76\x65\x63\x74\x6f\x72"
  "\x03\x1f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2f\x6d\x61\x6b"
  "\x65\x2d\x6d\x65\x74\x68\x6f\x64\x2d\x64\x65\x66\x69\x6e\x65\x72"
  "\x04\x32\x04\x17\x30\x80\x80\x04\x16\x2e\x81\x81\x02\x15\x2c\x81"
  "\x81\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x83\x02\x12\x26\x81\x83"
  "\x02\x11\x24\x81\x83\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x83\x02"
  "\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02\x0b"
  "\x18\x81\x83\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x83\x02\x08\x12"
  "\x81\x83\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x85\x02\x05\x0c\x81"
  "\x83\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x87\x02\x02\x06\x81\x83"
  "\x02\x01\x04\x81\x83\x02\x2f\x63";

SCHEME_OBJECT *
copy_so_data_1c71d2185ec2f2b4 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_copy_so_data_1c71d2185ec2f2b4 [0]))), (sizeof (prog_copy_so_data_1c71d2185ec2f2b4)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_30]));
}

DECLARE_COMPILED_DATA_NS ("copy.so", copy_so_data_1c71d2185ec2f2b4)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("copy.so", "0603ba4894f88647")
