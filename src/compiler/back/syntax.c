/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:09-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_5 7
#define LABEL_1_10 9
#define LABEL_1_8 11
#define ENVIRONMENT_LABEL_1_3 24
#define DEBUGGING_LABEL_1_2 23
#define OBJECT_1_3 22
#define OBJECT_1_2 21
#define OBJECT_1_1 20
#define OBJECT_1_0 19
#define EXECUTE_CACHE_1_11 13
#define EXECUTE_CACHE_1_9 15
#define EXECUTE_CACHE_1_7 17
#define FREE_REFERENCES_LABEL_1_0 12
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_1_4);
      goto lap_syntax_instruction_5;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lap_syntax_instruction_9)
DEFLABEL (lap_syntax_instruction_5)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_14;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;

DEFLABEL (label_11)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_12)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_10);
  goto label_11;

DEFLABEL (label_14)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_6 5
#define LABEL_2_7 7
#define LABEL_2_5 9
#define LABEL_2_9 11
#define LABEL_2_11 13
#define ENVIRONMENT_LABEL_2_3 27
#define DEBUGGING_LABEL_2_2 26
#define OBJECT_2_2 25
#define OBJECT_2_1 24
#define OBJECT_2_0 23
#define EXECUTE_CACHE_2_12 15
#define EXECUTE_CACHE_2_10 17
#define EXECUTE_CACHE_2_8 19
#define FREE_REFERENCE_2_0 22
#define FREE_REFERENCES_LABEL_2_0 14
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto instruction_lookup_5;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (instruction_lookup_12)
DEFLABEL (instruction_lookup_5)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_21;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_20)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_19;
  Wrd18 = Wrd22;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_14;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (label_14)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_9)
  (Wrd7.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_15)
  (Wrd16.Obj) = (current_block [OBJECT_2_1]);
  (Rsp [0]) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_17;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_10)
  (Wrd17.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_7])), (Wrd19.pObj));

DEFLABEL (label_8)
  (Wrd18.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_6 5
#define LABEL_3_5 7
#define ENVIRONMENT_LABEL_3_3 14
#define DEBUGGING_LABEL_3_2 13
#define EXECUTE_CACHE_3_7 9
#define FREE_REFERENCE_3_0 12
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_3_4);
      goto add_instructionB_1;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_instructionB_5)
DEFLABEL (add_instructionB_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_7;
  Wrd10 = Wrd14;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_6])), (Wrd11.pObj));

DEFLABEL (label_3)
  (Wrd10.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_7 5
#define LABEL_4_5 7
#define LABEL_4_8 9
#define LABEL_4_13 11
#define LABEL_4_9 13
#define LABEL_4_11 15
#define LABEL_4_12 17
#define ENVIRONMENT_LABEL_4_3 35
#define DEBUGGING_LABEL_4_2 34
#define OBJECT_4_8 33
#define OBJECT_4_7 32
#define OBJECT_4_6 31
#define OBJECT_4_5 30
#define OBJECT_4_4 29
#define OBJECT_4_3 28
#define OBJECT_4_2 27
#define OBJECT_4_1 26
#define OBJECT_4_0 25
#define EXECUTE_CACHE_4_10 19
#define EXECUTE_CACHE_4_6 21
#define FREE_REFERENCE_4_0 24
#define FREE_REFERENCES_LABEL_4_0 18
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd53;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd48;
  machine_word Wrd45;
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
      goto integer_syntaxer_11;

    case 1:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_4_13);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_4_12);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integer_syntaxer_16)
DEFLABEL (integer_syntaxer_11)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_4_0]);
  (Wrd48.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd48.Lng))))
    goto label_27;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd45.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_26;

DEFLABEL (label_25)
  (Wrd13.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_17;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_17)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_19;
  (Wrd15.Obj) = (current_block [OBJECT_4_4]);
  goto label_18;

DEFLABEL (label_19)
  (Wrd15.Obj) = (current_block [OBJECT_4_3]);

DEFLABEL (label_18)
DEFLABEL (label_24)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_21;

DEFLABEL (label_20)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_4_5]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_4_7]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_23;
  Wrd38 = Wrd42;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 2);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_12);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (Wrd9.Obj) = (current_block [OBJECT_4_7]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_4_8]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_13])), (Wrd39.pObj));

DEFLABEL (label_13)
  (Wrd38.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_26)
  Rsp = (& (Rsp [2]));
  goto label_21;

DEFLABEL (label_27)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_26;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_5 3
#define LABEL_5_4 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define ENVIRONMENT_LABEL_5_3 21
#define DEBUGGING_LABEL_5_2 20
#define OBJECT_5_6 19
#define OBJECT_5_5 18
#define OBJECT_5_4 17
#define OBJECT_5_3 16
#define OBJECT_5_2 15
#define OBJECT_5_1 14
#define OBJECT_5_0 13
#define EXECUTE_CACHE_5_8 11
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd40;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd35;
  machine_word Wrd32;
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
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_5_4);
      goto syntax_evaluation_7;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (syntax_evaluation_11)
DEFLABEL (syntax_evaluation_7)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_5_0]);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd35.Lng))))
    goto label_20;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd32.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_19;

DEFLABEL (label_18)
  (Wrd13.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_12;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_12)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_14;
  (Wrd15.Obj) = (current_block [OBJECT_5_4]);
  goto label_13;

DEFLABEL (label_14)
  (Wrd15.Obj) = (current_block [OBJECT_5_3]);

DEFLABEL (label_13)
DEFLABEL (label_17)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd30.Obj);
  (Rsp [1]) = (Wrd29.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_16)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_5_5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_5_6]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  Rsp = (& (Rsp [2]));
  goto label_15;

DEFLABEL (label_20)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 11
#define DEBUGGING_LABEL_6_2 10
#define OBJECT_6_0 9
#define EXECUTE_CACHE_6_6 7
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_6_4);
      goto optimize_group_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optimize_group_4)
