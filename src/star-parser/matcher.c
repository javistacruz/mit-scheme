/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:25-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_5 3
#define LABEL_1_7 5
#define LABEL_1_8 7
#define LABEL_1_9 9
#define LABEL_1_4 11
#define LABEL_1_10 13
#define LABEL_1_11 15
#define LABEL_1_12 17
#define LABEL_1_14 19
#define LABEL_1_15 21
#define LABEL_1_17 23
#define LABEL_1_6 25
#define ENVIRONMENT_LABEL_1_3 49
#define DEBUGGING_LABEL_1_2 48
#define OBJECT_1_10 47
#define OBJECT_1_9 46
#define OBJECT_1_8 45
#define OBJECT_1_7 44
#define OBJECT_1_6 43
#define OBJECT_1_5 42
#define OBJECT_1_4 41
#define OBJECT_1_3 40
#define OBJECT_1_2 39
#define OBJECT_1_1 38
#define OBJECT_1_0 37
#define EXECUTE_CACHE_1_20 27
#define EXECUTE_CACHE_1_19 29
#define EXECUTE_CACHE_1_18 31
#define EXECUTE_CACHE_1_16 33
#define EXECUTE_CACHE_1_13 35
#define FREE_REFERENCES_LABEL_1_0 26
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd27;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd44;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd85;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd72;
  machine_word Wrd62;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd114;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd105;
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
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_1_7);
      goto label_28;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_1_4);
      goto preprocess_matcher_expression_22;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_1_14);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_17;

    case 11:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (preprocess_matcher_expression_30)
DEFLABEL (preprocess_matcher_expression_22)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_47;

DEFLABEL (label_46)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_1_1]);
  (Wrd39.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd39.Lng))))
    goto label_45;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd36.Obj));
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd12.Obj) == (Wrd14.Obj))
    goto label_44;

DEFLABEL (label_43)
  (Wrd15.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd25.Lng)))
    goto label_32;

DEFLABEL (label_31)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_32)
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_34;
  (Wrd17.Obj) = (current_block [OBJECT_1_5]);
  goto label_33;

DEFLABEL (label_34)
  (Wrd17.Obj) = (current_block [OBJECT_1_4]);

DEFLABEL (label_33)
DEFLABEL (label_42)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd17.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_40;

DEFLABEL (label_39)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 30)
    goto label_38;
  if ((Wrd10.uLng) == 2)
    goto label_36;
  (Wrd13.Obj) = (current_block [OBJECT_1_10]);
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (label_36)
  (Wrd20.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_1_9]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd16.Obj);

DEFLABEL (label_37)
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Rsp [0]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (label_38)
  (Wrd29.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_1_8]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  goto label_37;

DEFLABEL (label_40)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (label_44)
  Rsp = (& (Rsp [2]));
  goto label_40;

DEFLABEL (label_45)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_44;

DEFLABEL (label_47)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd48.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_59;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_58)
  (Wrd87.Obj) = (current_block [OBJECT_1_1]);
  (Wrd90.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd90.Lng))))
    goto label_57;
  (Wrd59.uLng) = (OBJECT_DATUM (Wrd87.Obj));
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd59.Obj) == (Wrd61.Obj))
    goto label_56;

DEFLABEL (label_55)
  (Wrd62.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd72.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd72.Lng))))
    goto label_31;
  (Wrd66.uLng) = (OBJECT_DATUM (Wrd62.Obj));
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd66.Obj) == (Wrd68.Obj))
    goto label_49;
  (Wrd64.Obj) = (current_block [OBJECT_1_5]);
  goto label_48;

DEFLABEL (label_49)
  (Wrd64.Obj) = (current_block [OBJECT_1_4]);

DEFLABEL (label_48)
DEFLABEL (label_54)
  Rsp = (& (Rsp [3]));
  if ((Wrd64.Obj) == ((SCHEME_OBJECT) 0))
    goto label_46;

DEFLABEL (label_53)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd80.Obj) = (Rsp [1]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_52;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [1]);
  (* (--Rsp)) = (Wrd79.Obj);

DEFLABEL (label_51)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd109.Obj) = (Rsp [1]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd110.uLng) == 1))
    goto label_50;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd108.Obj) = ((Wrd107.pObj) [0]);
  (* (--Rsp)) = (Wrd108.Obj);
  goto label_41;

DEFLABEL (label_50)
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_52)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_6]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_56)
  Rsp = (& (Rsp [2]));
  goto label_53;

DEFLABEL (label_57)
  (Wrd92.Obj) = (Rsp [0]);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_56;

DEFLABEL (label_59)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_60)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_40;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_61)
  (Wrd7.Obj) = (current_block [OBJECT_1_10]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  goto label_53;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define ENVIRONMENT_LABEL_2_3 12
#define DEBUGGING_LABEL_2_2 11
#define EXECUTE_CACHE_2_8 7
#define EXECUTE_CACHE_2_7 9
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto preprocess_matcher_expressions_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (preprocess_matcher_expressions_4)
DEFLABEL (preprocess_matcher_expressions_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_9 5
#define LABEL_3_5 7
#define LABEL_3_6 9
#define TAG_3_7 3
#define ENVIRONMENT_LABEL_3_3 20
#define DEBUGGING_LABEL_3_2 19
#define EXECUTE_CACHE_3_11 11
#define EXECUTE_CACHE_3_10 13
#define EXECUTE_CACHE_3_8 15
#define FREE_REFERENCE_3_0 18
#define FREE_REFERENCES_LABEL_3_0 10
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
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
      goto define_matcher_preprocessor_3;

    case 1:
      current_block = (Rpc - LABEL_3_9);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_6);
      goto lambda_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_matcher_preprocessor_7)
DEFLABEL (define_matcher_preprocessor_3)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 1))
    goto label_9;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_6])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd24 = Wrd23;
  (Wrd25.Obj) = (Rsp [3]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_11;
  Wrd12 = Wrd16;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_9])), (Wrd13.pObj));

DEFLABEL (label_5)
  (Wrd12.Obj) = Rvl;
  goto label_10;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_3_6);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_9 9
#define LABEL_4_8 11
#define LABEL_4_12 13
#define LABEL_4_13 15
#define LABEL_4_14 17
#define LABEL_4_15 19
#define LABEL_4_16 21
#define LABEL_4_17 23
#define LABEL_4_11 25
#define LABEL_4_19 27
#define LABEL_4_20 29
#define LABEL_4_21 31
#define LABEL_4_22 33
#define LABEL_4_23 35
#define LABEL_4_24 37
#define LABEL_4_25 39
#define LABEL_4_26 41
#define ENVIRONMENT_LABEL_4_3 58
#define DEBUGGING_LABEL_4_2 57
#define OBJECT_4_7 56
#define OBJECT_4_6 55
#define OBJECT_4_5 54
#define OBJECT_4_4 53
#define OBJECT_4_3 52
#define OBJECT_4_2 51
#define OBJECT_4_1 50
#define OBJECT_4_0 49
#define EXECUTE_CACHE_4_18 43
#define EXECUTE_CACHE_4_10 45
#define EXECUTE_CACHE_4_6 47
#define FREE_REFERENCES_LABEL_4_0 42
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd87;
  machine_word Wrd88;
  machine_word Wrd80;
  machine_word Wrd74;
  machine_word Wrd75;
  machine_word Wrd67;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd98;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd69;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd81;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_4_4);
      goto lambda_33;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto label_35;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_4_12);
      goto label_41;

    case 6:
      current_block = (Rpc - LABEL_4_13);
      goto label_36;

    case 7:
      current_block = (Rpc - LABEL_4_14);
      goto label_37;

    case 8:
      current_block = (Rpc - LABEL_4_15);
      goto label_38;

    case 9:
      current_block = (Rpc - LABEL_4_16);
      goto label_39;

    case 10:
      current_block = (Rpc - LABEL_4_17);
      goto label_40;

    case 11:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_4_19);
      goto label_42;

    case 13:
      current_block = (Rpc - LABEL_4_20);
      goto label_43;

    case 14:
      current_block = (Rpc - LABEL_4_21);
      goto label_44;

    case 15:
      current_block = (Rpc - LABEL_4_22);
      goto label_45;

    case 16:
      current_block = (Rpc - LABEL_4_23);
      goto label_46;

    case 17:
      current_block = (Rpc - LABEL_4_24);
      goto label_47;

    case 18:
      current_block = (Rpc - LABEL_4_25);
      goto label_48;

    case 19:
      current_block = (Rpc - LABEL_4_26);
      goto label_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_51)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_83;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_82)
  (Wrd17.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_61;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_60)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_59;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_58)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_57;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_56)
  (Wrd33.Obj) = (current_block [OBJECT_4_6]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd41.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_55;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_54)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_53;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd55.Obj) = ((Wrd56.pObj) [0]);

DEFLABEL (label_52)
  (Wrd65.Obj) = (current_block [OBJECT_4_6]);
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd65.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (Wrd69.Obj) = (current_block [OBJECT_4_7]);
  (* (Rhp++)) = (Wrd69.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (Wrd70.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (Wrd78.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd78.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd76.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd76.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_5]), 1);

DEFLABEL (label_40)
  (Wrd55.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_39)
  (Wrd46.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_5]), 1);

DEFLABEL (label_38)
  (Wrd23.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_37)
  (Wrd16.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_36)
  (Wrd7.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_62)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd85.Obj) = (Rsp [3]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 1))
    goto label_81;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [1]);
  (* (--Rsp)) = (Wrd84.Obj);

DEFLABEL (label_80)
  (Wrd91.Obj) = (current_block [OBJECT_4_4]);
  (* (--Rsp)) = (Wrd91.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_63;
  (Wrd98.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd98.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (label_63)
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_79;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_78)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_77;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_76)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_75;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_74)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_73;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd32.Obj) = ((Wrd33.pObj) [0]);

DEFLABEL (label_72)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_71;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_70)
  (Wrd46.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Wrd53.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (Wrd57.Obj) = (current_block [OBJECT_4_6]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd61.Obj) = (Rsp [3]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_69;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd58.Obj) = ((Wrd60.pObj) [1]);

DEFLABEL (label_68)
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_67;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd67.Obj) = ((Wrd68.pObj) [0]);

DEFLABEL (label_66)
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_65;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd74.Obj) = ((Wrd75.pObj) [0]);

DEFLABEL (label_64)
  (Wrd84.Obj) = (current_block [OBJECT_4_6]);
  (* (Rhp++)) = (Wrd74.Obj);
  (* (Rhp++)) = (Wrd84.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (Wrd88.Obj) = (current_block [OBJECT_4_7]);
  (* (Rhp++)) = (Wrd88.Obj);
  (* (Rhp++)) = (Wrd81.Obj);
  (Wrd87.pObj) = (& (Rhp [-2]));
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd87.pObj)));
  (Wrd89.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd89.Obj);
  (Wrd92.pObj) = (& (Rhp [-2]));
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd92.pObj)));
  (Wrd97.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd97.Obj);
  (* (Rhp++)) = (Wrd90.Obj);
  (Wrd95.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd95.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_26]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_5]), 1);

DEFLABEL (label_49)
  (Wrd74.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_5]), 1);

DEFLABEL (label_48)
  (Wrd67.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_47)
  (Wrd58.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_46)
  (Wrd39.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_22]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_5]), 1);

DEFLABEL (label_45)
  (Wrd32.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_44)
  (Wrd23.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_19]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_42)
  (Wrd7.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_82;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define LABEL_5_9 7
#define LABEL_5_8 9
#define ENVIRONMENT_LABEL_5_3 18
#define DEBUGGING_LABEL_5_2 17
#define OBJECT_5_1 16
#define OBJECT_5_0 15
#define EXECUTE_CACHE_5_10 11
#define EXECUTE_CACHE_5_7 13
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_5_4);
      goto define__matcher_expander_4;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_5_9);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define__matcher_expander_8)
DEFLABEL (define__matcher_expander_4)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd9.uLng) == 1)
    goto label_10;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (label_10)
  if (! ((Wrd9.uLng) == 1))
    goto label_12;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_12)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_7 7
#define ENVIRONMENT_LABEL_6_3 16
#define DEBUGGING_LABEL_6_2 15
#define EXECUTE_CACHE_6_8 9
#define EXECUTE_CACHE_6_6 11
#define FREE_REFERENCE_6_0 14
#define FREE_REFERENCES_LABEL_6_0 8
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_6_4);
      goto matcher_preprocessor_2;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (matcher_preprocessor_6)
DEFLABEL (matcher_preprocessor_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;
  Wrd9 = Wrd13;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd15.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_7])), (Wrd10.pObj));

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 8
#define DEBUGGING_LABEL_7_2 7
#define OBJECT_7_2 6
#define OBJECT_7_1 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_7_4);
      goto lambda_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_7_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_7_2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 8
#define DEBUGGING_LABEL_8_2 7
#define OBJECT_8_2 6
#define OBJECT_8_1 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_8_4);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd8.Obj) = (current_block [OBJECT_8_0]);
  (Wrd9.Obj) = (current_block [OBJECT_8_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_8_2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 8
#define DEBUGGING_LABEL_9_2 7
#define OBJECT_9_2 6
#define OBJECT_9_1 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_9_4);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd8.Obj) = (current_block [OBJECT_9_0]);
  (Wrd9.Obj) = (current_block [OBJECT_9_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_9_2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 8
#define DEBUGGING_LABEL_10_2 7
#define OBJECT_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_10_4);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd8.Obj) = (current_block [OBJECT_10_0]);
  (Wrd9.Obj) = (current_block [OBJECT_10_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_10_2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 9
#define DEBUGGING_LABEL_11_2 8
#define OBJECT_11_3 7
#define OBJECT_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_11_4);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_11_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_11_1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_11_2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_11_3]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 11
#define DEBUGGING_LABEL_12_2 10
#define OBJECT_12_3 9
#define OBJECT_12_2 8
#define OBJECT_12_1 7
#define OBJECT_12_0 6
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto lambda_9;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_13)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_15;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_15;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd17.Lng) - (Wrd19.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_15;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_12_0]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_12_1]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd44.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Wrd48.Obj) = (current_block [OBJECT_12_2]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd56.Obj) = (current_block [OBJECT_12_3]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_11)
  (Wrd10.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define ENVIRONMENT_LABEL_13_3 18
#define DEBUGGING_LABEL_13_2 17
#define OBJECT_13_3 16
#define OBJECT_13_2 15
#define OBJECT_13_1 14
#define OBJECT_13_0 13
#define EXECUTE_CACHE_13_8 9
#define EXECUTE_CACHE_13_6 11
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_13_4);
      goto lambda_14;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_17)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_19;
  Wrd10 = Wrd8;
  goto label_18;

DEFLABEL (label_19)
  (Wrd10.Obj) = Rvl;

DEFLABEL (label_18)
DEFLABEL (label_23)
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_13_0]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_13_1]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd32.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  goto label_20;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_20)
DEFLABEL (label_22)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_13_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_13_2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_13_3]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_6 5
#define LABEL_14_8 7
#define LABEL_14_5 9
#define LABEL_14_10 11
#define LABEL_14_7 13
#define ENVIRONMENT_LABEL_14_3 22
#define DEBUGGING_LABEL_14_2 21
#define OBJECT_14_1 20
#define OBJECT_14_0 19
#define EXECUTE_CACHE_14_11 15
#define EXECUTE_CACHE_14_9 17
#define FREE_REFERENCES_LABEL_14_0 14
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_14_4);
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_14_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_14_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_14_10);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_11)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_17;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_16)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_15;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_13;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_12)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_8 7
#define LABEL_15_6 9
#define ENVIRONMENT_LABEL_15_3 18
#define DEBUGGING_LABEL_15_2 17
#define OBJECT_15_1 16
#define OBJECT_15_0 15
#define EXECUTE_CACHE_15_9 11
#define EXECUTE_CACHE_15_7 13
#define FREE_REFERENCES_LABEL_15_0 10
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_15_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_15_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_15_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Wrd9.Obj) = (current_block [OBJECT_15_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_10;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_9)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_6)
  (Wrd10.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_9 7
#define LABEL_16_10 9
#define LABEL_16_11 11
#define LABEL_16_6 13
#define LABEL_16_13 15
#define LABEL_16_14 17
#define LABEL_16_8 19
#define LABEL_16_16 21
#define LABEL_16_17 23
#define LABEL_16_18 25
#define ENVIRONMENT_LABEL_16_3 38
#define DEBUGGING_LABEL_16_2 37
#define OBJECT_16_3 36
#define OBJECT_16_2 35
#define OBJECT_16_1 34
#define OBJECT_16_0 33
#define EXECUTE_CACHE_16_15 27
#define EXECUTE_CACHE_16_12 29
#define EXECUTE_CACHE_16_7 31
#define FREE_REFERENCES_LABEL_16_0 26
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_16_4);
      goto lambda_13;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_16_9);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_16_10);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_16_11);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_16_6);
      goto lambda_2;

    case 6:
      current_block = (Rpc - LABEL_16_13);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_16_14);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_16_8);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_16_16);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_16_17);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_16_18);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_24)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_37;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_36)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_35;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_34)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_33;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_32)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16_8);
  (Wrd9.Obj) = (current_block [OBJECT_16_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_31;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_30)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_29;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_28)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_27;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [0]);

