/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:14-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_9 9
#define LABEL_1_10 11
#define LABEL_1_8 13
#define LABEL_1_12 15
#define LABEL_1_13 17
#define ENVIRONMENT_LABEL_1_3 29
#define DEBUGGING_LABEL_1_2 28
#define OBJECT_1_2 27
#define OBJECT_1_1 26
#define OBJECT_1_0 25
#define EXECUTE_CACHE_1_11 19
#define EXECUTE_CACHE_1_7 21
#define FREE_REFERENCE_1_0 24
#define FREE_REFERENCES_LABEL_1_0 18
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
declar_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd28;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_1_4);
      goto process_top_level_declarationsB_11;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto loop_9;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_1_12);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_1_13);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_top_level_declarationsB_19)
DEFLABEL (process_top_level_declarationsB_11)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_22;
  Wrd5 = Wrd9;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto loop_9;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_5])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_21;

DEFLABEL (loop_20)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_1_6);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_1_0])))
    goto label_23;
  (Wrd28.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (Rsp [1]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (label_23)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_33;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_32)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_31;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd7.Obj) = (Rsp [0]);

DEFLABEL (label_26)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_25;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_24)
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_9;

DEFLABEL (label_25)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_29;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_28)
  (Wrd28.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  goto label_26;

DEFLABEL (label_29)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_17)
  (Wrd17.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_14)
  (Wrd11.Obj) = Rvl;
  goto label_32;

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
declar_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_2_4);
      goto process_declarationsB_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_declarationsB_4)
DEFLABEL (process_declarationsB_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_6 5
#define LABEL_3_5 7
#define LABEL_3_8 9
#define LABEL_3_10 11
#define LABEL_3_11 13
#define LABEL_3_12 15
#define ENVIRONMENT_LABEL_3_3 25
#define DEBUGGING_LABEL_3_2 24
#define OBJECT_3_2 23
#define OBJECT_3_1 22
#define OBJECT_3_0 21
#define EXECUTE_CACHE_3_9 17
#define EXECUTE_CACHE_3_7 19
#define FREE_REFERENCES_LABEL_3_0 16
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
declar_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_3_4);
      goto process_declarationB_7;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_3_11);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_3_12);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_declarationB_15)
DEFLABEL (process_declarationB_7)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_26;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_21;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_19;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_18)
  (Rsp [3]) = (Wrd16.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_17;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_16)
  (Rsp [2]) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_17)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_12)
  (Wrd25.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_11)
  (Wrd16.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_10)
  (Wrd7.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_24;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [0]);

DEFLABEL (label_23)
  (Rsp [3]) = (Wrd34.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_3_1]);
  (Rsp [2]) = (Wrd43.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (label_24)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_13)
  (Wrd34.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define TAG_4_6 1
#define LABEL_4_7 7
#define ENVIRONMENT_LABEL_4_3 12
#define DEBUGGING_LABEL_4_2 11
#define EXECUTE_CACHE_4_8 9
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
declar_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_4_4);
      goto declaration_processor_2;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declaration_processor_5)
DEFLABEL (declaration_processor_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define LABEL_5_9 7
#define LABEL_5_7 9
#define LABEL_5_8 11
#define ENVIRONMENT_LABEL_5_3 17
#define DEBUGGING_LABEL_5_2 16
#define OBJECT_5_0 15
#define EXECUTE_CACHE_5_10 13
#define FREE_REFERENCES_LABEL_5_0 12
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
declar_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto declaration_definer_9;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declaration_definer_12)
DEFLABEL (declaration_definer_9)
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

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [2]);
  (Rsp [0]) = (Wrd19.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd30.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Rsp [1]) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_14)
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd10.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd17.uLng) == 1)
    goto label_15;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 2);

DEFLABEL (label_15)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  ((Wrd14.pObj) [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [3]));

DEFLABEL (label_16)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_7);
  goto label_16;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 9
#define DEBUGGING_LABEL_6_2 8
#define FREE_REFERENCE_6_0 7
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
declar_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 9
#define DEBUGGING_LABEL_7_2 8
#define FREE_REFERENCE_7_0 7
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
declar_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 9
#define DEBUGGING_LABEL_8_2 8
#define FREE_REFERENCE_8_0 7
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
declar_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define ENVIRONMENT_LABEL_9_3 13
#define DEBUGGING_LABEL_9_2 12
#define FREE_REFERENCE_9_0 9
#define FREE_ASSIGNMENT_9_0 11
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
declar_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_9_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_0]));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_8)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_6])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_13)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_9_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 9
#define DEBUGGING_LABEL_10_2 8
#define FREE_REFERENCE_10_0 7
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
declar_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define ENVIRONMENT_LABEL_11_3 13
#define DEBUGGING_LABEL_11_2 12
#define FREE_REFERENCE_11_0 9
#define FREE_ASSIGNMENT_11_0 11
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
declar_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_11_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_0]));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_8)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_6])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_13)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define ENVIRONMENT_LABEL_12_3 16
#define DEBUGGING_LABEL_12_2 15
#define EXECUTE_CACHE_12_8 9
#define EXECUTE_CACHE_12_6 11
#define FREE_REFERENCE_12_0 14
#define FREE_REFERENCES_LABEL_12_0 8
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
declar_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_12_4);
      goto define_pre_only_declaration_1;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_pre_only_declaration_5)
DEFLABEL (define_pre_only_declaration_1)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_7;
  Wrd6 = Wrd10;

DEFLABEL (label_6)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_7])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_6 5
#define LABEL_13_5 7
#define ENVIRONMENT_LABEL_13_3 16
#define DEBUGGING_LABEL_13_2 15
#define EXECUTE_CACHE_13_8 9
#define EXECUTE_CACHE_13_7 11
#define FREE_REFERENCE_13_0 14
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
declar_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_13_4);
      goto define_post_only_declaration_1;

    case 1:
      current_block = (Rpc - LABEL_13_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_post_only_declaration_5)