DEFLABEL (optimize_group_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (lambda_5)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_6_5);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd11.Obj) = (current_block [OBJECT_6_0]);
  (Wrd12.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  goto label_6;

DEFLABEL (label_7)
  Rvl = (Rsp [0]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_5 3
#define LABEL_7_4 5
#define LABEL_7_6 7
#define LABEL_7_7 9
#define LABEL_7_8 11
#define TAG_7_9 4
#define LABEL_7_15 13
#define LABEL_7_16 15
#define LABEL_7_11 17
#define LABEL_7_18 19
#define LABEL_7_13 21
#define LABEL_7_17 23
#define LABEL_7_19 25
#define LABEL_7_20 27
#define LABEL_7_21 29
#define LABEL_7_22 31
#define LABEL_7_23 33
#define LABEL_7_24 35
#define LABEL_7_25 37
#define ENVIRONMENT_LABEL_7_3 64
#define DEBUGGING_LABEL_7_2 63
#define OBJECT_7_17 62
#define OBJECT_7_16 61
#define OBJECT_7_15 60
#define OBJECT_7_14 59
#define OBJECT_7_13 58
#define OBJECT_7_12 57
#define OBJECT_7_11 56
#define OBJECT_7_10 55
#define OBJECT_7_9 54
#define OBJECT_7_8 53
#define OBJECT_7_7 52
#define OBJECT_7_6 51
#define OBJECT_7_5 50
#define OBJECT_7_4 49
#define OBJECT_7_3 48
#define OBJECT_7_2 47
#define OBJECT_7_1 46
#define OBJECT_7_0 45
#define EXECUTE_CACHE_7_14 39
#define EXECUTE_CACHE_7_12 41
#define EXECUTE_CACHE_7_10 43
#define FREE_REFERENCES_LABEL_7_0 38
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd40;
  machine_word Wrd25;
  machine_word Wrd11;
  machine_word Wrd22;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd49;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd44;
  machine_word Wrd41;
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
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_7_4);
      goto variable_width_expression_syntaxer_52;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_54;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_24;

    case 4:
      current_block = (Rpc - LABEL_7_8);
      goto lambda_60;

    case 5:
      current_block = (Rpc - LABEL_7_15);
      goto label_55;

    case 6:
      current_block = (Rpc - LABEL_7_16);
      goto label_56;

    case 7:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_28;

    case 8:
      current_block = (Rpc - LABEL_7_18);
      goto label_57;

    case 9:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_7_17);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_7_19);
      goto continuation_43;

    case 12:
      current_block = (Rpc - LABEL_7_20);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_7_21);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_7_22);
      goto continuation_38;

    case 15:
      current_block = (Rpc - LABEL_7_23);
      goto continuation_5;

    case 16:
      current_block = (Rpc - LABEL_7_24);
      goto continuation_33;

    case 17:
      current_block = (Rpc - LABEL_7_25);
      goto continuation_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (variable_width_expression_syntaxer_59)
DEFLABEL (variable_width_expression_syntaxer_52)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_7_0]);
  (Wrd44.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd44.Lng))))
    goto label_71;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_70;

DEFLABEL (label_69)
  (Wrd13.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_61;
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_61)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_63;
  (Wrd15.Obj) = (current_block [OBJECT_7_4]);
  goto label_62;

DEFLABEL (label_63)
  (Wrd15.Obj) = (current_block [OBJECT_7_3]);

DEFLABEL (label_62)
DEFLABEL (label_68)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_67;

DEFLABEL (label_66)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (* (--Rsp)) = Rvl;
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd9.uLng) == 1))
    goto label_65;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_64)
  (Wrd17.Obj) = (current_block [OBJECT_7_7]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_7_11]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_7_19);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_7_7]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_22]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_7_10]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_7_22);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_7_7]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_7_13]);
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
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd22.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_24]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_7_10]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_7_24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_7_7]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_7_16]);
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
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd22.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd29.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_25]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_7_17]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_7_25);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_9]), 1);

DEFLABEL (label_57)
  (Wrd5.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd30.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_8])));
  Rhp += 2;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd30.pObj)));
  Wrd33 = Wrd30;
  (Wrd34.Obj) = (Rsp [4]);
  ((Wrd33.pObj) [2]) = (Wrd34.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  ((Wrd33.pObj) [3]) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_13);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_7_7]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_7_12]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_20);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_70)
  Rsp = (& (Rsp [2]));
  goto label_66;

DEFLABEL (label_71)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_54)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  goto label_70;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;
  goto label_66;

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_7_8);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_75;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_74)
  (Wrd17.Obj) = (current_block [OBJECT_7_7]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_7_8]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_73;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [0]);

DEFLABEL (label_72)
  (Wrd38.Obj) = (current_block [OBJECT_7_7]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [2]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_7_10]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_7_17);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.Obj) = (current_block [OBJECT_7_7]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_7_13]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd24.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_21]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_7_14]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_7_21);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_23]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_7_15]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_23);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_9]), 1);

DEFLABEL (label_56)
  (Wrd26.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_6]), 1);

DEFLABEL (label_55)
  (Wrd5.Obj) = Rvl;
  goto label_74;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_5 3
#define LABEL_8_4 5
#define LABEL_8_6 7
#define LABEL_8_7 9
#define LABEL_8_10 11
#define LABEL_8_9 13
#define ENVIRONMENT_LABEL_8_3 25
#define DEBUGGING_LABEL_8_2 24
#define OBJECT_8_6 23
#define OBJECT_8_5 22
#define OBJECT_8_4 21
#define OBJECT_8_3 20
#define OBJECT_8_2 19
#define OBJECT_8_1 18
#define OBJECT_8_0 17
#define EXECUTE_CACHE_8_8 15
#define FREE_REFERENCES_LABEL_8_0 14
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd49;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd44;
  machine_word Wrd41;
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
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_8_4);
      goto syntax_variable_width_expression_8;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (syntax_variable_width_expression_13)
DEFLABEL (syntax_variable_width_expression_8)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_8_0]);
  (Wrd44.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd44.Lng))))
    goto label_25;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_24;

DEFLABEL (label_23)
  (Wrd13.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_14;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_14)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_16;
  (Wrd15.Obj) = (current_block [OBJECT_8_4]);
  goto label_15;

DEFLABEL (label_16)
  (Wrd15.Obj) = (current_block [OBJECT_8_3]);

DEFLABEL (label_15)
DEFLABEL (label_22)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_18;

DEFLABEL (label_17)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_8_5]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 1))
    goto label_21;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_20)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_19;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  Rvl = ((Wrd8.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_21)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_24)
  Rsp = (& (Rsp [2]));
  goto label_18;

