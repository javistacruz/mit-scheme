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
#define ENVIRONMENT_LABEL_1_3 48
#define DEBUGGING_LABEL_1_2 47
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
parser_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd18;
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
      goto label_26;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_1_4);
      goto preprocess_parser_expression_20;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_1_14);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (preprocess_parser_expression_28)
DEFLABEL (preprocess_parser_expression_20)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_44;

DEFLABEL (label_43)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_1_1]);
  (Wrd39.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd39.Lng))))
    goto label_42;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd36.Obj));
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd12.Obj) == (Wrd14.Obj))
    goto label_41;

DEFLABEL (label_40)
  (Wrd15.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd25.Lng)))
    goto label_30;

DEFLABEL (label_29)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_30)
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_32;
  (Wrd17.Obj) = (current_block [OBJECT_1_5]);
  goto label_31;

DEFLABEL (label_32)
  (Wrd17.Obj) = (current_block [OBJECT_1_4]);

DEFLABEL (label_31)
DEFLABEL (label_39)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd17.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_37;

DEFLABEL (label_36)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 30))
    goto label_35;

DEFLABEL (label_34)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_1_8]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Rsp [0]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (label_35)
  if ((Wrd10.uLng) == 2)
    goto label_34;
  (Wrd13.Obj) = (current_block [OBJECT_1_9]);
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (label_37)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (label_41)
  Rsp = (& (Rsp [2]));
  goto label_37;

DEFLABEL (label_42)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  goto label_41;

DEFLABEL (label_44)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd48.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_56;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_55)
  (Wrd87.Obj) = (current_block [OBJECT_1_1]);
  (Wrd90.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd90.Lng))))
    goto label_54;
  (Wrd59.uLng) = (OBJECT_DATUM (Wrd87.Obj));
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd59.Obj) == (Wrd61.Obj))
    goto label_53;

DEFLABEL (label_52)
  (Wrd62.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd72.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd72.Lng))))
    goto label_29;
  (Wrd66.uLng) = (OBJECT_DATUM (Wrd62.Obj));
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd66.Obj) == (Wrd68.Obj))
    goto label_46;
  (Wrd64.Obj) = (current_block [OBJECT_1_5]);
  goto label_45;

DEFLABEL (label_46)
  (Wrd64.Obj) = (current_block [OBJECT_1_4]);

DEFLABEL (label_45)
DEFLABEL (label_51)
  Rsp = (& (Rsp [3]));
  if ((Wrd64.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;

DEFLABEL (label_50)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd80.Obj) = (Rsp [1]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_49;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [1]);
  (* (--Rsp)) = (Wrd79.Obj);

DEFLABEL (label_48)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd109.Obj) = (Rsp [1]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd110.uLng) == 1))
    goto label_47;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd108.Obj) = ((Wrd107.pObj) [0]);
  (* (--Rsp)) = (Wrd108.Obj);
  goto label_38;

DEFLABEL (label_47)
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_49)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_6]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_53)
  Rsp = (& (Rsp [2]));
  goto label_50;

DEFLABEL (label_54)
  (Wrd92.Obj) = (Rsp [0]);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  goto label_53;

DEFLABEL (label_56)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_57)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto label_37;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_58)
  (Wrd7.Obj) = (current_block [OBJECT_1_9]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_50;

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
parser_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto preprocess_parser_expressions_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (preprocess_parser_expressions_4)
DEFLABEL (preprocess_parser_expressions_1)
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
parser_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto define_parser_preprocessor_3;

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

DEFLABEL (define_parser_preprocessor_7)
DEFLABEL (define_parser_preprocessor_3)
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
parser_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
parser_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto define__parser_expander_4;

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

DEFLABEL (define__parser_expander_8)
DEFLABEL (define__parser_expander_4)
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
parser_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto parser_preprocessor_2;

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

DEFLABEL (parser_preprocessor_6)
DEFLABEL (parser_preprocessor_2)
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
parser_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
parser_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
parser_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
parser_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
#define LABEL_11_5 5
#define LABEL_11_7 7
#define ENVIRONMENT_LABEL_11_3 18
#define DEBUGGING_LABEL_11_2 17
#define OBJECT_11_3 16
#define OBJECT_11_2 15
#define OBJECT_11_1 14
#define OBJECT_11_0 13
#define EXECUTE_CACHE_11_8 9
#define EXECUTE_CACHE_11_6 11
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto lambda_14;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_17)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
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
  (Wrd22.Obj) = (current_block [OBJECT_11_0]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_11_1]);
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_11_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_11_2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_11_3]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 11
#define DEBUGGING_LABEL_12_2 10
#define OBJECT_12_5 9
#define OBJECT_12_4 8
#define OBJECT_12_3 7
#define OBJECT_12_2 6
#define OBJECT_12_1 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_12_4);
      goto lambda_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_11)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd8.Obj) = (current_block [OBJECT_12_0]);
  (Wrd9.Obj) = (current_block [OBJECT_12_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_12_2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_12_3]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_12_4]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd33.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd42.Obj) = (current_block [OBJECT_12_5]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 13
#define DEBUGGING_LABEL_13_2 12
#define OBJECT_13_7 11
#define OBJECT_13_6 10
#define OBJECT_13_5 9
#define OBJECT_13_4 8
#define OBJECT_13_3 7
#define OBJECT_13_2 6
#define OBJECT_13_1 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_13_4);
      goto lambda_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_17)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (Wrd9.Obj) = (current_block [OBJECT_13_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_13_2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_13_3]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_13_4]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_13_5]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (Wrd49.Obj) = (current_block [OBJECT_13_6]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (Wrd57.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd61.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd61.pObj)));
  (Wrd66.Obj) = (current_block [OBJECT_13_7]);
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  Rsp = (& (Rsp [2]));
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
parser_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
parser_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
#define LABEL_16_8 7
#define LABEL_16_6 9
#define ENVIRONMENT_LABEL_16_3 18
#define DEBUGGING_LABEL_16_2 17
#define OBJECT_16_1 16
#define OBJECT_16_0 15
#define EXECUTE_CACHE_16_9 11
#define EXECUTE_CACHE_16_7 13
#define FREE_REFERENCES_LABEL_16_0 10
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_16_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_16_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Wrd9.Obj) = (current_block [OBJECT_16_0]);
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
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_6)
  (Wrd10.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_8 7
#define LABEL_17_9 9
#define LABEL_17_10 11
#define LABEL_17_7 13
#define LABEL_17_12 15
#define LABEL_17_13 17
#define LABEL_17_14 19
#define ENVIRONMENT_LABEL_17_3 29
#define DEBUGGING_LABEL_17_2 28
#define OBJECT_17_2 27
#define OBJECT_17_1 26
#define OBJECT_17_0 25
#define EXECUTE_CACHE_17_11 21
#define EXECUTE_CACHE_17_6 23
#define FREE_REFERENCES_LABEL_17_0 20
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_17_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_17_8);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_17_9);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_17_10);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_17_12);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_17_13);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_17_14);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_19)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [3]);
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
  (Wrd19.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_28)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_27;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17_7);
  (Wrd9.Obj) = (current_block [OBJECT_17_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_25;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_24)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_23;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_22)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_21;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [0]);

DEFLABEL (label_20)
  (Wrd39.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_17)
  (Wrd30.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_16)
  (Wrd19.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_15)
  (Wrd10.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_13)
  (Wrd19.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_12)
  (Wrd10.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_9 7
#define LABEL_18_10 9
#define LABEL_18_11 11
#define LABEL_18_6 13
#define LABEL_18_13 15
#define LABEL_18_14 17
#define LABEL_18_15 19
#define LABEL_18_8 21
#define LABEL_18_16 23
#define LABEL_18_17 25
#define LABEL_18_18 27
#define ENVIRONMENT_LABEL_18_3 41
#define DEBUGGING_LABEL_18_2 40
#define OBJECT_18_6 39
#define OBJECT_18_5 38
#define OBJECT_18_4 37
#define OBJECT_18_3 36
#define OBJECT_18_2 35
#define OBJECT_18_1 34
#define OBJECT_18_0 33
#define EXECUTE_CACHE_18_12 29
#define EXECUTE_CACHE_18_7 31
#define FREE_REFERENCES_LABEL_18_0 28
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd36;
  machine_word Wrd47;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd42;
  machine_word Wrd39;
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
      current_block = (Rpc - LABEL_18_4);
      goto lambda_15;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_18_9);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_18_10);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_18_11);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_18_6);
      goto lambda_4;

    case 6:
      current_block = (Rpc - LABEL_18_13);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_18_14);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_18_15);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_18_8);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_18_16);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_18_17);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_18_18);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_27)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_40;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_39)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_38;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_37)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_36;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_12]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_18_8);
  (Wrd9.Obj) = (current_block [OBJECT_18_6]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_34;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_33)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_32;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_31)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_30;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [0]);

DEFLABEL (label_29)
  (Wrd39.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_18]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_25)
  (Wrd30.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_17]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_24)
  (Wrd19.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_16]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_23)
  (Wrd10.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_18)
  (Wrd19.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_17)
  (Wrd10.Obj) = Rvl;
  goto label_39;

DEFLABEL (lambda_28)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_18_6);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_51;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_50)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_49;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_48)
  (Rsp [0]) = (Wrd14.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_18_2]);
  (Wrd42.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd42.Lng))))
    goto label_47;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd39.Obj));
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd22.Obj) == (Wrd24.Obj)))
    goto label_42;

DEFLABEL (label_41)
  Rvl = (current_block [OBJECT_18_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd25.Obj) = (current_block [OBJECT_18_4]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd36.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd36.Lng)))
    goto label_43;
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_3]), 2);

DEFLABEL (label_43)
  (Wrd28.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd28.Obj) == (Wrd30.Obj))
    goto label_45;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_44;

DEFLABEL (label_45)
  Rvl = (current_block [OBJECT_18_5]);

DEFLABEL (label_44)
DEFLABEL (label_46)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_15]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_3]), 2);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto label_41;

DEFLABEL (label_49)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_21)
  (Wrd14.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_50;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 10
#define DEBUGGING_LABEL_19_2 9
#define EXECUTE_CACHE_19_6 7
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
parser_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
#define ENVIRONMENT_LABEL_21_3 5
#define DEBUGGING_LABEL_21_2 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_6 5
#define LABEL_22_5 7
#define LABEL_22_9 9
#define LABEL_22_10 11
#define ENVIRONMENT_LABEL_22_3 23
#define DEBUGGING_LABEL_22_2 22
#define OBJECT_22_2 21
#define OBJECT_22_1 20
#define OBJECT_22_0 19
#define EXECUTE_CACHE_22_11 13
#define EXECUTE_CACHE_22_8 15
#define EXECUTE_CACHE_22_7 17
#define FREE_REFERENCES_LABEL_22_0 12
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_22_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_22_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_22_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_17;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_16)
  (Wrd17.Obj) = (current_block [OBJECT_22_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (Wrd23.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (label_13)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 1);

DEFLABEL (label_8)
  (Wrd16.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define LABEL_23_8 9
#define TAG_23_9 3
#define LABEL_23_11 11
#define TAG_23_12 4
#define LABEL_23_13 13
#define LABEL_23_14 15
#define LABEL_23_17 17
#define LABEL_23_18 19
#define ENVIRONMENT_LABEL_23_3 36
#define DEBUGGING_LABEL_23_2 35
#define EXECUTE_CACHE_23_20 21
#define EXECUTE_CACHE_23_19 23
#define EXECUTE_CACHE_23_16 25
#define EXECUTE_CACHE_23_15 27
#define EXECUTE_CACHE_23_10 29
#define EXECUTE_CACHE_23_7 31
#define FREE_REFERENCE_23_0 34
#define FREE_REFERENCES_LABEL_23_0 20
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto generate_parser_code_7;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto lambda_6;

    case 3:
      current_block = (Rpc - LABEL_23_8);
      goto lambda_13;

    case 4:
      current_block = (Rpc - LABEL_23_11);
      goto lambda_14;

    case 5:
      current_block = (Rpc - LABEL_23_13);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_23_14);
      goto lambda_3;

    case 7:
      current_block = (Rpc - LABEL_23_17);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_23_18);
      goto lambda_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_parser_code_11)