DEFLABEL (define_post_only_declaration_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_7;
  Wrd8 = Wrd12;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 6
#define DEBUGGING_LABEL_14_2 5
#define OBJECT_14_0 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
declar_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto ignored_declaration_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ignored_declaration_3)
DEFLABEL (ignored_declaration_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  Rvl = (current_block [OBJECT_14_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_7 7
#define LABEL_9 9
#define LABEL_10 11
#define LABEL_11 13
#define LABEL_12 15
#define LABEL_14 17
#define LABEL_15 19
#define LABEL_16 21
#define LABEL_19 23
#define LABEL_22 25
#define LABEL_23 27
#define LABEL_24 29
#define LABEL_26 31
#define LABEL_20 33
#define TAG_21 15
#define LABEL_28 35
#define LABEL_32 37
#define LABEL_17 39
#define TAG_18 18
#define LABEL_25 41
#define LABEL_35 43
#define LABEL_29 45
#define TAG_30 21
#define LABEL_37 47
#define LABEL_31 49
#define LABEL_40 51
#define LABEL_41 53
#define LABEL_42 55
#define LABEL_43 57
#define LABEL_44 59
#define LABEL_45 61
#define LABEL_46 63
#define LABEL_47 65
#define LABEL_49 67
#define LABEL_50 69
#define LABEL_51 71
#define LABEL_52 73
#define LABEL_53 75
#define LABEL_54 77
#define LABEL_55 79
#define LABEL_56 81
#define LABEL_57 83
#define LABEL_58 85
#define LABEL_60 87
#define LABEL_61 89
#define LABEL_62 91
#define LABEL_63 93
#define LABEL_65 95
#define LABEL_67 97
#define LABEL_68 99
#define LABEL_34 101
#define LABEL_71 103
#define LABEL_36 105
#define LABEL_72 107
#define LABEL_69 109
#define LABEL_59 111
#define LABEL_70 113
#define LABEL_75 115
#define LABEL_76 117
#define LABEL_79 119
#define LABEL_80 121
#define LABEL_48 123
#define LABEL_83 125
#define LABEL_84 127
#define LABEL_74 129
#define LABEL_86 131
#define LABEL_78 133
#define LABEL_87 135
#define LABEL_88 137
#define LABEL_77 139
#define LABEL_89 141
#define LABEL_91 143
#define LABEL_82 145
#define LABEL_93 147
#define LABEL_85 149
#define LABEL_95 151
#define LABEL_90 153
#define LABEL_92 155
#define LABEL_96 157
#define LABEL_94 159
#define LABEL_98 161
#define LABEL_97 163
#define LABEL_101 165
#define LABEL_102 167
#define LABEL_99 169
#define LABEL_105 171
#define LABEL_106 173
#define LABEL_100 175
#define LABEL_108 177
#define LABEL_103 179
#define LABEL_113 181
#define LABEL_114 183
#define LABEL_104 185
#define LABEL_109 187
#define TAG_110 92
#define LABEL_111 189
#define LABEL_117 191
#define LABEL_118 193
#define LABEL_112 195
#define LABEL_119 197
#define LABEL_120 199
#define LABEL_121 201
#define LABEL_115 203
#define LABEL_116 205
#define LABEL_122 207
#define LABEL_124 209
#define LABEL_125 211
#define LABEL_126 213
#define LABEL_127 215
#define LABEL_128 217
#define LABEL_129 219
#define LABEL_132 221
#define LABEL_133 223
#define LABEL_134 225
#define ENVIRONMENT_LABEL_3 324
#define DEBUGGING_LABEL_2 323
#define PURIFICATION_ROOT 322
#define OBJECT_53 321
#define OBJECT_52 320
#define OBJECT_51 319
#define OBJECT_50 318
#define OBJECT_49 317
#define OBJECT_48 316
#define OBJECT_47 315
#define OBJECT_46 314
#define OBJECT_45 313
#define OBJECT_44 312
#define OBJECT_43 311
#define OBJECT_42 310
#define OBJECT_41 309
#define OBJECT_40 308
#define OBJECT_39 307
#define OBJECT_38 306
#define OBJECT_37 305
#define OBJECT_36 304
#define OBJECT_35 303
#define OBJECT_34 302
#define OBJECT_33 301
#define OBJECT_32 300
#define OBJECT_31 299
#define OBJECT_30 298
#define OBJECT_29 297
#define OBJECT_28 296
#define OBJECT_27 295
#define OBJECT_26 294
#define OBJECT_25 293
#define OBJECT_24 292
#define OBJECT_23 291
#define OBJECT_22 290
#define OBJECT_21 289
#define OBJECT_20 288
#define OBJECT_19 287
#define OBJECT_18 286
#define OBJECT_17 285
#define OBJECT_16 284
#define OBJECT_15 283
#define OBJECT_14 282
#define OBJECT_13 281
#define OBJECT_12 280
#define OBJECT_11 279
#define OBJECT_10 278
#define OBJECT_9 277
#define OBJECT_8 276
#define OBJECT_7 275
#define OBJECT_6 274
#define OBJECT_5 273
#define OBJECT_4 272
#define OBJECT_3 271
#define OBJECT_2 270
#define OBJECT_1 269
#define OBJECT_0 268
#define EXECUTE_CACHE_131 227
#define EXECUTE_CACHE_130 229
#define EXECUTE_CACHE_123 231
#define EXECUTE_CACHE_107 233
#define EXECUTE_CACHE_81 235
#define EXECUTE_CACHE_73 237
#define EXECUTE_CACHE_66 239
#define EXECUTE_CACHE_64 241
#define EXECUTE_CACHE_39 243
#define EXECUTE_CACHE_38 245
#define EXECUTE_CACHE_33 247
#define EXECUTE_CACHE_27 249
#define EXECUTE_CACHE_13 251
#define EXECUTE_CACHE_8 253
#define FREE_REFERENCE_8 256
#define FREE_REFERENCE_7 257
#define FREE_REFERENCE_6 258
#define FREE_REFERENCE_5 259
#define FREE_REFERENCE_4 260
#define FREE_REFERENCE_3 261
#define FREE_REFERENCE_2 262
#define FREE_REFERENCE_1 263
#define FREE_REFERENCE_0 264
#define GLOBAL_EXECUTE_CACHE_5 266
#define FREE_REFERENCES_LABEL_0 226
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
declar_so_3cc60745a6702689 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd75;
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd70;
  machine_word Wrd73;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd67;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd53;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd32;
  machine_word Wrd54;
  machine_word Wrd38;
  machine_word Wrd72;
  machine_word Wrd79;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd125;
  machine_word Wrd135;
  machine_word Wrd128;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd112;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd97;
  machine_word Wrd107;
  machine_word Wrd100;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd84;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd197;
  machine_word Wrd207;
  machine_word Wrd200;
  machine_word Wrd204;
  machine_word Wrd201;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd184;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd196;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd193;
  machine_word Wrd169;
  machine_word Wrd179;
  machine_word Wrd172;
  machine_word Wrd176;
  machine_word Wrd173;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd156;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd151;
  machine_word Wrd148;
  machine_word Wrd137;
  machine_word Wrd139;
  machine_word Wrd142;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd138;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd219;
  machine_word Wrd223;
  machine_word Wrd222;
  machine_word Wrd211;
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd208;
  machine_word Wrd237;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd239;
  machine_word Wrd238;
  machine_word Wrd227;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd224;
  machine_word Wrd244;
  machine_word Wrd283;
  machine_word Wrd275;
  machine_word Wrd277;
  machine_word Wrd279;
  machine_word Wrd278;
  machine_word Wrd265;
  machine_word Wrd269;
  machine_word Wrd268;
  machine_word Wrd267;
  machine_word Wrd273;
  machine_word Wrd263;
  machine_word Wrd293;
  machine_word Wrd290;
  machine_word Wrd262;
  machine_word Wrd261;
  machine_word Wrd260;
  machine_word Wrd288;
  machine_word Wrd285;
  machine_word Wrd258;
  machine_word Wrd252;
  machine_word Wrd251;
  machine_word Wrd249;
  machine_word Wrd243;
  machine_word Wrd303;
  machine_word Wrd310;
  machine_word Wrd306;
  machine_word Wrd298;
  machine_word Wrd300;
  machine_word Wrd302;
  machine_word Wrd301;
  machine_word Wrd295;
  machine_word Wrd240;
  machine_word Wrd426;
  machine_word Wrd433;
  machine_word Wrd429;
  machine_word Wrd424;
  machine_word Wrd423;
  machine_word Wrd425;
  machine_word Wrd415;
  machine_word Wrd422;
  machine_word Wrd418;
  machine_word Wrd412;
  machine_word Wrd413;
  machine_word Wrd414;
  machine_word Wrd404;
  machine_word Wrd411;
  machine_word Wrd399;
  machine_word Wrd401;
  machine_word Wrd403;
  machine_word Wrd402;
  machine_word Wrd398;
  machine_word Wrd396;
  machine_word Wrd395;
  machine_word Wrd394;
  machine_word Wrd391;
  machine_word Wrd381;
  machine_word Wrd388;
  machine_word Wrd384;
  machine_word Wrd378;
  machine_word Wrd379;
  machine_word Wrd380;
  machine_word Wrd370;
  machine_word Wrd377;
  machine_word Wrd373;
  machine_word Wrd367;
  machine_word Wrd368;
  machine_word Wrd369;
  machine_word Wrd359;
  machine_word Wrd366;
  machine_word Wrd362;
  machine_word Wrd354;
  machine_word Wrd356;
  machine_word Wrd358;
  machine_word Wrd357;
  machine_word Wrd353;
  machine_word Wrd345;
  machine_word Wrd352;
  machine_word Wrd348;
  machine_word Wrd342;
  machine_word Wrd343;
  machine_word Wrd344;
  machine_word Wrd334;
  machine_word Wrd341;
  machine_word Wrd337;
  machine_word Wrd329;
  machine_word Wrd331;
  machine_word Wrd333;
  machine_word Wrd332;
  machine_word Wrd328;
  machine_word Wrd320;
  machine_word Wrd327;
  machine_word Wrd323;
  machine_word Wrd315;
  machine_word Wrd317;
  machine_word Wrd319;
  machine_word Wrd318;
  machine_word Wrd311;
  machine_word Wrd20;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd16;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_14);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_19);
      goto continuation_23;

    case 11:
      current_block = (Rpc - LABEL_22);
      goto label_140;

    case 12:
      current_block = (Rpc - LABEL_23);
      goto label_141;

    case 13:
      current_block = (Rpc - LABEL_24);
      goto label_142;

    case 14:
      current_block = (Rpc - LABEL_26);
      goto label_143;

    case 15:
      current_block = (Rpc - LABEL_20);
      goto boolean_variable_property_201;

    case 16:
      current_block = (Rpc - LABEL_28);
      goto label_144;

    case 17:
      current_block = (Rpc - LABEL_32);
      goto label_145;

    case 18:
      current_block = (Rpc - LABEL_17);
      goto evaluate_variable_specification_87;

    case 19:
      current_block = (Rpc - LABEL_25);
      goto continuation_98;

    case 20:
      current_block = (Rpc - LABEL_35);
      goto label_146;

    case 21:
      current_block = (Rpc - LABEL_29);
      goto lambda_202;

    case 22:
      current_block = (Rpc - LABEL_37);
      goto label_147;

    case 23:
      current_block = (Rpc - LABEL_31);
      goto continuation_21;

    case 24:
      current_block = (Rpc - LABEL_40);
      goto continuation_91;

    case 25:
      current_block = (Rpc - LABEL_41);
      goto continuation_38;

    case 26:
      current_block = (Rpc - LABEL_42);
      goto label_162;

    case 27:
      current_block = (Rpc - LABEL_43);
      goto label_163;

    case 28:
      current_block = (Rpc - LABEL_44);
      goto label_164;

    case 29:
      current_block = (Rpc - LABEL_45);
      goto label_165;

    case 30:
      current_block = (Rpc - LABEL_46);
      goto label_166;

    case 31:
      current_block = (Rpc - LABEL_47);
      goto label_167;

    case 32:
      current_block = (Rpc - LABEL_49);
      goto label_168;

    case 33:
      current_block = (Rpc - LABEL_50);
      goto label_169;

    case 34:
      current_block = (Rpc - LABEL_51);
      goto label_170;

    case 35:
      current_block = (Rpc - LABEL_52);
      goto symbol_listP_95;

    case 36:
      current_block = (Rpc - LABEL_53);
      goto label_161;

    case 37:
      current_block = (Rpc - LABEL_54);
      goto label_158;

    case 38:
      current_block = (Rpc - LABEL_55);
      goto label_160;

    case 39:
      current_block = (Rpc - LABEL_56);
      goto label_159;

    case 40:
      current_block = (Rpc - LABEL_57);
      goto loop_85;

    case 41:
      current_block = (Rpc - LABEL_58);
      goto label_153;

    case 42:
      current_block = (Rpc - LABEL_60);
      goto label_154;

    case 43:
      current_block = (Rpc - LABEL_61);
      goto label_155;

    case 44:
      current_block = (Rpc - LABEL_62);
      goto label_151;

    case 45:
      current_block = (Rpc - LABEL_63);
      goto label_152;

    case 46:
      current_block = (Rpc - LABEL_65);
      goto label_150;

    case 47:
      current_block = (Rpc - LABEL_67);
      goto label_148;

    case 48:
      current_block = (Rpc - LABEL_68);
      goto label_149;

    case 49:
      current_block = (Rpc - LABEL_34);
      goto continuation_99;

    case 50:
      current_block = (Rpc - LABEL_71);
      goto label_156;

    case 51:
      current_block = (Rpc - LABEL_36);
      goto continuation_16;

    case 52:
      current_block = (Rpc - LABEL_72);
      goto label_157;

    case 53:
      current_block = (Rpc - LABEL_69);
      goto continuation_53;

    case 54:
      current_block = (Rpc - LABEL_59);
      goto continuation_84;

    case 55:
      current_block = (Rpc - LABEL_70);
      goto continuation_100;

    case 56:
      current_block = (Rpc - LABEL_75);
      goto label_171;

    case 57:
      current_block = (Rpc - LABEL_76);
      goto loop_68;

    case 58:
      current_block = (Rpc - LABEL_79);
      goto label_172;

    case 59:
      current_block = (Rpc - LABEL_80);
      goto label_173;

    case 60:
      current_block = (Rpc - LABEL_48);
      goto continuation_76;

    case 61:
      current_block = (Rpc - LABEL_83);
      goto label_174;

    case 62:
      current_block = (Rpc - LABEL_84);
      goto label_175;

    case 63:
      current_block = (Rpc - LABEL_74);
      goto continuation_101;

    case 64:
      current_block = (Rpc - LABEL_86);
      goto label_176;

    case 65:
      current_block = (Rpc - LABEL_78);
      goto continuation_59;

    case 66:
      current_block = (Rpc - LABEL_87);
      goto label_179;

    case 67:
      current_block = (Rpc - LABEL_88);
      goto label_180;

    case 68:
      current_block = (Rpc - LABEL_77);
      goto continuation_60;

    case 69:
      current_block = (Rpc - LABEL_89);
      goto label_178;

    case 70:
      current_block = (Rpc - LABEL_91);
      goto label_177;

    case 71:
      current_block = (Rpc - LABEL_82);
      goto continuation_72;

    case 72:
      current_block = (Rpc - LABEL_93);
      goto label_181;

    case 73:
      current_block = (Rpc - LABEL_85);
      goto continuation_102;

    case 74:
      current_block = (Rpc - LABEL_95);
      goto label_182;

    case 75:
      current_block = (Rpc - LABEL_90);
      goto continuation_66;

    case 76:
      current_block = (Rpc - LABEL_92);
      goto continuation_78;

    case 77:
      current_block = (Rpc - LABEL_96);
      goto label_183;

    case 78:
      current_block = (Rpc - LABEL_94);
      goto continuation_103;

    case 79:
      current_block = (Rpc - LABEL_98);
      goto label_184;

    case 80:
      current_block = (Rpc - LABEL_97);
      goto continuation_104;

    case 81:
      current_block = (Rpc - LABEL_101);
      goto label_185;

    case 82:
      current_block = (Rpc - LABEL_102);
      goto label_186;

    case 83:
      current_block = (Rpc - LABEL_99);
      goto continuation_106;

    case 84:
      current_block = (Rpc - LABEL_105);
      goto label_187;

    case 85:
      current_block = (Rpc - LABEL_106);
      goto label_188;

    case 86:
      current_block = (Rpc - LABEL_100);
      goto continuation_105;

    case 87:
      current_block = (Rpc - LABEL_108);
      goto check_property_136;

    case 88:
      current_block = (Rpc - LABEL_103);
      goto continuation_108;

    case 89:
      current_block = (Rpc - LABEL_113);
      goto label_189;

    case 90:
      current_block = (Rpc - LABEL_114);
      goto label_190;

    case 91:
      current_block = (Rpc - LABEL_104);
      goto continuation_107;

    case 92:
      current_block = (Rpc - LABEL_109);
      goto lambda_207;

    case 93:
      current_block = (Rpc - LABEL_111);
      goto continuation_110;

    case 94:
      current_block = (Rpc - LABEL_117);
      goto label_191;

    case 95:
      current_block = (Rpc - LABEL_118);
      goto label_192;

    case 96:
      current_block = (Rpc - LABEL_112);
      goto continuation_109;

    case 97:
      current_block = (Rpc - LABEL_119);
      goto continuation_122;

    case 98:
      current_block = (Rpc - LABEL_120);
      goto continuation_125;

    case 99:
      current_block = (Rpc - LABEL_121);
      goto continuation_129;

    case 100:
      current_block = (Rpc - LABEL_115);
      goto continuation_112;

    case 101:
      current_block = (Rpc - LABEL_116);
      goto continuation_111;

    case 102:
      current_block = (Rpc - LABEL_122);
      goto continuation_115;

    case 103:
      current_block = (Rpc - LABEL_124);
      goto label_193;

    case 104:
      current_block = (Rpc - LABEL_125);
      goto label_194;

    case 105:
      current_block = (Rpc - LABEL_126);
      goto label_195;

    case 106:
      current_block = (Rpc - LABEL_127);
      goto label_196;

    case 107:
      current_block = (Rpc - LABEL_128);
      goto label_197;

    case 108:
      current_block = (Rpc - LABEL_129);
      goto label_198;

    case 109:
      current_block = (Rpc - LABEL_132);
      goto label_209;

    case 110:
      current_block = (Rpc - LABEL_133);
      goto label_210;

    case 111:
      current_block = (Rpc - LABEL_134);
      goto expression_139;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_139)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_133])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_210)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_209)
  {
    static const short sections [] =
      {
	0,
	0,
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
	1,
	1,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 14)
      goto label_208;
    blocks = (current_block [OBJECT_53]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_132])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_208)
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
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  ((Wrd23.pObj) [2]) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  ((Wrd15.pObj) [2]) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_246;
  Wrd6 = Wrd10;