DEFLABEL (label_25)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_24;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_5 3
#define LABEL_9_4 5
#define LABEL_9_6 7
#define LABEL_9_7 9
#define LABEL_9_8 11
#define LABEL_9_9 13
#define LABEL_9_10 15
#define LABEL_9_11 17
#define LABEL_9_12 19
#define LABEL_9_13 21
#define LABEL_9_14 23
#define LABEL_9_15 25
#define LABEL_9_16 27
#define LABEL_9_17 29
#define ENVIRONMENT_LABEL_9_3 40
#define DEBUGGING_LABEL_9_2 39
#define OBJECT_9_3 38
#define OBJECT_9_2 37
#define OBJECT_9_1 36
#define OBJECT_9_0 35
#define EXECUTE_CACHE_9_19 31
#define EXECUTE_CACHE_9_18 33
#define FREE_REFERENCES_LABEL_9_0 30
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd120;
  machine_word Wrd112;
  machine_word Wrd114;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd106;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd124;
  machine_word Wrd122;
  machine_word Wrd96;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd91;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd128;
  machine_word Wrd126;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_9_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_9_4);
      goto choose_clause_18;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_9_8);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_9_9);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_9_10);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_9_11);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_9_12);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_9_13);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_9_14);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_9_15);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_9_16);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_9_17);
      goto label_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (choose_clause_33)
DEFLABEL (choose_clause_18)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_60;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_19]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_5);

DEFLABEL (label_60)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_59;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [0]);

DEFLABEL (label_58)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_57;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_56)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_55;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_54)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_53;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd35.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_52)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_51;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_50)
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_49;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd49.Obj) = ((Wrd51.pObj) [0]);

DEFLABEL (label_48)
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_47;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd58.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_46)
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_45;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd65.Obj) = ((Wrd66.pObj) [1]);

DEFLABEL (label_44)
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_43;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (* (--Rsp)) = (Wrd73.Obj);

DEFLABEL (label_42)
  (Wrd79.Obj) = (Rsp [0]);
  if ((Wrd79.Obj) == (current_block [OBJECT_9_2]))
    goto label_40;
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd82.uLng) == 26))
    goto label_41;
  (Wrd83.Obj) = (Rsp [2]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 26))
    goto label_41;
  (Wrd126.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  (Wrd128.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  if ((Wrd126.Lng) > (Wrd128.Lng))
    goto label_36;

DEFLABEL (label_40)
  (Wrd91.Obj) = (Rsp [1]);
  if ((Wrd91.Obj) == (current_block [OBJECT_9_2]))
    goto label_35;
  (Wrd93.Obj) = (Rsp [2]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd94.uLng) == 26))
    goto label_39;
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd96.uLng) == 26))
    goto label_39;
  (Wrd122.Lng) = (FIXNUM_TO_LONG (Wrd93.Obj));
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  if ((Wrd122.Lng) > (Wrd124.Lng))
    goto label_36;

DEFLABEL (label_35)
  Rsp = (& (Rsp [2]));
  Rsp = (& (Rsp [1]));
  (Wrd108.Obj) = (Rsp [0]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd109.uLng) == 1))
    goto label_34;
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  Rvl = ((Wrd106.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_34)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_36)
  Rsp = (& (Rsp [2]));
  (Wrd115.Obj) = (Rsp [1]);
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if (! ((Wrd116.uLng) == 1))
    goto label_38;
  (Wrd114.pObj) = (OBJECT_ADDRESS (Wrd115.Obj));
  (Wrd112.Obj) = ((Wrd114.pObj) [1]);

DEFLABEL (label_37)
  (Rsp [1]) = (Wrd112.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_18]));

DEFLABEL (label_38)
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_31)
  (Wrd112.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd97.Obj) = (Rsp [2]);
  (Wrd98.Obj) = (Rsp [1]);
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_36;

DEFLABEL (label_41)
  (Wrd85.Obj) = (Rsp [0]);
  (Wrd86.Obj) = (Rsp [2]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  goto label_36;

DEFLABEL (label_43)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_27)
  (Wrd65.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_26)
  (Wrd58.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_25)
  (Wrd49.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_23)
  (Wrd35.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_22)
  (Wrd28.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_21)
  (Wrd21.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_20)
  (Wrd12.Obj) = Rvl;
  goto label_58;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_9 9
#define ENVIRONMENT_LABEL_10_3 22
#define DEBUGGING_LABEL_10_2 21
#define OBJECT_10_1 20
#define OBJECT_10_0 19
#define EXECUTE_CACHE_10_11 11
#define EXECUTE_CACHE_10_10 13
#define EXECUTE_CACHE_10_8 15
#define EXECUTE_CACHE_10_7 17
#define FREE_REFERENCES_LABEL_10_0 10
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_10_4);
      goto make_coercion_name_3;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_coercion_name_6)
DEFLABEL (make_coercion_name_3)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define TAG_11_6 1
#define LABEL_11_7 7
#define LABEL_11_12 9
#define LABEL_11_9 11
#define LABEL_11_8 13
#define LABEL_11_15 15
#define LABEL_11_11 17
#define ENVIRONMENT_LABEL_11_3 31
#define DEBUGGING_LABEL_11_2 30
#define OBJECT_11_2 29
#define OBJECT_11_1 28
#define OBJECT_11_0 27
#define EXECUTE_CACHE_11_14 19
#define EXECUTE_CACHE_11_13 21
#define EXECUTE_CACHE_11_10 23
#define FREE_REFERENCE_11_0 26
#define FREE_REFERENCES_LABEL_11_0 18
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_11_4);
      goto coercion_maker_10;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto lambda_16;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_11_12);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_11_15);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (coercion_maker_15)
DEFLABEL (coercion_maker_10)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_11_5);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  (Wrd16.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_22)
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 1))
    goto label_21;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_20)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.Obj) = (current_block [OBJECT_11_0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_19;
  Wrd17 = Wrd21;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_11);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_12])), (Wrd18.pObj));

DEFLABEL (label_12)
  (Wrd17.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (Wrd5.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define ENVIRONMENT_LABEL_12_3 14
#define DEBUGGING_LABEL_12_2 13
#define OBJECT_12_1 12
#define OBJECT_12_0 11
#define EXECUTE_CACHE_12_6 9
#define FREE_REFERENCES_LABEL_12_0 8
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_12_4);
      goto coercion_size_2;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (coercion_size_6)
DEFLABEL (coercion_size_2)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_9;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_7;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd15.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_9)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_8;

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
syntax_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      goto unmake_coercion_1;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unmake_coercion_4)
DEFLABEL (unmake_coercion_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_6 5
#define LABEL_14_5 7
#define ENVIRONMENT_LABEL_14_3 17
#define DEBUGGING_LABEL_14_2 16
#define OBJECT_14_0 15
#define EXECUTE_CACHE_14_8 9
#define EXECUTE_CACHE_14_7 11
#define FREE_REFERENCE_14_0 14
#define FREE_REFERENCES_LABEL_14_0 8
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto coercion_properties_2;

    case 1:
      current_block = (Rpc - LABEL_14_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (coercion_properties_6)
DEFLABEL (coercion_properties_2)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_9;
  Wrd8 = Wrd12;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_6])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 10