DEFLABEL (generate_parser_code_7)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_18;
  Wrd8 = Wrd12;

DEFLABEL (label_17)
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (Rsp [3]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_5])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_17;

DEFLABEL (lambda_12)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_23_6);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_8])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [0]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_23_8);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_11])));
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
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_14]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_23_13);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_17]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_19]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_17);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_20]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_23_11);

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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_16]));

DEFLABEL (lambda_15)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_23_14);
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

DEFLABEL (lambda_16)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_23_18);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_5 3
#define LABEL_24_6 5
#define LABEL_24_7 7
#define LABEL_24_8 9
#define LABEL_24_10 11
#define LABEL_24_11 13
#define LABEL_24_12 15
#define LABEL_24_13 17
#define LABEL_24_14 19
#define LABEL_24_16 21
#define LABEL_24_4 23
#define LABEL_24_17 25
#define LABEL_24_18 27
#define LABEL_24_19 29
#define LABEL_24_21 31
#define LABEL_24_22 33
#define LABEL_24_23 35
#define LABEL_24_25 37
#define LABEL_24_26 39
#define LABEL_24_28 41
#define LABEL_24_29 43
#define LABEL_24_30 45
#define LABEL_24_31 47
#define LABEL_24_24 49
#define ENVIRONMENT_LABEL_24_3 79
#define DEBUGGING_LABEL_24_2 78
#define OBJECT_24_11 77
#define OBJECT_24_10 76
#define OBJECT_24_9 75
#define OBJECT_24_8 74
#define OBJECT_24_7 73
#define OBJECT_24_6 72
#define OBJECT_24_5 71
#define OBJECT_24_4 70
#define OBJECT_24_3 69
#define OBJECT_24_2 68
#define OBJECT_24_1 67
#define OBJECT_24_0 66
#define EXECUTE_CACHE_24_33 51
#define EXECUTE_CACHE_24_32 53
#define EXECUTE_CACHE_24_27 55
#define EXECUTE_CACHE_24_20 57
#define EXECUTE_CACHE_24_15 59
#define EXECUTE_CACHE_24_9 61
#define FREE_REFERENCE_24_1 64
#define FREE_REFERENCE_24_0 65
#define FREE_REFERENCES_LABEL_24_0 50
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd5;
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
  machine_word Wrd146;
  machine_word Wrd140;
  machine_word Wrd141;
  machine_word Wrd142;
  machine_word Wrd138;
  machine_word Wrd130;
  machine_word Wrd132;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd118;
  machine_word Wrd109;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd106;
  machine_word Wrd98;
  machine_word Wrd100;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd83;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd91;
  machine_word Wrd81;
  machine_word Wrd156;
  machine_word Wrd80;
  machine_word Wrd78;
  machine_word Wrd151;
  machine_word Wrd148;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd12;
  machine_word Wrd199;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd190;
  machine_word Wrd176;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd184;
  machine_word Wrd174;
  machine_word Wrd209;
  machine_word Wrd206;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd204;
  machine_word Wrd201;
  machine_word Wrd169;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd160;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd225;
  machine_word Wrd224;
  machine_word Wrd223;
  machine_word Wrd219;
  machine_word Wrd216;
  machine_word Wrd214;
  machine_word Wrd213;
  machine_word Wrd212;
  machine_word Wrd211;
  machine_word Wrd243;
  machine_word Wrd248;
  machine_word Wrd247;
  machine_word Wrd244;
  machine_word Wrd242;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd238;
  machine_word Wrd237;
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
      current_block = (Rpc - LABEL_24_5);
      goto continuation_26;

    case 1:
      current_block = (Rpc - LABEL_24_6);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto label_50;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto label_51;

    case 4:
      current_block = (Rpc - LABEL_24_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_24_11);
      goto continuation_16;

    case 6:
      current_block = (Rpc - LABEL_24_12);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_24_13);
      goto continuation_24;

    case 8:
      current_block = (Rpc - LABEL_24_14);
      goto label_49;

    case 9:
      current_block = (Rpc - LABEL_24_16);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_24_4);
      goto compile_parser_expression_35;

    case 11:
      current_block = (Rpc - LABEL_24_17);
      goto label_46;

    case 12:
      current_block = (Rpc - LABEL_24_18);
      goto label_48;

    case 13:
      current_block = (Rpc - LABEL_24_19);
      goto label_47;

    case 14:
      current_block = (Rpc - LABEL_24_21);
      goto label_45;

    case 15:
      current_block = (Rpc - LABEL_24_22);
      goto label_41;

    case 16:
      current_block = (Rpc - LABEL_24_23);
      goto label_42;

    case 17:
      current_block = (Rpc - LABEL_24_25);
      goto label_43;

    case 18:
      current_block = (Rpc - LABEL_24_26);
      goto label_44;

    case 19:
      current_block = (Rpc - LABEL_24_28);
      goto label_37;

    case 20:
      current_block = (Rpc - LABEL_24_29);
      goto label_38;

    case 21:
      current_block = (Rpc - LABEL_24_30);
      goto label_40;

    case 22:
      current_block = (Rpc - LABEL_24_31);
      goto label_39;

    case 23:
      current_block = (Rpc - LABEL_24_24);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_parser_expression_53)
DEFLABEL (compile_parser_expression_35)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd9.uLng) == 1)
    goto label_90;

DEFLABEL (label_89)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_88)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_64;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_63)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_62;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_61)
  (Rsp [1]) = (Wrd23.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_13]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_60;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [1]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_59)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_32]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_24_13);
  (Wrd211.Obj) = Rvl;
  (Wrd212.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd212.uLng) == 26))
    goto label_58;
  (Wrd213.Obj) = (Rsp [0]);
  (Wrd214.uLng) = (OBJECT_TYPE (Wrd213.Obj));
  if (! ((Wrd214.uLng) == 26))
    goto label_58;
  if (Rvl == (Wrd213.Obj))
    goto label_56;

DEFLABEL (label_57)
  (Wrd223.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd223.Obj);
  (Wrd224.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd224.Obj);
  (Wrd225.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd225.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_15]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_24_5);

DEFLABEL (label_56)
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_55;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_54)
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
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_11]), 2);

DEFLABEL (label_55)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_30]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_7]), 1);

DEFLABEL (label_40)
  (Wrd46.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_58)
  (Wrd216.Obj) = (Rsp [0]);
  (Wrd219.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_14]))));
  (* (--Rsp)) = (Wrd219.Obj);
  (* (--Rsp)) = (Wrd216.Obj);
  (* (--Rsp)) = (Wrd211.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_49)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  goto label_56;

DEFLABEL (label_60)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_31]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_7]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_29]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_7]), 1);

DEFLABEL (label_38)
  (Wrd23.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_28]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_65)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd76.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd148.Obj) = (current_block [OBJECT_24_2]);
  (Wrd151.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd151.Lng))))
    goto label_87;
  (Wrd78.uLng) = (OBJECT_DATUM (Wrd148.Obj));
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if ((Wrd78.Obj) == (Wrd80.Obj))
    goto label_86;

DEFLABEL (label_85)
  (Wrd81.Obj) = (current_block [OBJECT_24_4]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd91.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd91.Lng)))
    goto label_67;

DEFLABEL (label_66)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 2);

DEFLABEL (label_67)
  (Wrd85.uLng) = (OBJECT_DATUM (Wrd81.Obj));
  (Wrd86.Obj) = (Rsp [1]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if ((Wrd85.Obj) == (Wrd87.Obj))
    goto label_69;
  (Wrd83.Obj) = (current_block [OBJECT_24_6]);
  goto label_68;

DEFLABEL (label_69)
  (Wrd83.Obj) = (current_block [OBJECT_24_5]);

DEFLABEL (label_68)
DEFLABEL (label_84)
  Rsp = (& (Rsp [3]));
  if ((Wrd83.Obj) == ((SCHEME_OBJECT) 0))
    goto label_79;

DEFLABEL (label_78)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_1]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_77;
  Wrd109 = Wrd113;

DEFLABEL (label_76)
  (Wrd118.Obj) = (current_block [OBJECT_24_10]);
  (* (Rhp++)) = (Wrd109.Obj);
  (* (Rhp++)) = (Wrd118.Obj);
  (Wrd116.pObj) = (& (Rhp [-2]));
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd116.pObj)));
  (* (--Rsp)) = (Wrd117.Obj);
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_24]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (Wrd122.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (Wrd126.Obj) = (Rsp [5]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if ((Wrd127.uLng) == 1)
    goto label_71;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd126.Obj);

DEFLABEL (label_70)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_27]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_24_24);
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_33]));

DEFLABEL (label_71)
  if (! ((Wrd127.uLng) == 1))
    goto label_75;
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd130.Obj) = ((Wrd132.pObj) [1]);

DEFLABEL (label_74)
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd130.Obj));
  if (! ((Wrd142.uLng) == 1))
    goto label_73;
  (Wrd141.pObj) = (OBJECT_ADDRESS (Wrd130.Obj));
  (Wrd140.Obj) = ((Wrd141.pObj) [0]);

DEFLABEL (label_72)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd140.Obj);
  goto label_70;

DEFLABEL (label_73)
  (Wrd146.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_26]))));
  (* (--Rsp)) = (Wrd146.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_44)
  (Wrd140.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_25]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_7]), 1);

DEFLABEL (label_43)
  (Wrd130.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_23])), (Wrd110.pObj));

DEFLABEL (label_42)
  (Wrd109.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd93.Obj) = (Rsp [1]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if ((Wrd94.uLng) == 1)
    goto label_81;

DEFLABEL (label_80)
  (Wrd95.Obj) = (current_block [OBJECT_24_9]);
  (Rsp [4]) = (Wrd95.Obj);
  (Wrd96.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd96.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_15]));

DEFLABEL (label_81)
  if (! ((Wrd94.uLng) == 1))
    goto label_83;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd98.Obj) = ((Wrd100.pObj) [0]);

DEFLABEL (label_82)
  if ((Wrd98.Obj) == (current_block [OBJECT_24_8]))
    goto label_78;
  goto label_80;