DEFLABEL (label_245)
  (Wrd15.Obj) = (current_block [OBJECT_17]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_18]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_244;
  Wrd21 = Wrd25;

DEFLABEL (label_243)
  (Wrd30.Obj) = (current_block [OBJECT_19]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd31.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd40.Obj) = ((Wrd37.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_242;
  Wrd36 = Wrd40;

DEFLABEL (label_241)
  (Wrd45.Obj) = (current_block [OBJECT_20]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (Wrd46.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  ((Wrd51.pObj) [0]) = (Wrd47.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd57.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd60.Obj) = ((Wrd57.pObj) [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd61.uLng) == 50)
    goto label_240;
  Wrd56 = Wrd60;

DEFLABEL (label_239)
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd62.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_238;
  Wrd8 = Wrd12;

DEFLABEL (label_237)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_236;
  Wrd8 = Wrd12;

DEFLABEL (label_235)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_234;
  Wrd8 = Wrd12;

DEFLABEL (label_233)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_232;
  Wrd8 = Wrd12;

DEFLABEL (label_231)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_85);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_230;
  Wrd8 = Wrd12;

DEFLABEL (label_229)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_228;
  Wrd8 = Wrd12;

DEFLABEL (label_227)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_97);
  Rsp = (& (Rsp [1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_226;
  Wrd12 = Wrd16;

DEFLABEL (label_225)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_224;
  Wrd18 = Wrd22;

DEFLABEL (label_223)
  (* (--Rsp)) = (Wrd18.Obj);
  goto check_property_136;

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_100);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107]));

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_222;
  Wrd12 = Wrd16;

DEFLABEL (label_221)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_220;
  Wrd18 = Wrd22;

DEFLABEL (label_219)
  (* (--Rsp)) = (Wrd18.Obj);
  goto check_property_136;

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_104);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107]));

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_218;
  Wrd12 = Wrd16;

DEFLABEL (label_217)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_216;
  Wrd18 = Wrd22;

DEFLABEL (label_215)
  (* (--Rsp)) = (Wrd18.Obj);
  goto check_property_136;

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_112);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107]));

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_214;
  Wrd9 = Wrd13;

DEFLABEL (label_213)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_212;
  Wrd15 = Wrd19;

DEFLABEL (label_211)
  (* (--Rsp)) = (Wrd15.Obj);
  goto check_property_136;

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_116);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107]));

DEFLABEL (label_212)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_118])), (Wrd16.pObj));

DEFLABEL (label_192)
  (Wrd15.Obj) = Rvl;
  goto label_211;

DEFLABEL (label_214)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_117])), (Wrd10.pObj));

DEFLABEL (label_191)
  (Wrd9.Obj) = Rvl;
  goto label_213;

DEFLABEL (label_216)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_114])), (Wrd19.pObj));

DEFLABEL (label_190)
  (Wrd18.Obj) = Rvl;
  goto label_215;

DEFLABEL (label_218)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_113])), (Wrd13.pObj));

DEFLABEL (label_189)
  (Wrd12.Obj) = Rvl;
  goto label_217;

DEFLABEL (label_220)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_106])), (Wrd19.pObj));

DEFLABEL (label_188)
  (Wrd18.Obj) = Rvl;
  goto label_219;

DEFLABEL (label_222)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_105])), (Wrd13.pObj));

DEFLABEL (label_187)
  (Wrd12.Obj) = Rvl;
  goto label_221;

DEFLABEL (label_224)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_102])), (Wrd19.pObj));

DEFLABEL (label_186)
  (Wrd18.Obj) = Rvl;
  goto label_223;

DEFLABEL (label_226)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_101])), (Wrd13.pObj));

DEFLABEL (label_185)
  (Wrd12.Obj) = Rvl;
  goto label_225;

DEFLABEL (label_228)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_98])), (Wrd9.pObj));

DEFLABEL (label_184)
  (Wrd8.Obj) = Rvl;
  goto label_227;

DEFLABEL (label_230)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_95])), (Wrd9.pObj));

DEFLABEL (label_182)
  (Wrd8.Obj) = Rvl;
  goto label_229;

DEFLABEL (label_232)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86])), (Wrd9.pObj));

DEFLABEL (label_176)
  (Wrd8.Obj) = Rvl;
  goto label_231;

DEFLABEL (label_234)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75])), (Wrd9.pObj));

DEFLABEL (label_171)
  (Wrd8.Obj) = Rvl;
  goto label_233;

DEFLABEL (label_236)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_71])), (Wrd9.pObj));

DEFLABEL (label_156)
  (Wrd8.Obj) = Rvl;
  goto label_235;

DEFLABEL (label_238)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35])), (Wrd9.pObj));

DEFLABEL (label_146)
  (Wrd8.Obj) = Rvl;
  goto label_237;

DEFLABEL (label_240)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26])), (Wrd57.pObj));

