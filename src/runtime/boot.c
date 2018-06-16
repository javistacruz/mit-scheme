/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:27-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_8 7
#define TAG_1_9 2
#define ENVIRONMENT_LABEL_1_3 14
#define DEBUGGING_LABEL_1_2 13
#define EXECUTE_CACHE_1_10 9
#define EXECUTE_CACHE_1_7 11
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boot_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_1_4);
      goto standard_unparser_method_3;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto lambda_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (standard_unparser_method_6)
DEFLABEL (standard_unparser_method_3)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = (Wrd5.Obj);
  Wrd11 = Wrd7;
  goto label_9;

DEFLABEL (label_10)
  (Wrd11.Obj) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
DEFLABEL (label_11)
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_8])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_1_8);

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
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define LABEL_2_8 7
#define LABEL_2_9 9
#define TAG_2_10 3
#define LABEL_2_12 11
#define ENVIRONMENT_LABEL_2_3 23
#define DEBUGGING_LABEL_2_2 22
#define OBJECT_2_0 21
#define EXECUTE_CACHE_2_14 13
#define EXECUTE_CACHE_2_13 15
#define EXECUTE_CACHE_2_11 17
#define EXECUTE_CACHE_2_7 19
#define FREE_REFERENCES_LABEL_2_0 12
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boot_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_2_4);
      goto simple_unparser_method_4;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto lambda_9;

    case 4:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (simple_unparser_method_7)
DEFLABEL (simple_unparser_method_4)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_9])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_2_9);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_12);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_7 5
#define LABEL_3_5 7
#define TAG_3_6 2
#define LABEL_3_8 9
#define LABEL_3_9 11
#define LABEL_3_10 13
#define ENVIRONMENT_LABEL_3_3 16
#define DEBUGGING_LABEL_3_2 15
#define OBJECT_3_0 14
#define FREE_REFERENCES_LABEL_3_0 14
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boot_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_3_4);
      goto simple_parser_method_7;

    case 1:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_14;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_3_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (simple_parser_method_13)
DEFLABEL (simple_parser_method_7)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_23;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_22)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd17.uLng) == 1)
    goto label_17;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_16)
  (Wrd20.Obj) = (Rsp [0]);
  if ((Wrd20.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = (Wrd20.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_15)
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_17)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_21;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_20)
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_19;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_18)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [2]);
  (* (--Rsp)) = (Wrd43.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_10)
  (Wrd25.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define TAG_4_7 2
#define LABEL_4_9 9
#define ENVIRONMENT_LABEL_4_3 21
#define DEBUGGING_LABEL_4_2 20
#define OBJECT_4_4 19
#define OBJECT_4_3 18
#define OBJECT_4_2 17
#define OBJECT_4_1 16
#define OBJECT_4_0 15
#define EXECUTE_CACHE_4_10 11
#define EXECUTE_CACHE_4_8 13
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boot_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_4_4);
      goto unparser_standard_method_5;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparser_standard_method_8)
DEFLABEL (unparser_standard_method_5)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd6.Obj) = (Rsp [1]);
  if ((Wrd6.Obj) == Rvl)
    goto label_13;
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_6])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = (Wrd6.Obj);
  Wrd13 = Wrd9;
  goto label_10;

DEFLABEL (label_11)
  (Wrd13.Obj) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_10)
DEFLABEL (label_12)
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (label_13)
  (Wrd13.Obj) = (current_block [OBJECT_4_3]);
  goto label_12;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_4_6);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define LABEL_5_7 7