DEFLABEL (label_83)
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_22]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_41)
  (Wrd98.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_86)
  Rsp = (& (Rsp [2]));
  goto label_78;

DEFLABEL (label_87)
  (Wrd156.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_21]))));
  (* (--Rsp)) = (Wrd156.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd148.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 2);

DEFLABEL (label_45)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_85;
  goto label_86;

DEFLABEL (label_90)
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd160.Obj);
  if (! ((Wrd9.uLng) == 1))
    goto label_105;
  (Wrd162.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd163.Obj) = ((Wrd162.pObj) [0]);
  (* (--Rsp)) = (Wrd163.Obj);

DEFLABEL (label_104)
  (Wrd201.Obj) = (current_block [OBJECT_24_2]);
  (Wrd204.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd204.Lng))))
    goto label_103;
  (Wrd171.uLng) = (OBJECT_DATUM (Wrd201.Obj));
  (Wrd172.Obj) = (Rsp [0]);
  (Wrd173.uLng) = (OBJECT_TYPE (Wrd172.Obj));
  if ((Wrd171.Obj) == (Wrd173.Obj))
    goto label_102;

DEFLABEL (label_101)
  (Wrd174.Obj) = (current_block [OBJECT_24_4]);
  (* (--Rsp)) = (Wrd174.Obj);
  (Wrd184.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd184.Lng))))
    goto label_66;
  (Wrd178.uLng) = (OBJECT_DATUM (Wrd174.Obj));
  (Wrd179.Obj) = (Rsp [1]);
  (Wrd180.uLng) = (OBJECT_TYPE (Wrd179.Obj));
  if ((Wrd178.Obj) == (Wrd180.Obj))
    goto label_92;
  (Wrd176.Obj) = (current_block [OBJECT_24_6]);
  goto label_91;

DEFLABEL (label_92)
  (Wrd176.Obj) = (current_block [OBJECT_24_5]);

DEFLABEL (label_91)
DEFLABEL (label_100)
  Rsp = (& (Rsp [3]));
  if ((Wrd176.Obj) == ((SCHEME_OBJECT) 0))
    goto label_89;

DEFLABEL (label_99)
  (Wrd190.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd190.Obj);
  (Wrd194.Obj) = (Rsp [2]);
  (Wrd195.uLng) = (OBJECT_TYPE (Wrd194.Obj));
  if (! ((Wrd195.uLng) == 1))
    goto label_98;
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd194.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [1]);
  (* (--Rsp)) = (Wrd193.Obj);

DEFLABEL (label_97)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_24_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_89;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd237.Obj) = (Rsp [2]);
  (Wrd238.uLng) = (OBJECT_TYPE (Wrd237.Obj));
  if (! ((Wrd238.uLng) == 1))
    goto label_96;
  (Wrd235.pObj) = (OBJECT_ADDRESS (Wrd237.Obj));
  (Wrd236.Obj) = ((Wrd235.pObj) [0]);
  (* (--Rsp)) = (Wrd236.Obj);

DEFLABEL (label_95)
  (Wrd244.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd247.Obj) = ((Wrd244.pObj) [0]);
  (Wrd248.uLng) = (OBJECT_TYPE (Wrd247.Obj));
  if ((Wrd248.uLng) == 50)
    goto label_94;
  Wrd243 = Wrd247;

DEFLABEL (label_93)
  (* (--Rsp)) = (Wrd243.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_16);
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_8])), (Wrd244.pObj));

DEFLABEL (label_51)
  (Wrd243.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd242.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd242.Obj);
  (* (--Rsp)) = (Wrd237.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd199.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_19]))));
  (* (--Rsp)) = (Wrd199.Obj);
  (* (--Rsp)) = (Wrd194.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_7]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (label_102)
  Rsp = (& (Rsp [2]));
  goto label_99;

DEFLABEL (label_103)
  (Wrd206.Obj) = (Rsp [0]);
  (Wrd209.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_18]))));
  (* (--Rsp)) = (Wrd209.Obj);
  (* (--Rsp)) = (Wrd206.Obj);
  (* (--Rsp)) = (Wrd201.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 2);

DEFLABEL (label_48)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_101;
  goto label_102;

DEFLABEL (label_105)
  (Wrd169.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_17]))));
  (* (--Rsp)) = (Wrd169.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_104;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_24_11);
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_24_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_79;
  goto label_78;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_89;
  goto label_99;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define TAG_25_6 1
#define LABEL_25_8 7
#define LABEL_25_10 9
#define ENVIRONMENT_LABEL_25_3 20
#define DEBUGGING_LABEL_25_2 19
#define OBJECT_25_1 18
#define OBJECT_25_0 17
#define EXECUTE_CACHE_25_11 11
#define EXECUTE_CACHE_25_9 13
#define EXECUTE_CACHE_25_7 15
#define FREE_REFERENCES_LABEL_25_0 10
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_25_4);
      goto wrap_external_parser_6;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_25_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_25_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wrap_external_parser_9)
DEFLABEL (wrap_external_parser_6)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_5])));
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_25_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_8);
  (Wrd9.Obj) = (current_block [OBJECT_25_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_10);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_25_1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_6 5
#define LABEL_26_5 7
#define LABEL_26_9 9
#define LABEL_26_10 11
#define LABEL_26_11 13
#define LABEL_26_12 15
#define LABEL_26_13 17
#define LABEL_26_14 19
#define LABEL_26_15 21
#define LABEL_26_16 23
#define LABEL_26_17 25
#define LABEL_26_19 27
#define LABEL_26_21 29
#define LABEL_26_20 31
#define ENVIRONMENT_LABEL_26_3 55
#define DEBUGGING_LABEL_26_2 54
#define OBJECT_26_10 53
#define OBJECT_26_9 52
#define OBJECT_26_8 51
#define OBJECT_26_7 50
#define OBJECT_26_6 49
#define OBJECT_26_5 48
#define OBJECT_26_4 47
#define OBJECT_26_3 46
#define OBJECT_26_2 45
#define OBJECT_26_1 44
#define OBJECT_26_0 43
#define EXECUTE_CACHE_26_23 33
#define EXECUTE_CACHE_26_22 35
#define EXECUTE_CACHE_26_18 37
#define EXECUTE_CACHE_26_8 39
#define EXECUTE_CACHE_26_7 41
#define FREE_REFERENCES_LABEL_26_0 32
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto lambda_26;

    case 1:
      current_block = (Rpc - LABEL_26_6);
      goto label_28;

    case 2:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_26_9);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_26_10);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_26_11);
      goto label_31;

    case 6:
      current_block = (Rpc - LABEL_26_12);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_26_13);
      goto label_33;

    case 8:
      current_block = (Rpc - LABEL_26_14);
      goto label_34;

    case 9:
      current_block = (Rpc - LABEL_26_15);
      goto label_35;

    case 10:
      current_block = (Rpc - LABEL_26_16);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_26_17);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_26_19);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_26_21);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_26_20);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_38)
DEFLABEL (lambda_26)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_59;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_58)
  (Wrd17.Obj) = (current_block [OBJECT_26_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_39;
  (Wrd74.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd74.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

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
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_17]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = (current_block [OBJECT_26_3]);
  (* (--Rsp)) = (Wrd73.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_26_17);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_26_4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_18]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_26_19);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_20]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_21]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_22]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_26_21);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_41;
  (Wrd58.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_23]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_26_20);
  (Wrd34.Obj) = Rvl;

DEFLABEL (label_40)
  (Wrd8.Obj) = (current_block [OBJECT_26_5]);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_26_6]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_26_7]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_26_8]);
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
  (Wrd33.Obj) = (current_block [OBJECT_26_9]);
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
  (Wrd46.Obj) = (current_block [OBJECT_26_10]);
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
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_16]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_15]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 1);

DEFLABEL (label_35)
  (Wrd55.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_14]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_34)
  (Wrd46.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_13]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 1);

DEFLABEL (label_32)
  (Wrd32.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_31)
  (Wrd23.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_29)
  (Wrd7.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_58;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_6 5
#define LABEL_27_5 7
#define ENVIRONMENT_LABEL_27_3 14
#define DEBUGGING_LABEL_27_2 13
#define EXECUTE_CACHE_27_7 9
#define FREE_REFERENCE_27_0 12
#define FREE_REFERENCES_LABEL_27_0 8
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto define_parser_compiler_2;

    case 1:
      current_block = (Rpc - LABEL_27_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_parser_compiler_6)
DEFLABEL (define_parser_compiler_2)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
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
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_8;
  Wrd14 = Wrd18;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_6])), (Wrd15.pObj));

DEFLABEL (label_4)
  (Wrd14.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define TAG_28_6 1
#define LABEL_28_8 7
#define LABEL_28_9 9
#define TAG_28_10 3
#define LABEL_28_15 11
#define LABEL_28_12 13
#define TAG_28_13 5
#define ENVIRONMENT_LABEL_28_3 31
#define DEBUGGING_LABEL_28_2 30
#define OBJECT_28_2 29
#define OBJECT_28_1 28
#define OBJECT_28_0 27
#define EXECUTE_CACHE_28_17 15
#define EXECUTE_CACHE_28_16 17
#define EXECUTE_CACHE_28_14 19
#define EXECUTE_CACHE_28_11 21
#define EXECUTE_CACHE_28_7 23
#define FREE_REFERENCE_28_0 26
#define FREE_REFERENCES_LABEL_28_0 14
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_28_4);
      goto lambda_9;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto lambda_14;

    case 2:
      current_block = (Rpc - LABEL_28_8);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_28_9);
      goto lambda_15;

    case 4:
      current_block = (Rpc - LABEL_28_15);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_28_12);
      goto lambda_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_13)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_5])));
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_28_5);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_9])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [5]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_28_8);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_12])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd18 = Wrd7;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd20.pObj) [3]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd20.pObj) [4]);
  ((Wrd18.pObj) [4]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [5]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_14]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_28_9);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_18;
  Wrd9 = Wrd13;

DEFLABEL (label_17)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  (Wrd21.Obj) = (current_block [OBJECT_28_0]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_28_1]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_28_2]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Rsp [1]) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_16]));

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_15])), (Wrd10.pObj));

DEFLABEL (label_11)
  (Wrd9.Obj) = Rvl;
  goto label_17;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_28_12);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [3]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_17]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define TAG_29_6 1
#define LABEL_29_7 7
#define LABEL_29_8 9
#define TAG_29_9 3
#define ENVIRONMENT_LABEL_29_3 21
#define DEBUGGING_LABEL_29_2 20
#define OBJECT_29_0 19
#define EXECUTE_CACHE_29_13 11
#define EXECUTE_CACHE_29_12 13
#define EXECUTE_CACHE_29_11 15
#define EXECUTE_CACHE_29_10 17
#define FREE_REFERENCES_LABEL_29_0 10
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_29_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_29_8);
      goto lambda_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_5])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_8])));
  Rhp += 1;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd21 = Wrd20;
  (Wrd22.Obj) = (Rsp [2]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_7);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_29_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [3]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_11]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_29_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_0]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_13]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define TAG_30_7 2