#define DEBUGGING_LABEL_15_2 9
#define OBJECT_15_0 8
#define FREE_REFERENCE_15_0 7
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_15_4);
      goto lookup_coercion_0;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lookup_coercion_4)
DEFLABEL (lookup_coercion_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 2);

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define TAG_16_6 1
#define ENVIRONMENT_LABEL_16_3 8
#define DEBUGGING_LABEL_16_2 7
#define OBJECT_16_0 6
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_16_4);
      goto coerce_unsigned_integer_1;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (coerce_unsigned_integer_4)
DEFLABEL (coerce_unsigned_integer_1)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_16_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 2);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_6 5
#define LABEL_17_5 7
#define LABEL_17_8 9
#define LABEL_17_11 11
#define LABEL_17_9 13
#define TAG_17_10 5
#define LABEL_17_12 15
#define LABEL_17_13 17
#define LABEL_17_15 19
#define ENVIRONMENT_LABEL_17_3 29
#define DEBUGGING_LABEL_17_2 28
#define OBJECT_17_2 27
#define OBJECT_17_1 26
#define OBJECT_17_0 25
#define EXECUTE_CACHE_17_14 21
#define EXECUTE_CACHE_17_7 23
#define FREE_REFERENCES_LABEL_17_0 20
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd56;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd64;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto coerce_signed_integer_9;

    case 1:
      current_block = (Rpc - LABEL_17_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_17_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_17_11);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_17_9);
      goto lambda_18;

    case 6:
      current_block = (Rpc - LABEL_17_12);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_17_13);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_17_15);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (coerce_signed_integer_17)
DEFLABEL (coerce_signed_integer_9)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_22;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_22;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_21)
  (Wrd18.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (* (--Rsp)) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_20;
  if (! ((Wrd11.uLng) == 26))
    goto label_20;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd14.Lng) = ((Wrd16.Lng) + (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_20;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_19)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_9])));
  Rhp += 3;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd27 = Wrd22;
  (Wrd28.Obj) = (Rsp [2]);
  ((Wrd27.pObj) [2]) = (Wrd28.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  ((Wrd27.pObj) [3]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [0]);
  ((Wrd27.pObj) [4]) = (Wrd24.Obj);
  Rvl = (Wrd21.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_17_9);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_31;
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd64.Lng) < 0)
    goto label_29;

DEFLABEL (label_28)
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_27;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_27;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if ((Wrd37.Lng) < (Wrd41.Lng))
    goto label_25;

DEFLABEL (label_24)
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_17_1]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_17_11);
  (Wrd32.Obj) = Rvl;

DEFLABEL (label_23)
  (Rsp [1]) = (Wrd32.Obj);
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [2]);
  (Rsp [0]) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 2);

DEFLABEL (label_25)
  (Wrd32.Obj) = (Rsp [2]);

DEFLABEL (label_26)
  Rsp = (& (Rsp [1]));
  goto label_23;

DEFLABEL (label_27)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [3]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_25;

DEFLABEL (label_29)
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_30;
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [4]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_30;
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd56.Lng) = ((Wrd58.Lng) + (Wrd62.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd56.Lng)))
    goto label_30;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd56.Lng));
  goto label_26;

DEFLABEL (label_30)
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [4]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_15)
  (Wrd32.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_31)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_29;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define TAG_18_6 1
#define LABEL_18_7 7
#define TAG_18_8 2
#define LABEL_18_9 9
#define ENVIRONMENT_LABEL_18_3 12
#define DEBUGGING_LABEL_18_2 11
#define OBJECT_18_0 10
#define FREE_REFERENCES_LABEL_18_0 10
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_18_4);
      goto standard_coercion_3;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (standard_coercion_6)