DEFLABEL (label_26)
  (Wrd39.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_18]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_22)
  (Wrd30.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_17]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_21)
  (Wrd19.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_16]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_20)
  (Wrd10.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_16)
  (Wrd19.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_15)
  (Wrd10.Obj) = Rvl;
  goto label_36;

DEFLABEL (lambda_25)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_16_6);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_41;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_40)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_39;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_38)
  (Rsp [0]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_15]));

DEFLABEL (label_39)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_19)
  (Wrd14.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 10
#define DEBUGGING_LABEL_17_2 9
#define EXECUTE_CACHE_17_6 7
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define LABEL_18_8 9
#define LABEL_18_9 11
#define ENVIRONMENT_LABEL_18_3 25
#define DEBUGGING_LABEL_18_2 24
#define OBJECT_18_8 23
#define OBJECT_18_7 22
#define OBJECT_18_6 21
#define OBJECT_18_5 20
#define OBJECT_18_4 19
#define OBJECT_18_3 18
#define OBJECT_18_2 17
#define OBJECT_18_1 16
#define OBJECT_18_0 15
#define EXECUTE_CACHE_18_6 13
#define FREE_REFERENCES_LABEL_18_0 12
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_18_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_16)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 30)
    goto label_19;

DEFLABEL (label_18)
  Rvl = (Rsp [1]);

DEFLABEL (label_17)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_19)
  if (! ((Wrd6.uLng) == 30))
    goto label_28;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_27)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_18_1])))
    goto label_18;
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 30))
    goto label_26;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd31.Lng))))
    goto label_26;
  (Wrd25.uLng) = ((unsigned long) (((unsigned char *) (Wrd29.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd21.Obj) = (MAKE_OBJECT (2, (Wrd25.uLng)));

DEFLABEL (label_25)
  (Wrd42.Obj) = (current_block [OBJECT_18_4]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_24;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [0]);

DEFLABEL (label_23)
  if ((Wrd43.Obj) == (current_block [OBJECT_18_6]))
    goto label_21;
  (Wrd53.Obj) = (current_block [OBJECT_18_8]);
  goto label_20;

DEFLABEL (label_21)
  (Wrd53.Obj) = (current_block [OBJECT_18_7]);

DEFLABEL (label_20)
DEFLABEL (label_22)
  (Wrd54.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  goto label_17;

DEFLABEL (label_24)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_5]), 1);

DEFLABEL (label_14)
  (Wrd43.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (current_block [OBJECT_18_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_3]), 2);

DEFLABEL (label_13)
  (Wrd21.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define LABEL_19_10 9
#define LABEL_19_8 11
#define LABEL_19_13 13
#define LABEL_19_15 15
#define LABEL_19_11 17
#define ENVIRONMENT_LABEL_19_3 36
#define DEBUGGING_LABEL_19_2 35
#define OBJECT_19_5 34
#define OBJECT_19_4 33
#define OBJECT_19_3 32
#define OBJECT_19_2 31
#define OBJECT_19_1 30
#define OBJECT_19_0 29
#define EXECUTE_CACHE_19_16 19
#define EXECUTE_CACHE_19_14 21
#define EXECUTE_CACHE_19_12 23
#define EXECUTE_CACHE_19_9 25
#define EXECUTE_CACHE_19_6 27
#define FREE_REFERENCES_LABEL_19_0 18
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_19_4);
      goto lambda_15;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_12;

    case 3:
      current_block = (Rpc - LABEL_19_10);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_19_13);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_19_15);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_19_11);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_19)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 30)
    goto label_20;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd17.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_19_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_19_4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_19_13);
  (Wrd8.Obj) = (current_block [OBJECT_19_5]);
  (Wrd9.Obj) = (current_block [OBJECT_19_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_19_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_19_15);
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd18.Obj);

DEFLABEL (label_23)
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_16]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_19_7);
  (Wrd9.Obj) = (current_block [OBJECT_19_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_22;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_21)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_17)
  (Wrd10.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_19_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_19_11);
  (Wrd9.Obj) = (current_block [OBJECT_19_1]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 10
#define DEBUGGING_LABEL_20_2 9
#define EXECUTE_CACHE_20_6 7
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_9 7
#define LABEL_21_10 9
#define LABEL_21_11 11
#define LABEL_21_6 13
#define LABEL_21_13 15
#define LABEL_21_14 17
#define LABEL_21_8 19
#define LABEL_21_16 21
#define LABEL_21_17 23
#define LABEL_21_18 25
#define ENVIRONMENT_LABEL_21_3 37
#define DEBUGGING_LABEL_21_2 36
#define OBJECT_21_2 35
#define OBJECT_21_1 34
#define OBJECT_21_0 33
#define EXECUTE_CACHE_21_15 27
#define EXECUTE_CACHE_21_12 29
#define EXECUTE_CACHE_21_7 31
#define FREE_REFERENCES_LABEL_21_0 26
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_21_4);
      goto lambda_13;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_21_9);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_21_10);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_21_11);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_21_6);
      goto lambda_2;

    case 6:
      current_block = (Rpc - LABEL_21_13);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_21_14);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_21_8);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_21_16);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_21_17);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_21_18);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_24)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_37;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_36)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_35;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_34)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_33;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_32)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_21_8);
  (Wrd9.Obj) = (current_block [OBJECT_21_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_31;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_30)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_29;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_28)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_27;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [0]);

DEFLABEL (label_26)
  (Wrd39.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_18]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_22)
  (Wrd30.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_17]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_21)
  (Wrd19.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_16]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_20)
  (Wrd10.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_16)
  (Wrd19.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_15)
  (Wrd10.Obj) = Rvl;
  goto label_36;

DEFLABEL (lambda_25)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_21_6);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_41;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_40)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_39;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_38)
  (Rsp [0]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_15]));

DEFLABEL (label_39)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_19)
  (Wrd14.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 10
#define DEBUGGING_LABEL_22_2 9
#define EXECUTE_CACHE_22_6 7
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_6 5
#define LABEL_23_5 7
#define LABEL_23_9 9
#define LABEL_23_10 11
#define ENVIRONMENT_LABEL_23_3 23
#define DEBUGGING_LABEL_23_2 22
#define OBJECT_23_2 21
#define OBJECT_23_1 20
#define OBJECT_23_0 19
#define EXECUTE_CACHE_23_11 13
#define EXECUTE_CACHE_23_8 15
#define EXECUTE_CACHE_23_7 17
#define FREE_REFERENCES_LABEL_23_0 12
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd17;
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
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_23_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_23_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_23_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_17;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_16)
  (Wrd17.Obj) = (current_block [OBJECT_23_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (Wrd23.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (label_11)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_15;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_14)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_13;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_11]));

DEFLABEL (label_13)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 1);

DEFLABEL (label_8)
  (Wrd16.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define LABEL_24_8 9
#define TAG_24_9 3
#define LABEL_24_11 11
#define TAG_24_12 4
#define LABEL_24_13 13
#define LABEL_24_14 15
#define LABEL_24_17 17
#define LABEL_24_18 19
#define ENVIRONMENT_LABEL_24_3 37
#define DEBUGGING_LABEL_24_2 36
#define OBJECT_24_0 35
#define EXECUTE_CACHE_24_20 21
#define EXECUTE_CACHE_24_19 23
#define EXECUTE_CACHE_24_16 25
#define EXECUTE_CACHE_24_15 27
#define EXECUTE_CACHE_24_10 29
#define EXECUTE_CACHE_24_7 31
#define FREE_REFERENCE_24_0 34
#define FREE_REFERENCES_LABEL_24_0 20
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_24_4);
      goto generate_matcher_code_7;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto lambda_6;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto lambda_13;

    case 4:
      current_block = (Rpc - LABEL_24_11);
      goto lambda_14;

    case 5:
      current_block = (Rpc - LABEL_24_13);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_24_14);
      goto lambda_3;

    case 7:
      current_block = (Rpc - LABEL_24_17);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_24_18);
      goto lambda_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_matcher_code_11)
DEFLABEL (generate_matcher_code_7)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_18;
  Wrd8 = Wrd12;

DEFLABEL (label_17)
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (Rsp [3]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_5])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_17;

DEFLABEL (lambda_12)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_24_6);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_8])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [0]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_24_8);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_11])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (Wrd10.Obj) = ((Wrd13.pObj) [3]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_14]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_24_13);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_17]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_19]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_17);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_20]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_24_11);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [4]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_16]));

DEFLABEL (lambda_15)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_24_14);
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

DEFLABEL (lambda_16)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_24_18);
  Rvl = (current_block [OBJECT_24_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_5 3
#define LABEL_25_6 5
#define LABEL_25_7 7
#define LABEL_25_8 9
#define LABEL_25_10 11
#define LABEL_25_11 13
#define LABEL_25_12 15
#define LABEL_25_14 17
#define LABEL_25_4 19
#define LABEL_25_15 21
#define LABEL_25_16 23
#define LABEL_25_17 25
#define LABEL_25_21 27
#define LABEL_25_22 29
#define LABEL_25_23 31
#define LABEL_25_24 33
#define LABEL_25_26 35
#define LABEL_25_19 37
#define LABEL_25_27 39
#define LABEL_25_28 41
#define LABEL_25_30 43
#define LABEL_25_31 45
#define LABEL_25_29 47
#define ENVIRONMENT_LABEL_25_3 79
#define DEBUGGING_LABEL_25_2 78
#define OBJECT_25_11 77
#define OBJECT_25_10 76
#define OBJECT_25_9 75
#define OBJECT_25_8 74
#define OBJECT_25_7 73
#define OBJECT_25_6 72
#define OBJECT_25_5 71
#define OBJECT_25_4 70
#define OBJECT_25_3 69
#define OBJECT_25_2 68
#define OBJECT_25_1 67
#define OBJECT_25_0 66
#define EXECUTE_CACHE_25_33 49
#define EXECUTE_CACHE_25_32 51
#define EXECUTE_CACHE_25_25 53
#define EXECUTE_CACHE_25_20 55
#define EXECUTE_CACHE_25_18 57
#define EXECUTE_CACHE_25_13 59
#define EXECUTE_CACHE_25_9 61
#define FREE_REFERENCE_25_1 64
#define FREE_REFERENCE_25_0 65
#define FREE_REFERENCES_LABEL_25_0 48
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd71;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd70;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd12;
  machine_word Wrd118;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd109;
  machine_word Wrd95;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd103;
  machine_word Wrd93;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd88;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd79;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd138;
  machine_word Wrd135;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd160;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd161;
  machine_word Wrd159;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd155;
  machine_word Wrd154;
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
      current_block = (Rpc - LABEL_25_5);
      goto continuation_24;

    case 1:
      current_block = (Rpc - LABEL_25_6);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto label_47;

    case 3:
      current_block = (Rpc - LABEL_25_8);
      goto label_48;

    case 4:
      current_block = (Rpc - LABEL_25_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_25_11);
      goto continuation_22;

    case 6:
      current_block = (Rpc - LABEL_25_12);
      goto label_42;

    case 7:
      current_block = (Rpc - LABEL_25_14);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_25_4);
      goto compile_matcher_expression_33;

    case 9:
      current_block = (Rpc - LABEL_25_15);
      goto label_39;

    case 10:
      current_block = (Rpc - LABEL_25_16);
      goto label_41;

    case 11:
      current_block = (Rpc - LABEL_25_17);
      goto label_40;

    case 12:
      current_block = (Rpc - LABEL_25_21);
      goto label_35;

    case 13:
      current_block = (Rpc - LABEL_25_22);
      goto label_36;

    case 14:
      current_block = (Rpc - LABEL_25_23);
      goto label_38;

    case 15:
      current_block = (Rpc - LABEL_25_24);
      goto label_37;

    case 16:
      current_block = (Rpc - LABEL_25_26);
      goto continuation_14;

    case 17:
      current_block = (Rpc - LABEL_25_19);
      goto continuation_9;

    case 18:
      current_block = (Rpc - LABEL_25_27);
      goto label_46;

    case 19:
      current_block = (Rpc - LABEL_25_28);
      goto label_43;

    case 20:
      current_block = (Rpc - LABEL_25_30);
      goto label_44;

    case 21:
      current_block = (Rpc - LABEL_25_31);
      goto label_45;

    case 22:
      current_block = (Rpc - LABEL_25_29);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_matcher_expression_50)
DEFLABEL (compile_matcher_expression_33)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd9.uLng) == 1)
    goto label_79;

DEFLABEL (label_78)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_77)
  (Wrd12.Obj) = (Rsp [0]);
  if (! ((Wrd12.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_65;
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_19]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd76.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd76.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_25_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;

DEFLABEL (label_59)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_58;
  Wrd8 = Wrd12;

DEFLABEL (label_57)
  (Wrd17.Obj) = (current_block [OBJECT_25_11]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_29]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_26]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 1)
    goto label_52;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_51)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_32]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_25_29);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd10.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd11.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_33]));

DEFLABEL (label_52)
  if (! ((Wrd26.uLng) == 1))
    goto label_56;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_55)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_54;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [0]);

DEFLABEL (label_53)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd39.Obj);
  goto label_51;

DEFLABEL (label_54)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_31]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_45)
  (Wrd39.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_30]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_7]), 1);

DEFLABEL (label_44)
  (Wrd29.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_28])), (Wrd9.pObj));