#define ENVIRONMENT_LABEL_30_3 17
#define DEBUGGING_LABEL_30_2 16
#define OBJECT_30_0 15
#define EXECUTE_CACHE_30_10 9
#define EXECUTE_CACHE_30_9 11
#define EXECUTE_CACHE_30_8 13
#define FREE_REFERENCES_LABEL_30_0 8
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_30_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_6])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [5]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Wrd9.Obj) = (current_block [OBJECT_30_0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_9]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_30_6);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define TAG_31_6 1
#define LABEL_31_8 7
#define ENVIRONMENT_LABEL_31_3 17
#define DEBUGGING_LABEL_31_2 16
#define OBJECT_31_0 15
#define EXECUTE_CACHE_31_10 9
#define EXECUTE_CACHE_31_9 11
#define EXECUTE_CACHE_31_7 13
#define FREE_REFERENCES_LABEL_31_0 8
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (Rsp [0]) = (Wrd16.Obj);
  (Rsp [5]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_31_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_8);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_31_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd14.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define TAG_32_6 1
#define LABEL_32_8 7
#define ENVIRONMENT_LABEL_32_3 18
#define DEBUGGING_LABEL_32_2 17
#define OBJECT_32_1 16
#define OBJECT_32_0 15
#define EXECUTE_CACHE_32_10 9
#define EXECUTE_CACHE_32_9 11
#define EXECUTE_CACHE_32_7 13
#define FREE_REFERENCES_LABEL_32_0 8
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_32_4);
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (Rsp [0]) = (Wrd16.Obj);
  (Rsp [5]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_32_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_8);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_32_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_32_1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define TAG_33_6 1
#define LABEL_33_8 7
#define ENVIRONMENT_LABEL_33_3 18
#define DEBUGGING_LABEL_33_2 17
#define OBJECT_33_1 16
#define OBJECT_33_0 15
#define EXECUTE_CACHE_33_10 9
#define EXECUTE_CACHE_33_9 11
#define EXECUTE_CACHE_33_7 13
#define FREE_REFERENCES_LABEL_33_0 8
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_33_4);
      goto lambda_6;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_33_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (Rsp [0]) = (Wrd16.Obj);
  (Rsp [5]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_33_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_8);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_33_0]);
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
  (Wrd21.Obj) = (current_block [OBJECT_33_1]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define TAG_34_6 1
#define LABEL_34_7 7
#define LABEL_34_8 9
#define TAG_34_9 3
#define ENVIRONMENT_LABEL_34_3 18
#define DEBUGGING_LABEL_34_2 17
#define EXECUTE_CACHE_34_12 11
#define EXECUTE_CACHE_34_11 13
#define EXECUTE_CACHE_34_10 15
#define FREE_REFERENCES_LABEL_34_0 10
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_34_4);
      goto post_processed_parser_3;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_34_8);
      goto lambda_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (post_processed_parser_6)
DEFLABEL (post_processed_parser_3)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_5])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_8])));
  Rhp += 2;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd23 = Wrd20;
  (Wrd24.Obj) = (Rsp [6]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_7);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_12]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_34_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd7.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [3]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_11]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_34_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_5 3
#define LABEL_35_4 5
#define LABEL_35_7 7
#define ENVIRONMENT_LABEL_35_3 16
#define DEBUGGING_LABEL_35_2 15
#define OBJECT_35_1 14
#define OBJECT_35_0 13
#define EXECUTE_CACHE_35_8 9
#define EXECUTE_CACHE_35_6 11
#define FREE_REFERENCES_LABEL_35_0 8
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_5);
      goto continuation_8;

    case 1:
      current_block = (Rpc - LABEL_35_4);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_14)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  if (! ((Wrd8.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_15;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (label_15)
  Wrd12 = Wrd8;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_19)
  (Wrd16.Obj) = (current_block [OBJECT_35_0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_35_7);
  (Wrd9.Obj) = (current_block [OBJECT_35_0]);
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
  (Wrd21.Obj) = (current_block [OBJECT_35_1]);
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
  INTERRUPT_CHECK (27, LABEL_35_5);
  (Wrd12.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_7 7
#define ENVIRONMENT_LABEL_36_3 18
#define DEBUGGING_LABEL_36_2 17
#define OBJECT_36_3 16
#define OBJECT_36_2 15
#define OBJECT_36_1 14
#define OBJECT_36_0 13
#define EXECUTE_CACHE_36_6 9
#define FREE_REFERENCE_36_0 12
#define FREE_REFERENCES_LABEL_36_0 8
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_36_4);
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (Wrd9.Obj) = (current_block [OBJECT_36_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_11;
  Wrd11 = Wrd15;

DEFLABEL (label_10)
  (Wrd20.Obj) = (current_block [OBJECT_36_1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_36_2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd25.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_36_3]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_7])), (Wrd12.pObj));

DEFLABEL (label_7)
  (Wrd11.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_8 7
#define LABEL_37_6 9
#define TAG_37_7 3
#define LABEL_37_11 11
#define LABEL_37_12 13
#define TAG_37_13 5
#define LABEL_37_18 15
#define LABEL_37_19 17
#define LABEL_37_15 19
#define TAG_37_16 8
#define LABEL_37_22 21
#define LABEL_37_20 23
#define ENVIRONMENT_LABEL_37_3 41
#define DEBUGGING_LABEL_37_2 40
#define OBJECT_37_4 39
#define OBJECT_37_3 38
#define OBJECT_37_2 37
#define OBJECT_37_1 36
#define OBJECT_37_0 35
#define EXECUTE_CACHE_37_21 25
#define EXECUTE_CACHE_37_17 27
#define EXECUTE_CACHE_37_14 29
#define EXECUTE_CACHE_37_10 31
#define EXECUTE_CACHE_37_9 33
#define FREE_REFERENCES_LABEL_37_0 24
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd50;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_37_4);
      goto lambda_18;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_37_8);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_37_6);
      goto loop_16;

    case 4:
      current_block = (Rpc - LABEL_37_11);
      goto continuation_15;

    case 5:
      current_block = (Rpc - LABEL_37_12);
      goto lambda_28;

    case 6:
      current_block = (Rpc - LABEL_37_18);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_37_19);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_37_15);
      goto lambda_29;

    case 9:
      current_block = (Rpc - LABEL_37_22);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_37_20);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_26)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_30;
  (Wrd7.Obj) = (current_block [OBJECT_37_3]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_10]));

DEFLABEL (label_30)
  if (! ((Wrd6.uLng) == 1))
    goto label_35;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_34)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_31;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd46.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_6])));
  Rhp += 2;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  Wrd44 = Wrd46;
  (Wrd45.Obj) = (Rsp [4]);
  ((Wrd44.pObj) [2]) = (Wrd45.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  ((Wrd44.pObj) [3]) = (Wrd42.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd36.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_37_1]);
  (Rsp [3]) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd39.Obj);
  (Rsp [0]) = (Wrd47.Obj);
  goto loop_16;

DEFLABEL (label_31)
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_33;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_32)
  (Wrd30.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd33.Obj);
  (Rsp [0]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_9]));

DEFLABEL (label_33)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 1);

DEFLABEL (label_21)
  (Wrd21.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 1);

DEFLABEL (label_20)
  (Wrd11.Obj) = Rvl;
  goto label_34;

DEFLABEL (loop_27)
DEFLABEL (loop_16)
  INTERRUPT_CHECK (26, LABEL_37_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_12])));
  Rhp += 4;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd16 = Wrd9;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  ((Wrd16.pObj) [3]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_14]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_37_11);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_15])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_17]));

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_37_12);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd19.Obj) = ((Wrd10.pObj) [5]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_40;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd12.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_39)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_36;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_20]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_21]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_37_20);
  (Wrd9.Obj) = (current_block [OBJECT_37_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_10]));

DEFLABEL (label_36)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd35.Obj);
  (Wrd43.Obj) = ((Wrd33.pObj) [5]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_38;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd36.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_37)
  (Rsp [1]) = (Wrd36.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  goto loop_16;

DEFLABEL (label_38)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_19]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 1);

DEFLABEL (label_23)
  (Wrd36.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_18]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 1);

DEFLABEL (label_22)
  (Wrd12.Obj) = Rvl;
  goto label_39;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_37_15);

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
    goto label_42;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_41)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [2]);
  (Rsp [4]) = (Wrd24.Obj);
  (Wrd27.Obj) = ((Wrd26.pObj) [3]);
  (Rsp [3]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_9]));

DEFLABEL (label_42)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_22]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_8 7
#define LABEL_38_6 9
#define TAG_38_7 3
#define LABEL_38_11 11
#define LABEL_38_15 13
#define LABEL_38_12 15
#define TAG_38_13 6
#define LABEL_38_17 17
#define LABEL_38_18 19
#define TAG_38_19 8
#define LABEL_38_24 21
#define LABEL_38_21 23
#define TAG_38_22 10
#define LABEL_38_25 25
#define ENVIRONMENT_LABEL_38_3 42
#define DEBUGGING_LABEL_38_2 41
#define OBJECT_38_1 40
#define OBJECT_38_0 39
#define EXECUTE_CACHE_38_23 27
#define EXECUTE_CACHE_38_20 29
#define EXECUTE_CACHE_38_14 31
#define EXECUTE_CACHE_38_10 33
#define EXECUTE_CACHE_38_16 35
#define EXECUTE_CACHE_38_9 37
#define FREE_REFERENCES_LABEL_38_0 26
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd48;
  machine_word Wrd36;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_16;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_38_8);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_38_6);
      goto loop_14;

    case 4:
      current_block = (Rpc - LABEL_38_11);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_38_15);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_38_12);
      goto lambda_27;

    case 7:
      current_block = (Rpc - LABEL_38_17);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_38_18);
      goto lambda_28;

    case 9:
      current_block = (Rpc - LABEL_38_24);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_38_21);
      goto lambda_29;

    case 11:
      current_block = (Rpc - LABEL_38_25);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_30;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_10]));

DEFLABEL (label_30)
  if (! ((Wrd6.uLng) == 1))
    goto label_35;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_34)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_31;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd46.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_6])));
  Rhp += 3;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  Wrd44 = Wrd46;
  (Wrd45.Obj) = (Rsp [4]);
  ((Wrd44.pObj) [2]) = (Wrd45.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  ((Wrd44.pObj) [3]) = (Wrd42.Obj);
  (Wrd39.Obj) = (Rsp [2]);
  ((Wrd44.pObj) [4]) = (Wrd39.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd47.Obj);
  (Wrd34.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd35.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_14;

DEFLABEL (label_31)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_33;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [0]);

DEFLABEL (label_32)
  (Wrd28.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd30.Obj);
  (Rsp [1]) = (Wrd19.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_9]));

DEFLABEL (label_33)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 1);

DEFLABEL (label_19)
  (Wrd19.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (label_18)
  (Wrd9.Obj) = Rvl;
  goto label_34;

DEFLABEL (loop_26)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_38_6);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_40;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_39)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_36;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_12])));
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_14]));