DEFLABEL (label_143)
  (Wrd56.Obj) = Rvl;
  goto label_239;

DEFLABEL (label_242)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd37.pObj));

DEFLABEL (label_142)
  (Wrd36.Obj) = Rvl;
  goto label_241;

DEFLABEL (label_244)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd22.pObj));

DEFLABEL (label_141)
  (Wrd21.Obj) = Rvl;
  goto label_243;

DEFLABEL (label_246)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd7.pObj));

DEFLABEL (label_140)
  (Wrd6.Obj) = Rvl;
  goto label_245;

DEFLABEL (boolean_variable_property_201)
  CLOSURE_HEADER (LABEL_20);

DEFLABEL (boolean_variable_property_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_248;

DEFLABEL (label_247)
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_24]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33]));

DEFLABEL (label_248)
  if (! ((Wrd6.uLng) == 1))
    goto label_252;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_251)
  if (! ((Wrd14.Obj) == (current_block [OBJECT_18])))
    goto label_247;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29])));
  Rhp += 1;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd27 = Wrd26;
  (Wrd28.Obj) = (Rsp [2]);
  ((Wrd27.pObj) [2]) = (Wrd28.Obj);
  (Rsp [2]) = (Wrd25.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_250;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_249)
  (Wrd41.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [2]);
  (* (--Rsp)) = (Wrd44.Obj);
  goto evaluate_variable_specification_87;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_31);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39]));

DEFLABEL (label_250)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23]), 1);

DEFLABEL (label_145)
  (* (--Rsp)) = Rvl;
  goto label_249;

DEFLABEL (label_252)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_144)
  (Wrd14.Obj) = Rvl;
  goto label_251;

DEFLABEL (evaluate_variable_specification_200)
DEFLABEL (evaluate_variable_specification_87)
  INTERRUPT_CHECK (26, LABEL_17);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [5]));
  goto loop_85;

DEFLABEL (lambda_202)
  CLOSURE_HEADER (LABEL_29);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_259;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd16.Lng))))
    goto label_259;
  (Wrd10.Obj) = ((Wrd14.pObj) [20]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_258)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_36);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_253;
  Rvl = (current_block [OBJECT_43]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_253)
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_257;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd18.Lng))))
    goto label_257;
  (Wrd10.Obj) = ((Wrd16.pObj) [20]);

DEFLABEL (label_256)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_26]);
  (Rsp [1]) = (Wrd32.Obj);
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 10)
    goto label_255;

DEFLABEL (label_254)
  INVOKE_PRIMITIVE ((current_block [OBJECT_44]), 3);

DEFLABEL (label_255)
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd43.Lng))))
    goto label_254;
  ((Wrd41.pObj) [20]) = (Wrd26.Obj);
  Rvl = (current_block [OBJECT_43]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_257)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_26]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27]), 2);

DEFLABEL (label_157)
  (Wrd10.Obj) = Rvl;
  goto label_256;

DEFLABEL (label_259)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_26]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27]), 2);

DEFLABEL (label_147)
  (* (--Rsp)) = Rvl;
  goto label_258;

DEFLABEL (loop_204)
DEFLABEL (loop_85)
  DLINK_INTERRUPT_CHECK (25, LABEL_57);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_33]))
    goto label_313;
  if ((Wrd5.Obj) == (current_block [OBJECT_35]))
    goto label_309;
  if ((Wrd5.Obj) == (current_block [OBJECT_37]))
    goto label_303;
  if (! ((Wrd5.Obj) == (current_block [OBJECT_38])))
    goto label_260;
  Rvl = (current_block [OBJECT_18]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_260)
  if ((Wrd5.Obj) == (current_block [OBJECT_39]))
    goto label_297;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd16.uLng) == 1)
    goto label_268;

DEFLABEL (label_267)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 1)
    goto label_262;

DEFLABEL (label_261)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = (current_block [OBJECT_18]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_262)
  if (! ((Wrd18.uLng) == 1))
    goto label_266;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [0]);

DEFLABEL (label_265)
  if (! ((Wrd26.Obj) == (current_block [OBJECT_40])))
    goto label_261;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_264;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [1]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_263)
  goto symbol_listP_95;

DEFLABEL (label_264)
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_149)
  (Wrd47.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd47.Obj));
  (* (--Rsp)) = Rvl;
  goto label_263;

DEFLABEL (label_266)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23]), 1);

DEFLABEL (label_148)
  (Wrd31.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd26.Obj) = Rvl;
  goto label_265;

DEFLABEL (label_268)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [3]);
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [2]);
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (* (--Rsp)) = (Wrd66.Obj);
  if (! ((Wrd16.uLng) == 1))
    goto label_296;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (* (--Rsp)) = (Wrd69.Obj);

DEFLABEL (label_295)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd311.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd311.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_267;
  (Wrd318.Obj) = (Rsp [0]);
  (Wrd319.uLng) = (OBJECT_TYPE (Wrd318.Obj));
  if (! ((Wrd319.uLng) == 1))
    goto label_294;
  (Wrd317.pObj) = (OBJECT_ADDRESS (Wrd318.Obj));
  (Wrd315.Obj) = ((Wrd317.pObj) [1]);

DEFLABEL (label_293)
  (Wrd328.uLng) = (OBJECT_TYPE (Wrd315.Obj));
  if (! ((Wrd328.uLng) == 1))
    goto label_267;
  (Wrd332.Obj) = (Rsp [0]);
  (Wrd333.uLng) = (OBJECT_TYPE (Wrd332.Obj));
  if (! ((Wrd333.uLng) == 1))
    goto label_292;
  (Wrd331.pObj) = (OBJECT_ADDRESS (Wrd332.Obj));
  (Wrd329.Obj) = ((Wrd331.pObj) [1]);

DEFLABEL (label_291)
  (Wrd344.uLng) = (OBJECT_TYPE (Wrd329.Obj));
  if (! ((Wrd344.uLng) == 1))
    goto label_290;
  (Wrd343.pObj) = (OBJECT_ADDRESS (Wrd329.Obj));
  (Wrd342.Obj) = ((Wrd343.pObj) [1]);

DEFLABEL (label_289)
  (Wrd353.uLng) = (OBJECT_TYPE (Wrd342.Obj));
  if (! ((Wrd353.uLng) == 1))
    goto label_267;
  (Wrd357.Obj) = (Rsp [0]);
  (Wrd358.uLng) = (OBJECT_TYPE (Wrd357.Obj));
  if (! ((Wrd358.uLng) == 1))
    goto label_288;
  (Wrd356.pObj) = (OBJECT_ADDRESS (Wrd357.Obj));
  (Wrd354.Obj) = ((Wrd356.pObj) [1]);

DEFLABEL (label_287)
  (Wrd369.uLng) = (OBJECT_TYPE (Wrd354.Obj));
  if (! ((Wrd369.uLng) == 1))
    goto label_286;
  (Wrd368.pObj) = (OBJECT_ADDRESS (Wrd354.Obj));
  (Wrd367.Obj) = ((Wrd368.pObj) [1]);

DEFLABEL (label_285)
  (Wrd380.uLng) = (OBJECT_TYPE (Wrd367.Obj));
  if (! ((Wrd380.uLng) == 1))
    goto label_284;
  (Wrd379.pObj) = (OBJECT_ADDRESS (Wrd367.Obj));
  (Wrd378.Obj) = ((Wrd379.pObj) [1]);

DEFLABEL (label_283)
  if (! ((Wrd378.Obj) == (current_block [OBJECT_18])))
    goto label_267;
  (Wrd391.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd391.Obj);
  (Wrd394.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd394.Obj);
  (Wrd395.Obj) = (Rsp [3]);
  (Wrd396.pObj) = (OBJECT_ADDRESS (Wrd395.Obj));
  (Wrd398.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd396.pObj)));
  (* (--Rsp)) = (Wrd398.Obj);
  (Wrd402.Obj) = (Rsp [3]);
  (Wrd403.uLng) = (OBJECT_TYPE (Wrd402.Obj));
  if (! ((Wrd403.uLng) == 1))
    goto label_282;
  (Wrd401.pObj) = (OBJECT_ADDRESS (Wrd402.Obj));
  (Wrd399.Obj) = ((Wrd401.pObj) [1]);

DEFLABEL (label_281)
  (Wrd414.uLng) = (OBJECT_TYPE (Wrd399.Obj));
  if (! ((Wrd414.uLng) == 1))
    goto label_280;
  (Wrd413.pObj) = (OBJECT_ADDRESS (Wrd399.Obj));
  (Wrd412.Obj) = ((Wrd413.pObj) [1]);

DEFLABEL (label_279)
  (Wrd425.uLng) = (OBJECT_TYPE (Wrd412.Obj));
  if (! ((Wrd425.uLng) == 1))
    goto label_278;
  (Wrd423.pObj) = (OBJECT_ADDRESS (Wrd412.Obj));
  (Wrd424.Obj) = ((Wrd423.pObj) [0]);
  (* (--Rsp)) = (Wrd424.Obj);

DEFLABEL (label_277)
  Rdl = (& (Rsp [2]));
  goto loop_85;

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_276;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_275)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_274;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_273)
  Rdl = (& (Rsp [2]));
  goto loop_85;

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_272;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_271)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_92);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 1))
    goto label_270;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_269)
  (* (--Rdl)) = (Rsp [2]);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_270)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_183)
  (Wrd11.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd11.Obj));
  (* (--Rsp)) = Rvl;
  goto label_269;

DEFLABEL (label_272)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23]), 1);

DEFLABEL (label_181)
  (Wrd24.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd24.Obj));
  (* (--Rsp)) = Rvl;
  goto label_271;

DEFLABEL (label_274)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23]), 1);

DEFLABEL (label_175)
  (Wrd32.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd32.Obj));
  (* (--Rsp)) = Rvl;
  goto label_273;

DEFLABEL (label_276)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_174)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd16.Obj) = Rvl;
  goto label_275;