DEFLABEL (standard_coercion_3)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_18_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_7])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_18_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
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

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_9);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 2);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5 3
#define LABEL_4 5
#define LABEL_7 7
#define LABEL_6 9
#define LABEL_8 11
#define LABEL_10 13
#define LABEL_11 15
#define LABEL_13 17
#define LABEL_15 19
#define LABEL_14 21
#define LABEL_16 23
#define LABEL_17 25
#define LABEL_18 27
#define LABEL_23 29
#define LABEL_19 31
#define LABEL_25 33
#define LABEL_26 35
#define LABEL_27 37
#define LABEL_28 39
#define LABEL_29 41
#define LABEL_30 43
#define LABEL_32 45
#define LABEL_20 47
#define LABEL_21 49
#define LABEL_31 51
#define LABEL_33 53
#define LABEL_34 55
#define LABEL_35 57
#define LABEL_37 59
#define LABEL_40 61
#define LABEL_39 63
#define LABEL_41 65
#define LABEL_36 67
#define LABEL_42 69
#define LABEL_43 71
#define LABEL_44 73
#define LABEL_45 75
#define ENVIRONMENT_LABEL_3 116
#define DEBUGGING_LABEL_2 115
#define PURIFICATION_ROOT 114
#define OBJECT_21 113
#define OBJECT_20 112
#define OBJECT_19 111
#define OBJECT_18 110
#define OBJECT_17 109
#define OBJECT_16 108
#define OBJECT_15 107
#define OBJECT_14 106
#define OBJECT_13 105
#define OBJECT_12 104
#define OBJECT_11 103
#define OBJECT_10 102
#define OBJECT_9 101
#define OBJECT_8 100
#define OBJECT_7 99
#define OBJECT_6 98
#define OBJECT_5 97
#define OBJECT_4 96
#define OBJECT_3 95
#define OBJECT_2 94
#define OBJECT_1 93
#define OBJECT_0 92
#define EXECUTE_CACHE_38 77
#define EXECUTE_CACHE_24 79
#define EXECUTE_CACHE_22 81
#define EXECUTE_CACHE_12 83
#define FREE_REFERENCE_2 86
#define FREE_REFERENCE_1 87
#define FREE_REFERENCE_0 88
#define GLOBAL_EXECUTE_CACHE_9 90
#define FREE_REFERENCES_LABEL_0 76
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
syntax_so_fc07cde3f94b3973 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd44;
  machine_word Wrd21;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_5);
      goto label_43;

    case 1:
      current_block = (Rpc - LABEL_4);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto label_44;

    case 3:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto label_45;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_37;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto lambda_15;

    case 12:
      current_block = (Rpc - LABEL_18);
      goto continuation_38;

    case 13:
      current_block = (Rpc - LABEL_23);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_19);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_25);
      goto label_46;

    case 16:
      current_block = (Rpc - LABEL_26);
      goto label_47;

    case 17:
      current_block = (Rpc - LABEL_27);
      goto loop1_24;

    case 18:
      current_block = (Rpc - LABEL_28);
      goto label_48;

    case 19:
      current_block = (Rpc - LABEL_29);
      goto label_50;

    case 20:
      current_block = (Rpc - LABEL_30);
      goto label_51;

    case 21:
      current_block = (Rpc - LABEL_32);
      goto label_49;

    case 22:
      current_block = (Rpc - LABEL_20);
      goto continuation_40;

    case 23:
      current_block = (Rpc - LABEL_21);
      goto continuation_39;

    case 24:
      current_block = (Rpc - LABEL_31);
      goto continuation_21;

    case 25:
      current_block = (Rpc - LABEL_33);
      goto label_52;

    case 26:
      current_block = (Rpc - LABEL_34);
      goto loop2_35;

    case 27:
      current_block = (Rpc - LABEL_35);
      goto label_53;

    case 28:
      current_block = (Rpc - LABEL_37);
      goto label_55;

    case 29:
      current_block = (Rpc - LABEL_40);
      goto label_54;

    case 30:
      current_block = (Rpc - LABEL_39);
      goto continuation_30;

    case 31:
      current_block = (Rpc - LABEL_41);
      goto label_56;

    case 32:
      current_block = (Rpc - LABEL_36);
      goto continuation_33;

    case 33:
      current_block = (Rpc - LABEL_42);
      goto label_57;

    case 34:
      current_block = (Rpc - LABEL_43);
      goto label_63;

    case 35:
      current_block = (Rpc - LABEL_44);
      goto label_64;

    case 36:
      current_block = (Rpc - LABEL_45);
      goto expression_42;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_42)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_44])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_64)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_63)
  {
    static const short sections [] =
      {
	0,
	0,
	1,
	0,
	1,
	2,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 18)
      goto label_62;
    blocks = (current_block [OBJECT_21]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_43])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_62)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_70;
  Wrd9 = Wrd13;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_68;
  Wrd8 = Wrd12;

DEFLABEL (label_67)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_66;
  Wrd8 = Wrd12;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_9]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd5.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_19]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_9]));

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd9.pObj));

DEFLABEL (label_45)
  (Wrd8.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_44)
  (Wrd8.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5])), (Wrd10.pObj));

DEFLABEL (label_43)
  (Wrd9.Obj) = Rvl;
  goto label_69;

DEFLABEL (lambda_59)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto loop1_24;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_19);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_13])))
    goto label_76;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_23);

DEFLABEL (label_76)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_75;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_74)
  if ((Wrd7.Obj) == (current_block [OBJECT_13]))
    goto label_71;
  (Wrd17.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_17]);
  (Rsp [2]) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_71)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_73;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_72)
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd29.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_73)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_47)
  (Wrd20.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 1);

DEFLABEL (label_46)
  (Wrd7.Obj) = Rvl;
  goto label_74;

DEFLABEL (loop1_60)
DEFLABEL (loop1_24)
  INTERRUPT_CHECK (26, LABEL_27);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_13]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_77;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_77)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_88;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_87)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd16.uLng) == 47)
    goto label_82;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_81;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_80)
  goto loop1_24;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_31);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_79;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_78)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_79)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_52)
  (Wrd5.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 1);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (label_82)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_86;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_85)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_84;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_83)
  (Rsp [1]) = (Wrd38.Obj);
  goto loop2_35;

DEFLABEL (label_84)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 1);

DEFLABEL (label_51)
  (Wrd38.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_48)
  (Wrd7.Obj) = Rvl;
  goto label_87;

DEFLABEL (loop2_61)
DEFLABEL (loop2_35)
  INTERRUPT_CHECK (26, LABEL_34);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_13]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_89;
  (Wrd46.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_89)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_100;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_99)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd16.uLng) == 47)
    goto label_94;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_93;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_92)
  goto loop1_24;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_39);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_91;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_90)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_91)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_56)
  (Wrd5.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (label_94)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_98;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_97)
  (Wrd41.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_36);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_96;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_95)
  (Rsp [1]) = (Wrd6.Obj);
  goto loop2_35;

DEFLABEL (label_96)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 1);

DEFLABEL (label_57)
  (Wrd6.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_53)
  (Wrd7.Obj) = Rvl;
  goto label_99;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_syntax_so_fc07cde3f94b3973 [18] =
  {
    { "syntax_so_code_1", 5, syntax_so_code_1 },
    { "syntax_so_code_2", 6, syntax_so_code_2 },
    { "syntax_so_code_3", 3, syntax_so_code_3 },
    { "syntax_so_code_4", 8, syntax_so_code_4 },
    { "syntax_so_code_5", 4, syntax_so_code_5 },
    { "syntax_so_code_6", 2, syntax_so_code_6 },
    { "syntax_so_code_7", 18, syntax_so_code_7 },
    { "syntax_so_code_8", 6, syntax_so_code_8 },
    { "syntax_so_code_9", 14, syntax_so_code_9 },
    { "syntax_so_code_10", 4, syntax_so_code_10 },
    { "syntax_so_code_11", 8, syntax_so_code_11 },
    { "syntax_so_code_12", 3, syntax_so_code_12 },
    { "syntax_so_code_13", 2, syntax_so_code_13 },
    { "syntax_so_code_14", 3, syntax_so_code_14 },
    { "syntax_so_code_15", 2, syntax_so_code_15 },
    { "syntax_so_code_16", 2, syntax_so_code_16 },
    { "syntax_so_code_17", 9, syntax_so_code_17 },
    { "syntax_so_code_18", 4, syntax_so_code_18 }
  };

int
decl_syntax_so_fc07cde3f94b3973 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_syntax_so_fc07cde3f94b3973);
  return (0);
}