#define LABEL_5_8 9
#define LABEL_5_10 11
#define LABEL_5_13 13
#define LABEL_5_16 15
#define LABEL_5_14 17
#define LABEL_5_17 19
#define LABEL_5_18 21
#define TAG_5_19 9
#define LABEL_5_21 23
#define LABEL_5_25 25
#define LABEL_5_24 27
#define ENVIRONMENT_LABEL_5_3 50
#define DEBUGGING_LABEL_5_2 49
#define OBJECT_5_3 48
#define OBJECT_5_2 47
#define OBJECT_5_1 46
#define OBJECT_5_0 45
#define EXECUTE_CACHE_5_23 29
#define EXECUTE_CACHE_5_22 31
#define EXECUTE_CACHE_5_20 33
#define EXECUTE_CACHE_5_15 35
#define EXECUTE_CACHE_5_12 37
#define EXECUTE_CACHE_5_11 39
#define EXECUTE_CACHE_5_9 41
#define FREE_REFERENCE_5_0 44
#define FREE_REFERENCES_LABEL_5_0 28
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boot_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd8;
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
      goto make_method_13;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_18;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_5_13);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_5_16);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_5_14);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_5_17);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_5_18);
      goto lambda_19;

    case 10:
      current_block = (Rpc - LABEL_5_21);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_5_25);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_5_24);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_method_17)
DEFLABEL (make_method_13)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_10);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_25;
  Wrd5 = Wrd9;

DEFLABEL (label_24)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_5_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_16);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (label_20)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_14);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 30)
    goto label_23;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_18])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  ((Wrd13.pObj) [2]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_24);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_22;

DEFLABEL (label_21)
  (Wrd17.Obj) = (current_block [OBJECT_5_3]);
  (Rsp [3]) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd18.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_22]));

DEFLABEL (label_22)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_25]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_25);
  goto label_21;

DEFLABEL (label_23)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_13])), (Wrd6.pObj));

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_24;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_5_18);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 13
#define DEBUGGING_LABEL_6_2 12
#define OBJECT_6_0 11
#define EXECUTE_CACHE_6_7 7
#define EXECUTE_CACHE_6_6 9
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boot_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto unparser_methodP_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparser_methodP_4)
DEFLABEL (unparser_methodP_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (label_5)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 13
#define DEBUGGING_LABEL_7_2 12
#define OBJECT_7_0 11
#define EXECUTE_CACHE_7_7 7
#define EXECUTE_CACHE_7_6 9
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boot_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto guarantee_unparser_method_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_unparser_method_4)
DEFLABEL (guarantee_unparser_method_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_7_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 15
#define DEBUGGING_LABEL_8_2 14
#define OBJECT_8_4 13
#define OBJECT_8_3 12
#define OBJECT_8_2 11
#define OBJECT_8_1 10
#define OBJECT_8_0 9
#define EXECUTE_CACHE_8_6 7
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boot_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_8_4);
      goto error_not_unparser_method_3;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_unparser_method_6)
DEFLABEL (error_not_unparser_method_3)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_8_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_3]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Wrd6.Obj) = (Rsp [2]);
  if ((Wrd6.Obj) == Rvl)
    goto label_8;
  Wrd7 = Wrd6;
  goto label_7;

DEFLABEL (label_8)
  (Wrd7.Obj) = (current_block [OBJECT_8_4]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define TAG_9_6 1
#define ENVIRONMENT_LABEL_9_3 9
#define DEBUGGING_LABEL_9_2 8
#define OBJECT_9_1 7
#define OBJECT_9_0 6
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boot_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_9_4);
      goto with_absolutely_no_interrupts_1;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_absolutely_no_interrupts_4)
DEFLABEL (with_absolutely_no_interrupts_1)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_9_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define ENVIRONMENT_LABEL_10_3 11
#define DEBUGGING_LABEL_10_2 10
#define OBJECT_10_0 9
#define EXECUTE_CACHE_10_7 7
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boot_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_10_4);
      goto without_interrupts_1;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (without_interrupts_4)