DEFLABEL (label_278)
  (Wrd429.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd429.Obj);
  (Wrd433.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd433.Obj);
  (* (--Rsp)) = (Wrd412.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23]), 1);

DEFLABEL (label_170)
  (Wrd426.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd426.Obj));
  (* (--Rsp)) = Rvl;
  goto label_277;

DEFLABEL (label_280)
  (Wrd418.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd418.Obj);
  (Wrd422.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd422.Obj);
  (* (--Rsp)) = (Wrd399.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_169)
  (Wrd415.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd415.Obj));
  (Wrd412.Obj) = Rvl;
  goto label_279;

DEFLABEL (label_282)
  (* (--Rsp)) = (Wrd391.Obj);
  (Wrd411.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd411.Obj);
  (* (--Rsp)) = (Wrd402.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_168)
  (Wrd404.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd404.Obj));
  (Wrd399.Obj) = Rvl;
  goto label_281;

DEFLABEL (label_284)
  (Wrd384.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd384.Obj);
  (Wrd388.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd388.Obj);
  (* (--Rsp)) = (Wrd367.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_167)
  (Wrd381.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd381.Obj));
  (Wrd378.Obj) = Rvl;
  goto label_283;

DEFLABEL (label_286)
  (Wrd373.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd373.Obj);
  (Wrd377.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd377.Obj);
  (* (--Rsp)) = (Wrd354.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_166)
  (Wrd370.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd370.Obj));
  (Wrd367.Obj) = Rvl;
  goto label_285;

DEFLABEL (label_288)
  (Wrd362.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd362.Obj);
  (Wrd366.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd366.Obj);
  (* (--Rsp)) = (Wrd357.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_165)
  (Wrd359.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd359.Obj));
  (Wrd354.Obj) = Rvl;
  goto label_287;

DEFLABEL (label_290)
  (Wrd348.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd348.Obj);
  (Wrd352.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd352.Obj);
  (* (--Rsp)) = (Wrd329.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_164)
  (Wrd345.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd345.Obj));
  (Wrd342.Obj) = Rvl;
  goto label_289;

DEFLABEL (label_292)
  (Wrd337.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd337.Obj);
  (Wrd341.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd341.Obj);
  (* (--Rsp)) = (Wrd332.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_163)
  (Wrd334.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd334.Obj));
  (Wrd329.Obj) = Rvl;
  goto label_291;

DEFLABEL (label_294)
  (Wrd323.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd323.Obj);
  (Wrd327.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd327.Obj);
  (* (--Rsp)) = (Wrd318.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_162)
  (Wrd320.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd320.Obj));
  (Wrd315.Obj) = Rvl;
  goto label_293;

DEFLABEL (label_296)
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23]), 1);

DEFLABEL (label_150)
  (Wrd72.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd72.Obj));
  (* (--Rsp)) = Rvl;
  goto label_295;

DEFLABEL (label_297)
  (Wrd93.Obj) = (Rsp [1]);
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [1]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd96.uLng) == 10))
    goto label_302;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd91.Obj) = ((Wrd90.pObj) [0]);
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd92.Lng))))
    goto label_302;
  (Wrd84.Obj) = ((Wrd90.pObj) [10]);
  (* (--Rsp)) = (Wrd84.Obj);

DEFLABEL (label_301)
  (Wrd121.Obj) = (Rsp [2]);
  (Wrd122.pObj) = (OBJECT_ADDRESS (Wrd121.Obj));
  (Wrd123.Obj) = ((Wrd122.pObj) [1]);
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd123.Obj));
  if (! ((Wrd124.uLng) == 10))
    goto label_300;
  (Wrd118.pObj) = (OBJECT_ADDRESS (Wrd123.Obj));
  (Wrd119.Obj) = ((Wrd118.pObj) [0]);
  (Wrd120.Lng) = (FIXNUM_TO_LONG (Wrd119.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd120.Lng))))
    goto label_300;
  (Wrd112.Obj) = ((Wrd118.pObj) [9]);
  (* (--Rsp)) = (Wrd112.Obj);

DEFLABEL (label_299)
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;

DEFLABEL (label_298)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64]));

DEFLABEL (label_300)
  (Wrd130.Obj) = (Rsp [2]);
  (Wrd131.pObj) = (OBJECT_ADDRESS (Wrd130.Obj));
  (Wrd129.Obj) = ((Wrd131.pObj) [1]);
  (Wrd132.Obj) = (current_block [OBJECT_34]);
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd128.Obj);
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27]), 2);

DEFLABEL (label_152)
  (Wrd125.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd125.Obj));
  (* (--Rsp)) = Rvl;
  goto label_299;

DEFLABEL (label_302)
  (Wrd102.Obj) = (Rsp [1]);
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd101.Obj) = ((Wrd103.pObj) [1]);
  (Wrd104.Obj) = (current_block [OBJECT_36]);
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd100.Obj);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27]), 2);

DEFLABEL (label_151)
  (Wrd97.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd97.Obj));
  (* (--Rsp)) = Rvl;
  goto label_301;

DEFLABEL (label_303)
  (Wrd138.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd145.Obj) = ((Wrd138.pObj) [0]);
  (Wrd146.uLng) = (OBJECT_TYPE (Wrd145.Obj));
  if ((Wrd146.uLng) == 50)
    goto label_308;
  Wrd137 = Wrd145;

DEFLABEL (label_307)
  (* (--Rsp)) = (Wrd137.Obj);
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd148.Obj);
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd151.Obj);
  (Wrd165.Obj) = (Rsp [4]);
  (Wrd166.pObj) = (OBJECT_ADDRESS (Wrd165.Obj));
  (Wrd167.Obj) = ((Wrd166.pObj) [1]);
  (Wrd168.uLng) = (OBJECT_TYPE (Wrd167.Obj));
  if (! ((Wrd168.uLng) == 10))
    goto label_306;
  (Wrd162.pObj) = (OBJECT_ADDRESS (Wrd167.Obj));
  (Wrd163.Obj) = ((Wrd162.pObj) [0]);
  (Wrd164.Lng) = (FIXNUM_TO_LONG (Wrd163.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd164.Lng))))
    goto label_306;
  (Wrd156.Obj) = ((Wrd162.pObj) [10]);
  (* (--Rsp)) = (Wrd156.Obj);

DEFLABEL (label_305)
  (Wrd193.Obj) = (Rsp [5]);
  (Wrd194.pObj) = (OBJECT_ADDRESS (Wrd193.Obj));
  (Wrd195.Obj) = ((Wrd194.pObj) [1]);
  (Wrd196.uLng) = (OBJECT_TYPE (Wrd195.Obj));
  if (! ((Wrd196.uLng) == 10))
    goto label_304;
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd195.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [0]);
  (Wrd192.Lng) = (FIXNUM_TO_LONG (Wrd191.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd192.Lng))))
    goto label_304;
  (Wrd184.Obj) = ((Wrd190.pObj) [9]);
  (* (--Rsp)) = (Wrd184.Obj);
  goto label_298;

DEFLABEL (label_304)
  (Wrd202.Obj) = (Rsp [5]);
  (Wrd203.pObj) = (OBJECT_ADDRESS (Wrd202.Obj));
  (Wrd201.Obj) = ((Wrd203.pObj) [1]);
  (Wrd204.Obj) = (current_block [OBJECT_34]);
  (Wrd200.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd200.Obj);
  (Wrd207.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd207.Obj);
  (* (--Rsp)) = (Wrd204.Obj);
  (* (--Rsp)) = (Wrd201.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27]), 2);

DEFLABEL (label_155)
  (Wrd197.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd197.Obj));
  (* (--Rsp)) = Rvl;
  goto label_298;

DEFLABEL (label_306)
  (Wrd174.Obj) = (Rsp [4]);
  (Wrd175.pObj) = (OBJECT_ADDRESS (Wrd174.Obj));
  (Wrd173.Obj) = ((Wrd175.pObj) [1]);
  (Wrd176.Obj) = (current_block [OBJECT_36]);
  (Wrd172.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd172.Obj);
  (Wrd179.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd179.Obj);
  (* (--Rsp)) = (Wrd176.Obj);
  (* (--Rsp)) = (Wrd173.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27]), 2);

DEFLABEL (label_154)
  (Wrd169.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd169.Obj));
  (* (--Rsp)) = Rvl;
  goto label_305;

DEFLABEL (label_308)
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd142.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58])), (Wrd138.pObj));

DEFLABEL (label_153)
  (Wrd139.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd137.Obj) = Rvl;
  goto label_307;

DEFLABEL (label_309)
  (Wrd208.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd208.Obj);
  (Wrd209.Obj) = (Rsp [2]);
  (Wrd210.pObj) = (OBJECT_ADDRESS (Wrd209.Obj));
  (Wrd211.Obj) = ((Wrd210.pObj) [1]);
  (* (--Rsp)) = (Wrd211.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd222.Obj) = (Rsp [0]);
  (Wrd223.uLng) = (OBJECT_TYPE (Wrd222.Obj));
  if ((Wrd223.uLng) == 10)
    goto label_311;

DEFLABEL (label_310)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27]), 2);

DEFLABEL (label_311)
  (Wrd219.pObj) = (OBJECT_ADDRESS (Wrd222.Obj));
  (Wrd220.Obj) = ((Wrd219.pObj) [0]);
  (Wrd221.Lng) = (FIXNUM_TO_LONG (Wrd220.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd221.Lng))))
    goto label_310;
  Rvl = ((Wrd219.pObj) [10]);