DECLARE_COMPILED_CODE ("syntax.so", 37, decl_syntax_so_fc07cde3f94b3973, syntax_so_fc07cde3f94b3973)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_syntax_so_data_fc07cde3f94b3973 [2990] =
  "\x75\x23\xcb\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x08\xc1\xb9"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x08\x8e\x28\x0d\x28\x0d\xba\x28\x0d"
  "\xbb\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc"
  "\x1d\xb0\x82\x88\xc1\xbd\x0c\xb1\x0d\xbe\x24\x28\x0d\x28\xb3\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xbf\x1d\xb0\x83\x88\xb6\x24\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0d\x1c\x08\xc2\x1c\x0d\x1c"
  "\x06\x07\x02\xc2\x1c\x02\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x0d\x08\x06\x07\x02\x1b\x02\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x86\x88\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x0d\x0d\x1c\x0d\x0d\x0d\x1c\x0d\x0d\xb1\x1b"
  "\x08\xb5\x0d\x06\x07\x02\x1b\x02\x28\x0d\x28\x0d\x1c\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x0d\x06\x07"
  "\x02\x1b\x02\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x08\xb5\xb1\x28\x1b"
  "\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb5\x0c\x08\x0d\x1c\x24\x28\x0d\x28\x0d\x28\xb3\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\xb5\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x24\x28\x0d"
  "\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xc2\x1c\x22\x29\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c"
  "\x82\x28\x0d\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\xb8\x88"
  "\xb0\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9b\x0d\x0d\x0d\x0d\x9b"
  "\x07\xb1\xb5\x0c\x08\x0d\x0d\x08\x89\x1b\x0d\x1b\x0d\x1b\x1b\x1b"
  "\x1b\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x0c\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x17\x1b\x0d\xb6\x0d\x1c\x1b\x0d\x9a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x9a\x0d\xb2\x0d\x9a\x1b\x2a\xb7\x2a\xb4\x2a\x9a\x0d"
  "\xc3\x0d\x28\x0d\x26\x1b\x0d\x1b\x24\x28\x0d\x28\x0d\x28\xb3\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x59"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x62\x61\x63\x6b\x2f\x73\x79"
  "\x6e\x74\x61\x78\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x1b\x69"
  "\x6c\x6c\x65\x67\x61\x6c\x20\x69\x6e\x73\x74\x72\x75\x63\x74\x69"
  "\x6f\x6e\x20\x73\x79\x6e\x74\x61\x78\x04\x63\x61\x72\x07\x65\x71"
  "\x75\x61\x74\x65\x0e\x73\x63\x68\x65\x6d\x65\x2d\x6f\x62\x6a\x65"
  "\x63\x74\x12\x73\x63\x68\x65\x6d\x65\x2d\x65\x76\x61\x6c\x75\x61"
  "\x74\x69\x6f\x6e\x0c\x65\x6e\x74\x72\x79\x2d\x70\x6f\x69\x6e\x74"
  "\x06\x6c\x61\x62\x65\x6c\x0d\x62\x6c\x6f\x63\x6b\x2d\x6f\x66\x66"
  "\x73\x65\x74\x08\x70\x61\x64\x64\x69\x6e\x67\x04\x05\x6d\x65\x6d"
  "\x71\x03\x13\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x2d\x6c"
  "\x6f\x6f\x6b\x75\x70\x04\x06\x65\x72\x72\x6f\x72\x04\x2a\x0c\x81"
  "\x83\x02\x29\x0a\x81\x85\x02\x28\x08\x81\x83\x02\x27\x06\x81\x87"
  "\x02\x26\x04\x83\x04\x0b\x19\x02\x04\x63\x64\x72\x24\x49\x4e\x53"
  "\x54\x52\x55\x43\x54\x49\x4f\x4e\x2d\x4c\x4f\x4f\x4b\x55\x50\x3a"
  "\x20\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x6b\x65\x79\x77\x6f\x72\x64"
  "\x0d\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x73\x02\x05\x0f"
  "\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f\x67\x65\x74\x04\x04"
  "\x0f\x70\x61\x74\x74\x65\x72\x6e\x2d\x6c\x6f\x6f\x6b\x75\x70\x04"
  "\x30\x0e\x81\x85\x02\x2f\x0c\x81\x85\x02\x2e\x0a\x81\x83\x02\x2d"
  "\x08\x81\x89\x02\x2c\x06\x81\x87\x02\x2b\x04\x83\x04\x0d\x1c\x02"
  "\x02\x05\x10\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f\x70\x75"
  "\x74\x21\x02\x33\x08\x81\x85\x02\x32\x06\x81\x8b\x02\x31\x04\x84"
  "\x06\x07\x0f\x09\x02\x06\x71\x75\x6f\x74\x65\x0a\x12\x6c\x65\x78"
  "\x69\x63\x61\x6c\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x0b\x12"
  "\x73\x79\x6e\x74\x61\x78\x2d\x65\x76\x61\x6c\x75\x61\x74\x69\x6f"
  "\x6e\x0c\x0f\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f"
  "\x0d\x1b\x15\x63\x6f\x65\x72\x63\x69\x6f\x6e\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x0e\x02\x04\x13\x6d\x61\x6b\x65\x2d"
  "\x63\x6f\x65\x72\x63\x69\x6f\x6e\x2d\x6e\x61\x6d\x65\x0f\x04\x0d"
  "\x63\x6c\x6f\x73\x65\x2d\x73\x79\x6e\x74\x61\x78\x10\x03\x3b\x12"
  "\x81\x8f\x02\x3a\x10\x81\x8b\x02\x39\x0e\x81\x8b\x02\x38\x0c\x81"
  "\x93\x02\x37\x0a\x81\x83\x02\x36\x08\x81\x89\x02\x35\x06\x81\x8b"
  "\x02\x34\x04\x86\x0a\x11\x24\x11\x02\x0b\x65\x76\x61\x6c\x75\x61"
  "\x74\x69\x6f\x6e\x0f\x0d\x1b\x03\x0e\x63\x6f\x65\x72\x63\x69\x6f"
  "\x6e\x2d\x73\x69\x7a\x65\x12\x02\x3f\x0a\x81\x85\x02\x3e\x08\x81"
  "\x83\x02\x3d\x06\x84\x06\x3c\x04\x81\x85\x02\x09\x16\x13\x02\x06"
  "\x67\x72\x6f\x75\x70\x04\x18\x6f\x70\x74\x69\x6d\x69\x7a\x65\x2d"
  "\x67\x72\x6f\x75\x70\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x14\x02"
  "\x41\x06\x84\x06\x40\x04\xff\x03\x05\x0c\x15\x02\x08\x04\x6c\x65"
  "\x74\x0a\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x05\x63\x6f\x6e\x73"
  "\x16\x07\x6c\x61\x6d\x62\x64\x61\x0a\x69\x67\x6e\x6f\x72\x61\x62"
  "\x6c\x65\x21\x73\x79\x6e\x74\x61\x78\x2d\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x2d\x77\x69\x64\x74\x68\x2d\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x17\x04\x63\x61\x72\x08\x64\x65\x63\x6c\x61\x72\x65"
  "\x0a\x05\x6c\x69\x73\x74\x0f\x0d\x1b\x04\x04\x6d\x61\x70\x04\x0e"
  "\x63\x68\x6f\x6f\x73\x65\x2d\x63\x6c\x61\x75\x73\x65\x0a\x04\x10"
  "\x04\x53\x26\x81\x8d\x02\x52\x24\x81\x8d\x02\x51\x22\x81\x87\x02"
  "\x50\x20\x81\x8d\x02\x4f\x1e\x81\x89\x02\x4e\x1c\x81\x8b\x02\x4d"
  "\x1a\x81\x8d\x02\x4c\x18\x81\x89\x02\x4b\x16\x81\x8b\x02\x4a\x14"
  "\x81\x8b\x02\x49\x12\x81\x89\x02\x48\x10\x81\x87\x02\x47\x0e\x81"
  "\x85\x02\x46\x0c\x81\x85\x02\x45\x0a\x81\x89\x02\x44\x08\x81\x83"
  "\x02\x43\x06\x86\x0a\x42\x04\x81\x89\x02\x25\x41\x10\x02\x09\x1a"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x77\x69\x64\x74\x68\x2d\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x0f\x0d\x1b\x04\x0a\x02\x59"
  "\x0e\x81\x87\x02\x58\x0c\x81\x8b\x02\x57\x0a\x81\x85\x02\x56\x08"
  "\x81\x83\x02\x55\x06\x84\x06\x54\x04\x81\x85\x02\x0d\x1a\x0d\x02"
  "\x0a\x14\x56\x61\x6c\x75\x65\x20\x6f\x75\x74\x20\x6f\x66\x20\x72"
  "\x61\x6e\x67\x65\x3a\x04\x0a\x04\x03\x67\x1e\x81\x85\x02\x66\x1c"
  "\x81\x89\x02\x65\x1a\x81\x89\x02\x64\x18\x81\x87\x02\x63\x16\x81"
  "\x87\x02\x62\x14\x81\x87\x02\x61\x12\x81\x87\x02\x60\x10\x81\x85"
  "\x02\x5f\x0e\x81\x85\x02\x5e\x0c\x81\x85\x02\x5d\x0a\x81\x85\x02"
  "\x5c\x08\x81\x85\x02\x5b\x06\x84\x06\x5a\x04\x81\x85\x02\x1d\x29"
  "\x18\x02\x0b\x08\x63\x6f\x65\x72\x63\x65\x2d\x06\x2d\x62\x69\x74"
  "\x2d\x03\x0f\x73\x79\x6d\x62\x6f\x6c\x2d\x3e\x73\x74\x72\x69\x6e"
  "\x67\x03\x07\x69\x6e\x74\x65\x72\x6e\x03\x0f\x6e\x75\x6d\x62\x65"
  "\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67\x06\x0e\x73\x74\x72\x69\x6e"
  "\x67\x2d\x61\x70\x70\x65\x6e\x64\x05\x6b\x0a\x81\x8b\x02\x6a\x08"
  "\x81\x87\x02\x69\x06\x81\x85\x02\x68\x04\x84\x06\x09\x17\x19\x02"
  "\x0c\x16\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x63\x6f\x65\x72\x63\x69"
  "\x6f\x6e\x20\x74\x79\x70\x65\x16\x63\x6f\x65\x72\x63\x69\x6f\x6e"
  "\x2d\x70\x72\x6f\x70\x65\x72\x74\x79\x2d\x74\x61\x67\x1a\x02\x04"
  "\x05\x61\x73\x73\x71\x05\x08\x32\x64\x2d\x70\x75\x74\x21\x04\x04"
  "\x73\x12\x81\x89\x02\x72\x10\x81\x8b\x02\x71\x0e\x81\x8b\x02\x70"
  "\x0c\x81\x8d\x02\x6f\x0a\x81\x8d\x02\x6e\x08\x81\x87\x02\x6d\x06"
  "\x81\x87\x02\x6c\x04\x83\x04\x11\x20\x1b\x02\x0d\x03\x14\x63\x6f"
  "\x65\x72\x63\x69\x6f\x6e\x2d\x70\x72\x6f\x70\x65\x72\x74\x69\x65"
  "\x73\x1c\x02\x76\x08\x81\x83\x02\x75\x06\x81\x83\x02\x74\x04\x83"
  "\x04\x07\x0f\x1d\x02\x0e\x06\x61\x70\x70\x6c\x79\x03\x1c\x02\x78"
  "\x06\x81\x85\x02\x77\x04\x84\x06\x05\x0c\x1e\x02\x0f\x2a\x43\x4f"
  "\x45\x52\x43\x49\x4f\x4e\x2d\x50\x52\x4f\x50\x45\x52\x54\x49\x45"
  "\x53\x3a\x20\x4e\x6f\x74\x20\x61\x20\x6b\x6e\x6f\x77\x6e\x20\x63"
  "\x6f\x65\x72\x63\x69\x6f\x6e\x1a\x02\x04\x07\x32\x64\x2d\x67\x65"
  "\x74\x04\x03\x7b\x08\x81\x83\x02\x7a\x06\x81\x85\x02\x79\x04\x83"
  "\x04\x07\x12\x1f\x02\x10\x0b\x0e\x02\x7d\x06\x81\x83\x02\x7c\x04"
  "\x83\x04\x05\x0b\x0b\x02\x11\x1d\x75\x6e\x73\x69\x67\x6e\x65\x64"
  "\x2d\x69\x6e\x74\x65\x67\x65\x72\x2d\x3e\x62\x69\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x20\x7f\x06\x81\x85\x02\x7e\x04\x83\x04\x05\x21"
  "\x02\x12\x20\x20\x49\x6e\x74\x65\x67\x65\x72\x20\x74\x6f\x6f\x20"
  "\x6c\x61\x72\x67\x65\x20\x74\x6f\x20\x62\x65\x20\x65\x6e\x63\x6f"
  "\x64\x65\x64\x04\x05\x65\x78\x70\x74\x04\x03\x88\x01\x14\x81\x87"
  "\x02\x87\x01\x12\x81\x87\x02\x86\x01\x10\x81\x87\x02\x85\x01\x0e"
  "\x81\x85\x02\x84\x01\x0c\x81\x85\x02\x83\x01\x0a\x81\x85\x02\x82"
  "\x01\x08\x81\x83\x02\x81\x01\x06\x81\x85\x02\x80\x01\x04\x83\x04"
  "\x13\x1e\x22\x02\x13\x20\x8c\x01\x0a\x81\x85\x02\x8b\x01\x08\x81"
  "\x85\x02\x8a\x01\x06\x81\x85\x02\x89\x01\x04\x83\x04\x09\x0d\x20"
  "\x13\x0e\x20\x04\x22\x04\x21\x04\x0b\x04\x12\x73\x74\x61\x6e\x64"
  "\x61\x72\x64\x2d\x63\x6f\x65\x72\x63\x69\x6f\x6e\x16\x63\x6f\x65"
  "\x72\x63\x65\x2d\x73\x69\x67\x6e\x65\x64\x2d\x69\x6e\x74\x65\x67"
  "\x65\x72\x18\x63\x6f\x65\x72\x63\x65\x2d\x75\x6e\x73\x69\x67\x6e"
  "\x65\x64\x2d\x69\x6e\x74\x65\x67\x65\x72\x10\x6c\x6f\x6f\x6b\x75"
  "\x70\x2d\x63\x6f\x65\x72\x63\x69\x6f\x6e\x1e\x4f\x50\x54\x49\x4d"
  "\x49\x5a\x45\x2d\x47\x52\x4f\x55\x50\x3a\x20\x4e\x6f\x20\x63\x6f"
  "\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x09\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x0d\x6c\x61\x70\x2d\x73\x79\x6e\x74\x61\x78\x65\x72\x1c\x10"
  "\x75\x6e\x6d\x61\x6b\x65\x2d\x63\x6f\x65\x72\x63\x69\x6f\x6e\x12"
  "\x0f\x63\x6f\x65\x72\x63\x69\x6f\x6e\x2d\x6d\x61\x6b\x65\x72\x1a"
  "\x0f\x0a\x17\x23\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x77\x69\x64"
  "\x74\x68\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x73\x79"
  "\x6e\x74\x61\x78\x65\x72\x0a\x1f\x04\x1e\x04\x1d\x04\x1b\x04\x09"
  "\x43\x6f\x65\x72\x63\x69\x6f\x6e\x19\x04\x18\x06\x0d\x06\x10\x06"
  "\x0a\x14\x15\x6f\x70\x74\x69\x6d\x69\x7a\x65\x2d\x67\x72\x6f\x75"
  "\x70\x2d\x65\x61\x72\x6c\x79\x0f\x6f\x70\x74\x69\x6d\x69\x7a\x65"
  "\x2d\x67\x72\x6f\x75\x70\x22\x0c\x11\x69\x6e\x74\x65\x67\x65\x72"
  "\x2d\x73\x79\x6e\x74\x61\x78\x65\x72\x15\x04\x13\x06\x11\x04\x11"
  "\x61\x64\x64\x2d\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x21"
  "\x17\x6c\x61\x70\x3a\x73\x79\x6e\x74\x61\x78\x2d\x69\x6e\x73\x74"
  "\x72\x75\x63\x74\x69\x6f\x6e\x09\x04\x04\x04\x0f\x61\x70\x70\x65"
  "\x6e\x64\x2d\x73\x79\x6e\x74\x61\x78\x21\x11\x6c\x6f\x63\x61\x6c"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0c\x63\x6f\x6e\x73"
  "\x2d\x73\x79\x6e\x74\x61\x78\x05\x10\x64\x65\x66\x69\x6e\x65\x2d"
  "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x16\x08\x61\x70\x70\x65\x6e"
  "\x64\x21\x22\x04\x02\x1a\x6d\x61\x6b\x65\x2d\x73\x74\x72\x6f\x6e"
  "\x67\x2d\x65\x71\x2d\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x03"
  "\x0e\x2d\x3e\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x03\x04"
  "\x13\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x2d\x61\x70\x70"
  "\x65\x6e\x64\x05\x25\x4c\x80\x80\x04\x24\x4a\x81\x81\x02\x23\x48"
  "\x81\x81\x02\x22\x46\x81\x85\x02\x21\x44\x81\x85\x02\x20\x42\x81"
  "\x87\x02\x1f\x40\x81\x85\x02\x1e\x3e\x81\x87\x02\x1d\x3c\x81\x87"
  "\x02\x1c\x3a\x81\x85\x02\x1b\x38\x81\x85\x02\x1a\x36\x81\x85\x02"
  "\x19\x34\x81\x83\x02\x18\x32\x81\x85\x02\x17\x30\x81\x83\x02\x16"
  "\x2e\x81\x85\x02\x15\x2c\x81\x85\x02\x14\x2a\x81\x83\x02\x13\x28"
  "\x81\x83\x02\x12\x26\x81\x83\x02\x11\x24\x81\x87\x02\x10\x22\x81"
  "\x87\x02\x0f\x20\x81\x85\x02\x0e\x1e\x81\x87\x02\x0d\x1c\x81\x83"
  "\x02\x0c\x1a\x84\x06\x0b\x18\x81\x83\x02\x0a\x16\x81\x83\x02\x09"
  "\x14\x81\x85\x02\x08\x12\x81\x83\x02\x07\x10\x81\x85\x02\x06\x0e"
  "\x81\x83\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x83\x02\x03\x08\x81"
  "\x85\x02\x02\x06\x81\x83\x02\x01\x04\x81\x85\x02\x4b\x75";

SCHEME_OBJECT *
syntax_so_data_fc07cde3f94b3973 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_syntax_so_data_fc07cde3f94b3973 [0]))), (sizeof (prog_syntax_so_data_fc07cde3f94b3973)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_45]));
}

DECLARE_COMPILED_DATA_NS ("syntax.so", syntax_so_data_fc07cde3f94b3973)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("syntax.so", "d2a419c0e4047d61")