DEFLABEL (label_43)
  (Wrd8.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 1)
    goto label_62;

DEFLABEL (label_61)
  (Wrd48.Obj) = (current_block [OBJECT_25_10]);
  (Rsp [4]) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd49.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_13]));

DEFLABEL (label_62)
  if (! ((Wrd47.uLng) == 1))
    goto label_64;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd51.Obj) = ((Wrd53.pObj) [0]);

DEFLABEL (label_63)
  if ((Wrd51.Obj) == (current_block [OBJECT_25_9]))
    goto label_59;
  goto label_61;

DEFLABEL (label_64)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_27]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_46)
  (Wrd51.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_65)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_76;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_75)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_74;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_73)
  (Rsp [1]) = (Wrd23.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_68;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_11]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_72;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [1]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_71)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_25]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_25_11);
  (Wrd130.Obj) = Rvl;
  (Wrd131.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd131.uLng) == 26))
    goto label_70;
  (Wrd132.Obj) = (Rsp [0]);
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if (! ((Wrd133.uLng) == 26))
    goto label_70;
  if (Rvl == (Wrd132.Obj))
    goto label_68;

DEFLABEL (label_69)
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd142.Obj);
  (Wrd143.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd143.Obj);
  (Wrd144.Obj) = (current_block [OBJECT_25_1]);
  (* (--Rsp)) = (Wrd144.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_13]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_25_5);

DEFLABEL (label_68)
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_67;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_66)
  (Wrd58.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  (Wrd62.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd62.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd61.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd61.pObj)));
  (Wrd66.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (Wrd70.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd70.Obj);
  (* (Rhp++)) = (Wrd63.Obj);
  (Wrd69.pObj) = (& (Rhp [-2]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd69.pObj)));
  (Rsp [6]) = (Wrd67.Obj);
  (Wrd71.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd71.Obj);
  Rsp = (& (Rsp [5]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_8]), 2);

DEFLABEL (label_67)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_23]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_7]), 1);

DEFLABEL (label_38)
  (Wrd46.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_70)
  (Wrd135.Obj) = (Rsp [0]);
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_12]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_42)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  goto label_68;

DEFLABEL (label_72)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_24]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_7]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_22]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_7]), 1);

DEFLABEL (label_36)
  (Wrd23.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_21]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_79)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd79.Obj);
  if (! ((Wrd9.uLng) == 1))
    goto label_95;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [0]);
  (* (--Rsp)) = (Wrd82.Obj);

DEFLABEL (label_94)
  (Wrd120.Obj) = (current_block [OBJECT_25_2]);
  (Wrd123.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd123.Lng))))
    goto label_93;
  (Wrd90.uLng) = (OBJECT_DATUM (Wrd120.Obj));
  (Wrd91.Obj) = (Rsp [0]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if ((Wrd90.Obj) == (Wrd92.Obj))
    goto label_92;

DEFLABEL (label_91)
  (Wrd93.Obj) = (current_block [OBJECT_25_4]);
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd103.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd103.Lng)))
    goto label_80;
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_3]), 2);

DEFLABEL (label_80)
  (Wrd97.uLng) = (OBJECT_DATUM (Wrd93.Obj));
  (Wrd98.Obj) = (Rsp [1]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if ((Wrd97.Obj) == (Wrd99.Obj))
    goto label_82;
  (Wrd95.Obj) = (current_block [OBJECT_25_6]);
  goto label_81;

DEFLABEL (label_82)
  (Wrd95.Obj) = (current_block [OBJECT_25_5]);

DEFLABEL (label_81)
DEFLABEL (label_90)
  Rsp = (& (Rsp [3]));
  if ((Wrd95.Obj) == ((SCHEME_OBJECT) 0))
    goto label_78;

DEFLABEL (label_89)
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd113.Obj) = (Rsp [2]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 1))
    goto label_88;
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd112.Obj) = ((Wrd111.pObj) [1]);
  (* (--Rsp)) = (Wrd112.Obj);

DEFLABEL (label_87)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_25_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_78;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd154.Obj) = (Rsp [2]);
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if (! ((Wrd155.uLng) == 1))
    goto label_86;
  (Wrd152.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd153.Obj) = ((Wrd152.pObj) [0]);
  (* (--Rsp)) = (Wrd153.Obj);

DEFLABEL (label_85)
  (Wrd161.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd164.Obj) = ((Wrd161.pObj) [0]);
  (Wrd165.uLng) = (OBJECT_TYPE (Wrd164.Obj));
  if ((Wrd165.uLng) == 50)
    goto label_84;
  Wrd160 = Wrd164;

DEFLABEL (label_83)
  (* (--Rsp)) = (Wrd160.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_14);
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_84)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_8])), (Wrd161.pObj));

DEFLABEL (label_48)
  (Wrd160.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd159.Obj);
  (* (--Rsp)) = (Wrd154.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_17]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_7]), 1);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (label_92)
  Rsp = (& (Rsp [2]));
  goto label_89;

DEFLABEL (label_93)
  (Wrd125.Obj) = (Rsp [0]);
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_16]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_3]), 2);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_91;
  goto label_92;

DEFLABEL (label_95)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_15]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_94;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_25_26);
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_25_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_78;
  goto label_89;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_7 7
#define ENVIRONMENT_LABEL_26_3 16
#define DEBUGGING_LABEL_26_2 15
#define OBJECT_26_1 14
#define OBJECT_26_0 13
#define EXECUTE_CACHE_26_8 9
#define EXECUTE_CACHE_26_6 11
#define FREE_REFERENCES_LABEL_26_0 8
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_26_4);
      goto wrap_external_matcher_5;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wrap_external_matcher_8)
DEFLABEL (wrap_external_matcher_5)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (Wrd9.Obj) = (current_block [OBJECT_26_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_7);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_26_1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_6 5
#define LABEL_27_5 7
#define LABEL_27_9 9
#define LABEL_27_10 11
#define LABEL_27_11 13
#define LABEL_27_12 15
#define LABEL_27_13 17
#define LABEL_27_14 19
#define LABEL_27_15 21
#define LABEL_27_16 23
#define LABEL_27_17 25
#define LABEL_27_19 27
#define LABEL_27_21 29
#define LABEL_27_20 31
#define ENVIRONMENT_LABEL_27_3 55
#define DEBUGGING_LABEL_27_2 54
#define OBJECT_27_10 53
#define OBJECT_27_9 52
#define OBJECT_27_8 51
#define OBJECT_27_7 50
#define OBJECT_27_6 49
#define OBJECT_27_5 48
#define OBJECT_27_4 47
#define OBJECT_27_3 46
#define OBJECT_27_2 45
#define OBJECT_27_1 44
#define OBJECT_27_0 43
#define EXECUTE_CACHE_27_23 33
#define EXECUTE_CACHE_27_22 35
#define EXECUTE_CACHE_27_18 37
#define EXECUTE_CACHE_27_8 39
#define EXECUTE_CACHE_27_7 41
#define FREE_REFERENCES_LABEL_27_0 32
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd52;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd58;
  machine_word Wrd8;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd74;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_27_4);
      goto lambda_26;

    case 1:
      current_block = (Rpc - LABEL_27_6);
      goto label_28;

    case 2:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_27_9);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_27_10);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_27_11);
      goto label_31;

    case 6:
      current_block = (Rpc - LABEL_27_12);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_27_13);
      goto label_33;

    case 8:
      current_block = (Rpc - LABEL_27_14);
      goto label_34;

    case 9:
      current_block = (Rpc - LABEL_27_15);
      goto label_35;

    case 10:
      current_block = (Rpc - LABEL_27_16);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_27_17);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_27_19);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_27_21);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_27_20);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_38)
DEFLABEL (lambda_26)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_59;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_58)
  (Wrd17.Obj) = (current_block [OBJECT_27_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_39;
  (Wrd74.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd74.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

DEFLABEL (label_39)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_57;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_56)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_55;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_54)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_53;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_52)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_51;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd32.Obj) = ((Wrd33.pObj) [0]);

DEFLABEL (label_50)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_49;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [1]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_48)
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_47;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_46)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_45;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd55.Obj) = ((Wrd56.pObj) [0]);

DEFLABEL (label_44)
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_43;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_42)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_17]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = (current_block [OBJECT_27_3]);
  (* (--Rsp)) = (Wrd73.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_27_17);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_27_4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_18]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_27_19);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_20]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_21]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_22]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_27_21);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_41;
  (Wrd58.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_23]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_27_20);
  (Wrd34.Obj) = Rvl;

DEFLABEL (label_40)
  (Wrd8.Obj) = (current_block [OBJECT_27_5]);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_27_6]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_27_7]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_27_8]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_27_9]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd41.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd46.Obj) = (current_block [OBJECT_27_10]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Wrd54.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd34.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_40;

DEFLABEL (label_43)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_16]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_15]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_35)
  (Wrd55.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_14]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

DEFLABEL (label_34)
  (Wrd46.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_13]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_32)
  (Wrd32.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

DEFLABEL (label_31)
  (Wrd23.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

DEFLABEL (label_29)
  (Wrd7.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_58;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_6 5
#define LABEL_28_5 7
#define ENVIRONMENT_LABEL_28_3 14
#define DEBUGGING_LABEL_28_2 13
#define EXECUTE_CACHE_28_7 9
#define FREE_REFERENCE_28_0 12
#define FREE_REFERENCES_LABEL_28_0 8
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_28_4);
      goto define_matcher_compiler_2;

    case 1:
      current_block = (Rpc - LABEL_28_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_matcher_compiler_6)
DEFLABEL (define_matcher_compiler_2)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_8;
  Wrd14 = Wrd18;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_6])), (Wrd15.pObj));

DEFLABEL (label_4)
  (Wrd14.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_6 5
#define LABEL_29_5 7
#define LABEL_29_9 9
#define LABEL_29_11 11
#define LABEL_29_14 13
#define LABEL_29_15 15
#define LABEL_29_12 17
#define LABEL_29_17 19
#define LABEL_29_18 21
#define LABEL_29_13 23
#define LABEL_29_19 25
#define LABEL_29_21 27
#define LABEL_29_22 29
#define LABEL_29_20 31
#define ENVIRONMENT_LABEL_29_3 55
#define DEBUGGING_LABEL_29_2 54
#define OBJECT_29_8 53
#define OBJECT_29_7 52
#define OBJECT_29_6 51
#define OBJECT_29_5 50
#define OBJECT_29_4 49
#define OBJECT_29_3 48
#define OBJECT_29_2 47
#define OBJECT_29_1 46
#define OBJECT_29_0 45
#define EXECUTE_CACHE_29_24 33
#define EXECUTE_CACHE_29_23 35
#define EXECUTE_CACHE_29_16 37
#define EXECUTE_CACHE_29_10 39
#define EXECUTE_CACHE_29_8 41
#define EXECUTE_CACHE_29_7 43
#define FREE_REFERENCES_LABEL_29_0 32
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd51;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_29_4);
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_29_6);
      goto label_24;

    case 2:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_29_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_29_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_29_14);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_29_15);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_29_12);
      goto continuation_18;

    case 8:
      current_block = (Rpc - LABEL_29_17);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_29_18);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_29_13);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_29_19);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_29_21);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_29_22);
      goto label_31;

    case 14:
      current_block = (Rpc - LABEL_29_20);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_33)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_50;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_49)
  (Wrd17.Obj) = (current_block [OBJECT_29_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_34;
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (label_34)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_29_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_48;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_47)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_46;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_16]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_29_13);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_44;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_43)
  (Wrd16.Obj) = (current_block [OBJECT_29_6]);
  (Wrd17.Obj) = (current_block [OBJECT_29_7]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_29_8]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd28.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_20]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (Rsp [5]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_42;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_41)
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_40;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [1]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_29_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_24]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_29_12);
  (Wrd9.Obj) = (current_block [OBJECT_29_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_38;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_37)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_36;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_35)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_18]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_5]), 1);

DEFLABEL (label_28)
  (Wrd19.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_17]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 1);

DEFLABEL (label_27)
  (Wrd10.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_22]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_21]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 1);

DEFLABEL (label_30)
  (Wrd36.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_19]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_5]), 1);

DEFLABEL (label_29)
  (Wrd6.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_15]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_14]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 1);

DEFLABEL (label_25)
  (Wrd11.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_49;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_7 7
#define ENVIRONMENT_LABEL_30_3 18
#define DEBUGGING_LABEL_30_2 17
#define OBJECT_30_1 16
#define OBJECT_30_0 15
#define EXECUTE_CACHE_30_8 9
#define EXECUTE_CACHE_30_6 11
#define FREE_REFERENCE_30_0 14
#define FREE_REFERENCES_LABEL_30_0 8
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_30_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_30_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Wrd9.Obj) = (current_block [OBJECT_30_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_10;
  Wrd11 = Wrd15;

DEFLABEL (label_9)
  (Wrd17.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_30_1]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd25.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd26.Obj);
  (Rsp [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_7])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_7 7
#define ENVIRONMENT_LABEL_31_3 18
#define DEBUGGING_LABEL_31_2 17
#define OBJECT_31_1 16
#define OBJECT_31_0 15
#define EXECUTE_CACHE_31_8 9
#define EXECUTE_CACHE_31_6 11
#define FREE_REFERENCE_31_0 14
#define FREE_REFERENCES_LABEL_31_0 8
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_31_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (Wrd9.Obj) = (current_block [OBJECT_31_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_10;
  Wrd11 = Wrd15;

DEFLABEL (label_9)
  (Wrd17.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_31_1]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd25.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd26.Obj);
  (Rsp [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_8]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_7])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_7 7
#define ENVIRONMENT_LABEL_32_3 18
#define DEBUGGING_LABEL_32_2 17
#define OBJECT_32_1 16
#define OBJECT_32_0 15
#define EXECUTE_CACHE_32_8 9
#define EXECUTE_CACHE_32_6 11
#define FREE_REFERENCE_32_0 14
#define FREE_REFERENCES_LABEL_32_0 8
#define NUMBER_OF_LINKER_SECTIONS_32_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_32_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Wrd9.Obj) = (current_block [OBJECT_32_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_10;
  Wrd11 = Wrd15;

DEFLABEL (label_9)
  (Wrd17.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_32_1]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd25.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd26.Obj);
  (Rsp [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_8]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_7])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_7 7