DEFLABEL (label_312)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_313)
  (Wrd224.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd224.Obj);
  (Wrd225.Obj) = (Rsp [2]);
  (Wrd226.pObj) = (OBJECT_ADDRESS (Wrd225.Obj));
  (Wrd227.Obj) = ((Wrd226.pObj) [1]);
  (* (--Rsp)) = (Wrd227.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd238.Obj) = (Rsp [0]);
  (Wrd239.uLng) = (OBJECT_TYPE (Wrd238.Obj));
  if (! ((Wrd239.uLng) == 10))
    goto label_310;
  (Wrd235.pObj) = (OBJECT_ADDRESS (Wrd238.Obj));
  (Wrd236.Obj) = ((Wrd235.pObj) [0]);
  (Wrd237.Lng) = (FIXNUM_TO_LONG (Wrd236.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd237.Lng))))
    goto label_310;
  Rvl = ((Wrd235.pObj) [9]);
  goto label_312;

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73]));

DEFLABEL (symbol_listP_203)
DEFLABEL (symbol_listP_95)
  INTERRUPT_CHECK (26, LABEL_52);
  (Wrd240.Obj) = (Rsp [0]);
  if ((Wrd240.Obj) == (current_block [OBJECT_18]))
    goto label_328;
  (Wrd243.uLng) = (OBJECT_TYPE (Wrd240.Obj));
  if ((Wrd243.uLng) == 1)
    goto label_315;

DEFLABEL (label_314)
  Rsp = (& (Rsp [1]));
  (Wrd244.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd244.Obj));
  goto label_261;

DEFLABEL (label_315)
  (Wrd249.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd249.Obj);
  if (! ((Wrd243.uLng) == 1))
    goto label_327;
  (Wrd251.pObj) = (OBJECT_ADDRESS (Wrd240.Obj));
  (Wrd252.Obj) = ((Wrd251.pObj) [0]);
  (* (--Rsp)) = (Wrd252.Obj);

DEFLABEL (label_326)
  (Wrd285.Obj) = (current_block [OBJECT_28]);
  (Wrd288.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd288.Lng))))
    goto label_325;
  (Wrd260.uLng) = (OBJECT_DATUM (Wrd285.Obj));
  (Wrd261.Obj) = (Rsp [0]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if ((Wrd260.Obj) == (Wrd262.Obj))
    goto label_324;

DEFLABEL (label_323)
  (Wrd263.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd263.Obj);
  (Wrd273.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd273.Lng)))
    goto label_316;
  INVOKE_PRIMITIVE ((current_block [OBJECT_29]), 2);

DEFLABEL (label_316)
  (Wrd267.uLng) = (OBJECT_DATUM (Wrd263.Obj));
  (Wrd268.Obj) = (Rsp [1]);
  (Wrd269.uLng) = (OBJECT_TYPE (Wrd268.Obj));
  if ((Wrd267.Obj) == (Wrd269.Obj))
    goto label_318;
  (Wrd265.Obj) = (current_block [OBJECT_32]);
  goto label_317;

DEFLABEL (label_318)
  (Wrd265.Obj) = (current_block [OBJECT_31]);

DEFLABEL (label_317)
DEFLABEL (label_322)
  Rsp = (& (Rsp [3]));
  if ((Wrd265.Obj) == ((SCHEME_OBJECT) 0))
    goto label_314;

DEFLABEL (label_321)
  (Wrd278.Obj) = (Rsp [0]);
  (Wrd279.uLng) = (OBJECT_TYPE (Wrd278.Obj));
  if (! ((Wrd279.uLng) == 1))
    goto label_320;
  (Wrd277.pObj) = (OBJECT_ADDRESS (Wrd278.Obj));
  (Wrd275.Obj) = ((Wrd277.pObj) [1]);

DEFLABEL (label_319)
  (Rsp [0]) = (Wrd275.Obj);
  goto label_263;

DEFLABEL (label_320)
  (Wrd283.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd283.Obj);
  (* (--Rsp)) = (Wrd278.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_159)
  (Wrd275.Obj) = Rvl;
  goto label_319;

DEFLABEL (label_324)
  Rsp = (& (Rsp [2]));
  goto label_321;

DEFLABEL (label_325)
  (Wrd290.Obj) = (Rsp [0]);
  (Wrd293.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd293.Obj);
  (* (--Rsp)) = (Wrd290.Obj);
  (* (--Rsp)) = (Wrd285.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29]), 2);

DEFLABEL (label_160)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_323;
  goto label_324;

DEFLABEL (label_327)
  (Wrd258.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd258.Obj);
  (* (--Rsp)) = (Wrd240.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23]), 1);

DEFLABEL (label_158)
  (* (--Rsp)) = Rvl;
  goto label_326;

DEFLABEL (label_328)
  Rsp = (& (Rsp [1]));
  (Wrd295.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd295.Obj));
  (Wrd301.Obj) = (Rsp [0]);
  (Wrd302.uLng) = (OBJECT_TYPE (Wrd301.Obj));
  if (! ((Wrd302.uLng) == 1))
    goto label_330;
  (Wrd300.pObj) = (OBJECT_ADDRESS (Wrd301.Obj));
  (Wrd298.Obj) = ((Wrd300.pObj) [1]);

DEFLABEL (label_329)
  (Rsp [0]) = (Wrd298.Obj);
  goto loop_68;

DEFLABEL (label_330)
  (Wrd306.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd306.Obj);
  (Wrd310.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd310.Obj);
  (* (--Rsp)) = (Wrd301.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_161)
  (Wrd303.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd303.Obj));
  (Wrd298.Obj) = Rvl;
  goto label_329;

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_40);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_314;
  goto label_321;

DEFLABEL (loop_205)
DEFLABEL (loop_68)
  DLINK_INTERRUPT_CHECK (25, LABEL_76);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_18]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_331;
  Rvl = (Wrd6.Obj);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_331)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_346;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd29.Lng))))
    goto label_346;
  (Wrd21.Obj) = ((Wrd27.pObj) [9]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_345)
  (Wrd48.Obj) = (Rsp [5]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_344;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_343)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd50.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd50.Obj));
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_338;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_337)
  (Wrd54.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd54.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_334;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_333;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_332)
  Rdl = (& (Rsp [2]));
  goto loop_68;

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_90);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_333)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_177)
  (Wrd23.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd23.Obj));
  (* (--Rsp)) = Rvl;
  goto label_332;

DEFLABEL (label_334)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_336;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_335)
  (Wrd49.pObj) = (& (Rsp [5]));
  {
    SCHEME_OBJECT * IPDLp1 = (((Wrd49.pObj) <= Rdl) ? (Wrd49.pObj) : Rdl);
    (* (--IPDLp1)) = (Rsp [1]);
    (* (--IPDLp1)) = (Rsp [0]);
    Rsp = IPDLp1;
  }
  goto loop_68;

DEFLABEL (label_336)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_178)
  (Wrd41.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd41.Obj));
  (* (--Rsp)) = Rvl;
  goto label_335;

DEFLABEL (label_338)
  (Wrd61.Obj) = (Rsp [3]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_342;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_341)
  (Wrd80.Obj) = (Rsp [5]);
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [1]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 10))
    goto label_340;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [0]);
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd79.Lng))))
    goto label_340;
  (Wrd67.Obj) = ((Wrd77.pObj) [10]);

DEFLABEL (label_339)
  (Rsp [1]) = (Wrd67.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81]));

DEFLABEL (label_340)
  (Wrd85.Obj) = (Rsp [5]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd84.Obj) = ((Wrd86.pObj) [1]);
  (Wrd87.Obj) = (current_block [OBJECT_36]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27]), 2);

DEFLABEL (label_180)
  (Wrd67.Obj) = Rvl;
  goto label_339;

DEFLABEL (label_342)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23]), 1);

DEFLABEL (label_179)
  (* (--Rsp)) = Rvl;
  goto label_341;

DEFLABEL (label_344)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23]), 1);

DEFLABEL (label_173)
  (Wrd50.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd50.Obj));
  (* (--Rsp)) = Rvl;
  goto label_343;

DEFLABEL (label_346)
  (Wrd39.Obj) = (Rsp [5]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [1]);
  (Wrd41.Obj) = (current_block [OBJECT_34]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27]), 2);

DEFLABEL (label_172)
  (Wrd34.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd34.Obj));
  (* (--Rsp)) = Rvl;
  goto label_345;

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_77);
  goto label_337;

DEFLABEL (check_property_206)
DEFLABEL (check_property_136)
  INTERRUPT_CHECK (26, LABEL_108);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_110);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_109])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_207)
  CLOSURE_HEADER (LABEL_109);

DEFLABEL (lambda_135)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_115);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  if ((Wrd5.Obj) == (current_block [OBJECT_18]))
    goto label_369;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_123]));

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_122);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_353;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_131]));

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_121);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_349;
  (Wrd12.Obj) = (Rsp [0]);

DEFLABEL (label_348)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_347)
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [3]);
  (Rsp [1]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_349)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_351;
  (Wrd29.Obj) = (current_block [OBJECT_18]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd34.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  goto label_350;

DEFLABEL (label_351)
  (Wrd42.Obj) = (Rsp [4]);
  (Wrd43.Obj) = (current_block [OBJECT_18]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (Wrd51.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd44.Obj);

DEFLABEL (label_350)
DEFLABEL (label_352)
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  goto label_348;

DEFLABEL (label_353)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_368;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_367)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_366;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_365)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_364;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_363)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_362;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_361)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_360;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd48.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_359)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_358;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd55.Obj) = ((Wrd56.pObj) [0]);

DEFLABEL (label_357)
  (Rsp [2]) = (Wrd55.Obj);
  (Wrd62.Obj) = (Rsp [3]);
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [2]);
  if ((Wrd64.Obj) == ((SCHEME_OBJECT) 0))
    goto label_355;
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd69.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd69.Obj);
  goto label_354;

DEFLABEL (label_355)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_354)
DEFLABEL (label_356)
  (Wrd75.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_130]));

DEFLABEL (label_358)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23]), 1);

DEFLABEL (label_198)
  (Wrd55.Obj) = Rvl;
  goto label_357;

DEFLABEL (label_360)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_197)
  (Wrd48.Obj) = Rvl;
  goto label_359;

DEFLABEL (label_362)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_196)
  (Wrd39.Obj) = Rvl;
  goto label_361;

DEFLABEL (label_364)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23]), 1);