DEFLABEL (label_36)
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_38;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_37)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [3]);
  (Rsp [3]) = (Wrd25.Obj);
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  (Rsp [4]) = (Wrd28.Obj);
  (Wrd31.Obj) = ((Wrd27.pObj) [4]);
  (Rsp [2]) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_16]));

DEFLABEL (label_38)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_39;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_38_12);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_18])));
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_20]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_38_17);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_21])));
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_23]));

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_38_18);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_42;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_41)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = ((Wrd21.pObj) [4]);
  (Rsp [2]) = (Wrd23.Obj);
  goto loop_14;

DEFLABEL (label_42)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_24]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_38_21);

DEFLABEL (lambda_9)
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
    goto label_44;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_43)
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Wrd29.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd29.Obj);
  (Rsp [4]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_16]));

DEFLABEL (label_44)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_25]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_43;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_7 7
#define LABEL_39_9 9
#define LABEL_39_11 11
#define LABEL_39_12 13
#define TAG_39_13 5
#define LABEL_39_15 15
#define TAG_39_16 6
#define LABEL_39_17 17
#define LABEL_39_18 19
#define TAG_39_19 8
#define LABEL_39_22 21
#define LABEL_39_23 23
#define TAG_39_24 10
#define LABEL_39_28 25
#define ENVIRONMENT_LABEL_39_3 52
#define DEBUGGING_LABEL_39_2 51
#define OBJECT_39_3 50
#define OBJECT_39_2 49
#define OBJECT_39_1 48
#define OBJECT_39_0 47
#define EXECUTE_CACHE_39_29 27
#define EXECUTE_CACHE_39_27 29
#define EXECUTE_CACHE_39_26 31
#define EXECUTE_CACHE_39_25 33
#define EXECUTE_CACHE_39_21 35
#define EXECUTE_CACHE_39_20 37
#define EXECUTE_CACHE_39_14 39
#define EXECUTE_CACHE_39_10 41
#define EXECUTE_CACHE_39_8 43
#define EXECUTE_CACHE_39_6 45
#define FREE_REFERENCES_LABEL_39_0 26
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_39_4);
      goto lambda_24;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_39_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_39_11);
      goto continuation_19;

    case 5:
      current_block = (Rpc - LABEL_39_12);
      goto lambda_28;

    case 6:
      current_block = (Rpc - LABEL_39_15);
      goto lambda_29;

    case 7:
      current_block = (Rpc - LABEL_39_17);
      goto continuation_17;

    case 8:
      current_block = (Rpc - LABEL_39_18);
      goto lambda_30;

    case 9:
      current_block = (Rpc - LABEL_39_22);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_39_23);
      goto lambda_31;

    case 11:
      current_block = (Rpc - LABEL_39_28);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_27)
DEFLABEL (lambda_24)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_12])));
  Rhp += 6;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd20 = Wrd9;
  (Wrd21.Obj) = (Rsp [8]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [7]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  ((Wrd20.pObj) [4]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd20.pObj) [5]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [6]) = (Wrd13.Obj);
  ((Wrd20.pObj) [7]) = Rvl;
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_14]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_39_11);
  (Wrd9.Obj) = (current_block [OBJECT_39_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_39_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd27.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd41.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd46.Obj) = (current_block [OBJECT_39_2]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_39_12);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_15])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd13 = Wrd6;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = ((Wrd15.pObj) [3]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_18])));
  Rhp += 3;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd30 = Wrd21;
  (Wrd33.Obj) = ((Wrd15.pObj) [4]);
  ((Wrd30.pObj) [2]) = (Wrd33.Obj);
  (Wrd29.Obj) = ((Wrd15.pObj) [5]);
  ((Wrd30.pObj) [3]) = (Wrd29.Obj);
  (Wrd25.Obj) = ((Wrd15.pObj) [6]);
  ((Wrd30.pObj) [4]) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_20]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_39_17);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_22]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_23])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd15 = Wrd10;
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [6]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd17.pObj) [7]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_25]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_39_22);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_27]));

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_39_15);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [4]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_21]));

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_39_18);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_26]));

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_39_23);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_29]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_39_28);
  (Wrd9.Obj) = (current_block [OBJECT_39_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_39_3]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd20.Obj) = ((Wrd14.pObj) [3]);
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_26]));

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
#define LABEL_37 59
#define LABEL_38 61
#define LABEL_39 63
#define LABEL_40 65
#define LABEL_41 67
#define LABEL_42 69
#define LABEL_43 71
#define LABEL_44 73
#define LABEL_45 75
#define LABEL_46 77
#define LABEL_48 79
#define LABEL_49 81
#define LABEL_50 83
#define LABEL_51 85
#define LABEL_52 87
#define LABEL_53 89
#define LABEL_54 91
#define LABEL_55 93
#define LABEL_56 95
#define LABEL_57 97
#define LABEL_58 99
#define LABEL_59 101
#define LABEL_60 103
#define ENVIRONMENT_LABEL_3 204
#define DEBUGGING_LABEL_2 203
#define PURIFICATION_ROOT 202
#define OBJECT_83 201
#define OBJECT_82 200
#define OBJECT_81 199
#define OBJECT_80 198
#define OBJECT_79 197
#define OBJECT_78 196
#define OBJECT_77 195
#define OBJECT_76 194
#define OBJECT_75 193
#define OBJECT_74 192
#define OBJECT_73 191
#define OBJECT_72 190
#define OBJECT_71 189
#define OBJECT_70 188
#define OBJECT_69 187
#define OBJECT_68 186
#define OBJECT_67 185
#define OBJECT_66 184
#define OBJECT_65 183
#define OBJECT_64 182
#define OBJECT_63 181
#define OBJECT_62 180
#define OBJECT_61 179
#define OBJECT_60 178
#define OBJECT_59 177
#define OBJECT_58 176
#define OBJECT_57 175
#define OBJECT_56 174
#define OBJECT_55 173
#define OBJECT_54 172
#define OBJECT_53 171
#define OBJECT_52 170
#define OBJECT_51 169
#define OBJECT_50 168
#define OBJECT_49 167
#define OBJECT_48 166
#define OBJECT_47 165
#define OBJECT_46 164
#define OBJECT_45 163
#define OBJECT_44 162
#define OBJECT_43 161
#define OBJECT_42 160
#define OBJECT_41 159
#define OBJECT_40 158
#define OBJECT_39 157
#define OBJECT_38 156
#define OBJECT_37 155
#define OBJECT_36 154
#define OBJECT_35 153
#define OBJECT_34 152
#define OBJECT_33 151
#define OBJECT_32 150
#define OBJECT_31 149
#define OBJECT_30 148
#define OBJECT_29 147
#define OBJECT_28 146
#define OBJECT_27 145
#define OBJECT_26 144
#define OBJECT_25 143
#define OBJECT_24 142
#define OBJECT_23 141
#define OBJECT_22 140
#define OBJECT_21 139
#define OBJECT_20 138
#define OBJECT_19 137
#define OBJECT_18 136
#define OBJECT_17 135
#define OBJECT_16 134
#define OBJECT_15 133
#define OBJECT_14 132
#define OBJECT_13 131
#define OBJECT_12 130
#define OBJECT_11 129
#define OBJECT_10 128
#define OBJECT_9 127
#define OBJECT_8 126
#define OBJECT_7 125
#define OBJECT_6 124
#define OBJECT_5 123
#define OBJECT_4 122
#define OBJECT_3 121
#define OBJECT_2 120
#define OBJECT_1 119
#define OBJECT_0 118
#define EXECUTE_CACHE_47 105
#define EXECUTE_CACHE_25 107
#define EXECUTE_CACHE_17 109
#define EXECUTE_CACHE_15 111
#define GLOBAL_EXECUTE_CACHE_36 114
#define GLOBAL_EXECUTE_CACHE_10 116
#define FREE_REFERENCES_LABEL_0 104
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
parser_so_cefbcd6d4e54c771 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto continuation_29;

    case 26:
      current_block = (Rpc - LABEL_34);
      goto continuation_28;

    case 27:
      current_block = (Rpc - LABEL_35);
      goto continuation_26;

    case 28:
      current_block = (Rpc - LABEL_37);
      goto continuation_30;

    case 29:
      current_block = (Rpc - LABEL_38);
      goto continuation_31;

    case 30:
      current_block = (Rpc - LABEL_39);
      goto continuation_32;

    case 31:
      current_block = (Rpc - LABEL_40);
      goto continuation_36;

    case 32:
      current_block = (Rpc - LABEL_41);
      goto continuation_35;

    case 33:
      current_block = (Rpc - LABEL_42);
      goto continuation_33;

    case 34:
      current_block = (Rpc - LABEL_43);
      goto continuation_37;

    case 35:
      current_block = (Rpc - LABEL_44);
      goto continuation_39;

    case 36:
      current_block = (Rpc - LABEL_45);
      goto continuation_38;

    case 37:
      current_block = (Rpc - LABEL_46);
      goto continuation_40;

    case 38:
      current_block = (Rpc - LABEL_48);
      goto continuation_41;

    case 39:
      current_block = (Rpc - LABEL_49);
      goto continuation_42;

    case 40:
      current_block = (Rpc - LABEL_50);
      goto continuation_43;

    case 41:
      current_block = (Rpc - LABEL_51);
      goto continuation_44;

    case 42:
      current_block = (Rpc - LABEL_52);
      goto continuation_45;

    case 43:
      current_block = (Rpc - LABEL_53);
      goto continuation_46;

    case 44:
      current_block = (Rpc - LABEL_54);
      goto continuation_47;

    case 45:
      current_block = (Rpc - LABEL_55);
      goto continuation_48;

    case 46:
      current_block = (Rpc - LABEL_56);
      goto continuation_49;

    case 47:
      current_block = (Rpc - LABEL_57);
      goto continuation_50;

    case 48:
      current_block = (Rpc - LABEL_58);
      goto label_55;

    case 49:
      current_block = (Rpc - LABEL_59);
      goto label_56;

    case 50:
      current_block = (Rpc - LABEL_60);
      goto expression_52;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_52)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_59])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_56)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_55)
  {
    static const short sections [] =
      {
	0,
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
	2,
	2,
	1,
	1,
	2,
	2,
	1,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	0,
	1,
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
    if (counter > 39)
      goto label_54;
    blocks = (current_block [OBJECT_83]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_58])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_54)
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
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_36]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 2);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_34);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_52]);
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
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 2);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_41);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_45);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd5.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_82]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_parser_so_cefbcd6d4e54c771 [39] =
  {
    { "parser_so_code_1", 12, parser_so_code_1 },
    { "parser_so_code_2", 2, parser_so_code_2 },
    { "parser_so_code_3", 4, parser_so_code_3 },
    { "parser_so_code_4", 20, parser_so_code_4 },
    { "parser_so_code_5", 4, parser_so_code_5 },
    { "parser_so_code_6", 3, parser_so_code_6 },
    { "parser_so_code_7", 1, parser_so_code_7 },
    { "parser_so_code_8", 1, parser_so_code_8 },
    { "parser_so_code_9", 1, parser_so_code_9 },
    { "parser_so_code_10", 1, parser_so_code_10 },
    { "parser_so_code_11", 3, parser_so_code_11 },
    { "parser_so_code_12", 1, parser_so_code_12 },
    { "parser_so_code_13", 1, parser_so_code_13 },
    { "parser_so_code_14", 6, parser_so_code_14 },
    { "parser_so_code_15", 4, parser_so_code_15 },
    { "parser_so_code_16", 4, parser_so_code_16 },
    { "parser_so_code_17", 9, parser_so_code_17 },
    { "parser_so_code_18", 13, parser_so_code_18 },
    { "parser_so_code_19", 2, parser_so_code_19 },
    { "parser_so_code_20", 2, parser_so_code_20 },
    { "parser_so_code_21", 1, parser_so_code_21 },
    { "parser_so_code_22", 5, parser_so_code_22 },
    { "parser_so_code_23", 9, parser_so_code_23 },
    { "parser_so_code_24", 24, parser_so_code_24 },
    { "parser_so_code_25", 4, parser_so_code_25 },
    { "parser_so_code_26", 15, parser_so_code_26 },
    { "parser_so_code_27", 3, parser_so_code_27 },
    { "parser_so_code_28", 6, parser_so_code_28 },
    { "parser_so_code_29", 4, parser_so_code_29 },
    { "parser_so_code_30", 3, parser_so_code_30 },
    { "parser_so_code_31", 3, parser_so_code_31 },
    { "parser_so_code_32", 3, parser_so_code_32 },
    { "parser_so_code_33", 3, parser_so_code_33 },
    { "parser_so_code_34", 4, parser_so_code_34 },
    { "parser_so_code_35", 3, parser_so_code_35 },
    { "parser_so_code_36", 3, parser_so_code_36 },
    { "parser_so_code_37", 11, parser_so_code_37 },
    { "parser_so_code_38", 12, parser_so_code_38 },
    { "parser_so_code_39", 12, parser_so_code_39 }
  };