DEFLABEL (without_interrupts_1)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_0
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
boot_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto with_limited_interrupts_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_limited_interrupts_5)
DEFLABEL (with_limited_interrupts_2)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (Rrb [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd7.uLng)));
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd12.Lng) = ((Wrd10.Lng) & (Wrd11.Lng));
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (Rsp [0]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
boot_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto object_constantP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object_constantP_3)
DEFLABEL (object_constantP_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
boot_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto gc_space_status_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_space_status_3)
DEFLABEL (gc_space_status_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 0);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 5
#define DEBUGGING_LABEL_14_2 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boot_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto object_pureP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object_pureP_3)
DEFLABEL (object_pureP_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 11
#define DEBUGGING_LABEL_15_2 10
#define OBJECT_15_3 9
#define OBJECT_15_2 8
#define OBJECT_15_1 7
#define OBJECT_15_0 6
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boot_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto default_objectP_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_objectP_4)
DEFLABEL (default_objectP_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == Rvl)
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_15_3]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 8
#define DEBUGGING_LABEL_16_2 7
#define OBJECT_16_2 6
#define OBJECT_16_1 5
#define OBJECT_16_0 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boot_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto default_object_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_object_3)
DEFLABEL (default_object_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_8 7
#define TAG_17_9 2
#define LABEL_17_13 9
#define LABEL_17_6 11
#define TAG_17_7 4
#define LABEL_17_14 13
#define LABEL_17_15 15
#define LABEL_17_16 17
#define LABEL_17_11 19
#define LABEL_17_12 21
#define LABEL_17_21 23
#define LABEL_17_17 25
#define LABEL_17_18 27
#define LABEL_17_20 29
#define LABEL_17_23 31
#define TAG_17_24 14
#define ENVIRONMENT_LABEL_17_3 48
#define DEBUGGING_LABEL_17_2 47
#define OBJECT_17_2 46
#define OBJECT_17_1 45
#define OBJECT_17_0 44
#define EXECUTE_CACHE_17_22 33
#define EXECUTE_CACHE_17_19 35
#define EXECUTE_CACHE_17_10 37
#define FREE_REFERENCE_17_1 40
#define FREE_REFERENCE_17_0 41
#define FREE_ASSIGNMENT_17_0 43
#define FREE_REFERENCES_LABEL_17_0 32
#define NUMBER_OF_LINKER_SECTIONS_17_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boot_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
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
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_17_4);
      goto load_with_boot_initsB_18;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_17_8);
      goto lambda_28;

    case 3:
      current_block = (Rpc - LABEL_17_13);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_17_6);
      goto swapB_27;

    case 5:
      current_block = (Rpc - LABEL_17_14);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_17_15);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_17_16);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_17_11);
      goto lambda_2;

    case 9:
      current_block = (Rpc - LABEL_17_12);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_17_21);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_17_17);
      goto continuation_1;

    case 12:
      current_block = (Rpc - LABEL_17_18);
      goto lambda_0;

    case 13:
      current_block = (Rpc - LABEL_17_20);
      goto continuation_5;

    case 14:
      current_block = (Rpc - LABEL_17_23);
      goto lambda_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_with_boot_initsB_26)
DEFLABEL (load_with_boot_initsB_18)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_17_0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_6])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  ((Wrd22.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (Rsp [2]) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_8])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd17 = Wrd16;
  (Wrd18.Obj) = (Rsp [4]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_17_8);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_35;
  Wrd11 = Wrd15;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_17_12);
  (Rsp [0]) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_33;
  Wrd10 = Wrd14;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_22]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_17_20);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_23])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  ((Wrd11.pObj) [2]) = Rvl;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_21])), (Wrd11.pObj));

DEFLABEL (label_24)
  (Wrd10.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_13])), (Wrd12.pObj));

DEFLABEL (label_20)
  (Wrd11.Obj) = Rvl;
  goto label_34;

DEFLABEL (swapB_27)
  CLOSURE_HEADER (LABEL_17_6);

DEFLABEL (swapB_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  Wrd5 = Wrd9;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_39)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_36)
  Rvl = (current_block [OBJECT_17_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_38)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_37;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_16])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_23)
  goto label_36;

DEFLABEL (label_41)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_40;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_22)
  goto label_39;

DEFLABEL (label_44)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_43;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_17_14])), (Wrd6.pObj));

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_42;

DEFLABEL (lambda_29)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_17_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_19]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_17);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_30)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_17_18);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_17_23);

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
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 11
#define DEBUGGING_LABEL_18_2 10
#define OBJECT_18_1 9
#define OBJECT_18_0 8
#define FREE_ASSIGNMENT_18_0 7
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boot_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_18_4);
      goto init_boot_initsB_0;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (init_boot_initsB_4)
DEFLABEL (init_boot_initsB_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_0]));
  (Wrd6.Obj) = (current_block [OBJECT_18_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_7;

DEFLABEL (label_6)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_18_1]);
  goto pop_return;