#define ENVIRONMENT_LABEL_33_3 18
#define DEBUGGING_LABEL_33_2 17
#define OBJECT_33_1 16
#define OBJECT_33_0 15
#define EXECUTE_CACHE_33_8 9
#define EXECUTE_CACHE_33_6 11
#define FREE_REFERENCE_33_0 14
#define FREE_REFERENCES_LABEL_33_0 8
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_33_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_33_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Wrd9.Obj) = (current_block [OBJECT_33_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_10;
  Wrd11 = Wrd15;

DEFLABEL (label_9)
  (Wrd17.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_33_1]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd25.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd26.Obj);
  (Rsp [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_7])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_7 7
#define ENVIRONMENT_LABEL_34_3 18
#define DEBUGGING_LABEL_34_2 17
#define OBJECT_34_1 16
#define OBJECT_34_0 15
#define EXECUTE_CACHE_34_8 9
#define EXECUTE_CACHE_34_6 11
#define FREE_REFERENCE_34_0 14
#define FREE_REFERENCES_LABEL_34_0 8
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_34_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_34_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (Wrd9.Obj) = (current_block [OBJECT_34_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_10;
  Wrd11 = Wrd15;

DEFLABEL (label_9)
  (Wrd17.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_34_1]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd25.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd26.Obj);
  (Rsp [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_7])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_7 7
#define ENVIRONMENT_LABEL_35_3 18
#define DEBUGGING_LABEL_35_2 17
#define OBJECT_35_1 16
#define OBJECT_35_0 15
#define EXECUTE_CACHE_35_8 9
#define EXECUTE_CACHE_35_6 11
#define FREE_REFERENCE_35_0 14
#define FREE_REFERENCES_LABEL_35_0 8
#define NUMBER_OF_LINKER_SECTIONS_35_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_35_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (Wrd9.Obj) = (current_block [OBJECT_35_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_10;
  Wrd11 = Wrd15;

DEFLABEL (label_9)
  (Wrd17.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_35_1]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd25.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd26.Obj);
  (Rsp [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_7])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_7 7
#define ENVIRONMENT_LABEL_36_3 18
#define DEBUGGING_LABEL_36_2 17
#define OBJECT_36_1 16
#define OBJECT_36_0 15
#define EXECUTE_CACHE_36_8 9
#define EXECUTE_CACHE_36_6 11
#define FREE_REFERENCE_36_0 14
#define FREE_REFERENCES_LABEL_36_0 8
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_36_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (Wrd9.Obj) = (current_block [OBJECT_36_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_10;
  Wrd11 = Wrd15;

DEFLABEL (label_9)
  (Wrd17.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_36_1]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd25.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd26.Obj);
  (Rsp [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_7])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define ENVIRONMENT_LABEL_37_3 15
#define DEBUGGING_LABEL_37_2 14
#define OBJECT_37_2 13
#define OBJECT_37_1 12
#define OBJECT_37_0 11
#define EXECUTE_CACHE_37_6 7
#define FREE_REFERENCE_37_0 10
#define FREE_REFERENCES_LABEL_37_0 6
#define NUMBER_OF_LINKER_SECTIONS_37_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_37_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_10;
  Wrd8 = Wrd12;

DEFLABEL (label_9)
  (Wrd17.Obj) = (current_block [OBJECT_37_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_37_1]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_37_2]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Rsp [1]) = (Wrd26.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_5])), (Wrd9.pObj));

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_7 7
#define ENVIRONMENT_LABEL_38_3 17
#define DEBUGGING_LABEL_38_2 16
#define OBJECT_38_2 15
#define OBJECT_38_1 14
#define OBJECT_38_0 13
#define EXECUTE_CACHE_38_6 9
#define FREE_REFERENCE_38_0 12
#define FREE_REFERENCES_LABEL_38_0 8
#define NUMBER_OF_LINKER_SECTIONS_38_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_38_4);
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_38_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (Wrd9.Obj) = (current_block [OBJECT_38_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_11;
  Wrd11 = Wrd15;

DEFLABEL (label_10)
  (Wrd20.Obj) = (current_block [OBJECT_38_0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_38_1]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd25.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_38_2]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_7])), (Wrd12.pObj));

DEFLABEL (label_7)
  (Wrd11.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_5 3
#define LABEL_39_4 5
#define LABEL_39_7 7
#define ENVIRONMENT_LABEL_39_3 16
#define DEBUGGING_LABEL_39_2 15
#define OBJECT_39_1 14
#define OBJECT_39_0 13
#define EXECUTE_CACHE_39_8 9
#define EXECUTE_CACHE_39_6 11
#define FREE_REFERENCES_LABEL_39_0 8
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd12;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_8;

    case 1:
      current_block = (Rpc - LABEL_39_4);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_14)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  if (! ((Wrd8.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_15;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (label_15)
  Wrd12 = Wrd8;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_19)
  (Wrd16.Obj) = (current_block [OBJECT_39_0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [6]);
  (Wrd24.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (* (--Rsp)) = (Wrd27.Obj);
  goto label_16;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_16)
DEFLABEL (label_18)
  (Wrd30.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_39_7);
  (Wrd9.Obj) = (current_block [OBJECT_39_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_39_1]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd22.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (Wrd12.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define TAG_40_6 1
#define LABEL_40_8 7
#define LABEL_40_15 9
#define LABEL_40_9 11
#define TAG_40_10 4
#define LABEL_40_17 13
#define LABEL_40_11 15
#define LABEL_40_12 17
#define TAG_40_13 7
#define LABEL_40_19 19
#define ENVIRONMENT_LABEL_40_3 32
#define DEBUGGING_LABEL_40_2 31
#define OBJECT_40_1 30
#define OBJECT_40_0 29
#define EXECUTE_CACHE_40_18 21
#define EXECUTE_CACHE_40_16 23
#define EXECUTE_CACHE_40_14 25
#define EXECUTE_CACHE_40_7 27
#define FREE_REFERENCES_LABEL_40_0 20
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_40_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto loop_10;

    case 2:
      current_block = (Rpc - LABEL_40_8);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_40_15);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_40_9);
      goto lambda_21;

    case 5:
      current_block = (Rpc - LABEL_40_17);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_40_11);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_40_12);
      goto lambda_22;

    case 8:
      current_block = (Rpc - LABEL_40_19);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_19)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_23;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_7]));

DEFLABEL (label_23)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_5])));
  Rhp += 2;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  Wrd20 = Wrd22;
  (Wrd21.Obj) = (Rsp [4]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [3]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd23.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd14.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_10;

DEFLABEL (loop_20)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_40_5);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_28;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_27)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_24;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_9])));
  Rhp += 4;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  Wrd41 = Wrd34;
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [2]);
  ((Wrd41.pObj) [2]) = (Wrd44.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  ((Wrd41.pObj) [3]) = (Wrd40.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  ((Wrd41.pObj) [4]) = (Wrd38.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  ((Wrd41.pObj) [5]) = (Wrd36.Obj);
  (Rsp [2]) = (Wrd33.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_11]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd49.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_12])));
  Rhp += 2;
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd49.pObj)));
  Wrd52 = Wrd49;
  ((Wrd52.pObj) [2]) = (Wrd42.Obj);
  ((Wrd52.pObj) [3]) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_40_11);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_18]));

DEFLABEL (label_24)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_26;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_25)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [3]);
  (Rsp [2]) = (Wrd24.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd28.Obj);
  (Wrd29.Obj) = ((Wrd26.pObj) [2]);
  (Rsp [4]) = (Wrd29.Obj);
  (Rsp [1]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_16]));

DEFLABEL (label_26)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_15]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 1);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_27;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_40_9);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = ((Wrd7.pObj) [5]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_30;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_29)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [2]);
  (Rsp [4]) = (Wrd24.Obj);
  (Wrd27.Obj) = ((Wrd26.pObj) [3]);
  (Rsp [3]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_16]));

DEFLABEL (label_30)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_17]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_40_12);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_32;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_31)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  goto loop_10;

DEFLABEL (label_32)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_19]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define TAG_41_6 1
#define LABEL_41_8 7
#define LABEL_41_12 9
#define LABEL_41_9 11
#define TAG_41_10 4
#define LABEL_41_14 13
#define LABEL_41_15 15
#define TAG_41_16 6
#define LABEL_41_21 17
#define LABEL_41_18 19
#define TAG_41_19 8
#define LABEL_41_22 21
#define ENVIRONMENT_LABEL_41_3 36
#define DEBUGGING_LABEL_41_2 35
#define OBJECT_41_1 34
#define OBJECT_41_0 33
#define EXECUTE_CACHE_41_20 23
#define EXECUTE_CACHE_41_17 25
#define EXECUTE_CACHE_41_13 27
#define EXECUTE_CACHE_41_11 29
#define EXECUTE_CACHE_41_7 31
#define FREE_REFERENCES_LABEL_41_0 22
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd10;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_41_4);
      goto lambda_13;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto loop_11;

    case 2:
      current_block = (Rpc - LABEL_41_8);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_41_12);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_41_9);
      goto lambda_22;

    case 5:
      current_block = (Rpc - LABEL_41_14);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_41_15);
      goto lambda_23;

    case 7:
      current_block = (Rpc - LABEL_41_21);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_41_18);
      goto lambda_24;

    case 9:
      current_block = (Rpc - LABEL_41_22);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_20)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_25;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_7]));

DEFLABEL (label_25)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_5])));
  Rhp += 3;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  Wrd21 = Wrd23;
  (Wrd22.Obj) = (Rsp [4]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  ((Wrd21.pObj) [3]) = (Wrd19.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  ((Wrd21.pObj) [4]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd24.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_11;

DEFLABEL (loop_21)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_41_5);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_30;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_29)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_26;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_9])));
  Rhp += 4;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  Wrd45 = Wrd36;
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [2]);
  ((Wrd45.pObj) [2]) = (Wrd48.Obj);
  (Wrd44.Obj) = ((Wrd47.pObj) [4]);
  ((Wrd45.pObj) [3]) = (Wrd44.Obj);
  ((Wrd45.pObj) [4]) = (Wrd46.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  ((Wrd45.pObj) [5]) = (Wrd38.Obj);
  (Wrd49.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd49.Obj);
  (Rsp [2]) = (Wrd35.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_11]));

DEFLABEL (label_26)
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_28;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_27)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [3]);
  (Rsp [3]) = (Wrd25.Obj);
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  (Rsp [4]) = (Wrd28.Obj);
  (Wrd31.Obj) = ((Wrd27.pObj) [4]);
  (Rsp [2]) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_13]));

DEFLABEL (label_28)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_12]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 1);

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_29;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_41_9);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_15])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd16 = Wrd9;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [4]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd18.pObj) [5]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_17]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_41_14);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_18])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd18 = Wrd7;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd20.pObj) [3]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd20.pObj) [5]);
  ((Wrd18.pObj) [4]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [5]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_20]));

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_41_15);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_32;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_31)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = ((Wrd21.pObj) [4]);
  (Rsp [2]) = (Wrd23.Obj);
  goto loop_11;

DEFLABEL (label_32)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_21]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_41_18);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [4]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_34;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_33)
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Wrd29.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd29.Obj);
  (Rsp [4]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_13]));

DEFLABEL (label_34)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_22]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_7 7
#define LABEL_42_9 9
#define LABEL_42_10 11
#define TAG_42_11 4
#define LABEL_42_13 13
#define LABEL_42_15 15
#define LABEL_42_16 17
#define TAG_42_17 7
#define LABEL_42_19 19
#define TAG_42_20 8
#define ENVIRONMENT_LABEL_42_3 40
#define DEBUGGING_LABEL_42_2 39
#define OBJECT_42_1 38
#define OBJECT_42_0 37
#define EXECUTE_CACHE_42_23 21
#define EXECUTE_CACHE_42_22 23
#define EXECUTE_CACHE_42_21 25
#define EXECUTE_CACHE_42_18 27
#define EXECUTE_CACHE_42_14 29
#define EXECUTE_CACHE_42_12 31
#define EXECUTE_CACHE_42_8 33
#define EXECUTE_CACHE_42_6 35
#define FREE_REFERENCES_LABEL_42_0 20
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_42_4);
      goto lambda_15;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_42_9);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_42_10);
      goto lambda_19;

    case 5:
      current_block = (Rpc - LABEL_42_13);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_42_15);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_42_16);
      goto lambda_20;

    case 8:
      current_block = (Rpc - LABEL_42_19);
      goto lambda_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_18)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_10])));
  Rhp += 5;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd18 = Wrd9;
  (Wrd19.Obj) = (Rsp [7]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd18.pObj) [4]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [5]) = (Wrd13.Obj);
  ((Wrd18.pObj) [6]) = Rvl;
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_42_9);
  (Wrd9.Obj) = (current_block [OBJECT_42_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_42_13);
  (Wrd9.Obj) = (current_block [OBJECT_42_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd25.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_42_1]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_42_10);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_16])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [4]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd16.pObj) [5]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_42_15);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_19])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd17 = Wrd8;
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  ((Wrd17.pObj) [2]) = (Wrd20.Obj);
  (Wrd16.Obj) = ((Wrd19.pObj) [3]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  (Wrd12.Obj) = ((Wrd19.pObj) [6]);
  ((Wrd17.pObj) [4]) = (Wrd12.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_21]));

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_42_16);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_22]));

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_42_19);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (Wrd15.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd15.Obj);
  (Rsp [4]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_23]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define ENVIRONMENT_LABEL_43_3 13
#define DEBUGGING_LABEL_43_2 12
#define OBJECT_43_0 11
#define EXECUTE_CACHE_43_7 7
#define EXECUTE_CACHE_43_6 9
#define FREE_REFERENCES_LABEL_43_0 6
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd27;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_43_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_8;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) > 4L)
    goto label_7;

DEFLABEL (label_6)
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Rsp [5]) = (Wrd16.Obj);
  (Rsp [3]) = (Wrd14.Obj);
  (Rsp [0]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (label_7)
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Rsp [5]) = (Wrd22.Obj);
  (Rsp [3]) = (Wrd20.Obj);
  (Rsp [0]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_7]));

DEFLABEL (label_8)
  (Wrd24.Obj) = (current_block [OBJECT_43_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define TAG_44_6 1
#define LABEL_44_7 7
#define LABEL_44_9 9
#define TAG_44_10 3
#define LABEL_44_11 11
#define LABEL_44_12 13
#define TAG_44_13 5
#define LABEL_44_17 15
#define ENVIRONMENT_LABEL_44_3 26
#define DEBUGGING_LABEL_44_2 25
#define EXECUTE_CACHE_44_16 17
#define EXECUTE_CACHE_44_15 19
#define EXECUTE_CACHE_44_14 21
#define EXECUTE_CACHE_44_8 23
#define FREE_REFERENCES_LABEL_44_0 16
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd41;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_44_4);
      goto open_code_n_n_8;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto loop_6;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_44_9);
      goto lambda_15;

    case 4:
      current_block = (Rpc - LABEL_44_11);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_44_12);
      goto lambda_16;

    case 6:
      current_block = (Rpc - LABEL_44_17);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_code_n_n_13)
DEFLABEL (open_code_n_n_8)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_5])));
  Rhp += 3;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  Wrd18 = Wrd20;
  (Wrd19.Obj) = (Rsp [6]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  ((Wrd18.pObj) [3]) = (Wrd16.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [4]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_6;

DEFLABEL (loop_14)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_44_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_19;
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd41.Lng) > 0)
    goto label_18;

DEFLABEL (label_17)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [3]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_8]));

DEFLABEL (label_18)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_9])));
  Rhp += 4;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd27 = Wrd18;
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [2]);
  ((Wrd27.pObj) [2]) = (Wrd30.Obj);
  (Wrd26.Obj) = ((Wrd29.pObj) [4]);
  ((Wrd27.pObj) [3]) = (Wrd26.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  ((Wrd27.pObj) [4]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  ((Wrd27.pObj) [5]) = (Wrd20.Obj);
  (Rsp [2]) = (Wrd17.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd35.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_12])));
  Rhp += 2;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd35.pObj)));
  Wrd38 = Wrd35;
  ((Wrd38.pObj) [2]) = (Wrd28.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  ((Wrd38.pObj) [3]) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_44_11);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_16]));

DEFLABEL (label_19)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_44_9);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [3]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_15]));

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_44_12);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_21;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd19.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_21;
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_20)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  goto loop_6;