DEFLABEL (label_195)
  (* (--Rsp)) = Rvl;
  goto label_363;

DEFLABEL (label_366)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23]), 1);

DEFLABEL (label_194)
  (* (--Rsp)) = Rvl;
  goto label_365;

DEFLABEL (label_368)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_193)
  (Wrd14.Obj) = Rvl;
  goto label_367;

DEFLABEL (label_369)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [2]);
  goto label_348;

DEFLABEL (continuation_125)
  INTERRUPT_CHECK (27, LABEL_120);
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd56.Obj) = (current_block [OBJECT_18]);
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (Wrd64.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd64.Obj);
  (* (Rhp++)) = (Wrd58.Obj);

DEFLABEL (label_370)
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  Rsp = (& (Rsp [3]));
  goto label_347;

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_119);
  (Wrd69.Obj) = (current_block [OBJECT_18]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd69.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (Wrd73.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd72.pObj) = (& (Rhp [-2]));
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd72.pObj)));
  (Wrd77.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd77.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  goto label_370;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_declar_so_3cc60745a6702689 [14] =
  {
    { "declar_so_code_1", 8, declar_so_code_1 },
    { "declar_so_code_2", 2, declar_so_code_2 },
    { "declar_so_code_3", 7, declar_so_code_3 },
    { "declar_so_code_4", 3, declar_so_code_4 },
    { "declar_so_code_5", 5, declar_so_code_5 },
    { "declar_so_code_6", 2, declar_so_code_6 },
    { "declar_so_code_7", 2, declar_so_code_7 },
    { "declar_so_code_8", 2, declar_so_code_8 },
    { "declar_so_code_9", 3, declar_so_code_9 },
    { "declar_so_code_10", 2, declar_so_code_10 },
    { "declar_so_code_11", 3, declar_so_code_11 },
    { "declar_so_code_12", 3, declar_so_code_12 },
    { "declar_so_code_13", 3, declar_so_code_13 },
    { "declar_so_code_14", 1, declar_so_code_14 }
  };

int
decl_declar_so_3cc60745a6702689 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_declar_so_3cc60745a6702689);
  return (0);
}