DEFLABEL (label_7)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_6;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_2)
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_5 3
#define LABEL_19_4 5
#define LABEL_19_6 7
#define LABEL_19_7 9
#define LABEL_19_8 11
#define LABEL_19_9 13
#define ENVIRONMENT_LABEL_19_3 20
#define DEBUGGING_LABEL_19_2 19
#define OBJECT_19_0 18
#define FREE_REFERENCE_19_0 15
#define FREE_ASSIGNMENT_19_0 17
#define FREE_REFERENCES_LABEL_19_0 14
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boot_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd56;
  machine_word Wrd55;
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
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_19_4);
      goto add_boot_initB_4;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_19_8);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_19_9);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_boot_initB_11)
DEFLABEL (add_boot_initB_4)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_23;
  Wrd5 = Wrd9;

DEFLABEL (label_22)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd56.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_19_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_21;
  Wrd16 = Wrd20;

DEFLABEL (label_20)
  (Wrd25.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_19;

DEFLABEL (label_18)
  Wrd26 = Wrd30;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_0]));
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd46.Obj) = ((Wrd38.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_16;

DEFLABEL (label_15)
  ((Wrd38.pObj) [0]) = (Wrd39.Obj);

DEFLABEL (label_14)
  Rsp = (& (Rsp [3]));
  goto label_12;

DEFLABEL (label_16)
  if ((Wrd46.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_15;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_9])), (Wrd38.pObj), (Wrd39.Obj));

DEFLABEL (label_9)
  goto label_14;

DEFLABEL (label_19)
  if ((Wrd30.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_18;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_8])), (Wrd27.pObj));

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_7])), (Wrd17.pObj));

DEFLABEL (label_7)
  (Wrd16.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_6])), (Wrd6.pObj));

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_6 5
#define LABEL_20_5 7
#define LABEL_20_8 9
#define LABEL_20_9 11
#define ENVIRONMENT_LABEL_20_3 23
#define DEBUGGING_LABEL_20_2 22
#define OBJECT_20_1 21
#define OBJECT_20_0 20
#define EXECUTE_CACHE_20_7 13
#define FREE_REFERENCE_20_1 16
#define FREE_REFERENCE_20_0 17
#define FREE_ASSIGNMENT_20_0 19
#define FREE_REFERENCES_LABEL_20_0 12
#define NUMBER_OF_LINKER_SECTIONS_20_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boot_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_20_4);
      goto save_boot_initsB_2;

    case 1:
      current_block = (Rpc - LABEL_20_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_20_8);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_20_9);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (save_boot_initsB_8)
DEFLABEL (save_boot_initsB_2)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_15;
  Wrd8 = Wrd12;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_0]));
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  ((Wrd5.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd18.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_10;
  Wrd20 = Wrd24;

DEFLABEL (label_9)
  (Rsp [1]) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 3);

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_9])), (Wrd21.pObj));

DEFLABEL (label_6)
  (Wrd20.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_13)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_8])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_5)
  goto label_11;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_6])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_6 5
#define LABEL_21_5 7
#define LABEL_21_8 9
#define LABEL_21_7 11
#define LABEL_21_10 13
#define LABEL_21_9 15
#define LABEL_21_11 17
#define ENVIRONMENT_LABEL_21_3 27
#define DEBUGGING_LABEL_21_2 26
#define OBJECT_21_2 25
#define OBJECT_21_1 24
#define OBJECT_21_0 23
#define EXECUTE_CACHE_21_12 19
#define FREE_REFERENCE_21_0 22
#define FREE_REFERENCES_LABEL_21_0 18
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boot_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto run_boot_initsB_5;

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
      current_block = (Rpc - LABEL_21_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_21_10);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_21_9);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_21_11);
      goto lambda_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (run_boot_initsB_11)
DEFLABEL (run_boot_initsB_5)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_19;
  Wrd8 = Wrd12;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_17;
  Wrd12 = Wrd16;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_15;
  Wrd8 = Wrd12;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_12]));

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_10])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_8])), (Wrd13.pObj));