DEFLABEL (label_21)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_7 7
#define LABEL_45_9 9
#define LABEL_45_11 11
#define LABEL_45_13 13
#define LABEL_45_14 15
#define LABEL_45_15 17
#define TAG_45_16 7
#define LABEL_45_18 19
#define LABEL_45_20 21
#define TAG_45_21 9
#define ENVIRONMENT_LABEL_45_3 44
#define DEBUGGING_LABEL_45_2 43
#define OBJECT_45_5 42
#define OBJECT_45_4 41
#define OBJECT_45_3 40
#define OBJECT_45_2 39
#define OBJECT_45_1 38
#define OBJECT_45_0 37
#define EXECUTE_CACHE_45_22 23
#define EXECUTE_CACHE_45_19 25
#define EXECUTE_CACHE_45_17 27
#define EXECUTE_CACHE_45_12 29
#define EXECUTE_CACHE_45_10 31
#define EXECUTE_CACHE_45_8 33
#define EXECUTE_CACHE_45_6 35
#define FREE_REFERENCES_LABEL_45_0 22
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_45_4);
      goto close_code_n_n_31;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_45_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_45_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_45_11);
      goto continuation_22;

    case 5:
      current_block = (Rpc - LABEL_45_13);
      goto continuation_21;

    case 6:
      current_block = (Rpc - LABEL_45_14);
      goto continuation_20;

    case 7:
      current_block = (Rpc - LABEL_45_15);
      goto lambda_35;

    case 8:
      current_block = (Rpc - LABEL_45_18);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_45_20);
      goto lambda_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_code_n_n_34)
DEFLABEL (close_code_n_n_31)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_45_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_12]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_45_11);
  (Wrd9.Obj) = (current_block [OBJECT_45_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_15])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd20 = Wrd17;
  (Wrd21.Obj) = (Rsp [4]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_17]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_45_14);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_20])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [11]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  ((Wrd11.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_22]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_45_13);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_45_1]);
  (Wrd14.Obj) = (current_block [OBJECT_45_0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_45_2]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_45_3]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_18]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_45_18);
  (Wrd9.Obj) = (current_block [OBJECT_45_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd37.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd42.Obj) = (current_block [OBJECT_45_5]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_45_15);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (current_block [OBJECT_45_1]);
  (Wrd9.Obj) = (current_block [OBJECT_45_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_45_4]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd23.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd34.Obj) = ((Wrd14.pObj) [3]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_45_20);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [4]) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd8.pObj) [4]);
  (Rsp [3]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define ENVIRONMENT_LABEL_46_3 13
#define DEBUGGING_LABEL_46_2 12
#define OBJECT_46_0 11
#define EXECUTE_CACHE_46_7 7
#define EXECUTE_CACHE_46_6 9
#define FREE_REFERENCES_LABEL_46_0 6
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd27;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_46_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_8;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) > 4L)
    goto label_7;

DEFLABEL (label_6)
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Rsp [5]) = (Wrd16.Obj);
  (Rsp [3]) = (Wrd14.Obj);
  (Rsp [0]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (label_7)
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Rsp [5]) = (Wrd22.Obj);
  (Rsp [3]) = (Wrd20.Obj);
  (Rsp [0]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

DEFLABEL (label_8)
  (Wrd24.Obj) = (current_block [OBJECT_46_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_6 7
#define TAG_47_7 2
#define LABEL_47_9 9
#define TAG_47_10 3
#define LABEL_47_13 11
#define TAG_47_14 4
#define LABEL_47_15 13
#define LABEL_47_16 15
#define TAG_47_17 6
#define LABEL_47_18 17
#define LABEL_47_19 19
#define TAG_47_20 8
#define LABEL_47_23 21
#define ENVIRONMENT_LABEL_47_3 34
#define DEBUGGING_LABEL_47_2 33
#define EXECUTE_CACHE_47_22 23
#define EXECUTE_CACHE_47_21 25
#define EXECUTE_CACHE_47_12 27
#define EXECUTE_CACHE_47_11 29
#define EXECUTE_CACHE_47_8 31
#define FREE_REFERENCES_LABEL_47_0 22
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd41;
  machine_word Wrd10;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_47_4);
      goto open_code__n_11;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_47_6);
      goto lambda_17;

    case 3:
      current_block = (Rpc - LABEL_47_9);
      goto lambda_18;

    case 4:
      current_block = (Rpc - LABEL_47_13);
      goto loop_6;

    case 5:
      current_block = (Rpc - LABEL_47_15);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_47_16);
      goto lambda_20;

    case 7:
      current_block = (Rpc - LABEL_47_18);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_47_19);
      goto lambda_21;

    case 9:
      current_block = (Rpc - LABEL_47_23);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_code__n_16)
DEFLABEL (open_code__n_11)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_6])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [5]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_9])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [5]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [6]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_11]));

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_47_6);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_12]));

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_47_9);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_13])));
  Rhp += 3;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  Wrd24 = Wrd28;
  (Wrd27.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd24.pObj) [2]) = (Wrd27.Obj);
  (Wrd22.Obj) = ((Wrd6.pObj) [3]);
  ((Wrd24.pObj) [3]) = (Wrd22.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [5]);
  ((Wrd24.pObj) [4]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [4]);
  (Rsp [2]) = (Wrd10.Obj);
  goto loop_6;

DEFLABEL (loop_19)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_47_13);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_24;
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd41.Lng) > 0)
    goto label_23;

DEFLABEL (label_22)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [3]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_12]));

DEFLABEL (label_23)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_16])));
  Rhp += 4;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd27 = Wrd18;
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [2]);
  ((Wrd27.pObj) [2]) = (Wrd30.Obj);
  (Wrd26.Obj) = ((Wrd29.pObj) [4]);
  ((Wrd27.pObj) [3]) = (Wrd26.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  ((Wrd27.pObj) [4]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  ((Wrd27.pObj) [5]) = (Wrd20.Obj);
  (Rsp [2]) = (Wrd17.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_18]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd35.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_19])));
  Rhp += 2;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd35.pObj)));
  Wrd38 = Wrd35;
  ((Wrd38.pObj) [2]) = (Wrd28.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  ((Wrd38.pObj) [3]) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_21]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_47_18);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_11]));

DEFLABEL (label_24)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_23;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_47_16);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [3]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_22]));

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_47_19);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_26;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd19.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_26;
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_25)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  goto loop_6;

DEFLABEL (label_26)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_6 7
#define TAG_48_7 2
#define LABEL_48_9 9
#define TAG_48_10 3
#define LABEL_48_13 11
#define LABEL_48_15 13
#define LABEL_48_17 15
#define LABEL_48_19 17
#define LABEL_48_21 19
#define LABEL_48_22 21
#define LABEL_48_23 23
#define TAG_48_24 10
#define LABEL_48_26 25
#define LABEL_48_28 27
#define TAG_48_29 12
#define ENVIRONMENT_LABEL_48_3 54
#define DEBUGGING_LABEL_48_2 53
#define OBJECT_48_5 52
#define OBJECT_48_4 51
#define OBJECT_48_3 50
#define OBJECT_48_2 49
#define OBJECT_48_1 48
#define OBJECT_48_0 47
#define EXECUTE_CACHE_48_27 29
#define EXECUTE_CACHE_48_25 31
#define EXECUTE_CACHE_48_20 33
#define EXECUTE_CACHE_48_18 35
#define EXECUTE_CACHE_48_16 37
#define EXECUTE_CACHE_48_14 39
#define EXECUTE_CACHE_48_12 41
#define EXECUTE_CACHE_48_11 43
#define EXECUTE_CACHE_48_8 45
#define FREE_REFERENCES_LABEL_48_0 28
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
matcher_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_48_4);
      goto close_code__n_34;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_33;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto lambda_38;

    case 3:
      current_block = (Rpc - LABEL_48_9);
      goto lambda_39;

    case 4:
      current_block = (Rpc - LABEL_48_13);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_48_15);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_48_17);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_48_19);
      goto continuation_22;

    case 8:
      current_block = (Rpc - LABEL_48_21);
      goto continuation_21;

    case 9:
      current_block = (Rpc - LABEL_48_22);
      goto continuation_20;

    case 10:
      current_block = (Rpc - LABEL_48_23);
      goto lambda_40;

    case 11:
      current_block = (Rpc - LABEL_48_26);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_48_28);
      goto lambda_41;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_code__n_37)
DEFLABEL (close_code__n_34)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_6])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [5]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_8]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_9])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [5]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_11]));

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_48_6);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_12]));

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_48_9);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_48_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_18]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd18.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_20]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_48_19);
  (Wrd9.Obj) = (current_block [OBJECT_48_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_21]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_22]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_23])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd20 = Wrd17;
  (Wrd21.Obj) = (Rsp [4]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_25]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_48_22);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_28])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd13 = Wrd6;
  (Wrd14.Obj) = (Rsp [6]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = ((Wrd15.pObj) [4]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  ((Wrd13.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_11]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_48_21);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_48_1]);
  (Wrd14.Obj) = (current_block [OBJECT_48_0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_48_2]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_48_3]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_26]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_27]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_48_26);
  (Wrd9.Obj) = (current_block [OBJECT_48_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [5]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd28.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd32.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd39.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd44.Obj) = (current_block [OBJECT_48_5]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_48_23);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (current_block [OBJECT_48_1]);
  (Wrd9.Obj) = (current_block [OBJECT_48_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_48_4]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd23.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd34.Obj) = ((Wrd14.pObj) [3]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_48_28);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [4]) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd8.pObj) [4]);
  (Rsp [3]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_20]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_9 13