int
decl_parser_so_cefbcd6d4e54c771 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_parser_so_cefbcd6d4e54c771);
  return (0);
}

DECLARE_COMPILED_CODE ("parser.so", 51, decl_parser_so_cefbcd6d4e54c771, parser_so_cefbcd6d4e54c771)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_parser_so_data_cefbcd6d4e54c771 [5084] =
  "\xcd\x01\x47\xd2\x0b\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x0d\xb9"
  "\x08\xc1\xba\x06\x07\x85\xc2\xbb\x02\xc1\xbc\x28\x0d\xbd\x28\x0d"
  "\xbe\x28\x0d\xbf\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x0d\x1c\x24"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0d\x1c\x08\xb4\x0d\x1c\x0d"
  "\x1c\x88\x0d\x1c\x0d\x1c\x08\x8a\x1b\x1b\x08\x89\xb2\x0d\x1c\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xc2\x1c\xb2\x28\x0d"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x86\x88\x1b\x24\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x08\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x08\x1b\x08\x88\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\xb1\x0d\x08\x88\x08\x89"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x0d\x1c\x08\x88"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x08\x0d\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x1c\x1b\x0d\x1c\x08\x88\x0d\x1c\x08\x0d\x1c\x1b\x08"
  "\x89\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x08\x88"
  "\x0d\x0d\x1c\x1b\x1b\x08\x1b\x1b\x08\x89\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb2\xb4\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb4\x08\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x08\x28\x1b\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08"
  "\xb4\xb2\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x08\x07\x85\xb3\x02\xb4\xb2\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29"
  "\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\xb4\x1b\x08\x88\xb2\x28\x1b\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x08\x0c\x1b\xb2\x06\x07\x85\xb3\x02\x0c"
  "\xb4\x0d\x1c\x0d\xbb\x24\x28\x1b\x28\x1b\x28\xb5\x28\x0d\x1c\x28"
  "\x0d\xbd\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x08"
  "\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x0d\x0d\x0d\x0d\x1b\x0d"
  "\x1c\xb4\x1b\x1b\x88\x1b\x1b\x08\x8a\xb2\x28\x1b\x28\x1b\x28\x1b"
  "\x28\xb6\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d"
  "\x08\xb3\x24\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x08\x88\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe"
  "\x1d\xb0\x02\x88\x1b\x08\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0"
  "\x02\x88\x1b\x08\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x08\x1b\x08\x88\xb3\x24\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x02\x88"
  "\x0d\x1c\x1b\x08\x88\xb4\x08\xb2\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb4\xb2\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x02\x88"
  "\x1b\x0d\x1b\x08\x88\x08\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\xb4\x2a"
  "\x1b\x1b\x2a\x80\xb3\x2a\x1b\x2a\x1b\xb5\x2a\x1b\x1b\x2a\x1b\xb6"
  "\x2a\x1b\x82\x1b\x2a\x1b\x2a\xb1\x1b\x2a\x1b\x0d\x1c\x81\x1b\x2a"
  "\x0d\x1b\x1b\x2a\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x1b\x2a"
  "\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b"
  "\x1b\x08\x8a\x1b\x2a\x1b\xb1\x08\x89\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x08\x89\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x1b\x2a\xb7\x1b\x2a\xc2\x02\x02"
  "\x0d\x1b\x1b\x2a\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\xc3\x1b\x1b\x2a"
  "\x28\x0d\x28\x0d\x26\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x02\x0b\x70\x61\x72\x73\x65\x72\x2e\x69"
  "\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x1b\x55\x6e\x6b\x6e\x6f\x77\x6e"
  "\x20\x70\x61\x72\x73\x65\x72\x20\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x3a\x06\x6e\x6f\x69\x73\x65\x04\x63\x64\x72\x0d\x6f\x62"
  "\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x1e\x04\x63\x61\x72\x03"
  "\x06\x6c\x69\x73\x74\x3f\x03\x0c\x69\x64\x65\x6e\x74\x69\x66\x69"
  "\x65\x72\x3f\x03\x14\x70\x61\x72\x73\x65\x72\x2d\x70\x72\x65\x70"
  "\x72\x6f\x63\x65\x73\x73\x6f\x72\x05\x1d\x70\x72\x65\x70\x72\x6f"
  "\x63\x65\x73\x73\x2d\x70\x61\x72\x73\x65\x72\x2d\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x09\x04\x06\x65\x72\x72\x6f\x72\x0a\x06"
  "\x3f\x1a\x81\x87\x02\x3e\x18\x81\x87\x02\x3d\x16\x81\x87\x02\x3c"
  "\x14\x81\x83\x02\x3b\x12\x81\x89\x02\x3a\x10\x81\x83\x02\x39\x0e"
  "\x81\x89\x02\x38\x0c\x85\x08\x37\x0a\x81\x87\x02\x36\x08\x81\x87"
  "\x02\x35\x06\x81\x89\x02\x34\x04\x81\x87\x02\x19\x31\x0b\x02\x04"
  "\x04\x6d\x61\x70\x0c\x05\x09\x03\x41\x06\x81\x85\x02\x40\x04\x85"
  "\x08\x05\x0d\x0d\x02\x15\x70\x61\x72\x73\x65\x72\x2d\x70\x72\x65"
  "\x70\x72\x6f\x63\x65\x73\x73\x6f\x72\x73\x0e\x02\x04\x09\x66\x6f"
  "\x72\x2d\x65\x61\x63\x68\x05\x10\x68\x61\x73\x68\x2d\x74\x61\x62"
  "\x6c\x65\x2f\x70\x75\x74\x21\x0f\x04\x1b\x64\x65\x66\x69\x6e\x65"
  "\x2d\x70\x61\x72\x73\x65\x72\x2d\x70\x72\x65\x70\x72\x6f\x63\x65"
  "\x73\x73\x6f\x72\x10\x04\x45\x0a\x81\x85\x02\x44\x08\x81\x85\x02"
  "\x43\x06\x81\x8b\x02\x42\x04\x84\x06\x09\x15\x11\x02\x06\x71\x75"
  "\x6f\x74\x65\x12\x07\x73\x79\x6d\x62\x6f\x6c\x13\x08\x6d\x69\x74"
  "\x2d\x62\x76\x6c\x14\x02\x2b\x15\x0b\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x16\x13\x16\x18\x64\x65\x66\x69\x6e\x65\x2d\x2a\x70"
  "\x61\x72\x73\x65\x72\x2d\x65\x78\x70\x61\x6e\x64\x65\x72\x17\x07"
  "\x6c\x61\x6d\x62\x64\x61\x18\x04\x0d\x63\x6c\x6f\x73\x65\x2d\x73"
  "\x79\x6e\x74\x61\x78\x19\x04\x0e\x73\x79\x6e\x74\x61\x78\x2d\x6d"
  "\x61\x74\x63\x68\x3f\x1a\x03\x12\x69\x6c\x6c\x2d\x66\x6f\x72\x6d"
  "\x65\x64\x2d\x73\x79\x6e\x74\x61\x78\x1b\x04\x59\x2a\x81\x8b\x02"
  "\x58\x28\x81\x8b\x02\x57\x26\x81\x8b\x02\x56\x24\x81\x8b\x02\x55"
  "\x22\x81\x8b\x02\x54\x20\x81\x8b\x02\x53\x1e\x81\x89\x02\x52\x1c"
  "\x81\x89\x02\x51\x1a\x81\x89\x02\x50\x18\x81\x8b\x02\x4f\x16\x81"
  "\x8b\x02\x4e\x14\x81\x89\x02\x4d\x12\x81\x89\x02\x4c\x10\x81\x89"
  "\x02\x4b\x0e\x81\x8b\x02\x4a\x0c\x81\x89\x02\x49\x0a\x81\x8b\x02"
  "\x48\x08\x81\x87\x02\x47\x06\x81\x85\x02\x46\x04\x84\x06\x29\x3b"
  "\x1c\x02\x06\x61\x70\x70\x6c\x79\x1d\x04\x14\x64\x65\x66\x69\x6e"
  "\x65\x2d\x70\x61\x72\x73\x65\x72\x2d\x6d\x61\x63\x72\x6f\x05\x09"
  "\x03\x5d\x0a\x81\x89\x02\x5c\x08\x81\x8b\x02\x5b\x06\x81\x89\x02"
  "\x5a\x04\x84\x06\x09\x13\x1e\x02\x0e\x02\x03\x14\x6c\x6f\x6f\x6b"
  "\x75\x70\x2d\x70\x61\x72\x73\x65\x72\x2d\x6d\x61\x63\x72\x6f\x05"
  "\x0f\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f\x67\x65\x74\x1f"
  "\x03\x60\x08\x81\x85\x02\x5f\x06\x81\x83\x02\x5e\x04\x83\x04\x07"
  "\x11\x20\x02\x08\x04\x73\x65\x71\x21\x02\x2a\x22\x61\x04\x83\x04"
  "\x03\x23\x02\x09\x04\x61\x6c\x74\x24\x21\x62\x04\x83\x04\x03\x25"
  "\x02\x0a\x21\x0d\x65\x6e\x64\x2d\x6f\x66\x2d\x69\x6e\x70\x75\x74"
  "\x63\x04\x83\x04\x03\x26\x02\x0b\x21\x10\x64\x69\x73\x63\x61\x72"
  "\x64\x2d\x6d\x61\x74\x63\x68\x65\x64\x27\x64\x04\x83\x04\x03\x28"
  "\x02\x0c\x05\x73\x65\x78\x70\x29\x18\x14\x70\x61\x72\x73\x65\x72"
  "\x2d\x62\x75\x66\x66\x65\x72\x2d\x65\x72\x72\x6f\x72\x02\x1b\x67"
  "\x65\x6e\x65\x72\x61\x74\x65\x2d\x75\x6e\x69\x6e\x74\x65\x72\x6e"
  "\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x04\x07\x61\x70\x70\x65\x6e"
  "\x64\x03\x67\x08\x81\x89\x02\x66\x06\x81\x87\x02\x65\x04\xfd\x07"
  "\x07\x13\x2a\x02\x0d\x0c\x65\x6e\x63\x61\x70\x73\x75\x6c\x61\x74"
  "\x65\x2b\x18\x02\x76\x2c\x06\x61\x70\x70\x6c\x79\x2d\x0d\x76\x65"
  "\x63\x74\x6f\x72\x2d\x3e\x6c\x69\x73\x74\x2e\x2c\x68\x04\x84\x06"
  "\x03\x0c\x2f\x02\x0e\x0a\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x30"
  "\x2c\x11\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x76\x61\x6c\x75"
  "\x65\x73\x07\x76\x65\x63\x74\x6f\x72\x31\x18\x2d\x2e\x2c\x69\x04"
  "\x84\x06\x03\x0e\x2e\x02\x0f\x05\x1e\x70\x72\x65\x70\x72\x6f\x63"
  "\x65\x73\x73\x2d\x70\x61\x72\x73\x65\x72\x2d\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x73\x2d\x04\x14\x66\x6c\x61\x74\x74\x65\x6e"
  "\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x73\x03\x6f\x0e\x81"
  "\x8b\x02\x6e\x0c\x81\x89\x02\x6d\x0a\x81\x87\x02\x6c\x08\x81\x91"
  "\x02\x6b\x06\x81\x89\x02\x6a\x04\x85\x08\x0d\x17\x2c\x02\x10\x03"
  "\x0c\x63\x68\x65\x63\x6b\x2d\x31\x2d\x61\x72\x67\x32\x05\x09\x03"
  "\x73\x0a\x81\x8d\x02\x72\x08\x81\x89\x02\x71\x06\x81\x87\x02\x70"
  "\x04\x85\x08\x09\x13\x33\x02\x11\x03\x32\x05\x1e\x70\x72\x65\x70"
  "\x72\x6f\x63\x65\x73\x73\x2d\x6d\x61\x74\x63\x68\x65\x72\x2d\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x03\x77\x0a\x81\x8d\x02\x76"
  "\x08\x81\x89\x02\x75\x06\x81\x87\x02\x74\x04\x85\x08\x09\x13\x34"
  "\x02\x12\x03\x0d\x63\x68\x65\x63\x6b\x2d\x32\x2d\x61\x72\x67\x73"
  "\x35\x05\x09\x03\x80\x01\x14\x81\x89\x02\x7f\x12\x81\x89\x02\x7e"
  "\x10\x81\x89\x02\x7d\x0e\x81\x87\x02\x7c\x0c\x81\x8d\x02\x7b\x0a"
  "\x81\x8d\x02\x7a\x08\x81\x8d\x02\x79\x06\x81\x87\x02\x78\x04\x85"
  "\x08\x13\x1e\x36\x02\x13\x1e\x04\x35\x05\x09\x03\x8d\x01\x1c\x81"
  "\x89\x02\x8c\x01\x1a\x81\x89\x02\x8b\x01\x18\x81\x89\x02\x8a\x01"
  "\x16\x81\x87\x02\x89\x01\x14\x81\x83\x02\x88\x01\x12\x81\x83\x02"
  "\x87\x01\x10\x81\x83\x02\x86\x01\x0e\x83\x04\x85\x01\x0c\x81\x8d"
  "\x02\x84\x01\x0a\x81\x8d\x02\x83\x01\x08\x81\x8d\x02\x82\x01\x06"
  "\x81\x87\x02\x81\x01\x04\x85\x08\x1b\x2a\x35\x02\x14\x03\x32\x02"
  "\x8f\x01\x06\x81\x87\x02\x8e\x01\x04\x85\x08\x05\x0b\x32\x02\x15"
  "\x03\x0d\x63\x68\x65\x63\x6b\x2d\x30\x2d\x61\x72\x67\x73\x02\x91"
  "\x01\x06\x81\x87\x02\x90\x01\x04\x85\x08\x05\x0b\x37\x02\x16\x92"
  "\x01\x04\x85\x08\x03\x38\x02\x17\x16\x04\x1a\x03\x1b\x04\x15\x67"
  "\x65\x6e\x65\x72\x61\x74\x65\x2d\x70\x61\x72\x73\x65\x72\x2d\x63"
  "\x6f\x64\x65\x39\x04\x97\x01\x0c\x81\x85\x02\x96\x01\x0a\x81\x85"
  "\x02\x95\x01\x08\x81\x85\x02\x94\x01\x06\x81\x87\x02\x93\x01\x04"
  "\x84\x06\x0b\x18\x3a\x02\x18\x09\x02\x06\x1c\x67\x65\x6e\x65\x72"
  "\x61\x74\x65\x2d\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x04\x12\x63\x61\x6c\x6c\x2d\x77\x69\x74"
  "\x68\x2d\x70\x6f\x69\x6e\x74\x65\x72\x3b\x04\x10\x62\x61\x63\x6b"
  "\x74\x72\x61\x63\x6b\x69\x6e\x67\x2d\x6b\x66\x3c\x07\x1a\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x2d\x70\x61\x72\x73\x65\x72\x2d\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x3d\x03\x16\x6d\x61\x6b\x65\x2d\x70"
  "\x61\x72\x73\x65\x72\x2d\x6b\x73\x2d\x6c\x61\x6d\x62\x64\x61\x3e"
  "\x05\x15\x62\x69\x6e\x64\x2d\x64\x65\x6c\x61\x79\x65\x64\x2d\x6c"
  "\x61\x6d\x62\x64\x61\x73\x3f\x07\xa0\x01\x14\x84\x06\x9f\x01\x12"
  "\x81\x87\x02\x9e\x01\x10\x82\x02\x9d\x01\x0e\x81\x87\x02\x9c\x01"
  "\x0c\x81\x87\x02\x9b\x01\x0a\x81\x85\x02\x9a\x01\x08\x84\x06\x99"
  "\x01\x06\x81\x89\x02\x98\x01\x04\x84\x06\x13\x25\x40\x02\x19\x1d"
  "\x12\x4d\x61\x6c\x66\x6f\x72\x6d\x65\x64\x20\x70\x61\x72\x73\x65"
  "\x72\x3a\x29\x1e\x1c\x49\x6e\x63\x6f\x72\x72\x65\x63\x74\x20\x61"
  "\x72\x69\x74\x79\x20\x66\x6f\x72\x20\x70\x61\x72\x73\x65\x72\x3a"
  "\x11\x70\x61\x72\x73\x65\x72\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x73\x1d\x0e\x2a\x62\x75\x66\x66\x65\x72\x2d\x6e\x61\x6d\x65\x2a"
  "\x03\x05\x1f\x04\x0a\x03\x04\x08\x70\x72\x6f\x74\x65\x63\x74\x1f"
  "\x03\x07\x6c\x65\x6e\x67\x74\x68\x05\x15\x77\x72\x61\x70\x2d\x65"
  "\x78\x74\x65\x72\x6e\x61\x6c\x2d\x70\x61\x72\x73\x65\x72\x41\x07"
  "\xb8\x01\x32\x81\x8f\x02\xb7\x01\x30\x81\x91\x02\xb6\x01\x2e\x81"
  "\x8f\x02\xb5\x01\x2c\x81\x8f\x02\xb4\x01\x2a\x81\x8d\x02\xb3\x01"
  "\x28\x81\x95\x02\xb2\x01\x26\x81\x95\x02\xb1\x01\x24\x81\x8d\x02"
  "\xb0\x01\x22\x81\x8d\x02\xaf\x01\x20\x81\x83\x02\xae\x01\x1e\x81"
  "\x8f\x02\xad\x01\x1c\x81\x83\x02\xac\x01\x1a\x81\x8f\x02\xab\x01"
  "\x18\x87\x0c\xaa\x01\x16\x81\x8b\x02\xa9\x01\x14\x81\x8f\x02\xa8"
  "\x01\x12\x81\x8f\x02\xa7\x01\x10\x81\x8d\x02\xa6\x01\x0e\x81\x93"
  "\x02\xa5\x01\x0c\x81\x8d\x02\xa4\x01\x0a\x81\x91\x02\xa3\x01\x08"
  "\x81\x8f\x02\xa2\x01\x06\x81\x8d\x02\xa1\x01\x04\x81\x8f\x02\x31"
  "\x50\x42\x02\x1a\x03\x69\x66\x04\x13\x77\x69\x74\x68\x2d\x76\x61"
  "\x6c\x75\x65\x2d\x62\x69\x6e\x64\x69\x6e\x67\x03\x0b\x64\x65\x6c"
  "\x61\x79\x2d\x63\x61\x6c\x6c\x43\x05\x43\x04\xbc\x01\x0a\x81\x87"
  "\x02\xbb\x01\x08\x81\x85\x02\xba\x01\x06\x81\x85\x02\xb9\x01\x04"
  "\x85\x08\x09\x15\x44\x02\x1b\x12\x08\x70\x6f\x69\x6e\x74\x65\x72"
  "\x03\x6b\x73\x03\x6b\x66\x0b\x66\x72\x65\x65\x2d\x6e\x61\x6d\x65"
  "\x73\x18\x17\x64\x65\x66\x69\x6e\x65\x2d\x70\x61\x72\x73\x65\x72"
  "\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x72\x12\x13\x14\x15\x16\x04\x1a"
  "\x03\x1b\x04\x19\x03\x03\x06\xcb\x01\x20\x81\x8b\x02\xca\x01\x1e"
  "\x81\x8d\x02\xc9\x01\x1c\x81\x8b\x02\xc8\x01\x1a\x81\x8b\x02\xc7"
  "\x01\x18\x81\x89\x02\xc6\x01\x16\x81\x89\x02\xc5\x01\x14\x81\x89"
  "\x02\xc4\x01\x12\x81\x87\x02\xc3\x01\x10\x81\x87\x02\xc2\x01\x0e"
  "\x81\x87\x02\xc1\x01\x0c\x81\x85\x02\xc0\x01\x0a\x81\x85\x02\xbf"
  "\x01\x08\x81\x85\x02\xbe\x01\x06\x81\x87\x02\xbd\x01\x04\x84\x06"
  "\x1f\x38\x1b\x02\x1c\x1d\x02\x05\x0f\x02\xce\x01\x08\x81\x87\x02"
  "\xcd\x01\x06\x81\x8d\x02\xcc\x01\x04\x85\x08\x07\x0f\x1a\x02\x1d"
  "\x31\x17\x67\x65\x74\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66"
  "\x66\x65\x72\x2d\x74\x61\x69\x6c\x02\x04\x3b\x03\x17\x6d\x61\x6b"
  "\x65\x2d\x6d\x61\x74\x63\x68\x65\x72\x2d\x6b\x73\x2d\x6c\x61\x6d"
  "\x62\x64\x61\x19\x04\x3f\x05\x43\x07\x1b\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x2d\x6d\x61\x74\x63\x68\x65\x72\x2d\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x16\x06\xd4\x01\x0e\x81\x85\x02\xd3\x01\x0c\x81"
  "\x87\x02\xd2\x01\x0a\x81\x85\x02\xd1\x01\x08\x81\x85\x02\xd0\x01"
  "\x06\x81\x85\x02\xcf\x01\x04\x87\x0c\x0d\x20\x14\x02\x1e\x31\x03"
  "\x19\x07\x16\x04\x3f\x05\x43\x05\xd8\x01\x0a\x81\x85\x02\xd7\x01"
  "\x08\x81\x8b\x02\xd6\x01\x06\x81\x85\x02\xd5\x01\x04\x87\x0c\x09"
  "\x16\x19\x02\x1f\x31\x04\x0c\x05\x43\x04\x1f\x04\xdb\x01\x08\x81"
  "\x85\x02\xda\x01\x06\x81\x8b\x02\xd9\x01\x04\xfb\x0b\x07\x12\x16"
  "\x02\x20\x08\x16\x70\x6f\x73\x74\x2d\x70\x72\x6f\x63\x65\x73\x73"
  "\x65\x64\x2d\x70\x61\x72\x73\x65\x72\x13\x04\x1f\x05\x41\x04\xde"
  "\x01\x08\x81\x8b\x02\xdd\x01\x06\x81\x89\x02\xdc\x01\x04\x88\x0e"
  "\x07\x12\x0f\x02\x21\x0b\x76\x65\x63\x74\x6f\x72\x2d\x6d\x61\x70"
  "\x08\x13\x04\x1f\x05\x43\x04\xe1\x01\x08\x81\x89\x02\xe0\x01\x06"
  "\x81\x89\x02\xdf\x01\x04\x88\x0e\x07\x13\x02\x22\x31\x08\x13\x04"
  "\x1f\x05\x43\x04\xe4\x01\x08\x81\x89\x02\xe3\x01\x06\x81\x89\x02"
  "\xe2\x01\x04\x88\x0e\x07\x13\x1f\x02\x23\x03\x3e\x07\x3d\x04\x3f"
  "\x04\xe8\x01\x0a\x81\x87\x02\xe7\x01\x08\x81\x8d\x02\xe6\x01\x06"
  "\x81\x85\x02\xe5\x01\x04\x88\x0e\x09\x13\x02\x24\x18\x02\x0e\x66"
  "\x65\x74\x63\x68\x2d\x70\x6f\x69\x6e\x74\x65\x72\x07\x3d\x03\xeb"
  "\x01\x08\x81\x8f\x02\xea\x01\x06\x88\x0e\xe9\x01\x04\x81\x8d\x02"
  "\x07\x11\x18\x02\x25\x06\x62\x65\x67\x69\x6e\x1c\x64\x69\x73\x63"
  "\x61\x72\x64\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65"
  "\x72\x2d\x68\x65\x61\x64\x21\x31\x02\x05\x43\x02\xee\x01\x08\x81"
  "\x8b\x02\xed\x01\x06\x81\x89\x02\xec\x01\x04\x86\x0a\x07\x13\x02"
  "\x26\x0e\x76\x65\x63\x74\x6f\x72\x2d\x61\x70\x70\x65\x6e\x64\x45"
  "\x31\x07\x3d\x05\x43\x03\x3e\x04\x3f\x03\x08\x72\x65\x76\x65\x72"
  "\x73\x65\x06\xf9\x01\x18\x81\x89\x02\xf8\x01\x16\x81\x89\x02\xf7"
  "\x01\x14\x81\x85\x02\xf6\x01\x12\x81\x8b\x02\xf5\x01\x10\x81\x89"
  "\x02\xf4\x01\x0e\x81\x87\x02\xf3\x01\x0c\x81\x8b\x02\xf2\x01\x0a"
  "\x81\x8b\x02\xf1\x01\x08\x81\x8b\x02\xf0\x01\x06\x81\x8b\x02\xef"
  "\x01\x04\xfb\x0b\x17\x2a\x46\x02\x27\x06\x3d\x07\x3d\x03\x43\x04"
  "\x3b\x04\x3c\x04\x3f\x07\x85\x02\x1a\x81\x89\x02\x84\x02\x18\x81"
  "\x85\x02\x83\x02\x16\x81\x83\x02\x82\x02\x14\x81\x83\x02\x81\x02"
  "\x12\x81\x85\x02\x80\x02\x10\x81\x85\x02\xff\x01\x0e\x81\x89\x02"
  "\xfe\x01\x0c\x81\x87\x02\xfd\x01\x0a\x81\x87\x02\xfc\x01\x08\x81"
  "\x8b\x02\xfb\x01\x06\x81\x8b\x02\xfa\x01\x04\xfb\x0b\x19\x2b\x02"
  "\x28\x45\x04\x6c\x65\x74\x31\x02\x13\x6d\x61\x6b\x65\x2d\x6b\x66"
  "\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x02\x16\x6d\x61\x6b"
  "\x65\x2d\x76\x61\x6c\x75\x65\x2d\x69\x64\x65\x6e\x74\x69\x66\x69"
  "\x65\x72\x02\x13\x6d\x61\x6b\x65\x2d\x6b\x73\x2d\x69\x64\x65\x6e"
  "\x74\x69\x66\x69\x65\x72\x04\x3b\x04\x3c\x07\x3d\x03\x3e\x05\x43"
  "\x05\x3f\x03\x10\x64\x65\x6c\x61\x79\x2d\x72\x65\x66\x65\x72\x65"
  "\x6e\x63\x65\x0b\x91\x02\x1a\x81\x87\x02\x90\x02\x18\x81\x87\x02"
  "\x8f\x02\x16\x81\x87\x02\x8e\x02\x14\x81\x83\x02\x8d\x02\x12\x81"
  "\x87\x02\x8c\x02\x10\x81\x87\x02\x8b\x02\x0e\x81\x85\x02\x8a\x02"
  "\x0c\x81\x91\x02\x89\x02\x0a\x81\x8f\x02\x88\x02\x08\x81\x8d\x02"
  "\x87\x02\x06\x81\x8b\x02\x86\x02\x04\x87\x0c\x19\x35\x45\x28\x43"
  "\x43\x45\x04\x24\x04\x21\x46\x04\x04\x18\x06\x13\x04\x2b\x1f\x04"
  "\x0c\x04\x30\x0f\x04\x16\x04\x19\x04\x1d\x06\x6d\x61\x74\x63\x68"
  "\x46\x14\x04\x0e\x64\x65\x66\x69\x6e\x65\x2d\x70\x61\x72\x73\x65"
  "\x72\x12\x1a\x04\x1b\x04\x41\x44\x04\x3d\x42\x18\x08\x2a\x70\x61"
  "\x72\x73\x65\x72\x39\x40\x04\x3a\x04\x07\x76\x61\x6c\x75\x65\x73"
  "\x38\x04\x27\x37\x04\x29\x32\x04\x0d\x77\x69\x74\x68\x2d\x70\x6f"
  "\x69\x6e\x74\x65\x72\x35\x04\x30\x0c\x2b\x36\x04\x46\x34\x04\x22"
  "\x33\x04\x24\x21\x2c\x04\x0b\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d"
  "\x2a\x2e\x04\x0d\x65\x6e\x63\x61\x70\x73\x75\x6c\x61\x74\x65\x2a"
  "\x2f\x04\x0a\x2a\x04\x0a\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x28"
  "\x04\x09\x63\x6f\x6d\x70\x6c\x65\x74\x65\x26\x04\x02\x3f\x25\x04"
  "\x0e\x15\x23\x04\x20\x04\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65"
  "\x33\x10\x15\x64\x65\x66\x69\x6e\x65\x2d\x2a\x70\x61\x72\x73\x65"
  "\x72\x2d\x6d\x61\x63\x72\x6f\x17\x1e\x04\x1c\x04\x10\x11\x04\x2d"
  "\x0d\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x09\x0b\x0c\x04\x20\x72\x73\x63\x2d\x6d\x61\x63\x72"
  "\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65"
  "\x78\x70\x61\x6e\x64\x65\x72\x04\x1f\x73\x63\x2d\x6d\x61\x63\x72"
  "\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65"
  "\x78\x70\x61\x6e\x64\x65\x72\x03\x02\x1a\x6d\x61\x6b\x65\x2d\x73"
  "\x74\x72\x6f\x6e\x67\x2d\x65\x71\x2d\x68\x61\x73\x68\x2d\x74\x61"
  "\x62\x6c\x65\x04\x17\x04\x10\x05\x12\x05\x33\x68\x80\x80\x04\x32"
  "\x66\x81\x81\x02\x31\x64\x81\x81\x02\x30\x62\x81\x83\x02\x2f\x60"
  "\x81\x83\x02\x2e\x5e\x81\x83\x02\x2d\x5c\x81\x83\x02\x2c\x5a\x81"
  "\x83\x02\x2b\x58\x81\x83\x02\x2a\x56\x81\x83\x02\x29\x54\x81\x83"
  "\x02\x28\x52\x81\x83\x02\x27\x50\x81\x83\x02\x26\x4e\x81\x83\x02"
  "\x25\x4c\x81\x85\x02\x24\x4a\x81\x83\x02\x23\x48\x81\x83\x02\x22"
  "\x46\x81\x87\x02\x21\x44\x81\x85\x02\x20\x42\x81\x83\x02\x1f\x40"
  "\x81\x83\x02\x1e\x3e\x81\x83\x02\x1d\x3c\x81\x83\x02\x1c\x3a\x81"
  "\x87\x02\x1b\x38\x81\x85\x02\x1a\x36\x81\x83\x02\x19\x34\x81\x83"
  "\x02\x18\x32\x81\x83\x02\x17\x30\x81\x83\x02\x16\x2e\x81\x83\x02"
  "\x15\x2c\x81\x83\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x83\x02\x12"
  "\x26\x81\x83\x02\x11\x24\x81\x83\x02\x10\x22\x81\x83\x02\x0f\x20"
  "\x81\x83\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81"
  "\x83\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x85\x02\x09\x14\x81\x83"
  "\x02\x08\x12\x81\x83\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x87\x02"
  "\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x83\x02\x02"
  "\x06\x81\x83\x02\x01\x04\x81\x83\x02\x67\xcd\x01";

SCHEME_OBJECT *
parser_so_data_cefbcd6d4e54c771 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_parser_so_data_cefbcd6d4e54c771 [0]))), (sizeof (prog_parser_so_data_cefbcd6d4e54c771)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_60]));
}

DECLARE_COMPILED_DATA_NS ("parser.so", parser_so_data_cefbcd6d4e54c771)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("parser.so", "161bb9b7f42c21c7")