DEFLABEL (label_8)
  (Wrd12.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_6])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_18;

DEFLABEL (lambda_12)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_21_11);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

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
boot_so_d87fef572bc56d72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	3,
	2,
	1,
	3,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	0,
	1,
	1,
	1,
	2,
	1,
	0,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 21)
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

static const struct liarc_code_S arr_decl_boot_so_d87fef572bc56d72 [21] =
  {
    { "boot_so_code_1", 3, boot_so_code_1 },
    { "boot_so_code_2", 5, boot_so_code_2 },
    { "boot_so_code_3", 6, boot_so_code_3 },
    { "boot_so_code_4", 4, boot_so_code_4 },
    { "boot_so_code_5", 13, boot_so_code_5 },
    { "boot_so_code_6", 2, boot_so_code_6 },
    { "boot_so_code_7", 2, boot_so_code_7 },
    { "boot_so_code_8", 2, boot_so_code_8 },
    { "boot_so_code_9", 2, boot_so_code_9 },
    { "boot_so_code_10", 2, boot_so_code_10 },
    { "boot_so_code_11", 1, boot_so_code_11 },
    { "boot_so_code_12", 1, boot_so_code_12 },
    { "boot_so_code_13", 1, boot_so_code_13 },
    { "boot_so_code_14", 1, boot_so_code_14 },
    { "boot_so_code_15", 2, boot_so_code_15 },
    { "boot_so_code_16", 1, boot_so_code_16 },
    { "boot_so_code_17", 15, boot_so_code_17 },
    { "boot_so_code_18", 2, boot_so_code_18 },
    { "boot_so_code_19", 6, boot_so_code_19 },
    { "boot_so_code_20", 5, boot_so_code_20 },
    { "boot_so_code_21", 8, boot_so_code_21 }
  };

int
decl_boot_so_d87fef572bc56d72 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_boot_so_d87fef572bc56d72);
  return (0);
}