#define LABEL_11 15
#define LABEL_12 17
#define LABEL_13 19
#define LABEL_14 21
#define LABEL_16 23
#define LABEL_18 25
#define LABEL_19 27
#define LABEL_20 29
#define LABEL_21 31
#define LABEL_22 33
#define LABEL_23 35
#define LABEL_24 37
#define LABEL_26 39
#define LABEL_27 41
#define LABEL_28 43
#define LABEL_29 45
#define LABEL_30 47
#define LABEL_31 49
#define LABEL_32 51
#define LABEL_33 53
#define LABEL_34 55
#define LABEL_35 57
#define LABEL_36 59
#define LABEL_38 61
#define LABEL_39 63
#define LABEL_40 65
#define LABEL_41 67
#define LABEL_42 69
#define LABEL_43 71
#define LABEL_44 73
#define LABEL_45 75
#define LABEL_46 77
#define LABEL_47 79
#define LABEL_48 81
#define LABEL_49 83
#define LABEL_50 85
#define LABEL_52 87
#define LABEL_53 89
#define LABEL_54 91
#define LABEL_55 93
#define LABEL_56 95
#define LABEL_57 97
#define LABEL_58 99
#define LABEL_59 101
#define LABEL_60 103
#define LABEL_61 105
#define LABEL_62 107
#define LABEL_63 109
#define LABEL_64 111
#define LABEL_65 113
#define LABEL_66 115
#define LABEL_67 117
#define LABEL_68 119
#define LABEL_69 121
#define LABEL_70 123
#define LABEL_71 125
#define ENVIRONMENT_LABEL_3 245
#define DEBUGGING_LABEL_2 244
#define PURIFICATION_ROOT 243
#define OBJECT_102 242
#define OBJECT_101 241
#define OBJECT_100 240
#define OBJECT_99 239
#define OBJECT_98 238
#define OBJECT_97 237
#define OBJECT_96 236
#define OBJECT_95 235
#define OBJECT_94 234
#define OBJECT_93 233
#define OBJECT_92 232
#define OBJECT_91 231
#define OBJECT_90 230
#define OBJECT_89 229
#define OBJECT_88 228
#define OBJECT_87 227
#define OBJECT_86 226
#define OBJECT_85 225
#define OBJECT_84 224
#define OBJECT_83 223
#define OBJECT_82 222
#define OBJECT_81 221
#define OBJECT_80 220
#define OBJECT_79 219
#define OBJECT_78 218
#define OBJECT_77 217
#define OBJECT_76 216
#define OBJECT_75 215
#define OBJECT_74 214
#define OBJECT_73 213
#define OBJECT_72 212
#define OBJECT_71 211
#define OBJECT_70 210
#define OBJECT_69 209
#define OBJECT_68 208
#define OBJECT_67 207
#define OBJECT_66 206
#define OBJECT_65 205
#define OBJECT_64 204
#define OBJECT_63 203
#define OBJECT_62 202
#define OBJECT_61 201
#define OBJECT_60 200
#define OBJECT_59 199
#define OBJECT_58 198
#define OBJECT_57 197
#define OBJECT_56 196
#define OBJECT_55 195
#define OBJECT_54 194
#define OBJECT_53 193
#define OBJECT_52 192
#define OBJECT_51 191
#define OBJECT_50 190
#define OBJECT_49 189
#define OBJECT_48 188
#define OBJECT_47 187
#define OBJECT_46 186
#define OBJECT_45 185
#define OBJECT_44 184
#define OBJECT_43 183
#define OBJECT_42 182
#define OBJECT_41 181
#define OBJECT_40 180
#define OBJECT_39 179
#define OBJECT_38 178
#define OBJECT_37 177
#define OBJECT_36 176
#define OBJECT_35 175
#define OBJECT_34 174
#define OBJECT_33 173
#define OBJECT_32 172
#define OBJECT_31 171
#define OBJECT_30 170
#define OBJECT_29 169
#define OBJECT_28 168
#define OBJECT_27 167
#define OBJECT_26 166
#define OBJECT_25 165
#define OBJECT_24 164
#define OBJECT_23 163
#define OBJECT_22 162
#define OBJECT_21 161
#define OBJECT_20 160
#define OBJECT_19 159
#define OBJECT_18 158
#define OBJECT_17 157
#define OBJECT_16 156
#define OBJECT_15 155
#define OBJECT_14 154
#define OBJECT_13 153
#define OBJECT_12 152
#define OBJECT_11 151
#define OBJECT_10 150
#define OBJECT_9 149
#define OBJECT_8 148
#define OBJECT_7 147
#define OBJECT_6 146
#define OBJECT_5 145
#define OBJECT_4 144
#define OBJECT_3 143
#define OBJECT_2 142
#define OBJECT_1 141
#define OBJECT_0 140
#define EXECUTE_CACHE_51 127
#define EXECUTE_CACHE_25 129
#define EXECUTE_CACHE_17 131
#define EXECUTE_CACHE_15 133
#define GLOBAL_EXECUTE_CACHE_37 136
#define GLOBAL_EXECUTE_CACHE_10 138
#define FREE_REFERENCES_LABEL_0 126
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
matcher_so_b72ad38b5ec38be6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_20);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_21);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_23);
      goto continuation_17;

    case 17:
      current_block = (Rpc - LABEL_24);
      goto continuation_18;

    case 18:
      current_block = (Rpc - LABEL_26);
      goto continuation_19;

    case 19:
      current_block = (Rpc - LABEL_27);
      goto continuation_20;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto continuation_21;

    case 21:
      current_block = (Rpc - LABEL_29);
      goto continuation_22;

    case 22:
      current_block = (Rpc - LABEL_30);
      goto continuation_23;

    case 23:
      current_block = (Rpc - LABEL_31);
      goto continuation_24;

    case 24:
      current_block = (Rpc - LABEL_32);
      goto continuation_25;

    case 25:
      current_block = (Rpc - LABEL_33);
      goto continuation_26;

    case 26:
      current_block = (Rpc - LABEL_34);
      goto continuation_30;

    case 27:
      current_block = (Rpc - LABEL_35);
      goto continuation_29;

    case 28:
      current_block = (Rpc - LABEL_36);
      goto continuation_27;

    case 29:
      current_block = (Rpc - LABEL_38);
      goto continuation_31;

    case 30:
      current_block = (Rpc - LABEL_39);
      goto continuation_32;

    case 31:
      current_block = (Rpc - LABEL_40);
      goto continuation_33;

    case 32:
      current_block = (Rpc - LABEL_41);
      goto continuation_37;

    case 33:
      current_block = (Rpc - LABEL_42);
      goto continuation_36;

    case 34:
      current_block = (Rpc - LABEL_43);
      goto continuation_34;

    case 35:
      current_block = (Rpc - LABEL_44);
      goto continuation_38;

    case 36:
      current_block = (Rpc - LABEL_45);
      goto continuation_40;

    case 37:
      current_block = (Rpc - LABEL_46);
      goto continuation_39;

    case 38:
      current_block = (Rpc - LABEL_47);
      goto continuation_44;

    case 39:
      current_block = (Rpc - LABEL_48);
      goto continuation_43;

    case 40:
      current_block = (Rpc - LABEL_49);
      goto continuation_41;

    case 41:
      current_block = (Rpc - LABEL_50);
      goto continuation_45;

    case 42:
      current_block = (Rpc - LABEL_52);
      goto continuation_46;

    case 43:
      current_block = (Rpc - LABEL_53);
      goto continuation_47;

    case 44:
      current_block = (Rpc - LABEL_54);
      goto continuation_48;

    case 45:
      current_block = (Rpc - LABEL_55);
      goto continuation_49;

    case 46:
      current_block = (Rpc - LABEL_56);
      goto continuation_50;

    case 47:
      current_block = (Rpc - LABEL_57);
      goto continuation_51;

    case 48:
      current_block = (Rpc - LABEL_58);
      goto continuation_52;

    case 49:
      current_block = (Rpc - LABEL_59);
      goto continuation_53;

    case 50:
      current_block = (Rpc - LABEL_60);
      goto continuation_54;

    case 51:
      current_block = (Rpc - LABEL_61);
      goto continuation_55;

    case 52:
      current_block = (Rpc - LABEL_62);
      goto continuation_56;

    case 53:
      current_block = (Rpc - LABEL_63);
      goto continuation_57;

    case 54:
      current_block = (Rpc - LABEL_64);
      goto continuation_58;

    case 55:
      current_block = (Rpc - LABEL_65);
      goto continuation_59;

    case 56:
      current_block = (Rpc - LABEL_66);
      goto continuation_60;

    case 57:
      current_block = (Rpc - LABEL_67);
      goto continuation_61;

    case 58:
      current_block = (Rpc - LABEL_68);
      goto continuation_62;

    case 59:
      current_block = (Rpc - LABEL_69);
      goto label_67;

    case 60:
      current_block = (Rpc - LABEL_70);
      goto label_68;

    case 61:
      current_block = (Rpc - LABEL_71);
      goto expression_64;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_64)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_70])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

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
	1,
	1,
	1,
	1,
	1,
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
	1,
	1,
	2,
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
	0,
	0,
	0,
	0,
	0,
	0,
	2,
	1,
	1,
	2,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 48)
      goto label_66;
    blocks = (current_block [OBJECT_102]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_69])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
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
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

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
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_37]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 2);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_35);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 2);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_42);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_46);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 2);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_48);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd5.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_101]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_matcher_so_b72ad38b5ec38be6 [48] =
  {
    { "matcher_so_code_1", 12, matcher_so_code_1 },
    { "matcher_so_code_2", 2, matcher_so_code_2 },
    { "matcher_so_code_3", 4, matcher_so_code_3 },
    { "matcher_so_code_4", 20, matcher_so_code_4 },
    { "matcher_so_code_5", 4, matcher_so_code_5 },
    { "matcher_so_code_6", 3, matcher_so_code_6 },
    { "matcher_so_code_7", 1, matcher_so_code_7 },
    { "matcher_so_code_8", 1, matcher_so_code_8 },
    { "matcher_so_code_9", 1, matcher_so_code_9 },
    { "matcher_so_code_10", 1, matcher_so_code_10 },
    { "matcher_so_code_11", 1, matcher_so_code_11 },
    { "matcher_so_code_12", 2, matcher_so_code_12 },
    { "matcher_so_code_13", 3, matcher_so_code_13 },
    { "matcher_so_code_14", 6, matcher_so_code_14 },
    { "matcher_so_code_15", 4, matcher_so_code_15 },
    { "matcher_so_code_16", 12, matcher_so_code_16 },
    { "matcher_so_code_17", 2, matcher_so_code_17 },
    { "matcher_so_code_18", 5, matcher_so_code_18 },
    { "matcher_so_code_19", 8, matcher_so_code_19 },
    { "matcher_so_code_20", 2, matcher_so_code_20 },
    { "matcher_so_code_21", 12, matcher_so_code_21 },
    { "matcher_so_code_22", 2, matcher_so_code_22 },
    { "matcher_so_code_23", 5, matcher_so_code_23 },
    { "matcher_so_code_24", 9, matcher_so_code_24 },
    { "matcher_so_code_25", 23, matcher_so_code_25 },
    { "matcher_so_code_26", 3, matcher_so_code_26 },
    { "matcher_so_code_27", 15, matcher_so_code_27 },
    { "matcher_so_code_28", 3, matcher_so_code_28 },
    { "matcher_so_code_29", 15, matcher_so_code_29 },
    { "matcher_so_code_30", 3, matcher_so_code_30 },
    { "matcher_so_code_31", 3, matcher_so_code_31 },
    { "matcher_so_code_32", 3, matcher_so_code_32 },
    { "matcher_so_code_33", 3, matcher_so_code_33 },
    { "matcher_so_code_34", 3, matcher_so_code_34 },
    { "matcher_so_code_35", 3, matcher_so_code_35 },
    { "matcher_so_code_36", 3, matcher_so_code_36 },
    { "matcher_so_code_37", 2, matcher_so_code_37 },
    { "matcher_so_code_38", 3, matcher_so_code_38 },
    { "matcher_so_code_39", 3, matcher_so_code_39 },
    { "matcher_so_code_40", 9, matcher_so_code_40 },
    { "matcher_so_code_41", 10, matcher_so_code_41 },
    { "matcher_so_code_42", 9, matcher_so_code_42 },
    { "matcher_so_code_43", 2, matcher_so_code_43 },
    { "matcher_so_code_44", 7, matcher_so_code_44 },
    { "matcher_so_code_45", 10, matcher_so_code_45 },
    { "matcher_so_code_46", 2, matcher_so_code_46 },
    { "matcher_so_code_47", 10, matcher_so_code_47 },
    { "matcher_so_code_48", 13, matcher_so_code_48 }
  };

int
decl_matcher_so_b72ad38b5ec38be6 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_matcher_so_b72ad38b5ec38be6);
  return (0);
}