DECLARE_COMPILED_CODE ("declar.so", 112, decl_declar_so_3cc60745a6702689, declar_so_3cc60745a6702689)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_declar_so_data_3cc60745a6702689 [2868] =
  "\xc5\x02\x1d\x89\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\xb9\xc1"
  "\xba\x08\x0d\x24\x28\x0d\xbb\x28\x0d\xbc\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d"
  "\xb0\x82\x88\x28\x0d\xbe\x28\x0d\xbf\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x83\x88\xb1\x0c\xb2\x28\xb4\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x84\x88\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x85\x88\xc2\x28\xb4\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x0d\x1c\x24"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x25\x1b\x24\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x25\x1b\x24\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x22\x29\x21\x9d\x2b\xb8\x17"
  "\x1c\x88\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\xc3\x1d\x0d\x0c\x0d"
  "\x0d\x0d\x0d\x02\x0d\x02\x0d\x06\x07\x85\xc2\x02\xc2\x02\x0d\x0c"
  "\xb2\xb1\x0d\x0d\x0d\x08\x0d\xc3\x0d\x1c\x1b\x1b\x1b\x0d\x1c\x0d"
  "\x1c\x9b\x1e\xb0\x2a\x1b\x2a\x1b\x2a\x9b\x1b\x1b\x2a\x1b\x2a\x0d"
  "\x1b\x2a\x1b\x2a\xc3\x0d\x1b\x2a\x1b\x2a\x1b\x1b\x0d\x1c\x0d\x1c"
  "\xb7\xb3\x1b\x9e\x08\x08\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb5\x2a"
  "\x9e\x28\x0d\x26\x0d\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x24\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\xb6\x28\x0d\x28\xb4\x28\x0d"
  "\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5a\x2f"
  "\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61"
  "\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65"
  "\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x66\x67\x67\x65\x6e\x2f\x64\x65"
  "\x63\x6c\x61\x72\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x04\x63"
  "\x64\x72\x04\x63\x61\x72\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a"
  "\x64\x65\x66\x61\x75\x6c\x74\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65"
  "\x6c\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x02\x05"
  "\x16\x70\x72\x6f\x63\x65\x73\x73\x2d\x64\x65\x63\x6c\x61\x72\x61"
  "\x74\x69\x6f\x6e\x73\x21\x04\x05\x61\x73\x73\x71\x03\x78\x12\x81"
  "\x8b\x02\x77\x10\x81\x8b\x02\x76\x0e\x81\x8b\x02\x75\x0c\x81\x8f"
  "\x02\x74\x0a\x81\x8f\x02\x73\x08\x81\x8b\x02\x72\x06\x81\x87\x02"
  "\x71\x04\x85\x08\x11\x1e\x02\x04\x09\x66\x6f\x72\x2d\x65\x61\x63"
  "\x68\x05\x15\x70\x72\x6f\x63\x65\x73\x73\x2d\x64\x65\x63\x6c\x61"
  "\x72\x61\x74\x69\x6f\x6e\x21\x03\x7a\x06\x81\x85\x02\x79\x04\x85"
  "\x08\x05\x0d\x09\x02\x19\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x64\x65"
  "\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x6e\x61\x6d\x65\x04\x04"
  "\x05\x77\x61\x72\x6e\x0a\x03\x81\x01\x10\x81\x89\x02\x80\x01\x0e"
  "\x81\x89\x02\x7f\x0c\x81\x89\x02\x7e\x0a\x81\x89\x02\x7d\x08\x81"
  "\x87\x02\x7c\x06\x81\x8b\x02\x7b\x04\x85\x08\x0f\x1a\x0b\x02\x05"
  "\x20\x70\x72\x6f\x63\x65\x73\x73\x2d\x74\x6f\x70\x2d\x6c\x65\x76"
  "\x65\x6c\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x21"
  "\x0c\x02\x84\x01\x08\x81\x89\x02\x83\x01\x06\x81\x87\x02\x82\x01"
  "\x04\x83\x04\x07\x0d\x0d\x02\x09\x73\x65\x74\x2d\x63\x64\x72\x21"
  "\x04\x02\x89\x01\x0c\x81\x89\x02\x88\x01\x0a\x81\x87\x02\x87\x01"
  "\x08\x81\x83\x02\x86\x01\x06\x81\x87\x02\x85\x01\x04\x84\x06\x0b"
  "\x12\x0e\x02\x11\x70\x72\x65\x2d\x64\x65\x63\x6c\x61\x72\x61\x74"
  "\x69\x6f\x6e\x73\x0f\x02\x8b\x01\x06\x81\x81\x02\x8a\x01\x04\x82"
  "\x02\x05\x0a\x10\x02\x08\x12\x70\x6f\x73\x74\x2d\x64\x65\x63\x6c"
  "\x61\x72\x61\x74\x69\x6f\x6e\x73\x11\x02\x8d\x01\x06\x81\x81\x02"
  "\x8c\x01\x04\x82\x02\x05\x0a\x12\x02\x09\x0f\x02\x8f\x01\x06\x81"
  "\x81\x02\x8e\x01\x04\x82\x02\x05\x0a\x13\x02\x0a\x0f\x02\x0f\x02"
  "\x92\x01\x08\x81\x85\x02\x91\x01\x06\x81\x83\x02\x90\x01\x04\x83"
  "\x04\x07\x0e\x14\x02\x0b\x11\x02\x94\x01\x06\x81\x81\x02\x93\x01"
  "\x04\x82\x02\x05\x0a\x15\x02\x0c\x11\x02\x11\x02\x97\x01\x08\x81"
  "\x85\x02\x96\x01\x06\x81\x83\x02\x95\x01\x04\x83\x04\x07\x0e\x16"
  "\x02\x0d\x14\x69\x67\x6e\x6f\x72\x65\x64\x2d\x64\x65\x63\x6c\x61"
  "\x72\x61\x74\x69\x6f\x6e\x17\x02\x04\x17\x64\x65\x66\x69\x6e\x65"
  "\x2d\x70\x72\x65\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e"
  "\x18\x04\x18\x64\x65\x66\x69\x6e\x65\x2d\x70\x6f\x73\x74\x2d\x64"
  "\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x19\x03\x9a\x01\x08\x81"
  "\x85\x02\x99\x01\x06\x81\x85\x02\x98\x01\x04\x84\x06\x07\x11\x1a"
  "\x02\x0e\x17\x02\x04\x18\x04\x19\x03\x9d\x01\x08\x81\x85\x02\x9c"
  "\x01\x06\x81\x87\x02\x9b\x01\x04\x84\x06\x07\x11\x1b\x02\x0f\x02"
  "\x9e\x01\x04\x85\x08\x03\x0f\x1c\x1c\x10\x6e\x6f\x2d\x72\x61\x6e"
  "\x67\x65\x2d\x63\x68\x65\x63\x6b\x73\x0d\x72\x61\x6e\x67\x65\x2d"
  "\x63\x68\x65\x63\x6b\x73\x0f\x6e\x6f\x2d\x74\x79\x70\x65\x2d\x63"
  "\x68\x65\x63\x6b\x73\x0c\x74\x79\x70\x65\x2d\x63\x68\x65\x63\x6b"
  "\x73\x0e\x70\x75\x72\x65\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x11"
  "\x73\x69\x64\x65\x2d\x65\x66\x66\x65\x63\x74\x2d\x66\x72\x65\x65"
  "\x11\x75\x73\x75\x61\x6c\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f"
  "\x6e\x18\x69\x67\x6e\x6f\x72\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x2d\x74\x72\x61\x70\x73\x0c\x76\x65\x63\x74\x6f\x72"
  "\x2d\x73\x65\x74\x21\x02\x17\x69\x67\x6e\x6f\x72\x65\x2d\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x73\x21\x4d\x69"
  "\x73\x66\x6f\x72\x6d\x65\x64\x20\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x20\x73\x70\x65\x63\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x04\x73"
  "\x65\x74\x04\x61\x6c\x6c\x05\x6e\x6f\x6e\x65\x09\x61\x73\x73\x69"
  "\x67\x6e\x65\x64\x0a\x05\x66\x72\x65\x65\x09\x06\x62\x6f\x75\x6e"
  "\x64\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x1e\x0b"
  "\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x14\x09\x63\x6f\x6e\x73"
  "\x74\x61\x6e\x74\x16\x4d\x69\x73\x66\x6f\x72\x6d\x65\x64\x20\x64"
  "\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x09\x75\x75\x6f\x2d\x6c"
  "\x69\x6e\x6b\x0b\x64\x69\x66\x66\x65\x72\x65\x6e\x63\x65\x0d\x69"
  "\x6e\x74\x65\x72\x73\x65\x63\x74\x69\x6f\x6e\x06\x75\x6e\x69\x6f"
  "\x6e\x13\x6c\x65\x78\x69\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e"
  "\x6d\x65\x6e\x74\x1a\x62\x6f\x6f\x6c\x65\x61\x6e\x2d\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x2d\x70\x72\x6f\x70\x65\x72\x74\x79\x1c\x19"
  "\x1c\x17\x1d\x64\x65\x66\x69\x6e\x65\x2d\x70\x6f\x73\x74\x2d\x6f"
  "\x6e\x6c\x79\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x19"
  "\x1c\x64\x65\x66\x69\x6e\x65\x2d\x70\x72\x65\x2d\x6f\x6e\x6c\x79"
  "\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x17\x04\x1b\x04"
  "\x1a\x04\x18\x15\x04\x16\x04\x1b\x70\x72\x6f\x63\x65\x73\x73\x2d"
  "\x70\x6f\x73\x74\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e"
  "\x73\x21\x13\x04\x14\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x1a\x70\x72\x6f\x63\x65\x73\x73\x2d"
  "\x70\x72\x65\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73"
  "\x21\x12\x04\x10\x04\x11\x0f\x14\x64\x65\x63\x6c\x61\x72\x61\x74"
  "\x69\x6f\x6e\x2d\x64\x65\x66\x69\x6e\x65\x72\x1b\x16\x64\x65\x63"
  "\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2d\x70\x72\x6f\x63\x65\x73\x73"
  "\x6f\x72\x1a\x0c\x0e\x04\x0d\x04\x0b\x04\x09\x04\x04\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x0d"
  "\x65\x71\x2d\x73\x65\x74\x2d\x75\x6e\x69\x6f\x6e\x14\x65\x71\x2d"
  "\x73\x65\x74\x2d\x69\x6e\x74\x65\x72\x73\x65\x63\x74\x69\x6f\x6e"
  "\x12\x65\x71\x2d\x73\x65\x74\x2d\x64\x69\x66\x66\x65\x72\x65\x6e"
  "\x63\x65\x1c\x13\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x61\x73\x73"
  "\x69\x67\x6e\x65\x64\x3f\x17\x73\x65\x74\x2d\x62\x6c\x6f\x63\x6b"
  "\x2d\x74\x79\x70\x65\x2d\x63\x68\x65\x63\x6b\x73\x21\x12\x62\x6c"
  "\x6f\x63\x6b\x2d\x74\x79\x70\x65\x2d\x63\x68\x65\x63\x6b\x73\x18"
  "\x73\x65\x74\x2d\x62\x6c\x6f\x63\x6b\x2d\x72\x61\x6e\x67\x65\x2d"
  "\x63\x68\x65\x63\x6b\x73\x21\x13\x62\x6c\x6f\x63\x6b\x2d\x72\x61"
  "\x6e\x67\x65\x2d\x63\x68\x65\x63\x6b\x73\x0a\x03\x1a\x04\x1b\x04"
  "\x19\x04\x0a\x04\x05\x6d\x65\x6d\x71\x04\x04\x07\x61\x70\x70\x65"
  "\x6e\x64\x04\x04\x18\x6c\x69\x73\x74\x2d\x74\x72\x61\x6e\x73\x66"
  "\x6f\x72\x6d\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x04\x0f\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x2d\x61\x73\x73\x6f\x63\x04\x17\x03\x09"
  "\x62\x6f\x6f\x6c\x65\x61\x6e\x3f\x04\x0e\x65\x71\x2d\x73\x65\x74"
  "\x2d\x61\x64\x6a\x6f\x69\x6e\x04\x05\x65\x71\x76\x3f\x0f\x70\xe2"
  "\x01\x80\x80\x04\x6f\xe0\x01\x81\x81\x02\x6e\xde\x01\x81\x81\x02"
  "\x6d\xdc\x01\x81\x8f\x02\x6c\xda\x01\x81\x8f\x02\x6b\xd8\x01\x81"
  "\x8f\x02\x6a\xd6\x01\x81\x8d\x02\x69\xd4\x01\x81\x8b\x02\x68\xd2"
  "\x01\x81\x8b\x02\x67\xd0\x01\x81\x8b\x02\x66\xce\x01\x81\x81\x02"
  "\x65\xcc\x01\x81\x89\x02\x64\xca\x01\x81\x8b\x02\x63\xc8\x01\x81"
  "\x8f\x02\x62\xc6\x01\x81\x8f\x02\x61\xc4\x01\x81\x83\x02\x60\xc2"
  "\x01\x81\x87\x02\x5f\xc0\x01\x81\x85\x02\x5e\xbe\x01\x81\x81\x02"
  "\x5d\xbc\x01\x81\x89\x02\x5c\xba\x01\x81\x83\x02\x5b\xb8\x01\x81"
  "\x89\x02\x5a\xb6\x01\x81\x87\x02\x59\xb4\x01\x81\x81\x02\x58\xb2"
  "\x01\x81\x87\x02\x57\xb0\x01\x81\x83\x02\x56\xae\x01\x81\x89\x02"
  "\x55\xac\x01\x81\x87\x02\x54\xaa\x01\x81\x81\x02\x53\xa8\x01\x81"
  "\x89\x02\x52\xa6\x01\x81\x87\x02\x51\xa4\x01\x81\x83\x02\x50\xa2"
  "\x01\x81\x85\x02\x4f\xa0\x01\x81\x83\x02\x4e\x9e\x01\xfd\xff\x03"
  "\x4d\x9c\x01\xfd\xff\x03\x4c\x9a\x01\xfd\xff\x03\x4b\x98\x01\x81"
  "\x85\x02\x4a\x96\x01\x81\x83\x02\x49\x94\x01\xfd\xff\x03\x48\x92"
  "\x01\xfd\xff\x03\x47\x90\x01\xfd\xff\x03\x46\x8e\x01\xfd\xff\x03"
  "\x45\x8c\x01\xfd\xff\x03\x44\x8a\x01\x81\x85\x02\x43\x88\x01\x81"
  "\x83\x02\x42\x86\x01\xfd\xff\x03\x41\x84\x01\x81\x85\x02\x40\x82"
  "\x01\x81\x83\x02\x3f\x80\x01\xfd\xff\x03\x3e\x7e\xfd\xff\x03\x3d"
  "\x7c\xfd\xff\x03\x3c\x7a\xfd\xff\x03\x3b\x78\xfd\xff\x03\x3a\x76"
  "\xff\xff\x03\x39\x74\x81\x85\x02\x38\x72\x81\x83\x02\x37\x70\xfd"
  "\xff\x03\x36\x6e\xfd\xff\x03\x35\x6c\x81\x87\x02\x34\x6a\x81\x85"
  "\x02\x33\x68\x81\x85\x02\x32\x66\x81\x83\x02\x31\x64\xfd\xff\x03"
  "\x30\x62\xfd\xff\x03\x2f\x60\xfd\xff\x03\x2e\x5e\xfd\xff\x03\x2d"
  "\x5c\xfd\xff\x03\x2c\x5a\xfd\xff\x03\x2b\x58\xfd\xff\x03\x2a\x56"
  "\xfd\xff\x03\x29\x54\xff\xff\x03\x28\x52\xfd\xff\x03\x27\x50\x81"
  "\x83\x02\x26\x4e\xfd\xff\x03\x25\x4c\xfd\xff\x03\x24\x4a\xff\xff"
  "\x03\x23\x48\xfd\xff\x03\x22\x46\xfd\xff\x03\x21\x44\xfd\xff\x03"
  "\x20\x42\xfd\xff\x03\x1f\x40\xfd\xff\x03\x1e\x3e\xfd\xff\x03\x1d"
  "\x3c\xfd\xff\x03\x1c\x3a\xfd\xff\x03\x1b\x38\xfd\xff\x03\x1a\x36"
  "\xfd\xff\x03\x19\x34\xfd\xff\x03\x18\x32\x81\x89\x02\x17\x30\x81"
  "\x87\x02\x16\x2e\x81\x85\x02\x15\x2c\x81\x85\x02\x14\x2a\x81\x83"
  "\x02\x13\x28\x81\x87\x02\x12\x26\x81\x8b\x02\x11\x24\x81\x89\x02"
  "\x10\x22\x81\x89\x02\x0f\x20\x81\x85\x02\x0e\x1e\x81\x89\x02\x0d"
  "\x1c\x81\x89\x02\x0c\x1a\x81\x87\x02\x0b\x18\x81\x87\x02\x0a\x16"
  "\x81\x83\x02\x09\x14\x81\x85\x02\x08\x12\x81\x83\x02\x07\x10\x81"
  "\x85\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83"
  "\x02\x03\x08\x81\x85\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02"
  "\xe1\x01\xc5\x02";

SCHEME_OBJECT *
declar_so_data_3cc60745a6702689 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_declar_so_data_3cc60745a6702689 [0]))), (sizeof (prog_declar_so_data_3cc60745a6702689)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_134]));
}

DECLARE_COMPILED_DATA_NS ("declar.so", declar_so_data_3cc60745a6702689)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("declar.so", "3d179534b7022f81")