DECLARE_COMPILED_CODE ("boot.so", 3, decl_boot_so_d87fef572bc56d72, boot_so_d87fef572bc56d72)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_boot_so_data_d87fef572bc56d72 [2516] =
  "\x44\x1e\xce\x04\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\xb9\x28"
  "\x0d\xba\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82"
  "\x88\x0f\x28\x0d\xbc\x28\x0d\xbd\x28\x0d\xbe\x28\x0d\xbf\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83"
  "\x88\xc1\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x84\x88\x0f\x06\xc2\x1c\x02\x02\x28\xb1\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85"
  "\x88\x0f\x0f\x0c\x0c\x0d\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\xb2\x28\xb6\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbf\x1d\xb0\x86\x88\x82\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x02\x88\x1d\x28\x0d\xba\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1b"
  "\x02\x02\x0c\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc2\x1c\x80\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x02\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc0\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x02"
  "\x02\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x02"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1d\xc2\x08\x0d\x1c\x25"
  "\x0d\x1b\x24\x28\x0d\x28\xb5\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x08\x1b\x25\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x1b\x25\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x06\x1b\x25\x1b\x0d"
  "\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\xc2\xc2\x1b\x24\x28\xb5\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xbd\x17\xb8\x88\xb0\x0d\x06\xb5\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x02\x80\x02\x02\x02\x02\x02\x02\x02\x02\x84\x82\x81"
  "\x1b\x2a\x1b\x2a\xb6\x2a\xb7\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb3\x2a"
  "\x17\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d\xb2"
  "\xb1\x0d\x0d\x0d\xb4\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x02\x53\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f"
  "\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73"
  "\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x62\x6f\x6f"
  "\x74\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x04\x0c\x6d\x61\x6b"
  "\x65\x2d\x6d\x65\x74\x68\x6f\x64\x04\x1c\x77\x69\x74\x68\x2d\x63"
  "\x75\x72\x72\x65\x6e\x74\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d"
  "\x73\x74\x61\x74\x65\x03\x06\x08\x81\x85\x02\x05\x06\x81\x87\x02"
  "\x04\x04\x84\x06\x07\x0f\x02\x01\x21\x04\x19\x73\x74\x61\x6e\x64"
  "\x61\x72\x64\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74"
  "\x68\x6f\x64\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x04\x0b\x77"
  "\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x04\x06\x77\x72\x69\x74\x65"
  "\x05\x0b\x0c\x81\x85\x02\x0a\x0a\x81\x85\x02\x09\x08\x81\x87\x02"
  "\x08\x06\x81\x87\x02\x07\x04\x84\x06\x0b\x18\x09\x02\x04\x63\x64"
  "\x72\x11\x0e\x81\x89\x02\x10\x0c\x81\x89\x02\x0f\x0a\x81\x89\x02"
  "\x0e\x08\x81\x87\x02\x0d\x06\x81\x87\x02\x0c\x04\x83\x04\x0d\x11"
  "\x0a\x02\x01\x21\x10\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d"
  "\x74\x79\x70\x65\x0b\x09\x08\x04\x04\x0d\x75\x6e\x70\x61\x72\x73"
  "\x65\x2d\x63\x68\x61\x72\x03\x15\x0a\x81\x87\x02\x14\x08\x81\x87"
  "\x02\x13\x06\x81\x85\x02\x12\x04\x84\x04\x09\x16\x0c\x02\x01\x5e"
  "\x01\x21\x03\x23\x40\x03\x23\x5b\x24\x2a\x75\x6e\x70\x61\x72\x73"
  "\x65\x2d\x77\x69\x74\x68\x2d\x6d\x61\x78\x69\x6d\x75\x6d\x2d\x72"
  "\x65\x61\x64\x61\x62\x69\x6c\x69\x74\x79\x3f\x2a\x02\x03\x05\x68"
  "\x61\x73\x68\x03\x14\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x73\x74"
  "\x61\x74\x65\x2f\x70\x6f\x72\x74\x03\x0f\x6e\x75\x6d\x62\x65\x72"
  "\x2d\x3e\x73\x74\x72\x69\x6e\x67\x04\x0d\x77\x72\x69\x74\x65\x2d"
  "\x73\x74\x72\x69\x6e\x67\x04\x04\x04\x08\x22\x1c\x81\x8b\x02\x21"
  "\x1a\x81\x8b\x02\x20\x18\x81\x8b\x02\x1f\x16\x81\x85\x02\x1e\x14"
  "\x81\x8b\x02\x1d\x12\x81\x8b\x02\x1c\x10\x81\x8b\x02\x1b\x0e\x81"
  "\x8b\x02\x1a\x0c\x81\x89\x02\x19\x0a\x81\x89\x02\x18\x08\x81\x87"
  "\x02\x17\x06\x81\x87\x02\x16\x04\x84\x06\x1b\x33\x02\x03\x0b\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x04\x17\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x2d\x76\x61\x6c\x69\x64"
  "\x3f\x03\x24\x06\x81\x83\x02\x23\x04\x83\x04\x05\x0e\x02\x08\x02"
  "\x03\x11\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f"
  "\x64\x3f\x04\x1a\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x75\x6e"
  "\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x0d\x03\x26"
  "\x06\x81\x85\x02\x25\x04\x84\x04\x05\x0e\x0e\x02\x09\x0b\x09\x08"
  "\x10\x75\x6e\x70\x61\x72\x73\x65\x72\x20\x6d\x65\x74\x68\x6f\x64"
  "\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79"
  "\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x02\x28\x06\x81\x87"
  "\x02\x27\x04\x84\x04\x05\x10\x0f\x02\x0a\x14\x77\x69\x74\x68\x2d"
  "\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x6d\x61\x73\x6b\x10\x2a"
  "\x06\x81\x85\x02\x29\x04\x83\x04\x05\x0a\x11\x02\x0b\x08\x04\x18"
  "\x77\x69\x74\x68\x2d\x6c\x69\x6d\x69\x74\x65\x64\x2d\x69\x6e\x74"
  "\x65\x72\x72\x75\x70\x74\x73\x12\x02\x2c\x06\x81\x85\x02\x2b\x04"
  "\x83\x04\x05\x0c\x13\x02\x0c\x10\x2d\x04\x84\x06\x03\x10\x02\x0d"
  "\x0a\x63\x6f\x6e\x73\x74\x61\x6e\x74\x3f\x2e\x04\x83\x04\x03\x14"
  "\x02\x0e\x10\x67\x63\x2d\x73\x70\x61\x63\x65\x2d\x73\x74\x61\x74"
  "\x75\x73\x2f\x04\x82\x02\x03\x15\x02\x0f\x30\x04\x83\x04\x03\x16"
  "\x02\x10\x0b\x09\x08\x32\x06\x81\x83\x02\x31\x04\x83\x04\x05\x0c"
  "\x17\x02\x11\x0b\x09\x08\x33\x04\x82\x02\x03\x0b\x02\x12\x02\x06"
  "\x61\x70\x70\x6c\x79\x0b\x62\x6f\x6f\x74\x2d\x69\x6e\x69\x74\x73"
  "\x18\x02\x05\x6c\x6f\x61\x64\x18\x03\x05\x13\x73\x68\x61\x6c\x6c"
  "\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x04\x03\x09"
  "\x72\x65\x76\x65\x72\x73\x65\x21\x19\x04\x42\x20\x81\x85\x02\x41"
  "\x1e\x81\x85\x02\x40\x1c\x83\x04\x3f\x1a\x81\x85\x02\x3e\x18\x81"
  "\x87\x02\x3d\x16\x81\x83\x02\x3c\x14\x84\x06\x3b\x12\x81\x83\x02"
  "\x3a\x10\x81\x85\x02\x39\x0e\x81\x83\x02\x38\x0c\x81\x83\x02\x37"
  "\x0a\x81\x87\x02\x36\x08\x81\x83\x02\x35\x06\x81\x83\x02\x34\x04"
  "\xff\x03\x1f\x31\x1a\x02\x13\x02\x18\x02\x44\x06\x81\x81\x02\x43"
  "\x04\x82\x02\x05\x0c\x1b\x02\x14\x02\x18\x02\x18\x02\x4a\x0e\x81"
  "\x85\x02\x49\x0c\x81\x83\x02\x48\x0a\x81\x85\x02\x47\x08\x81\x83"
  "\x02\x46\x06\x83\x04\x45\x04\x81\x83\x02\x0d\x15\x1c\x02\x15\x11"
  "\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x18\x02\x18\x11\x73\x61\x76\x65\x64\x2d\x62\x6f\x6f\x74\x2d\x69"
  "\x6e\x69\x74\x73\x1d\x03\x03\x19\x02\x4f\x0c\x81\x87\x02\x4e\x0a"
  "\x81\x85\x02\x4d\x08\x81\x83\x02\x4c\x06\x81\x85\x02\x4b\x04\x83"
  "\x04\x0b\x18\x19\x02\x16\x10\x75\x6e\x62\x69\x6e\x64\x2d\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x12\x6c\x65\x78\x69\x63\x61\x6c\x2d\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x19\x6c\x65\x78\x69\x63\x61\x6c"
  "\x2d\x75\x6e\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x61\x62\x6c\x65"
  "\x3f\x1d\x02\x04\x02\x57\x12\x83\x04\x56\x10\x81\x85\x02\x55\x0e"
  "\x81\x87\x02\x54\x0c\x81\x83\x02\x53\x0a\x81\x85\x02\x52\x08\x81"
  "\x83\x02\x51\x06\x81\x85\x02\x50\x04\x83\x04\x11\x1c\x16\x14\x23"
  "\x5b\x73\x61\x76\x65\x64\x2d\x62\x6f\x6f\x74\x2d\x69\x6e\x69\x74"
  "\x73\x5d\x04\x19\x04\x1c\x06\x1b\x04\x1a\x04\x0b\x04\x17\x04\x16"
  "\x04\x15\x04\x14\x04\x10\x04\x13\x04\x11\x04\x80\x80\x04\x48\x08"
  "\x81\x02\x81\x01\x41\x21\x11\x09\x0f\x04\x0e\x04\x04\x04\x0c\x04"
  "\x0a\x04\x09\x04\x04\x25\x1d\x18\x10\x72\x75\x6e\x2d\x62\x6f\x6f"
  "\x74\x2d\x69\x6e\x69\x74\x73\x21\x11\x73\x61\x76\x65\x2d\x62\x6f"
  "\x6f\x74\x2d\x69\x6e\x69\x74\x73\x21\x0f\x61\x64\x64\x2d\x62\x6f"
  "\x6f\x74\x2d\x69\x6e\x69\x74\x21\x11\x69\x6e\x69\x74\x2d\x62\x6f"
  "\x6f\x74\x2d\x69\x6e\x69\x74\x73\x21\x16\x6c\x6f\x61\x64\x2d\x77"
  "\x69\x74\x68\x2d\x62\x6f\x6f\x74\x2d\x69\x6e\x69\x74\x73\x21\x0f"
  "\x64\x65\x66\x61\x75\x6c\x74\x2d\x6f\x62\x6a\x65\x63\x74\x10\x64"
  "\x65\x66\x61\x75\x6c\x74\x2d\x6f\x62\x6a\x65\x63\x74\x3f\x0d\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x70\x75\x72\x65\x3f\x10\x67\x63\x2d\x73"
  "\x70\x61\x63\x65\x2d\x73\x74\x61\x74\x75\x73\x11\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x3f\x12\x13\x77\x69"
  "\x74\x68\x6f\x75\x74\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x73"
  "\x1e\x77\x69\x74\x68\x2d\x61\x62\x73\x6f\x6c\x75\x74\x65\x6c\x79"
  "\x2d\x6e\x6f\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x73\x13\x69"
  "\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x6d\x61\x73\x6b\x2f\x61\x6c"
  "\x6c\x14\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x6d\x61\x73\x6b"
  "\x2f\x6e\x6f\x6e\x65\x18\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d"
  "\x6d\x61\x73\x6b\x2f\x74\x69\x6d\x65\x72\x2d\x6f\x6b\x15\x69\x6e"
  "\x74\x65\x72\x72\x75\x70\x74\x2d\x6d\x61\x73\x6b\x2f\x67\x63\x2d"
  "\x6f\x6b\x16\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x62\x69\x74"
  "\x2f\x73\x75\x73\x70\x65\x6e\x64\x17\x69\x6e\x74\x65\x72\x72\x75"
  "\x70\x74\x2d\x62\x69\x74\x2f\x67\x6c\x6f\x62\x61\x6c\x2d\x33\x14"
  "\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x62\x69\x74\x2f\x74\x69"
  "\x6d\x65\x72\x17\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x62\x69"
  "\x74\x2f\x61\x66\x74\x65\x72\x2d\x67\x63\x12\x69\x6e\x74\x65\x72"
  "\x72\x75\x70\x74\x2d\x62\x69\x74\x2f\x6b\x62\x64\x17\x69\x6e\x74"
  "\x65\x72\x72\x75\x70\x74\x2d\x62\x69\x74\x2f\x67\x6c\x6f\x62\x61"
  "\x6c\x2d\x31\x11\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x62\x69"
  "\x74\x2f\x67\x63\x18\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x62"
  "\x69\x74\x2f\x67\x6c\x6f\x62\x61\x6c\x2d\x67\x63\x14\x69\x6e\x74"
  "\x65\x72\x72\x75\x70\x74\x2d\x62\x69\x74\x2f\x73\x74\x61\x63\x6b"
  "\x0d\x1a\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x75\x6e\x70\x61"
  "\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x19\x75\x6e\x70\x61"
  "\x72\x73\x65\x72\x2f\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x6d\x65"
  "\x74\x68\x6f\x64\x15\x73\x69\x6d\x70\x6c\x65\x2d\x70\x61\x72\x73"
  "\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x17\x73\x69\x6d\x70\x6c\x65"
  "\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64"
  "\x25\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70"
  "\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81"
  "\x81\x02\x07\x11";

SCHEME_OBJECT *
boot_so_data_d87fef572bc56d72 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_boot_so_data_d87fef572bc56d72 [0]))), (sizeof (prog_boot_so_data_d87fef572bc56d72)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("boot.so", boot_so_data_d87fef572bc56d72)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("boot.so", "0bdb6bb74a620e5d")