DECLARE_COMPILED_CODE ("matcher.so", 62, decl_matcher_so_b72ad38b5ec38be6, matcher_so_b72ad38b5ec38be6)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_matcher_so_data_b72ad38b5ec38be6 [6335] =
  "\xf6\x01\x5a\xb7\x0e\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x0d\xb9"
  "\x0d\xba\x08\xc1\xbb\x06\x07\x85\xc2\xbc\x02\xc1\xbd\x28\x0d\xbe"
  "\x28\x0d\xbf\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x0d\x1c"
  "\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0d\x1c\x08\xb5\x0d\x1c"
  "\x0d\x1c\x88\x0d\x1c\x0d\x1c\x08\x8a\x1b\x1b\x08\x89\xb3\x0d\x1c"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xc2\x1c\xb3\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x86\x88\x1b\x24\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x08\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x08\x1b\x08\x88\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x0d\x1c\x08\x88\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x0d\x1c\x08\x88\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x0d\x1c\x08\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x0d\x1c\x08\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x08\x0d\x28\x0d"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\xb5\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x08"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x08\xb5\xb3\x82\x28\x0d\x28\x1b\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x1c\xb1\xb2\xb5\x08\xc2\x80\x81\xc1\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x81\x0d\xb5\x08\x0c\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x08\xb5\xb3\x28\x0d\x28\x1b\x28\xb7"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb5\x1b\x08\x88\xb3\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x1b\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0c"
  "\x1b\x1b\xb3\x06\x07\x85\xb4\x02\x0c\xb5\x0d\x1c\x0d\xbc\x24\x28"
  "\x1b\x28\x1b\x28\xb6\x28\xb7\x28\x0d\x1c\x28\x0d\xbe\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x08\x28\x0d\x1c\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1b\x0d\x1c\xb5\x1b\x1b\x88\x1b\x1b"
  "\x08\x8a\xb3\x28\x1b\x28\x1b\x28\x1b\x28\xb7\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x1b\xb5\x1b\x0d\x1c\x1b\x0d"
  "\x1b\x1b\x08\x8a\xb3\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\xb4\x24\x28\xb6\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x08\xb4\x24\x28\xb6\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\xb4\x24\x28\xb6\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\xb4"
  "\x24\x28\xb6\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x08\xb4\x24\x28\xb6\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\xb4\x24\x28"
  "\xb6\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x08\xb4\x24\x28\xb6\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x08\xb4\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x08"
  "\xb4\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d"
  "\xb0\x02\x88\x1b\x08\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\xb3\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x02\x88\xb5\xb3\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xbd\x1d\xb0\x02\x88\x0d\xbc\x08\x28\x0d\xbb\x28\x0d\x28\x1b"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x84\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x0d\x1c\x1b\x0d\x1c\x81"
  "\x08\x28\xb3\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x1b\x1b\x1b\x81\x08"
  "\x28\x1b\x28\x1b\x28\x1b\x28\xb3\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x2a\x1b\xb5\x2a\x1b\xb6\x2a\x82"
  "\x1b\x2a\x1b\xb7\x2a\x1b\x80\x1b\x2a\x0d\x1c\x1b\x2a\xb2\x1b\x2a"
  "\x1b\x2a\x0d\x1c\x1b\x2a\x0d\x1c\x1b\x2a\x1b\x1b\x2a\x0d\xb1\x81"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x2a\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x0d\x1b\x1b\x2a\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x08"
  "\x89\x1b\x2a\x0d\x1b\x2a\xb2\x1b\x08\x89\x1b\x2a\xb1\x1b\x1b\x1b"
  "\x08\x8b\x1b\x2a\x1b\x1b\x08\x89\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x08"
  "\x89\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x1b\x2a\x1b\x1b\x2a\xc2\x02\x02\x0d"
  "\x1b\x1b\x2a\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\xc3\x1b\x1b\x2a\x28"
  "\x0d\x28\x0d\x26\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x0c\x6d\x61\x74"
  "\x63\x68\x65\x72\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x1c\x55"
  "\x6e\x6b\x6e\x6f\x77\x6e\x20\x6d\x61\x74\x63\x68\x65\x72\x20\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3a\x05\x63\x68\x61\x72\x07"
  "\x73\x74\x72\x69\x6e\x67\x04\x63\x64\x72\x0d\x6f\x62\x6a\x65\x63"
  "\x74\x2d\x74\x79\x70\x65\x3f\x1e\x04\x63\x61\x72\x03\x06\x6c\x69"
  "\x73\x74\x3f\x03\x0c\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x3f"
  "\x03\x15\x6d\x61\x74\x63\x68\x65\x72\x2d\x70\x72\x65\x70\x72\x6f"
  "\x63\x65\x73\x73\x6f\x72\x09\x05\x1e\x70\x72\x65\x70\x72\x6f\x63"
  "\x65\x73\x73\x2d\x6d\x61\x74\x63\x68\x65\x72\x2d\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x0a\x04\x06\x65\x72\x72\x6f\x72\x0b\x06"
  "\x4a\x1a\x81\x87\x02\x49\x18\x81\x87\x02\x48\x16\x81\x87\x02\x47"
  "\x14\x81\x83\x02\x46\x12\x81\x89\x02\x45\x10\x81\x83\x02\x44\x0e"
  "\x81\x89\x02\x43\x0c\x85\x08\x42\x0a\x81\x87\x02\x41\x08\x81\x87"
  "\x02\x40\x06\x81\x89\x02\x3f\x04\x81\x87\x02\x19\x32\x0c\x02\x04"
  "\x04\x6d\x61\x70\x05\x0a\x03\x4c\x06\x81\x85\x02\x4b\x04\x85\x08"
  "\x05\x0d\x0d\x02\x16\x6d\x61\x74\x63\x68\x65\x72\x2d\x70\x72\x65"
  "\x70\x72\x6f\x63\x65\x73\x73\x6f\x72\x73\x0e\x02\x04\x09\x66\x6f"
  "\x72\x2d\x65\x61\x63\x68\x05\x10\x68\x61\x73\x68\x2d\x74\x61\x62"
  "\x6c\x65\x2f\x70\x75\x74\x21\x0f\x04\x1c\x64\x65\x66\x69\x6e\x65"
  "\x2d\x6d\x61\x74\x63\x68\x65\x72\x2d\x70\x72\x65\x70\x72\x6f\x63"
  "\x65\x73\x73\x6f\x72\x10\x04\x50\x0a\x81\x85\x02\x4f\x08\x81\x85"
  "\x02\x4e\x06\x81\x8b\x02\x4d\x04\x84\x06\x09\x15\x11\x02\x06\x71"
  "\x75\x6f\x74\x65\x12\x07\x73\x79\x6d\x62\x6f\x6c\x13\x08\x6d\x69"
  "\x74\x2d\x62\x76\x6c\x14\x02\x2b\x15\x0b\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x16\x13\x16\x19\x64\x65\x66\x69\x6e\x65\x2d\x2a"
  "\x6d\x61\x74\x63\x68\x65\x72\x2d\x65\x78\x70\x61\x6e\x64\x65\x72"
  "\x17\x07\x6c\x61\x6d\x62\x64\x61\x18\x04\x0d\x63\x6c\x6f\x73\x65"
  "\x2d\x73\x79\x6e\x74\x61\x78\x19\x04\x0e\x73\x79\x6e\x74\x61\x78"
  "\x2d\x6d\x61\x74\x63\x68\x3f\x1a\x03\x12\x69\x6c\x6c\x2d\x66\x6f"
  "\x72\x6d\x65\x64\x2d\x73\x79\x6e\x74\x61\x78\x1b\x04\x64\x2a\x81"
  "\x8b\x02\x63\x28\x81\x8b\x02\x62\x26\x81\x8b\x02\x61\x24\x81\x8b"
  "\x02\x60\x22\x81\x8b\x02\x5f\x20\x81\x8b\x02\x5e\x1e\x81\x89\x02"
  "\x5d\x1c\x81\x89\x02\x5c\x1a\x81\x89\x02\x5b\x18\x81\x8b\x02\x5a"
  "\x16\x81\x8b\x02\x59\x14\x81\x89\x02\x58\x12\x81\x89\x02\x57\x10"
  "\x81\x89\x02\x56\x0e\x81\x8b\x02\x55\x0c\x81\x89\x02\x54\x0a\x81"
  "\x8b\x02\x53\x08\x81\x87\x02\x52\x06\x81\x85\x02\x51\x04\x84\x06"
  "\x29\x3b\x1c\x02\x06\x61\x70\x70\x6c\x79\x1d\x04\x15\x64\x65\x66"
  "\x69\x6e\x65\x2d\x6d\x61\x74\x63\x68\x65\x72\x2d\x6d\x61\x63\x72"
  "\x6f\x05\x0a\x03\x68\x0a\x81\x89\x02\x67\x08\x81\x8b\x02\x66\x06"
  "\x81\x89\x02\x65\x04\x84\x06\x09\x13\x1e\x02\x0e\x02\x03\x15\x6c"
  "\x6f\x6f\x6b\x75\x70\x2d\x6d\x61\x74\x63\x68\x65\x72\x2d\x6d\x61"
  "\x63\x72\x6f\x05\x0f\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f"
  "\x67\x65\x74\x1f\x03\x6b\x08\x81\x85\x02\x6a\x06\x81\x83\x02\x69"
  "\x04\x83\x04\x07\x11\x20\x02\x08\x04\x73\x65\x71\x21\x02\x2a\x22"
  "\x6c\x04\x83\x04\x03\x23\x02\x09\x04\x61\x6c\x74\x24\x21\x6d\x04"
  "\x83\x04\x03\x25\x02\x0a\x21\x0d\x65\x6e\x64\x2d\x6f\x66\x2d\x69"
  "\x6e\x70\x75\x74\x26\x6e\x04\x83\x04\x03\x27\x02\x0b\x21\x10\x64"
  "\x69\x73\x63\x61\x72\x64\x2d\x6d\x61\x74\x63\x68\x65\x64\x28\x6f"
  "\x04\x83\x04\x03\x29\x02\x0c\x21\x22\x04\x6e\x2a\x6e\x2a\x70\x04"
  "\x84\x06\x03\x0a\x2b\x02\x0d\x21\x2a\x03\x2a\x6e\x2c\x72\x06\x81"
  "\x87\x02\x71\x04\x85\x08\x05\x0c\x2d\x02\x0e\x05\x73\x65\x78\x70"
  "\x2e\x18\x14\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72"
  "\x2d\x65\x72\x72\x6f\x72\x02\x1b\x67\x65\x6e\x65\x72\x61\x74\x65"
  "\x2d\x75\x6e\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62"
  "\x6f\x6c\x04\x07\x61\x70\x70\x65\x6e\x64\x2f\x03\x75\x08\x81\x89"
  "\x02\x74\x06\x81\x87\x02\x73\x04\xfd\x07\x07\x13\x30\x02\x0f\x05"
  "\x1f\x70\x72\x65\x70\x72\x6f\x63\x65\x73\x73\x2d\x6d\x61\x74\x63"
  "\x68\x65\x72\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x73\x31"
  "\x04\x14\x66\x6c\x61\x74\x74\x65\x6e\x2d\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x73\x03\x7b\x0e\x81\x8b\x02\x7a\x0c\x81\x89\x02"
  "\x79\x0a\x81\x87\x02\x78\x08\x81\x91\x02\x77\x06\x81\x89\x02\x76"
  "\x04\x85\x08\x0d\x17\x32\x02\x10\x03\x0c\x63\x68\x65\x63\x6b\x2d"
  "\x31\x2d\x61\x72\x67\x33\x05\x0a\x03\x7f\x0a\x81\x8d\x02\x7e\x08"
  "\x81\x89\x02\x7d\x06\x81\x87\x02\x7c\x04\x85\x08\x09\x13\x34\x02"
  "\x11\x05\x0d\x63\x68\x65\x63\x6b\x2d\x6e\x2d\x61\x72\x67\x73\x05"
  "\x0a\x03\x1b\x65\x78\x61\x63\x74\x2d\x6e\x6f\x6e\x6e\x65\x67\x61"
  "\x74\x69\x76\x65\x2d\x69\x6e\x74\x65\x67\x65\x72\x3f\x04\x8b\x01"
  "\x1a\x81\x89\x02\x8a\x01\x18\x81\x89\x02\x89\x01\x16\x81\x89\x02"
  "\x88\x01\x14\x81\x87\x02\x87\x01\x12\x81\x83\x02\x86\x01\x10\x81"
  "\x83\x02\x85\x01\x0e\x83\x04\x84\x01\x0c\x81\x8d\x02\x83\x01\x0a"
  "\x81\x8d\x02\x82\x01\x08\x81\x8d\x02\x81\x01\x06\x81\x87\x02\x80"
  "\x01\x04\x85\x08\x19\x27\x35\x02\x12\x03\x33\x02\x8d\x01\x06\x81"
  "\x87\x02\x8c\x01\x04\x85\x08\x05\x0b\x36\x02\x13\x08\x63\x68\x61"
  "\x72\x2d\x63\x69\x37\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66"
  "\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x03\x33"
  "\x02\x92\x01\x0c\x81\x8b\x02\x91\x01\x0a\x81\x89\x02\x90\x01\x08"
  "\x81\x89\x02\x8f\x01\x06\x81\x87\x02\x8e\x01\x04\x85\x08\x0b\x1a"
  "\x38\x02\x14\x14\x72\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x63"
  "\x68\x61\x72\x2d\x73\x65\x74\x02\x5e\x03\x33\x04\x0f\x73\x74\x72"
  "\x69\x6e\x67\x2d\x70\x72\x65\x66\x69\x78\x3f\x03\x06\x63\x6c\x6f"
  "\x73\x65\x04\x0c\x73\x74\x72\x69\x6e\x67\x2d\x74\x61\x69\x6c\x04"
  "\x1a\x68\x61\x6e\x64\x6c\x65\x2d\x63\x6f\x6d\x70\x6c\x65\x78\x2d"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x06\x9a\x01\x12\x81\x8d"
  "\x02\x99\x01\x10\x81\x8f\x02\x98\x01\x0e\x81\x8d\x02\x97\x01\x0c"
  "\x81\x8d\x02\x96\x01\x0a\x81\x8b\x02\x95\x01\x08\x81\x89\x02\x94"
  "\x01\x06\x81\x87\x02\x93\x01\x04\x85\x08\x11\x25\x39\x02\x15\x03"
  "\x0d\x63\x68\x65\x63\x6b\x2d\x30\x2d\x61\x72\x67\x73\x02\x9c\x01"
  "\x06\x81\x87\x02\x9b\x01\x04\x85\x08\x05\x0b\x3a\x02\x16\x04\x0d"
  "\x63\x68\x65\x63\x6b\x2d\x32\x2d\x61\x72\x67\x73\x05\x0a\x03\x04"
  "\xa8\x01\x1a\x81\x89\x02\xa7\x01\x18\x81\x89\x02\xa6\x01\x16\x81"
  "\x89\x02\xa5\x01\x14\x81\x87\x02\xa4\x01\x12\x81\x83\x02\xa3\x01"
  "\x10\x81\x83\x02\xa2\x01\x0e\x83\x04\xa1\x01\x0c\x81\x8d\x02\xa0"
  "\x01\x0a\x81\x8d\x02\x9f\x01\x08\x81\x8d\x02\x9e\x01\x06\x81\x87"
  "\x02\x9d\x01\x04\x85\x08\x19\x26\x3b\x02\x17\x03\x33\x02\xaa\x01"
  "\x06\x81\x87\x02\xa9\x01\x04\x85\x08\x05\x0b\x33\x02\x18\x16\x04"
  "\x1a\x03\x1b\x04\x16\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x6d\x61"
  "\x74\x63\x68\x65\x72\x2d\x63\x6f\x64\x65\x3c\x04\xaf\x01\x0c\x81"
  "\x85\x02\xae\x01\x0a\x81\x85\x02\xad\x01\x08\x81\x85\x02\xac\x01"
  "\x06\x81\x87\x02\xab\x01\x04\x84\x06\x0b\x18\x3d\x02\x19\x0a\x02"
  "\x06\x1c\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x65\x78\x74\x65\x72"
  "\x6e\x61\x6c\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x04\x12\x63"
  "\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x70\x6f\x69\x6e\x74\x65\x72"
  "\x3e\x04\x10\x62\x61\x63\x6b\x74\x72\x61\x63\x6b\x69\x6e\x67\x2d"
  "\x6b\x66\x3f\x07\x1b\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x6d\x61\x74"
  "\x63\x68\x65\x72\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x40"
  "\x03\x17\x6d\x61\x6b\x65\x2d\x6d\x61\x74\x63\x68\x65\x72\x2d\x6b"
  "\x73\x2d\x6c\x61\x6d\x62\x64\x61\x41\x05\x15\x62\x69\x6e\x64\x2d"
  "\x64\x65\x6c\x61\x79\x65\x64\x2d\x6c\x61\x6d\x62\x64\x61\x73\x42"
  "\x07\xb8\x01\x14\x83\x04\xb7\x01\x12\x81\x87\x02\xb6\x01\x10\x82"
  "\x02\xb5\x01\x0e\x81\x87\x02\xb4\x01\x0c\x81\x87\x02\xb3\x01\x0a"
  "\x81\x85\x02\xb2\x01\x08\x84\x06\xb1\x01\x06\x81\x89\x02\xb0\x01"
  "\x04\x84\x06\x13\x26\x43\x02\x1a\x13\x4d\x61\x6c\x66\x6f\x72\x6d"
  "\x65\x64\x20\x6d\x61\x74\x63\x68\x65\x72\x3a\x2e\x1d\x1e\x1d\x49"
  "\x6e\x63\x6f\x72\x72\x65\x63\x74\x20\x61\x72\x69\x74\x79\x20\x66"
  "\x6f\x72\x20\x6d\x61\x74\x63\x68\x65\x72\x3a\x12\x6d\x61\x74\x63"
  "\x68\x65\x72\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x72\x73\x1d\x0e\x2a"
  "\x62\x75\x66\x66\x65\x72\x2d\x6e\x61\x6d\x65\x2a\x03\x05\x1f\x04"
  "\x0b\x03\x03\x03\x07\x6c\x65\x6e\x67\x74\x68\x1f\x04\x08\x70\x72"
  "\x6f\x74\x65\x63\x74\x05\x16\x77\x72\x61\x70\x2d\x65\x78\x74\x65"
  "\x72\x6e\x61\x6c\x2d\x6d\x61\x74\x63\x68\x65\x72\x44\x08\xcf\x01"
  "\x30\x81\x8f\x02\xce\x01\x2e\x81\x95\x02\xcd\x01\x2c\x81\x95\x02"
  "\xcc\x01\x2a\x81\x8d\x02\xcb\x01\x28\x81\x8d\x02\xca\x01\x26\x81"
  "\x8d\x02\xc9\x01\x24\x81\x93\x02\xc8\x01\x22\x81\x91\x02\xc7\x01"
  "\x20\x81\x8f\x02\xc6\x01\x1e\x81\x8f\x02\xc5\x01\x1c\x81\x8d\x02"
  "\xc4\x01\x1a\x81\x8f\x02\xc3\x01\x18\x81\x83\x02\xc2\x01\x16\x81"
  "\x8f\x02\xc1\x01\x14\x87\x0c\xc0\x01\x12\x81\x8b\x02\xbf\x01\x10"
  "\x81\x8f\x02\xbe\x01\x0e\x81\x8f\x02\xbd\x01\x0c\x81\x8d\x02\xbc"
  "\x01\x0a\x81\x91\x02\xbb\x01\x08\x81\x8f\x02\xba\x01\x06\x81\x8d"
  "\x02\xb9\x01\x04\x81\x8f\x02\x2f\x50\x45\x02\x1b\x03\x69\x66\x46"
  "\x03\x0b\x64\x65\x6c\x61\x79\x2d\x63\x61\x6c\x6c\x47\x04\x47\x03"
  "\xd2\x01\x08\x81\x89\x02\xd1\x01\x06\x81\x87\x02\xd0\x01\x04\x85"
  "\x08\x07\x11\x48\x02\x1c\x12\x08\x70\x6f\x69\x6e\x74\x65\x72\x12"
  "\x03\x6b\x73\x49\x03\x6b\x66\x4a\x0b\x66\x72\x65\x65\x2d\x6e\x61"
  "\x6d\x65\x73\x18\x18\x64\x65\x66\x69\x6e\x65\x2d\x6d\x61\x74\x63"
  "\x68\x65\x72\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x72\x4b\x13\x14\x15"
  "\x16\x04\x1a\x03\x1b\x04\x19\x03\x03\x1f\x06\xe1\x01\x20\x81\x8b"
  "\x02\xe0\x01\x1e\x81\x8d\x02\xdf\x01\x1c\x81\x8b\x02\xde\x01\x1a"
  "\x81\x8b\x02\xdd\x01\x18\x81\x89\x02\xdc\x01\x16\x81\x89\x02\xdb"
  "\x01\x14\x81\x89\x02\xda\x01\x12\x81\x87\x02\xd9\x01\x10\x81\x87"
  "\x02\xd8\x01\x0e\x81\x87\x02\xd7\x01\x0c\x81\x85\x02\xd6\x01\x0a"
  "\x81\x85\x02\xd5\x01\x08\x81\x85\x02\xd4\x01\x06\x81\x87\x02\xd3"
  "\x01\x04\x84\x06\x1f\x38\x1f\x02\x1d\x1d\x02\x05\x0f\x02\xe4\x01"
  "\x08\x81\x87\x02\xe3\x01\x06\x81\x8d\x02\xe2\x01\x04\x85\x08\x07"
  "\x0f\x14\x02\x1e\x49\x4a\x12\x0f\x64\x65\x66\x69\x6e\x65\x2d\x6d"
  "\x61\x74\x63\x68\x65\x72\x4a\x44\x06\x64\x61\x74\x75\x6d\x15\x16"
  "\x04\x1a\x03\x1b\x04\x19\x03\x0a\x6c\x61\x73\x74\x2d\x70\x61\x69"
  "\x72\x03\x11\x65\x78\x63\x65\x70\x74\x2d\x6c\x61\x73\x74\x2d\x70"
  "\x61\x69\x72\x04\x2f\x07\xf3\x01\x20\x81\x8d\x02\xf2\x01\x1e\x81"
  "\x8f\x02\xf1\x01\x1c\x81\x8f\x02\xf0\x01\x1a\x81\x8b\x02\xef\x01"
  "\x18\x81\x8b\x02\xee\x01\x16\x81\x8b\x02\xed\x01\x14\x81\x8b\x02"
  "\xec\x01\x12\x81\x89\x02\xeb\x01\x10\x81\x8d\x02\xea\x01\x0e\x81"
  "\x8d\x02\xe9\x01\x0c\x81\x87\x02\xe8\x01\x0a\x81\x85\x02\xe7\x01"
  "\x08\x81\x85\x02\xe6\x01\x06\x81\x87\x02\xe5\x01\x04\x84\x06\x1f"
  "\x38\x49\x02\x1f\x19\x6d\x61\x74\x63\x68\x2d\x70\x61\x72\x73\x65"
  "\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x63\x68\x61\x72\x02\x04\x05"
  "\x44\x03\xf6\x01\x08\x81\x8d\x02\xf5\x01\x06\x81\x8b\x02\xf4\x01"
  "\x04\x87\x0c\x07\x13\x2f\x02\x20\x1c\x6d\x61\x74\x63\x68\x2d\x70"
  "\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x63\x68\x61"
  "\x72\x2d\x63\x69\x02\x04\x05\x44\x03\xf9\x01\x08\x81\x8d\x02\xf8"
  "\x01\x06\x81\x8b\x02\xf7\x01\x04\x87\x0c\x07\x13\x1b\x02\x21\x1d"
  "\x6d\x61\x74\x63\x68\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66"
  "\x66\x65\x72\x2d\x6e\x6f\x74\x2d\x63\x68\x61\x72\x02\x04\x05\x44"
  "\x03\xfc\x01\x08\x81\x8d\x02\xfb\x01\x06\x81\x8b\x02\xfa\x01\x04"
  "\x87\x0c\x07\x13\x1a\x02\x22\x20\x6d\x61\x74\x63\x68\x2d\x70\x61"
  "\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x6e\x6f\x74\x2d"
  "\x63\x68\x61\x72\x2d\x63\x69\x02\x04\x05\x44\x03\xff\x01\x08\x81"
  "\x8d\x02\xfe\x01\x06\x81\x8b\x02\xfd\x01\x04\x87\x0c\x07\x13\x19"
  "\x02\x23\x20\x6d\x61\x74\x63\x68\x2d\x70\x61\x72\x73\x65\x72\x2d"
  "\x62\x75\x66\x66\x65\x72\x2d\x63\x68\x61\x72\x2d\x69\x6e\x2d\x73"
  "\x65\x74\x02\x04\x05\x44\x03\x82\x02\x08\x81\x8d\x02\x81\x02\x06"
  "\x81\x8b\x02\x80\x02\x04\x87\x0c\x07\x13\x16\x02\x24\x1b\x6d\x61"
  "\x74\x63\x68\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65"
  "\x72\x2d\x73\x74\x72\x69\x6e\x67\x02\x04\x05\x44\x03\x85\x02\x08"
  "\x81\x8d\x02\x84\x02\x06\x81\x8b\x02\x83\x02\x04\x87\x0c\x07\x13"
  "\x13\x02\x25\x1e\x6d\x61\x74\x63\x68\x2d\x70\x61\x72\x73\x65\x72"
  "\x2d\x62\x75\x66\x66\x65\x72\x2d\x73\x74\x72\x69\x6e\x67\x2d\x63"
  "\x69\x02\x04\x05\x44\x03\x88\x02\x08\x81\x8d\x02\x87\x02\x06\x81"
  "\x8b\x02\x86\x02\x04\x87\x0c\x07\x13\x12\x02\x26\x04\x6e\x6f\x74"
  "\x18\x70\x65\x65\x6b\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66"
  "\x66\x65\x72\x2d\x63\x68\x61\x72\x02\x05\x44\x02\x8a\x02\x06\x81"
  "\x89\x02\x89\x02\x04\x86\x0a\x05\x10\x0f\x02\x27\x06\x62\x65\x67"
  "\x69\x6e\x1c\x64\x69\x73\x63\x61\x72\x64\x2d\x70\x61\x72\x73\x65"
  "\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x68\x65\x61\x64\x21\x02\x04"
  "\x47\x02\x8d\x02\x08\x81\x8b\x02\x8c\x02\x06\x81\x89\x02\x8b\x02"
  "\x04\x86\x0a\x07\x12\x02\x28\x18\x02\x0e\x66\x65\x74\x63\x68\x2d"
  "\x70\x6f\x69\x6e\x74\x65\x72\x07\x40\x03\x90\x02\x08\x81\x8f\x02"
  "\x8f\x02\x06\x88\x0e\x8e\x02\x04\x81\x8d\x02\x07\x11\x18\x02\x29"
  "\x04\x47\x03\x41\x07\x40\x04\x42\x05\x99\x02\x14\x81\x85\x02\x98"
  "\x02\x12\x81\x85\x02\x97\x02\x10\x81\x89\x02\x96\x02\x0e\x81\x89"
  "\x02\x95\x02\x0c\x81\x85\x02\x94\x02\x0a\x81\x89\x02\x93\x02\x08"
  "\x81\x89\x02\x92\x02\x06\x81\x89\x02\x91\x02\x04\xfb\x0b\x13\x21"
  "\x02\x2a\x03\x47\x04\x3e\x07\x40\x04\x3f\x04\x42\x06\xa3\x02\x16"
  "\x81\x89\x02\xa2\x02\x14\x81\x85\x02\xa1\x02\x12\x81\x83\x02\xa0"
  "\x02\x10\x81\x83\x02\x9f\x02\x0e\x81\x85\x02\x9e\x02\x0c\x81\x85"
  "\x02\x9d\x02\x0a\x81\x89\x02\x9c\x02\x08\x81\x87\x02\x9b\x02\x06"
  "\x81\x87\x02\x9a\x02\x04\xfb\x0b\x15\x25\x02\x2b\x04\x6c\x65\x74"
  "\x02\x13\x6d\x61\x6b\x65\x2d\x6b\x66\x2d\x69\x64\x65\x6e\x74\x69"
  "\x66\x69\x65\x72\x02\x13\x6d\x61\x6b\x65\x2d\x6b\x73\x2d\x69\x64"
  "\x65\x6e\x74\x69\x66\x69\x65\x72\x04\x3e\x03\x10\x64\x65\x6c\x61"
  "\x79\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x3e\x04\x3f\x04\x42"
  "\x04\x47\x07\x40\x09\xac\x02\x14\x81\x85\x02\xab\x02\x12\x81\x83"
  "\x02\xaa\x02\x10\x81\x85\x02\xa9\x02\x0e\x81\x91\x02\xa8\x02\x0c"
  "\x81\x85\x02\xa7\x02\x0a\x81\x8f\x02\xa6\x02\x08\x81\x8d\x02\xa5"
  "\x02\x06\x81\x8b\x02\xa4\x02\x04\x87\x0c\x13\x29\x3f\x02\x2c\x08"
  "\x0e\x6f\x70\x65\x6e\x2d\x63\x6f\x64\x65\x2d\x6e\x2a\x6e\x4c\x08"
  "\x0f\x63\x6c\x6f\x73\x65\x2d\x63\x6f\x64\x65\x2d\x6e\x2a\x6e\x4d"
  "\x03\xae\x02\x06\x81\x8d\x02\xad\x02\x04\x88\x0e\x05\x0e\x4e\x02"
  "\x2d\x04\x47\x03\x41\x07\x40\x04\x42\x05\xb5\x02\x10\x81\x85\x02"
  "\xb4\x02\x0e\x81\x85\x02\xb3\x02\x0c\x81\x89\x02\xb2\x02\x0a\x81"
  "\x85\x02\xb1\x02\x08\x81\x89\x02\xb0\x02\x06\x81\x89\x02\xaf\x02"
  "\x04\x88\x0e\x0f\x1b\x4f\x02\x2e\x02\x2d\x50\x46\x02\x3e\x51\x02"
  "\x02\x16\x6d\x61\x6b\x65\x2d\x76\x61\x6c\x75\x65\x2d\x69\x64\x65"
  "\x6e\x74\x69\x66\x69\x65\x72\x52\x02\x15\x6d\x61\x6b\x65\x2d\x6c"
  "\x6f\x6f\x70\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x53\x07"
  "\x40\x03\x41\x03\x3e\x04\x42\x08\xbf\x02\x16\x81\x85\x02\xbe\x02"
  "\x14\x81\x95\x02\xbd\x02\x12\x81\x85\x02\xbc\x02\x10\x81\x97\x02"
  "\xbb\x02\x0e\x81\x95\x02\xba\x02\x0c\x81\x93\x02\xb9\x02\x0a\x81"
  "\x91\x02\xb8\x02\x08\x81\x8f\x02\xb7\x02\x06\x81\x8d\x02\xb6\x02"
  "\x04\x88\x0e\x15\x2d\x54\x02\x2f\x08\x0d\x6f\x70\x65\x6e\x2d\x63"
  "\x6f\x64\x65\x2d\x2a\x6e\x55\x08\x0e\x63\x6c\x6f\x73\x65\x2d\x63"
  "\x6f\x64\x65\x2d\x2a\x6e\x56\x03\xc1\x02\x06\x81\x8d\x02\xc0\x02"
  "\x04\x88\x0e\x05\x0e\x57\x02\x30\x03\x0f\x6d\x61\x6b\x65\x2d\x6b"
  "\x66\x2d\x6c\x61\x6d\x62\x64\x61\x58\x04\x42\x04\x47\x03\x41\x07"
  "\x40\x06\xcb\x02\x16\x81\x85\x02\xca\x02\x14\x81\x85\x02\xc9\x02"
  "\x12\x81\x89\x02\xc8\x02\x10\x81\x85\x02\xc7\x02\x0e\x81\x89\x02"
  "\xc6\x02\x0c\x81\x89\x02\xc5\x02\x0a\x81\x85\x02\xc4\x02\x08\x81"
  "\x83\x02\xc3\x02\x06\x81\x8d\x02\xc2\x02\x04\x88\x0e\x15\x23\x59"
  "\x02\x31\x50\x46\x51\x03\x58\x04\x42\x04\x47\x02\x02\x52\x02\x53"
  "\x07\x40\x03\x41\x03\x3e\x0a\xd8\x02\x1c\x81\x85\x02\xd7\x02\x1a"
  "\x81\x8d\x02\xd6\x02\x18\x81\x85\x02\xd5\x02\x16\x81\x8f\x02\xd4"
  "\x02\x14\x81\x8d\x02\xd3\x02\x12\x81\x8b\x02\xd2\x02\x10\x81\x89"
  "\x02\xd1\x02\x0e\x81\x87\x02\xd0\x02\x0c\x81\x85\x02\xcf\x02\x0a"
  "\x81\x85\x02\xce\x02\x08\x81\x83\x02\xcd\x02\x06\x81\x8d\x02\xcc"
  "\x02\x04\x88\x0e\x1b\x37\x58\x31\x53\x53\x58\x04\x56\x55\x59\x04"
  "\x2c\x57\x04\x4d\x54\x04\x4c\x4f\x04\x2a\x4e\x04\x3f\x04\x24\x04"
  "\x21\x04\x18\x06\x28\x04\x26\x0f\x04\x0a\x73\x74\x72\x69\x6e\x67"
  "\x2d\x63\x69\x59\x12\x04\x13\x04\x16\x04\x0c\x6e\x6f\x74\x2d\x63"
  "\x68\x61\x72\x2d\x63\x69\x58\x19\x04\x09\x6e\x6f\x74\x2d\x63\x68"
  "\x61\x72\x57\x1a\x04\x37\x1b\x04\x16\x64\x65\x66\x69\x6e\x65\x2d"
  "\x61\x74\x6f\x6d\x69\x63\x2d\x6d\x61\x74\x63\x68\x65\x72\x2f\x04"
  "\x1d\x49\x04\x4a\x4b\x14\x04\x1f\x04\x44\x48\x04\x40\x45\x14\x09"
  "\x2a\x6d\x61\x74\x63\x68\x65\x72\x3c\x43\x04\x3d\x04\x2e\x33\x04"
  "\x0d\x77\x69\x74\x68\x2d\x70\x6f\x69\x6e\x74\x65\x72\x3b\x04\x26"
  "\x28\x3a\x04\x09\x63\x68\x61\x72\x2d\x73\x65\x74\x39\x04\x59\x38"
  "\x04\x37\x57\x58\x36\x04\x2a\x2c\x35\x04\x22\x34\x04\x24\x21\x32"
  "\x04\x0b\x30\x04\x04\x6e\x2a\x6d\x2d\x04\x03\x6e\x2a\x2b\x04\x0a"
  "\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x29\x04\x09\x63\x6f\x6d\x70"
  "\x6c\x65\x74\x65\x27\x04\x02\x3f\x25\x04\x0e\x15\x23\x04\x09\x20"
  "\x04\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x33\x10\x16\x64\x65"
  "\x66\x69\x6e\x65\x2d\x2a\x6d\x61\x74\x63\x68\x65\x72\x2d\x6d\x61"
  "\x63\x72\x6f\x17\x1e\x04\x1c\x04\x10\x11\x04\x31\x0d\x04\x11\x6c"
  "\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0a"
  "\x0c\x0c\x04\x20\x72\x73\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72"
  "\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e"
  "\x64\x65\x72\x04\x1f\x73\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72"
  "\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e"
  "\x64\x65\x72\x03\x02\x1a\x6d\x61\x6b\x65\x2d\x73\x74\x72\x6f\x6e"
  "\x67\x2d\x65\x71\x2d\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x04"
  "\x17\x04\x10\x05\x4b\x05\x3e\x7e\x80\x80\x04\x3d\x7c\x81\x81\x02"
  "\x3c\x7a\x81\x81\x02\x3b\x78\x81\x83\x02\x3a\x76\x81\x83\x02\x39"
  "\x74\x81\x83\x02\x38\x72\x81\x83\x02\x37\x70\x81\x83\x02\x36\x6e"
  "\x81\x83\x02\x35\x6c\x81\x83\x02\x34\x6a\x81\x83\x02\x33\x68\x81"
  "\x83\x02\x32\x66\x81\x83\x02\x31\x64\x81\x83\x02\x30\x62\x81\x83"
  "\x02\x2f\x60\x81\x83\x02\x2e\x5e\x81\x83\x02\x2d\x5c\x81\x83\x02"
  "\x2c\x5a\x81\x83\x02\x2b\x58\x81\x83\x02\x2a\x56\x81\x83\x02\x29"
  "\x54\x81\x87\x02\x28\x52\x81\x85\x02\x27\x50\x81\x83\x02\x26\x4e"
  "\x81\x85\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x83\x02\x23\x48\x81"
  "\x87\x02\x22\x46\x81\x85\x02\x21\x44\x81\x83\x02\x20\x42\x81\x83"
  "\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x83\x02\x1d\x3c\x81\x87\x02"
  "\x1c\x3a\x81\x85\x02\x1b\x38\x81\x83\x02\x1a\x36\x81\x83\x02\x19"
  "\x34\x81\x83\x02\x18\x32\x81\x83\x02\x17\x30\x81\x83\x02\x16\x2e"
  "\x81\x83\x02\x15\x2c\x81\x83\x02\x14\x2a\x81\x83\x02\x13\x28\x81"
  "\x83\x02\x12\x26\x81\x83\x02\x11\x24\x81\x83\x02\x10\x22\x81\x83"
  "\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x83\x02"
  "\x0c\x1a\x81\x83\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x85\x02\x09"
  "\x14\x81\x83\x02\x08\x12\x81\x83\x02\x07\x10\x81\x83\x02\x06\x0e"
  "\x81\x87\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02\x03\x08\x81"
  "\x83\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x7d\xf6\x01";

SCHEME_OBJECT *
matcher_so_data_b72ad38b5ec38be6 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_matcher_so_data_b72ad38b5ec38be6 [0]))), (sizeof (prog_matcher_so_data_b72ad38b5ec38be6)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_71]));
}

DECLARE_COMPILED_DATA_NS ("matcher.so", matcher_so_data_b72ad38b5ec38be6)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("matcher.so", "0e1f5bcbcd8653c7")
